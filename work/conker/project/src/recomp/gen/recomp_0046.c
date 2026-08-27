/**
 * Burnout 3 - Recompiled code chunk 46
 * Functions: 250 (0x003FB870 - 0x0040C710)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003FB870
 * Original: 0x003FB870 - 0x003FB8C5 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FB870: ;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x48);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = ebx + ebp;
    (void)0; /* cmp MEM16(esi + 0x28), LO16(edi) - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(MEM16(esi + 0x28), LO16(edi))) goto loc_003FB8BA; /* jbe: below or equal (unsigned <=) */

loc_003FB88B: ;
    goto loc_003FB890;

    /* nop */

loc_003FB890: ;
    edx = MEM32(esi + 0x24);
    eax = MEM32(edx + edi * 4);
    if (CMP_EQ(MEM32(eax), 0xFFFFFFFFu)) goto loc_003FB8B1; /* je: equal / zero */

loc_003FB89B: ;
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(eax + 0x38);
    eax = MEM32(esp + 0x10);
    ecx = ecx + ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003EDAC0(); /* call 0x003EDAC0 */

loc_003FB8AE: ;
    esp = esp + 8;

loc_003FB8B1: ;
    eax = ZX16(MEM16(esi + 0x28));
    edi++;
    if (CMP_L(edi, eax)) goto loc_003FB890; /* jl: less (signed <) */

loc_003FB8BA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(ebx + 0x98) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FB8D0
 * Original: 0x003FB8D0 - 0x003FB952 (130 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB8D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003FB8D0: ;
    PUSH32(esp, ecx);
    edx = edx - 0;
    eax = MEM32(esp + 0xC);
    if ((edx == 0)) goto loc_003FB8F6; /* je: equal / zero */

loc_003FB8DA: ;
    edx--;
    if ((edx != 0)) goto loc_003FB950; /* jne: not equal / not zero */

loc_003FB8DD: ;
    ecx = ecx + ecx * 2;
    edx = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003FB8F6: ;
    edx = ecx + ecx * 2;
    ecx = esi + edx * 2;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax) = xmm2; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_003FB950: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FB960
 * Original: 0x003FB960 - 0x003FB9B0 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB960(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003FB960: ;
    eax = MEM32(edx + 0x48);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x4C);
    edx = MEM32(ecx + 8);
    eax = eax + ecx;
    ecx = MEM32(eax + 0x94);
    esi = esi + edx;
    if (TEST_Z(ecx, ecx)) { sub_003FB9B0(); return; } /* je: equal / zero */

loc_003FB97B: ;
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003FB98A: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003FB9D0
 * Original: 0x003FB9D0 - 0x003FBA0A (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FB9D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FB9D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x48);
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = ecx + edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    edx = ecx + 0x10;
    PUSH32(esp, edi);
    MEM32(ecx + 0x94) = eax;
    edi = ecx + 0x50;
    ecx = 0x10;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_Z(eax, eax)) { sub_003FBA0A(); return; } /* je: equal / zero */

loc_003FB9FC: ;
    ecx = esp + 0xC;
    esi = edx;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003FBA07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FBA70
 * Original: 0x003FBA70 - 0x003FBA7C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBA70(void)
{

loc_003FBA70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003FBA80
 * Original: 0x003FBA80 - 0x003FBB14 (148 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBA80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FBA80: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    edx = esi;
    PUSH32(esp, 0); sub_003FE020(); /* call 0x003FE020 */

loc_003FBA94: ;
    eax = MEM32(esi + 0xC);
    MEM32(edi) = eax;
    eax = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003FBB01; /* jle: less or equal (signed <=) */

loc_003FBAA2: ;
    PUSH32(esp, ebx);

loc_003FBAA3: ;
    MEM32(edi + 4) = ebp;
    ecx = MEM32(esi + 8);
    ebx = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ecx = ecx + ebx;
    ecx = ecx + edi;
    MEM32(edi + 8) = ecx;
    eax = MEM32(esi + 0x38);
    eax = eax + ecx;
    edx = eax + 4;
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_003FBAD1; /* je: equal / zero */

loc_003FBAC7: ;
    eax = MEM32(eax + 0x28);
    MEM32(0x8281C0) = eax;
    goto loc_003FBADB;

loc_003FBAD1: ;
    MEM32(0x8281C0) = 0;

loc_003FBADB: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003FE0C0(); /* call 0x003FE0C0 */

loc_003FBAE5: ;
    ebx = MEM32(esi + 0x28);
    esp = esp + 8;
    if (TEST_Z(ebx, ebx)) goto loc_003FBAF8; /* je: equal / zero */

loc_003FBAEF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003FE570(); /* call 0x003FE570 */

loc_003FBAF5: ;
    esp = esp + 4;

loc_003FBAF8: ;
    eax = MEM32(esi + 0xC);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_003FBAA3; /* jl: less (signed <) */

loc_003FBB00: ;
    POP32(esp, ebx);

loc_003FBB01: ;
    MEM32(edi + 4) = 0;
    edx = MEM32(esi + 4);
    edx = edx + edi;
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FBB20
 * Original: 0x003FBB20 - 0x003FBB41 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBB20(void)
{

loc_003FBB20: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    edx = ecx;
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
 * sub_003FBB50
 * Original: 0x003FBB50 - 0x003FBB79 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBB50(void)
{

loc_003FBB50: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x20);
    edx = MEM32(edx + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    esi = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(edx + esi);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FBB80
 * Original: 0x003FBB80 - 0x003FBBC7 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBB80(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FBB80: ;
    eax = MEM32(ecx);
    MEM32(0x827F44) = eax;
    eax = MEM32(ecx);
    eax = eax - 0;
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_003FBBAD; /* je: equal / zero */

loc_003FBB8F: ;
    eax--;
    if ((eax != 0)) goto loc_003FBBC5; /* jne: not equal / not zero */

loc_003FBB92: ;
    edx = MEM32(0x827F40);
    eax = MEM32(0x827F3C);
    PUSH32(esp, edx);
    esi = 0x827F5C;
    PUSH32(esp, 0); sub_003FE200(); /* call 0x003FE200 */

loc_003FBBA8: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003FBBAD: ;
    eax = MEM32(0x827F40);
    PUSH32(esp, eax);
    eax = MEM32(0x827F3C);
    esi = 0x827F48;
    PUSH32(esp, 0); sub_003FE160(); /* call 0x003FE160 */

loc_003FBBC2: ;
    esp = esp + 4;

loc_003FBBC5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FBBD0
 * Original: 0x003FBBD0 - 0x003FBC06 (54 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBBD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FBBD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x827F44);
    eax = eax - 0;
    if ((eax == 0)) { sub_003FBC06(); return; } /* je: equal / zero */

loc_003FBBDE: ;
    eax--;
    if ((eax == 0)) goto loc_003FBBE9; /* je: equal / zero */

loc_003FBBE1: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003FBBE9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = edx + 0x48;
    PUSH32(esp, 6);
    PUSH32(esp, edx);
    esi = 0x827F6C;
    edi = 0x827F60;
    PUSH32(esp, 0); sub_003E0EE0(); /* call 0x003E0EE0 */

loc_003FBC00: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FBC30
 * Original: 0x003FBC30 - 0x003FBD49 (281 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBC30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FBC30: ;
    esp = esp - 0xC;
    eax = MEM32(0x827F80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 0x80;
    if (CMP_BE(eax, ebx)) goto loc_003FBD3F; /* jbe: below or equal (unsigned <=) */

loc_003FBC4F: ;
    edi = ecx;
    edi = edi - ebp;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    goto loc_003FBC60;

    /* nop */

loc_003FBC60: ;
    eax = MEM32(esp + 0x24);
    SET_LO8(ecx, MEM8(esp + 0x13));
    if (TEST_Z(MEM8(eax), LO8(ecx))) goto loc_003FBD0E; /* je: equal / zero */

loc_003FBC70: ;
    edx = MEM32(0x827F88);
    ecx = ZX16(MEM16(edx + 0x1C));
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    esi = MEM32(0x827F38);
    if (CMP_GE(ebx, ecx)) goto loc_003FBC8D; /* jge: greater or equal (signed >=) */

loc_003FBC84: ;
    ecx = MEM32(edx + 0x18);
    ecx = ecx + MEM32(esp + 0x14);
    goto loc_003FBC9D;

loc_003FBC8D: ;
    eax = ebx;
    eax = eax - ecx;
    ecx = MEM32(edx + 0x20);
    eax = eax + eax * 4;
    ecx = MEM32(ecx + eax * 4 + 0xC);
    ecx = ecx + esi;

loc_003FBC9D: ;
    edx = MEM32(ecx + 0x28);
    eax = MEM32(esi + 8);
    SET_LO16(ecx, MEM16(eax + edx + 8));
    eax = eax + edx;
    edx = MEM32(0x827F44);
    edx = edx - 0;
    eax = MEM32(eax + 4);
    if ((edx == 0)) goto loc_003FBCD5; /* je: equal / zero */

loc_003FBCB8: ;
    edx--;
    if ((edx != 0)) goto loc_003FBCFE; /* jne: not equal / not zero */

loc_003FBCBB: ;
    edi = edi + ebp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    esi = 0x827F6C;
    edi = 0x827F60;
    PUSH32(esp, 0); sub_003E0EE0(); /* call 0x003E0EE0 */

loc_003FBCD0: ;
    esp = esp + 0x10;
    goto loc_003FBCF1;

loc_003FBCD5: ;
    xmm1 = MEMF(0x827F58); /* movss */
    edi = edi + ebp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    esi = 0x827F4C;
    edi = ebp;
    PUSH32(esp, 0); sub_003E0CF0(); /* call 0x003E0CF0 */

loc_003FBCEE: ;
    esp = esp + 0xC;

loc_003FBCF1: ;
    if (CMP_EQ(eax, 2)) { sub_003FBD49(); return; } /* je: equal / zero */

loc_003FBCF6: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_003FBD0E; /* jne: not equal / not zero */

loc_003FBCFE: ;
    eax = MEM32(esp + 0x24);
    SET_LO8(edx, MEM8(esp + 0x13));
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax) = LO8(ecx);

loc_003FBD0E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    SET_LO8(eax, LO8(eax) >> 1);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003FBD25; /* jne: not equal / not zero */

loc_003FBD1C: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 1;
    MEM8(esp + 0x13) = 0x80;

loc_003FBD25: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(0x827F80);
    edx = edx + 0x2C;
    ebx++;
    ebp++;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_B(ebx, eax)) goto loc_003FBC60; /* jb: below (unsigned <) */

loc_003FBD3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003FBD60
 * Original: 0x003FBD60 - 0x003FBE5B (251 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBD60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FBD60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(ebp, ebp)) goto loc_003FBE59; /* je: equal / zero */

loc_003FBD6D: ;
    eax = MEM32(0x827F38);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    eax = MEM32(0x827F90);
    ebx = ebx + ecx;
    ecx = MEM32(0x827F98);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x827F8C);
    esi = edi;
    edi = edi + ecx;
    edx = ecx;
    ecx = ecx >> 2;
    eax++;
    MEM32(0x827F90) = eax;
    MEM32(0x827F8C) = edi;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(0x827F88);
    if (TEST_Z(eax, eax)) goto loc_003FBDDD; /* je: equal / zero */

loc_003FBDB5: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_003FBB80(); /* call 0x003FBB80 */

loc_003FBDBD: ;
    eax = MEM32(0x827F8C);
    ecx = MEM32(0x827F80);
    eax++;
    edx = ecx + eax;
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    ecx++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FBC30(); /* call 0x003FBC30 */

loc_003FBDD6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003FBE37; /* jne: not equal / not zero */

loc_003FBDDD: ;
    eax = MEM32(ebp);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003FBE1E; /* je: equal / zero */

loc_003FBDE5: ;
    eax--;
    if ((eax != 0)) goto loc_003FBE37; /* jne: not equal / not zero */

loc_003FBDE8: ;
    esi = 0; /* xor self */
    if (CMP_BE(MEM16(ebp + 0x14), LO16(esi))) goto loc_003FBE37; /* jbe: below or equal (unsigned <=) */

loc_003FBDF0: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + esi * 4);
    edi = MEM32(0x827F78);
    eax = ecx;
    ecx = ecx & 7;
    eax = eax >> 3;
    SET_LO8(ebx, MEM8(edi + eax));
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(edi + eax) = LO8(ebx);
    eax = ZX16(MEM16(ebp + 0x14));
    esi++;
    if (CMP_L(esi, eax)) goto loc_003FBDF0; /* jl: less (signed <) */

loc_003FBE1C: ;
    goto loc_003FBE37;

loc_003FBE1E: ;
    esi = ebp + 0xC;
    edi = 8;

loc_003FBE26: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003FBD60(); /* call 0x003FBD60 */

loc_003FBE2E: ;
    esp = esp + 4;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_003FBE26; /* jne: not equal / not zero */

loc_003FBE37: ;
    ecx = MEM32(0x827F90);
    eax = MEM32(0x827F8C);
    edx = MEM32(0x827F98);
    POP32(esp, edi);
    ecx--;
    eax = eax - edx;
    POP32(esp, esi);
    MEM32(0x827F90) = ecx;
    MEM32(0x827F8C) = eax;
    POP32(esp, ebx);

loc_003FBE59: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FBE60
 * Original: 0x003FBE60 - 0x003FBFC6 (358 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBE60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FBE60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(ebp, ebp)) goto loc_003FBFC4; /* je: equal / zero */

loc_003FBE6D: ;
    eax = MEM32(0x827F38);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    eax = MEM32(0x827F90);
    ebx = ebx + ecx;
    ecx = MEM32(0x827F98);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x827F8C);
    esi = edi;
    edi = edi + ecx;
    edx = ecx;
    ecx = ecx >> 2;
    eax++;
    MEM32(0x827F90) = eax;
    MEM32(0x827F8C) = edi;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_003FBB80(); /* call 0x003FBB80 */

loc_003FBEB4: ;
    ecx = MEM32(0x827F88);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x827F8C);
    ebx = MEM32(ebx);
    esi = eax;
    if (TEST_Z(ecx, ecx)) goto loc_003FBF06; /* je: equal / zero */

loc_003FBEC7: ;
    ecx = MEM32(0x827F80);
    eax++;
    edx = ecx + eax;
    PUSH32(esp, edx);
    ecx = ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FBC30(); /* call 0x003FBC30 */

loc_003FBEDB: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003FBF06; /* je: equal / zero */

loc_003FBEE2: ;
    ecx = MEM32(0x827F90);
    eax = MEM32(0x827F8C);
    edx = MEM32(0x827F98);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    eax = eax - edx;
    POP32(esp, ebx);
    MEM32(0x827F90) = ecx;
    MEM32(0x827F8C) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003FBF06: ;
    edx = MEM32(0x827F7C);
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_003FBBD0(); /* call 0x003FBBD0 */

loc_003FBF15: ;
    if (TEST_Z(eax, eax)) goto loc_003FBFA1; /* je: equal / zero */

loc_003FBF1D: ;
    ecx = MEM32(ebp);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_003FBF62; /* je: equal / zero */

loc_003FBF25: ;
    ecx--;
    if ((ecx != 0)) goto loc_003FBFA1; /* jne: not equal / not zero */

loc_003FBF2C: ;
    esi = 0; /* xor self */
    if (CMP_BE(MEM16(ebp + 0x14), LO16(esi))) goto loc_003FBFA1; /* jbe: below or equal (unsigned <=) */

loc_003FBF34: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + esi * 4);
    edi = MEM32(0x827F78);
    eax = ecx;
    ecx = ecx & 7;
    eax = eax >> 3;
    SET_LO8(ebx, MEM8(edi + eax));
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(edi + eax) = LO8(ebx);
    eax = ZX16(MEM16(ebp + 0x14));
    esi++;
    if (CMP_L(esi, eax)) goto loc_003FBF34; /* jl: less (signed <) */

loc_003FBF60: ;
    goto loc_003FBFA1;

loc_003FBF62: ;
    eax--;
    if ((eax == 0)) goto loc_003FBF83; /* je: equal / zero */

loc_003FBF65: ;
    eax--;
    if ((eax != 0)) goto loc_003FBFA1; /* jne: not equal / not zero */

loc_003FBF68: ;
    esi = ebp + 0xC;
    edi = 8;

loc_003FBF70: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003FBD60(); /* call 0x003FBD60 */

loc_003FBF78: ;
    esp = esp + 4;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_003FBF70; /* jne: not equal / not zero */

loc_003FBF81: ;
    goto loc_003FBFA1;

loc_003FBF83: ;
    esi = ebp + 0xC;
    edi = 8;
    goto loc_003FBF90;

    /* nop */

loc_003FBF90: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003FBE60(); /* call 0x003FBE60 */

loc_003FBF98: ;
    esp = esp + 4;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_003FBF90; /* jne: not equal / not zero */

loc_003FBFA1: ;
    edx = MEM32(0x827F90);
    ecx = MEM32(0x827F8C);
    eax = MEM32(0x827F98);
    POP32(esp, edi);
    edx--;
    ecx = ecx - eax;
    POP32(esp, esi);
    MEM32(0x827F90) = edx;
    MEM32(0x827F8C) = ecx;
    POP32(esp, ebx);

loc_003FBFC4: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FBFD0
 * Original: 0x003FBFD0 - 0x003FC043 (115 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FBFD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FBFD0: ;
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0x28);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(edx, esi)) goto loc_003FC03F; /* je: equal / zero */

loc_003FBFE0: ;
    (void)0; /* cmp MEM32(edx + 0x28), esi - flags set for next jcc */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    if (CMP_BE(MEM32(edx + 0x28), esi)) goto loc_003FC038; /* jbe: below or equal (unsigned <=) */

loc_003FBFEC: ;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, ebx);

loc_003FBFF1: ;
    ecx = ZX16(MEM16(edx + 0x1C));
    if (CMP_GE(esi, ecx)) goto loc_003FC002; /* jge: greater or equal (signed >=) */

loc_003FBFF9: ;
    eax = MEM32(edx + 0x18);
    eax = eax + MEM32(esp + 0x10);
    goto loc_003FC012;

loc_003FC002: ;
    eax = esi;
    eax = eax - ecx;
    ecx = MEM32(edx + 0x20);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xC);
    eax = eax + ebp;

loc_003FC012: ;
    eax = MEM32(eax + 0x28);
    ecx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 8));
    ebx = 0x100;
    ebx = (uint32_t)((int32_t)ebx >> LO8(ecx));
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x2C;
    SET_LO8(ebx, LO8(ebx) - 1);
    SET_LO8(ebx, ~LO8(ebx));
    MEM8(edi) = LO8(ebx);
    eax = MEM32(edx + 0x28);
    edi++;
    esi++;
    if (CMP_B(esi, eax)) goto loc_003FBFF1; /* jb: below (unsigned <) */

loc_003FC037: ;
    POP32(esp, ebx);

loc_003FC038: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = edi;
    POP32(esp, edi);

loc_003FC03F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC050
 * Original: 0x003FC050 - 0x003FC0F9 (169 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC050: ;
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0x28);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_Z(edx, edx)) goto loc_003FC0F6; /* je: equal / zero */

loc_003FC061: ;
    ecx = MEM32(edx + 0x2C);
    xmm0 = MEMF(edx + 0x30); /* movss */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esi);
    eax = MEM32(edx + 0x28);
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, 0x80);
    if (CMP_BE(eax & eax, 0)) goto loc_003FC0ED; /* jbe: below or equal (unsigned <=) */

loc_003FC08F: ;
    MEM32(esp + 0x10) = esi;

loc_003FC093: ;
    ecx = ZX16(MEM16(edx + 0x1C));
    if (CMP_GE(esi, ecx)) goto loc_003FC0A4; /* jge: greater or equal (signed >=) */

loc_003FC09B: ;
    eax = MEM32(edx + 0x18);
    eax = eax + MEM32(esp + 0x10);
    goto loc_003FC0B4;

loc_003FC0A4: ;
    eax = esi;
    eax = eax - ecx;
    ecx = eax + eax * 4;
    eax = MEM32(edx + 0x20);
    eax = MEM32(eax + ecx * 4 + 0xC);
    eax = eax + ebp;

loc_003FC0B4: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(eax + 0x28);
    xmm1 = MEMF(eax + ecx); /* movss */
    eax = eax + ecx;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    SET_LO16(ecx, MEM16(eax + 8));
    if ((xmm1 < xmm0)) goto loc_003FC0D1; /* jb: below (unsigned <) */

loc_003FC0CA: ;
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_003FC0D1; /* jbe: below or equal (unsigned <=) */

loc_003FC0CF: ;
    MEM8(edi) = MEM8(edi) | LO8(ebx);

loc_003FC0D1: ;
    SET_LO8(ebx, LO8(ebx) >> 1);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003FC0DA; /* jne: not equal / not zero */

loc_003FC0D7: ;
    edi++;
    SET_LO8(ebx, 0x80);

loc_003FC0DA: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x28);
    esi++;
    ecx = ecx + 0x2C;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(esi, eax)) goto loc_003FC093; /* jb: below (unsigned <) */

loc_003FC0ED: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003FC0F6: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC100
 * Original: 0x003FC100 - 0x003FC14E (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC100(void)
{

loc_003FC100: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x34);
    eax = MEM32(eax + edi + 0x54);
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x2C);
    MEM32(0x827F8C) = eax;
    MEM32(0x827F98) = ecx;
    MEM32(0x827F90) = 1;
    MEM32(0x827F94) = edx;
    MEM8(eax) = 0xFC;
    eax++;
    ecx = esp;
    PUSH32(esp, ecx);
    MEM32(esp + 4) = eax;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_003FBFD0(); /* call 0x003FBFD0 */

loc_003FC13D: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_003FC050(); /* call 0x003FC050 */

loc_003FC14A: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003FC150
 * Original: 0x003FC150 - 0x003FC1B3 (99 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC150(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003FC150: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi + 8);
    eax = MEM32(esi + 0x38);
    eax = eax + ecx;
    MEM32(0x827F38) = edi;
    ecx = MEM32(esi + 0x10);
    MEM32(0x827F3C) = ecx;
    xmm0 = MEMF(esi + 0x14); /* movss */
    MEMF(0x827F40) = xmm0; /* movss */
    edx = MEM32(eax);
    eax = MEM32(esp + 0xC);
    MEM32(0x827F78) = edx;
    MEM32(0x827F7C) = eax;
    eax = MEM32(esi + 0x28);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x827F88) = eax;
    if (CMP_EQ(eax, ecx)) { sub_003FC1B3(); return; } /* je: equal / zero */

loc_003FC199: ;
    ecx = MEM32(eax + 0x28);
    MEM32(0x827F80) = ecx;
    edx = MEM32(eax + 0x2C);
    MEM32(0x827F84) = edx;
    PUSH32(esp, 0); sub_003FC100(); /* call 0x003FC100 */

loc_003FC1B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC1D0
 * Original: 0x003FC1D0 - 0x003FC22F (95 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC1D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC1D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x28);
    if (TEST_Z(esi, esi)) goto loc_003FC215; /* je: equal / zero */

loc_003FC1E2: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(esi + 0x38);
    eax = eax + ecx;
    ecx = MEM32(edi + 0x88);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(edi + 0x8C);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(edi + 0x90);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(edi + 0x94);
    ecx = ebx;
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, 0); sub_003FF810(); /* call 0x003FF810 */

loc_003FC215: ;
    PUSH32(esp, edi);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_003FC150(); /* call 0x003FC150 */

loc_003FC21F: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FBE60(); /* call 0x003FBE60 */

loc_003FC228: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC230
 * Original: 0x003FC230 - 0x003FC3ED (445 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003FC230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1F4;
    edx = MEM32(0x84B868);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x34);
    PUSH32(esp, esi);
    eax = eax + MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    esi = edx + 0x50;
    ecx = 0x10;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x50);
    if (TEST_Z(ecx, ecx)) { sub_003FC3ED(); return; } /* je: equal / zero */

loc_003FC267: ;
    eax = eax + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003FC27A: ;
    SET_LO8(eax, MEM8(edx + 8));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    esi = esp + 0xB0;
    if (TEST_Z(LO8(eax), 1)) goto loc_003FC2EF; /* je: equal / zero */

loc_003FC288: ;
    xmm0 = MEMF(edx + 0xEC); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xF0); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xF4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xF8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xFC); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x100); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FAA20(); /* call 0x003FAA20 */

loc_003FC2EA: ;
    goto loc_003FC39D;

loc_003FC2EF: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_003FC357; /* je: equal / zero */

loc_003FC2F3: ;
    xmm0 = MEMF(edx + 0xEC); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xF0); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xF4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xF8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0xFC); /* movss */
    eax = esp + 0x30;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x100); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FABA0(); /* call 0x003FABA0 */

loc_003FC355: ;
    goto loc_003FC39D;

loc_003FC357: ;
    xmm0 = MEMF(edx + 0x104); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x108); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x10C); /* movss */
    ecx = esp + 0x30;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x110); /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FAE90(); /* call 0x003FAE90 */

loc_003FC39D: ;
    eax = MEM32(ebx + 0x28);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003FC3D2; /* je: equal / zero */

loc_003FC3A7: ;
    eax = MEM32(eax + 0x38);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 8);
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm1 = MEMF(esp + 0x68); /* movss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    eax = eax + ecx;
    MEMF(eax) = xmm2; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */

loc_003FC3D2: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    edi = esp + 0xB4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003FC1D0(); /* call 0x003FC1D0 */

loc_003FC3E3: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC460
 * Original: 0x003FC460 - 0x003FC48B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC460(void)
{

loc_003FC460: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 8);
    ecx = MEM32(ecx + edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x14);
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0042AED0(); /* call 0x0042AED0 */

loc_003FC487: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003FC490
 * Original: 0x003FC490 - 0x003FC49F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC490(void)
{

loc_003FC490: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 8));
    eax = eax + MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC4A0
 * Original: 0x003FC4A0 - 0x003FC50F (111 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC4A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_003FB540(); /* call 0x003FB540 */

loc_003FC4B5: ;
    edi = esi;
    PUSH32(esp, 0); sub_003FB6D0(); /* call 0x003FB6D0 */

loc_003FC4BC: ;
    eax = MEM32(esi + 0xC);
    MEM32(ebx) = eax;
    eax = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003FC4FB; /* jle: less or equal (signed <=) */

loc_003FC4CA: ;
    /* nop */

loc_003FC4D0: ;
    MEM32(ebx + 4) = ebp;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ecx = ecx + ebx;
    ecx = ecx + eax;
    MEM32(ebx + 8) = ecx;
    PUSH32(esp, 0); sub_003FB770(); /* call 0x003FB770 */

loc_003FC4E8: ;
    PUSH32(esp, esi);
    edi = ebx;
    PUSH32(esp, 0); sub_003FB7F0(); /* call 0x003FB7F0 */

loc_003FC4F0: ;
    eax = MEM32(esi + 0xC);
    esp = esp + 4;
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_003FC4D0; /* jl: less (signed <) */

loc_003FC4FB: ;
    POP32(esp, edi);
    MEM32(ebx + 4) = 0;
    edx = MEM32(esi + 4);
    POP32(esp, esi);
    edx = edx + ebx;
    POP32(esp, ebp);
    MEM32(ebx + 8) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC510
 * Original: 0x003FC510 - 0x003FC58E (126 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC510: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x28), LO16(esi) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(MEM16(ebp + 0x28), LO16(esi))) goto loc_003FC56B; /* jbe: below or equal (unsigned <=) */

loc_003FC526: ;
    PUSH32(esp, ebx);

loc_003FC527: ;
    ecx = MEM32(ebp + 0x24);
    eax = MEM32(ecx + esi * 4);
    ecx = MEM32(eax + 0x4C);
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + ecx);
    ecx = eax + eax * 4;
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + ecx * 4 + 8);
    eax = MEM32(esp + 0x20);
    edi = MEM32(eax + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    ebx = 0x80;
    ebx = (uint32_t)((int32_t)ebx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + edi));
    SET_LO8(ebx, ~LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    MEM8(eax + edi) = LO8(ecx);
    ecx = ZX16(MEM16(ebp + 0x28));
    esi++;
    if (CMP_L(esi, ecx)) goto loc_003FC527; /* jl: less (signed <) */

loc_003FC56A: ;
    POP32(esp, ebx);

loc_003FC56B: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edx + 0x18);
    esi = MEM32(eax + 0xC);
    edi = MEM32(eax + 0x10);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC590
 * Original: 0x003FC590 - 0x003FC639 (169 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC590: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x48);
    SET_LO8(eax, MEM8(edi + ebp + 0x99));
    edi = edi + ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FC5D3; /* je: equal / zero */

loc_003FC5B0: ;
    esi = MEM32(esp + 0x20);
    edx = MEM32(ebx + 0x18);
    eax = MEM32(esi + 0xC);
    edi = MEM32(esi + 0x10);
    ebp = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_003FC609; /* jbe: below or equal (unsigned <=) */

loc_003FC5C3: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax) = MEM8(eax) & LO8(edx);
    edx = MEM32(ebx + 0x18);
    eax++;
    edi++;
    ebp++;
    if (CMP_B(ebp, edx)) goto loc_003FC5C3; /* jb: below (unsigned <) */

loc_003FC5D1: ;
    goto loc_003FC609;

loc_003FC5D3: ;
    SET_LO8(eax, MEM8(edi + 0x98));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003FC5EE; /* jne: not equal / not zero */

loc_003FC5DD: ;
    PUSH32(esp, ebp);
    eax = ebx;
    esi = ecx;
    PUSH32(esp, 0); sub_003FB870(); /* call 0x003FB870 */

loc_003FC5E7: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 4;

loc_003FC5EE: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003FC510(); /* call 0x003FC510 */

loc_003FC5FB: ;
    ecx = MEM32(esp + 0x24);
    esp = esp + 0x10;
    MEM8(edi + 0x99) = 1;

loc_003FC609: ;
    edx = 0; /* xor self */
    if (CMP_BE(MEM16(ecx + 0x30), LO16(edx))) goto loc_003FC634; /* jbe: below or equal (unsigned <=) */

loc_003FC611: ;
    ecx = MEM32(ebx + 0x34);
    edi = MEM32(esi + 0x14);
    ebp = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(eax + 0x30));
    edx++;
    if (CMP_B(edx, ecx)) goto loc_003FC611; /* jb: below (unsigned <) */

loc_003FC634: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC640
 * Original: 0x003FC640 - 0x003FC6A1 (97 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC640: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    edi = MEM32(edx + edi + 0x2C);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    edx = 0; /* xor self */
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    if (CMP_BE(MEM16(esi + 0x30), LO16(edx))) goto loc_003FC69D; /* jbe: below or equal (unsigned <=) */

loc_003FC670: ;
    PUSH32(esp, ebp);

loc_003FC671: ;
    eax = MEM32(esi + 0x2C);
    edi = MEM32(eax + edx * 4);
    ecx = MEM32(edi + 0x20);
    ebp = MEM32(ebx + 8);
    edi = MEM32(edi + 0x38);
    edi = MEM32(edi + ebp);
    ebp = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    ecx = ZX16(MEM16(esi + 0x30));
    edx++;
    if (CMP_L(edx, ecx)) goto loc_003FC671; /* jl: less (signed <) */

loc_003FC69C: ;
    POP32(esp, ebp);

loc_003FC69D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC6B0
 * Original: 0x003FC6B0 - 0x003FC73A (138 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC6B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC6B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    eax = ZX8(MEM8(eax));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ZX8(LO8(ebx));
    ecx = ecx & eax;
    eax = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 8) = 2;
    if (CMP_LE(edi & edi, 0)) goto loc_003FC732; /* jle: less or equal (signed <=) */

loc_003FC6D5: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm2; /* subss */
    /* nop */

loc_003FC6E0: ;
    edx = ZX8(LO8(ecx));
    edx = edx << 4;
    xmm0 = MEMF(edx + ebp + 8); /* movss */
    xmm0 = xmm0 * MEMF(esi + 8); /* mulss */
    xmm3 = MEMF(edx + ebp + 4); /* movss */
    xmm3 = xmm3 * MEMF(esi + 4); /* mulss */
    edx = edx + ebp;
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(edx); /* movss */
    xmm3 = xmm3 * MEMF(esi); /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 - MEMF(edx + 0xC); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003FC725; /* jbe: below or equal (unsigned <=) */

loc_003FC718: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEM32(esp + 8) = 1;
    if ((xmm0 > xmm2)) { sub_003FC73A(); return; } /* ja: above (unsigned >) */

loc_003FC725: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003FC72D; /* jne: not equal / not zero */

loc_003FC72B: ;
    SET_LO8(ecx, 0); /* xor self */

loc_003FC72D: ;
    eax++;
    if (CMP_L(eax, edi)) goto loc_003FC6E0; /* jl: less (signed <) */

loc_003FC732: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FC750
 * Original: 0x003FC750 - 0x003FC975 (549 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FC750: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x24);
    eax = ZX8(MEM8(eax));
    SET_LO8(ecx, MEM8(esp + 0x18));
    PUSH32(esp, ebx);
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 2;
    MEM32(esp + 0x14) = edx;
    ebx = ebx & eax;
    eax = ZX8(LO8(ecx));
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(eax, edx)) goto loc_003FC969; /* jle: less or equal (signed <=) */

loc_003FC785: ;
    ebp = ZX16(MEM16(esp + 0x30));
    xmm0 = 0.0f; /* xorps self = zero */
    /* nop */

loc_003FC790: ;
    edi = 0; /* xor self */
    (void)0; /* cmp ebp, 4 - flags set for next jcc */
    MEM8(esp + 0x12) = LO8(edx);
    MEM8(esp + 0x13) = LO8(edx);
    if (CMP_L(ebp, 4)) goto loc_003FC8C5; /* jl: less (signed <) */

loc_003FC7A3: ;
    edx = MEM32(esp + 0x24);
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    ecx = ecx + edx;
    edx = MEM32(esp + 0x2C);
    esi = ebp + -4;
    esi = esi >> 2;
    edx = edx + 4;
    esi++;
    edi = esi * 4;
    goto loc_003FC7D0;

    /* nop */
    /* nop */

loc_003FC7D0: ;
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 8); /* mulss */
    xmm2 = MEMF(edx + -4); /* movss */
    xmm2 = xmm2 * MEMF(ecx); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 * MEMF(edx); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 - MEMF(ecx + 0xC); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003FC805; /* jbe: below or equal (unsigned <=) */

loc_003FC7FE: ;
    MEM8(esp + 0x13) = 1;
    goto loc_003FC80A;

loc_003FC805: ;
    MEM8(esp + 0x12) = 1;

loc_003FC80A: ;
    xmm1 = MEMF(edx + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 8); /* mulss */
    xmm2 = MEMF(edx + 0xC); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 4); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(edx + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 - MEMF(ecx + 0xC); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003FC840; /* jbe: below or equal (unsigned <=) */

loc_003FC839: ;
    MEM8(esp + 0x13) = 1;
    goto loc_003FC845;

loc_003FC840: ;
    MEM8(esp + 0x12) = 1;

loc_003FC845: ;
    xmm1 = MEMF(edx + 0x1C); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 8); /* mulss */
    xmm2 = MEMF(edx + 0x18); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 4); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(edx + 0x14); /* movss */
    xmm2 = xmm2 * MEMF(ecx); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 - MEMF(ecx + 0xC); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003FC87B; /* jbe: below or equal (unsigned <=) */

loc_003FC874: ;
    MEM8(esp + 0x13) = 1;
    goto loc_003FC880;

loc_003FC87B: ;
    MEM8(esp + 0x12) = 1;

loc_003FC880: ;
    xmm1 = MEMF(edx + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 8); /* mulss */
    xmm2 = MEMF(edx + 0x24); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 4); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(edx + 0x20); /* movss */
    xmm2 = xmm2 * MEMF(ecx); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 - MEMF(ecx + 0xC); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003FC8B6; /* jbe: below or equal (unsigned <=) */

loc_003FC8AF: ;
    MEM8(esp + 0x13) = 1;
    goto loc_003FC8BB;

loc_003FC8B6: ;
    MEM8(esp + 0x12) = 1;

loc_003FC8BB: ;
    edx = edx + 0x30;
    esi--;
    if ((esi != 0)) goto loc_003FC7D0; /* jne: not equal / not zero */

loc_003FC8C5: ;
    if (CMP_GE(edi, ebp)) goto loc_003FC930; /* jge: greater or equal (signed >=) */

loc_003FC8C9: ;
    ecx = MEM32(esp + 0x24);
    eax = ZX8(LO8(ebx));
    eax = eax << 4;
    esi = eax + ecx;
    eax = MEM32(esp + 0x2C);
    edx = edi + edi * 2;
    ecx = ebp;
    edx = eax + edx * 4 + 4;
    ecx = ecx - edi;
    goto loc_003FC8F0;

    /* nop */
    edi = edi;

loc_003FC8F0: ;
    xmm1 = MEMF(edx + -4); /* movss */
    xmm1 = xmm1 * MEMF(esi); /* mulss */
    xmm2 = MEMF(edx + 4); /* movss */
    xmm2 = xmm2 * MEMF(esi + 8); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esi + 4); /* movss */
    xmm2 = xmm2 * MEMF(edx); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 - MEMF(esi + 0xC); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003FC925; /* jbe: below or equal (unsigned <=) */

loc_003FC91E: ;
    MEM8(esp + 0x13) = 1;
    goto loc_003FC92A;

loc_003FC925: ;
    MEM8(esp + 0x12) = 1;

loc_003FC92A: ;
    edx = edx + 0xC;
    ecx--;
    if ((ecx != 0)) goto loc_003FC8F0; /* jne: not equal / not zero */

loc_003FC930: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    edx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(edx))) { sub_003FC975(); return; } /* je: equal / zero */

loc_003FC93A: ;
    if (CMP_EQ(MEM8(esp + 0x13), LO8(edx))) goto loc_003FC948; /* je: equal / zero */

loc_003FC940: ;
    MEM32(esp + 0x18) = 1;

loc_003FC948: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_NE(LO8(ebx), LO8(eax))) goto loc_003FC954; /* jne: not equal / not zero */

loc_003FC952: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003FC954: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_003FC790; /* jl: less (signed <) */

loc_003FC969: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003FC990
 * Original: 0x003FC990 - 0x003FCAFE (366 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FC990(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_003FC990: ;
    esp = esp - 0xA8;
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(edi, edi)) goto loc_003FCAF6; /* je: equal / zero */

loc_003FC9A1: ;
    edx = MEM32(edi + 0x28);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_003FC9DE; /* je: equal / zero */

loc_003FC9AA: ;
    ecx = MEM32(0x828060);
    ecx = MEM32(ecx + 8);
    esi = MEM32(edx + 0x38);
    xmm0 = MEMF(0x82806C); /* movss */
    ecx = ecx + esi;
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(0x828070); /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x828074); /* movss */
    MEMF(ecx + 8) = xmm0; /* movss */

loc_003FC9DE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(eax + 0x14); /* movss */
    xmm2 = xmm2 / MEMF(eax + 0x10); /* divss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm4 = MEMF(eax); /* movss */
    xmm5 = MEMF(eax + 0xC); /* movss */
    xmm6 = MEMF(eax + 4); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, 0xF0);
    xmm2 = xmm2 - xmm3; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x14); /* subss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x14); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0xF0);
    xmm0 = xmm0 - xmm6; /* subss */
    PUSH32(esp, 0x827FE0);
    esi = 0x828094;
    ebx = esp + 0x18;
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm5; /* movss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm4; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FA7F0(); /* call 0x003FA7F0 */

loc_003FCAE2: ;
    edx = MEM32(0x828060);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_003FC1D0(); /* call 0x003FC1D0 */

loc_003FCAF1: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003FCAF6: ;
    POP32(esp, edi);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_003FCB00
 * Original: 0x003FCB00 - 0x003FCB9C (156 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FCB00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FCB00: ;
    SET_LO8(eax, MEM8(0x828078));
    esp = esp - 0x14;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FCB97; /* je: equal / zero */

loc_003FCB15: ;
    PUSH32(esp, 0x827FA0);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003FCB28: ;
    edx = esp + 0xC;
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
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 8) = xmm1; /* movss */
    eax = MEM32(esi + 0x44);
    ecx = eax;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    ecx = ZX8(LO8(edx));
    edx = MEM32(0x82808C);
    eax = ZX8(MEM8(eax + edx));
    edx = MEM32(esp + 0x20);
    ecx = ecx & eax;
    eax = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003FF900(); /* call 0x003FF900 */

loc_003FCB91: ;
    esp = esp + 0xC;
    MEM32(ebp + 4) = eax;

loc_003FCB97: ;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003FCBA0
 * Original: 0x003FCBA0 - 0x003FCC06 (102 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FCBA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FCBA0: ;
    ecx = MEM32(ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    edx = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx++;
    if (CMP_NE(edx, esi)) goto loc_003FCBDC; /* jne: not equal / not zero */

loc_003FCBBA: ;
    edx = MEM32(eax + 0x38);
    eax = eax + 0x1C;
    MEM32(edi) = edx;
    MEM32(ebx) = eax;
    esi = MEM32(esi + 0x3C);
    if (TEST_Z(esi, esi)) goto loc_003FCBD2; /* je: equal / zero */

loc_003FCBCB: ;
    eax = MEM32(esi + 0x28);
    if (TEST_NZ(eax, eax)) goto loc_003FCC00; /* jne: not equal / not zero */

loc_003FCBD2: ;
    POP32(esp, esi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003FCBDC: ;
    eax = eax + 0x28;
    MEM32(edi) = edx;
    MEM32(ebx) = eax;
    esi = MEM32(esi + 0x3C);
    if (TEST_Z(esi, esi)) goto loc_003FCBD2; /* je: equal / zero */

loc_003FCBEA: ;
    eax = MEM32(esi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_003FCBD2; /* je: equal / zero */

loc_003FCBF1: ;
    eax = MEM32(edi);
    edx = MEM32(eax + 0x3C);
    eax = MEM32(edx + 0x28);
    if (TEST_Z(eax, eax)) goto loc_003FCC00; /* je: equal / zero */

loc_003FCBFD: ;
    ecx = ecx + MEM32(eax + 0x28);

loc_003FCC00: ;
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FCC10
 * Original: 0x003FCC10 - 0x003FCCA2 (146 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FCC10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FCC10: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_003FCC9C; /* je: equal / zero */

loc_003FCC1F: ;
    eax = MEM32(esi + 0x28);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003FCC9C; /* jbe: below or equal (unsigned <=) */

loc_003FCC28: ;
    edx = MEM32(0x828060);
    ebx = 0; /* xor self */

loc_003FCC30: ;
    ecx = ZX16(MEM16(esi + 0x1C));
    if (CMP_GE(edi, ecx)) goto loc_003FCC3F; /* jge: greater or equal (signed >=) */

loc_003FCC38: ;
    eax = MEM32(esi + 0x18);
    eax = eax + ebx;
    goto loc_003FCC4F;

loc_003FCC3F: ;
    eax = edi;
    eax = eax - ecx;
    ecx = MEM32(esi + 0x20);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xC);
    eax = eax + edx;

loc_003FCC4F: ;
    ecx = MEM32(edx + 8);
    ecx = ecx + MEM32(eax + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, MEMF(esi + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x30))) goto loc_003FCC91; /* jbe: below or equal (unsigned <=) */

loc_003FCC5F: ;
    eax = MEM32(esp + 0x10);
    edx = edi + ebp;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0x18));
    eax = MEM32(0x82807C);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 8));
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FC750(); /* call 0x003FC750 */

loc_003FCC83: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, 2)) { sub_003FCCA2(); return; } /* je: equal / zero */

loc_003FCC8B: ;
    edx = MEM32(0x828060);

loc_003FCC91: ;
    eax = MEM32(esi + 0x28);
    edi++;
    ebx = ebx + 0x2C;
    if (CMP_B(edi, eax)) goto loc_003FCC30; /* jb: below (unsigned <) */

loc_003FCC9C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FCCB0
 * Original: 0x003FCCB0 - 0x003FCCEC (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FCCB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FCCB0: ;
    eax = MEM32(eax + 0x40);
    ecx = eax;
    ecx = ecx & 7;
    esp = esp - 0x14;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    ecx = MEM32(0x82808C);
    eax = eax >> 3;
    PUSH32(esp, ebx);
    (void)0; /* test MEM8(eax + ecx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if (TEST_NZ(MEM8(eax + ecx), LO8(edx))) goto loc_003FCCE4; /* jne: not equal / not zero */

loc_003FCCD6: ;
    edx = MEM32(edi + 0x40);
    eax = MEM32(0x828060);
    if (CMP_NE(MEM8(eax + edx), 0)) { sub_003FCCEC(); return; } /* jne: not equal / not zero */

loc_003FCCE4: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003FCE60
 * Original: 0x003FCE60 - 0x003FD100 (672 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FCE60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FCE60: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    (void)0; /* cmp MEM16(0x82807A), LO16(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(MEM16(0x82807A), LO16(ebx))) goto loc_003FCEA2; /* jbe: below or equal (unsigned <=) */

loc_003FCE73: ;
    edi = 0; /* xor self */
    goto loc_003FCE80;

    /* nop */
    edi = edi;

loc_003FCE80: ;
    eax = MEM32(0x82807C);
    eax = eax + edi;
    PUSH32(esp, 0x827FA0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003FCE93: ;
    ecx = ZX16(MEM16(0x82807A));
    esi++;
    edi = edi + 0xC;
    if (CMP_L(esi, ecx)) goto loc_003FCE80; /* jl: less (signed <) */

loc_003FCEA2: ;
    ecx = ZX16(MEM16(0x82807A));
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 - MEMF(esp + 0x3C); /* subss */
    if (CMP_LE(ecx, ebx)) goto loc_003FD0F2; /* jle: less or equal (signed <=) */

loc_003FCEBA: ;
    xmm4 = MEMF(0x648D14); /* movss */
    edx = 1;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, ebp);

loc_003FCED0: ;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    eax = edx;
    if (CMP_NE(edx, ecx)) goto loc_003FCED8; /* jne: not equal / not zero */

loc_003FCED6: ;
    eax = 0; /* xor self */

loc_003FCED8: ;
    edi = MEM32(0x82807C);
    ecx = MEM32(esp + 0x10);
    ebp = ecx + edi;
    eax = eax + eax * 2;
    esi = ZX16(LO16(ebx));
    edi = edi + eax * 4;
    eax = MEM32(0x828080);
    esi = esi << 4;
    esi = esi + eax;
    /* comiss xmm3, MEMF(ebp + 8) - sets EFLAGS */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = edi;
    if ((xmm3 < MEMF(ebp + 8))) goto loc_003FCF2E; /* jb: below (unsigned <) */

loc_003FCF06: ;
    /* comiss xmm3, MEMF(edi + 8) - sets EFLAGS */
    if ((xmm3 < MEMF(edi + 8))) goto loc_003FCF2E; /* jb: below (unsigned <) */

loc_003FCF0C: ;
    ecx = MEM32(edi);
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    MEM32(esi) = ecx;
    MEMF(esi + 4) = xmm1; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 0xC) = xmm4; /* movss */
    goto loc_003FD0CE;

loc_003FCF2E: ;
    /* comiss xmm3, MEMF(ebp + 8) - sets EFLAGS */
    if ((xmm3 < MEMF(ebp + 8))) goto loc_003FCFE9; /* jb: below (unsigned <) */

loc_003FCF38: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003FCFE9; /* jbe: below or equal (unsigned <=) */

loc_003FCF46: ;
    edx = esp + 0x30;
    MEM32(esp + 0x1C) = edx;
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
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(ebp + 8); /* subss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 4); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ebp); /* addss */
    MEMF(esi) = xmm2; /* movss */
    MEMF(esi + 4) = xmm1; /* movss */
    MEMF(esi + 8) = xmm3; /* movss */
    MEMF(esi + 0xC) = xmm4; /* movss */
    goto loc_003FD0CA;

loc_003FCFE9: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003FD0CF; /* jbe: below or equal (unsigned <=) */

loc_003FCFF7: ;
    /* comiss xmm3, MEMF(edi + 8) - sets EFLAGS */
    if ((xmm3 < MEMF(edi + 8))) goto loc_003FD0CF; /* jb: below (unsigned <) */

loc_003FD001: ;
    eax = esp + 0x30;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    ebx++;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(edi); /* addss */
    MEMF(esi) = xmm2; /* movss */
    MEMF(esi + 4) = xmm1; /* movss */
    MEMF(esi + 8) = xmm3; /* movss */
    MEMF(esi + 0xC) = xmm4; /* movss */
    ecx = MEM32(0x828080);
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    eax = ZX16(LO16(ebx));
    eax = eax << 4;
    eax = eax + ecx;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm4; /* movss */

loc_003FD0CA: ;
    edx = MEM32(esp + 0x40);

loc_003FD0CE: ;
    ebx++;

loc_003FD0CF: ;
    edi = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(0x82807A));
    edx++;
    edi = edi + 0xC;
    eax = edx + -1;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x10) = edi;
    if (CMP_L(eax, ecx)) goto loc_003FCED0; /* jl: less (signed <) */

loc_003FD0F1: ;
    POP32(esp, ebp);

loc_003FD0F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x82807A) = LO16(ebx);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003FD100
 * Original: 0x003FD100 - 0x003FD229 (297 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD100(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_003FD100: ;
    ecx = 0; /* xor self */
    esp = esp - 0x20;
    if (CMP_BE(MEM16(0x82807A), LO16(ecx))) goto loc_003FD225; /* jbe: below or equal (unsigned <=) */

loc_003FD112: ;
    eax = esp + 0x10;
    MEM32(esp) = eax;
    edx = 0; /* xor self */
    goto loc_003FD120;

    /* nop */

loc_003FD120: ;
    eax = MEM32(0x828080);
    eax = eax + edx;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 4);
    xmm2 = MEMF(eax); /* movups */
    eax = 0x828020;
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
    eax = MEM32(esp);
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    /* addps: xmm2 += xmm4 (packed 4xfloat) */
    MEMF(eax) = xmm2; /* movups */
    xmm0 = MEMF(0x82819C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x8281A0); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    eax = MEM32(0x828084);
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x8281A4); /* movss */
    eax = eax + ecx * 8;
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x8281A8); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = ZX16(MEM16(0x82807A));
    ecx++;
    edx = edx + 0x10;
    if (CMP_L(ecx, eax)) goto loc_003FD120; /* jl: less (signed <) */

loc_003FD225: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003FD230
 * Original: 0x003FD230 - 0x003FD2B8 (136 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD230(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003FD230: ;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = MEM32(0x828084);
    xmm0 = MEMF(eax + 4); /* movss */
    eax = MEM32(eax);
    MEM32(ecx) = eax;
    MEMF(ecx + 4) = xmm0; /* movss */
    if (CMP_EQ(ecx, edx)) goto loc_003FD24F; /* je: equal / zero */

loc_003FD247: ;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;

loc_003FD24F: ;
    PUSH32(esp, esi);
    esi = 1;
    if (CMP_BE(MEM16(0x82807A), LO16(esi))) goto loc_003FD2B6; /* jbe: below or equal (unsigned <=) */

loc_003FD25E: ;
    PUSH32(esp, edi);
    /* nop */

loc_003FD260: ;
    eax = MEM32(0x828084);
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, MEMF(eax + esi * 8) - sets EFLAGS */
    eax = eax + esi * 8;
    if ((xmm0 <= MEMF(eax + esi * 8))) goto loc_003FD278; /* jbe: below or equal (unsigned <=) */

loc_003FD272: ;
    edi = MEM32(eax);
    MEM32(ecx) = edi;
    goto loc_003FD285;

loc_003FD278: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(edx) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx))) goto loc_003FD285; /* jbe: below or equal (unsigned <=) */

loc_003FD281: ;
    edi = MEM32(eax);
    MEM32(edx) = edi;

loc_003FD285: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 4))) goto loc_003FD298; /* jbe: below or equal (unsigned <=) */

loc_003FD290: ;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    goto loc_003FD2A9;

loc_003FD298: ;
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 4))) goto loc_003FD2A9; /* jbe: below or equal (unsigned <=) */

loc_003FD2A3: ;
    eax = MEM32(eax + 4);
    MEM32(edx + 4) = eax;

loc_003FD2A9: ;
    eax = ZX16(MEM16(0x82807A));
    esi++;
    if (CMP_L(esi, eax)) goto loc_003FD260; /* jl: less (signed <) */

loc_003FD2B5: ;
    POP32(esp, edi);

loc_003FD2B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FD2C0
 * Original: 0x003FD2C0 - 0x003FD372 (178 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FD2C0: ;
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    if ((xmm0 > MEMF(esi))) { sub_003FD372(); return; } /* ja: above (unsigned >) */

loc_003FD2D6: ;
    xmm0 = MEMF(edx); /* movss */
    /* comiss xmm0, MEMF(edi) - sets EFLAGS */
    if ((xmm0 > MEMF(edi))) { sub_003FD372(); return; } /* ja: above (unsigned >) */

loc_003FD2E3: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) { sub_003FD372(); return; } /* ja: above (unsigned >) */

loc_003FD2F2: ;
    xmm0 = MEMF(edx + 4); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 4))) { sub_003FD372(); return; } /* ja: above (unsigned >) */

loc_003FD2FD: ;
    MEM8(eax) = 0;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* comiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    PUSH32(esp, ebp);
    if ((xmm0 <= MEMF(edx + 4))) goto loc_003FD314; /* jbe: below or equal (unsigned <=) */

loc_003FD30C: ;
    MEM8(eax) = 4;
    ebp = MEM32(ecx + 4);
    goto loc_003FD317;

loc_003FD314: ;
    ebp = MEM32(edx + 4);

loc_003FD317: ;
    MEM32(ebx + 4) = ebp;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 4))) goto loc_003FD32D; /* jbe: below or equal (unsigned <=) */

loc_003FD325: ;
    MEM8(eax) = MEM8(eax) | 8;
    ebp = MEM32(edi + 4);
    goto loc_003FD330;

loc_003FD32D: ;
    ebp = MEM32(esi + 4);

loc_003FD330: ;
    ebx = MEM32(esp + 0x14);
    MEM32(ebx + 4) = ebp;
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, MEMF(edx) - sets EFLAGS */
    POP32(esp, ebp);
    if ((xmm0 <= MEMF(edx))) goto loc_003FD348; /* jbe: below or equal (unsigned <=) */

loc_003FD341: ;
    MEM8(eax) = MEM8(eax) | 1;
    ecx = MEM32(ecx);
    goto loc_003FD34A;

loc_003FD348: ;
    ecx = MEM32(edx);

loc_003FD34A: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(edi) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi))) goto loc_003FD367; /* jbe: below or equal (unsigned <=) */

loc_003FD359: ;
    MEM8(eax) = MEM8(eax) | 2;
    eax = MEM32(edi);
    MEM32(ebx) = eax;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003FD367: ;
    ecx = MEM32(esi);
    MEM32(ebx) = ecx;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FD380
 * Original: 0x003FD380 - 0x003FD3AD (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD380(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FD380: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_003FD3AD(); return; } /* jne: not equal / not zero */

loc_003FD389: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FD460
 * Original: 0x003FD460 - 0x003FD605 (421 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FD460: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x30);
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + ecx * 4);
    eax = MEM32(0x828060);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x40);
    esi = esi + eax;
    ecx = ecx + MEM32(ebp + 0x44);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ebx = esp + 0x28;
    edi = esp + 0x1C;
    eax = ebp;
    PUSH32(esp, 0); sub_003FCBA0(); /* call 0x003FCBA0 */

loc_003FD49B: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x58);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = ebp;
    eax = ebx;
    PUSH32(esp, 0); sub_003FCCB0(); /* call 0x003FCCB0 */

loc_003FD4BC: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_003FD5FD; /* je: equal / zero */

loc_003FD4C7: ;
    if (CMP_NE(eax, 2)) goto loc_003FD516; /* jne: not equal / not zero */

loc_003FD4CC: ;
    SET_LO8(eax, MEM8(0x828079));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FD4F6; /* je: equal / zero */

loc_003FD4D5: ;
    if (CMP_NE(MEM32(ebx), 0xFFFFFFFFu)) goto loc_003FD4F6; /* jne: not equal / not zero */

loc_003FD4DA: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    ebx = ebp;
    PUSH32(esp, 0); sub_00400180(); /* call 0x00400180 */

loc_003FD4EF: ;
    ebx = MEM32(esp + 0x18);
    esp = esp + 8;

loc_003FD4F6: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003FD610(); /* call 0x003FD610 */

loc_003FD50B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_003FD516: ;
    edx = MEM32(ebp + 0x3C);
    edi = MEM32(0x828088);
    ecx = edx;
    ecx = ecx & 7;
    eax = 0x80;
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    ecx = edx;
    ecx = ecx >> 3;
    if (TEST_NZ(MEM8(ecx + edi), LO8(eax))) goto loc_003FD577; /* jne: not equal / not zero */

loc_003FD535: ;
    ecx = edx;
    eax = edx;
    ecx = ecx & 7;
    eax = eax >> 3;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + edi) = MEM8(eax + edi) | LO8(edx);
    eax = MEM32(esp + 0x50);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003FCE60(); /* call 0x003FCE60 */

loc_003FD556: ;
    esp = esp + 4;
    if (CMP_EQ(MEM16(0x82807A), 0)) goto loc_003FD5FD; /* je: equal / zero */

loc_003FD567: ;
    PUSH32(esp, 0); sub_003FD100(); /* call 0x003FD100 */

loc_003FD56C: ;
    edx = esi + 0xC;
    ecx = esi + 4;
    PUSH32(esp, 0); sub_003FD230(); /* call 0x003FD230 */

loc_003FD577: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    edi = esi + 0xC;
    ecx = esi + 4;
    esi = MEM32(esp + 0x60);
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, 0); sub_003FD2C0(); /* call 0x003FD2C0 */

loc_003FD599: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003FD5FD; /* je: equal / zero */

loc_003FD5A0: ;
    ecx = MEM32(esp + 0x50);
    SET_LO8(edx, MEM8(esp + 0x4C));
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_003FD380(); /* call 0x003FD380 */

loc_003FD5BA: ;
    SET_LO8(eax, MEM8(0x828079));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FD5E5; /* je: equal / zero */

loc_003FD5C6: ;
    if (CMP_NE(MEM32(ebx), 0xFFFFFFFFu)) goto loc_003FD5E5; /* jne: not equal / not zero */

loc_003FD5CB: ;
    ecx = edi;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = esp + 0x38;
    ebx = ebp;
    PUSH32(esp, 0); sub_00400180(); /* call 0x00400180 */

loc_003FD5DE: ;
    ebx = MEM32(esp + 0x18);
    esp = esp + 8;

loc_003FD5E5: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003FD610(); /* call 0x003FD610 */

loc_003FD5FA: ;
    esp = esp + 0x10;

loc_003FD5FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_003FD610
 * Original: 0x003FD610 - 0x003FD6E0 (208 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FD610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x828060);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x48);
    eax = ecx;
    ecx = ecx & 7;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    eax = eax >> 3;
    edi = edi + ebp;
    ebp = MEM32(0x828090);
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + ebp) = MEM8(eax + ebp) | LO8(edx);
    ecx = MEM32(esi + 0x40);
    ebp = MEM32(0x82808C);
    eax = ecx;
    ecx = ecx & 7;
    eax = eax >> 3;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + ebp) = MEM8(eax + ebp) | LO8(edx);
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x3C);
    eax = ebp;
    PUSH32(esp, 0); sub_003FC990(); /* call 0x003FC990 */

loc_003FD667: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, 0); sub_003FCB00(); /* call 0x003FCB00 */

loc_003FD676: ;
    edi = 0; /* xor self */
    esp = esp + 8;
    if (CMP_BE(MEM16(esi + 0x34), LO16(edi))) goto loc_003FD69C; /* jbe: below or equal (unsigned <=) */

loc_003FD681: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_003FD460(); /* call 0x003FD460 */

loc_003FD690: ;
    ecx = ZX16(MEM16(esi + 0x34));
    esp = esp + 0x10;
    edi++;
    if (CMP_L(edi, ecx)) goto loc_003FD681; /* jl: less (signed <) */

loc_003FD69C: ;
    ecx = MEM32(esi + 0x40);
    edi = MEM32(0x82808C);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(edi + eax));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(edi + eax) = LO8(ecx);
    esi = MEM32(esi + 0x44);
    edi = MEM32(0x82808C);
    ecx = esi;
    ecx = ecx & 7;
    eax = esi;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    MEM8(edi + eax) = MEM8(edi + eax) | LO8(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FD6E0
 * Original: 0x003FD6E0 - 0x003FD7EF (271 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD6E0(void)
{
    uint32_t ebp;
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FD6E0: ;
    PUSH32(esp, ebx);
    edx = esi + 0x48;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = edx;
    ebx = MEM32(eax);
    edi = ecx;
    MEM32(edi) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(edi + 8) = ebx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = eax;
    eax = edx + 0x10;
    ebx = MEM32(eax);
    edi = ecx + 0x10;
    MEM32(edi) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(edi + 8) = ebx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = eax;
    eax = edx + 0x20;
    ebx = MEM32(eax);
    edi = ecx + 0x20;
    MEM32(edi) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(edi + 8) = ebx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = eax;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = edx + 0x30;
    ebx = MEM32(eax);
    edi = ecx + 0x30;
    MEM32(edi) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(edi + 8) = ebx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = eax;
    eax = ecx + 0x40;
    edx = edx + 0x50;
    edi = edx;
    ebp = MEM32(edi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    edi = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = edi;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0xC); /* subss */
    xmm1 = xmm1 - MEMF(eax + 8); /* subss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    edi = MEM32(edx);
    eax = ecx + 0x50;
    ecx = eax;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    xmm0 = MEMF(esi + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(eax + 8); /* mulss */
    xmm1 = MEMF(esi + 0x34); /* movss */
    xmm1 = xmm1 * MEMF(eax + 4); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x30); /* movss */
    xmm1 = xmm1 * MEMF(eax); /* mulss */
    POP32(esp, edi);
    POP32(esp, ebp);
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FD7F0
 * Original: 0x003FD7F0 - 0x003FD834 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD7F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FD7F0: ;
    SET_LO8(edx, MEM8(ecx + 8));
    esp = esp - 0x14;
    if (TEST_Z(LO8(edx), 1)) { sub_003FD834(); return; } /* je: equal / zero */

loc_003FD7FB: ;
    edx = MEM32(ecx + 0xEC);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xF0);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0xF4);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xF8);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0xFC);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0x100);
    MEM32(eax + 0x14) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003FD8B0
 * Original: 0x003FD8B0 - 0x003FD9C8 (280 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FD8B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FD8B0: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x48);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx + 0x4C);
    edx = edx + esi;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(0x828060) = esi;
    esi = MEM32(ecx + 0x10);
    MEM32(0x828064) = esi;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    SET_LO8(ecx, MEM8(0x84B880));
    MEMF(0x828068) = xmm0; /* movss */
    xmm0 = MEMF(eax + edi + 4); /* movss */
    eax = eax + edi;
    MEMF(0x82806C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(0x828070) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEM8(0x828078) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x84B888));
    MEM8(0x828079) = LO8(ecx);
    MEMF(0x828074) = xmm0; /* movss */
    ecx = MEM32(edx + 0x9C);
    ebp = MEM32(esp + 0x18);
    MEM32(0x82807C) = ecx;
    ecx = MEM32(edx + 0xA0);
    MEM32(0x828080) = ecx;
    ecx = MEM32(edx + 0xA4);
    MEM32(0x828084) = ecx;
    ecx = MEM32(edx + 0xA8);
    MEM32(0x828088) = ecx;
    ecx = MEM32(edx + 0xAC);
    MEM32(0x82808C) = ecx;
    eax = MEM32(eax + 0x2C);
    MEM32(0x828090) = eax;
    esi = ebx + 0x10;
    ecx = 0x10;
    edi = 0x827FA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = ebx + 0x50;
    ecx = 0x10;
    edi = 0x827FE0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(edx + 0x94);
    if (TEST_Z(eax, eax)) { sub_003FD9C8(); return; } /* je: equal / zero */

loc_003FD98F: ;
    PUSH32(esp, 0x827FA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x827FA0);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003FD99F: ;
    edx = edx + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827FE0);
    PUSH32(esp, 0x827FE0);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003FD9B2: ;
    PUSH32(esp, 0x827FE0);
    esi = 0x828094;
    eax = ebp;
    PUSH32(esp, 0); sub_003FAA20(); /* call 0x003FAA20 */

loc_003FD9C3: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_003FD9DA(); return; /* tail jmp 0x003FD9DA */

}

/**
 * sub_003FDB10
 * Original: 0x003FDB10 - 0x003FDB67 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FDB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003FDB10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x84B880));
    PUSH32(esp, edi);
    esi = esi + 0x50;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 0x10;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FDB46; /* je: equal / zero */

loc_003FDB34: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x828094);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FFAE0(); /* call 0x003FFAE0 */

loc_003FDB43: ;
    esp = esp + 8;

loc_003FDB46: ;
    SET_LO8(eax, MEM8(0x84B888));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FDB61; /* je: equal / zero */

loc_003FDB4F: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x828094);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00400360(); /* call 0x00400360 */

loc_003FDB5E: ;
    esp = esp + 8;

loc_003FDB61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FDB70
 * Original: 0x003FDB70 - 0x003FDC96 (294 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FDB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FDB70: ;
    esp = esp - 0x44;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(edi + 8);
    eax = MEM32(eax + ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_003FDC91; /* je: equal / zero */

loc_003FDB8B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x84B868);
    xmm0 = MEMF(ebx + 0xD4); /* movss */
    xmm7 = MEMF(ebx + 0xDC); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xD8); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xE0); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xE4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xE8); /* movss */
    PUSH32(esp, ebp);
    eax = esp + 0x38;
    ecx = ebx;
    MEMF(esp + 0x28) = xmm7; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FD7F0(); /* call 0x003FD7F0 */

loc_003FDBF2: ;
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_003FD8B0(); /* call 0x003FD8B0 */

loc_003FDC03: ;
    edx = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x3C);
    ebp = ecx;
    ecx = ecx >> 2;
    edx = edx + edi;
    edi = MEM32(edx + 0xA8);
    xmm0 = MEMF(esp + 0x28); /* movss */
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    ecx = ebp;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    ecx = MEM32(esi + 0x40);
    edi = MEM32(edx + 0xAC);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    xmm7 = xmm7 + xmm0; /* addss */
    edx = esp + 0x48;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    PUSH32(esp, edx);
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm7; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FD610(); /* call 0x003FD610 */

loc_003FDC85: ;
    esp = esp + 0x18;
    eax = ebx;
    PUSH32(esp, 0); sub_003FDB10(); /* call 0x003FDB10 */

loc_003FDC8F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003FDC91: ;
    POP32(esp, edi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_003FDCA0
 * Original: 0x003FDCA0 - 0x003FDDBC (284 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FDCA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003FDCA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x4C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    eax = MEM32(ebx + esi + 0x10);
    ebx = ebx + esi;
    eax = eax - 0;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_003FDD4E; /* je: equal / zero */

loc_003FDCC7: ;
    eax--;
    if ((eax != 0)) goto loc_003FDDB5; /* jne: not equal / not zero */

loc_003FDCCE: ;
    ecx = MEM32(ebx + 0x14);
    eax = ebx + 0x20;
    ebx = ebx + 0x14;
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x84B868);
    esi = eax + 0x50;
    ecx = 0x10;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(esp + 0x40); /* movss */
    ecx = MEM32(ebp + 0xC);
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    edi = ebx;
    MEMF(ebx + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FB960(); /* call 0x003FB960 */

loc_003FDD29: ;
    edx = MEM32(esp + 0xC);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edx);
    ecx = edi;
    edx = esi;
    PUSH32(esp, 0); sub_003FDEC0(); /* call 0x003FDEC0 */

loc_003FDD3D: ;
    esp = esp + 4;
    eax = edi;
    PUSH32(esp, 0); sub_003FDB70(); /* call 0x003FDB70 */

loc_003FDD47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003FDD4E: ;
    ecx = MEM32(0x84B868);
    esi = ecx + 0x50;
    eax = ebx + 0x14;
    ecx = 0x10;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(esp + 0x40); /* movss */
    ecx = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    edi = eax;
    MEMF(eax + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FB960(); /* call 0x003FB960 */

loc_003FDD8F: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    edx = ebx + 0x14;
    eax = edi;
    PUSH32(esp, 0); sub_003FDF10(); /* call 0x003FDF10 */

loc_003FDDA0: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003FDDB5; /* je: equal / zero */

loc_003FDDA7: ;
    eax = edi;
    MEM32(ebx + 0x10) = 1;
    PUSH32(esp, 0); sub_003FDB70(); /* call 0x003FDB70 */

loc_003FDDB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003FDDC0
 * Original: 0x003FDDC0 - 0x003FDEBA (250 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FDDC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FDDC0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = MEM32(edi + 0x4C);
    esi = esi + ecx;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(edi + 0x44);
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_BE(eax & eax, 0)) goto loc_003FDEB3; /* jbe: below or equal (unsigned <=) */

loc_003FDDF6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    goto loc_003FDE00;

    /* nop */

loc_003FDE00: ;
    eax = MEM32(esi + 0x2C);
    SET_LO8(eax, MEM8(edx + eax));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x24) = LO8(eax);
    ecx = edx * 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FDEA2; /* je: equal / zero */

loc_003FDE19: ;
    ecx = ecx << 2;
    MEM32(esp + 0x28) = ecx;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */

loc_003FDE22: ;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_003FDE81; /* jns: not sign (positive) */

loc_003FDE24: ;
    edx = MEM32(edi + 0x24);
    edi = MEM32(ecx + edx);
    if (CMP_EQ(MEM32(edi), 0xFFFFFFFFu)) goto loc_003FDE81; /* je: equal / zero */

loc_003FDE2F: ;
    eax = MEM32(edi + 0x4C);
    eax = MEM32(eax + ebp);
    edx = MEM32(esp + 0x14);
    esi = MEM32(ebx + 0xC);
    ecx = eax + eax * 4;
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + ecx * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    eax = eax >> 3;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + esi) = MEM8(eax + esi) | LO8(edx);
    eax = MEM32(edi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_003FDE7D; /* je: equal / zero */

loc_003FDE5F: ;
    ecx = MEM32(eax + 0x38);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ecx + edx);
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x24);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0042AED0(); /* call 0x0042AED0 */

loc_003FDE7A: ;
    esp = esp + 8;

loc_003FDE7D: ;
    SET_LO8(eax, MEM8(esp + 0x24));

loc_003FDE81: ;
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);
    SET_LO8(eax, LO8(eax) << 1);
    ecx = ecx + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x24) = LO8(eax);
    MEM32(esp + 0x28) = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003FDE22; /* jne: not equal / not zero */

loc_003FDE9A: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x18);

loc_003FDEA2: ;
    eax = MEM32(edi + 0x44);
    edx++;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_B(edx, eax)) goto loc_003FDE00; /* jb: below (unsigned <) */

loc_003FDEB2: ;
    POP32(esp, ebx);

loc_003FDEB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003FDEC0
 * Original: 0x003FDEC0 - 0x003FDF0B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FDEC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FDEC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x4C);
    esi = esi + eax;
    SET_LO8(eax, MEM8(0x84B880));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 7) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FDEDE; /* je: equal / zero */

loc_003FDED7: ;
    MEM8(0x84B880) = 0;

loc_003FDEDE: ;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_004000E0(); /* call 0x004000E0 */

loc_003FDEE8: ;
    MEM32(esi) = eax;
    SET_LO8(eax, MEM8(esp + 0xB));
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    eax = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FDF09; /* je: equal / zero */

loc_003FDEFB: ;
    MEM8(0x84B880) = LO8(eax);
    MEM16(0x828268) = 0;

loc_003FDF09: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FDF10
 * Original: 0x003FDF10 - 0x003FDFD5 (197 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FDF10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FDF10: ;
    ecx = MEM32(eax + 8);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebp = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x48);
    edi = edi + eax;
    eax = MEM32(edi + 0x94);
    ebp = ebp + ecx;
    if (TEST_Z(eax, eax)) goto loc_003FDF45; /* je: equal / zero */

loc_003FDF32: ;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003FDF41: ;
    edx = esp + 0x10;

loc_003FDF45: ;
    ebx = ZX16(MEM16(esi + 0x28));
    ecx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_003FDFAB; /* jle: less or equal (signed <=) */

loc_003FDF4F: ;
    esi = MEM32(esi + 0x24);

loc_003FDF52: ;
    eax = MEM32(esi);
    if (CMP_EQ(MEM32(eax), 0xFFFFFFFFu)) goto loc_003FDFA3; /* je: equal / zero */

loc_003FDF59: ;
    xmm0 = MEMF(eax + 4); /* movss */
    xmm6 = MEMF(edx); /* movss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm4 = MEMF(eax + 0xC); /* movss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    xmm3 = MEMF(eax + 0x14); /* movss */
    xmm5 = MEMF(eax + 0x18); /* movss */
    if ((xmm6 < xmm0)) goto loc_003FDFA3; /* jb: below (unsigned <) */

loc_003FDF80: ;
    /* comiss xmm1, xmm6 - sets EFLAGS */
    if ((xmm1 < xmm6)) goto loc_003FDFA3; /* jb: below (unsigned <) */

loc_003FDF85: ;
    xmm0 = MEMF(edx + 4); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_003FDFA3; /* jb: below (unsigned <) */

loc_003FDF8F: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 < xmm0)) goto loc_003FDFA3; /* jb: below (unsigned <) */

loc_003FDF94: ;
    xmm0 = MEMF(edx + 8); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 < xmm4)) goto loc_003FDFA3; /* jb: below (unsigned <) */

loc_003FDF9E: ;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 >= xmm0)) goto loc_003FDFC5; /* jae: above or equal (unsigned >=) */

loc_003FDFA3: ;
    ecx++;
    esi = esi + 4;
    if (CMP_L(ecx, ebx)) goto loc_003FDF52; /* jl: less (signed <) */

loc_003FDFAB: ;
    edi = MEM32(edi + 0x90);
    if (TEST_Z(edi, edi)) { sub_003FDFD5(); return; } /* je: equal / zero */

loc_003FDFB5: ;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003FDFC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003FDFE0
 * Original: 0x003FDFE0 - 0x003FE014 (52 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FDFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FDFE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = esi + 0xC;
    edi = 8;

loc_003FDFF3: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_003FE00A; /* je: equal / zero */

loc_003FDFF9: ;
    ecx = MEM32(eax);
    ecx = ecx - 0;
    if ((ecx != 0)) goto loc_003FE00A; /* jne: not equal / not zero */

loc_003FE000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FDFE0(); /* call 0x003FDFE0 */

loc_003FE007: ;
    esp = esp + 8;

loc_003FE00A: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_003FDFF3; /* jne: not equal / not zero */

loc_003FE010: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE020
 * Original: 0x003FE020 - 0x003FE0BA (154 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE020(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003FE020: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edx + 0x34);
    eax = eax + esi;
    MEMF(eax + 0x48) = xmm0; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    ecx = eax + 0x60;
    MEM32(eax + 0x50) = 0;
    MEM32(eax + 0x54) = ecx;
    eax = MEM32(edx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_003FE0A8; /* je: equal / zero */

loc_003FE097: ;
    ecx = MEM32(eax);
    ecx = ecx - 0;
    if ((ecx != 0)) goto loc_003FE0A8; /* jne: not equal / not zero */

loc_003FE09E: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FDFE0(); /* call 0x003FDFE0 */

loc_003FE0A5: ;
    esp = esp + 8;

loc_003FE0A8: ;
    edx = MEM32(edx + 0x28);
    if (TEST_Z(edx, edx)) goto loc_003FE0B8; /* je: equal / zero */

loc_003FE0AF: ;
    PUSH32(esp, edi);
    edi = edx;
    PUSH32(esp, 0); sub_003FE460(); /* call 0x003FE460 */

loc_003FE0B7: ;
    POP32(esp, edi);

loc_003FE0B8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE0C0
 * Original: 0x003FE0C0 - 0x003FE126 (102 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE0C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FE0C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_003FE124; /* je: equal / zero */

loc_003FE0C9: ;
    eax = MEM32(esi + 8);
    edx = MEM32(0x8281C0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = eax + MEM32(ebp + 8);
    ecx = eax + 4;
    MEM32(eax) = ecx;
    MEM8(ecx) = 0;
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(edx & edx, 0)) goto loc_003FE0FC; /* jbe: below or equal (unsigned <=) */

loc_003FE0E9: ;
    /* nop */

loc_003FE0F0: ;
    edi = MEM32(eax);
    MEM8(edi + ecx + 1) = 0;
    ecx++;
    if (CMP_B(ecx, edx)) goto loc_003FE0F0; /* jb: below (unsigned <) */

loc_003FE0FC: ;
    eax = MEM32(esi);
    eax = eax - 0;
    if ((eax != 0)) goto loc_003FE122; /* jne: not equal / not zero */

loc_003FE103: ;
    esi = esi + 0xC;
    edi = 8;
    goto loc_003FE110;

    /* nop */

loc_003FE110: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FE0C0(); /* call 0x003FE0C0 */

loc_003FE119: ;
    esp = esp + 8;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_003FE110; /* jne: not equal / not zero */

loc_003FE122: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_003FE124: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE130
 * Original: 0x003FE130 - 0x003FE137 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE130(void)
{

loc_003FE130: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE140
 * Original: 0x003FE140 - 0x003FE160 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE140(void)
{

loc_003FE140: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(eax + 4) = ecx;
    esi = MEM32(edx + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    esi = esi + MEM32(edx + 4);
    esi = esi + eax;
    MEM32(eax + 8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE160
 * Original: 0x003FE160 - 0x003FE1FB (155 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE160(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003FE160: ;
    esp = esp - 8;
    eax = eax - 0;
    if ((eax == 0)) goto loc_003FE18B; /* je: equal / zero */

loc_003FE168: ;
    eax--;
    if ((eax != 0)) goto loc_003FE1F7; /* jne: not equal / not zero */

loc_003FE16F: ;
    eax = MEM32(ecx + 4);
    MEM32(esi + 4) = eax;
    edx = MEM32(ecx + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(ecx + 0xC);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(ecx + 0x10);
    MEM32(esi + 0x10) = ecx;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003FE18B: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    eax = esi + 4;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    MEM32(esp) = eax;
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ZX16(MEM16(ecx + 0xA));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esi + 0x10) = xmm0; /* movss */

loc_003FE1F7: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003FE200
 * Original: 0x003FE200 - 0x003FE2EB (235 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE200(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003FE200: ;
    esp = esp - 8;
    eax = eax - 0;
    if ((eax == 0)) goto loc_003FE237; /* je: equal / zero */

loc_003FE208: ;
    eax--;
    if ((eax != 0)) goto loc_003FE2E7; /* jne: not equal / not zero */

loc_003FE20F: ;
    eax = MEM32(ecx + 4);
    MEM32(esi + 4) = eax;
    edx = MEM32(ecx + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(ecx + 0xC);
    MEM32(esi + 0xC) = eax;
    edx = MEM32(ecx + 0x10);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(ecx + 0x14);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(ecx + 0x18);
    MEM32(esi + 0x18) = ecx;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003FE237: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    eax = esi + 4;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    MEM32(esp) = eax;
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xE);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    eax = esi + 0x10;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM32(esp) = eax;
    MEMF(eax) = xmm3; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_003FE2E7: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003FE2F0
 * Original: 0x003FE2F0 - 0x003FE315 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE2F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FE2F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = ecx + MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 0x50) = eax;
    if (TEST_Z(eax, eax)) { sub_003FE315(); return; } /* je: equal / zero */

loc_003FE307: ;
    esi = ecx + 0x10;
    ecx = esp + 8;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003FE313: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE380
 * Original: 0x003FE380 - 0x003FE3E5 (101 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE380(void)
{

loc_003FE380: ;
    MEM32(0x8281C8) = 0x3FBA70;
    MEM32(0x8281CC) = 0x3FC490;
    MEM32(0x8281D0) = 0x3FC4A0;
    MEM32(0x8281D4) = 0x3FE130;
    MEM32(0x8281D8) = 0x3FB9D0;
    MEM32(0x8281DC) = 0x3FE140;
    MEM32(0x8281E0) = 0x3FC640;
    MEM32(0x8281E4) = 0x3FDCA0;
    MEM32(0x8281E8) = 0x3FC590;
    MEM32(0x8281EC) = 0x3FDDC0;
    esp += 4; return; /* ret */

}

/**
 * sub_003FE3F0
 * Original: 0x003FE3F0 - 0x003FE455 (101 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE3F0(void)
{

loc_003FE3F0: ;
    MEM32(0x8281F0) = 0x3FBA70;
    MEM32(0x8281F4) = 0x3FC490;
    MEM32(0x8281F8) = 0x3FBA80;
    MEM32(0x8281FC) = 0x3FE130;
    MEM32(0x828200) = 0x3FE2F0;
    MEM32(0x828204) = 0x3FE140;
    MEM32(0x828208) = 0x3FBB50;
    MEM32(0x82820C) = 0x3FC230;
    MEM32(0x828210) = 0x3FBB20;
    MEM32(0x828214) = 0x3FC460;
    esp += 4; return; /* ret */

}

/**
 * sub_003FE460
 * Original: 0x003FE460 - 0x003FE503 (163 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FE460: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(edi + 0x24), LO16(ebx) - flags set for next jcc */
    MEM32(esp + 4) = ebx;
    if (CMP_BE(MEM16(edi + 0x24), LO16(ebx))) goto loc_003FE500; /* jbe: below or equal (unsigned <=) */

loc_003FE472: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);

loc_003FE476: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(ecx + ebx + 0xC);
    edx = MEM32(ecx + ebx);
    eax = eax + esi;
    ecx = ecx + ebx;
    MEM32(eax) = edx;
    edx = eax + 0x2C;
    MEM32(eax + 4) = edx;
    SET_LO16(edx, MEM16(ecx + 0xA));
    MEM16(eax + 8) = LO16(edx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x28) = edx;
    eax = 0; /* xor self */
    if (CMP_BE(MEM16(ecx + 8), LO16(eax))) goto loc_003FE4E7; /* jbe: below or equal (unsigned <=) */

loc_003FE4C5: ;
    edx = 0; /* xor self */
    goto loc_003FE4D0;

    /* nop */

loc_003FE4D0: ;
    ebp = MEM32(ecx + 4);
    ebp = MEM32(edx + ebp + 0x30);
    MEM8(esi + ebp) = 0;
    ebp = ZX16(MEM16(ecx + 8));
    eax++;
    edx = edx + 0x34;
    if (CMP_L(eax, ebp)) goto loc_003FE4D0; /* jl: less (signed <) */

loc_003FE4E7: ;
    eax = MEM32(esp + 8);
    ecx = ZX16(MEM16(edi + 0x24));
    eax++;
    ebx = ebx + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_L(eax, ecx)) goto loc_003FE476; /* jl: less (signed <) */

loc_003FE4FF: ;
    POP32(esp, ebp);

loc_003FE500: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE510
 * Original: 0x003FE510 - 0x003FE56A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE510(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003FE510: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edi + 0x28);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx + edx;
    edx = ecx + 0xC;
    MEM32(ecx + 4) = edx;
    MEMF(ecx) = xmm0; /* movss */
    eax = ZX16(MEM16(edi + 8));
    eax = eax + 2;
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003FE55D; /* jle: less or equal (signed <=) */

loc_003FE532: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_003FE535: ;
    eax = MEM32(ecx + 4);
    eax = eax + esi;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    eax = ZX16(MEM16(edi + 8));
    edx++;
    eax = eax + 2;
    esi = esi + 0x10;
    if (CMP_L(edx, eax)) goto loc_003FE535; /* jl: less (signed <) */

loc_003FE55C: ;
    POP32(esp, esi);

loc_003FE55D: ;
    SET_LO16(edx, MEM16(edi + 8));
    SET_LO16(edx, LO16(edx) + 2);
    MEM16(ecx + 8) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE570
 * Original: 0x003FE570 - 0x003FE656 (230 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FE570: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx + 0x38);
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 8);
    eax = eax + MEM32(ecx + 8);
    PUSH32(esp, ebp);
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEMF(eax + 0xC) = xmm1; /* movss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    (void)0; /* cmp MEM16(ebx + 0x1C), LO16(esi) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(MEM16(ebx + 0x1C), LO16(esi))) goto loc_003FE5CA; /* jbe: below or equal (unsigned <=) */

loc_003FE5AB: ;
    ebp = 0; /* xor self */
    /* nop */

loc_003FE5B0: ;
    edi = MEM32(ebx + 0x18);
    eax = MEM32(esp + 0x14);
    edi = edi + ebp;
    PUSH32(esp, 0); sub_003FE510(); /* call 0x003FE510 */

loc_003FE5BE: ;
    edx = ZX16(MEM16(ebx + 0x1C));
    esi++;
    ebp = ebp + 0x2C;
    if (CMP_L(esi, edx)) goto loc_003FE5B0; /* jl: less (signed <) */

loc_003FE5CA: ;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM16(ebx + 0x24), LO16(edi) - flags set for next jcc */
    MEM32(esp + 0xC) = edi;
    if (CMP_BE(MEM16(ebx + 0x24), LO16(edi))) goto loc_003FE651; /* jbe: below or equal (unsigned <=) */

loc_003FE5D6: ;
    ebp = 0; /* xor self */
    goto loc_003FE5E0;

    /* nop */

loc_003FE5E0: ;
    edx = MEM32(ebx + 0x20);
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 8);
    ecx = MEM32(edx + ebp + 0x10);
    edx = edx + ebp;
    ecx = ecx + esi;
    eax = ecx + 0xC;
    MEM32(ecx + 4) = eax;
    MEMF(ecx) = xmm1; /* movss */
    eax = ZX16(MEM16(edx + 0xA));
    eax = eax + 2;
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003FE637; /* jle: less or equal (signed <=) */

loc_003FE609: ;
    /* nop */

loc_003FE610: ;
    eax = MEM32(ecx + 4);
    eax = eax + edi;
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEMF(eax + 0xC) = xmm1; /* movss */
    eax = ZX16(MEM16(edx + 0xA));
    esi++;
    eax = eax + 2;
    edi = edi + 0x10;
    if (CMP_L(esi, eax)) goto loc_003FE610; /* jl: less (signed <) */

loc_003FE637: ;
    eax = MEM32(esp + 0xC);
    edi = 0; /* xor self */
    MEM16(ecx + 8) = LO16(edi);
    ecx = ZX16(MEM16(ebx + 0x24));
    eax++;
    ebp = ebp + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, ecx)) goto loc_003FE5E0; /* jl: less (signed <) */

loc_003FE651: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FE660
 * Original: 0x003FE660 - 0x003FE7B3 (339 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE660(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_003FE660: ;
    esp = esp - 0x48;
    ecx = MEM32(0x828248);
    edx = MEM32(0x828244);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0); sub_003FB8D0(); /* call 0x003FB8D0 */

loc_003FE681: ;
    eax = MEM32(0x828248);
    ecx = MEM32(esp + 0x60);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = MEM32(0x828244);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FB8D0(); /* call 0x003FB8D0 */

loc_003FE69B: ;
    edx = MEM32(0x828248);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, edx);
    edx = MEM32(0x828244);
    PUSH32(esp, 0); sub_003FB8D0(); /* call 0x003FB8D0 */

loc_003FE6B6: ;
    eax = esp + 0x58;
    ecx = esp + 0x40;
    edx = esp + 0x34;
    esp = esp + 0x18;
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
    eax = esp + 0x28;
    ecx = esp + 0x34;
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm3 = MEMF(esp + 0x20); /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    eax = MEM32(esp + 0x40);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    ecx = MEM32(esp + 0x44);
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    edx = MEM32(esp + 0x48);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_003FE7C0
 * Original: 0x003FE7C0 - 0x003FE93E (382 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE7C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FE7C0: ;
    eax = MEM32(esp + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    if (CMP_BE(MEM16(ebx + 8), LO16(ebp))) goto loc_003FE8D6; /* jbe: below or equal (unsigned <=) */

loc_003FE7E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    edi = 0; /* xor self */
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */

loc_003FE7F3: ;
    ecx = MEM32(0x828244);
    ecx = ecx - 0;
    eax = MEM32(ebx + 4);
    if ((ecx == 0)) goto loc_003FE82D; /* je: equal / zero */

loc_003FE801: ;
    ecx--;
    if ((ecx != 0)) goto loc_003FE89A; /* jne: not equal / not zero */

loc_003FE808: ;
    xmm0 = MEMF(esi + eax); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + eax + 4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + eax + 8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    goto loc_003FE89A;

loc_003FE82D: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(edi + eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(edi + eax);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = esp + 0x1C;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x828248); /* movss */
    edx = ecx;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
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

loc_003FE89A: ;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ZX16(MEM16(ebx + 8));
    ebp++;
    esi = esi + 0xC;
    edi = edi + 6;
    if (CMP_L(ebp, eax)) goto loc_003FE7F3; /* jl: less (signed <) */

loc_003FE8D4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003FE8D6: ;
    ecx = ZX16(MEM16(ebx + 8));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003FE940
 * Original: 0x003FE940 - 0x003FE9D0 (144 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE940(void)
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

loc_003FE940: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEMF(ebx) = xmm0; /* movss */
    SET_LO16(eax, MEM16(ebp + 8));
    esi = 2;
    if (CMP_BE(LO16(eax), LO16(esi))) goto loc_003FE9CA; /* jbe: below or equal (unsigned <=) */

loc_003FE95E: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edi);

loc_003FE967: ;
    PUSH32(esp, esi);
    edx = esi + -1;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 4);
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_003FE660(); /* call 0x003FE660 */

loc_003FE97B: ;
    esp = esp + 0x10;
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
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    eax = 0; /* xor self */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi++;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO16(eax, MEM16(ebp + 8));
    ecx = ZX16(LO16(eax));
    if (CMP_L(esi, ecx)) goto loc_003FE967; /* jl: less (signed <) */

loc_003FE9C9: ;
    POP32(esp, edi);

loc_003FE9CA: ;
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
 * sub_003FE9D0
 * Original: 0x003FE9D0 - 0x003FEA89 (185 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FE9D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003FE9D0: ;
    esp = esp - 0x1C;
    ecx = MEM32(0x828248);
    edx = MEM32(0x828244);
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    esi = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003FB8D0(); /* call 0x003FB8D0 */

loc_003FE9F4: ;
    ecx = esp + 0x1C;
    edx = esp + 0x10;
    esp = esp + 8;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = 0x82824C;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm1 = MEMF(edi + 8); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm1 <= xmm0)) { sub_003FEA89(); return; } /* jbe: below or equal (unsigned <=) */

loc_003FEA60: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(edi); /* subss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(edi + 4); /* subss */
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    MEMF(edi + 4) = xmm1; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    MEM8(ebx) = 1;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003FEA90
 * Original: 0x003FEA90 - 0x003FEB26 (150 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FEA90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FEA90: ;
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = edx;
    if ((eax == 0)) goto loc_003FEADA; /* je: equal / zero */

loc_003FEA9E: ;
    eax--;
    if ((eax != 0)) goto loc_003FEB15; /* jne: not equal / not zero */

loc_003FEAA1: ;
    eax = MEM32(esi + 0xC);
    ebx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x10);
    MEM32(ecx + 4) = edx;
    eax = MEM32(esi + 0x14);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(ebp) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(edi) = edx;
    eax = MEM32(esi + 0x20);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, esi);
    MEM32(edi + 8) = ecx;
    PUSH32(esp, 0); sub_003FE9D0(); /* call 0x003FE9D0 */

loc_003FEAD3: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003FEADA: ;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_003FE7C0(); /* call 0x003FE7C0 */

loc_003FEAE2: ;
    PUSH32(esp, esi);
    ebx = ebp;
    PUSH32(esp, 0); sub_003FE940(); /* call 0x003FE940 */

loc_003FEAEA: ;
    eax = MEM32(esi + 4);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 8));
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003FE660(); /* call 0x003FE660 */

loc_003FEAFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_003FEB05: ;
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_003FEB15; /* jne: not equal / not zero */

loc_003FEB0C: ;
    eax = edi;
    ebx = edi;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003FEB15: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003FE9D0(); /* call 0x003FE9D0 */

loc_003FEB1F: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FEB30
 * Original: 0x003FEB30 - 0x003FEC67 (311 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FEB30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003FEB30: ;
    esp = esp - 0x20;
    eax = esp + 0x14;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = 0x82824C;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x14;
    MEM32(esp) = ecx;
    edx = MEM32(esp);
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
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    eax = MEM32(esp + 0x24);
    eax = eax - 0;
    if ((eax == 0)) { sub_003FEC67(); return; } /* je: equal / zero */

loc_003FEBD7: ;
    eax--;
    if ((eax == 0)) goto loc_003FEBE1; /* je: equal / zero */

loc_003FEBDA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_003FEBE1: ;
    xmm0 = MEMF(0x828258); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x82825C); /* movss */
    edx = esp + 8;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x828260); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_003FEC15: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_003FEC29; /* jne: not equal / not zero */

loc_003FEC1C: ;
    eax = esp + 8;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003FEC28: ;
    POP32(esp, ebx);

loc_003FEC29: ;
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * MEMF(esp); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003FEC80
 * Original: 0x003FEC80 - 0x003FEE4C (460 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FEC80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FEC80: ;
    esp = esp - 0x10;
    eax = eax - 0;
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_003FED04; /* je: equal / zero */

loc_003FEC89: ;
    eax--;
    if ((eax != 0)) goto loc_003FEE47; /* jne: not equal / not zero */

loc_003FEC90: ;
    xmm0 = MEMF(ecx); /* movss */
    MEMF(edi) = xmm0; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm0 = MEMF(ecx + 8); /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    ecx = MEM32(0x828248);
    edx = MEM32(0x828244);
    esi = MEM32(ebx + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    xmm5 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003FB8D0(); /* call 0x003FB8D0 */

loc_003FECD1: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    esp = esp + 8;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(edi + 0xC) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003FED04: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x828258); /* subss */
    MEMF(edi) = xmm1; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x82825C); /* subss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm0 = xmm0 - MEMF(0x828260); /* subss */
    MEMF(edi + 8) = xmm0; /* movss */
    eax = MEM32(0x828248);
    esi = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(0x828244);
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    xmm5 = xmm1; /* movaps */
    xmm6 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003FB8D0(); /* call 0x003FB8D0 */

loc_003FED58: ;
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    ebp = 1;
    esp = esp + 8;
    (void)0; /* cmp MEM16(ebx + 8), LO16(ebp) - flags set for next jcc */
    xmm0 = xmm0 * xmm4; /* mulss */
    MEM32(esp + 8) = 0;
    xmm3 = xmm3 + xmm0; /* addss */
    if (CMP_BE(MEM16(ebx + 8), LO16(ebp))) goto loc_003FEDFA; /* jbe: below or equal (unsigned <=) */

loc_003FED94: ;
    goto loc_003FEDA0;

    /* nop */
    /* nop */

loc_003FEDA0: ;
    edx = MEM32(0x828248);
    esi = MEM32(ebx + 4);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(0x828244);
    ecx = ebp;
    PUSH32(esp, 0); sub_003FB8D0(); /* call 0x003FB8D0 */

loc_003FEDBC: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    esp = esp + 8;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_003FEDF1; /* jbe: below or equal (unsigned <=) */

loc_003FEDEA: ;
    xmm3 = xmm0; /* movaps */
    MEM32(esp + 8) = ebp;

loc_003FEDF1: ;
    eax = ZX16(MEM16(ebx + 8));
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_003FEDA0; /* jl: less (signed <) */

loc_003FEDFA: ;
    edx = MEM32(0x828248);
    esi = MEM32(ebx + 4);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(0x828244);
    PUSH32(esp, 0); sub_003FB8D0(); /* call 0x003FB8D0 */

loc_003FEE18: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    esp = esp + 8;
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    POP32(esp, ebp);
    MEMF(edi + 0xC) = xmm0; /* movss */

loc_003FEE47: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003FEE50
 * Original: 0x003FEE50 - 0x003FF153 (771 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FEE50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FEE50: ;
    ecx = MEM32(0x828248);
    edx = MEM32(0x828244);
    esp = esp - 0x6C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x74);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003FB8D0(); /* call 0x003FB8D0 */

loc_003FEE75: ;
    eax = ZX16(MEM16(ebp + 8));
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_003FF14D; /* jle: less or equal (signed <=) */

loc_003FEE84: ;
    esi = MEM32(esp + 0x80);
    ecx = esp + 0x5C;
    edx = esp + 0x44;
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x38;
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ecx;
    edx = esp + 0x54;
    ecx = esp + 0x30;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x2C) = ecx;
    edi = 1;
    esi = esi + 8;

loc_003FEEC1: ;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    ecx = edi;
    if (CMP_NE(edi, eax)) goto loc_003FEEC9; /* jne: not equal / not zero */

loc_003FEEC7: ;
    ecx = 0; /* xor self */

loc_003FEEC9: ;
    eax = MEM32(0x828244);
    eax = eax - 0;
    edx = MEM32(ebp + 4);
    if ((eax == 0)) goto loc_003FEF06; /* je: equal / zero */

loc_003FEED6: ;
    eax--;
    if ((eax != 0)) goto loc_003FEF7C; /* jne: not equal / not zero */

loc_003FEEDD: ;
    eax = ecx + ecx * 2;
    xmm0 = MEMF(edx + eax * 4); /* movss */
    eax = edx + eax * 4;
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    goto loc_003FEF7C;

loc_003FEF06: ;
    ecx = ecx + ecx * 2;
    eax = edx + ecx * 2;
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax);
    eax = esp + 0x40;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x828248); /* movss */
    ecx = eax;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x80) = ecx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x80);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_003FEF7C: ;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = 0x82824C;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x60); /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm3 = MEMF(esp + 0x68); /* movss */
    xmm1 = MEMF(esp + 0x6C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x64); /* movss */
    MEMF(esp + 0x70) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x58); /* movss */
    edx = MEM32(esp + 0x70);
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    eax = MEM32(esp + 0x74);
    MEMF(esp + 0x78) = xmm0; /* movss */
    ecx = MEM32(esp + 0x78);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0x30) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003FF089; /* ja: above (unsigned >) */

loc_003FF07E: ;
    eax = esp + 0x34;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003FF089: ;
    SET_LO8(eax, MEM8(esp + 0x84));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FF0C3; /* je: equal / zero */

loc_003FF094: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(esp + 0x34); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x38); /* subss */
    xmm0 = xmm0 - MEMF(esp + 0x3C); /* subss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    goto loc_003FF0D5;

loc_003FF0C3: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */

loc_003FF0D5: ;
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + -8) = xmm2; /* movss */
    MEMF(esi + -4) = xmm1; /* movss */
    xmm3 = MEMF(0x828254); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(0x828250); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(0x82824C); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEMF(esi + 4) = xmm3; /* movss */
    eax = ZX16(MEM16(ebp + 8));
    edi++;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    edx = edi + -1;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    esi = esi + 0x10;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEMF(esp + 0x54) = xmm0; /* movss */
    if (CMP_L(edx, eax)) goto loc_003FEEC1; /* jl: less (signed <) */

loc_003FF14B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003FF14D: ;
    POP32(esp, esi);
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
 * sub_003FF160
 * Original: 0x003FF160 - 0x003FF201 (161 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FF160(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FF160: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    ecx = esp + 0x2C;
    eax = ebp;
    esi = ebx;
    PUSH32(esp, 0); sub_003FEA90(); /* call 0x003FEA90 */

loc_003FF188: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_003FEB30(); /* call 0x003FEB30 */

loc_003FF19C: ;
    eax = ZX16(MEM16(ebx + 8));
    xmm0 = MEMF(0x828258); /* movss */
    esi = MEM32(esp + 0x4C);
    eax = eax << 4;
    eax = eax + esi;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x82825C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x828260); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x828264); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    edi = eax + 0x10;
    ecx = esp + 0x2C;
    eax = ebp;
    PUSH32(esp, 0); sub_003FEC80(); /* call 0x003FEC80 */

loc_003FF1EA: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003FEE50(); /* call 0x003FEE50 */

loc_003FF1F6: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003FF210
 * Original: 0x003FF210 - 0x003FF324 (276 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FF210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FF210: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    MEM16(ebp) = LO16(ebx);
    MEM32(eax) = ebx;
    if (CMP_BE(MEM16(ecx + 8), LO16(ebx))) goto loc_003FF31E; /* jbe: below or equal (unsigned <=) */

loc_003FF233: ;
    xmm5 = 0.0f; /* xorps self = zero */
    edx = esp + 0x10;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, edi);

loc_003FF244: ;
    eax = MEM32(esp + 0x28);
    esi = MEM32(eax + 4);
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(esi + ecx + 0x30);
    eax = MEM32(0x828240);
    esi = esi + ecx;
    MEM32(esp + 0x14) = esi;
    edi = edi + eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = 0x82824C;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm3 = MEMF(esp + 0x20); /* movss */
    xmm0 = MEMF(esi + 0x1C); /* movss */
    xmm1 = MEMF(esi + 0x20); /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(esi + 0x2C); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esi + 0x24); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    if ((xmm5 < xmm0)) goto loc_003FF2EA; /* jb: below (unsigned <) */

loc_003FF2E5: ;
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 > xmm5)) goto loc_003FF2F4; /* ja: above (unsigned >) */

loc_003FF2EA: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003FF303; /* jbe: below or equal (unsigned <=) */

loc_003FF2EF: ;
    /* comiss xmm5, xmm1 - sets EFLAGS */
    if ((xmm5 < xmm1)) goto loc_003FF303; /* jb: below (unsigned <) */

loc_003FF2F4: ;
    ecx = MEM32(esp + 0x30);
    MEM8(edi) = 1;
    MEM32(ecx) = ebx;
    MEM16(ebp) = MEM16(ebp) + 1;
    goto loc_003FF306;

loc_003FF303: ;
    MEM8(edi) = 0;

loc_003FF306: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 0x34;
    edx = MEM32(esp + 0x28);
    eax = ZX16(MEM16(edx + 8));
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_003FF244; /* jl: less (signed <) */

loc_003FF31C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003FF31E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003FF330
 * Original: 0x003FF330 - 0x003FF783 (1107 bytes, 307 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FF330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FF330: ;
    esp = esp - 0x3C;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(LO16(eax), LO16(edi))) goto loc_003FF77E; /* je: equal / zero */

loc_003FF33F: ;
    ecx = MEM32(esp + 0x44);
    MEM16(esi + 8) = LO16(eax);
    eax = MEM32(esp + 0x48);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    ecx = MEM32(0x828244);
    eax = eax + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_003FF370; /* jne: not equal / not zero */

loc_003FF35D: ;
    edx = MEM32(eax);
    ecx = MEM32(esi + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_003FF370: ;
    ecx = MEM32(0x828244);
    ecx--;
    if ((ecx != 0)) goto loc_003FF390; /* jne: not equal / not zero */

loc_003FF379: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax + 0xC);
    ecx = ecx + 0xC;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 8) = eax;

loc_003FF390: ;
    eax = 2;
    (void)0; /* cmp MEM16(esi + 8), LO16(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(MEM16(esi + 8), LO16(eax))) goto loc_003FF77D; /* jbe: below or equal (unsigned <=) */

loc_003FF3A3: ;
    xmm2 = 0.0f; /* xorps self = zero */
    MEM32(esp + 8) = 0x18;
    ebx = 6;
    MEM32(esp + 0x10) = 0xC;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, ebp);

loc_003FF3C0: ;
    eax = MEM32(esp + 0x50);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_003FF76E; /* jle: less or equal (signed <=) */

loc_003FF3D2: ;
    ecx = MEM32(esp + 0x4C);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + ebp + 0x30);
    eax = MEM32(0x828240);
    ecx = ecx + ebp;
    if (CMP_EQ(MEM8(eax + edx), 0)) goto loc_003FF6E4; /* je: equal / zero */

loc_003FF3EE: ;
    edx = MEM32(0x828244);
    edx = edx - 0;
    eax = MEM32(esi + 4);
    if ((edx == 0)) goto loc_003FF42C; /* je: equal / zero */

loc_003FF3FC: ;
    edx--;
    if ((edx != 0)) goto loc_003FF499; /* jne: not equal / not zero */

loc_003FF403: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(edx + eax); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(edx + eax + 4); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(edx + eax + 8); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    goto loc_003FF499;

loc_003FF42C: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + eax + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(edi + eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(edi + eax);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x3C;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x828248); /* movss */
    eax = edx;
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_003FF499: ;
    edx = MEM32(0x828244);
    edx = edx - 0;
    eax = MEM32(esi + 4);
    if ((edx == 0)) goto loc_003FF4D7; /* je: equal / zero */

loc_003FF4A7: ;
    edx--;
    if ((edx != 0)) goto loc_003FF544; /* jne: not equal / not zero */

loc_003FF4AE: ;
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(edx + eax); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edx + eax + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edx + eax + 8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    goto loc_003FF544;

loc_003FF4D7: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + eax + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ebx + eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(ebx + eax);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x30;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x828248); /* movss */
    eax = edx;
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_003FF544: ;
    xmm0 = MEMF(ecx + 0xC); /* movss */
    xmm4 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_003FF566; /* jb: below (unsigned <) */

loc_003FF55F: ;
    edx = 1;
    goto loc_003FF568;

loc_003FF566: ;
    edx = 0; /* xor self */

loc_003FF568: ;
    xmm0 = MEMF(ecx + 0x10); /* movss */
    xmm3 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_003FF58A; /* jb: below (unsigned <) */

loc_003FF583: ;
    eax = 1;
    goto loc_003FF58C;

loc_003FF58A: ;
    eax = 0; /* xor self */

loc_003FF58C: ;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm5 = xmm0; /* movaps */
    edx = edx & eax;
    xmm5 = xmm5 * xmm0; /* mulss */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 < xmm5)) goto loc_003FF5B0; /* jb: below (unsigned <) */

loc_003FF5A9: ;
    eax = 1;
    goto loc_003FF5B2;

loc_003FF5B0: ;
    eax = 0; /* xor self */

loc_003FF5B2: ;
    if (TEST_NZ(edx, eax)) goto loc_003FF61F; /* jne: not equal / not zero */

loc_003FF5B6: ;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x30); /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 < xmm5)) goto loc_003FF5D3; /* jb: below (unsigned <) */

loc_003FF5CC: ;
    edx = 1;
    goto loc_003FF5D5;

loc_003FF5D3: ;
    edx = 0; /* xor self */

loc_003FF5D5: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x34); /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 < xmm5)) goto loc_003FF5F3; /* jb: below (unsigned <) */

loc_003FF5EC: ;
    eax = 1;
    goto loc_003FF5F5;

loc_003FF5F3: ;
    eax = 0; /* xor self */

loc_003FF5F5: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    xmm5 = xmm0; /* movaps */
    edx = edx & eax;
    xmm5 = xmm5 * xmm0; /* mulss */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 < xmm5)) goto loc_003FF615; /* jb: below (unsigned <) */

loc_003FF60E: ;
    eax = 1;
    goto loc_003FF617;

loc_003FF615: ;
    eax = 0; /* xor self */

loc_003FF617: ;
    if (TEST_NZ(edx, eax)) goto loc_003FF6FE; /* jne: not equal / not zero */

loc_003FF61F: ;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 < xmm4)) goto loc_003FF63A; /* jb: below (unsigned <) */

loc_003FF633: ;
    edx = 1;
    goto loc_003FF63C;

loc_003FF63A: ;
    edx = 0; /* xor self */

loc_003FF63C: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 < xmm3)) goto loc_003FF658; /* jb: below (unsigned <) */

loc_003FF651: ;
    eax = 1;
    goto loc_003FF65A;

loc_003FF658: ;
    eax = 0; /* xor self */

loc_003FF65A: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    edx = edx & eax;
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_003FF678; /* jb: below (unsigned <) */

loc_003FF671: ;
    eax = 1;
    goto loc_003FF67A;

loc_003FF678: ;
    eax = 0; /* xor self */

loc_003FF67A: ;
    if (TEST_NZ(edx, eax)) goto loc_003FF6E4; /* jne: not equal / not zero */

loc_003FF67E: ;
    xmm0 = MEMF(ecx + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x30); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_003FF69C; /* jb: below (unsigned <) */

loc_003FF695: ;
    edx = 1;
    goto loc_003FF69E;

loc_003FF69C: ;
    edx = 0; /* xor self */

loc_003FF69E: ;
    xmm0 = MEMF(ecx + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x34); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_003FF6BC; /* jb: below (unsigned <) */

loc_003FF6B5: ;
    eax = 1;
    goto loc_003FF6BE;

loc_003FF6BC: ;
    eax = 0; /* xor self */

loc_003FF6BE: ;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    xmm1 = xmm0; /* movaps */
    edx = edx & eax;
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_003FF6DE; /* jb: below (unsigned <) */

loc_003FF6D7: ;
    eax = 1;
    goto loc_003FF6E0;

loc_003FF6DE: ;
    eax = 0; /* xor self */

loc_003FF6E0: ;
    if (TEST_NZ(edx, eax)) goto loc_003FF71D; /* jne: not equal / not zero */

loc_003FF6E4: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x50);
    eax++;
    ebp = ebp + 0x34;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, ecx)) goto loc_003FF3D2; /* jl: less (signed <) */

loc_003FF6FC: ;
    goto loc_003FF76E;

loc_003FF6FE: ;
    eax = MEM32(0x828244);
    eax--;
    if ((eax != 0)) goto loc_003FF73C; /* jne: not equal / not zero */

loc_003FF706: ;
    eax = MEM32(esi + 4);
    eax = eax + MEM32(esp + 0xC);
    edx = MEM32(ecx + 0xC);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x14);
    goto loc_003FF739;

loc_003FF71D: ;
    eax = MEM32(0x828244);
    eax--;
    if ((eax != 0)) goto loc_003FF73C; /* jne: not equal / not zero */

loc_003FF725: ;
    eax = MEM32(esi + 4);
    eax = eax + MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);

loc_003FF739: ;
    MEM32(eax + 8) = ecx;

loc_003FF73C: ;
    ebp = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    ebp++;
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(esp + 0x14);
    eax = 0xC;
    ebp = ebp + eax;
    edx = edx + eax;
    ebx = ebx + 6;
    edi = edi + 6;
    ecx = ecx + eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0xC) = ecx;

loc_003FF76E: ;
    edx = ZX16(MEM16(esi + 8));
    if (CMP_L(MEM32(esp + 0x18), edx)) goto loc_003FF3C0; /* jl: less (signed <) */

loc_003FF77C: ;
    POP32(esp, ebp);

loc_003FF77D: ;
    POP32(esp, ebx);

loc_003FF77E: ;
    POP32(esp, edi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_003FF790
 * Original: 0x003FF790 - 0x003FF800 (112 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FF790(void)
{
    int _flags = 0; /* fallback flag var */

loc_003FF790: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003FF210(); /* call 0x003FF210 */

loc_003FF7A7: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(edi + 0xC);
    ecx = MEM32(0x828240);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    esi = esi + ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003FF330(); /* call 0x003FF330 */

loc_003FF7C1: ;
    esi = MEM32(edi + 0xC);
    eax = MEM32(0x828240);
    edi = MEM32(eax + 8);
    ecx = MEM32(esi + eax + 0x28);
    esi = esi + eax;
    esp = esp + 0x14;
    edi = edi + ecx;
    if (CMP_BE(MEM16(esi + 8), 0)) { sub_003FF800(); return; } /* jbe: below or equal (unsigned <=) */

loc_003FF7DE: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_003FF160(); /* call 0x003FF160 */

loc_003FF7EB: ;
    SET_LO16(ecx, MEM16(esi + 8));
    esp = esp + 8;
    SET_LO16(ecx, LO16(ecx) + 2);
    MEM16(edi + 8) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003FF810
 * Original: 0x003FF810 - 0x003FF8F9 (233 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FF810(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003FF810: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esi + 0x38);
    eax = eax + edx;
    MEM32(0x828240) = ecx;
    xmm0 = MEMF(eax); /* movss */
    MEMF(0x82824C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(0x828250) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(0x828254) = xmm0; /* movss */
    eax = eax + 0xC;
    ecx = MEM32(eax);
    MEM32(0x828258) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x82825C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x828260) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x828264) = edx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    MEM32(0x828244) = eax;
    xmm0 = MEMF(esi + 0x14); /* movss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEMF(0x828248) = xmm0; /* movss */
    if (CMP_BE(MEM16(esi + 0x1C), LO16(edi))) goto loc_003FF8BE; /* jbe: below or equal (unsigned <=) */

loc_003FF889: ;
    ebx = 0; /* xor self */
    goto loc_003FF890;

    /* nop */

loc_003FF890: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(0x828240);
    edx = MEM32(eax + ebx + 0x28);
    ecx = MEM32(ecx + 8);
    eax = eax + ebx;
    ecx = ecx + edx;
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003FF160(); /* call 0x003FF160 */

loc_003FF8AF: ;
    eax = ZX16(MEM16(esi + 0x1C));
    esp = esp + 8;
    edi++;
    ebx = ebx + 0x2C;
    if (CMP_L(edi, eax)) goto loc_003FF890; /* jl: less (signed <) */

loc_003FF8BE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edi = 0; /* xor self */
    MEM32(0x828244) = 1;
    MEMF(0x828248) = xmm0; /* movss */
    if (CMP_BE(MEM16(esi + 0x24), LO16(edi))) goto loc_003FF8F6; /* jbe: below or equal (unsigned <=) */

loc_003FF8DB: ;
    ebx = 0; /* xor self */
    /* nop */

loc_003FF8E0: ;
    eax = MEM32(esi + 0x20);
    eax = eax + ebx;
    PUSH32(esp, 0); sub_003FF790(); /* call 0x003FF790 */

loc_003FF8EA: ;
    ecx = ZX16(MEM16(esi + 0x24));
    edi++;
    ebx = ebx + 0x14;
    if (CMP_L(edi, ecx)) goto loc_003FF8E0; /* jl: less (signed <) */

loc_003FF8F6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003FF900
 * Original: 0x003FF900 - 0x003FFA42 (322 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FF900(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003FF900: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_003FFA42(); return; } /* je: equal / zero */

loc_003FF90D: ;
    esi = MEM32(0x84B87C);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    xmm0 = MEMF(ecx + esi + 0xB0); /* movss */
    ecx = ecx + esi;
    /* comiss xmm0, MEMF(edx) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx))) goto loc_003FF92D; /* jbe: below or equal (unsigned <=) */

loc_003FF92B: ;
    goto loc_003FF931;

loc_003FF92D: ;
    xmm0 = MEMF(edx); /* movss */

loc_003FF931: ;
    MEMF(ecx + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(edx + 4); /* movss */
    /* comiss xmm0, MEMF(ecx + 0xB4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0xB4))) goto loc_003FF951; /* jbe: below or equal (unsigned <=) */

loc_003FF947: ;
    xmm0 = MEMF(ecx + 0xB4); /* movss */
    goto loc_003FF956;

loc_003FF951: ;
    xmm0 = MEMF(edx + 4); /* movss */

loc_003FF956: ;
    MEMF(ecx + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(edx + 8); /* movss */
    /* comiss xmm0, MEMF(ecx + 0xB8) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0xB8))) goto loc_003FF976; /* jbe: below or equal (unsigned <=) */

loc_003FF96C: ;
    xmm0 = MEMF(ecx + 0xB8); /* movss */
    goto loc_003FF97B;

loc_003FF976: ;
    xmm0 = MEMF(edx + 8); /* movss */

loc_003FF97B: ;
    MEMF(ecx + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xBC); /* movss */
    /* comiss xmm0, MEMF(edx + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 0xC))) goto loc_003FF993; /* jbe: below or equal (unsigned <=) */

loc_003FF991: ;
    goto loc_003FF998;

loc_003FF993: ;
    xmm0 = MEMF(edx + 0xC); /* movss */

loc_003FF998: ;
    MEMF(ecx + 0xBC) = xmm0; /* movss */
    edx = MEM32(ecx + 0xC0);
    MEM32(ecx + 0xC0) = edx;
    edx = MEM32(ecx + 0xC4);
    MEM32(ecx + 0xC4) = edx;
    xmm0 = MEMF(edi); /* movss */
    /* comiss xmm0, MEMF(ecx + 0xC8) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0xC8))) goto loc_003FF9CF; /* jbe: below or equal (unsigned <=) */

loc_003FF9C5: ;
    xmm0 = MEMF(ecx + 0xC8); /* movss */
    goto loc_003FF9D3;

loc_003FF9CF: ;
    xmm0 = MEMF(edi); /* movss */

loc_003FF9D3: ;
    MEMF(ecx + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    /* comiss xmm0, MEMF(ecx + 0xCC) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0xCC))) goto loc_003FF9F3; /* jbe: below or equal (unsigned <=) */

loc_003FF9E9: ;
    xmm0 = MEMF(ecx + 0xCC); /* movss */
    goto loc_003FF9F8;

loc_003FF9F3: ;
    xmm0 = MEMF(edi + 4); /* movss */

loc_003FF9F8: ;
    MEMF(ecx + 0xCC) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xD0); /* movss */
    /* comiss xmm0, MEMF(ebx) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx))) goto loc_003FFA0F; /* jbe: below or equal (unsigned <=) */

loc_003FFA0D: ;
    goto loc_003FFA13;

loc_003FFA0F: ;
    xmm0 = MEMF(ebx); /* movss */

loc_003FFA13: ;
    MEMF(ecx + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xD4); /* movss */
    /* comiss xmm0, MEMF(ebx + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 4))) goto loc_003FFA33; /* jbe: below or equal (unsigned <=) */

loc_003FFA29: ;
    MEMF(ecx + 0xD4) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003FFA33: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(ecx + 0xD4) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003FFAE0
 * Original: 0x003FFAE0 - 0x003FFCD3 (499 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FFAE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FFAE0: ;
    eax = ZX16(MEM16(0x828268));
    esp = esp - 0xAC;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B87C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xBC);
    PUSH32(esp, edi);
    edi = ebp + 8;
    ecx = 0x2A;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_LE(eax, 1)) goto loc_003FFCC9; /* jle: less or equal (signed <=) */

loc_003FFB10: ;
    xmm4 = 0.0f; /* xorps self = zero */
    ebp = ebp + 0x19C;
    eax--;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ebx);
    /* nop */

loc_003FFB20: ;
    esi = MEM32(esp + 0xC4);
    eax = ebp + -188;
    edi = eax;
    ecx = 0x2A;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 / MEMF(ebp + -4); /* divss */
    xmm1 = MEMF(ebp + -12); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -12); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -16); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -16); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    ecx = MEM32(esp + 0xC0);
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm4; /* movss */
    xmm1 = MEMF(ebp + -12); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    xmm1 = MEMF(ebp); /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm4; /* movss */
    xmm1 = MEMF(ebp + -8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm4; /* movss */
    xmm1 = MEMF(ebp); /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm4; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -16); /* movss */
    PUSH32(esp, 0xF0);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm4; /* movaps */
    PUSH32(esp, 0xF0);
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, ecx);
    esi = eax;
    ebx = esp + 0x20;
    MEMF(esp + 0xA0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FA7F0(); /* call 0x003FA7F0 */

loc_003FFCB0: ;
    esp = esp + 0xC;
    eax = MEM32(esp + 0x10);
    ebp = ebp + 0xD8;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_003FFB20; /* jne: not equal / not zero */

loc_003FFCC8: ;
    POP32(esp, ebx);

loc_003FFCC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xAC;
    esp += 4; return; /* ret */

}

/**
 * sub_003FFCE0
 * Original: 0x003FFCE0 - 0x004000DA (1018 bytes, 250 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003FFCE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003FFCE0: ;
    esp = esp - 0x78;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, MEM8(0x84B880));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x80);
    PUSH32(esp, edi);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003FFD35; /* je: equal / zero */

loc_003FFD0A: ;
    SET_LO16(eax, MEM16(0x828268));
    if (CMP_AE(LO16(eax), MEM16(0x828278))) goto loc_003FFD41; /* jae: above or equal (unsigned >=) */

loc_003FFD19: ;
    edx = MEM32(0x84B87C);
    ecx = ZX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    SET_LO16(eax, LO16(eax) + 1);
    MEM32(ecx + edx) = ebx;
    MEM16(0x828268) = LO16(eax);
    goto loc_003FFD41;

loc_003FFD35: ;
    eax = MEM32(esp + 0x84);
    MEM32(0x828274) = eax;

loc_003FFD41: ;
    ecx = esp + 0x38;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x8C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x88);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edi = 0; /* xor self */
    (void)0; /* cmp MEM16(ebx + 0x34), LO16(edi) - flags set for next jcc */
    MEM32(esp + 8) = edi;
    if (CMP_BE(MEM16(ebx + 0x34), LO16(edi))) goto loc_004000D4; /* jbe: below or equal (unsigned <=) */

loc_003FFD86: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    goto loc_003FFD90;

    /* nop */

loc_003FFD90: ;
    edx = MEM32(ebx + 0x30);
    eax = MEM32(0x82826C);
    eax = eax - 0;
    esi = MEM32(edx + edi * 4);
    ecx = MEM32(esi + 0x14);
    if ((eax == 0)) goto loc_003FFDCC; /* je: equal / zero */

loc_003FFDA3: ;
    eax--;
    if ((eax != 0)) goto loc_003FFE36; /* jne: not equal / not zero */

loc_003FFDAA: ;
    xmm0 = MEMF(ecx); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    goto loc_003FFE36;

loc_003FFDCC: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 4);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    ecx = esp + 0x64;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x828270); /* movss */
    edx = ecx;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_003FFE36: ;
    ebp = 2;
    if (CMP_BE(MEM16(esi + 0x18), LO16(ebp))) goto loc_00400017; /* jbe: below or equal (unsigned <=) */

loc_003FFE45: ;
    eax = esp + 0x70;
    ecx = esp + 0x7C;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    ebx = 0xC;
    edi = 0x18;
    /* nop */

loc_003FFE60: ;
    ecx = MEM32(0x82826C);
    ecx = ecx - 0;
    eax = MEM32(esi + 0x14);
    if ((ecx == 0)) goto loc_003FFE9B; /* je: equal / zero */

loc_003FFE6E: ;
    ecx--;
    if ((ecx != 0)) goto loc_003FFEFB; /* jne: not equal / not zero */

loc_003FFE75: ;
    xmm0 = MEMF(edi + eax + -12); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(edi + eax + -8); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(edi + eax + -4); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    goto loc_003FFEFB;

loc_003FFE9B: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + eax + -2);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + eax + -4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ebx + eax + -6);
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x828270); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_003FFEFB: ;
    ecx = MEM32(0x82826C);
    ecx = ecx - 0;
    eax = MEM32(esi + 0x14);
    if ((ecx == 0)) goto loc_003FFF3B; /* je: equal / zero */

loc_003FFF09: ;
    ecx--;
    if ((ecx != 0)) goto loc_003FFFA0; /* jne: not equal / not zero */

loc_003FFF10: ;
    xmm0 = MEMF(edi + eax); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(edi + eax + 4); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(edi + eax + 8); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    goto loc_003FFFA0;

loc_003FFF3B: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(ebx + eax + 2);
    eax = (uint32_t)(int32_t)SMEM16(ebx + eax);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x828270); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_003FFFA0: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xAC);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003DD570(); /* call 0x003DD570 */

loc_003FFFE3: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_003FFFF9; /* je: equal / zero */

loc_003FFFEA: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_00400030; /* ja: above (unsigned >) */

loc_003FFFF9: ;
    ecx = ZX16(MEM16(esi + 0x18));
    ebp++;
    edi = edi + 0xC;
    ebx = ebx + 6;
    if (CMP_L(ebp, ecx)) goto loc_003FFE60; /* jl: less (signed <) */

loc_0040000C: ;
    ebx = MEM32(esp + 0x8C);
    edi = MEM32(esp + 0x10);

loc_00400017: ;
    edx = ZX16(MEM16(ebx + 0x34));
    edi++;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(edi, edx)) goto loc_003FFD90; /* jl: less (signed <) */

loc_00400028: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

loc_00400030: ;
    xmm0 = xmm0 + MEMF(0x648D54); /* addss */
    eax = esp + 0x40;
    ecx = esp + 0x58;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    eax = esp + 0x4C;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    ecx = MEM32(esp + 0x90);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x8C);
    eax = MEM32(esi + 0x34);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ecx = MEM32(esp + 0x94);
    edx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    if (CMP_NE(eax, ecx)) goto loc_004000C9; /* jne: not equal / not zero */

loc_004000C6: ;
    eax = MEM32(esi + 0x38);

loc_004000C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003FFCE0(); /* call 0x003FFCE0 */

loc_004000CF: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_004000D4: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_004000E0
 * Original: 0x004000E0 - 0x0040015E (126 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004000E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_004000E0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x14); /* movss */
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x4C);
    MEM32(0x82826C) = esi;
    esi = MEM32(eax + 0x48);
    eax = MEM32(ecx + 8);
    esi = esi + ecx;
    edi = edi + eax;
    eax = MEM32(esi + 0x94);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(0x828270) = xmm0; /* movss */
    MEM32(0x828274) = 0;
    if (TEST_Z(eax, eax)) { sub_0040015E(); return; } /* je: equal / zero */

loc_00400120: ;
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040012F: ;
    esi = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040013E: ;
    edx = MEM32(edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003FFCE0(); /* call 0x003FFCE0 */

loc_00400150: ;
    eax = MEM32(0x828274);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00400180
 * Original: 0x00400180 - 0x0040022A (170 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400180: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B884);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(0x82827C));
    ecx = ZX16(LO16(edi));
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_004001B2; /* jle: less or equal (signed <=) */

loc_00400199: ;
    eax = ebp;
    goto loc_004001A0;

    /* nop */

loc_004001A0: ;
    if (CMP_EQ(ebx, MEM32(eax))) { sub_0040022A(); return; } /* je: equal / zero */

loc_004001A8: ;
    esi++;
    eax = eax + 0xD4;
    if (CMP_L(esi, ecx)) goto loc_004001A0; /* jl: less (signed <) */

loc_004001B2: ;
    if (CMP_AE(LO16(edi), MEM16(0x828280))) goto loc_00400226; /* jae: above or equal (unsigned >=) */

loc_004001BB: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD4);
    ecx = ecx + ebp;
    MEM32(ecx) = ebx;
    esi = MEM32(edx);
    eax = ecx + 0xAC;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    esi = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(edx + 0x10);
    MEM32(eax + 0x10) = esi;
    edx = MEM32(edx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x10);
    SET_LO16(edi, LO16(edi) + 1);
    eax = ecx + 0xC4;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM16(0x82827C) = LO16(edi);
    if (CMP_EQ(edx, eax)) goto loc_0040020E; /* je: equal / zero */

loc_00400204: ;
    esi = MEM32(edx);
    MEM32(eax) = esi;
    edx = MEM32(edx + 4);
    MEM32(eax + 4) = edx;

loc_0040020E: ;
    eax = ecx + 0xCC;
    ecx = MEM32(esp + 0x14);
    if (CMP_EQ(ecx, eax)) goto loc_00400226; /* je: equal / zero */

loc_0040021C: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_00400226: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00400360
 * Original: 0x00400360 - 0x00400532 (466 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400360: ;
    eax = ZX16(MEM16(0x82827C));
    esp = esp - 0xAC;
    if (CMP_LE(eax & eax, 0)) goto loc_0040052B; /* jle: less or equal (signed <=) */

loc_00400375: ;
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B884);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ebp + 0xC0;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_00400390: ;
    esi = MEM32(esp + 0xC4);
    eax = ebp + -188;
    edi = eax;
    ecx = 0x2A;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 / MEMF(ebp + -4); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebp + -12); /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebp + -20); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebp + -20); /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebp + -12); /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebp + -16); /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    ecx = MEM32(esp + 0xC0);
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(ebp + -8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebp + -16); /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm4; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebp + -12); /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    xmm1 = MEMF(ebp); /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm4; /* movss */
    xmm1 = MEMF(ebp + -8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm4; /* movss */
    xmm1 = MEMF(ebp); /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebp + -20); /* mulss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm4; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(ebp + -16); /* mulss */
    PUSH32(esp, 0xF0);
    xmm1 = xmm4; /* movaps */
    PUSH32(esp, 0xF0);
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, ecx);
    esi = eax;
    ebx = esp + 0x20;
    MEMF(esp + 0xA0) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003FA7F0(); /* call 0x003FA7F0 */

loc_00400514: ;
    esp = esp + 0xC;
    ebp = ebp + 0xD4;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_00400390; /* jne: not equal / not zero */

loc_00400527: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0040052B: ;
    esp = esp + 0xAC;
    esp += 4; return; /* ret */

}

/**
 * sub_00400540
 * Original: 0x00400540 - 0x0040058E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400540: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8C);
    edi = eax;
    ebx = ecx;
    ecx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    PUSH32(esp, 0x645BE0);
    MEM32(ecx) = eax;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = 0xA4;
    esi = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_00401230(); /* call 0x00401230 */

loc_00400574: ;
    esp = esp + 0x10;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = eax;
    if (TEST_Z(esi, esi)) { sub_0040058E(); return; } /* je: equal / zero */

loc_0040057D: ;
    if (TEST_Z(ebx, ebx)) { sub_0040058E(); return; } /* je: equal / zero */

loc_00400581: ;
    MEM32(ebp + 0x1C) = esi;
    MEM32(esp + 0x10) = ebx;
    MEM8(ebp + 0x20) = 1;
    g_seh_ebp = ebp; sub_004005B1(); return; /* tail jmp 0x004005B1 */

}

/**
 * sub_004008C0
 * Original: 0x004008C0 - 0x0040091F (95 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004008C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004008C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_004008D4: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0054D3C5(); /* call 0x0054D3C5 */

loc_004008DF: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_004008F4; /* je: equal / zero */

loc_004008E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004008F4: ;
    if (CMP_GE(esi & esi, 0)) { sub_0040091F(); return; } /* jge: greater or equal (signed >=) */

loc_004008F8: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004008FD: ;
    PUSH32(esp, 0x645B90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x645C3C);
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_0040090D: ;
    ecx = MEM32(esp + 0x28);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00400960
 * Original: 0x00400960 - 0x00400A66 (262 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400960: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x243);
    eax = 0; /* xor self */
    PUSH32(esp, 0x645B74);
    MEM32(esp + 0x20) = eax;
    edi = ecx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 4);
    PUSH32(esp, 0x645B70);
    ecx = 0x50;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0); sub_00401230(); /* call 0x00401230 */

loc_00400998: ;
    ebx = eax;
    esp = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_00402860(); /* call 0x00402860 */

loc_004009A6: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEM32(ebx + 0x18) = ecx;
    MEM32(ebx + 0x20) = edx;
    MEM32(ebx + 0x1C) = edi;
    edi = 0; /* xor self */
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    MEM32(ebx + 0x30) = esi;
    if (CMP_EQ(ebp, edi)) goto loc_004009C3; /* je: equal / zero */

loc_004009C0: ;
    MEM32(ebx + 0x14) = ebp;

loc_004009C3: ;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(ebx + 0x2C) = 4;
    if (CMP_EQ(esi, edi)) goto loc_004009D6; /* je: equal / zero */

loc_004009CE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004009D3: ;
    esp = esp + 8;

loc_004009D6: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(ebx + 0x18);
    ebp = MEM32(ecx + 0x18);
    esi = esp + 0x34;
    MEM32(esp + 0x14) = 8;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_004009FC: ;
    edx = ebx + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_0054D4C7(); /* call 0x0054D4C7 */

loc_00400A0B: ;
    esi = eax;
    eax = MEM32(esp + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00400A20; /* je: equal / zero */

loc_00400A15: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00400A20: ;
    if (CMP_GE(esi & esi, 0)) { sub_00400A66(); return; } /* jge: greater or equal (signed >=) */

loc_00400A24: ;
    PUSH32(esp, 0x26D);
    PUSH32(esp, 0x645B74);
    ecx = 0; /* xor self */
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00401300(); /* call 0x00401300 */

loc_00400A39: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00400A41: ;
    PUSH32(esp, 0x645B3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x645C3C);
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_00400A51: ;
    eax = MEM32(esp + 0x3C);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00400AA0
 * Original: 0x00400AA0 - 0x00400ACC (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400AA0: ;
    esp = esp - 0x14;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx + 0x38);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(esp + 4) = 0;
    if (TEST_Z(LO8(eax), 1)) { sub_00400ACC(); return; } /* je: equal / zero */

loc_00400AC0: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00400AC5: ;
    PUSH32(esp, 0x645AF0);
    g_seh_ebp = ebp; sub_00400B4A(); return; /* tail jmp 0x00400B4A */

}

/**
 * sub_00400B80
 * Original: 0x00400B80 - 0x00400BF1 (113 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400B80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x38);
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    ebx = ecx;
    if (TEST_NZ(LO8(eax), 2)) goto loc_00400BED; /* jne: not equal / not zero */

loc_00400B8E: ;
    ecx = MEM32(edi + 0x24);
    eax = eax | 2;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi + 0x38) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00400BE7; /* je: equal / zero */

loc_00400B9B: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_00400BAB; /* je: equal / zero */

loc_00400B9F: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00400D30(); /* call 0x00400D30 */

loc_00400BA6: ;
    ebx = 1;

loc_00400BAB: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x24);
    edi = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00400BBF: ;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 2;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0); sub_0054D6F9(); /* call 0x0054D6F9 */

loc_00400BD2: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_00400BE7; /* je: equal / zero */

loc_00400BDC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00400BE7: ;
    MEM32(0x84BCA0) = MEM32(0x84BCA0) + 1;

loc_00400BED: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00400C00
 * Original: 0x00400C00 - 0x00400C6A (106 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400C00: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(ecx, ebp)) goto loc_00400C21; /* je: equal / zero */

loc_00400C1F: ;
    MEM32(ecx) = edx;

loc_00400C21: ;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 0x30) = ebp;
    ecx = MEM32(eax + 0x3C);
    edx = ecx;
    edx = edx >> 3;
    ebx = 1;
    edx = ~edx;
    edx = edx & ebx;
    if (TEST_NZ(LO8(ebx), LO8(ecx))) goto loc_00400C47; /* jne: not equal / not zero */

loc_00400C3E: ;
    (void)0; /* test MEM8(eax + 0x38), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (TEST_NZ(MEM8(eax + 0x38), LO8(ebx))) goto loc_00400C4B; /* jne: not equal / not zero */

loc_00400C47: ;
    MEM32(esp + 0x10) = ebp;

loc_00400C4B: ;
    esi = ecx;
    esi = esi & 2;
    if ((esi != 0)) goto loc_00400C5A; /* jne: not equal / not zero */

loc_00400C52: ;
    if (TEST_Z(MEM8(eax + 0x38), 2)) goto loc_00400C5A; /* je: equal / zero */

loc_00400C58: ;
    ebp = ebx;

loc_00400C5A: ;
    ecx = MEM32(eax + 0x38);
    if (TEST_Z(LO8(ebx), LO8(ecx))) { sub_00400C6A(); return; } /* je: equal / zero */

loc_00400C61: ;
    if (TEST_NZ(LO8(ecx), 2)) { sub_00400C6A(); return; } /* jne: not equal / not zero */

loc_00400C66: ;
    edi = ebx;
    g_seh_ebp = ebp; sub_00400C6C(); return; /* tail jmp 0x00400C6C */

}

/**
 * sub_00400D30
 * Original: 0x00400D30 - 0x00400D87 (87 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400D30: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x38);
    eax = eax >> 2;
    eax = eax & 1;
    if (CMP_EQ(eax, ebx)) goto loc_00400D85; /* je: equal / zero */

loc_00400D3E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x24);
    PUSH32(esp, esi);
    esi = esp + 8;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00400D4C: ;
    ecx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    eax = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0054FBB0(); /* call 0x0054FBB0 */

loc_00400D5B: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00400D6E; /* je: equal / zero */

loc_00400D63: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00400D6E: ;
    esi = MEM32(edi + 0x38);
    edx = ZX8(LO8(ebx));
    edx = edx << 2;
    edx = edx ^ esi;
    eax = esi;
    edx = edx & 4;
    eax = eax ^ edx;
    POP32(esp, esi);
    MEM32(edi + 0x38) = eax;
    POP32(esp, ebp);

loc_00400D85: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00400D90
 * Original: 0x00400D90 - 0x00400DDA (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400D90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x18);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00400DA9: ;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    eax = ebp;
    PUSH32(esp, 0); sub_0054CF1F(); /* call 0x0054CF1F */

loc_00400DB3: ;
    ebx = MEM32(0x561008);
    esi = eax;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00400DCA; /* je: equal / zero */

loc_00400DC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_00400DCA: ;
    if (CMP_GE(esi & esi, 0)) { sub_00400DDA(); return; } /* jge: greater or equal (signed >=) */

loc_00400DCE: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00400DD3: ;
    PUSH32(esp, 0x6459E0);
    g_seh_ebp = ebp; sub_00400E15(); return; /* tail jmp 0x00400E15 */

}

/**
 * sub_00400E40
 * Original: 0x00400E40 - 0x00400EDB (155 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00400E40: ;
    esp = esp - 0x20;
    edx = MEM32(0x84B904);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    MEM32(esp + 0xA) = eax;
    ecx = 0; /* xor self */
    MEM32(esp + 0xE) = eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x12) = eax;
    SET_LO8(ecx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    edx = MEM32(ebp + 0x24);
    MEM32(esp + 0x1A) = eax;
    MEM32(esp + 0x1E) = eax;
    PUSH32(esp, esi);
    MEM16(esp + 0x26) = LO16(eax);
    MEM32(esp + 0xC) = eax;
    eax = 1;
    MEM16(esp + 0x12) = LO16(ecx);
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(0x84B898);
    esi = esp + 0x30;
    MEM16(esp + 0x14) = LO16(eax);
    MEM16(esp + 0x18) = 0xFF;
    MEM16(esp + 0x1A) = 0;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00400ED2: ;
    if (TEST_Z(edi, edi)) { sub_00400EDB(); return; } /* je: equal / zero */

loc_00400ED6: ;
    eax = edi + -8;
    g_seh_ebp = ebp; sub_00400EDD(); return; /* tail jmp 0x00400EDD */

}

/**
 * sub_00400F50
 * Original: 0x00400F50 - 0x00400F9B (75 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00400F50: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x400;
    eax = esp + 0x408;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EA04(); /* call 0x0046EA04 */

loc_00400F72: ;
    esp = esp + 0x10;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00400F82; /* jne: not equal / not zero */

loc_00400F7A: ;
    MEM8(esp + 0x3FF) = 0;

loc_00400F82: ;
    eax = MEM32(0x84BCA4);
    if (TEST_NZ(eax, eax)) { sub_00400F9B(); return; } /* jne: not equal / not zero */

loc_00400F8B: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C811(); /* call 0x0042C811 */

loc_00400F94: ;
    esp = esp + 0x400;
    esp += 4; return; /* ret */

}

/**
 * sub_00400FB0
 * Original: 0x00400FB0 - 0x00400FF8 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00400FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00400FB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = esp + 4;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00400FBB: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, esi);
    MEM32(0x555780) = edi;
    if (TEST_NZ(edi, edi)) goto loc_00400FD0; /* jne: not equal / not zero */

loc_00400FC6: ;
    MEM32(0x555780) = 0x42BC84;

loc_00400FD0: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x555784) = ebx;
    if (TEST_NZ(ebx, ebx)) goto loc_00400FE4; /* jne: not equal / not zero */

loc_00400FDA: ;
    MEM32(0x555784) = 0x42C319;

loc_00400FE4: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_00400FF6; /* je: equal / zero */

loc_00400FEB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00400FF6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00401000
 * Original: 0x00401000 - 0x00401065 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401000: ;
    esp = esp - 0x14;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x645D80);
    PUSH32(esp, 0x645D6C);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_00401026: ;
    SET_LO8(eax, MEM8(0x84B8A9));
    ebx = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    esi = 0x3C;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0040103C; /* je: equal / zero */

loc_00401039: ;
    esi = ZX8(LO8(eax));

loc_0040103C: ;
    SET_LO8(eax, MEM8(0x84B8A8));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    ecx = 0x5A;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00401051; /* je: equal / zero */

loc_0040104E: ;
    ecx = ZX8(LO8(eax));

loc_00401051: ;
    SET_LO8(eax, MEM8(0x84B8AA));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_00401065(); return; } /* jne: not equal / not zero */

loc_0040105E: ;
    eax = 0x40;
    g_seh_ebp = ebp; sub_00401068(); return; /* tail jmp 0x00401068 */

}

/**
 * sub_00401190
 * Original: 0x00401190 - 0x00401224 (148 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401190(void)
{
    int _flags = 0; /* fallback flag var */

loc_00401190: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_00401198: ;
    MEM32(0x84BA94) = eax;
    PUSH32(esp, 0); sub_004018B0(); /* call 0x004018B0 */

loc_004011A2: ;
    (void)0; /* cmp MEM32(0x84B904), 1 - flags set for next jcc */
    ebx = MEM32(0x561008);
    if (CMP_NE(MEM32(0x84B904), 1)) goto loc_004011ED; /* jne: not equal / not zero */

loc_004011B1: ;
    eax = MEM32(0x84B898);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004011C0; /* je: equal / zero */

loc_004011BB: ;
    edi = eax + -8;
    goto loc_004011C2;

loc_004011C0: ;
    edi = 0; /* xor self */

loc_004011C2: ;
    esi = esp + 0xC;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_004011CB: ;
    edi = MEM32(edi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C652D(); /* call 0x004C652D */

loc_004011D4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_S(eax, eax)) goto loc_004011DE; /* jl: less (signed <) */

loc_004011D9: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_004011DE: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_004011ED; /* je: equal / zero */

loc_004011E6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_004011ED: ;
    PUSH32(esp, 0); sub_00402C40(); /* call 0x00402C40 */

loc_004011F2: ;
    esi = esp + 8;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_004011FB: ;
    esi = MEM32(0x555774);
    if (TEST_Z(esi, esi)) goto loc_00401211; /* je: equal / zero */

loc_00401205: ;
    PUSH32(esp, 0); sub_004C5248(); /* call 0x004C5248 */

loc_0040120A: ;
    eax = esi;
    PUSH32(esp, 0); sub_0054BCBD(); /* call 0x0054BCBD */

loc_00401211: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00401220; /* je: equal / zero */

loc_00401219: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_00401220: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00401230
 * Original: 0x00401230 - 0x004012F1 (193 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401230: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = eax;
    eax = MEM32(0x84B8A4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(eax, eax)) goto loc_00401259; /* je: equal / zero */

loc_00401245: ;
    ecx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x645C60);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00401256: ;
    esp = esp + 0x18;

loc_00401259: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B89C), _icall_esp); /* indirect call */
    }

loc_00401260: ;
    ecx = edi;
    edx = ecx;
    esi = eax;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    esp = esp + 4;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x14);
    edx = eax + 1;

loc_00401280: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00401280; /* jne: not equal / not zero */

loc_00401287: ;
    eax = eax - edx;
    edi = eax + 1;
    eax = MEM32(0x84B8A4);
    if (TEST_Z(eax, eax)) goto loc_004012A9; /* je: equal / zero */

loc_00401295: ;
    ecx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x645C60);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004012A6: ;
    esp = esp + 0x18;

loc_004012A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B89C), _icall_esp); /* indirect call */
    }

loc_004012B0: ;
    edx = eax;
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
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC808);
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_004012D9: ;
    ecx = MEM32(esp + 0x28);
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM32(esi + 8) = 1;
    MEM32(esi + 0xC) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00401300
 * Original: 0x00401300 - 0x00401377 (119 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401300: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    edx = MEM32(esi + 8);
    ebx = MEM32(esi + 0x10);
    edx--;
    MEM32(esi + 8) = edx;
    eax = MEM32(0x84B8A4);
    if (TEST_Z(eax, eax)) goto loc_00401331; /* je: equal / zero */

loc_0040131C: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x645C60);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0040132E: ;
    esp = esp + 0x18;

loc_00401331: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B8A0), _icall_esp); /* indirect call */
    }

loc_00401338: ;
    MEM32(esi + 0x10) = 0;
    eax = MEM32(0x84B8A4);
    esi = MEM32(edi);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00401363; /* je: equal / zero */

loc_0040134D: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x645C60);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00401360: ;
    esp = esp + 0x18;

loc_00401363: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B8A0), _icall_esp); /* indirect call */
    }

loc_0040136A: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00401380
 * Original: 0x00401380 - 0x00401497 (279 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401380: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60000000);
    esi = eax;
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 1);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x80000000u);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_004013BB: ;
    edi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C271(); /* call 0x0042C271 */

loc_004013C4: ;
    ecx = MEM32(esp + 0x30);
    ebp = eax;
    PUSH32(esp, 0x645C90);
    PUSH32(esp, esi);
    MEM32(ecx) = ebp;
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_004013D7: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0040141B; /* jne: not equal / not zero */

loc_004013DE: ;
    PUSH32(esp, 0x645C8C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_004013E9: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0040141B; /* jne: not equal / not zero */

loc_004013F0: ;
    PUSH32(esp, 0x645C88);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_004013FB: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00401414; /* jne: not equal / not zero */

loc_00401402: ;
    PUSH32(esp, 0x645C84);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_0040140D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00401427; /* je: equal / zero */

loc_00401414: ;
    PUSH32(esp, 0x645C80);
    goto loc_00401420;

loc_0040141B: ;
    PUSH32(esp, 0x5F6438);

loc_00401420: ;
    PUSH32(esp, 0); sub_0042D114(); /* call 0x0042D114 */

loc_00401425: ;
    ebx = eax;

loc_00401427: ;
    edx = 0; /* xor self */
    eax = ebx + ebp + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    esi = eax;
    eax = MEM32(0x84B8A4);
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    if (TEST_Z(eax, eax)) goto loc_00401456; /* je: equal / zero */

loc_0040143D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C9);
    PUSH32(esp, 0x645C70);
    PUSH32(esp, 0x645C60);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00401453: ;
    esp = esp + 0x18;

loc_00401456: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B89C), _icall_esp); /* indirect call */
    }

loc_0040145D: ;
    edx = MEM32(esp + 0x30);
    esp = esp + 4;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(edx) = eax;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_00401475: ;
    PUSH32(esp, 1);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C319(); /* call 0x0042C319 */

loc_00401487: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0040148D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_004014A0
 * Original: 0x004014A0 - 0x004014E9 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004014A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004014A0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84B8A4);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 8));
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004014C6; /* je: equal / zero */

loc_004014B2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x645C60);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004014C3: ;
    esp = esp + 0x18;

loc_004014C6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B89C), _icall_esp); /* indirect call */
    }

loc_004014CD: ;
    edx = eax;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    esp = esp + 4;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004014F0
 * Original: 0x004014F0 - 0x0040151B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004014F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004014F0: ;
    eax = MEM32(0x84B8A4);
    if (TEST_Z(eax, eax)) goto loc_0040150E; /* je: equal / zero */

loc_004014F9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x645C60);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0040150B: ;
    esp = esp + 0x18;

loc_0040150E: ;
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B8A0), _icall_esp); /* indirect call */
    }

loc_00401519: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00401520
 * Original: 0x00401520 - 0x00401649 (297 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401520(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00401520: ;
    esp = esp - 0x1C;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x84B908); /* movss */
    eax = esp + 0x18;
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x24); /* movss */
    edi = MEM32(0x84B904);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    esi = esp + 0x18;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_004015AD: ;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_004015B6: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    ecx = MEM32(0x5559E8);
    MEMF(0x5559F0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    ecx = ecx | 1;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEMF(0x5559F4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x5559F8) = xmm0; /* movss */
    MEM32(0x5559E8) = ecx;
    if (TEST_NZ(edi, edi)) goto loc_004015F8; /* jne: not equal / not zero */

loc_004015F3: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_004015F8: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(0x561008);
    if (TEST_Z(eax, eax)) goto loc_0040160D; /* je: equal / zero */

loc_00401606: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0040160D: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0040161C; /* je: equal / zero */

loc_00401615: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0040161C: ;
    xmm0 = MEMF(ebx); /* movss */
    MEMF(0x84B944) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    POP32(esp, edi);
    MEMF(0x84B948) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    POP32(esp, esi);
    MEMF(0x84B94C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00401650
 * Original: 0x00401650 - 0x00401705 (181 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401650(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00401650: ;
    esp = esp - 0x10;
    xmm0 = MEMF(edi + 8); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x84B904);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    esi = esp + 0x14;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00401684: ;
    xmm0 = MEMF(esp + 8); /* movss */
    ecx = MEM32(0x5559E8);
    MEMF(0x5559FC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    ecx = ecx | 2;
    MEMF(0x555A00) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    POP32(esp, esi);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEMF(0x555A04) = xmm0; /* movss */
    MEM32(0x5559E8) = ecx;
    POP32(esp, ebx);
    if (TEST_NZ(ebx, ebx)) goto loc_004016C8; /* jne: not equal / not zero */

loc_004016C3: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_004016C8: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004016DB; /* je: equal / zero */

loc_004016D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004016DB: ;
    xmm0 = MEMF(edi); /* movss */
    MEMF(0x84B950) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(0x84B954) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(0x84B958) = xmm0; /* movss */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00401710
 * Original: 0x00401710 - 0x004017A4 (148 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401710(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00401710: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = esi;
    if (TEST_NZ(esi, esi)) goto loc_0040171B; /* jne: not equal / not zero */

loc_00401716: ;
    ecx = 0x84B95C;

loc_0040171B: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = edi;
    if (TEST_NZ(edi, edi)) goto loc_00401726; /* jne: not equal / not zero */

loc_00401721: ;
    eax = 0x84B968;

loc_00401726: ;
    edx = MEM32(0x84B904);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(0x84B898);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0054B0B1(); /* call 0x0054B0B1 */

loc_0040174F: ;
    if (TEST_Z(esi, esi)) goto loc_00401779; /* je: equal / zero */

loc_00401753: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(0x84B95C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(0x84B960) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(0x84B964) = xmm0; /* movss */

loc_00401779: ;
    if (TEST_Z(edi, edi)) goto loc_004017A3; /* je: equal / zero */

loc_0040177D: ;
    xmm0 = MEMF(edi); /* movss */
    MEMF(0x84B968) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(0x84B96C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(0x84B970) = xmm0; /* movss */

loc_004017A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004017B0
 * Original: 0x004017B0 - 0x004017CD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004017B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004017B0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84B898);
    esi = esp + 8;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_004017C4: ;
    if (TEST_Z(edi, edi)) { sub_004017CD(); return; } /* je: equal / zero */

loc_004017C8: ;
    esi = edi + -8;
    g_seh_ebp = ebp; sub_004017CF(); return; /* tail jmp 0x004017CF */

}

/**
 * sub_00401830
 * Original: 0x00401830 - 0x004018A1 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401830(void)
{
    int _flags = 0; /* fallback flag var */

loc_00401830: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BA90);
    if (TEST_Z(eax, eax)) goto loc_0040184C; /* je: equal / zero */

loc_0040183C: ;
    /* nop */

loc_00401840: ;
    if (CMP_EQ(MEM32(eax + 0x18), esi)) { sub_004018A1(); return; } /* je: equal / zero */

loc_00401845: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00401840; /* jne: not equal / not zero */

loc_0040184C: ;
    PUSH32(esp, 0x710);
    PUSH32(esp, 0x645C28);
    PUSH32(esp, 5);
    PUSH32(esp, 0x645C18);
    eax = 0; /* xor self */
    ecx = 0x20;
    PUSH32(esp, 0); sub_00401230(); /* call 0x00401230 */

loc_00401869: ;
    MEM32(eax + 0x18) = esi;
    MEM16(eax + 0x1C) = LO16(edi);
    edx = MEM32(0x84BA90);
    esp = esp + 0x10;
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = 0x84BA8C;
    if (TEST_Z(edx, edx)) goto loc_00401893; /* je: equal / zero */

loc_00401882: ;
    edx = 0x84BA90;

loc_00401887: ;
    ecx = MEM32(edx);
    esi = MEM32(ecx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = ecx + 4;
    if (TEST_NZ(esi, esi)) goto loc_00401887; /* jne: not equal / not zero */

loc_00401893: ;
    MEM32(ecx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004018B0
 * Original: 0x004018B0 - 0x00401A0C (348 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004018B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004018B0: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(0x84BA90);
    if (TEST_Z(esi, esi)) goto loc_00401A07; /* je: equal / zero */

loc_004018C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_004018D0;

    /* nop */
    edi = edi;

loc_004018D0: ;
    edx = MEM32(esi + 4);
    ebx = MEM32(esi + 0x18);
    edi = MEM32(0x84B898);
    eax = esi + 4;
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO16(edx, MEM16(esi + 0x1C));
    SET_LO8(ecx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    MEM32(esp + 0x10) = esi;
    esi = esp + 0x1C;
    MEM32(esp + 0x20) = eax;
    MEM16(esp + 0x14) = LO16(edx);
    ebp = ecx;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00401902: ;
    esi = 0; /* xor self */
    if (CMP_EQ(edi, esi)) goto loc_0040190D; /* je: equal / zero */

loc_00401908: ;
    edi = edi + 0xFFFFFFF8u;
    goto loc_0040190F;

loc_0040190D: ;
    edi = 0; /* xor self */

loc_0040190F: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0040191C: ;
    SET_LO16(eax, MEM16(esp + 0x14));
    ecx = ebx;
    edx = 1;
    MEM16(edi + ebx * 2 + 0x94) = LO16(eax);
    ebx = MEM32(edi + 0xD4);
    edx = edx << LO8(ecx);
    ebx = ebx | edx;
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    MEM32(edi + 0xD4) = ebx;
    eax = ebx;
    if (CMP_NE(ebp, esi)) goto loc_0040199C; /* jne: not equal / not zero */

loc_00401946: ;
    if (CMP_EQ(eax, esi)) goto loc_0040199C; /* je: equal / zero */

loc_0040194A: ;
    ebx = MEM32(edi + 0x64);
    eax = edi + 0x64;
    if (CMP_EQ(ebx, eax)) goto loc_00401996; /* je: equal / zero */

loc_00401954: ;
    goto loc_00401960;

    /* nop */
    /* nop */

loc_00401960: ;
    ebp = MEM32(edi + 0xD4);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_0040196F: ;
    if (TEST_Z(MEM32(ebx + 8), ebp)) goto loc_00401978; /* je: equal / zero */

loc_00401974: ;
    MEM8(ebx + 0x30) = MEM8(ebx + 0x30) | 2;

loc_00401978: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0040198B; /* je: equal / zero */

loc_00401980: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0040198B: ;
    ebx = MEM32(ebx);
    eax = edi + 0x64;
    if (CMP_NE(ebx, eax)) goto loc_00401960; /* jne: not equal / not zero */

loc_00401994: ;
    esi = 0; /* xor self */

loc_00401996: ;
    MEM32(edi + 0xD4) = esi;

loc_0040199C: ;
    if (CMP_EQ(MEM32(esp + 0x28), esi)) goto loc_004019B0; /* je: equal / zero */

loc_004019A2: ;
    SET_LO8(ecx, MEM8(esp + 0x24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004019AC: ;
    MEM32(esp + 0x28) = esi;

loc_004019B0: ;
    if (CMP_EQ(MEM32(esp + 0x1C), esi)) goto loc_004019C1; /* je: equal / zero */

loc_004019B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004019C1: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(edx);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi);
    eax = esi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_004019D8; /* je: equal / zero */

loc_004019D6: ;
    MEM32(eax) = ecx;

loc_004019D8: ;
    MEM32(edi) = 0;
    PUSH32(esp, 0x748);
    PUSH32(esp, 0x645C00);
    ecx = 0; /* xor self */
    edi = esp + 0x18;
    MEM32(edx) = 0;
    PUSH32(esp, 0); sub_00401300(); /* call 0x00401300 */

loc_004019F9: ;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_004018D0; /* jne: not equal / not zero */

loc_00401A04: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00401A07: ;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00401A10
 * Original: 0x00401A10 - 0x00401A3D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401A10: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84B898);
    MEM32(esp + 0x10) = 0;
    esi = esp + 8;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00401A34: ;
    if (TEST_Z(edi, edi)) { sub_00401A3D(); return; } /* je: equal / zero */

loc_00401A38: ;
    eax = edi + -8;
    g_seh_ebp = ebp; sub_00401A3F(); return; /* tail jmp 0x00401A3F */

}

/**
 * sub_00401A90
 * Original: 0x00401A90 - 0x00401CBA (554 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401A90: ;
    esp = esp - 0x1AC;
    edx = MEM32(esp + 0x1B0);
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1B8);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM8(esp + 0x14) = LO8(eax);
    ecx = 0x1F;
    edi = esp + 0x40;
    MEM32(esp + 0x3C) = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x3F;
    edi = esp + 0xC0;
    MEM32(esp + 0xBC) = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM32(esp + 0x21) = eax;
    MEM32(esp + 0x25) = eax;
    MEM32(esp + 0x29) = eax;
    MEM32(esp + 0x2D) = eax;
    MEM16(esp + 0x31) = LO16(eax);
    edi = 0; /* xor self */
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    MEM8(esp + 0x33) = LO8(eax);
    if (CMP_LE(ebp, esi)) goto loc_00401B3D; /* jle: less or equal (signed <=) */

loc_00401B06: ;
    esi = edx + 0x30;
    MEM32(esp + 0x10) = ebp;
    /* nop */

loc_00401B10: ;
    eax = MEM32(esi);
    ecx = eax;
    MEM32(esp + eax * 8 + 0xBC) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esp + eax * 8 + 0xC0) = ecx;
    SET_LO8(ecx, MEM8(edx + edi + 0x70));
    edi++;
    esi = esi + 8;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEM8(esp + eax + 0x14) = LO8(ecx);
    MEM32(esp + eax * 4 + 0x3C) = 1;
    if (CMP_L(edi, ebp)) goto loc_00401B10; /* jl: less (signed <) */

loc_00401B3D: ;
    if (CMP_EQ(MEM32(esp + 0x1C4), 0x1C)) goto loc_00401BC2; /* je: equal / zero */

loc_00401B47: ;
    ecx = esp + 0x1C4;
    edi = edi;

loc_00401B50: ;
    eax = MEM32(edx + 0x24);
    eax--;
    if (CMP_A(eax, 7)) goto loc_00401B79; /* ja: above (unsigned >) */

loc_00401B59: ;
    eax = ZX8(MEM8(eax + 0x401CF0));
    { uint32_t _jt = MEM32(eax * 4 + 0x401CE4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00401B67u) goto loc_00401B67;
    if (_jt == 0x00401B70u) goto loc_00401B70;
    if (_jt == 0x00401B79u) goto loc_00401B79;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00401B67: ;
    eax = MEM32(ebx * 4 + 0x754920);
    goto loc_00401B7E;

loc_00401B70: ;
    eax = MEM32(ebx * 4 + 0x7548B0);
    goto loc_00401B7E;

loc_00401B79: ;
    eax = 0x1C;

loc_00401B7E: ;
    edi = MEM32(esp + eax * 4 + 0x3C);
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = esp + eax * 4 + 0x3C;
    if (TEST_NZ(edi, edi)) goto loc_00401BB7; /* jne: not equal / not zero */

loc_00401B8A: ;
    edi = MEM32(edx + 0x2C);
    MEM32(esi) = 1;
    esi = MEM32(esp + 0x10);
    edi++;
    esi++;
    MEM32(esp + eax * 8 + 0xBC) = eax;
    MEM32(esp + eax * 8 + 0xC0) = 0;
    MEM8(esp + eax + 0x14) = 0x7F;
    MEM32(edx + 0x2C) = edi;
    MEM32(esp + 0x10) = esi;

loc_00401BB7: ;
    ebx = MEM32(ecx + 4);
    ecx = ecx + 4;
    if (CMP_NE(ebx, 0x1C)) goto loc_00401B50; /* jne: not equal / not zero */

loc_00401BC2: ;
    ecx = edx + 0x30;
    esi = 0; /* xor self */
    ebp = 0x754994;
    eax = ecx;
    edi = edi;

loc_00401BD0: ;
    edi = MEM32(ebp + -4);
    ebx = MEM32(esp + edi * 4 + 0x3C);
    if (TEST_Z(ebx, ebx)) goto loc_00401BFA; /* je: equal / zero */

loc_00401BDB: ;
    ebx = MEM32(esp + edi * 8 + 0xBC);
    MEM32(eax) = ebx;
    ebx = MEM32(esp + edi * 8 + 0xC0);
    MEM32(eax + 4) = ebx;
    SET_LO8(ebx, MEM8(esp + edi + 0x14));
    MEM8(esi + edx + 0x70) = LO8(ebx);
    esi++;
    eax = eax + 8;

loc_00401BFA: ;
    edi = MEM32(ebp);
    ebx = MEM32(esp + edi * 4 + 0x3C);
    if (TEST_Z(ebx, ebx)) goto loc_00401C24; /* je: equal / zero */

loc_00401C05: ;
    ebx = MEM32(esp + edi * 8 + 0xBC);
    MEM32(eax) = ebx;
    ebx = MEM32(esp + edi * 8 + 0xC0);
    MEM32(eax + 4) = ebx;
    SET_LO8(ebx, MEM8(esp + edi + 0x14));
    MEM8(esi + edx + 0x70) = LO8(ebx);
    esi++;
    eax = eax + 8;

loc_00401C24: ;
    edi = MEM32(ebp + 4);
    ebx = MEM32(esp + edi * 4 + 0x3C);
    if (TEST_Z(ebx, ebx)) goto loc_00401C4E; /* je: equal / zero */

loc_00401C2F: ;
    ebx = MEM32(esp + edi * 8 + 0xBC);
    MEM32(eax) = ebx;
    ebx = MEM32(esp + edi * 8 + 0xC0);
    MEM32(eax + 4) = ebx;
    SET_LO8(ebx, MEM8(esp + edi + 0x14));
    MEM8(esi + edx + 0x70) = LO8(ebx);
    esi++;
    eax = eax + 8;

loc_00401C4E: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(esp + edi * 4 + 0x3C);
    if (TEST_Z(ebx, ebx)) goto loc_00401C78; /* je: equal / zero */

loc_00401C59: ;
    ebx = MEM32(esp + edi * 8 + 0xBC);
    MEM32(eax) = ebx;
    ebx = MEM32(esp + edi * 8 + 0xC0);
    MEM32(eax + 4) = ebx;
    SET_LO8(ebx, MEM8(esp + edi + 0x14));
    MEM8(esi + edx + 0x70) = LO8(ebx);
    esi++;
    eax = eax + 8;

loc_00401C78: ;
    ebp = ebp + 0x10;
    if (CMP_L(ebp, 0x754A14)) goto loc_00401BD0; /* jl: less (signed <) */

loc_00401C87: ;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 0x2C) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x34) = eax;
    esi = MEM32(edx + 0x28);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_00401CA6: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) { sub_00401CBA(); return; } /* je: equal / zero */

loc_00401CAD: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C59C7(); /* call 0x004C59C7 */

loc_00401CB8: ;
    g_seh_ebp = ebp; sub_00401CC8(); return; /* tail jmp 0x00401CC8 */

}

/**
 * sub_00401D00
 * Original: 0x00401D00 - 0x00401D9F (159 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401D00: ;
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, 0x1C - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(eax, 0x1C)) goto loc_00401D9D; /* je: equal / zero */

loc_00401D12: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = esp + 0x18;
    /* nop */

loc_00401D20: ;
    ecx = MEM32(esi + 0x24);
    ecx--;
    if (CMP_A(ecx, 7)) goto loc_00401D49; /* ja: above (unsigned >) */

loc_00401D29: ;
    ecx = ZX8(MEM8(ecx + 0x401DAC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x401DA0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00401D37u) goto loc_00401D37;
    if (_jt == 0x00401D40u) goto loc_00401D40;
    if (_jt == 0x00401D49u) goto loc_00401D49;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00401D37: ;
    edi = MEM32(eax * 4 + 0x754920);
    goto loc_00401D4E;

loc_00401D40: ;
    edi = MEM32(eax * 4 + 0x7548B0);
    goto loc_00401D4E;

loc_00401D49: ;
    edi = 0x1C;

loc_00401D4E: ;
    eax = MEM32(esi + 0x2C);
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00401D8F; /* jle: less or equal (signed <=) */

loc_00401D59: ;
    eax = esi + 0x30;
    /* nop */

loc_00401D60: ;
    if (TEST_Z(edx, edx)) goto loc_00401D71; /* je: equal / zero */

loc_00401D64: ;
    ebp = MEM32(eax);
    MEM32(eax + -8) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(eax + -4) = ebp;
    goto loc_00401D7A;

loc_00401D71: ;
    if (CMP_NE(MEM32(eax), edi)) goto loc_00401D7A; /* jne: not equal / not zero */

loc_00401D75: ;
    edx = 1;

loc_00401D7A: ;
    ebp = MEM32(esi + 0x2C);
    ecx++;
    eax = eax + 8;
    if (CMP_L(ecx, ebp)) goto loc_00401D60; /* jl: less (signed <) */

loc_00401D85: ;
    if (TEST_Z(edx, edx)) goto loc_00401D8F; /* je: equal / zero */

loc_00401D89: ;
    eax = ebp;
    eax--;
    MEM32(esi + 0x2C) = eax;

loc_00401D8F: ;
    eax = MEM32(ebx + 4);
    ebx = ebx + 4;
    if (CMP_NE(eax, 0x1C)) goto loc_00401D20; /* jne: not equal / not zero */

loc_00401D9A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00401D9D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00401DC0
 * Original: 0x00401DC0 - 0x00401DEE (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401DC0: ;
    eax = MEM32(ecx + 0x24);
    esp = esp - 0xC;
    eax--;
    (void)0; /* cmp eax, 7 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 7)) { sub_00401DEE(); return; } /* ja: above (unsigned >) */

loc_00401DCE: ;
    eax = ZX8(MEM8(eax + 0x401E80));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x401E74)); return; /* indirect tail jmp */

    edi = MEM32(edx * 4 + 0x754920);
    g_seh_ebp = ebp; sub_00401DF3(); return; /* tail jmp 0x00401DF3 */

    edi = MEM32(edx * 4 + 0x7548B0);
    g_seh_ebp = ebp; sub_00401DF3(); return; /* tail jmp 0x00401DF3 */

}

/**
 * sub_00401E90
 * Original: 0x00401E90 - 0x00401EBA (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00401E90: ;
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x1C);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x78) = eax;
    if (TEST_Z(eax, eax)) { sub_00401EBA(); return; } /* je: equal / zero */

loc_00401EA3: ;
    PUSH32(esp, 0); sub_00401A90(); /* call 0x00401A90 */

loc_00401EA8: ;
    PUSH32(esp, 0);
    ecx = esi;
    edx = 5;
    PUSH32(esp, 0); sub_00401DC0(); /* call 0x00401DC0 */

loc_00401EB6: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00401EE0
 * Original: 0x00401EE0 - 0x00401EF1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401EE0: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_00401EF1(); return; } /* jne: not equal / not zero */

loc_00401EEA: ;
    ebx = 0xFFFFD8F0u;
    g_seh_ebp = ebp; sub_00401F0E(); return; /* tail jmp 0x00401F0E */

}

/**
 * sub_00401F50
 * Original: 0x00401F50 - 0x00402006 (182 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401F50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00401F50: ;
    MEMF(0x84B8B8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(0x84B8BC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(0x84B8C0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x84B8C8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(0x84B8D0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(0x84B8D4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, esi);
    MEM32(0x84B8B0) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(0x84B8D8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(0x84B904);
    esi = esp + 0xC;
    MEM32(0x84B8B4) = ecx;
    MEM32(0x84B8C4) = edx;
    MEM32(0x84B8CC) = eax;
    MEMF(0x84B8DC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00401FE5: ;
    PUSH32(esp, edi);
    eax = 0x84B8B0;
    PUSH32(esp, 0); sub_0054EE0C(); /* call 0x0054EE0C */

loc_00401FF0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00402005; /* je: equal / zero */

loc_00401FFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00402005: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00402010
 * Original: 0x00402010 - 0x00402024 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00402010: ;
    eax = MEM32(esp + 4);
    if (TEST_NZ(eax, eax)) { sub_00402024(); return; } /* jne: not equal / not zero */

loc_00402018: ;
    MEM32(0x84B8B0) = 0xFFFFD8F0u;
    g_seh_ebp = ebp; sub_00402044(); return; /* tail jmp 0x00402044 */

}

/**
 * sub_00402080
 * Original: 0x00402080 - 0x004020FC (124 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402080(void)
{
    float xmm0;

loc_00402080: ;
    eax = MEM32(ebx + 0x20);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(ebx + 0x20);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x2C) = eax;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x30) = edx;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x34) = ecx;
    edx = MEM32(ebx + 0x20);
    ecx = MEM32(esp + 0x10);
    MEMF(edx + 0x38) = xmm0; /* movss */
    eax = MEM32(ebx + 0x20);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(eax + 0x3C) = ecx;
    edx = MEM32(ebx + 0x20);
    ecx = MEM32(esp + 0x18);
    MEMF(edx + 0x40) = xmm0; /* movss */
    eax = MEM32(ebx + 0x20);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(eax + 0x44) = ecx;
    edx = MEM32(ebx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(edx + 0x48) = xmm0; /* movss */
    eax = MEM32(0x84B904);
    edi = MEM32(ebx + 0x20);
    esi = MEM32(ebx + 0x28);
    PUSH32(esp, eax);
    edi = edi + 0x28;
    PUSH32(esp, 0); sub_0054EA6F(); /* call 0x0054EA6F */

loc_004020F2: ;
    ecx = MEM32(ebx + 0x20);
    POP32(esp, edi);
    MEM8(ecx + 0x24) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00402100
 * Original: 0x00402100 - 0x0040243F (831 bytes, 259 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00402100: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x646054);
    edi = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x646048);
    eax = 0; /* xor self */
    ecx = 0x7C;
    PUSH32(esp, 0); sub_00401230(); /* call 0x00401230 */

loc_00402125: ;
    esp = esp + 0x10;
    esi = eax;
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, 8 - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_A(edi, 8)) goto loc_0040241C; /* ja: above (unsigned >) */

loc_00402139: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x402464); /* switch: 9 entries, 7 targets */
    if (_jt == 0x00402140u) goto loc_00402140;
    if (_jt == 0x00402176u) goto loc_00402176;
    if (_jt == 0x004021D8u) goto loc_004021D8;
    if (_jt == 0x0040223Eu) goto loc_0040223E;
    if (_jt == 0x004022ABu) goto loc_004022AB;
    if (_jt == 0x00402319u) goto loc_00402319;
    if (_jt == 0x0040241Cu) goto loc_0040241C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00402140: ;
    MEM32(esi + 0x24) = ebx;
    edx = esi + 0x18;
    eax = 0x84B920;
    MEM32(esi + 0x28) = ebx;
    PUSH32(esp, 0); sub_003E1830(); /* call 0x003E1830 */

loc_00402153: ;
    PUSH32(esp, 0x646054);
    PUSH32(esp, 4);
    ecx = 0; /* xor self */
    edx = 0x7F;
    eax = 1;
    PUSH32(esp, 0); sub_004014A0(); /* call 0x004014A0 */

loc_0040216B: ;
    esp = esp + 8;
    MEM32(esi + 0x20) = eax;
    goto loc_0040241C;

loc_00402176: ;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = 5;
    eax = MEM32(0x84B898);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0054AFCB(); /* call 0x0054AFCB */

loc_0040218D: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0040219B; /* jge: greater or equal (signed >=) */

loc_00402191: ;
    PUSH32(esp, 0x99);
    goto loc_00402335;

loc_0040219B: ;
    edx = esi + 0x18;
    eax = 0x84B920;
    PUSH32(esp, 0); sub_003E1830(); /* call 0x003E1830 */

loc_004021A8: ;
    PUSH32(esp, 0x646054);
    PUSH32(esp, 4);
    ecx = 0; /* xor self */
    edx = 0xA7;
    eax = 1;
    PUSH32(esp, 0); sub_004014A0(); /* call 0x004014A0 */

loc_004021C0: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_00401A90(); /* call 0x00401A90 */

loc_004021D0: ;
    esp = esp + 0x18;
    goto loc_0040241C;

loc_004021D8: ;
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = 6;
    eax = MEM32(0x84B898);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0054AFCB(); /* call 0x0054AFCB */

loc_004021EF: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004021FD; /* jge: greater or equal (signed >=) */

loc_004021F3: ;
    PUSH32(esp, 0xC5);
    goto loc_00402335;

loc_004021FD: ;
    edx = esi + 0x18;
    eax = 0x84B920;
    PUSH32(esp, 0); sub_003E1830(); /* call 0x003E1830 */

loc_0040220A: ;
    PUSH32(esp, 0x646054);
    PUSH32(esp, 8);
    ecx = 0; /* xor self */
    edx = 0xD3;
    eax = 1;
    PUSH32(esp, 0); sub_004014A0(); /* call 0x004014A0 */

loc_00402222: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(eax) = 0x40;
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0); sub_00401A90(); /* call 0x00401A90 */

loc_00402236: ;
    esp = esp + 0x18;
    goto loc_0040241C;

loc_0040223E: ;
    edx = esi + 0x28;
    PUSH32(esp, edx);
    MEM32(esi + 0x24) = 7;
    eax = MEM32(0x84B898);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0054AFCB(); /* call 0x0054AFCB */

loc_00402255: ;
    if (CMP_GE(eax & eax, 0)) goto loc_00402263; /* jge: greater or equal (signed >=) */

loc_00402259: ;
    PUSH32(esp, 0xF3);
    goto loc_00402335;

loc_00402263: ;
    edx = esi + 0x18;
    eax = 0x84B920;
    PUSH32(esp, 0); sub_003E1830(); /* call 0x003E1830 */

loc_00402270: ;
    PUSH32(esp, 0x646054);
    PUSH32(esp, 8);
    ecx = 0; /* xor self */
    edx = 0x101;
    eax = 1;
    PUSH32(esp, 0); sub_004014A0(); /* call 0x004014A0 */

loc_00402288: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(eax) = 0x40;
    MEM8(eax + 1) = LO8(ebx);
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0); sub_00401A90(); /* call 0x00401A90 */

loc_004022A3: ;
    esp = esp + 0x20;
    goto loc_0040241C;

loc_004022AB: ;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = 8;
    eax = MEM32(0x84B898);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0054AFCB(); /* call 0x0054AFCB */

loc_004022C2: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004022CD; /* jge: greater or equal (signed >=) */

loc_004022C6: ;
    PUSH32(esp, 0x123);
    goto loc_00402335;

loc_004022CD: ;
    edx = esi + 0x18;
    eax = 0x84B920;
    PUSH32(esp, 0); sub_003E1830(); /* call 0x003E1830 */

loc_004022DA: ;
    PUSH32(esp, 0x646054);
    PUSH32(esp, 0x10);
    ecx = 0; /* xor self */
    edx = 0x131;
    eax = 1;
    PUSH32(esp, 0); sub_004014A0(); /* call 0x004014A0 */

loc_004022F2: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(eax) = 0x40;
    MEM8(eax + 1) = LO8(ebx);
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0); sub_00401A90(); /* call 0x00401A90 */

loc_00402311: ;
    esp = esp + 0x28;
    goto loc_0040241C;

loc_00402319: ;
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = edi;
    eax = MEM32(0x84B898);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0054AFCB(); /* call 0x0054AFCB */

loc_0040232C: ;
    if (CMP_GE(eax & eax, 0)) goto loc_00402355; /* jge: greater or equal (signed >=) */

loc_00402330: ;
    PUSH32(esp, 0x158);

loc_00402335: ;
    PUSH32(esp, 0x646054);
    ecx = 0; /* xor self */
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00401300(); /* call 0x00401300 */

loc_00402345: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00402355: ;
    edx = esi + 0x18;
    eax = 0x84B920;
    PUSH32(esp, 0); sub_003E1830(); /* call 0x003E1830 */

loc_00402362: ;
    PUSH32(esp, 0x646054);
    PUSH32(esp, 0x50);
    ecx = 0; /* xor self */
    edx = 0x166;
    eax = 1;
    PUSH32(esp, 0); sub_004014A0(); /* call 0x004014A0 */

loc_0040237A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x20) = eax;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = MEM32(esi + 0x20);
    eax = eax + 0xC;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = MEM32(esi + 0x20);
    eax = eax + 0x18;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = edi;
    esp = esp + 8;
    eax--;
    if ((eax == 0)) goto loc_004023F4; /* je: equal / zero */

loc_004023BE: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_004023DE; /* je: equal / zero */

loc_004023C3: ;
    eax--;
    if ((eax != 0)) goto loc_00402412; /* jne: not equal / not zero */

loc_004023C6: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00401A90(); /* call 0x00401A90 */

loc_004023D9: ;
    esp = esp + 0x20;
    goto loc_00402412;

loc_004023DE: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00401A90(); /* call 0x00401A90 */

loc_004023EF: ;
    esp = esp + 0x1C;
    goto loc_00402412;

loc_004023F4: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    PUSH32(esp, 6);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00401A90(); /* call 0x00401A90 */

loc_00402409: ;
    edx = MEM32(esi + 0x20);
    esp = esp + 0x24;
    MEM32(edx + 0x4C) = ebx;

loc_00402412: ;
    edx = 1;
    PUSH32(esp, 0); sub_00401E90(); /* call 0x00401E90 */

loc_0040241C: ;
    if (CMP_EQ(MEM32(0x84B938), ebx)) { sub_0040243F(); return; } /* je: equal / zero */

loc_00402424: ;
    eax = MEM32(0x84B93C);
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_00402438; /* je: equal / zero */

loc_0040242E: ;
    edi = edi;

loc_00402430: ;
    eax = MEM32(eax + 4);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_00402430; /* jne: not equal / not zero */

loc_00402438: ;
    MEM32(eax + 4) = esi;
    MEM32(esi) = eax;
    g_seh_ebp = ebp; sub_0040244B(); return; /* tail jmp 0x0040244B */

}

/**
 * sub_00402490
 * Original: 0x00402490 - 0x004024AC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00402490: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, 0); sub_00402860(); /* call 0x00402860 */

loc_00402498: ;
    if (TEST_NZ(eax, eax)) { sub_004024AC(); return; } /* jne: not equal / not zero */

loc_0040249C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x646008);
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_004024A7: ;
    esp = esp + 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00402600
 * Original: 0x00402600 - 0x0040263D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402600(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00402600: ;
    esp = esp - 0x14;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00402860(); /* call 0x00402860 */

loc_00402625: ;
    if (TEST_NZ(eax, eax)) { sub_0040263D(); return; } /* jne: not equal / not zero */

loc_00402629: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x646008);
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_00402634: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_004026B0
 * Original: 0x004026B0 - 0x004026ED (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004026B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_004026B0: ;
    esp = esp - 0x14;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00402860(); /* call 0x00402860 */

loc_004026D5: ;
    if (TEST_NZ(eax, eax)) { sub_004026ED(); return; } /* jne: not equal / not zero */

loc_004026D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x646008);
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_004026E4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00402770
 * Original: 0x00402770 - 0x00402793 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00402770: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00402860(); /* call 0x00402860 */

loc_00402779: ;
    if (TEST_NZ(eax, eax)) { sub_00402793(); return; } /* jne: not equal / not zero */

loc_0040277D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x646008);
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_00402788: ;
    esp = esp + 8;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004027E0
 * Original: 0x004027E0 - 0x00402806 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004027E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004027E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00402860(); /* call 0x00402860 */

loc_004027F0: ;
    if (TEST_NZ(eax, eax)) { sub_00402806(); return; } /* jne: not equal / not zero */

loc_004027F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x646008);
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_004027FF: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00402860
 * Original: 0x00402860 - 0x00402885 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00402860: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84B938);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C843(); /* call 0x0042C843 */

loc_0040286F: ;
    if (TEST_Z(eax, eax)) { sub_00402885(); return; } /* je: equal / zero */

loc_00402873: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x645F64);
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_0040287E: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004028D0
 * Original: 0x004028D0 - 0x00402A66 (406 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004028D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004028D0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x17D);
    PUSH32(esp, 0x646084);
    ebx = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x58;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_00401230(); /* call 0x00401230 */

loc_004028FD: ;
    esi = eax;
    eax = MEM32(esp + 0x44);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x40);
    esp = esp + 0x10;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00402990; /* je: equal / zero */

loc_00402912: ;
    eax--;
    if ((eax == 0)) goto loc_0040291C; /* je: equal / zero */

loc_00402915: ;
    eax--;
    if ((eax != 0)) goto loc_004029F7; /* jne: not equal / not zero */

loc_0040291C: ;
    edx = 0; /* xor self */
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    if (CMP_EQ(ebp, ecx)) goto loc_0040293B; /* je: equal / zero */

loc_00402932: ;
    MEM32(esi + 0x2C) = ebp;
    MEM8(esi + 0x1C) = 1;
    goto loc_00402954;

loc_0040293B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_00402951: ;
    MEM32(esi + 0x2C) = eax;

loc_00402954: ;
    eax = MEM32(esi + 0x2C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00402A5F; /* je: equal / zero */

loc_00402960: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x84B898);
    ebx = esi + 0x20;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_0054B045(); /* call 0x0054B045 */

loc_0040298E: ;
    goto loc_004029E6;

loc_00402990: ;
    eax = MEM32(esp + 0x2C);
    if (CMP_EQ(eax, ecx)) goto loc_004029AA; /* je: equal / zero */

loc_00402998: ;
    if (CMP_EQ(ebx, ecx)) goto loc_004029AA; /* je: equal / zero */

loc_0040299C: ;
    ebp = esi + 0x2C;
    MEM32(ebp) = eax;
    eax = ebx;
    MEM8(esi + 0x1D) = 1;
    goto loc_004029C9;

loc_004029AA: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ebp = esi + 0x2C;
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0); sub_00401380(); /* call 0x00401380 */

loc_004029BA: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) goto loc_00402A5F; /* jl: less (signed <) */

loc_004029C5: ;
    eax = MEM32(esp + 0xC);

loc_004029C9: ;
    if (CMP_A(eax, 0x800000)) goto loc_00402A5F; /* ja: above (unsigned >) */

loc_004029D4: ;
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    eax = MEM32(0x84B898);
    ebx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0054B008(); /* call 0x0054B008 */

loc_004029E6: ;
    if (TEST_S(eax, eax)) goto loc_00402A5F; /* jl: less (signed <) */

loc_004029EA: ;
    eax = 0x84B918;
    edx = esi + 0x24;
    PUSH32(esp, 0); sub_003E1830(); /* call 0x003E1830 */

loc_004029F7: ;
    eax = MEM32(esp + 0x30);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(0x84B8F0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = 0x84B8EC;
    if (TEST_Z(ecx, ecx)) goto loc_00402A1E; /* je: equal / zero */

loc_00402A0D: ;
    ecx = 0x84B8F0;

loc_00402A12: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = eax + 4;
    if (TEST_NZ(edx, edx)) goto loc_00402A12; /* jne: not equal / not zero */

loc_00402A1E: ;
    MEM32(eax + 4) = esi;
    MEM32(esi) = eax;
    PUSH32(esp, 3);
    eax = esi;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_00402B90(); /* call 0x00402B90 */

loc_00402A33: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esp + 0x44);
    edx = edx | 0x40;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x34) = 6;
    MEM32(esi + 0x54) = edx;
    MEM32(esi + 0x38) = eax;
    if (TEST_Z(eax, eax)) goto loc_00402A59; /* je: equal / zero */

loc_00402A51: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00402A56: ;
    esp = esp + 8;

loc_00402A59: ;
    ecx = MEM32(esp + 0x34);
    MEM32(ecx) = esi;

loc_00402A5F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00402A70
 * Original: 0x00402A70 - 0x00402B85 (277 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00402A70: ;
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi);
    SET_LO8(eax, MEM8(ecx + 0x54));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00402B83; /* jns: not sign (positive) */

loc_00402A80: ;
    eax = MEM32(ecx + 0x18);
    eax = eax - 0;
    PUSH32(esp, ebx);
    if ((eax == 0)) goto loc_00402AE5; /* je: equal / zero */

loc_00402A89: ;
    eax--;
    if ((eax == 0)) goto loc_00402ABC; /* je: equal / zero */

loc_00402A8C: ;
    eax--;
    if ((eax != 0)) goto loc_00402B24; /* jne: not equal / not zero */

loc_00402A93: ;
    ebx = MEM32(ecx + 0x20);
    eax = MEM32(0x84B898);
    PUSH32(esp, 0); sub_0054B07E(); /* call 0x0054B07E */

loc_00402AA0: ;
    if (TEST_S(eax, eax)) goto loc_00402B82; /* jl: less (signed <) */

loc_00402AA8: ;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00402B24; /* jne: not equal / not zero */

loc_00402AB1: ;
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_00402ABA: ;
    goto loc_00402B24;

loc_00402ABC: ;
    ebx = MEM32(ecx + 0x20);
    eax = MEM32(0x84B898);
    PUSH32(esp, 0); sub_0054B07E(); /* call 0x0054B07E */

loc_00402AC9: ;
    if (TEST_S(eax, eax)) goto loc_00402B82; /* jl: less (signed <) */

loc_00402AD1: ;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00402B24; /* jne: not equal / not zero */

loc_00402ADA: ;
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_00402AE3: ;
    goto loc_00402B24;

loc_00402AE5: ;
    ebx = MEM32(ecx + 0x20);
    eax = MEM32(0x84B898);
    PUSH32(esp, 0); sub_0054B07E(); /* call 0x0054B07E */

loc_00402AF2: ;
    if (TEST_S(eax, eax)) goto loc_00402B82; /* jl: less (signed <) */

loc_00402AFA: ;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00402B24; /* jne: not equal / not zero */

loc_00402B03: ;
    edx = MEM32(eax + 0x2C);
    PUSH32(esp, 0x64606C);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    edx = 0x278;
    PUSH32(esp, 0); sub_004014F0(); /* call 0x004014F0 */

loc_00402B18: ;
    eax = MEM32(edi);
    esp = esp + 8;
    MEM32(eax + 0x2C) = 0;

loc_00402B24: ;
    MEM32(0x84B8AC) = MEM32(0x84B8AC) - 1;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(eax + 0x24);
    eax = eax + 0x24;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edx + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00402B3E; /* je: equal / zero */

loc_00402B3C: ;
    MEM32(ecx) = edx;

loc_00402B3E: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00402B5B; /* je: equal / zero */

loc_00402B59: ;
    MEM32(ecx) = edx;

loc_00402B5B: ;
    PUSH32(esp, 0x2BC);
    PUSH32(esp, 0x64606C);
    ecx = 0; /* xor self */
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    PUSH32(esp, 0); sub_00401300(); /* call 0x00401300 */

loc_00402B79: ;
    esp = esp + 8;
    MEM32(edi) = 0;

loc_00402B82: ;
    POP32(esp, ebx);

loc_00402B83: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00402B90
 * Original: 0x00402B90 - 0x00402BEE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00402B90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x3C;
    edx = edi;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    if (CMP_NE(MEM32(esp + 0x14), 3)) goto loc_00402BB8; /* jne: not equal / not zero */

loc_00402BB3: ;
    MEM16(edi) = 3;

loc_00402BB8: ;
    MEM16(edi + 2) = 1;
    eax = MEM32(eax + 0x20);
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = 0xFFFFFFFFu;
    MEM32(edi + 0x14) = 0;
    ebx = MEM32(0x84B898);
    esi = esp + 0xC;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00402BE1: ;
    if (TEST_Z(ebx, ebx)) { sub_00402BEE(); return; } /* je: equal / zero */

loc_00402BE5: ;
    ebx = ebx + 0xFFFFFFF8u;
    MEM32(esp + 0x14) = ebx;
    g_seh_ebp = ebp; sub_00402BF6(); return; /* tail jmp 0x00402BF6 */

}

/**
 * sub_00402C40
 * Original: 0x00402C40 - 0x00402C98 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00402C40: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(esp + 0x12) = eax;
    MEM32(esp + 0x16) = eax;
    MEM32(esp + 0x1A) = eax;
    MEM32(esp + 0x1E) = eax;
    MEM32(esp + 0x22) = eax;
    MEM32(esp + 0x26) = eax;
    MEM32(esp + 0x2A) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x32) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x3A) = eax;
    PUSH32(esp, edi);
    MEM16(esp + 0x1C) = LO16(ebx);
    MEM16(esp + 0x42) = LO16(eax);
    /* nop */
    edi = MEM32(0x84B898);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_0054AFBE(); /* call 0x0054AFBE */

loc_00402C8F: ;
    if (CMP_EQ(edi, ebx)) { sub_00402C98(); return; } /* je: equal / zero */

loc_00402C93: ;
    eax = edi + -8;
    g_seh_ebp = ebp; sub_00402C9A(); return; /* tail jmp 0x00402C9A */

}

/**
 * sub_00403040
 * Original: 0x00403040 - 0x00403408 (968 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00403040: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x84BCC8));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004031F1; /* jne: not equal / not zero */

loc_0040305A: ;
    if (TEST_Z(eax, eax)) goto loc_00403065; /* je: equal / zero */

loc_0040305E: ;
    MEM32(0x8282BC) = eax;
    goto loc_00403077;

loc_00403065: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x8282BC);
    PUSH32(esp, 0); sub_003EAB80(); /* call 0x003EAB80 */

loc_00403074: ;
    esp = esp + 8;

loc_00403077: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0040309F; /* je: equal / zero */

loc_0040307F: ;
    if (TEST_Z(esi, esi)) goto loc_0040308B; /* je: equal / zero */

loc_00403083: ;
    MEM32(0x8282B4) = esi;
    goto loc_004030A9;

loc_0040308B: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x8282B4);
    PUSH32(esp, 0); sub_003EAB80(); /* call 0x003EAB80 */

loc_0040309A: ;
    esp = esp + 8;
    goto loc_004030A9;

loc_0040309F: ;
    MEM32(0x8282B4) = 0;

loc_004030A9: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_004030B8: ;
    if (TEST_Z(eax, eax)) goto loc_004030E0; /* je: equal / zero */

loc_004030BC: ;
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x7551B8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x84BCC0) = eax;

loc_004030E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x84BCC4);
    PUSH32(esp, 0x7552A8);
    PUSH32(esp, 0x7552DC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_004030F6: ;
    if (TEST_Z(ebp, ebp)) goto loc_00403102; /* je: equal / zero */

loc_004030FA: ;
    MEM32(0x8282B8) = ebp;
    goto loc_0040317F;

loc_00403102: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    edx = 0x100;
    PUSH32(esp, 1);
    eax = edx;
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_00403124: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00403132: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00403179; /* je: equal / zero */

loc_00403138: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00403143: ;
    if (TEST_NZ(eax, eax)) goto loc_00403156; /* jne: not equal / not zero */

loc_00403147: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00403152: ;
    esi = 0; /* xor self */
    goto loc_00403179;

loc_00403156: ;
    edx = MEM32(esp + 0xC);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 0;

loc_00403179: ;
    MEM32(0x8282B8) = esi;

loc_0040317F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(0x8282C0) = xmm0; /* movss */
    MEMF(0x8282C4) = xmm0; /* movss */
    MEMF(0x8282C8) = xmm1; /* movss */
    MEMF(0x8282CC) = xmm1; /* movss */
    MEMF(0x8282D0) = xmm0; /* movss */
    MEMF(0x8282D4) = xmm0; /* movss */
    MEMF(0x8282D8) = xmm1; /* movss */
    MEMF(0x8282DC) = xmm0; /* movss */
    MEMF(0x8282E0) = xmm0; /* movss */
    MEMF(0x8282E4) = xmm0; /* movss */
    MEMF(0x8282E8) = xmm0; /* movss */
    MEMF(0x8282EC) = xmm1; /* movss */
    MEM8(0x84BCC8) = 1;

loc_004031F1: ;
    edi = MEM32(0x8282BC);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0040321A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_0040322D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403233: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0040327D; /* je: equal / zero */

loc_0040323B: ;
    edi = MEM32(0x8282B4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_00403264: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_00403277: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0040327D: ;
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EACA0(); /* call 0x003EACA0 */

loc_0040328B: ;
    eax = MEM32(0x8282B8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003EAF20(); /* call 0x003EAF20 */

loc_004032A0: ;
    edx = MEM32(0x8282B8);
    eax = MEM32(0x8282BC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7552F8);
    PUSH32(esp, 0x7552F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003EAFB0(); /* call 0x003EAFB0 */

loc_004032C6: ;
    ecx = esp + 0x5C;
    PUSH32(esp, 0x3F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003EAD80(); /* call 0x003EAD80 */

loc_004032D2: ;
    SET_LO8(eax, MEM8(esp + 0xA0));
    esp = esp + 0x44;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00403321; /* je: equal / zero */

loc_004032E3: ;
    eax = MEM32(0x8282B8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003EAF20(); /* call 0x003EAF20 */

loc_004032F8: ;
    eax = MEM32(0x8282B8);
    ecx = MEM32(0x8282B4);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7552F8);
    PUSH32(esp, 0x7552F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003EAFB0(); /* call 0x003EAFB0 */

loc_0040331E: ;
    esp = esp + 0x30;

loc_00403321: ;
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm2 = xmm1; /* movaps */
    PUSH32(esp, 0x8282D8);
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 / xmm2; /* divss */
    PUSH32(esp, 0x8282C8);
    xmm2 = xmm1; /* movaps */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x8282EC);
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 / MEMF(esp + 0x50); /* divss */
    xmm0 = xmm0 / MEMF(esp + 0x4C); /* divss */
    xmm4 = xmm1; /* movaps */
    PUSH32(esp, 0x8282CC);
    esp = esp - 8;
    xmm4 = xmm4 - xmm3; /* subss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 4) = xmm4; /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00403410(); /* call 0x00403410 */

loc_0040338C: ;
    edx = MEM32(0x84BCC4);
    esp = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0040339B: ;
    eax = MEM32(0x84BCC0);
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_004033A5: ;
    PUSH32(esp, 0x8282C0);
    eax = 3;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_004033B6: ;
    SET_LO8(eax, MEM8(esp + 0x50));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x8282B4);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004033C7; /* jne: not equal / not zero */

loc_004033C3: ;
    eax = esp + 0x14;

loc_004033C7: ;
    ecx = MEM32(0x8282BC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004035C0(); /* call 0x004035C0 */

loc_004033D4: ;
    esp = esp + 8;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_004033E0: ;
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_004033EC: ;
    PUSH32(esp, 0);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_004033F8: ;
    PUSH32(esp, 0);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00403404: ;
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00403410
 * Original: 0x00403410 - 0x0040342E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00403410: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    esp = esp - 0xC;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) { sub_0040342E(); return; } /* jbe: below or equal (unsigned <=) */

loc_00403429: ;
    xmm1 = xmm2; /* movaps */
    g_seh_ebp = ebp; sub_00403436(); return; /* tail jmp 0x00403436 */

}

/**
 * sub_00403540
 * Original: 0x00403540 - 0x004035B1 (113 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403540(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00403540: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040354F: ;
    ecx = eax;
    ecx = ecx >> 8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00403566; /* jge: greater or equal (signed >=) */

loc_00403560: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00403566: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 8);
    ecx = eax;
    ecx = ecx & 0xFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0040358C; /* jge: greater or equal (signed >=) */

loc_00403586: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0040358C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 4) = eax;
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_004035AA; /* jge: greater or equal (signed >=) */

loc_004035A4: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004035AA: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004035C0
 * Original: 0x004035C0 - 0x004036B4 (244 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004035C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004035C0: ;
    esp = esp - 0x68;
    eax = MEM32(0x5499E8);
    eax = eax + 0xEE0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x7C);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x38) = ecx;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x44) = edx;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_00403625: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_00403638: ;
    esi = esp + 0x40;
    ebx = 0; /* xor self */
    edi = eax;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_00403649: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0040366A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edi = ebp;
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_0040367F: ;
    esi = esp + 0x5C;
    edi = eax;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_0040368E: ;
    eax = MEM32(esp + 0x40);
    (void)0; /* cmp eax, 0x3C - flags set for next jcc */
    edi = 2;
    if (CMP_A(eax, 0x3C)) { sub_004036B4(); return; } /* ja: above (unsigned >) */

loc_0040369C: ;
    edx = ZX8(MEM8(eax + 0x403B74));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x403B6C)); return; /* indirect tail jmp */

    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = edi;
    g_seh_ebp = ebp; sub_004036CA(); return; /* tail jmp 0x004036CA */

}

/**
 * sub_00403C00
 * Original: 0x00403C00 - 0x00403D55 (341 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403C00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00403C00: ;
    eax = MEM32(0x82831C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_00403C16; /* je: equal / zero */

loc_00403C0C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7EC), _icall_esp); /* indirect call */
    }

loc_00403C13: ;
    esp = esp + 4;

loc_00403C16: ;
    (void)0; /* cmp MEM32(0x84BCD8), esi - flags set for next jcc */
    MEM32(0x82831C) = esi;
    if (CMP_EQ(MEM32(0x84BCD8), esi)) goto loc_00403C46; /* je: equal / zero */

loc_00403C24: ;
    if (TEST_Z(MEM8(0x84BCFD), 1)) goto loc_00403C46; /* je: equal / zero */

loc_00403C2D: ;
    eax = MEM32(0x828334);
    if (CMP_EQ(eax, esi)) goto loc_00403C40; /* je: equal / zero */

loc_00403C36: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7EC), _icall_esp); /* indirect call */
    }

loc_00403C3D: ;
    esp = esp + 4;

loc_00403C40: ;
    MEM32(0x828334) = esi;

loc_00403C46: ;
    eax = MEM32(0x84BCDC);
    if (CMP_EQ(eax, esi)) goto loc_00403C5E; /* je: equal / zero */

loc_00403C4F: ;
    if (TEST_Z(MEM8(0x84BCFD), 2)) goto loc_00403C5E; /* je: equal / zero */

loc_00403C58: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403C5E: ;
    eax = MEM32(0x84BCE0);
    if (CMP_EQ(eax, esi)) goto loc_00403C76; /* je: equal / zero */

loc_00403C67: ;
    if (TEST_Z(MEM8(0x84BCFD), 4)) goto loc_00403C76; /* je: equal / zero */

loc_00403C70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403C76: ;
    eax = MEM32(0x84BCE4);
    if (CMP_EQ(eax, esi)) goto loc_00403C8E; /* je: equal / zero */

loc_00403C7F: ;
    if (TEST_Z(MEM8(0x84BCFD), 8)) goto loc_00403C8E; /* je: equal / zero */

loc_00403C88: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403C8E: ;
    eax = MEM32(0x84BCE8);
    if (CMP_EQ(eax, esi)) goto loc_00403C9D; /* je: equal / zero */

loc_00403C97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403C9D: ;
    eax = MEM32(0x84BCEC);
    if (CMP_EQ(eax, esi)) goto loc_00403CAC; /* je: equal / zero */

loc_00403CA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403CAC: ;
    eax = MEM32(0x84BD20);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x84BCD8) = esi;
    MEM32(0x84BCDC) = esi;
    MEM32(0x84BCE0) = esi;
    MEM32(0x84BCE4) = esi;
    MEM32(0x84BCE8) = esi;
    if (CMP_EQ(eax, esi)) goto loc_00403CDF; /* je: equal / zero */

loc_00403CD3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403CD9: ;
    MEM32(0x84BD20) = esi;

loc_00403CDF: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00403CE6: ;
    eax = MEM32(0x84BCCC);
    MEM32(eax) = MEM32(eax) - 1;
    if (CMP_NE(MEM32(eax), esi)) goto loc_00403D01; /* jne: not equal / not zero */

loc_00403CF1: ;
    if (CMP_EQ(MEM32(eax + 4), esi)) goto loc_00403D01; /* je: equal / zero */

loc_00403CF6: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00403D01: ;
    eax = MEM32(0x84BCD0);
    MEM32(0x84BCCC) = esi;
    MEM32(eax) = MEM32(eax) - 1;
    if (CMP_NE(MEM32(eax), esi)) goto loc_00403D22; /* jne: not equal / not zero */

loc_00403D12: ;
    if (CMP_EQ(MEM32(eax + 4), esi)) goto loc_00403D22; /* je: equal / zero */

loc_00403D17: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00403D22: ;
    eax = MEM32(0x84BCD4);
    MEM32(0x84BCD0) = esi;
    MEM32(eax) = MEM32(eax) - 1;
    if (CMP_NE(MEM32(eax), esi)) goto loc_00403D43; /* jne: not equal / not zero */

loc_00403D33: ;
    if (CMP_EQ(MEM32(eax + 4), esi)) goto loc_00403D43; /* je: equal / zero */

loc_00403D38: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00403D43: ;
    MEM32(0x84BCD4) = esi;
    esi = 0x84D0F8;
    PUSH32(esp, 0); sub_00405740(); /* call 0x00405740 */

loc_00403D53: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403D60
 * Original: 0x00403D60 - 0x00403EC6 (358 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00403D60: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 0x1A04);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00403D99; /* je: equal / zero */

loc_00403D75: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00403D97; /* jne: not equal / not zero */

loc_00403D7E: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00403D97; /* jne: not equal / not zero */

loc_00403D8A: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00403D97; /* je: equal / zero */

loc_00403D91: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00403D97: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00403D99: ;
    MEM32(0x84BCF0) = ecx;
    ecx = MEM32(esi + 0x1A08);
    if (TEST_Z(ecx, ecx)) goto loc_00403DCD; /* je: equal / zero */

loc_00403DA9: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00403DCB; /* jne: not equal / not zero */

loc_00403DB2: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00403DCB; /* jne: not equal / not zero */

loc_00403DBE: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00403DCB; /* je: equal / zero */

loc_00403DC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00403DCB: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00403DCD: ;
    MEM32(0x84BCF4) = ecx;
    esi = esi + 0xEE0;
    eax = MEM32(esi);
    MEM32(0x8282F0) = eax;
    ecx = MEM32(esi + 4);
    edi = MEM32(0x84BCD8);
    MEM32(0x8282F4) = ecx;
    edx = MEM32(esi + 8);
    MEM32(0x8282F8) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(0x8282FC) = eax;
    ecx = MEM32(esi + 0x10);
    MEM32(0x828300) = ecx;
    edx = MEM32(esi + 0x14);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(0x828304) = edx;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_00403E35: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_00403E48: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(0x84BCF8) = eax;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_00403E55: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x7F4F4F00);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_00403E6F: ;
    ecx = MEM32(0x84BCF4);
    edx = MEM32(0x84BCF0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(0x84D0F8) = 0;
    MEM32(0x84D160) = 0;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_00403E93: ;
    PUSH32(esp, 0x8282F0);
    PUSH32(esp, 0); sub_00539710(); /* call 0x00539710 */

loc_00403E9D: ;
    eax = MEM32(0x84BCF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403EA8: ;
    ecx = MEM32(0x84BCF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403EB4: ;
    edx = MEM32(0x84BCF8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00403EC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00403ED0
 * Original: 0x00403ED0 - 0x0040408F (447 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403ED0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00403ED0: ;
    SET_LO8(ecx, MEM8(0x84BCFC));
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    SET_LO8(ecx, LO8(ecx) + 1);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    MEM8(0x84BCFC) = LO8(ecx);
    ecx = MEM32(esi + 0x1A04);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00403F18; /* je: equal / zero */

loc_00403EF4: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00403F16; /* jne: not equal / not zero */

loc_00403EFD: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00403F16; /* jne: not equal / not zero */

loc_00403F09: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00403F16; /* je: equal / zero */

loc_00403F10: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00403F16: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00403F18: ;
    MEM32(0x84BCF0) = ecx;
    ecx = MEM32(esi + 0x1A08);
    if (TEST_Z(ecx, ecx)) goto loc_00403F4C; /* je: equal / zero */

loc_00403F28: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00403F4A; /* jne: not equal / not zero */

loc_00403F31: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00403F4A; /* jne: not equal / not zero */

loc_00403F3D: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00403F4A; /* je: equal / zero */

loc_00403F44: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00403F4A: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00403F4C: ;
    MEM32(0x84BCF4) = ecx;
    esi = esi + 0xEE0;
    eax = MEM32(esi);
    MEM32(0x8282F0) = eax;
    ecx = MEM32(esi + 4);
    edi = MEM32(0x84BCD8);
    MEM32(0x8282F4) = ecx;
    edx = MEM32(esi + 8);
    MEM32(0x8282F8) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(0x8282FC) = eax;
    ecx = MEM32(esi + 0x10);
    MEM32(0x828300) = ecx;
    edx = MEM32(esi + 0x14);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(0x828304) = edx;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_00403FB4: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_00403FC7: ;
    ebx = MEM32(0x84BCF4);
    PUSH32(esp, eax);
    MEM32(0x84BCF8) = eax;
    PUSH32(esp, 0); sub_005390C0(); /* call 0x005390C0 */

loc_00403FD8: ;
    ebx = MEM32(0x5499F0);
    ebx = ebx | 0x1200;
    PUSH32(esp, 1);
    MEM32(0x549B90) = 0;
    MEM32(0x5499F0) = ebx;
    MEM32(0x549B9C) = 0;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00404005: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00404014: ;
    edx = 0x203;
    ecx = 0x40354;
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040402D: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00404043: ;
    edx = 0x1010101;
    ecx = 0x40358;
    MEM32(0x549AE4) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040405C: ;
    eax = MEM32(0x84BCCC);
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00404070: ;
    ecx = MEM32(0x82831C);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x828308;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00404088: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00404090
 * Original: 0x00404090 - 0x004040DE (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404090(void)
{

loc_00404090: ;
    SET_LO8(edx, MEM8(0x84BCFC));
    eax = MEM32(0x84BCF4);
    ecx = MEM32(0x84BCF0);
    PUSH32(esp, eax);
    SET_LO8(edx, LO8(edx) - 1);
    PUSH32(esp, ecx);
    MEM8(0x84BCFC) = LO8(edx);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_004040B0: ;
    PUSH32(esp, 0x8282F0);
    PUSH32(esp, 0); sub_00539710(); /* call 0x00539710 */

loc_004040BA: ;
    edx = MEM32(0x84BCF0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_004040C6: ;
    eax = MEM32(0x84BCF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_004040D1: ;
    ecx = MEM32(0x84BCF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_004040DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004040E0
 * Original: 0x004040E0 - 0x004042EF (527 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004040E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004040E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BD00);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_004042EA; /* je: equal / zero */

loc_004040FB: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 0x1A04);
    if (CMP_EQ(ecx, edi)) goto loc_00404130; /* je: equal / zero */

loc_0040410C: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0040412E; /* jne: not equal / not zero */

loc_00404115: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0040412E; /* jne: not equal / not zero */

loc_00404121: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_0040412E; /* je: equal / zero */

loc_00404128: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0040412E: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00404130: ;
    MEM32(0x84BCF0) = ecx;
    ecx = MEM32(esi + 0x1A08);
    if (CMP_NE(ecx, edi)) goto loc_00404144; /* jne: not equal / not zero */

loc_00404140: ;
    ecx = 0; /* xor self */
    goto loc_00404168;

loc_00404144: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00404166; /* jne: not equal / not zero */

loc_0040414D: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00404166; /* jne: not equal / not zero */

loc_00404159: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_00404166; /* je: equal / zero */

loc_00404160: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00404166: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00404168: ;
    esi = esi + 0xEE0;
    MEM32(0x84BCF4) = ecx;
    eax = MEM32(esi);
    MEM32(0x8282F0) = eax;
    ecx = MEM32(esi + 4);
    MEM32(0x8282F4) = ecx;
    edx = MEM32(esi + 8);
    MEM32(0x8282F8) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(0x8282FC) = eax;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(0x84D174);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x828300) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(0x828304) = edx;
    if (CMP_NE(eax, edi)) goto loc_004041BB; /* jne: not equal / not zero */

loc_004041B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_00404206;

loc_004041BB: ;
    xmm0 = MEMF(0x84D16C); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x84D170); /* movss */
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm1 = xmm1 * MEMF(0x648D40); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x84D170) = xmm1; /* movss */
    MEM32(0x84D174) = edi;
    MEMF(0x84D16C) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_00404206: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004042F0(); /* call 0x004042F0 */

loc_0040421D: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004042F0(); /* call 0x004042F0 */

loc_00404231: ;
    esp = esp + 0x30;
    MEM32(0x84BD00) = edi;
    MEM32(0x84BD04) = edi;
    MEM32(0x84BD08) = edi;
    MEM32(0x84BD0C) = edi;
    PUSH32(esp, 0); sub_004050A0(); /* call 0x004050A0 */

loc_00404251: ;
    PUSH32(esp, 0); sub_004052E0(); /* call 0x004052E0 */

loc_00404256: ;
    esi = 0x84D0F8;
    PUSH32(esp, 0); sub_00405840(); /* call 0x00405840 */

loc_00404260: ;
    PUSH32(esp, 0); sub_00405360(); /* call 0x00405360 */

loc_00404265: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0040426D: ;
    PUSH32(esp, edi);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00404278: ;
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00404283: ;
    PUSH32(esp, edi);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0040428E: ;
    edx = 0; /* xor self */
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040429A: ;
    ebx = MEM32(0x5499F0);
    ecx = MEM32(0x84BCF4);
    edx = MEM32(0x84BCF0);
    PUSH32(esp, ecx);
    ebx = ebx | 1;
    PUSH32(esp, edx);
    MEM32(0x549AEC) = edi;
    MEM32(0x5499F0) = ebx;
    MEM32(0x54735C) = edi;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_004042C8: ;
    PUSH32(esp, 0x8282F0);
    PUSH32(esp, 0); sub_00539710(); /* call 0x00539710 */

loc_004042D2: ;
    eax = MEM32(0x84BCF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_004042DD: ;
    ecx = MEM32(0x84BCF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_004042E9: ;
    POP32(esp, esi);

loc_004042EA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004042F0
 * Original: 0x004042F0 - 0x004048C4 (1492 bytes, 338 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004042F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_004042F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1D4;
    xmm2 = MEMF(0x648D44); /* movss */
    eax = MEM32(0x84BD00);
    ecx = MEM32(0x84BD04);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    edx = MEM32(0x84BD0C);
    PUSH32(esp, ebx);
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(0x649138); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x60) = xmm2; /* movss */
    xmm2 = MEMF(0x6493A8); /* movss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x38) = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    esi = esp + 0x160;
    MEMF(esp + 0xF4) = xmm0; /* movss */
    MEMF(esp + 0xF8) = xmm0; /* movss */
    MEMF(esp + 0xFC) = xmm1; /* movss */
    MEM32(esp + 0x20) = ebx;
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_004043A3: ;
    SET_LO8(eax, MEM8(0x7556E5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_004044DF; /* je: equal / zero */

loc_004043B3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_004046AA; /* je: equal / zero */

loc_004043BB: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm3; /* movss */
    MEMF(esp + 0x7C) = xmm3; /* movss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm3; /* movss */
    MEMF(esp + 0x8C) = xmm3; /* movss */
    MEMF(esp + 0x90) = xmm2; /* movss */
    MEMF(esp + 0x94) = xmm2; /* movss */
    MEMF(esp + 0x98) = xmm2; /* movss */
    MEMF(esp + 0x9C) = xmm3; /* movss */
    MEMF(esp + 0xA0) = xmm2; /* movss */
    MEMF(esp + 0xA4) = xmm2; /* movss */
    MEMF(esp + 0xA8) = xmm2; /* movss */
    MEMF(esp + 0xAC) = xmm3; /* movss */
    MEMF(esp + 0xB0) = xmm2; /* movss */
    MEMF(esp + 0xB4) = xmm2; /* movss */
    MEMF(esp + 0xB8) = xmm2; /* movss */
    MEMF(esp + 0xBC) = xmm3; /* movss */
    MEMF(esp + 0xC0) = xmm2; /* movss */
    MEMF(esp + 0xC4) = xmm2; /* movss */
    MEMF(esp + 0xC8) = xmm2; /* movss */
    MEMF(esp + 0xCC) = xmm3; /* movss */
    MEMF(esp + 0xD0) = xmm2; /* movss */
    MEMF(esp + 0xD4) = xmm2; /* movss */
    MEMF(esp + 0xD8) = xmm2; /* movss */
    MEMF(esp + 0xDC) = xmm3; /* movss */
    MEMF(esp + 0xE0) = xmm2; /* movss */
    MEMF(esp + 0xE4) = xmm2; /* movss */
    MEMF(esp + 0xE8) = xmm2; /* movss */
    MEMF(esp + 0xEC) = xmm3; /* movss */
    goto loc_004048A5;

loc_004044DF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_004046AA; /* je: equal / zero */

loc_004044E7: ;
    edi = MEM32(0x819FE4);
    if (TEST_Z(edi, edi)) goto loc_004046AA; /* je: equal / zero */

loc_004044F5: ;
    eax = esp + 0x104;
    ecx = esp + 0x7C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x5C) = ecx;
    goto loc_00404510;

    /* nop */

loc_00404510: ;
    if (CMP_AE(ebx, 4)) goto loc_0040489A; /* jae: above or equal (unsigned >=) */

loc_00404519: ;
    if (TEST_Z(edi, edi)) goto loc_00404696; /* je: equal / zero */

loc_00404521: ;
    if (CMP_NE(MEM32(edi + 8), 1)) goto loc_00404696; /* jne: not equal / not zero */

loc_0040452B: ;
    edx = edi + 0x1C;
    eax = MEM32(edx);
    MEM32(esp + 0x2C) = eax;
    ecx = MEM32(edx + 4);
    eax = esp + 0x2C;
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(edx + 8);
    ecx = eax;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = ecx;
    eax = MEM32(esp + 0x1C);
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
    eax = MEM32(esp + 0x24);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    edx = esp + 0x2C;
    eax = edx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x1C) = eax;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(edi + 0xC);
    eax = MEM32(esp + 0x14);
    MEM32(eax + -4) = ecx;
    edx = MEM32(edi + 0x10);
    MEM32(eax) = edx;
    ecx = MEM32(edi + 0x14);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(eax + 8) = edx;
    eax = esp + 0x2C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_004045F8: ;
    esi = MEM32(esp + 0x5C);
    ebx = esi + -12;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00404608: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esi) = xmm0; /* movss */
    esi = esp + 0x50;
    eax = esp + 0xF4;
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_003E2110(); /* call 0x003E2110 */

loc_00404628: ;
    ecx = MEM32(esp + 0x5C);
    xmm0 = MEMF(0x648D34); /* movss */
    eax = ecx + 4;
    edx = esi;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x24) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi = MEM32(esp + 0x20);
    xmm0 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x14);
    esi++;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    ecx = ecx + 0x20;
    eax = eax + 0x10;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x14) = eax;
    ebx = esi;

loc_00404696: ;
    edi = MEM32(edi + 4);
    if (TEST_NZ(edi, edi)) goto loc_00404510; /* jne: not equal / not zero */

loc_004046A1: ;
    if (CMP_AE(ebx, 4)) goto loc_0040489A; /* jae: above or equal (unsigned >=) */

loc_004046AA: ;
    eax = 4;
    eax = eax - ebx;
    if (CMP_L(eax, 4)) goto loc_00404815; /* jl: less (signed <) */

loc_004046BA: ;
    edi = ebx;
    edi = (uint32_t)(-(int32_t)edi);
    ecx = ebx;
    edx = ebx;
    ecx = ecx << 4;
    edx = edx << 5;
    edi = edi >> 2;
    edi++;
    ecx = esp + ecx + 0x108;
    eax = esp + edx + 0x74;
    ebx = ebx + edi * 4;
    /* nop */

loc_004046E0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    edx = eax + 0xC;
    esi = eax + -4;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEMF(eax + -4) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    if (CMP_EQ(esi, edx)) goto loc_0040471E; /* je: equal / zero */

loc_00404708: ;
    esi = MEM32(eax + -4);
    MEM32(edx) = esi;
    edx = MEM32(eax);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(eax + 8);
    MEM32(eax + 0x18) = edx;

loc_0040471E: ;
    edx = eax + 0x1C;
    esi = eax + 0x2C;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEMF(ecx + -8) = xmm0; /* movss */
    MEMF(ecx + -4) = xmm0; /* movss */
    MEMF(ecx) = xmm0; /* movss */
    MEMF(ecx + 4) = xmm1; /* movss */
    MEMF(edx) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    if (CMP_EQ(edx, esi)) goto loc_00404764; /* je: equal / zero */

loc_0040474E: ;
    edx = MEM32(edx);
    MEM32(esi) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(eax + 0x38) = edx;

loc_00404764: ;
    edx = eax + 0x3C;
    esi = eax + 0x4C;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEMF(ecx + 8) = xmm0; /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm1; /* movss */
    MEMF(edx) = xmm0; /* movss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x48) = xmm1; /* movss */
    if (CMP_EQ(edx, esi)) goto loc_004047AB; /* je: equal / zero */

loc_00404795: ;
    edx = MEM32(edx);
    MEM32(esi) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(eax + 0x44);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(eax + 0x48);
    MEM32(eax + 0x58) = edx;

loc_004047AB: ;
    edx = eax + 0x5C;
    esi = eax + 0x6C;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    MEMF(ecx + 0x20) = xmm0; /* movss */
    MEMF(ecx + 0x24) = xmm1; /* movss */
    MEMF(edx) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    MEMF(eax + 0x68) = xmm1; /* movss */
    if (CMP_EQ(edx, esi)) goto loc_004047F2; /* je: equal / zero */

loc_004047DC: ;
    edx = MEM32(edx);
    MEM32(esi) = edx;
    edx = MEM32(eax + 0x60);
    MEM32(eax + 0x70) = edx;
    edx = MEM32(eax + 0x64);
    MEM32(eax + 0x74) = edx;
    edx = MEM32(eax + 0x68);
    MEM32(eax + 0x78) = edx;

loc_004047F2: ;
    MEMF(ecx + 0x28) = xmm0; /* movss */
    MEMF(ecx + 0x2C) = xmm0; /* movss */
    MEMF(ecx + 0x30) = xmm0; /* movss */
    MEMF(ecx + 0x34) = xmm1; /* movss */
    eax = eax + 0x80;
    ecx = ecx + 0x40;
    edi--;
    if ((edi != 0)) goto loc_004046E0; /* jne: not equal / not zero */

loc_00404815: ;
    if (CMP_AE(ebx, 4)) goto loc_0040489A; /* jae: above or equal (unsigned >=) */

loc_0040481E: ;
    eax = ebx;
    eax = eax << 4;
    edx = ebx;
    edx = edx << 5;
    ecx = esp + eax + 0x108;
    eax = esp + edx + 0x74;
    edx = 4;
    edx = edx - ebx;
    /* nop */

loc_00404840: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    esi = eax + 0xC;
    edi = eax + -4;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEMF(eax + -4) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    if (CMP_EQ(edi, esi)) goto loc_0040487E; /* je: equal / zero */

loc_00404868: ;
    edi = MEM32(eax + -4);
    MEM32(esi) = edi;
    esi = MEM32(eax);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(eax + 4);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(eax + 8);
    MEM32(eax + 0x18) = esi;

loc_0040487E: ;
    MEMF(ecx + -8) = xmm0; /* movss */
    MEMF(ecx + -4) = xmm0; /* movss */
    MEMF(ecx) = xmm0; /* movss */
    MEMF(ecx + 4) = xmm1; /* movss */
    eax = eax + 0x20;
    ecx = ecx + 0x10;
    edx--;
    if ((edx != 0)) goto loc_00404840; /* jne: not equal / not zero */

loc_0040489A: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */

loc_004048A5: ;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_004048C4(); return; } /* je: equal / zero */

loc_004048AC: ;
    xmm0 = MEMF(ebp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x6492E4); /* mulss */
    MEMF(esp + 0x10C) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_004048E4(); return; /* tail jmp 0x004048E4 */

}

/**
 * sub_004050A0
 * Original: 0x004050A0 - 0x004051F6 (342 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004050A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004050A0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84BCDC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_004050CF: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_004050E2: ;
    ecx = MEM32(0x5499F0);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = ecx | 0x1200;
    PUSH32(esp, esi);
    ecx = ecx | 0xF;
    PUSH32(esp, esi);
    MEM32(0x5499F0) = ecx;
    ecx = MEM32(0x84BCD8);
    PUSH32(esp, esi);
    edi = eax;
    eax = 2;
    ebx = 1;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(0x549B90) = esi;
    MEM32(0x54734C) = esi;
    MEM32(0x547344) = ebx;
    MEM32(0x547340) = eax;
    MEM32(0x54733C) = eax;
    MEM32(0x547354) = esi;
    MEM32(0x547358) = esi;
    MEM32(0x54735C) = esi;
    MEM32(0x5473CC) = esi;
    MEM32(0x5473C4) = ebx;
    MEM32(0x5473C0) = eax;
    MEM32(0x5473BC) = eax;
    MEM32(0x5473D4) = esi;
    MEM32(0x5473D8) = esi;
    MEM32(0x5473DC) = esi;
    MEM32(0x54744C) = esi;
    MEM32(0x547444) = ebx;
    MEM32(0x547440) = eax;
    MEM32(0x54743C) = eax;
    MEM32(0x547454) = esi;
    MEM32(0x547458) = esi;
    MEM32(0x54745C) = esi;
    MEM32(0x5474CC) = esi;
    MEM32(0x5474C4) = ebx;
    MEM32(0x5474C0) = eax;
    MEM32(0x5474BC) = eax;
    MEM32(0x5474D4) = esi;
    MEM32(0x5474D8) = esi;
    MEM32(0x5474DC) = esi;
    PUSH32(esp, 0); sub_003EA4F0(); /* call 0x003EA4F0 */

loc_004051BC: ;
    eax = MEM32(edi);
    edx = eax;
    edx = edx & 0xFFFF;
    esp = esp + 0x20;
    if (CMP_NE(edx, ebx)) { sub_004051F6(); return; } /* jne: not equal / not zero */

loc_004051CD: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_004051E6; /* jne: not equal / not zero */

loc_004051D9: ;
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, esi)) goto loc_004051E6; /* je: equal / zero */

loc_004051E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_004051E6: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0x780000)) { sub_004051F6(); return; } /* jne: not equal / not zero */

loc_004051EF: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_004051F4: ;
    g_seh_ebp = ebp; sub_004051F9(); return; /* tail jmp 0x004051F9 */

}

/**
 * sub_004052E0
 * Original: 0x004052E0 - 0x0040535A (122 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004052E0(void)
{

loc_004052E0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84BCDC);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0040530E: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_00405321: ;
    esi = eax;
    eax = MEM32(0x84BCD4);
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0040532D: ;
    ecx = MEM32(0x84BCD4);
    edx = MEM32(0x84BCE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003EA4F0(); /* call 0x003EA4F0 */

loc_0040534B: ;
    esp = esp + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00405354: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00405360
 * Original: 0x00405360 - 0x00405514 (436 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405360: ;
    esp = esp - 0x30;
    eax = MEM32(0x84BD14);
    ecx = MEM32(0x84BD1C);
    edx = MEM32(0x84BD18);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84BD10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84BCDC);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_004053D3: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_004053E6: ;
    esi = 0x87B5D0;
    ebx = 0; /* xor self */
    edi = eax;
    MEM32(0x87B5CC) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_004053F9: ;
    ecx = MEM32(0x87B5CC);
    eax = MEM32(0x87B5D0);
    esi = MEM32(ecx + 4);
    PUSH32(esp, 0x87B5C8);
    PUSH32(esp, 0x87B5C4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_00405417: ;
    ecx = MEM32(0x87B5E8);
    edx = eax;
    eax = MEM32(0x87B5E4);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_00405436: ;
    edi = MEM32(0x84BCE0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(0x87B5B8) = 0x40001;
    MEM32(0x87B5C0) = ebx;
    MEM32(0x87B5BC) = esi;
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_00405473: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_00405486: ;
    edi = MEM32(0x87B5CC);
    esi = 0x87B5D0;
    MEM32(0x87B5B4) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_0040549B: ;
    ecx = MEM32(0x87B5B4);
    eax = MEM32(0x87B5D0);
    esi = MEM32(ecx + 4);
    PUSH32(esp, 0x87B5B0);
    PUSH32(esp, 0x87B5AC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_004054B9: ;
    ecx = MEM32(0x87B5E8);
    edx = eax;
    eax = MEM32(0x87B5E4);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3C);
    edi = 1;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_004054DB: ;
    edx = MEM32(0x5499E8);
    MEM32(0x87B5A0) = 0x40001;
    MEM32(0x87B5A8) = ebx;
    MEM32(0x87B5A4) = esi;
    ecx = MEM32(ebp + 4);
    if (CMP_EQ(ecx, ebx)) { sub_00405514(); return; } /* je: equal / zero */

loc_004054FE: ;
    eax = edx + 0x924;
    MEM32(eax) = edi;
    MEM32(edx + 0x928) = ebx;
    MEM32(edx + 0x92C) = ecx;
    g_seh_ebp = ebp; sub_00405516(); return; /* tail jmp 0x00405516 */

}

/**
 * sub_00405740
 * Original: 0x00405740 - 0x00405797 (87 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405740(void)
{
    int _flags = 0; /* fallback flag var */

loc_00405740: ;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esi) = LO8(ebx);
    MEM32(esi + 0x68) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_00405758; /* je: equal / zero */

loc_0040574F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00405755: ;
    MEM32(esi + 0x64) = ebx;

loc_00405758: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0040575F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00405765: ;
    eax = MEM32(esi + 0x6C);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0040577C; /* jne: not equal / not zero */

loc_0040576C: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_0040577C; /* je: equal / zero */

loc_00405771: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0040577C: ;
    eax = MEM32(esi + 0x70);
    eax--;
    MEM32(esi + 0x6C) = ebx;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00405792; /* jne: not equal / not zero */

loc_00405787: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00405792: ;
    MEM32(esi + 0x70) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004057A0
 * Original: 0x004057A0 - 0x004057E2 (66 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004057A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004057A0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_004057C0; /* jle: less or equal (signed <=) */

loc_004057AE: ;
    esi = eax + 4;

loc_004057B1: ;
    if (CMP_EQ(MEM32(esi), edi)) goto loc_004057D3; /* je: equal / zero */

loc_004057B5: ;
    ebp = ZX8(MEM8(eax));
    edx++;
    esi = esi + 0xC;
    if (CMP_L(edx, ebp)) goto loc_004057B1; /* jl: less (signed <) */

loc_004057C0: ;
    if (CMP_BE(LO8(ebx), 8)) { sub_004057E2(); return; } /* jbe: below or equal (unsigned <=) */

loc_004057C5: ;
    xmm0 = MEMF(0x648D10); /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_004057D3: ;
    POP32(esp, esi);
    ecx = edx + edx * 2;
    xmm0 = MEMF(eax + ecx * 4 + 8); /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00405840
 * Original: 0x00405840 - 0x0040593A (250 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405840: ;
    SET_LO8(eax, MEM8(esi));
    esp = esp - 0x24;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00405936; /* je: equal / zero */

loc_0040584D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x64);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_00405875: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_00405888: ;
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_00405892: ;
    eax = MEM32(esi + 0x6C);
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0040589A: ;
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_004058A3: ;
    SET_LO8(eax, MEM8(esi));
    ebp = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_004058F5; /* jbe: below or equal (unsigned <=) */

loc_004058AB: ;
    PUSH32(esp, ebx);
    ebx = esi + 4;
    /* nop */

loc_004058B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = 0; /* xor self */
    MEM32(esp + 0x24) = edx;
    eax = esp + 0x20;
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = edx;
    eax = 1;
    ecx = 0; /* xor self */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_004058E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00405940(); /* call 0x00405940 */

loc_004058E9: ;
    ecx = ZX8(MEM8(esi));
    ebp++;
    ebx = ebx + 0xC;
    if (CMP_L(ebp, ecx)) goto loc_004058B0; /* jl: less (signed <) */

loc_004058F4: ;
    POP32(esp, ebx);

loc_004058F5: ;
    eax = MEM32(edi);
    edx = eax;
    edx = edx & 0xFFFF;
    if (CMP_NE(edx, 1)) goto loc_00405931; /* jne: not equal / not zero */

loc_00405904: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0040591D; /* jne: not equal / not zero */

loc_00405910: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0040591D; /* je: equal / zero */

loc_00405917: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0040591D: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0x780000)) goto loc_00405931; /* jne: not equal / not zero */

loc_00405926: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0040592B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00405931: ;
    eax--;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00405936: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00405940
 * Original: 0x00405940 - 0x004059AD (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405940: ;
    esp = esp - 0x30;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_00405970: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edi = ebp;
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_00405985: ;
    esi = esp + 0x24;
    ebx = 0; /* xor self */
    edi = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_00405996: ;
    eax = MEM32(esp + 0x24);
    if (CMP_A(eax, 0x3C)) { sub_004059AD(); return; } /* ja: above (unsigned >) */

loc_0040599F: ;
    edx = ZX8(MEM8(eax + 0x405C40));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x405C38)); return; /* indirect tail jmp */

}

/**
 * sub_00405C80
 * Original: 0x00405C80 - 0x00405CF9 (121 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405C80: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x4C);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_00405C9D; /* je: equal / zero */

loc_00405C8E: ;
    edx = MEM32(esp + 0x18);
    if (CMP_B(edx, eax)) goto loc_00405C9D; /* jb: below (unsigned <) */

loc_00405C96: ;
    eax = edx;
    eax++;
    MEM32(esp + 0x18) = eax;

loc_00405C9D: ;
    (void)0; /* test MEM8(ecx + 0x40), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(ecx + 0x40), 1)) goto loc_00405CE7; /* je: equal / zero */

loc_00405CA7: ;
    eax = MEM32(ecx);
    esi = MEM32(eax + 0x1C);
    edx = 0; /* xor self */
    if (CMP_BE(esi & esi, 0)) goto loc_00405CE7; /* jbe: below or equal (unsigned <=) */

loc_00405CB2: ;
    eax = MEM32(ecx + 0x1C);

loc_00405CB5: ;
    ebx = eax;
    ecx = MEM32(ebx);
    edi = MEM32(ebx + 4);
    ebp = MEM32(ebx + 8);
    SET_LO16(ebx, MEM16(ebx + 0xC));
    MEM16(esp + 0x1C) = LO16(ebx);
    (void)0; /* cmp ecx, MEM32(esp + 0x28) - flags set for next jcc */
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(ecx, MEM32(esp + 0x28))) goto loc_00405CDF; /* jne: not equal / not zero */

loc_00405CD2: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    ebx = MEM32(esp + 0x24);
    if (CMP_EQ(LO8(ecx), MEM8(ebx + 0x50))) { sub_00405CF9(); return; } /* je: equal / zero */

loc_00405CDF: ;
    edx++;
    eax = eax + 0xE;
    if (CMP_B(edx, esi)) goto loc_00405CB5; /* jb: below (unsigned <) */

loc_00405CE7: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00405D10
 * Original: 0x00405D10 - 0x00405D55 (69 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00405D10: ;
    (void)0; /* test MEM8(ecx + 0x40), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_Z(MEM8(ecx + 0x40), 1)) goto loc_00405D4C; /* je: equal / zero */

loc_00405D18: ;
    eax = MEM32(ecx + 0x44);
    if (CMP_LE(eax & eax, 0)) goto loc_00405D4C; /* jle: less or equal (signed <=) */

loc_00405D1F: ;
    esi = MEM32(ecx + 0x1C);
    SET_LO8(ebx, MEM8(ecx + 0x50));

loc_00405D25: ;
    eax = MEM32(ecx + 0x44);
    eax--;
    MEM32(ecx + 0x44) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    SET_LO8(edx, MEM8(eax + esi + 0xC));
    eax = eax + esi;
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(LO8(edx), LO8(ebx))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00405D45; /* je: equal / zero */

loc_00405D3E: ;
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ecx + 0x4C))) { sub_00405D55(); return; } /* jne: not equal / not zero */

loc_00405D45: ;
    eax = MEM32(ecx + 0x44);
    if (CMP_G(eax & eax, 0)) goto loc_00405D25; /* jg: greater (signed >) */

loc_00405D4C: ;
    POP32(esp, esi);
    MEM32(edi) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00405D60
 * Original: 0x00405D60 - 0x00405DE3 (131 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405D60: ;
    SET_LO8(eax, MEM8(0x84BD28));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(edx, 0); /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebp) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00405DE1; /* jbe: below or equal (unsigned <=) */

loc_00405D77: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_00405D80: ;
    eax = ZX8(LO8(edx));
    eax = eax + eax * 2;
    eax = eax * 8 + 0x828338;
    if (TEST_Z(eax, eax)) goto loc_00405DC0; /* je: equal / zero */

loc_00405D91: ;
    esi = edi;

loc_00405D93: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00405DB7; /* jne: not equal / not zero */

loc_00405D9B: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00405DB3; /* je: equal / zero */

loc_00405D9F: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00405DB7; /* jne: not equal / not zero */

loc_00405DA9: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00405D93; /* jne: not equal / not zero */

loc_00405DB3: ;
    eax = 0; /* xor self */
    goto loc_00405DBC;

loc_00405DB7: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00405DBC: ;
    if (TEST_Z(eax, eax)) goto loc_00405DCF; /* je: equal / zero */

loc_00405DC0: ;
    SET_LO8(eax, MEM8(0x84BD28));
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_B(LO8(edx), LO8(eax))) goto loc_00405D80; /* jb: below (unsigned <) */

loc_00405DCB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00405DCF: ;
    eax = ZX8(LO8(edx));
    eax = eax + eax * 2;
    ecx = eax * 8 + 0x828338;
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    POP32(esp, ebx);

loc_00405DE1: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00405DF0
 * Original: 0x00405DF0 - 0x00405E20 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405DF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edi = esi;
    PUSH32(esp, 0); sub_00405D60(); /* call 0x00405D60 */

loc_00405E06: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00405E20(); return; } /* je: equal / zero */

loc_00405E11: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ebp;
    MEM32(eax + 0x14) = ebx;
    g_seh_ebp = ebp; sub_00405E5A(); return; /* tail jmp 0x00405E5A */

}

/**
 * sub_00405EB0
 * Original: 0x00405EB0 - 0x00405F4A (154 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405EB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_00405F47; /* je: equal / zero */

loc_00405EBC: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00405F33; /* jns: not sign (positive) */

loc_00405EC3: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0x3D));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_00405F32; /* jbe: below or equal (unsigned <=) */

loc_00405ECF: ;
    PUSH32(esp, edi);

loc_00405ED0: ;
    edx = MEM32(esi + 0x30);
    eax = ZX8(LO8(ebx));
    ecx = eax + eax * 4;
    edi = edx + ecx * 8;
    ecx = ZX8(MEM8(esi + 0x50));
    ecx--;
    if (CMP_EQ(eax, ecx)) goto loc_00405F11; /* je: equal / zero */

loc_00405EE5: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00405F14; /* je: equal / zero */

loc_00405EEC: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00405D60(); /* call 0x00405D60 */

loc_00405EF6: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00405F14; /* je: equal / zero */

loc_00405F01: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(esi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_00405F0C: ;
    esp = esp + 8;
    goto loc_00405F14;

loc_00405F11: ;
    ebp = MEM32(edi + 0x14);

loc_00405F14: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0x3D));
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_B(LO8(ebx), LO8(ecx))) goto loc_00405ED0; /* jb: below (unsigned <) */

loc_00405F1F: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(ebp, ebp)) goto loc_00405F32; /* je: equal / zero */

loc_00405F24: ;
    ecx = MEM32(esi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x828408), _icall_esp); /* indirect call */
    }

loc_00405F2F: ;
    esp = esp + 8;

loc_00405F32: ;
    POP32(esp, ebx);

loc_00405F33: ;
    if (TEST_Z(MEM8(esi + 0x40), 0x10)) goto loc_00405F47; /* je: equal / zero */

loc_00405F39: ;
    edx = MEM32(esi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x828408), _icall_esp); /* indirect call */
    }

loc_00405F44: ;
    esp = esp + 8;

loc_00405F47: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00405F50
 * Original: 0x00405F50 - 0x00405FAC (92 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405F50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = eax;
    eax = ebp;
    PUSH32(esp, edi);
    esi = eax + 1;

loc_00405F60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00405F60; /* jne: not equal / not zero */

loc_00405F67: ;
    ecx = ebx + -1;
    ecx = ~ecx;
    edx = ebx + 0x17F;
    eax = eax - esi;
    ecx = ecx & edx;
    esi = ecx + eax + 0x58;
    eax = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x828404), _icall_esp); /* indirect call */
    }

loc_00405F86: ;
    edx = eax;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    esp = esp + 8;
    (void)0; /* test edx, edx - flags set for next jcc */
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    if (TEST_NZ(edx, edx)) { sub_00405FAC(); return; } /* jne: not equal / not zero */

loc_00405FA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00406020
 * Original: 0x00406020 - 0x004062CC (684 bytes, 240 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406020: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = MEM32(edi);
    eax = edi;
    PUSH32(esp, 0); sub_00406430(); /* call 0x00406430 */

loc_00406034: ;
    if (TEST_Z(eax, eax)) goto loc_004061FE; /* je: equal / zero */

loc_0040603C: ;
    eax = MEM32(esi + 0x38);
    ecx = eax;
    ecx = ecx & 0xFF0000;
    edx = eax;
    edx = edx >> 0x10;
    ecx = ecx | edx;
    ecx = ecx >> 8;
    edx = eax;
    edx = edx & 0xFF00;
    eax = eax << 0x10;
    edx = edx | eax;
    edx = edx << 8;
    ecx = ecx | edx;
    MEM32(esi + 0x38) = ecx;
    eax = MEM32(esi + 0x18);
    ecx = eax;
    ecx = ecx & 0xFF0000;
    edx = eax;
    edx = edx >> 0x10;
    ecx = ecx | edx;
    ecx = ecx >> 8;
    edx = eax;
    edx = edx << 0x10;
    eax = eax & 0xFF00;
    edx = edx | eax;
    edx = edx << 8;
    ecx = ecx | edx;
    MEM32(esi + 0x18) = ecx;
    eax = MEM32(esi + 0x20);
    ecx = eax;
    ecx = ecx & 0xFF0000;
    edx = eax;
    edx = edx >> 0x10;
    ecx = ecx | edx;
    ecx = ecx >> 8;
    edx = eax;
    edx = edx << 0x10;
    eax = eax & 0xFF00;
    edx = edx | eax;
    edx = edx << 8;
    ecx = ecx | edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(esi + 0x24);
    ecx = eax;
    ecx = ecx & 0xFF0000;
    edx = eax;
    edx = edx >> 0x10;
    ecx = ecx | edx;
    edx = eax;
    edx = edx << 0x10;
    ecx = ecx >> 8;
    eax = eax & 0xFF00;
    edx = edx | eax;
    edx = edx << 8;
    ecx = ecx | edx;
    MEM32(esi + 0x24) = ecx;
    eax = MEM32(esi + 0x28);
    ecx = eax;
    ecx = ecx & 0xFF0000;
    edx = eax;
    edx = edx >> 0x10;
    ecx = ecx | edx;
    edx = eax;
    edx = edx << 0x10;
    eax = eax & 0xFF00;
    edx = edx | eax;
    ecx = ecx >> 8;
    edx = edx << 8;
    ecx = ecx | edx;
    MEM32(esi + 0x28) = ecx;
    eax = MEM32(esi + 0x2C);
    ecx = eax;
    edx = eax;
    edx = edx >> 0x10;
    ecx = ecx & 0xFF0000;
    ecx = ecx | edx;
    edx = eax;
    edx = edx << 0x10;
    eax = eax & 0xFF00;
    ecx = ecx >> 8;
    edx = edx | eax;
    edx = edx << 8;
    ecx = ecx | edx;
    MEM32(esi + 0x2C) = ecx;
    eax = MEM32(esi + 0x1C);
    ecx = eax;
    ecx = ecx & 0xFF0000;
    edx = eax;
    edx = edx >> 0x10;
    ecx = ecx | edx;
    edx = eax;
    edx = edx << 0x10;
    eax = eax & 0xFF00;
    edx = edx | eax;
    edx = edx << 8;
    ecx = ecx >> 8;
    ecx = ecx | edx;
    MEM32(esi + 0x1C) = ecx;
    eax = MEM32(esi + 0x34);
    ecx = eax;
    edx = eax;
    edx = edx >> 0x10;
    ecx = ecx & 0xFF0000;
    ecx = ecx | edx;
    edx = eax;
    edx = edx << 0x10;
    eax = eax & 0xFF00;
    edx = edx | eax;
    edx = edx << 8;
    ecx = ecx >> 8;
    ecx = ecx | edx;
    MEM32(esi + 0x34) = ecx;
    SET_LO8(eax, MEM8(esi + 0x3D));
    SET_LO8(edx, 0); /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_004061FE; /* jbe: below or equal (unsigned <=) */

loc_0040618E: ;
    edi = edi;

loc_00406190: ;
    ecx = ZX8(LO8(edx));
    eax = ecx + ecx * 4 + 0xA;
    ebx = esi + eax * 8;
    eax = MEM32(ebx);
    edi = eax;
    edi = edi & 0xFF0000;
    ebp = eax;
    ebp = ebp >> 0x10;
    edi = edi | ebp;
    ebp = eax;
    eax = eax & 0xFF00;
    edi = edi >> 8;
    ebp = ebp << 0x10;
    ebp = ebp | eax;
    ebp = ebp << 8;
    edi = edi | ebp;
    MEM32(ebx) = edi;
    ecx = ecx + ecx * 4;
    eax = MEM32(esi + ecx * 8 + 0x64);
    ecx = esi + ecx * 8 + 0x64;
    edi = eax;
    edi = edi & 0xFF0000;
    ebx = eax;
    ebx = ebx >> 0x10;
    edi = edi | ebx;
    ebx = eax;
    ebx = ebx << 0x10;
    eax = eax & 0xFF00;
    ebx = ebx | eax;
    edi = edi >> 8;
    ebx = ebx << 8;
    edi = edi | ebx;
    MEM32(ecx) = edi;
    SET_LO8(eax, MEM8(esi + 0x3D));
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_B(LO8(edx), LO8(eax))) goto loc_00406190; /* jb: below (unsigned <) */

loc_004061FA: ;
    edi = MEM32(esp + 0x1C);

loc_004061FE: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esi + 0x38);
    ebp = eax + -1;
    eax = eax + 0x17F;
    ebp = ~ebp;
    ebp = ebp & eax;
    SET_LO8(eax, MEM8(esi + 0x3D));
    ebp = ebp - ecx;
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_004062B4; /* jbe: below or equal (unsigned <=) */

loc_0040621F: ;
    /* nop */

loc_00406220: ;
    eax = ZX8(LO8(ebx));
    edx = eax + eax * 4;
    ecx = MEM32(esi + edx * 8 + 0x64);
    eax = MEM32(esp + 0x1C);
    edi = esi + edx * 8 + 0x40;
    MEM32(edi + 0x1C) = ebp;
    edx = MEM32(eax + 8);
    eax = ecx;
    eax = eax - ebp;
    eax = eax + edx + -1;
    edx--;
    edx = ~edx;
    eax = eax & edx;
    MEM32(edi + 0x20) = eax;
    eax = eax - ecx;
    SET_LO8(ecx, MEM8(edi + 0xB));
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(edi + 0x10);
    ebp = ebp + eax;
    edx = edx + ecx;
    ecx = esp + 0x14;
    eax = edx + ebp + 0x40;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_00405D60(); /* call 0x00405D60 */

loc_0040626D: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00406281: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x14) = eax;
    if (TEST_Z(eax, eax)) { sub_004062CC(); return; } /* je: equal / zero */

loc_0040628B: ;
    SET_LO8(ecx, MEM8(edi + 0xB));
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = edx + eax + -1;
    edx--;
    edx = ~edx;
    ecx = ecx & edx;
    ecx = ecx - eax;
    MEM32(edi + 0x18) = ecx;
    SET_LO8(eax, MEM8(esi + 0x3D));
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_B(LO8(ebx), LO8(eax))) goto loc_00406220; /* jb: below (unsigned <) */

loc_004062B0: ;
    edi = MEM32(esp + 0x1C);

loc_004062B4: ;
    esi = esi + 0x40;
    MEM32(edi + 0x30) = esi;
    MEM8(edi + 0x51) = 0;
    MEM8(edi + 0x52) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_004062E0
 * Original: 0x004062E0 - 0x0040638C (172 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004062E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004062E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    SET_LO8(eax, MEM8(ebx + 0x3D));
    PUSH32(esp, ebp);
    SET_LO8(ecx, 0); /* xor self */
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(ecx);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00406388; /* jbe: below or equal (unsigned <=) */

loc_004062F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_00406300: ;
    eax = ZX8(LO8(ecx));
    edx = eax + eax * 4;
    eax = MEM32(ebx + edx * 8 + 0x5C);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = ebx + edx * 8 + 0x40;
    if (TEST_Z(eax, eax)) goto loc_00406373; /* je: equal / zero */

loc_00406312: ;
    eax = MEM32(edx + 0x14);
    edi = MEM32(edx + 0x18);
    ecx = MEM32(edx + 0x24);
    edi = edi + eax;
    eax = MEM32(edx + 0x10);
    if (CMP_AE(ecx, eax)) goto loc_00406330; /* jae: above or equal (unsigned >=) */

loc_00406324: ;
    ecx = ecx + 3;
    ecx = ecx & 0xFFFFFFFCu;
    eax = eax - ecx;
    edi = edi + eax + 0x40;

loc_00406330: ;
    if (TEST_Z(ebp, ebp)) goto loc_00406359; /* je: equal / zero */

loc_00406334: ;
    eax = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x10);
    esi = esi + eax;
    eax = MEM32(ebp + 0x24);
    esi = esi + ecx;
    if (CMP_AE(eax, ecx)) goto loc_0040635E; /* jae: above or equal (unsigned >=) */

loc_00406348: ;
    eax = ~eax;
    eax++;
    eax = eax & 3;
    ecx = 0x40;
    ecx = ecx - eax;
    esi = esi + ecx;
    goto loc_0040635E;

loc_00406359: ;
    esi = MEM32(ebx + 0x38);
    esi = esi + ebx;

loc_0040635E: ;
    ecx = MEM32(edx + 0x1C);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    SET_LO8(ecx, MEM8(esp + 0x13));

loc_00406373: ;
    SET_LO8(eax, MEM8(ebx + 0x3D));
    SET_LO8(ecx, LO8(ecx) + 1);
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    ebp = edx;
    MEM8(esp + 0x13) = LO8(ecx);
    if (CMP_B(LO8(ecx), LO8(eax))) goto loc_00406300; /* jb: below (unsigned <) */

loc_00406386: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00406388: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00406390
 * Original: 0x00406390 - 0x00406430 (160 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406390: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    SET_LO8(eax, MEM8(esi + 0x3D));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 8) = esi;
    MEM8(esp + 7) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0040642B; /* jbe: below or equal (unsigned <=) */

loc_004063AA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_004063B0: ;
    eax = ZX8(MEM8(esp + 0xF));
    eax = eax + eax * 4;
    ebp = esi + eax * 8 + 0x40;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edi = ebp;
    PUSH32(esp, 0); sub_00405D60(); /* call 0x00405D60 */

loc_004063C8: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x14);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0040640D; /* je: equal / zero */

loc_004063D6: ;
    edi = 0x5D6EFC;
    esi = ebp;
    ecx = 6;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    ecx = MEM32(ebp + 0x14);
    if (0 /* strings differed (repe cmpsb) */) goto loc_004063F8; /* jne: not equal / not zero */

loc_004063EB: ;
    edx = MEM32(ebx + 0x20);
    edx = edx - ecx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, ecx);
    goto loc_00406404;

loc_004063F8: ;
    edx = MEM32(ebp + 0x18);
    edx = edx + MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_00406404: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00406406: ;
    esi = MEM32(esp + 0x1C);
    esp = esp + 0xC;

loc_0040640D: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_00406418; /* jne: not equal / not zero */

loc_00406414: ;
    MEM32(ebx + 0x3C) = MEM32(ebx + 0x3C) | 4;

loc_00406418: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    SET_LO8(ecx, MEM8(esi + 0x3D));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_B(LO8(eax), LO8(ecx))) goto loc_004063B0; /* jb: below (unsigned <) */

loc_00406429: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0040642B: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00406430
 * Original: 0x00406430 - 0x00406486 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406430(void)
{
    int _flags = 0; /* fallback flag var */

loc_00406430: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    ecx = ZX8(MEM8(ecx + 0x3C));
    eax = MEM32(0x7556FC);
    ecx = ecx & 1;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0040646D; /* jne: not equal / not zero */

loc_00406444: ;
    edx = MEM32(0x755700);
    eax = 0; /* xor self */
    MEM8(esp) = 0x12;
    MEM8(esp + 1) = 0x34;
    (void)0; /* cmp MEM16(esp), 0x1234 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM16(esp), 0x1234)) ? 1 : 0); /* sete */
    (void)0; /* cmp edx, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(0x7556FC) = eax;
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_0040646D; /* jne: not equal / not zero */

loc_00406468: ;
    MEM32(0x755700) = eax;

loc_0040646D: ;
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, edx)) ? 1 : 0); /* setne */
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00406490
 * Original: 0x00406490 - 0x004064C1 (49 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00406490: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    esi = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0); sub_00405F50(); /* call 0x00405F50 */

loc_004064AA: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) { sub_004064C1(); return; } /* je: equal / zero */

loc_004064B1: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004069D0(); /* call 0x004069D0 */

loc_004064BB: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00406530
 * Original: 0x00406530 - 0x00406558 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406530(void)
{
    int _flags = 0; /* fallback flag var */

loc_00406530: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00406541; /* je: equal / zero */

loc_0040653D: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) | 8;

loc_00406541: ;
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(eax, eax)) { sub_00406558(); return; } /* je: equal / zero */

loc_00406548: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_004069D0(); /* call 0x004069D0 */

loc_00406553: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004065B0
 * Original: 0x004065B0 - 0x004065D8 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004065B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004065B0: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_004065C1; /* je: equal / zero */

loc_004065BD: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) | 0x10;

loc_004065C1: ;
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(eax, eax)) { sub_004065D8(); return; } /* je: equal / zero */

loc_004065C8: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_004069D0(); /* call 0x004069D0 */

loc_004065D3: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004067B0
 * Original: 0x004067B0 - 0x004068FB (331 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004067B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004067B0: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_004067C1; /* je: equal / zero */

loc_004067BD: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) | 0x20;

loc_004067C1: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) - 1;
    if ((MEM32(esi + 0x38) != 0)) goto loc_004068F9; /* jne: not equal / not zero */

loc_004067CA: ;
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_004067E1; /* je: equal / zero */

loc_004067D1: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_004069D0(); /* call 0x004069D0 */

loc_004067DC: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004067E1: ;
    ecx = MEM32(esi + 0x40);
    ecx = ecx | 0x100;
    eax = esi;
    MEM32(esi + 0x40) = ecx;
    PUSH32(esp, 0); sub_004062E0(); /* call 0x004062E0 */

loc_004067F4: ;
    ecx = MEM32(esi);
    MEM32(esi + 0x38) = 0;
    SET_LO8(eax, MEM8(ecx + 0x3E));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_004068FB(); return; } /* je: equal / zero */

loc_0040680C: ;
    eax = MEM32(esi + 0x40);
    if (TEST_NZ(HI8(eax), 8)) { sub_004068FB(); return; } /* jne: not equal / not zero */

loc_00406818: ;
    SET_LO8(eax, MEM8(ecx + 0x3D));
    PUSH32(esp, ebx);
    SET_LO8(edx, 0); /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00406845; /* jbe: below or equal (unsigned <=) */

loc_00406823: ;
    eax = ZX8(LO8(edx));
    eax = eax + eax * 4;
    edi = MEM32(ecx + eax * 8 + 0x64);
    ebx = MEM32(ecx + eax * 8 + 0x50);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    eax = ecx + eax * 8 + 0x40;
    if (CMP_AE(edi, ebx)) goto loc_0040683C; /* jae: above or equal (unsigned >=) */

loc_00406839: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + 1;

loc_0040683C: ;
    SET_LO8(eax, MEM8(ecx + 0x3D));
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_B(LO8(edx), LO8(eax))) goto loc_00406823; /* jb: below (unsigned <) */

loc_00406845: ;
    SET_LO8(edx, MEM8(ecx + 0x3D));
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_BE(LO8(edx) & LO8(edx), 0)) goto loc_004068F7; /* jbe: below or equal (unsigned <=) */

loc_00406856: ;
    PUSH32(esp, ebp);
    goto loc_00406860;

    /* nop */

loc_00406860: ;
    eax = ZX8(LO8(eax));
    edx = eax + eax * 4;
    edi = MEM32(ecx + edx * 8 + 0x64);
    eax = ecx + edx * 8 + 0x40;
    edx = MEM32(eax + 0x10);
    if (CMP_AE(edi, edx)) goto loc_004068E1; /* jae: above or equal (unsigned >=) */

loc_00406875: ;
    ecx = edi;
    edi = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x14);
    ebx = ecx + 3;
    ebx = ebx & 0xFFFFFFFCu;
    ebp = eax;
    ebp = ebp - ebx;
    ebp = ebp + edi;
    eax = eax + edi;
    (void)0; /* test MEM8(esi + 0x40), 2 - flags set for next jcc */
    ebx = edx + ebp + 0x40;
    if (TEST_Z(MEM8(esi + 0x40), 2)) goto loc_004068B8; /* je: equal / zero */

loc_00406895: ;
    edi = MEM32(0x84BD50);
    if (TEST_Z(edi, edi)) goto loc_004068B4; /* je: equal / zero */

loc_0040689F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x406910);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004068AF: ;
    esp = esp + 0x1C;
    goto loc_004068DD;

loc_004068B4: ;
    PUSH32(esp, 0);
    goto loc_004068D4;

loc_004068B8: ;
    edi = MEM32(0x84BD38);
    if (TEST_Z(edi, edi)) goto loc_004068D1; /* je: equal / zero */

loc_004068C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004068CC: ;
    esp = esp + 0x14;
    goto loc_004068D3;

loc_004068D1: ;
    eax = 0; /* xor self */

loc_004068D3: ;
    PUSH32(esp, eax);

loc_004068D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00406910(); /* call 0x00406910 */

loc_004068DA: ;
    esp = esp + 8;

loc_004068DD: ;
    ecx = MEM32(esp + 0x14);

loc_004068E1: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(edx, MEM8(ecx + 0x3D));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), LO8(edx) - flags set for next jcc */
    MEM8(esp + 0x18) = LO8(eax);
    if (CMP_B(LO8(eax), LO8(edx))) goto loc_00406860; /* jb: below (unsigned <) */

loc_004068F6: ;
    POP32(esp, ebp);

loc_004068F7: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004068F9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00406910
 * Original: 0x00406910 - 0x004069CF (191 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00406910: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00406921; /* je: equal / zero */

loc_0040691D: ;
    MEM32(ebx + 0x3C) = MEM32(ebx + 0x3C) | 0x40;

loc_00406921: ;
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) - 1;
    if ((MEM32(ebx + 0x38) != 0)) goto loc_004069CD; /* jne: not equal / not zero */

loc_0040692A: ;
    eax = MEM32(ebx + 0x3C);
    if (TEST_NZ(eax, eax)) goto loc_0040698E; /* jne: not equal / not zero */

loc_00406931: ;
    ecx = MEM32(ebx + 0x40);
    ecx = ecx | 0x200;
    eax = ebx;
    MEM32(ebx + 0x40) = ecx;
    PUSH32(esp, 0); sub_00406B60(); /* call 0x00406B60 */

loc_00406944: ;
    if (TEST_Z(MEM8(ebx + 0x40), 2)) goto loc_00406964; /* je: equal / zero */

loc_0040694A: ;
    eax = MEM32(0x84BD54);
    if (TEST_Z(eax, eax)) goto loc_0040695C; /* je: equal / zero */

loc_00406953: ;
    ecx = MEM32(ebx + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00406959: ;
    esp = esp + 4;

loc_0040695C: ;
    MEM32(0x84BD58) = MEM32(0x84BD58) - 1;
    goto loc_00406987;

loc_00406964: ;
    eax = MEM32(0x84BD3C);
    if (TEST_Z(eax, eax)) goto loc_00406981; /* je: equal / zero */

loc_0040696D: ;
    edx = MEM32(ebx + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00406973: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00406981; /* je: equal / zero */

loc_0040697A: ;
    MEM32(ebx + 0x3C) = MEM32(ebx + 0x3C) | 0x80;

loc_00406981: ;
    MEM32(0x84BD40) = MEM32(0x84BD40) - 1;

loc_00406987: ;
    eax = MEM32(ebx + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_0040699E; /* je: equal / zero */

loc_0040698E: ;
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_004069D0(); /* call 0x004069D0 */

loc_00406999: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0040699E: ;
    MEM32(ebx + 0x40) = MEM32(ebx + 0x40) | 0x401;
    PUSH32(esp, 0); sub_00406390(); /* call 0x00406390 */

loc_004069AA: ;
    if (TEST_Z(MEM8(ebx + 0x40), 1)) goto loc_004069B8; /* je: equal / zero */

loc_004069B0: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx + 0x1C);
    MEM32(ebx + 0x44) = edx;

loc_004069B8: ;
    eax = MEM32(ebx + 0x48);
    if (TEST_Z(eax, eax)) goto loc_004069CD; /* je: equal / zero */

loc_004069BF: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ebx + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004069CA: ;
    esp = esp + 0xC;

loc_004069CD: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004069D0
 * Original: 0x004069D0 - 0x00406A0A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004069D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004069D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00406A01; /* je: equal / zero */

loc_004069DE: ;
    (void)0; /* test MEM8(esi + 0x40), 2 - flags set for next jcc */
    ebx = MEM32(esi + 0x3C);
    edi = MEM32(esi + 0x34);
    if (TEST_Z(MEM8(esi + 0x40), 2)) { sub_00406A0A(); return; } /* je: equal / zero */

loc_004069EA: ;
    eax = MEM32(0x84BD54);
    if (TEST_Z(eax, eax)) goto loc_004069F9; /* je: equal / zero */

loc_004069F3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004069F6: ;
    esp = esp + 4;

loc_004069F9: ;
    MEM32(0x84BD58) = MEM32(0x84BD58) - 1;
    g_seh_ebp = ebp; sub_00406A28(); return; /* tail jmp 0x00406A28 */

loc_00406A01: ;
    ebx = 2;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00406A2D(); return; /* tail jmp 0x00406A2D */

}

/**
 * sub_00406A40
 * Original: 0x00406A40 - 0x00406AD1 (145 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406A40: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    MEM32(eax) = 0;
    ecx = MEM32(ebp);
    SET_LO8(ecx, MEM8(ecx + 0x3D));
    SET_LO8(edx, 0); /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 8) = LO8(ecx);
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_00406ACF; /* jbe: below or equal (unsigned <=) */

loc_00406A5F: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_00406A65: ;
    eax = ZX8(LO8(edx));
    eax = eax + eax * 4;
    eax = edi + eax * 8;
    if (TEST_Z(eax, eax)) goto loc_00406AA7; /* je: equal / zero */

loc_00406A72: ;
    esi = MEM32(esp + 0x18);

loc_00406A76: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00406A9A; /* jne: not equal / not zero */

loc_00406A7E: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00406A96; /* je: equal / zero */

loc_00406A82: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00406A9A; /* jne: not equal / not zero */

loc_00406A8C: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00406A76; /* jne: not equal / not zero */

loc_00406A96: ;
    eax = 0; /* xor self */
    goto loc_00406A9F;

loc_00406A9A: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00406A9F: ;
    if (TEST_Z(eax, eax)) goto loc_00406AB2; /* je: equal / zero */

loc_00406AA3: ;
    SET_LO8(ecx, MEM8(esp + 0x14));

loc_00406AA7: ;
    SET_LO8(edx, LO8(edx) + 1);
    if (CMP_B(LO8(edx), LO8(ecx))) goto loc_00406A65; /* jb: below (unsigned <) */

loc_00406AAD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00406AB2: ;
    eax = ZX8(LO8(edx));
    edx = MEM32(ebp + 0x30);
    ecx = eax + eax * 4;
    eax = edx + ecx * 8;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x18);
    POP32(esp, esi);
    ecx = ecx + edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    POP32(esp, edi);

loc_00406ACF: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00406AE0
 * Original: 0x00406AE0 - 0x00406B4F (111 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406AE0: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx);
    SET_LO8(edx, MEM8(edx + 0x3D));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = LO8(edx);
    if (CMP_BE(LO8(edx) & LO8(edx), 0)) goto loc_00406B47; /* jbe: below or equal (unsigned <=) */

loc_00406AF8: ;
    edi = MEM32(ecx + 0x30);
    goto loc_00406B00;

    /* nop */

loc_00406B00: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx + ecx * 4;
    ecx = edi + ecx * 8;
    if (TEST_Z(ecx, ecx)) goto loc_00406B41; /* je: equal / zero */

loc_00406B0D: ;
    esi = ebp;
    /* nop */

loc_00406B10: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_00406B34; /* jne: not equal / not zero */

loc_00406B18: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00406B30; /* je: equal / zero */

loc_00406B1C: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_00406B34; /* jne: not equal / not zero */

loc_00406B26: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00406B10; /* jne: not equal / not zero */

loc_00406B30: ;
    ecx = 0; /* xor self */
    goto loc_00406B39;

loc_00406B34: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - 0xFFFFFFFFu - _cf; /* sbb */

loc_00406B39: ;
    if (TEST_Z(ecx, ecx)) { sub_00406B4F(); return; } /* je: equal / zero */

loc_00406B3D: ;
    SET_LO8(edx, MEM8(esp + 0x13));

loc_00406B41: ;
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_B(LO8(eax), LO8(edx))) goto loc_00406B00; /* jb: below (unsigned <) */

loc_00406B47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00406B60
 * Original: 0x00406B60 - 0x00406BA0 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00406B60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84BD5C);
    esi = eax;
    MEM32(0x84BD5C) = 1;
    PUSH32(esp, 0); sub_00406BA0(); /* call 0x00406BA0 */

loc_00406B79: ;
    edx = esi;
    PUSH32(esp, 0); sub_004072A0(); /* call 0x004072A0 */

loc_00406B80: ;
    eax = esi;
    PUSH32(esp, 0); sub_00406430(); /* call 0x00406430 */

loc_00406B87: ;
    if (TEST_Z(eax, eax)) goto loc_00406B90; /* je: equal / zero */

loc_00406B8B: ;
    PUSH32(esp, 0); sub_00407090(); /* call 0x00407090 */

loc_00406B90: ;
    edx = esi;
    PUSH32(esp, 0); sub_004071A0(); /* call 0x004071A0 */

loc_00406B97: ;
    MEM32(0x84BD5C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00406BA0
 * Original: 0x00406BA0 - 0x00406C43 (163 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406BA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D6EFC);
    ecx = esi;
    PUSH32(esp, 0); sub_00406AE0(); /* call 0x00406AE0 */

loc_00406BB0: ;
    MEM8(esi + 0x50) = LO8(eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D6EFC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00406A40(); /* call 0x00406A40 */

loc_00406BC3: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x34);
    edi = MEM32(esp + 0x1C);
    edi = edi + edx;
    edx = MEM32(edi);
    esp = esp + 0x10;
    eax = esi;
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0); sub_00406430(); /* call 0x00406430 */

loc_00406BDD: ;
    ebp = MEM32(0x84BD5C);
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_00406C24; /* je: equal / zero */

loc_00406BE9: ;
    if (CMP_NE(ebp, ebx)) goto loc_00406BFA; /* jne: not equal / not zero */

loc_00406BED: ;
    eax = MEM32(0x7556FC);
    if (CMP_EQ(eax, MEM32(0x755700))) goto loc_00406C24; /* je: equal / zero */

loc_00406BFA: ;
    eax = MEM32(esi + 0x10);
    ecx = eax;
    edx = eax;
    edx = edx >> 0x10;
    ecx = ecx & 0xFF0000;
    ecx = ecx | edx;
    edx = eax;
    edx = edx & 0xFF00;
    eax = eax << 0x10;
    edx = edx | eax;
    ecx = ecx >> 8;
    edx = edx << 8;
    ecx = ecx | edx;
    MEM32(esi + 0x10) = ecx;

loc_00406C24: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_EQ(ecx, ebx)) { sub_00406C43(); return; } /* je: equal / zero */

loc_00406C2B: ;
    edx = MEM32(esi);
    eax = edi + 4;
    MEM32(esi + 0x14) = eax;
    edx = MEM32(edx + 0x18);
    eax = eax + edx * 4;
    MEM32(esi + 0x18) = eax;
    eax = eax + ecx;
    MEM32(esi + 0x1C) = eax;
    g_seh_ebp = ebp; sub_00406C4F(); return; /* tail jmp 0x00406C4F */

}

/**
 * sub_00407090
 * Original: 0x00407090 - 0x004071A0 (272 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407090: ;
    esp = esp - 0x10;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, ebp);
    MEM8(esi + 0x51) = 1;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 0x20);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebp;
    if (CMP_BE(eax, ebp)) goto loc_00407128; /* jbe: below or equal (unsigned <=) */

loc_004070B3: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + ebp);
    ecx = edx + ebp;
    edx = MEM32(esi);
    if (CMP_A(eax, MEM32(edx + 0x1C))) goto loc_004070D3; /* ja: above (unsigned >) */

loc_004070C3: ;
    edx = MEM32(esi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    eax = MEM32(eax + edx + -10);
    MEM32(esp + 0x14) = eax;
    goto loc_004070DB;

loc_004070D3: ;
    MEM32(esp + 0x14) = 0;

loc_004070DB: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 4);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_BE(eax & eax, 0)) goto loc_00407113; /* jbe: below or equal (unsigned <=) */

loc_004070EB: ;
    goto loc_004070F0;

    /* nop */

loc_004070F0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = ecx + MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00407450(); /* call 0x00407450 */

loc_00407101: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + ebp + 8);
    esp = esp + 8;
    ebx = ebx + 4;
    edi++;
    if (CMP_B(edi, eax)) goto loc_004070F0; /* jb: below (unsigned <) */

loc_00407113: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x20);
    eax++;
    ebp = ebp + 0xC;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(eax, edx)) goto loc_004070B3; /* jb: below (unsigned <) */

loc_00407128: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x28);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(eax, ebx)) goto loc_00407199; /* jbe: below or equal (unsigned <=) */

loc_00407137: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(esi);
    edi = MEM32(edx + 0x1C);
    ecx = eax + ebx;
    eax = MEM32(ecx);
    if (CMP_A(eax, edi)) goto loc_00407154; /* ja: above (unsigned >) */

loc_00407148: ;
    edx = MEM32(esi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    ebp = MEM32(eax + edx + -10);
    goto loc_00407156;

loc_00407154: ;
    ebp = 0; /* xor self */

loc_00407156: ;
    eax = MEM32(ecx + 8);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00407184; /* jbe: below or equal (unsigned <=) */

loc_0040715F: ;
    /* nop */

loc_00407160: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    ecx = ecx + ebp;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00407450(); /* call 0x00407450 */

loc_00407170: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 4;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + ebx + 8);
    esp = esp + 8;
    edi++;
    if (CMP_B(edi, eax)) goto loc_00407160; /* jb: below (unsigned <) */

loc_00407184: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x28);
    eax++;
    ebx = ebx + 0xC;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(eax, edx)) goto loc_00407137; /* jb: below (unsigned <) */

loc_00407199: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_004071A0
 * Original: 0x004071A0 - 0x00407294 (244 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004071A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004071A0: ;
    esp = esp - 0x14;
    eax = MEM32(edx + 0x2C);
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    MEM8(edx + 0x52) = 1;
    esi = MEM32(ecx + 0x28);
    MEM32(esp + 8) = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(esi, eax)) goto loc_0040728F; /* jbe: below or equal (unsigned <=) */

loc_004071C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_004071D0: ;
    eax = MEM32(edx + 0x28);
    ecx = MEM32(esp + 0x10);
    esi = MEM32(edx);
    esi = MEM32(esi + 0x1C);
    edi = ecx + eax;
    eax = MEM32(edi);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    ecx = MEM32(edi + 4);
    if (CMP_A(eax, esi)) goto loc_004071F6; /* ja: above (unsigned >) */

loc_004071E8: ;
    ebp = MEM32(edx + 0x1C);
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xE);
    ebp = MEM32(ebx + ebp + -10);
    goto loc_004071F8;

loc_004071F6: ;
    ebp = 0; /* xor self */

loc_004071F8: ;
    if (CMP_A(ecx, esi)) goto loc_0040720E; /* ja: above (unsigned >) */

loc_004071FC: ;
    ebx = MEM32(edx + 0x1C);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xE);
    esi = MEM32(esi + ebx + -10);
    MEM32(esp + 0x18) = esi;
    goto loc_00407216;

loc_0040720E: ;
    MEM32(esp + 0x18) = 0;

loc_00407216: ;
    esi = MEM32(edx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xE);
    eax = MEM32(eax + esi + -6);
    ecx = MEM32(ecx + esi + -6);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 8);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040726B; /* jbe: below or equal (unsigned <=) */

loc_00407234: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax);
    if (CMP_AE(esi, MEM32(esp + 0x20))) goto loc_00407250; /* jae: above or equal (unsigned >=) */

loc_00407240: ;
    edi = MEM32(esi + ebp);
    if (CMP_AE(edi, ecx)) goto loc_00407250; /* jae: above or equal (unsigned >=) */

loc_00407247: ;
    eax = MEM32(esp + 0x18);
    edi = edi + eax;
    MEM32(esi + ebp) = edi;

loc_00407250: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x28);
    esi = esi + 4;
    MEM32(esp + 0x14) = esi;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esi + eax + 8);
    ebx++;
    if (CMP_B(ebx, edi)) goto loc_00407234; /* jb: below (unsigned <) */

loc_0040726B: ;
    eax = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edx);
    esi = MEM32(ecx + 0x28);
    eax++;
    edi = edi + 0xC;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = edi;
    if (CMP_B(eax, esi)) goto loc_004071D0; /* jb: below (unsigned <) */

loc_0040728C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0040728F: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_004072A0
 * Original: 0x004072A0 - 0x004072E1 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004072A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004072A0: ;
    ecx = MEM32(edx);
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    esi = 0; /* xor self */
    if (CMP_BE(edi & edi, 0)) goto loc_004072DE; /* jbe: below or equal (unsigned <=) */

loc_004072B0: ;
    eax = eax + 4;
    PUSH32(esp, ebx);

loc_004072B4: ;
    ecx = ZX8(MEM8(eax + 8));
    edi = MEM32(edx + 0x30);
    ecx = ecx + ecx * 4;
    ebx = MEM32(edi + ecx * 8 + -16);
    ecx = edi + ecx * 8;
    edi = MEM32(ecx + -20);
    ecx = MEM32(eax);
    edi = edi + ebx;
    ecx = ecx + edi;
    MEM32(eax) = ecx;
    ecx = MEM32(edx);
    edi = MEM32(ecx + 0x1C);
    esi++;
    eax = eax + 0xE;
    if (CMP_B(esi, edi)) goto loc_004072B4; /* jb: below (unsigned <) */

loc_004072DD: ;
    POP32(esp, ebx);

loc_004072DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004072F0
 * Original: 0x004072F0 - 0x00407312 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004072F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004072F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x5D8954);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_00407303: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_00407312(); return; } /* je: equal / zero */

loc_0040730A: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00407450
 * Original: 0x00407450 - 0x0040755F (271 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407450: ;
    eax = MEM32(0x84BD5C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (TEST_NZ(eax, eax)) goto loc_0040746E; /* jne: not equal / not zero */

loc_0040745D: ;
    eax = MEM32(0x7556FC);
    if (CMP_EQ(eax, MEM32(0x755700))) goto loc_00407534; /* je: equal / zero */

loc_0040746E: ;
    eax = MEM32(esp + 8);
    eax = eax - 2;
    if ((eax == 0)) { sub_0040755F(); return; } /* je: equal / zero */

loc_0040747B: ;
    eax = eax - 2;
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_00407535; /* je: equal / zero */

loc_00407485: ;
    eax = eax - 4;
    if ((eax != 0)) goto loc_00407533; /* jne: not equal / not zero */

loc_0040748E: ;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    edi = (edi >> 0x10) | (ebx << (32 - 0x10)); /* shrd */
    ebx = ebx >> 0x10;
    edx = 0; /* xor self */
    edx = edx | edi;
    esi = ecx;
    esi = esi & 0xFF0000;
    esi = esi | ebx;
    edx = (edx >> 0x10) | (esi << (32 - 0x10)); /* shrd */
    edi = 0; /* xor self */
    edx = edx | edi;
    esi = esi >> 0x10;
    ebx = ecx;
    ebx = ebx & 0xFF00;
    esi = esi | ebx;
    edx = (edx >> 0x10) | (esi << (32 - 0x10)); /* shrd */
    edx = edx | edi;
    ebx = ecx;
    ebx = ebx & 0xFF;
    ebp = eax;
    ecx = (ecx << 0x10) | (ebp >> (32 - 0x10)); /* shld */
    esi = esi >> 0x10;
    esi = esi | ebx;
    ebx = 0; /* xor self */
    ebx = ebx | ecx;
    edi = eax;
    edi = edi & 0xFF00;
    ebp = ebp << 0x10;
    edi = edi | ebp;
    ebx = (ebx << 0x10) | (edi >> (32 - 0x10)); /* shld */
    edi = edi << 0x10;
    ecx = eax;
    ecx = ecx & 0xFF0000;
    edi = edi | ecx;
    ebp = 0; /* xor self */
    ebx = ebx | ebp;
    ebx = (ebx << 0x10) | (edi >> (32 - 0x10)); /* shld */
    edi = edi << 0x10;
    eax = eax & 0xFF000000u;
    edi = edi | eax;
    eax = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    ebx = ebx | ecx;
    ebx = (ebx << 8) | (edi >> (32 - 8)); /* shld */
    edx = (edx >> 8) | (esi << (32 - 8)); /* shrd */
    edi = edi << 8;
    edx = edx | edi;
    POP32(esp, edi);
    esi = esi >> 8;
    esi = esi | ebx;
    POP32(esp, ebp);
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;
    POP32(esp, ebx);

loc_00407533: ;
    POP32(esp, esi);

loc_00407534: ;
    esp += 4; return; /* ret */

loc_00407535: ;
    eax = MEM32(ecx);
    edx = eax;
    esi = eax;
    esi = esi >> 0x10;
    edx = edx & 0xFF0000;
    edx = edx | esi;
    esi = eax;
    esi = esi & 0xFF00;
    eax = eax << 0x10;
    esi = esi | eax;
    esi = esi << 8;
    edx = edx >> 8;
    edx = edx | esi;
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00407570
 * Original: 0x00407570 - 0x004076FF (399 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407570: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x20);
    ecx = MEM32(esp + 8);
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    eax = eax + ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    MEM32(eax) = ebp;
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEMF(eax + 0xC) = xmm1; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = 1;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x28);
    eax = ecx + 0x20;
    MEM32(edi + 0x24) = eax;
    edx = esi;
    eax = edx;
    eax = eax & 3;
    if ((eax == 0)) goto loc_004075CA; /* je: equal / zero */

loc_004075C1: ;
    ebx = 4;
    ebx = ebx - eax;
    edx = edx + ebx;

loc_004075CA: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    eax = edx * 4 + 0x20;
    if (CMP_LE(esi, ebp)) goto loc_004076FA; /* jle: less or equal (signed <=) */

loc_004075DB: ;
    goto loc_004075F0;

loc_004075DD: ;
    xmm1 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    /* nop */

loc_004075F0: ;
    edx = MEM32(edi + 0x24);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edx + ebx * 4) = eax;
    eax = eax + 0x80;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edi + 0x24);
    esi = MEM32(eax + ebx * 4);
    esi = esi + ecx;
    MEMF(esi + 0x44) = xmm0; /* movss */
    MEMF(esi + 0x48) = xmm0; /* movss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C0);
    MEMF(esi + 0x50) = xmm1; /* movss */
    MEM32(esi + 0x5C) = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x828410), _icall_esp); /* indirect call */
    }

loc_0040762C: ;
    esp = esp + 4;
    edx = eax;
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, 0); sub_003FA650(); /* call 0x003FA650 */

loc_00407639: ;
    MEM32(esi + 0x64) = ebp;
    MEM16(esi + 0x6E) = LO16(ebp);
    eax = MEM32(edi);
    eax = eax - ebp;
    if ((eax == 0)) goto loc_0040766C; /* je: equal / zero */

loc_00407646: ;
    eax--;
    if ((eax != 0)) goto loc_00407690; /* jne: not equal / not zero */

loc_00407649: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x828410), _icall_esp); /* indirect call */
    }

loc_00407651: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(esi + 0x70) = eax;
    esp = esp + 4;
    MEM32(eax + 0x1C) = ebp;
    MEMF(eax + 8) = xmm1; /* movss */
    MEM32(eax + 0x24) = ebp;
    goto loc_00407698;

loc_0040766C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x828410), _icall_esp); /* indirect call */
    }

loc_00407674: ;
    MEM32(esi + 0x70) = eax;
    esp = esp + 4;
    MEM32(eax + 4) = ebp;
    MEM16(eax + 8) = LO16(ebp);
    MEM16(eax + 0xA) = LO16(ebp);
    MEM32(eax + 0xC) = ebp;
    MEM16(eax + 0x10) = LO16(ebp);
    MEM16(eax + 0x12) = LO16(ebp);

loc_00407690: ;
    xmm1 = MEMF(0x648D14); /* movss */

loc_00407698: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esi + 0x74) = 0xFF;
    MEMF(esi + 0x38) = xmm0; /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEMF(esi + 0x2C) = xmm0; /* movss */
    MEMF(esi + 0x24) = xmm0; /* movss */
    MEMF(esi + 0x20) = xmm0; /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    MEMF(esi + 0x18) = xmm0; /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 0x3C) = xmm1; /* movss */
    MEMF(esi + 0x28) = xmm1; /* movss */
    MEMF(esi + 0x14) = xmm1; /* movss */
    MEMF(esi) = xmm1; /* movss */
    eax = MEM32(edi + 0x28);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_004075DD; /* jl: less (signed <) */

loc_004076FA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00407700
 * Original: 0x00407700 - 0x00407768 (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407700(void)
{
    uint32_t ebp;

loc_00407700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x20);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + edx);
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + edx * 4);
    ebx = ebx + eax;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x60);
    PUSH32(esp, edi);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_0040772C: ;
    esi = MEM32(0x84B868);
    eax = MEM32(ebp + 0xC);
    esi = esi + 0x90;
    ecx = 0x10;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ebx = MEM32(ebx + 0x60);
    esi = ebx + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00407F60(); /* call 0x00407F60 */

loc_00407761: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00407770
 * Original: 0x00407770 - 0x004077B8 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407770(void)
{
    float xmm0;

loc_00407770: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + edx);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(edx + ecx + 0x70);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    ecx = 0; /* xor self */
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(0x828418) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(0x82841C) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(0x828420) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004077C0
 * Original: 0x004077C0 - 0x004077F4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004077C0(void)
{

loc_004077C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x20);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + edx);
    eax = MEM32(eax + 0x24);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(edx + ecx + 0x70);
    ecx = MEM32(0x828418);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(0x82841C);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(0x828420);
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00407800
 * Original: 0x00407800 - 0x004079D3 (467 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00407800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x108;
    eax = MEM32(ebx + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0040781F; /* je: equal / zero */

loc_00407815: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0040781C: ;
    esp = esp + 8;

loc_0040781F: ;
    eax = MEM32(ebx + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_004079BC; /* jle: less or equal (signed <=) */

loc_00407832: ;
    edx = MEM32(ebx + 0x24);
    eax = MEM32(esp + 0xC);
    edx = MEM32(edx + eax * 4);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(ebp + 8);
    xmm3 = MEMF(0x648D10); /* movss */
    edx = edx + eax;
    eax = MEM32(edx + 0x60);
    esi = eax + 0x10;
    ecx = 0x10;
    edi = esp + 0xD0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(edx + 0x60);
    esi = eax + 0x90;
    ecx = 0x10;
    edi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ZX16(MEM16(edx + 0x6E));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    eax = esp + 0x90;
    xmm1 = xmm1 * xmm3; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0x98) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00407981: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0040798D: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00407999: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x20);
    esi = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(eax + edx) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 0x18), _icall_esp); /* indirect call */
    }

loc_004079AB: ;
    esp = esp + 8;
    esi++;
    (void)0; /* cmp esi, MEM32(ebx + 0x28) - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (CMP_L(esi, MEM32(ebx + 0x28))) goto loc_00407832; /* jl: less (signed <) */

loc_004079BC: ;
    eax = MEM32(ebx + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_004079CD; /* je: equal / zero */

loc_004079C3: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004079CA: ;
    esp = esp + 8;

loc_004079CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004079E0
 * Original: 0x004079E0 - 0x00407AAF (207 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004079E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm5, xmm6;

loc_004079E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    edx = MEM32(esi + eax);
    ecx = MEM32(ecx + 0x24);
    esi = esi + eax;
    PUSH32(esp, edi);
    edi = MEM32(ecx + edx * 4);
    edx = ZX16(MEM16(edi + eax + 0x6E));
    edi = edi + eax;
    eax = MEM32(edi + 0x60);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    MEMF(eax + 0xD4) = xmm5; /* movss */
    MEMF(eax + 0xD8) = xmm5; /* movss */
    MEMF(eax + 0xDC) = xmm0; /* movss */
    MEMF(eax + 0xE0) = xmm1; /* movss */
    MEMF(eax + 0xE4) = xmm5; /* movss */
    MEMF(eax + 0xE8) = xmm6; /* movss */
    eax = MEM32(edi + 0x40);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x60) = edi;
    if (TEST_Z(eax, eax)) { sub_00407AAF(); return; } /* je: equal / zero */

loc_00407A54: ;
    PUSH32(esp, eax);
    eax = edi + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00407A63: ;
    ecx = MEM32(edi + 0x40);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_003E2D30(); /* call 0x003E2D30 */

loc_00407A6F: ;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00407A96; /* jbe: below or equal (unsigned <=) */

loc_00407A80: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00407AA1; /* ja: above (unsigned >) */

loc_00407A8B: ;
    xmm3 = MEMF(edi + 0x50); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    g_seh_ebp = ebp; sub_00407AD5(); return; /* tail jmp 0x00407AD5 */

loc_00407A96: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00407AA4; /* ja: above (unsigned >) */

loc_00407AA1: ;
    xmm0 = xmm1; /* movaps */

loc_00407AA4: ;
    xmm3 = MEMF(edi + 0x50); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    g_seh_ebp = ebp; sub_00407AD5(); return; /* tail jmp 0x00407AD5 */

}

/**
 * sub_00407D40
 * Original: 0x00407D40 - 0x00407E14 (212 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407D40: ;
    esp = esp - 0x10;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, ebx);
    eax = ecx + edx + 4;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ecx = esp + 0xC;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0xC;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00407D8E: ;
    eax = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x24) = ebx;
    if (CMP_BE(eax, ebx)) goto loc_00407E0B; /* jbe: below or equal (unsigned <=) */

loc_00407D9B: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    edx = eax + eax * 8;
    PUSH32(esp, esi);
    edx = edx << 4;
    PUSH32(esp, edi);
    /* nop */

loc_00407DB0: ;
    ecx = MEM32(ebp + 0x14);
    xmm1 = MEMF(ebx + ecx + 0x74); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm2 = MEMF(ebx + ecx + 0x78); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    edi = ebx + ecx;
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(edi + 0x70); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x14); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00407DF9; /* jbe: below or equal (unsigned <=) */

loc_00407DE6: ;
    eax--;
    edx = edx - 0x90;
    esi = edx + ecx;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_00407E03;

loc_00407DF9: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 1;
    ebx = ebx + 0x90;

loc_00407E03: ;
    if (CMP_B(MEM32(esp + 0x2C), eax)) goto loc_00407DB0; /* jb: below (unsigned <) */

loc_00407E09: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00407E0B: ;
    MEM32(ebp + 0x18) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00407E20
 * Original: 0x00407E20 - 0x00407E54 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407E20: ;
    PUSH32(esp, ecx);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(0x757D47));
    if (CMP_NE(eax, 1)) { sub_00407E54(); return; } /* jne: not equal / not zero */

loc_00407E2B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00407E3A; /* jne: not equal / not zero */

loc_00407E2F: ;
    SET_LO8(ecx, 0); /* xor self */
    MEM8(esp + 3) = 0;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_00407E77(); return; /* tail jmp 0x00407E77 */

loc_00407E3A: ;
    SET_LO8(edx, MEM8(0x757D46));
    SET_LO8(eax, MEM8(0x757D44));
    SET_LO8(ecx, MEM8(0x757D45));
    MEM8(esp + 3) = LO8(edx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    g_seh_ebp = ebp; sub_00407E79(); return; /* tail jmp 0x00407E79 */

}

/**
 * sub_00407EA0
 * Original: 0x00407EA0 - 0x00407ED8 (56 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407EA0: ;
    eax = MEM32(0x7502EC);
    if (TEST_Z(eax, eax)) { sub_00407ED8(); return; } /* je: equal / zero */

loc_00407EA9: ;
    eax = MEM32(0x5499F0);
    eax = eax | 0x2000;
    MEM32(0x757D54) = 1;
    MEM32(0x7502EC) = 0;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B68) = 0;
    g_seh_ebp = ebp; sub_00407EE2(); return; /* tail jmp 0x00407EE2 */

}

/**
 * sub_00407F60
 * Original: 0x00407F60 - 0x00407FEE (142 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00407F60: ;
    edx = MEM32(ecx + 0x20);
    edx = MEM32(eax + edx);
    ecx = MEM32(ecx + 0x24);
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = MEM32(ecx + edx * 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + eax + 0x64);
    esi = esi + eax;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_00407F9A: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_00407FAD: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(0x757D58) = eax;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_00407FBA: ;
    SET_LO8(edx, MEM8(esi + 0x6C));
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    PUSH32(esp, 0); sub_00407E20(); /* call 0x00407E20 */

loc_00407FCE: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_00407FE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00407FF0
 * Original: 0x00407FF0 - 0x004080A3 (179 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00407FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(0x84B868);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x10;
    ecx = 0x10;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_Z(edx, edx)) goto loc_00408020; /* je: equal / zero */

loc_00408012: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00408020: ;
    edx = esp + 0x10;
    eax = edx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
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
    if (TEST_NZ(MEM8(0x547548), 0x10)) goto loc_0040808D; /* jne: not equal / not zero */

loc_0040807F: ;
    ecx = 0xC;
    esi = edx;
    edi = 0x54A298;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0040808D: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x14;
    ecx = 0x60;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0040809D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004080B0
 * Original: 0x004080B0 - 0x00408173 (195 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004080B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_004080B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(0x84B868);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x10;
    ecx = 0x10;
    edi = esp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_Z(edx, edx)) goto loc_004080E3; /* je: equal / zero */

loc_004080D5: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_004080E3: ;
    eax = esp + 0x50;
    ecx = esp + 8;
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_004080F4: ;
    edx = esi;
    eax = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
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
    if (TEST_NZ(MEM8(0x547548), 0x10)) goto loc_0040815D; /* jne: not equal / not zero */

loc_00408151: ;
    ecx = 0xC;
    edi = 0x54A358;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0040815D: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x14;
    ecx = 0x6C;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0040816D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00408180
 * Original: 0x00408180 - 0x0040820B (139 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408180(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00408180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = MEM32(0x84B868);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x90;
    ecx = 0x10;
    edi = esp + 0x10;
    eax = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
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
    edx = esp + 0x10;
    ecx = 0x63;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00408205: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00408210
 * Original: 0x00408210 - 0x004082F3 (227 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00408210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_Z(eax, eax)) goto loc_0040823E; /* je: equal / zero */

loc_00408230: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0040823E: ;
    if (CMP_A(edx, 0x3C)) goto loc_00408289; /* ja: above (unsigned >) */

loc_00408243: ;
    ecx = ZX8(MEM8(edx + 0x4082FC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x4082F4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00408251u) goto loc_00408251;
    if (_jt == 0x00408289u) goto loc_00408289;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00408251: ;
    edx = ZX16(MEM16(ebp + 8));
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x3F800000);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_0040827B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00408289: ;
    eax = esp + 0x10;
    ecx = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
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
    edx = esp + 0x10;
    ecx = 0x67;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_004082ED: ;
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
 * sub_00408340
 * Original: 0x00408340 - 0x00408406 (198 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408340(void)
{

loc_00408340: ;
    PUSH32(esp, esi);
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00408350: ;
    edx = 1;
    ecx = 0x40304;
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00408369: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040837F: ;
    esi = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549AE8) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00408393: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x549C4C);
    PUSH32(esp, ecx);
    MEM32(0x549AF8) = esi;
    MEM32(0x757D5C) = eax;
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_004083AD: ;
    eax = 4;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 1;
    PUSH32(esp, esi);
    eax = 1;
    MEM32(0x54734C) = esi;
    MEM32(0x547340) = 2;
    MEM32(0x547344) = 2;
    MEM32(0x547358) = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_004083EE: ;
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_004083F9: ;
    PUSH32(esp, esi);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00408404: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00408410
 * Original: 0x00408410 - 0x004086F7 (743 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00408410: ;
    SET_LO8(ecx, MEM8(0x757D64));
    esp = esp - 0x24;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    SET_LO8(eax, 1);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0040842E; /* jne: not equal / not zero */

loc_00408424: ;
    if (CMP_NE(MEM32(0x757D60), esi)) goto loc_0040842E; /* jne: not equal / not zero */

loc_0040842C: ;
    SET_LO8(eax, 0); /* xor self */

loc_0040842E: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x757D60) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_004084E9; /* je: equal / zero */

loc_0040843C: ;
    PUSH32(esp, 0); sub_00408A60(); /* call 0x00408A60 */

loc_00408441: ;
    ecx = 0x40350;
    edx = 0x8006;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00408452: ;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    if (CMP_EQ(esi, edi)) goto loc_00408494; /* je: equal / zero */

loc_00408465: ;
    edx = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040846F: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00408488: ;
    MEM32(0x549AF4) = 0x303;
    goto loc_004084CF;

loc_00408494: ;
    edx = 0x306;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040849E: ;
    edx = 0; /* xor self */
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x306;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_004084B4: ;
    eax = MEM32(0x5499F0);
    eax = eax | 0x2000;
    MEM32(0x549AF4) = edi;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B68) = edi;

loc_004084CF: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00407E20(); /* call 0x00407E20 */

loc_004084DB: ;
    ebx = MEM32(esp + 0x10);
    esp = esp + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00537B40(); /* call 0x00537B40 */

loc_004084E9: ;
    eax = MEM32(esp + 0x44);
    SET_LO8(ebx, MEM8(esp + 0x40));
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x750324);
    if (TEST_Z(eax, eax)) { sub_004086F7(); return; } /* je: equal / zero */

loc_004084FE: ;
    if (CMP_B(LO8(ebx), 0xFF)) goto loc_0040855E; /* jb: below (unsigned <) */

loc_00408503: ;
    if (TEST_Z(esi, esi)) goto loc_00408655; /* je: equal / zero */

loc_0040850B: ;
    if (TEST_NZ(eax, eax)) goto loc_0040855E; /* jne: not equal / not zero */

loc_0040850F: ;
    eax = MEM32(0x757CEC);
    if (TEST_NZ(eax, eax)) goto loc_0040854F; /* jne: not equal / not zero */

loc_00408518: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00408527: ;
    if (TEST_Z(eax, eax)) goto loc_0040854F; /* je: equal / zero */

loc_0040852B: ;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    edi = eax + 0xC;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x756550;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x757CEC) = eax;

loc_0040854F: ;
    eax = MEM32(0x757CEC);
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00408559: ;
    g_seh_ebp = ebp; sub_00408914(); return; /* tail jmp 0x00408914 */

loc_0040855E: ;
    if (TEST_Z(esi, esi)) goto loc_00408655; /* je: equal / zero */

loc_00408566: ;
    if (TEST_Z(eax, eax)) goto loc_0040860B; /* je: equal / zero */

loc_0040856E: ;
    eax = MEM32(0x82842C);
    if (TEST_Z(eax, eax)) goto loc_004085C1; /* je: equal / zero */

loc_00408577: ;
    eax = MEM32(0x757D24);
    if (TEST_NZ(eax, eax)) goto loc_004085B7; /* jne: not equal / not zero */

loc_00408580: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0040858F: ;
    if (TEST_Z(eax, eax)) goto loc_004085B7; /* je: equal / zero */

loc_00408593: ;
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x7578F0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x757D24) = eax;

loc_004085B7: ;
    eax = MEM32(0x757D24);
    g_seh_ebp = ebp; sub_004087FB(); return; /* tail jmp 0x004087FB */

loc_004085C1: ;
    eax = MEM32(0x757D28);
    if (TEST_NZ(eax, eax)) goto loc_00408601; /* jne: not equal / not zero */

loc_004085CA: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_004085D9: ;
    if (TEST_Z(eax, eax)) goto loc_00408601; /* je: equal / zero */

loc_004085DD: ;
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x7579E0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x757D28) = eax;

loc_00408601: ;
    eax = MEM32(0x757D28);
    g_seh_ebp = ebp; sub_004087FB(); return; /* tail jmp 0x004087FB */

loc_0040860B: ;
    eax = MEM32(0x757D20);
    if (TEST_NZ(eax, eax)) goto loc_0040864B; /* jne: not equal / not zero */

loc_00408614: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00408623: ;
    if (TEST_Z(eax, eax)) goto loc_0040864B; /* je: equal / zero */

loc_00408627: ;
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x757AD0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x757D20) = eax;

loc_0040864B: ;
    eax = MEM32(0x757D20);
    g_seh_ebp = ebp; sub_004087FB(); return; /* tail jmp 0x004087FB */

loc_00408655: ;
    ecx = MEM32(0x7502EC);
    if (TEST_NZ(ecx, ecx)) goto loc_004086AD; /* jne: not equal / not zero */

loc_0040865F: ;
    if (TEST_NZ(eax, eax)) goto loc_004086AD; /* jne: not equal / not zero */

loc_00408663: ;
    eax = MEM32(0x757D2C);
    if (TEST_NZ(eax, eax)) goto loc_004086A3; /* jne: not equal / not zero */

loc_0040866C: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0040867B: ;
    if (TEST_Z(eax, eax)) goto loc_004086A3; /* je: equal / zero */

loc_0040867F: ;
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x757BC0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x757D2C) = eax;

loc_004086A3: ;
    eax = MEM32(0x757D2C);
    g_seh_ebp = ebp; sub_004088C8(); return; /* tail jmp 0x004088C8 */

loc_004086AD: ;
    eax = MEM32(0x757D30);
    if (TEST_NZ(eax, eax)) goto loc_004086ED; /* jne: not equal / not zero */

loc_004086B6: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_004086C5: ;
    if (TEST_Z(eax, eax)) goto loc_004086ED; /* je: equal / zero */

loc_004086C9: ;
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x757800;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x757D30) = eax;

loc_004086ED: ;
    eax = MEM32(0x757D30);
    g_seh_ebp = ebp; sub_004088C8(); return; /* tail jmp 0x004088C8 */

}

/**
 * sub_00408A60
 * Original: 0x00408A60 - 0x00408B28 (200 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408A60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00408A60: ;
    edx = MEM32(0x5499F0);
    eax = MEM32(0x7502EC);
    PUSH32(esp, esi);
    esi = 0x2000;
    edx = edx | esi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x5499F0) = edx;
    MEM32(0x549B68) = eax;
    if (TEST_Z(eax, eax)) goto loc_00408B26; /* je: equal / zero */

loc_00408A86: ;
    eax = ZX8(MEM8(0x7502E8));
    ecx = ZX8(MEM8(0x7502E9));
    edx = ZX8(MEM8(0x7502EA));
    eax = eax | 0xFFFFFF00u;
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00537010(); /* call 0x00537010 */

loc_00408AB0: ;
    eax = MEM32(0x7502F8);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00408B10; /* je: equal / zero */

loc_00408ABA: ;
    eax--;
    if ((eax == 0)) goto loc_00408AE8; /* je: equal / zero */

loc_00408ABD: ;
    eax--;
    if ((eax != 0)) goto loc_00408B26; /* jne: not equal / not zero */

loc_00408AC0: ;
    eax = MEM32(0x5499F0);
    xmm0 = MEMF(0x7502FC); /* movss */
    eax = eax | esi;
    MEMF(0x549B78) = xmm0; /* movss */
    MEM32(0x549B6C) = 2;
    MEM32(0x5499F0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00408AE8: ;
    eax = MEM32(0x5499F0);
    xmm0 = MEMF(0x7502FC); /* movss */
    eax = eax | esi;
    MEMF(0x549B78) = xmm0; /* movss */
    MEM32(0x549B6C) = 1;
    MEM32(0x5499F0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00408B10: ;
    eax = MEM32(0x5499F0);
    eax = eax | esi;
    MEM32(0x549B6C) = 0;
    MEM32(0x5499F0) = eax;

loc_00408B26: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00408B30
 * Original: 0x00408B30 - 0x00408B94 (100 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408B30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00408B30: ;
    eax = MEM32(0x7502F8);
    esp = esp - 0x14;
    if (CMP_NE(eax, 1)) { sub_00408B94(); return; } /* jne: not equal / not zero */

loc_00408B3D: ;
    xmm0 = MEMF(0x7502FC); /* movss */
    xmm0 = xmm0 * MEMF(0x648E1C); /* mulss */
    PUSH32(esp, 0x3F000000);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E5AB0(); /* call 0x003E5AB0 */

loc_00408B5D: ;
    xmm0 = xmm0 * MEMF(0x5A02A4); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    esp = esp + 4;
    ecx = 0x71;
    edx = esp + 0xC;
    MEMF(esp + 0x10) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_00408B90: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00408C20
 * Original: 0x00408C20 - 0x00408C84 (100 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408C20(void)
{
    float xmm0, xmm1, xmm2;

loc_00408C20: ;
    esp = esp - 8;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp;
    ecx = 0x6B;
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_00408C3E: ;
    xmm1 = MEMF(0x75030C); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - MEMF(0x750308); /* subss */
    xmm0 = xmm0 / xmm2; /* divss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    edx = esp;
    ecx = 0x70;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_00408C79: ;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_004080B0(); /* call 0x004080B0 */

loc_00408C80: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00408C90
 * Original: 0x00408C90 - 0x00408CB3 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00408C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    eax = MEM32(ebx + 0x40);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_00408CB3(); return; } /* je: equal / zero */

loc_00408CA2: ;
    PUSH32(esp, eax);
    eax = ebx + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00408CB1: ;
    g_seh_ebp = ebp; sub_00408CD4(); return; /* tail jmp 0x00408CD4 */

}

/**
 * sub_00408D70
 * Original: 0x00408D70 - 0x00409099 (809 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00408D70: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x20);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    esi = esi + ebp;
    PUSH32(esp, 0); sub_00407FF0(); /* call 0x00407FF0 */

loc_00408D8B: ;
    PUSH32(esp, 0); sub_00408180(); /* call 0x00408180 */

loc_00408D90: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00408340(); /* call 0x00408340 */

loc_00408D99: ;
    edx = MEM32(ebx + 0x24);
    ecx = MEM32(esi);
    ebx = MEM32(edx + ecx * 4);
    eax = MEM32(ebx + ebp + 0x5C);
    edi = MEM32(0x7502F8);
    ebx = ebx + ebp;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00408DB9; /* je: equal / zero */

loc_00408DB4: ;
    PUSH32(esp, 0); sub_00408C90(); /* call 0x00408C90 */

loc_00408DB9: ;
    eax = MEM32(0x750324);
    if (TEST_Z(eax, eax)) goto loc_00408DC7; /* je: equal / zero */

loc_00408DC2: ;
    PUSH32(esp, 0); sub_00408C20(); /* call 0x00408C20 */

loc_00408DC7: ;
    eax = MEM32(0x7502EC);
    if (TEST_Z(eax, eax)) goto loc_00408E2E; /* je: equal / zero */

loc_00408DD0: ;
    if (TEST_NZ(edi, edi)) goto loc_00408E13; /* jne: not equal / not zero */

loc_00408DD4: ;
    xmm1 = MEMF(0x7502F4); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - MEMF(0x7502F0); /* subss */
    xmm0 = xmm0 / xmm2; /* divss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    edx = esp + 0x10;
    ecx = 0x6B;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_00408E11: ;
    goto loc_00408E29;

loc_00408E13: ;
    if (CMP_EQ(edi, 1)) goto loc_00408E1D; /* je: equal / zero */

loc_00408E18: ;
    if (CMP_NE(edi, 2)) goto loc_00408E2E; /* jne: not equal / not zero */

loc_00408E1D: ;
    SET_LO8(ecx, MEM8(ebx + 0x6C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00408E2E; /* jne: not equal / not zero */

loc_00408E24: ;
    PUSH32(esp, 0); sub_00408B30(); /* call 0x00408B30 */

loc_00408E29: ;
    eax = MEM32(0x7502EC);

loc_00408E2E: ;
    ecx = MEM32(ebx + 0x5C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(0x750324);
    if (TEST_Z(ecx, ecx)) { sub_00409099(); return; } /* je: equal / zero */

loc_00408E3F: ;
    if (TEST_Z(ecx, ecx)) goto loc_00408F66; /* je: equal / zero */

loc_00408E47: ;
    SET_LO8(ecx, MEM8(ebx + 0x6C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00408EBB; /* je: equal / zero */

loc_00408E4E: ;
    if (CMP_EQ(edi, 1)) goto loc_00408E91; /* je: equal / zero */

loc_00408E53: ;
    if (CMP_EQ(edi, 2)) goto loc_00408E91; /* je: equal / zero */

loc_00408E58: ;
    eax = MEM32(0x757D00);
    if (TEST_NZ(eax, eax)) goto loc_00408E77; /* jne: not equal / not zero */

loc_00408E61: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757D00);
    PUSH32(esp, 0x756FE8);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00408E77: ;
    eax = MEM32(0x757D00);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00408E82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x757D64) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00408E91: ;
    eax = MEM32(0x757D04);
    if (TEST_NZ(eax, eax)) goto loc_00408EB0; /* jne: not equal / not zero */

loc_00408E9A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757D04);
    PUSH32(esp, 0x7574B0);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00408EB0: ;
    ecx = MEM32(0x757D04);
    g_seh_ebp = ebp; sub_004092DF(); return; /* tail jmp 0x004092DF */

loc_00408EBB: ;
    if (CMP_EQ(edi, 1)) goto loc_00408F3C; /* je: equal / zero */

loc_00408EC0: ;
    if (CMP_EQ(edi, 2)) goto loc_00408F3C; /* je: equal / zero */

loc_00408EC5: ;
    if (TEST_Z(eax, eax)) goto loc_00408F03; /* je: equal / zero */

loc_00408EC9: ;
    eax = MEM32(0x757D18);
    if (TEST_NZ(eax, eax)) goto loc_00408EE8; /* jne: not equal / not zero */

loc_00408ED2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757D18);
    PUSH32(esp, 0x757308);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00408EE8: ;
    edx = MEM32(0x757D18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00408EF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x757D64) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00408F03: ;
    eax = MEM32(0x757D10);
    if (TEST_NZ(eax, eax)) goto loc_00408F22; /* jne: not equal / not zero */

loc_00408F0C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757D10);
    PUSH32(esp, 0x7571A0);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00408F22: ;
    eax = MEM32(0x757D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00408F2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x757D64) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00408F3C: ;
    eax = MEM32(0x757D14);
    if (TEST_NZ(eax, eax)) goto loc_00408F5B; /* jne: not equal / not zero */

loc_00408F45: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757D14);
    PUSH32(esp, 0x757638);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00408F5B: ;
    ecx = MEM32(0x757D14);
    g_seh_ebp = ebp; sub_004092DF(); return; /* tail jmp 0x004092DF */

loc_00408F66: ;
    if (TEST_Z(eax, eax)) goto loc_00409060; /* je: equal / zero */

loc_00408F6E: ;
    SET_LO8(eax, MEM8(ebx + 0x6C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00408FF2; /* je: equal / zero */

loc_00408F75: ;
    if (CMP_EQ(edi, 1)) goto loc_00408FB9; /* je: equal / zero */

loc_00408F7A: ;
    if (CMP_EQ(edi, 2)) goto loc_00408FB9; /* je: equal / zero */

loc_00408F7F: ;
    eax = MEM32(0x757CFC);
    if (TEST_NZ(eax, eax)) goto loc_00408F9E; /* jne: not equal / not zero */

loc_00408F88: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757CFC);
    PUSH32(esp, 0x756A58);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00408F9E: ;
    edx = MEM32(0x757CFC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00408FAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x757D64) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00408FB9: ;
    eax = MEM32(0x757CF8);
    if (TEST_NZ(eax, eax)) goto loc_00408FD8; /* jne: not equal / not zero */

loc_00408FC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757CF8);
    PUSH32(esp, 0x756D08);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00408FD8: ;
    eax = MEM32(0x757CF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00408FE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x757D64) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00408FF2: ;
    if (CMP_EQ(edi, 1)) goto loc_00409026; /* je: equal / zero */

loc_00408FF7: ;
    if (CMP_EQ(edi, 2)) goto loc_00409026; /* je: equal / zero */

loc_00408FFC: ;
    eax = MEM32(0x757D0C);
    if (TEST_NZ(eax, eax)) goto loc_0040901B; /* jne: not equal / not zero */

loc_00409005: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757D0C);
    PUSH32(esp, 0x756BB0);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_0040901B: ;
    ecx = MEM32(0x757D0C);
    g_seh_ebp = ebp; sub_004092DF(); return; /* tail jmp 0x004092DF */

loc_00409026: ;
    eax = MEM32(0x757D08);
    if (TEST_NZ(eax, eax)) goto loc_00409045; /* jne: not equal / not zero */

loc_0040902F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757D08);
    PUSH32(esp, 0x756E70);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00409045: ;
    edx = MEM32(0x757D08);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00409051: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x757D64) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00409060: ;
    eax = MEM32(0x757D1C);
    if (TEST_NZ(eax, eax)) goto loc_0040907F; /* jne: not equal / not zero */

loc_00409069: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x757D1C);
    PUSH32(esp, 0x756910);
    PUSH32(esp, 0x7557CC);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_0040907F: ;
    eax = MEM32(0x757D1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0040908A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x757D64) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00409300
 * Original: 0x00409300 - 0x00409454 (340 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409300: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x20);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + edx);
    eax = MEM32(eax + 0x24);
    edx = MEM32(eax + edx * 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + ecx + 0x70);
    PUSH32(esp, esi);
    esi = edx + ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C);
    if (TEST_Z(edi, edi)) goto loc_00409450; /* je: equal / zero */

loc_00409329: ;
    edx = MEM32(esi + 0x68);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x6E));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00408210(); /* call 0x00408210 */

loc_0040933C: ;
    ecx = MEM32(esi + 0x5C);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x74));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x6E));
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esi + 0x6C));
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(esi + 0x68);
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00408410(); /* call 0x00408410 */

loc_00409364: ;
    edi = edi + edi * 8;
    eax = 0xA0643F;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edi;
    eax = eax - edx;
    eax = eax >> 1;
    eax = eax + edx;
    eax = eax >> 0xA;
    esp = esp + 0x1C;
    esi = eax + edi + 5;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_00409385: ;
    ecx = eax;
    MEM32(ecx) = 0x417FC;
    MEM32(ecx + 4) = 5;
    ecx = ecx + 8;
    ebp = 0; /* xor self */
    if (CMP_BE(edi & edi, 0)) goto loc_00409437; /* jbe: below or equal (unsigned <=) */

loc_004093A1: ;
    (void)0; /* cmp edi, 0x7FB - flags set for next jcc */
    eax = 0x7FB;
    if (CMP_A(edi, 0x7FB)) goto loc_004093B0; /* ja: above (unsigned >) */

loc_004093AE: ;
    eax = edi;

loc_004093B0: ;
    edx = eax;
    edx = edx << 0x12;
    edx = edx + 0x40001818;
    MEM32(ecx) = edx;
    edi = edi - eax;
    ecx = ecx + 4;
    if (CMP_BE(eax & eax, 0)) goto loc_0040942F; /* jbe: below or equal (unsigned <=) */

loc_004093C6: ;
    edx = eax + -1;
    eax = 0x38E38E39;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = ebp + ebp * 8;
    edx = edx >> 1;
    esi = esi << 4;
    edx++;
    ebp = ebp + edx;
    MEM32(esp + 0x14) = ebp;

loc_004093E0: ;
    eax = MEM32(ebx + 0x18);
    ebp = MEM32(eax + esi + 0x40);
    eax = eax + esi;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x44);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 0x48);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax + 0x4C);
    ecx = ecx + 0xC;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x50);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 0x54);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax + 0x58);
    ecx = ecx + 0xC;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x5C);
    MEM32(ecx + 4) = ebp;
    eax = MEM32(eax + 0x60);
    MEM32(ecx + 8) = eax;
    esi = esi + 0x90;
    ecx = ecx + 0xC;
    edx--;
    if ((edx != 0)) goto loc_004093E0; /* jne: not equal / not zero */

loc_0040942B: ;
    ebp = MEM32(esp + 0x14);

loc_0040942F: ;
    if (CMP_A(edi & edi, 0)) goto loc_004093A1; /* ja: above (unsigned >) */

loc_00409437: ;
    edx = MEM32(0x5499E8);
    MEM32(ecx) = 0x417FC;
    MEM32(ecx + 4) = 0;
    ecx = ecx + 8;
    MEM32(edx) = ecx;
    POP32(esp, ebp);

loc_00409450: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409460
 * Original: 0x00409460 - 0x00409485 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409460(void)
{

loc_00409460: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040946F: ;
    eax = MEM32(0x757D5C);
    PUSH32(esp, eax);
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537650(); /* call 0x00537650 */

loc_00409484: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00409490
 * Original: 0x00409490 - 0x0040959C (268 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409490(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00409490: ;
    xmm0 = MEMF(ecx); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_004094A9: ;
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_004094BE: ;
    xmm2 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_004094D0: ;
    xmm2 = MEMF(ecx + 0xC); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_004094E2: ;
    xmm2 = MEMF(ecx + 0x10); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_004094F4: ;
    xmm2 = MEMF(ecx + 0x14); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_00409506: ;
    xmm2 = MEMF(ecx + 0x18); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_00409518: ;
    xmm2 = MEMF(ecx + 0x1C); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_00409526: ;
    xmm2 = MEMF(ecx + 0x20); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_00409534: ;
    xmm2 = MEMF(ecx + 0x24); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_00409542: ;
    xmm2 = MEMF(ecx + 0x28); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_00409550: ;
    xmm2 = MEMF(ecx + 0x2C); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_0040955E: ;
    xmm2 = MEMF(ecx + 0x30); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_0040956C: ;
    xmm2 = MEMF(ecx + 0x34); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_0040957A: ;
    xmm2 = MEMF(ecx + 0x38); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_00409588: ;
    xmm0 = MEMF(ecx + 0x3C); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0040959C(); return; } /* jp: parity */

loc_00409596: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004095A0
 * Original: 0x004095A0 - 0x004095B1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004095A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004095A0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x84BDFC));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_004095B1(); return; } /* je: equal / zero */

loc_004095AA: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409630
 * Original: 0x00409630 - 0x0040969E (110 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409630(void)
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

loc_00409630: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648DD0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00409679; /* jbe: below or equal (unsigned <=) */

loc_00409651: ;
    xmm1 = MEMF(esp); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    eax = (int32_t)xmm1; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    if ((xmm2 > xmm1)) goto loc_0040967E; /* ja: above (unsigned >) */

loc_00409666: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040967E; /* jnp: not parity */

loc_0040966F: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    goto loc_0040967E;

loc_00409679: ;
    xmm0 = MEMF(esp); /* movss */

loc_0040967E: ;
    MEMF(esp) = xmm0; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040968B: ;
    MEM32(edi) = eax;
    ecx = MEM32(esi);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_0040969C; /* jne: not equal / not zero */

loc_00409694: ;
    ecx = MEM32(ecx + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(edi) = ecx;

loc_0040969C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004096A0
 * Original: 0x004096A0 - 0x00409723 (131 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004096A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004096A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00409720; /* jbe: below or equal (unsigned <=) */

loc_004096AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_004096B0: ;
    eax = MEM32(ebx + 4);
    edi = MEM32(eax + ebp * 4);
    SET_LO8(eax, MEM8(edi + 0x20));
    if (CMP_EQ(LO8(eax), 5)) goto loc_00409702; /* je: equal / zero */

loc_004096BD: ;
    if (CMP_EQ(LO8(eax), 4)) goto loc_00409702; /* je: equal / zero */

loc_004096C1: ;
    if (CMP_EQ(LO8(eax), 0xA)) goto loc_00409702; /* je: equal / zero */

loc_004096C5: ;
    if (CMP_NE(LO8(eax), 7)) goto loc_00409717; /* jne: not equal / not zero */

loc_004096C9: ;
    eax = MEM32(edi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_004096DE; /* je: equal / zero */

loc_004096D0: ;
    ecx = MEM32(ebx + 0xC);
    esi = MEM32(edi + 0x44);
    MEM32(edi + 0x40) = ecx;
    PUSH32(esp, 0); sub_0040B280(); /* call 0x0040B280 */

loc_004096DE: ;
    eax = MEM32(edi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_004096F3; /* je: equal / zero */

loc_004096E5: ;
    edx = MEM32(ebx + 0xC);
    esi = MEM32(edi + 0x54);
    MEM32(edi + 0x50) = edx;
    PUSH32(esp, 0); sub_0040B280(); /* call 0x0040B280 */

loc_004096F3: ;
    eax = MEM32(edi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_00409717; /* je: equal / zero */

loc_004096FA: ;
    eax = MEM32(ebx + 0xC);
    MEM32(edi + 0x30) = eax;
    goto loc_0040970F;

loc_00409702: ;
    eax = MEM32(edi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_00409717; /* je: equal / zero */

loc_00409709: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(edi + 0x30) = ecx;

loc_0040970F: ;
    esi = MEM32(edi + 0x34);
    PUSH32(esp, 0); sub_0040B280(); /* call 0x0040B280 */

loc_00409717: ;
    eax = MEM32(ebx);
    ebp++;
    if (CMP_B(ebp, eax)) goto loc_004096B0; /* jb: below (unsigned <) */

loc_0040971E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00409720: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409730
 * Original: 0x00409730 - 0x00409831 (257 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409730: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_BE(edx, ebx)) goto loc_0040982E; /* jbe: below or equal (unsigned <=) */

loc_00409748: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ebp | 0xFFFFFFFFu;
    edi = edi;

loc_00409750: ;
    ecx = MEM32(ecx + 4);
    edi = MEM32(ecx + eax * 4);
    SET_LO8(eax, MEM8(edi + 0x20));
    if (CMP_EQ(LO8(eax), 5)) { sub_00409831(); return; } /* je: equal / zero */

loc_00409761: ;
    if (CMP_EQ(LO8(eax), 4)) { sub_00409831(); return; } /* je: equal / zero */

loc_00409769: ;
    if (CMP_EQ(LO8(eax), 0xA)) { sub_00409831(); return; } /* je: equal / zero */

loc_00409771: ;
    if (CMP_NE(LO8(eax), 7)) goto loc_00409814; /* jne: not equal / not zero */

loc_00409779: ;
    esi = MEM32(edi + 0x38);
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_0040979A; /* je: equal / zero */

loc_00409783: ;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00409797; /* jne: not equal / not zero */

loc_00409787: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_00409797; /* je: equal / zero */

loc_0040978C: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00409797: ;
    MEM32(esi + 0xC) = ebx;

loc_0040979A: ;
    esi = MEM32(edi + 0x48);
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_004097BB; /* je: equal / zero */

loc_004097A4: ;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_004097B8; /* jne: not equal / not zero */

loc_004097A8: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_004097B8; /* je: equal / zero */

loc_004097AD: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_004097B8: ;
    MEM32(esi + 0xC) = ebx;

loc_004097BB: ;
    esi = MEM32(edi + 0x28);
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_004097DC; /* je: equal / zero */

loc_004097C5: ;
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_004097D9; /* jne: not equal / not zero */

loc_004097C9: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_004097D9; /* je: equal / zero */

loc_004097CE: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_004097D9: ;
    MEM32(esi + 0xC) = ebx;

loc_004097DC: ;
    ebx = MEM32(edi + 0x44);
    esi = MEM32(ebx + 0x5C);
    if (CMP_EQ(esi, ebp)) goto loc_004097EE; /* je: equal / zero */

loc_004097E6: ;
    PUSH32(esp, 0); sub_003EC4E0(); /* call 0x003EC4E0 */

loc_004097EB: ;
    MEM32(ebx + 0x5C) = ebp;

loc_004097EE: ;
    ebx = MEM32(edi + 0x54);
    esi = MEM32(ebx + 0x5C);
    if (CMP_EQ(esi, ebp)) goto loc_00409800; /* je: equal / zero */

loc_004097F8: ;
    PUSH32(esp, 0); sub_003EC4E0(); /* call 0x003EC4E0 */

loc_004097FD: ;
    MEM32(ebx + 0x5C) = ebp;

loc_00409800: ;
    edi = MEM32(edi + 0x34);
    esi = MEM32(edi + 0x5C);
    if (CMP_EQ(esi, ebp)) goto loc_00409812; /* je: equal / zero */

loc_0040980A: ;
    PUSH32(esp, 0); sub_003EC4E0(); /* call 0x003EC4E0 */

loc_0040980F: ;
    MEM32(edi + 0x5C) = ebp;

loc_00409812: ;
    ebx = 0; /* xor self */

loc_00409814: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(eax, edx)) goto loc_00409750; /* jb: below (unsigned <) */

loc_0040982B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0040982E: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409870
 * Original: 0x00409870 - 0x004098C8 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00409870: ;
    ecx = MEM32(esi + 0x24);
    edx = ZX8(MEM8(ecx));
    edx = edx - 0;
    eax = 0x60;
    if ((edx == 0)) goto loc_00409893; /* je: equal / zero */

loc_00409880: ;
    edx--;
    if ((edx != 0)) goto loc_004098AC; /* jne: not equal / not zero */

loc_00409883: ;
    PUSH32(esp, 0); sub_004095A0(); /* call 0x004095A0 */

loc_00409888: ;
    eax = eax + eax * 4;
    eax = eax << 5;
    eax = eax + 0x78;
    goto loc_004098AC;

loc_00409893: ;
    ecx = MEM32(ecx + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx * 4 + 0xD0;
    if (CMP_BE(ecx & ecx, 0)) goto loc_004098A9; /* jbe: below or equal (unsigned <=) */

loc_004098A1: ;
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    eax = eax + ecx;

loc_004098A9: ;
    eax = eax + 0x60;

loc_004098AC: ;
    ecx = eax + 0x10;
    eax = ecx;
    eax = eax & 0xF;
    if ((eax == 0)) goto loc_004098BF; /* je: equal / zero */

loc_004098B6: ;
    edx = 0x10;
    edx = edx - eax;
    ecx = ecx + edx;

loc_004098BF: ;
    eax = MEM32(esi + 0x2C);
    eax = MEM32(eax + 0x4C);
    eax = eax + ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004098D0
 * Original: 0x004098D0 - 0x0040996E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004098D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004098D0: ;
    ecx = MEM32(edx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx * 4 + 0x10;
    if (CMP_BE(ecx & ecx, 0)) goto loc_0040996D; /* jbe: below or equal (unsigned <=) */

loc_004098E1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    /* nop */

loc_004098F0: ;
    ecx = eax;
    ecx = ecx & 0xF;
    edi = eax;
    if ((ecx == 0)) goto loc_00409900; /* je: equal / zero */

loc_004098F9: ;
    eax = eax - ecx;
    eax = eax + 0x10;
    edi = eax;

loc_00409900: ;
    esi = MEM32(ebx);
    ecx = ZX8(MEM8(esi + 0x20));
    ecx = ecx + 0xFFFFFFFDu;
    (void)0; /* cmp ecx, 7 - flags set for next jcc */
    eax = edi;
    if (CMP_A(ecx, 7)) goto loc_00409963; /* ja: above (unsigned >) */

loc_00409910: ;
    ecx = ZX8(MEM8(ecx + 0x40997C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x409970); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0040991Eu) goto loc_0040991E;
    if (_jt == 0x0040995Cu) goto loc_0040995C;
    if (_jt == 0x00409963u) goto loc_00409963;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0040991E: ;
    ecx = MEM32(esi + 0x24);
    edx = ZX8(MEM8(ecx));
    edx = edx - 0;
    eax = 0x60;
    if ((edx == 0)) goto loc_00409941; /* je: equal / zero */

loc_0040992E: ;
    edx--;
    if ((edx != 0)) goto loc_00409961; /* jne: not equal / not zero */

loc_00409931: ;
    PUSH32(esp, 0); sub_004095A0(); /* call 0x004095A0 */

loc_00409936: ;
    eax = eax + eax * 4;
    eax = eax << 5;
    eax = eax + 0x78;
    goto loc_00409961;

loc_00409941: ;
    ecx = MEM32(ecx + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx * 4 + 0xD0;
    if (CMP_BE(ecx & ecx, 0)) goto loc_00409957; /* jbe: below or equal (unsigned <=) */

loc_0040994F: ;
    edx = ecx + ecx * 2;
    edx = edx << 4;
    eax = eax + edx;

loc_00409957: ;
    eax = eax + 0x60;
    goto loc_00409961;

loc_0040995C: ;
    PUSH32(esp, 0); sub_00409870(); /* call 0x00409870 */

loc_00409961: ;
    eax = eax + edi;

loc_00409963: ;
    ebx = ebx + 4;
    ebp--;
    if ((ebp != 0)) goto loc_004098F0; /* jne: not equal / not zero */

loc_00409969: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0040996D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00409990
 * Original: 0x00409990 - 0x00409A17 (135 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409990(void)
{
    float xmm0;

loc_00409990: ;
    PUSH32(esp, ebx);
    MEM32(ecx) = MEM32(ecx) + 0x98;
    ecx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    ebx = 0; /* xor self */
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    edx = MEM32(edx + 0x34);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = 0x30;
    edx = edx + edx * 2;
    edx = edx << 4;
    edx = edx + 0x1F;
    MEM32(ecx + 0x14) = edx;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x10);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = edx + 4;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0xC));
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    edx = edx << 1;
    esi = esi + edx;
    MEM32(ecx + 0x14) = esi;
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = LO8(ebx);
    edx = MEM32(eax);
    MEM32(edx + 0x18) = ebx;
    ecx = MEM32(eax);
    MEMF(ecx + 0x20) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(edx + 0x24) = xmm0; /* movss */
    ecx = MEM32(eax);
    MEM32(ecx + 0x28) = ebx;
    edx = MEM32(eax);
    MEM32(edx + 0x2C) = ebx;
    ecx = MEM32(eax);
    MEM32(ecx + 0x3C) = 0xFFFFFFFEu;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edx + 0x40) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409A20
 * Original: 0x00409A20 - 0x00409AC8 (168 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409A20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ebx + 0x18;
    MEM32(edi) = ebx;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(ebp));
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esi);
    eax = eax + 4;
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0;
    edx = MEM32(esi);
    ecx = ebp;
    MEM8(edx + 8) = 1;
    PUSH32(esp, 0); sub_004095A0(); /* call 0x004095A0 */

loc_00409A4D: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi);
    eax = MEM32(edi);
    MEM32(edx + 0x10) = eax;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edi);
    edx = edx << 2;
    eax = eax + edx;
    MEM32(edi) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x14) = eax;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xC);
    edx = MEM32(edi);
    eax = eax << 2;
    edx = edx + eax;
    MEM32(edi) = edx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xC);
    ebx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_00409ABA; /* jbe: below or equal (unsigned <=) */

loc_00409A85: ;
    edx = MEM32(eax + 0x10);
    ecx = ebx * 4;
    MEM32(ecx + edx) = 0;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x14);
    eax = MEM32(edi);
    MEM32(ecx + edx) = eax;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x14);
    eax = eax + ecx;
    ecx = edi;
    edx = ebp;
    PUSH32(esp, 0); sub_00409990(); /* call 0x00409990 */

loc_00409AB0: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xC);
    ebx++;
    if (CMP_B(ebx, ecx)) goto loc_00409A85; /* jb: below (unsigned <) */

loc_00409ABA: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    POP32(esp, ebp);
    MEM32(ecx) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409AD0
 * Original: 0x00409AD0 - 0x00409AFE (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = MEM32(eax) + 0x30;
    eax = MEM32(ebp);
    esi = ecx;
    MEM32(eax) = esi;
    ebx = MEM32(ebp);
    ecx = 0; /* xor self */
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = ecx;
    eax = MEM32(esi + 0xC);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edi = ebx + 0xC;
    if (CMP_EQ(eax, ecx)) { sub_00409AFE(); return; } /* je: equal / zero */

loc_00409AF7: ;
    edx = MEM32(eax + 0x1C);
    MEM32(edi) = edx;
    g_seh_ebp = ebp; sub_00409B05(); return; /* tail jmp 0x00409B05 */

}

/**
 * sub_00409B50
 * Original: 0x00409B50 - 0x00409C28 (216 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409B50(void)
{
    float xmm0, xmm1;

loc_00409B50: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    MEMF(eax) = xmm1; /* movss */
    ecx = 0; /* xor self */
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x74) = xmm0; /* movss */
    MEMF(eax + 0x70) = xmm0; /* movss */
    MEMF(eax + 0x6C) = xmm0; /* movss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x50) = xmm0; /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm1; /* movss */
    MEMF(eax + 0x68) = xmm1; /* movss */
    MEMF(eax + 0x54) = xmm1; /* movss */
    MEMF(eax + 0x40) = xmm1; /* movss */
    MEM8(eax + 0x80) = LO8(ecx);
    MEM8(eax + 0x81) = LO8(ecx);
    MEM16(eax + 0x82) = LO16(ecx);
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x9C) = ecx;
    MEM32(eax + 0xA0) = ecx;
    MEM8(eax + 0xA4) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409C30
 * Original: 0x00409C30 - 0x00409CCD (157 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409C30: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    edx = edx + 0xD0;
    MEM32(edi) = edx;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(ebp));
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esi);
    eax = eax + 0x10;
    PUSH32(esp, 0); sub_00409B50(); /* call 0x00409B50 */

loc_00409C51: ;
    edx = MEM32(esi);
    eax = MEM32(ebp + 0x18);
    MEM32(edx + 0xC0) = eax;
    ecx = MEM32(esi);
    edx = MEM32(edi);
    MEM32(ecx + 0xC4) = edx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xC0);
    edx = MEM32(edi);
    ecx = ecx << 2;
    edx = edx + ecx;
    MEM32(edi) = edx;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xC0);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00409CCA; /* jbe: below or equal (unsigned <=) */

loc_00409C85: ;
    goto loc_00409C90;

loc_00409C87: ;
    ebp = MEM32(esp + 0xC);
    goto loc_00409C90;

    /* nop */

loc_00409C90: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(edx + 0xC4);
    ebp = MEM32(edi);
    eax = ebx * 4;
    ecx = MEM32(eax + ecx);
    MEM32(eax + edx) = ebp;
    edx = MEM32(esi);
    edx = MEM32(edx + 0xC4);
    edx = edx + eax;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_00409AD0(); /* call 0x00409AD0 */

loc_00409CBA: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xC0);
    esp = esp + 4;
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_00409C87; /* jb: below (unsigned <) */

loc_00409CCA: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409CD0
 * Original: 0x00409CD0 - 0x00409D97 (199 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409CD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00409CD0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    MEM32(edi) = MEM32(edi) + 0x60;
    eax = MEM32(ecx);
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ecx);
    MEM8(eax + 0x41) = 0;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(edx + 0x20));
    MEM8(eax + 0x40) = LO8(ebx);
    eax = MEM32(ecx);
    MEM32(eax + 0x44) = edx;
    eax = MEM32(ecx);
    MEM32(eax + 0x48) = 1;
    eax = MEM32(ecx);
    MEMF(eax + 0x4C) = xmm0; /* movss */
    eax = MEM32(ecx);
    MEMF(eax + 0x50) = xmm0; /* movss */
    eax = MEM32(ecx);
    edx = MEM32(edx + 0x24);
    esi = MEM32(edi);
    MEM32(eax + 0x54) = esi;
    eax = ZX8(MEM8(edx));
    eax = eax - 0;
    if ((eax == 0)) goto loc_00409D85; /* je: equal / zero */

loc_00409D70: ;
    eax--;
    if ((eax != 0)) goto loc_00409D93; /* jne: not equal / not zero */

loc_00409D73: ;
    esi = MEM32(ecx);
    esi = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00409A20(); /* call 0x00409A20 */

loc_00409D7E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00409D85: ;
    esi = MEM32(ecx);
    esi = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00409C30(); /* call 0x00409C30 */

loc_00409D90: ;
    esp = esp + 4;

loc_00409D93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00409DA0
 * Original: 0x00409DA0 - 0x00409DFC (92 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00409DA0: ;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esi) = MEM32(esi) + 0x10;
    ecx = edi;
    eax = esi;
    edx = ebx;
    PUSH32(esp, 0); sub_00409CD0(); /* call 0x00409CD0 */

loc_00409DB1: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0xF;
    if ((ecx == 0)) goto loc_00409DC3; /* je: equal / zero */

loc_00409DBA: ;
    edx = 0x10;
    edx = edx - ecx;
    eax = eax + edx;

loc_00409DC3: ;
    MEM32(esi) = eax;
    ecx = MEM32(edi);
    MEM32(ecx + 0x60) = eax;
    edx = MEM32(ebx + 0x2C);
    eax = MEM32(edx + 0x4C);
    MEM32(esi) = MEM32(esi) + eax;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 0x60);
    edx = MEM32(ebx + 0x2C);
    PUSH32(esp, 0); sub_003F40B0(); /* call 0x003F40B0 */

loc_00409DDF: ;
    edi = MEM32(edi);
    edx = MEM32(edi + 0x60);
    eax = MEM32(ebx + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    edi = edi + 0x64;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003F8830(); /* call 0x003F8830 */

loc_00409DF7: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00409E00
 * Original: 0x00409E00 - 0x0040A06F (623 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409E00(void)
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

loc_00409E00: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    MEMF(ebp + 8) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x10);
    MEM32(ebp + 0xC) = ecx;
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    eax = ebp + 0x10;
    ecx = edx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + 4) = eax;
    MEM32(ebp) = edx;
    eax = eax + ecx * 4;
    if (CMP_BE(ecx & ecx, 0)) goto loc_00409EA0; /* jbe: below or equal (unsigned <=) */

loc_00409E33: ;
    ecx = eax;
    ecx = ecx & 0xF;
    if ((ecx == 0)) goto loc_00409E3F; /* je: equal / zero */

loc_00409E3A: ;
    eax = eax - ecx;
    eax = eax + 0x10;

loc_00409E3F: ;
    ecx = MEM32(ebx + 4);
    esi = edi * 4;
    edx = MEM32(esi + ecx);
    ecx = MEM32(ebp + 4);
    MEM32(esi + ecx) = eax;
    ecx = ZX8(MEM8(edx + 0x20));
    ecx = ecx + 0xFFFFFFFDu;
    (void)0; /* cmp ecx, 7 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_A(ecx, 7)) goto loc_00409E98; /* ja: above (unsigned >) */

loc_00409E62: ;
    ecx = ZX8(MEM8(ecx + 0x40A07C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x40A070); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00409E70u) goto loc_00409E70;
    if (_jt == 0x00409E80u) goto loc_00409E80;
    if (_jt == 0x00409E98u) goto loc_00409E98;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00409E70: ;
    ecx = MEM32(ebp + 4);
    ecx = ecx + esi;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00409CD0(); /* call 0x00409CD0 */

loc_00409E7E: ;
    goto loc_00409E94;

loc_00409E80: ;
    eax = MEM32(ebp + 4);
    eax = eax + esi;
    esi = esp + 0x10;
    ebx = edx;
    PUSH32(esp, 0); sub_00409DA0(); /* call 0x00409DA0 */

loc_00409E90: ;
    ebx = MEM32(esp + 0x24);

loc_00409E94: ;
    eax = MEM32(esp + 0x10);

loc_00409E98: ;
    ecx = MEM32(ebp);
    edi++;
    if (CMP_B(edi, ecx)) goto loc_00409E33; /* jb: below (unsigned <) */

loc_00409EA0: ;
    eax = MEM32(ebp);
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_BE(eax & eax, 0)) goto loc_0040A067; /* jbe: below or equal (unsigned <=) */

loc_00409EB1: ;
    eax = MEM32(ebp + 4);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(eax + 0x44);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp MEM8(ecx), 0 - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0040A057; /* jne: not equal / not zero */

loc_00409ECA: ;
    ebx = MEM32(eax + 0x54);
    eax = MEM32(ebx + 0xC0);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040A057; /* jbe: below or equal (unsigned <=) */

loc_00409EDD: ;
    /* nop */

loc_00409EE0: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(edx + edi * 4);
    edx = MEM32(ebx + 0xC4);
    edx = MEM32(edx + edi * 4);
    MEM32(edx + 0x2C) = 0;
    SET_LO8(eax, MEM8(eax + 0x32));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0040A044; /* je: equal / zero */

loc_00409F01: ;
    ecx = MEM32(ebp + 4);
    eax = SX8(LO8(eax));
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(edx + 0x54);
    ecx = MEM32(eax + 0xC4);
    edx = MEM32(ebx + 0xC4);
    edx = MEM32(edx + edi * 4);
    ecx = MEM32(ecx);
    MEM32(edx + 0x2C) = ecx;
    edx = MEM32(ebx + 0xC4);
    ecx = MEM32(edx + edi * 4);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00409F73; /* je: equal / zero */

loc_00409F33: ;
    edx = MEM32(ebx + 0xC4);
    esi = MEM32(eax + 0xC4);
    ecx = MEM32(ecx + 0x1C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(edx + edi * 4);
    esi = MEM32(esi);
    edx = MEM32(edx);
    esi = MEM32(esi);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00409F5D; /* jge: greater or equal (signed >=) */

loc_00409F57: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00409F5D: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 0x4C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00409F97;

loc_00409F73: ;
    edx = MEM32(eax + 0xC4);
    ecx = MEM32(edx);
    edx = MEM32(ebx + 0xC4);
    edx = MEM32(edx + edi * 4);
    edx = MEM32(edx);
    ecx = MEM32(ecx);
    xmm0 = MEMF(edx + 8); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x28); /* mulss */
    MEMF(ecx + 8) = xmm0; /* movss */

loc_00409F97: ;
    eax = MEM32(eax + 0xC4);
    esi = MEM32(eax);
    ebp = MEM32(esi);
    ecx = 0; /* xor self */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00409FB5; /* je: equal / zero */

loc_00409FB0: ;
    ecx = MEM32(eax + 0x1C);
    goto loc_0040A026;

loc_00409FB5: ;
    fp_push(MEMF(ebp + 0x4C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648DD0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00409FFF; /* jbe: below or equal (unsigned <=) */

loc_00409FD6: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    edx = (int32_t)xmm1; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    if ((xmm2 > xmm1)) goto loc_0040A005; /* ja: above (unsigned >) */

loc_00409FEC: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040A005; /* jnp: not parity */

loc_00409FF5: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    goto loc_0040A005;

loc_00409FFF: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_0040A005: ;
    MEMF(esp + 0x24) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040A014: ;
    MEM32(esi + 0xC) = eax;
    ebp = MEM32(ebp);
    if (CMP_NE(MEM32(ebp), 0)) goto loc_0040A029; /* jne: not equal / not zero */

loc_0040A020: ;
    ecx = MEM32(ebp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);

loc_0040A026: ;
    MEM32(esi + 0xC) = ecx;

loc_0040A029: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x20);
    edx = edx << 6;
    edx = edx + 0x1F;
    MEM32(esi + 0x10) = 0x40;
    MEM32(esi + 0x14) = edx;

loc_0040A044: ;
    eax = MEM32(ebx + 0xC0);
    edi++;
    if (CMP_B(edi, eax)) goto loc_00409EE0; /* jb: below (unsigned <) */

loc_0040A053: ;
    edx = MEM32(esp + 0x14);

loc_0040A057: ;
    eax = MEM32(ebp);
    edx++;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_B(edx, eax)) goto loc_00409EB1; /* jb: below (unsigned <) */

loc_0040A067: ;
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
 * sub_0040A090
 * Original: 0x0040A090 - 0x0040A0F0 (96 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040A090: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040A0ED; /* jbe: below or equal (unsigned <=) */

loc_0040A09F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0040A0A1: ;
    eax = MEM32(ebp + 4);
    esi = MEM32(eax + ebx * 4);
    eax = ZX8(MEM8(esi + 0x40));
    eax = eax + 0xFFFFFFFCu;
    if (CMP_A(eax, 6)) goto loc_0040A0E3; /* ja: above (unsigned >) */

loc_0040A0B3: ;
    ecx = ZX8(MEM8(eax + 0x40A0F8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x40A0F0); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0040A0C1u) goto loc_0040A0C1;
    if (_jt == 0x0040A0E3u) goto loc_0040A0E3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0040A0C1: ;
    edi = MEM32(esi + 0x64);
    if (TEST_Z(edi, edi)) goto loc_0040A0E3; /* je: equal / zero */

loc_0040A0C8: ;
    edx = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B860), _icall_esp); /* indirect call */
    }

loc_0040A0D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B860), _icall_esp); /* indirect call */
    }

loc_0040A0D9: ;
    esp = esp + 8;
    MEM32(esi + 0x64) = 0;

loc_0040A0E3: ;
    eax = MEM32(ebp);
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_0040A0A1; /* jb: below (unsigned <) */

loc_0040A0EB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0040A0ED: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A100
 * Original: 0x0040A100 - 0x0040A14D (77 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A100(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040A100: ;
    ecx = MEM32(ecx + 0x54);
    edx = ZX8(MEM8(ecx));
    eax = 0; /* xor self */
    edx = edx - eax;
    PUSH32(esp, esi);
    if ((edx == 0)) goto loc_0040A12D; /* je: equal / zero */

loc_0040A10D: ;
    edx--;
    if ((edx != 0)) goto loc_0040A14B; /* jne: not equal / not zero */

loc_0040A110: ;
    edx = MEM32(ecx + 0xC);
    if (CMP_BE(edx & edx, 0)) goto loc_0040A14B; /* jbe: below or equal (unsigned <=) */

loc_0040A117: ;
    ecx = MEM32(ecx + 0x14);
    /* nop */

loc_0040A120: ;
    esi = MEM32(ecx);
    eax = eax + MEM32(esi + 0x14);
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_0040A120; /* jne: not equal / not zero */

loc_0040A12B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0040A12D: ;
    edx = MEM32(ecx + 0xC0);
    eax = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_0040A14B; /* jbe: below or equal (unsigned <=) */

loc_0040A139: ;
    ecx = MEM32(ecx + 0xC4);
    /* nop */

loc_0040A140: ;
    esi = MEM32(ecx);
    eax = eax + MEM32(esi + 0x14);
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_0040A140; /* jne: not equal / not zero */

loc_0040A14B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A150
 * Original: 0x0040A150 - 0x0040A1D1 (129 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A150(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040A150: ;
    edx = MEM32(eax);
    edx = edx + 0x1F;
    edx = edx & 0xFFFFFFE0u;
    MEM32(ecx + 8) = edx;
    edx = MEM32(ecx + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0xC));
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = edx + 0x1F;
    esi = esi + edx;
    MEM32(eax) = esi;
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    esi = 0; /* xor self */
    if (CMP_BE(edi & edi, 0)) goto loc_0040A18F; /* jbe: below or equal (unsigned <=) */

loc_0040A179: ;
    /* nop */

loc_0040A180: ;
    MEM8(edx + 0xD) = 0;
    edx = edx + MEM32(ecx + 0x10);
    edi = MEM32(ecx + 0xC);
    esi++;
    if (CMP_B(esi, edi)) goto loc_0040A180; /* jb: below (unsigned <) */

loc_0040A18F: ;
    MEM32(ecx + 4) = 0;
    edx = MEM32(ecx + 0xC);
    esi = MEM32(eax);
    MEM32(ecx + 0x28) = esi;
    edi = MEM32(eax);
    esi = edx * 4;
    edi = edi + esi;
    MEM32(eax) = edi;
    MEM32(ecx + 0x2C) = edi;
    edi = MEM32(eax);
    edi = edi + esi;
    MEM32(eax) = edi;
    esi = edi;
    MEM32(ecx + 0x34) = esi;
    esi = MEM32(eax);
    edx = edx + edx * 2;
    edx = edx << 4;
    esi = esi + edx;
    MEM32(eax) = esi;
    MEM32(ecx + 0x38) = esi;
    ecx = MEM32(eax);
    ecx = ecx + edx;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A1E0
 * Original: 0x0040A1E0 - 0x0040A24E (110 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A1E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040A1E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0xC0);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_0040A24A; /* jbe: below or equal (unsigned <=) */

loc_0040A1F5: ;
    goto loc_0040A200;

    /* nop */
    edi = edi;

loc_0040A200: ;
    eax = MEM32(ebp + 0xC4);
    eax = MEM32(eax + edi * 4);
    edx = MEM32(eax + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0xC));
    ecx = MEM32(esi);
    ecx = ecx + 0x1F;
    ecx = ecx & 0xFFFFFFE0u;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi);
    edx = edx + 0x1F;
    ecx = ecx + edx;
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    if (CMP_BE(MEM32(eax + 0xC), ebx)) goto loc_0040A23C; /* jbe: below or equal (unsigned <=) */

loc_0040A22E: ;
    edi = edi;

loc_0040A230: ;
    MEM8(ecx + 0xD) = LO8(ebx);
    ecx = ecx + MEM32(eax + 0x10);
    edx++;
    if (CMP_B(edx, MEM32(eax + 0xC))) goto loc_0040A230; /* jb: below (unsigned <) */

loc_0040A23C: ;
    MEM32(eax + 4) = ebx;
    eax = MEM32(ebp + 0xC0);
    edi++;
    if (CMP_B(edi, eax)) goto loc_0040A200; /* jb: below (unsigned <) */

loc_0040A24A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A250
 * Original: 0x0040A250 - 0x0040A2B5 (101 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040A250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040A2B2; /* jbe: below or equal (unsigned <=) */

loc_0040A263: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0040A265: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx + ebx * 4);
    esi = MEM32(edx + 0x54);
    eax = ZX8(MEM8(esi));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0040A29B; /* je: equal / zero */

loc_0040A276: ;
    eax--;
    if ((eax != 0)) goto loc_0040A2A8; /* jne: not equal / not zero */

loc_0040A279: ;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040A2A8; /* jbe: below or equal (unsigned <=) */

loc_0040A282: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + edi * 4);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0040A150(); /* call 0x0040A150 */

loc_0040A291: ;
    eax = MEM32(esi + 0xC);
    edi++;
    if (CMP_B(edi, eax)) goto loc_0040A282; /* jb: below (unsigned <) */

loc_0040A299: ;
    goto loc_0040A2A8;

loc_0040A29B: ;
    PUSH32(esp, esi);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_0040A1E0(); /* call 0x0040A1E0 */

loc_0040A2A5: ;
    esp = esp + 4;

loc_0040A2A8: ;
    eax = MEM32(ebp);
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_0040A265; /* jb: below (unsigned <) */

loc_0040A2B0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0040A2B2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A2C0
 * Original: 0x0040A2C0 - 0x0040A334 (116 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A2C0(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040A2C0: ;
    esp = esp - 0x10;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ebp = eax;
    PUSH32(esp, edi);
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    edi = eax;
    esi = ecx + 8;
    ebp = ebp - ecx;
    MEM32(esp + 0x10) = 3;
    g_seh_ebp = ebp; sub_0040A340(); return; /* tail jmp 0x0040A340 */

}

/**
 * sub_0040A3B0
 * Original: 0x0040A3B0 - 0x0040A45F (175 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A3B0(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;

loc_0040A3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    ebx = ebx + 0x10;
    PUSH32(esp, edi);
    esi = edx;
    ecx = 0x10;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = ebx + 0x40;
    ecx = ebx;
    PUSH32(esp, 0); sub_0040A2C0(); /* call 0x0040A2C0 */

loc_0040A3D6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = esp + 0x10;
    ecx = ebx;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2810(); /* call 0x003E2810 */

loc_0040A44C: ;
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, esi);
    MEM8(ebx + 0x80) = LO8(eax);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A460
 * Original: 0x0040A460 - 0x0040A4EF (143 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040A460: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_0040A4B5; /* jne: not equal / not zero */

loc_0040A46D: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040A4EC; /* jbe: below or equal (unsigned <=) */

loc_0040A475: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    eax = MEM32(ecx + 0x54);
    if (CMP_NE(MEM8(eax), 0)) goto loc_0040A48A; /* jne: not equal / not zero */

loc_0040A483: ;
    edx = ebp;
    PUSH32(esp, 0); sub_0040A3B0(); /* call 0x0040A3B0 */

loc_0040A48A: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_00409490(); /* call 0x00409490 */

loc_0040A491: ;
    if (TEST_Z(eax, eax)) goto loc_0040A4A1; /* je: equal / zero */

loc_0040A495: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + edi * 4);
    MEM8(eax + 0x41) = 0;
    goto loc_0040A4AB;

loc_0040A4A1: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + edi * 4);
    MEM8(edx + 0x41) = 1;

loc_0040A4AB: ;
    eax = MEM32(esi);
    edi++;
    if (CMP_B(edi, eax)) goto loc_0040A475; /* jb: below (unsigned <) */

loc_0040A4B2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0040A4B5: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    eax = MEM32(ecx + 0x54);
    if (CMP_NE(MEM8(eax), 0)) goto loc_0040A4CA; /* jne: not equal / not zero */

loc_0040A4C3: ;
    edx = ebp;
    PUSH32(esp, 0); sub_0040A3B0(); /* call 0x0040A3B0 */

loc_0040A4CA: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_00409490(); /* call 0x00409490 */

loc_0040A4D1: ;
    if (TEST_Z(eax, eax)) goto loc_0040A4E2; /* je: equal / zero */

loc_0040A4D5: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + edi * 4);
    POP32(esp, edi);
    MEM8(eax + 0x41) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0040A4E2: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + edi * 4);
    MEM8(edx + 0x41) = 1;

loc_0040A4EC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A4F0
 * Original: 0x0040A4F0 - 0x0040A5EF (255 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A4F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040A4F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x81));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0040A5ED; /* je: equal / zero */

loc_0040A503: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(eax + 0x82), LO16(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    MEM32(esp + 4) = ecx;
    if (CMP_BE(MEM16(eax + 0x82), LO16(ecx))) goto loc_0040A5EC; /* jbe: below or equal (unsigned <=) */

loc_0040A51A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_0040A520: ;
    edx = ZX16(LO16(ecx));
    edi = MEM32(eax + edx * 4 + 0x84);
    edx = MEM32(ebx + 4);
    ebp = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_0040A5D8; /* jbe: below or equal (unsigned <=) */

loc_0040A537: ;
    goto loc_0040A540;

    /* nop */

loc_0040A540: ;
    SET_LO8(ecx, MEM8(esi + 0xD));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0040A5C4; /* je: equal / zero */

loc_0040A54B: ;
    eax = MEM32(edi);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0040A575; /* je: equal / zero */

loc_0040A552: ;
    eax--;
    if ((eax != 0)) goto loc_0040A5BF; /* jne: not equal / not zero */

loc_0040A555: ;
    eax = MEM32(edi + 8);
    xmm3 = MEMF(eax); /* movss */
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0040A566: ;
    xmm1 = xmm3; /* movaps */
    esp = esp + 8;
    xmm1 = xmm1 * xmm3; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    goto loc_0040A5B5;

loc_0040A575: ;
    eax = MEM32(edi + 8);
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 < MEMF(eax))) goto loc_0040A5BF; /* jb: below (unsigned <) */

loc_0040A581: ;
    xmm0 = MEMF(eax + 0xC); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 < MEMF(esi))) goto loc_0040A5BF; /* jb: below (unsigned <) */

loc_0040A58B: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 4))) goto loc_0040A5BF; /* jb: below (unsigned <) */

loc_0040A596: ;
    xmm0 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + 4))) goto loc_0040A5BF; /* jb: below (unsigned <) */

loc_0040A5A1: ;
    xmm0 = MEMF(esi + 8); /* movss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 8))) goto loc_0040A5BF; /* jb: below (unsigned <) */

loc_0040A5AC: ;
    xmm0 = MEMF(eax + 0x14); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */

loc_0040A5B5: ;
    if ((xmm0 < MEMF(esi + 8))) goto loc_0040A5BF; /* jb: below (unsigned <) */

loc_0040A5B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 4), _icall_esp); /* indirect call */
    }

loc_0040A5BC: ;
    esp = esp + 8;

loc_0040A5BF: ;
    eax = MEM32(esp + 0x14);
    ebp++;

loc_0040A5C4: ;
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 4);
    esi = esi + edx;
    if (CMP_B(ebp, ecx)) goto loc_0040A540; /* jb: below (unsigned <) */

loc_0040A5D4: ;
    ecx = MEM32(esp + 0xC);

loc_0040A5D8: ;
    ecx++;
    (void)0; /* cmp LO16(ecx), MEM16(eax + 0x82) - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_B(LO16(ecx), MEM16(eax + 0x82))) goto loc_0040A520; /* jb: below (unsigned <) */

loc_0040A5EA: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0040A5EC: ;
    POP32(esp, esi);

loc_0040A5ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A5F0
 * Original: 0x0040A5F0 - 0x0040A654 (100 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A5F0(void)
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

loc_0040A5F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040A600: ;
    ecx = eax;
    if (CMP_B(ecx, MEM32(ebx + 0x2C))) { sub_0040A654(); return; } /* jb: below (unsigned <) */

loc_0040A607: ;
    SET_LO8(ecx, MEM8(0x84BE1D));
    eax = 0; /* xor self */
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_0040A624; /* je: equal / zero */

loc_0040A613: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    esi = 0; /* xor self */
    MEM8(edi + 0x1C) = LO8(eax);
    MEMF(edi + 0x20) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0040A66A(); return; /* tail jmp 0x0040A66A */

loc_0040A624: ;
    ecx = MEM32(ebx + 0x2C);
    esi = MEM32(ebx + 0x18);
    edx = MEM32(ebx + 0x24);
    ecx--;
    esi--;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    eax = ecx;
    eax = eax - edx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    MEM8(edi + 0x1C) = 1;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0040A64C; /* jge: greater or equal (signed >=) */

loc_0040A646: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0040A64C: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(edi + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_0040A66A(); return; /* tail jmp 0x0040A66A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040A690
 * Original: 0x0040A690 - 0x0040A821 (401 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A690(void)
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

loc_0040A690: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esi + 5));
    MEM8(0x84BE1D) = LO8(eax);
    eax = MEM32(esi + 0xC);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 1)) { sub_0040A821(); return; } /* je: equal / zero */

loc_0040A6A6: ;
    SET_LO8(ecx, MEM8(esi + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0040A821(); return; } /* je: equal / zero */

loc_0040A6B1: ;
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040A6EA; /* jbe: below or equal (unsigned <=) */

loc_0040A6B7: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* nop */

loc_0040A6C0: ;
    edx = MEM32(esi + 0x10);
    if (CMP_EQ(MEM32(edx + ecx * 4), 0)) goto loc_0040A6E2; /* je: equal / zero */

loc_0040A6C9: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + ecx * 4);
    xmm1 = MEMF(eax + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x20) = xmm1; /* movss */

loc_0040A6E2: ;
    eax = MEM32(esi + 0xC);
    ecx++;
    if (CMP_B(ecx, eax)) goto loc_0040A6C0; /* jb: below (unsigned <) */

loc_0040A6EA: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(ecx & ecx, 0)) goto loc_0040A742; /* jbe: below or equal (unsigned <=) */

loc_0040A6FB: ;
    goto loc_0040A700;

    /* nop */

loc_0040A700: ;
    ecx = MEM32(esi + 0x10);
    edi = ecx + eax * 4;
    if (CMP_NE(MEM32(edi), 2)) goto loc_0040A736; /* jne: not equal / not zero */

loc_0040A70B: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(ecx);
    ebp = MEM32(edx + 0x30);
    fp_push((double)SMEM32(edx + 0x30)); /* fild */
    if (CMP_GE(ebp & ebp, 0)) goto loc_0040A723; /* jge: greater or equal (signed >=) */

loc_0040A71D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0040A723: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0040A736; /* jbe: below or equal (unsigned <=) */

loc_0040A72F: ;
    MEM32(edi) = 1;
    ebx++;

loc_0040A736: ;
    ecx = MEM32(esi + 0xC);
    eax++;
    if (CMP_B(eax, ecx)) goto loc_0040A700; /* jb: below (unsigned <) */

loc_0040A73E: ;
    MEM32(esp + 0xC) = ebx;

loc_0040A742: ;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040A78E; /* jbe: below or equal (unsigned <=) */

loc_0040A74B: ;
    goto loc_0040A750;

    /* nop */

loc_0040A750: ;
    eax = MEM32(esi + 0x10);
    ebp = eax + edi * 4;
    if (CMP_EQ(MEM32(ebp), 0)) goto loc_0040A786; /* je: equal / zero */

loc_0040A75C: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + edi * 4);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0040A77F; /* jne: not equal / not zero */

loc_0040A769: ;
    ebx = MEM32(eax);
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040A776: ;
    (void)0; /* cmp eax, MEM32(ebx + 0x2C) - flags set for next jcc */
    ebx = MEM32(esp + 0xC);
    if (CMP_B(eax, MEM32(ebx + 0x2C))) goto loc_0040A786; /* jb: below (unsigned <) */

loc_0040A77F: ;
    MEM32(ebp) = 0;

loc_0040A786: ;
    eax = MEM32(esi + 0xC);
    edi++;
    if (CMP_B(edi, eax)) goto loc_0040A750; /* jb: below (unsigned <) */

loc_0040A78E: ;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040A7EF; /* jbe: below or equal (unsigned <=) */

loc_0040A797: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* nop */

loc_0040A7A0: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0040A7EF; /* jle: less or equal (signed <=) */

loc_0040A7A4: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + edi * 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edx + edi * 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0040A7E7; /* jne: not equal / not zero */

loc_0040A7B1: ;
    MEM32(eax) = 2;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + edi * 4);
    MEMF(eax + 0x20) = xmm0; /* movss */
    ebp = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    if (CMP_BE(ebp & ebp, 0)) goto loc_0040A7DF; /* jbe: below or equal (unsigned <=) */

loc_0040A7CE: ;
    edi = edi;

loc_0040A7D0: ;
    MEM8(ecx + 0xD) = 0;
    ecx = ecx + MEM32(eax + 0x10);
    ebp = MEM32(eax + 0xC);
    edx++;
    if (CMP_B(edx, ebp)) goto loc_0040A7D0; /* jb: below (unsigned <) */

loc_0040A7DF: ;
    MEM32(eax + 4) = 0;
    ebx--;

loc_0040A7E7: ;
    eax = MEM32(esi + 0xC);
    edi++;
    if (CMP_B(edi, eax)) goto loc_0040A7A0; /* jb: below (unsigned <) */

loc_0040A7EF: ;
    eax = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040A81C; /* jbe: below or equal (unsigned <=) */

loc_0040A7F8: ;
    goto loc_0040A800;

    /* nop */

loc_0040A800: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_EQ(MEM32(ecx + ebp * 4), 0)) goto loc_0040A814; /* je: equal / zero */

loc_0040A809: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + ebp * 4);
    PUSH32(esp, 0); sub_0040A5F0(); /* call 0x0040A5F0 */

loc_0040A814: ;
    eax = MEM32(esi + 0xC);
    ebp++;
    if (CMP_B(ebp, eax)) goto loc_0040A800; /* jb: below (unsigned <) */

loc_0040A81C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040A850
 * Original: 0x0040A850 - 0x0040A914 (196 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A850(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0040A850: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esi + 0xB4));
    MEM8(0x84BE1D) = LO8(eax);
    eax = MEM32(esi + 0xC0);
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84BE00) = ecx;
    if (CMP_BE(eax & eax, 0)) goto loc_0040A911; /* jbe: below or equal (unsigned <=) */

loc_0040A876: ;
    PUSH32(esp, ebx);
    goto loc_0040A880;

    /* nop */

loc_0040A880: ;
    edx = MEM32(esi + 0xC4);
    ebx = MEM32(edx + edi * 4);
    xmm1 = MEMF(ebx + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm0 = MEMF(ebx + 0x1C); /* movss */
    SET_LO8(eax, MEM8(0x84BE1D));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(ebx + 0x1C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0040A8D1; /* je: equal / zero */

loc_0040A8B1: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0040A8D1; /* je: equal / zero */

loc_0040A8BA: ;
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm1, MEMF(eax + 0xC) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 0xC))) goto loc_0040A8D1; /* jbe: below or equal (unsigned <=) */

loc_0040A8C9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0x1C) = xmm0; /* movss */

loc_0040A8D1: ;
    ecx = MEM32(0x84BE00);
    edx = MEM32(0x84BE14);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(0x84BE11));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0040DFA0(); /* call 0x0040DFA0 */

loc_0040A8F2: ;
    edx = MEM32(0x84BE00);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0040A4F0(); /* call 0x0040A4F0 */

loc_0040A8FE: ;
    eax = MEM32(esi + 0xC0);
    esp = esp + 0x18;
    edi++;
    if (CMP_B(edi, eax)) goto loc_0040A880; /* jb: below (unsigned <) */

loc_0040A910: ;
    POP32(esp, ebx);

loc_0040A911: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A920
 * Original: 0x0040A920 - 0x0040A971 (81 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A920(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0040A920: ;
    eax = MEM32(ecx + 0x44);
    xmm0 = MEMF(eax + 0x28); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x54);
    eax = ZX8(MEM8(esi));
    eax = eax - 0;
    MEM8(0x84BE11) = 1;
    MEMF(0x84BE14) = xmm0; /* movss */
    if ((eax == 0)) goto loc_0040A955; /* je: equal / zero */

loc_0040A943: ;
    eax--;
    if ((eax != 0)) goto loc_0040A96F; /* jne: not equal / not zero */

loc_0040A946: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0040A690(); /* call 0x0040A690 */

loc_0040A950: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0040A955: ;
    edx = MEM32(esp + 8);
    xmm0 = MEMF(ecx + 0x4C); /* movss */
    PUSH32(esp, edx);
    MEMF(0x84BE08) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0040A850(); /* call 0x0040A850 */

loc_0040A96C: ;
    esp = esp + 4;

loc_0040A96F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A980
 * Original: 0x0040A980 - 0x0040A9D0 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A980(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0040A980: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x64);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(0x84BE11) = 0;
    if (TEST_Z(esi, esi)) goto loc_0040A99D; /* je: equal / zero */

loc_0040A994: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003F9540(); /* call 0x003F9540 */

loc_0040A99A: ;
    esp = esp + 4;

loc_0040A99D: ;
    esi = MEM32(edi + 0x54);
    eax = ZX8(MEM8(esi));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0040A9B7; /* je: equal / zero */

loc_0040A9A8: ;
    eax--;
    if ((eax != 0)) goto loc_0040A9CD; /* jne: not equal / not zero */

loc_0040A9AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0040A690(); /* call 0x0040A690 */

loc_0040A9B1: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0040A9B7: ;
    xmm0 = MEMF(edi + 0x4C); /* movss */
    PUSH32(esp, ebx);
    MEMF(0x84BE08) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0040A850(); /* call 0x0040A850 */

loc_0040A9CA: ;
    esp = esp + 4;

loc_0040A9CD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040A9D0
 * Original: 0x0040A9D0 - 0x0040AA91 (193 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040A9D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040A9D0: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(ebx + 0xC); /* movss */
    ecx = MEM32(ebx);
    MEMF(0x828530) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(ebx + 8) = xmm0; /* movss */
    MEM32(esp) = eax;
    if (CMP_BE(ecx & ecx, 0)) goto loc_0040AA8F; /* jbe: below or equal (unsigned <=) */

loc_0040A9FD: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0040AA04: ;
    ecx = MEM32(ebx + 4);
    edi = MEM32(ecx + eax * 4);
    SET_LO8(eax, MEM8(edi + 0x40));
    MEM8(0x84BDFE) = LO8(eax);
    eax = ZX8(LO8(eax));
    eax = eax + 0xFFFFFFFDu;
    if (CMP_A(eax, 7)) goto loc_0040AA79; /* ja: above (unsigned >) */

loc_0040AA1D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x40AA94); /* switch: 8 entries, 6 targets */
    if (_jt == 0x0040AA24u) goto loc_0040AA24;
    if (_jt == 0x0040AA56u) goto loc_0040AA56;
    if (_jt == 0x0040AA60u) goto loc_0040AA60;
    if (_jt == 0x0040AA68u) goto loc_0040AA68;
    if (_jt == 0x0040AA70u) goto loc_0040AA70;
    if (_jt == 0x0040AA79u) goto loc_0040AA79;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0040AA24: ;
    esi = MEM32(edi + 0x54);
    eax = ZX8(MEM8(esi));
    eax = eax - 0;
    MEM8(0x84BE11) = 0;
    if ((eax == 0)) goto loc_0040AA41; /* je: equal / zero */

loc_0040AA36: ;
    eax--;
    if ((eax != 0)) goto loc_0040AA79; /* jne: not equal / not zero */

loc_0040AA39: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0040A690(); /* call 0x0040A690 */

loc_0040AA3F: ;
    goto loc_0040AA76;

loc_0040AA41: ;
    xmm0 = MEMF(edi + 0x4C); /* movss */
    PUSH32(esp, ebp);
    MEMF(0x84BE08) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0040A850(); /* call 0x0040A850 */

loc_0040AA54: ;
    goto loc_0040AA76;

loc_0040AA56: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); sub_0040A920(); /* call 0x0040A920 */

loc_0040AA5E: ;
    goto loc_0040AA76;

loc_0040AA60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0040A980(); /* call 0x0040A980 */

loc_0040AA66: ;
    goto loc_0040AA76;

loc_0040AA68: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0040A980(); /* call 0x0040A980 */

loc_0040AA6E: ;
    goto loc_0040AA76;

loc_0040AA70: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0040A980(); /* call 0x0040A980 */

loc_0040AA76: ;
    esp = esp + 4;

loc_0040AA79: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ebx);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(eax, ecx)) goto loc_0040AA04; /* jb: below (unsigned <) */

loc_0040AA8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0040AA8F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040AAC0
 * Original: 0x0040AAC0 - 0x0040AAF5 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AAC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040AAC0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x84BDFE));
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(ecx * 4 + 0x84BD8C);
    if (TEST_Z(ecx, ecx)) { sub_0040AAF5(); return; } /* je: equal / zero */

loc_0040AAD5: ;
    edx = MEM32(0x84BE04);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(0x84BE1C));
    eax = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0040AAF0: ;
    esp = esp + 0x14;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040AB40
 * Original: 0x0040AB40 - 0x0040AB80 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AB40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040AB40: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(edi + 4));
    MEM8(0x84BE1C) = LO8(eax);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, 1)) { sub_0040AB80(); return; } /* je: equal / zero */

loc_0040AB53: ;
    SET_LO8(ecx, MEM8(edi + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0040AB80(); return; } /* je: equal / zero */

loc_0040AB5A: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040AB7D; /* jbe: below or equal (unsigned <=) */

loc_0040AB61: ;
    ecx = MEM32(edi + 0x10);
    if (CMP_EQ(MEM32(ecx + ebx * 4), 0)) goto loc_0040AB75; /* je: equal / zero */

loc_0040AB6A: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx + ebx * 4);
    PUSH32(esp, 0); sub_0040AAC0(); /* call 0x0040AAC0 */

loc_0040AB75: ;
    eax = MEM32(edi + 0xC);
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_0040AB61; /* jb: below (unsigned <) */

loc_0040AB7D: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0040AB90
 * Original: 0x0040AB90 - 0x0040ABBE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AB90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040AB90: ;
    SET_LO8(ecx, MEM8(0x84BDFE));
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(LO8(ecx));
    eax = MEM32(eax * 4 + 0x84BD8C);
    if (TEST_Z(eax, eax)) { sub_0040ABBE(); return; } /* je: equal / zero */

loc_0040ABA7: ;
    ecx = MEM32(0x84BE04);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0040ABB9: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0040AC00
 * Original: 0x0040AC00 - 0x0040AC2D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AC00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040AC00: ;
    eax = MEM32(edi + 0xC0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040AC2B; /* jbe: below or equal (unsigned <=) */

loc_0040AC0D: ;
    /* nop */

loc_0040AC10: ;
    eax = MEM32(edi + 0xC4);
    eax = MEM32(eax + esi * 4);
    edx = ebx;
    PUSH32(esp, 0); sub_0040AB90(); /* call 0x0040AB90 */

loc_0040AC20: ;
    eax = MEM32(edi + 0xC0);
    esi++;
    if (CMP_B(esi, eax)) goto loc_0040AC10; /* jb: below (unsigned <) */

loc_0040AC2B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0040AC30
 * Original: 0x0040AC30 - 0x0040AC7B (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AC30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040AC30: ;
    xmm0 = MEMF(esi + 0x4C); /* movss */
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(esi + 0x41));
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEMF(0x84BE08) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x50); /* movss */
    PUSH32(esp, edi);
    MEMF(0x84BE0C) = xmm0; /* movss */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    MEM32(0x84BE04) = eax;
    SET_LO8(eax, MEM8(esi + 0x40));
    ecx = ZX8(LO8(eax));
    MEM8(0x84BDFE) = LO8(eax);
    eax = MEM32(ecx * 4 + 0x84BD60);
    if (TEST_Z(eax, eax)) { sub_0040AC7B(); return; } /* je: equal / zero */

loc_0040AC72: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0040AC76: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_0040AC84(); return; /* tail jmp 0x0040AC84 */

}

/**
 * sub_0040ACD0
 * Original: 0x0040ACD0 - 0x0040ADF4 (292 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040ACD0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0040ACD0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5499F0);
    eax = 0xCCCCCCCCu;
    ecx = ecx | 0x100;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(0x5499F0) = ecx;
    edx = 1;
    ecx = 0x40304;
    MEM8(0x84BDFD) = 1;
    MEM32(0x84B840) = eax;
    MEM32(0x84B844) = eax;
    MEM32(0x84B848) = eax;
    MEM32(0x84B84C) = eax;
    MEM32(0x84B83C) = ebx;
    MEM32(0x84BDB8) = ebx;
    MEM32(0x84BDBC) = ebx;
    MEM8(0x84BDC0) = LO8(ebx);
    MEM8(0x84BDC1) = LO8(ebx);
    MEM8(0x84BDC2) = LO8(ebx);
    MEM32(0x549BD4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040AD3F: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0040AD51: ;
    ecx = MEM32(esp + 0xC);
    eax = 0x828490;
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
    eax = 0x81B810;
    MEM32(0x81B808) = eax;
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 4);
    eax = 0x828440;
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
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040AE00
 * Original: 0x0040AE00 - 0x0040AEA9 (169 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AE00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040AE00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    xmm0 = MEMF(ebp + 8); /* movss */
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(0x84BE20) = xmm0; /* movss */
    if (CMP_BE(eax & eax, 0)) goto loc_0040AE94; /* jbe: below or equal (unsigned <=) */

loc_0040AE1C: ;
    PUSH32(esp, esi);
    /* nop */

loc_0040AE20: ;
    eax = MEM32(ebp + 4);
    esi = MEM32(eax + ebx * 4);
    if (CMP_NE(MEM32(esi + 0x48), 1)) goto loc_0040AE8B; /* jne: not equal / not zero */

loc_0040AE2C: ;
    eax = ZX8(MEM8(esi + 0x40));
    eax = eax + 0xFFFFFFFDu;
    if (CMP_A(eax, 7)) goto loc_0040AE8B; /* ja: above (unsigned >) */

loc_0040AE38: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x40AEAC); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0040AE3Fu) goto loc_0040AE3F;
    if (_jt == 0x0040AE65u) goto loc_0040AE65;
    if (_jt == 0x0040AE6Eu) goto loc_0040AE6E;
    if (_jt == 0x0040AE76u) goto loc_0040AE76;
    if (_jt == 0x0040AE8Bu) goto loc_0040AE8B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0040AE3F: ;
    eax = MEM32(esi + 0x44);
    xmm0 = MEMF(eax + 0x2C); /* movss */
    MEMF(0x84BE18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x28); /* movss */
    MEM8(0x84BE10) = 0;
    MEMF(0x84BE14) = xmm0; /* movss */
    goto loc_0040AE84;

loc_0040AE65: ;
    MEM8(0x84BE10) = 0;
    goto loc_0040AE84;

loc_0040AE6E: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx + 0x44);
    goto loc_0040AE7C;

loc_0040AE76: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx + 0x34);

loc_0040AE7C: ;
    SET_LO8(eax, MEM8(edx + 0x54));
    MEM8(0x84BE10) = LO8(eax);

loc_0040AE84: ;
    eax = edi;
    PUSH32(esp, 0); sub_0040AC30(); /* call 0x0040AC30 */

loc_0040AE8B: ;
    eax = MEM32(ebp);
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_0040AE20; /* jb: below (unsigned <) */

loc_0040AE93: ;
    POP32(esp, esi);

loc_0040AE94: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm0 = xmm0 - MEMF(0x84BE20); /* subss */
    MEMF(ebp + 8) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040AED0
 * Original: 0x0040AED0 - 0x0040AF2C (92 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040AED0: ;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040AF2B; /* jbe: below or equal (unsigned <=) */

loc_0040AED8: ;
    PUSH32(esp, ebp);
    /* nop */

loc_0040AEE0: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edx * 4);
    eax = MEM32(ecx + 0x54);
    ecx = ZX8(MEM8(eax));
    ecx--;
    if ((ecx != 0)) goto loc_0040AF23; /* jne: not equal / not zero */

loc_0040AEEF: ;
    ecx = MEM32(eax + 0x10);
    MEM8(eax + 8) = LO8(ebx);
    MEM32(ecx) = 2;
    ebp = MEM32(eax + 0xC);
    ecx = 1;
    if (CMP_BE(ebp, ecx)) goto loc_0040AF23; /* jbe: below or equal (unsigned <=) */

loc_0040AF07: ;
    goto loc_0040AF10;

    /* nop */

loc_0040AF10: ;
    ebp = MEM32(eax + 0x10);
    MEM32(ebp + ecx * 4) = 0;
    ebp = MEM32(eax + 0xC);
    ecx++;
    if (CMP_B(ecx, ebp)) goto loc_0040AF10; /* jb: below (unsigned <) */

loc_0040AF23: ;
    eax = MEM32(esi);
    edx++;
    if (CMP_B(edx, eax)) goto loc_0040AEE0; /* jb: below (unsigned <) */

loc_0040AF2A: ;
    POP32(esp, ebp);

loc_0040AF2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0040AF30
 * Original: 0x0040AF30 - 0x0040AF67 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AF30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040AF30: ;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040AF66; /* jbe: below or equal (unsigned <=) */

loc_0040AF38: ;
    goto loc_0040AF40;

    /* nop */

loc_0040AF40: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edx * 4);
    eax = MEM32(ecx + 0x54);
    ecx = ZX8(MEM8(eax));
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0040AF59; /* je: equal / zero */

loc_0040AF51: ;
    ecx--;
    if ((ecx != 0)) goto loc_0040AF5F; /* jne: not equal / not zero */

loc_0040AF54: ;
    MEM8(eax + 5) = LO8(ebx);
    goto loc_0040AF5F;

loc_0040AF59: ;
    MEM8(eax + 0xB4) = LO8(ebx);

loc_0040AF5F: ;
    eax = MEM32(esi);
    edx++;
    if (CMP_B(edx, eax)) goto loc_0040AF40; /* jb: below (unsigned <) */

loc_0040AF66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0040AF70
 * Original: 0x0040AF70 - 0x0040AFB4 (68 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AF70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040AF70: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_0040AFB1; /* jbe: below or equal (unsigned <=) */

loc_0040AF7D: ;
    PUSH32(esp, ebp);
    edi = edi;

loc_0040AF80: ;
    eax = MEM32(edi + 0x14);
    eax = MEM32(eax + esi * 4);
    MEMF(eax + 0x20) = xmm0; /* movss */
    ebp = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    if (CMP_BE(ebp, ebx)) goto loc_0040AFA5; /* jbe: below or equal (unsigned <=) */

loc_0040AF97: ;
    MEM8(ecx + 0xD) = LO8(ebx);
    ecx = ecx + MEM32(eax + 0x10);
    ebp = MEM32(eax + 0xC);
    edx++;
    if (CMP_B(edx, ebp)) goto loc_0040AF97; /* jb: below (unsigned <) */

loc_0040AFA5: ;
    MEM32(eax + 4) = ebx;
    eax = MEM32(edi + 0xC);
    esi++;
    if (CMP_B(esi, eax)) goto loc_0040AF80; /* jb: below (unsigned <) */

loc_0040AFB0: ;
    POP32(esp, ebp);

loc_0040AFB1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040AFC0
 * Original: 0x0040AFC0 - 0x0040B010 (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040AFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040AFC0: ;
    eax = MEM32(edi + 0xC0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_0040B00D; /* jbe: below or equal (unsigned <=) */

loc_0040AFD0: ;
    PUSH32(esp, ebp);

loc_0040AFD1: ;
    eax = MEM32(edi + 0xC4);
    eax = MEM32(eax + esi * 4);
    MEMF(eax + 0x1C) = xmm0; /* movss */
    ebp = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    if (CMP_BE(ebp, ebx)) goto loc_0040AFFE; /* jbe: below or equal (unsigned <=) */

loc_0040AFEB: ;
    goto loc_0040AFF0;

    /* nop */

loc_0040AFF0: ;
    MEM8(ecx + 0xD) = LO8(ebx);
    ecx = ecx + MEM32(eax + 0x10);
    ebp = MEM32(eax + 0xC);
    edx++;
    if (CMP_B(edx, ebp)) goto loc_0040AFF0; /* jb: below (unsigned <) */

loc_0040AFFE: ;
    MEM32(eax + 4) = ebx;
    eax = MEM32(edi + 0xC0);
    esi++;
    if (CMP_B(esi, eax)) goto loc_0040AFD1; /* jb: below (unsigned <) */

loc_0040B00C: ;
    POP32(esp, ebp);

loc_0040B00D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040B010
 * Original: 0x0040B010 - 0x0040B050 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B010(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0040B010: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040B04E; /* jbe: below or equal (unsigned <=) */

loc_0040B019: ;
    PUSH32(esp, edi);
    /* nop */

loc_0040B020: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + esi * 4);
    edi = MEM32(ecx + 0x54);
    eax = ZX8(MEM8(edi));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0040B03E; /* je: equal / zero */

loc_0040B031: ;
    eax--;
    if ((eax != 0)) goto loc_0040B046; /* jne: not equal / not zero */

loc_0040B034: ;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_0040AF70(); /* call 0x0040AF70 */

loc_0040B03C: ;
    goto loc_0040B046;

loc_0040B03E: ;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_0040AFC0(); /* call 0x0040AFC0 */

loc_0040B046: ;
    eax = MEM32(ebx);
    esi++;
    if (CMP_B(esi, eax)) goto loc_0040B020; /* jb: below (unsigned <) */

loc_0040B04D: ;
    POP32(esp, edi);

loc_0040B04E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0040B050
 * Original: 0x0040B050 - 0x0040B078 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B050(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0040B050: ;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_0040B077; /* jbe: below or equal (unsigned <=) */

loc_0040B058: ;
    goto loc_0040B060;

    /* nop */

loc_0040B060: ;
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + eax * 4);
    MEMF(ecx + 0x4C) = xmm1; /* movss */
    MEMF(ecx + 0x50) = xmm0; /* movss */
    ecx = MEM32(edx);
    eax++;
    if (CMP_B(eax, ecx)) goto loc_0040B060; /* jb: below (unsigned <) */

loc_0040B077: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0040B080
 * Original: 0x0040B080 - 0x0040B0C8 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B080(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0040B080: ;
    eax = MEM32(esi + 0xC0);
    edx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040B0C7; /* jbe: below or equal (unsigned <=) */

loc_0040B08C: ;
    xmm1 = MEMF(0x648D34); /* movss */
    goto loc_0040B0A0;

    /* nop */
    /* nop */

loc_0040B0A0: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + edx * 4);
    xmm2 = MEMF(ecx + 0x18); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040B0BC; /* jnp: not parity */

loc_0040B0B7: ;
    MEMF(ecx + 0x18) = xmm0; /* movss */

loc_0040B0BC: ;
    eax = MEM32(esi + 0xC0);
    edx++;
    if (CMP_B(edx, eax)) goto loc_0040B0A0; /* jb: below (unsigned <) */

loc_0040B0C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0040B0D0
 * Original: 0x0040B0D0 - 0x0040B10A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B0D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0040B0D0: ;
    eax = MEM32(eax + 0x54);
    if (CMP_NE(MEM8(eax), 0)) goto loc_0040B109; /* jne: not equal / not zero */

loc_0040B0D8: ;
    edx = MEM32(eax + 0xC0);
    ecx = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_0040B109; /* jbe: below or equal (unsigned <=) */

loc_0040B0E4: ;
    xmm0 = MEMF(0x648D34); /* movss */
    /* nop */

loc_0040B0F0: ;
    edx = MEM32(eax + 0xC4);
    edx = MEM32(edx + ecx * 4);
    MEMF(edx + 0x18) = xmm0; /* movss */
    edx = MEM32(eax + 0xC0);
    ecx++;
    if (CMP_B(ecx, edx)) goto loc_0040B0F0; /* jb: below (unsigned <) */

loc_0040B109: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0040B110
 * Original: 0x0040B110 - 0x0040B162 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B110(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0040B110: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_0040B162(); return; } /* jne: not equal / not zero */

loc_0040B115: ;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040B161; /* jbe: below or equal (unsigned <=) */

loc_0040B11D: ;
    xmm0 = MEMF(0x648D34); /* movss */
    PUSH32(esp, edi);

loc_0040B126: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edx * 4);
    eax = MEM32(ecx + 0x54);
    if (CMP_NE(MEM8(eax), 0)) goto loc_0040B159; /* jne: not equal / not zero */

loc_0040B134: ;
    edi = MEM32(eax + 0xC0);
    ecx = 0; /* xor self */
    if (CMP_BE(edi & edi, 0)) goto loc_0040B159; /* jbe: below or equal (unsigned <=) */

loc_0040B140: ;
    edi = MEM32(eax + 0xC4);
    edi = MEM32(edi + ecx * 4);
    MEMF(edi + 0x18) = xmm0; /* movss */
    edi = MEM32(eax + 0xC0);
    ecx++;
    if (CMP_B(ecx, edi)) goto loc_0040B140; /* jb: below (unsigned <) */

loc_0040B159: ;
    eax = MEM32(esi);
    edx++;
    if (CMP_B(edx, eax)) goto loc_0040B126; /* jb: below (unsigned <) */

loc_0040B160: ;
    POP32(esp, edi);

loc_0040B161: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0040B170
 * Original: 0x0040B170 - 0x0040B1AA (58 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B170(void)
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

loc_0040B170: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(ebp & ebp, 0)) goto loc_0040B1A3; /* jbe: below or equal (unsigned <=) */

loc_0040B17D: ;
    edi = MEM32(eax + 0x14);

loc_0040B180: ;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0040B19B; /* jne: not equal / not zero */

loc_0040B189: ;
    ebx = MEM32(eax);
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040B196: ;
    if (CMP_B(eax, MEM32(ebx + 0x2C))) { sub_0040B1AA(); return; } /* jb: below (unsigned <) */

loc_0040B19B: ;
    esi++;
    edi = edi + 4;
    if (CMP_B(esi, ebp)) goto loc_0040B180; /* jb: below (unsigned <) */

loc_0040B1A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040B1C0
 * Original: 0x0040B1C0 - 0x0040B225 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B1C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0040B1C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_0040B21F; /* jbe: below or equal (unsigned <=) */

loc_0040B1CF: ;
    esi = MEM32(eax + 0xC4);
    xmm0 = MEMF(0x648D34); /* movss */
    /* nop */

loc_0040B1E0: ;
    ecx = MEM32(esi);
    xmm1 = MEMF(ecx + 0x18); /* movss */
    edx = MEM32(ecx);
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0040B1F9; /* jp: parity */

loc_0040B1F2: ;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_0040B217; /* je: equal / zero */

loc_0040B1F9: ;
    eax = MEM32(edx + 0xC);
    if (TEST_Z(eax, eax)) { sub_0040B225(); return; } /* je: equal / zero */

loc_0040B200: ;
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x1C); /* mulss */
    /* comiss xmm1, MEMF(eax + 0xC) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 0xC))) { sub_0040B225(); return; } /* jbe: below or equal (unsigned <=) */

loc_0040B210: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_0040B225(); return; } /* jne: not equal / not zero */

loc_0040B217: ;
    edi++;
    esi = esi + 4;
    if (CMP_B(edi, ebx)) goto loc_0040B1E0; /* jb: below (unsigned <) */

loc_0040B21F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040B230
 * Original: 0x0040B230 - 0x0040B26E (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B230(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040B230: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_0040B268; /* jbe: below or equal (unsigned <=) */

loc_0040B23B: ;
    esi = MEM32(eax + 4);
    edi = edi;

loc_0040B240: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x54);
    ecx = ZX8(MEM8(eax));
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0040B257; /* je: equal / zero */

loc_0040B24D: ;
    ecx--;
    if ((ecx != 0)) { sub_0040B26E(); return; } /* jne: not equal / not zero */

loc_0040B250: ;
    PUSH32(esp, 0); sub_0040B170(); /* call 0x0040B170 */

loc_0040B255: ;
    goto loc_0040B25C;

loc_0040B257: ;
    PUSH32(esp, 0); sub_0040B1C0(); /* call 0x0040B1C0 */

loc_0040B25C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0040B26E(); return; } /* je: equal / zero */

loc_0040B260: ;
    edi++;
    esi = esi + 4;
    if (CMP_B(edi, ebx)) goto loc_0040B240; /* jb: below (unsigned <) */

loc_0040B268: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040B280
 * Original: 0x0040B280 - 0x0040B2E1 (97 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B280(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040B280: ;
    edx = MEM32(esi + 0x1C);
    ecx = 0xFFFF;
    eax = 0; /* xor self */
    if (CMP_EQ(edx, ecx)) goto loc_0040B293; /* je: equal / zero */

loc_0040B28E: ;
    eax = 1;

loc_0040B293: ;
    if (CMP_EQ(MEM32(esi + 0x20), ecx)) goto loc_0040B29B; /* je: equal / zero */

loc_0040B298: ;
    eax = eax | 2;

loc_0040B29B: ;
    SET_LO8(edx, MEM8(esi + 0x50));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0040B2A5; /* je: equal / zero */

loc_0040B2A2: ;
    eax = eax | 4;

loc_0040B2A5: ;
    SET_LO8(edx, MEM8(esi + 0x51));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0040B2AF; /* je: equal / zero */

loc_0040B2AC: ;
    eax = eax | 8;

loc_0040B2AF: ;
    SET_LO8(edx, MEM8(esi + 0x52));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0040B2B9; /* je: equal / zero */

loc_0040B2B6: ;
    eax = eax | 0x10;

loc_0040B2B9: ;
    if (CMP_EQ(MEM32(esi + 0x70), ecx)) goto loc_0040B2C1; /* je: equal / zero */

loc_0040B2BE: ;
    eax = eax | 0x20;

loc_0040B2C1: ;
    ecx = MEM32(esi + 0x94);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003EBE10(); /* call 0x003EBE10 */

loc_0040B2DA: ;
    esp = esp + 0x14;
    MEM32(esi + 0x5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0040B2F0
 * Original: 0x0040B2F0 - 0x0040B3C5 (213 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B2F0(void)
{

loc_0040B2F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = MEM32(esi);
    MEM32(0x8284F0) = edi;
    edi = MEM32(esi + 4);
    MEM32(0x8284F4) = edi;
    edi = MEM32(esi + 8);
    MEM32(0x8284F8) = edi;
    esi = MEM32(esi + 0xC);
    MEM32(0x8284FC) = esi;
    esi = eax + 0x10;
    edi = MEM32(esi);
    MEM32(0x828500) = edi;
    edi = MEM32(esi + 4);
    MEM32(0x828504) = edi;
    edi = MEM32(esi + 8);
    MEM32(0x828508) = edi;
    esi = MEM32(esi + 0xC);
    MEM32(0x82850C) = esi;
    esi = eax + 0x20;
    edi = MEM32(esi);
    MEM32(0x828510) = edi;
    edi = MEM32(esi + 4);
    MEM32(0x828514) = edi;
    edi = MEM32(esi + 8);
    MEM32(0x828518) = edi;
    esi = MEM32(esi + 0xC);
    MEM32(0x82851C) = esi;
    eax = eax + 0x30;
    esi = MEM32(eax);
    MEM32(0x828520) = esi;
    esi = MEM32(eax + 4);
    MEM32(0x828524) = esi;
    esi = MEM32(eax + 8);
    MEM32(0x828528) = esi;
    eax = MEM32(eax + 0xC);
    MEM32(0x82852C) = eax;
    eax = MEM32(edx);
    MEM32(0x8284E0) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(0x8284E4) = eax;
    eax = MEM32(ecx);
    MEM32(0x8284E8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x8284D4) = eax;
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    MEM32(0x84BDCC) = 1;
    MEM32(0x8284D8) = edx;
    MEM32(0x8284DC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0040B3D0
 * Original: 0x0040B3D0 - 0x0040B405 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B3D0(void)
{

loc_0040B3D0: ;
    edx = MEM32(0x8284E0);
    MEM32(ecx) = edx;
    edx = MEM32(0x8284E4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8284E8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(0x8284D4);
    edx = MEM32(0x8284D8);
    MEM32(eax) = ecx;
    ecx = MEM32(0x8284DC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0040B410
 * Original: 0x0040B410 - 0x0040B4A0 (144 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B410(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040B410: ;
    (void)0; /* cmp MEM8(0x84BDC0), 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x44);
    if (CMP_EQ(MEM8(0x84BDC0), 4)) goto loc_0040B477; /* je: equal / zero */

loc_0040B41E: ;
    PUSH32(esp, 0x900);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0040B428: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0040B42F: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040B43E: ;
    edx = 0x203;
    ecx = 0x40354;
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040B457: ;
    ebx = MEM32(0x84BDE8);
    PUSH32(esp, 0xC);
    eax = 0; /* xor self */
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00535F00(); /* call 0x00535F00 */

loc_0040B470: ;
    MEM8(0x84BDC0) = 4;

loc_0040B477: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    eax--;
    eax = eax & esi;
    PUSH32(esp, 0); sub_0040BB20(); /* call 0x0040BB20 */

loc_0040B492: ;
    ebx = MEM32(esi + 0x60);
    esp = esp + 4;
    PUSH32(esp, 0); sub_0040C710(); /* call 0x0040C710 */

loc_0040B49D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040B4A0
 * Original: 0x0040B4A0 - 0x0040BB1B (1659 bytes, 432 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040B4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0040B4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    ecx = ZX8(MEM8(0x84BDDC));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    SET_LO8(ecx, MEM8(ebp + 0xC));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = MEM32(esi + 4);
    /* TODO: prefetcht0 byte ptr [esi] */
    PUSH32(esp, edi);
    edi = edx;
    MEM32(esp + 0x18) = edi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0040B85C; /* je: equal / zero */

loc_0040B4D3: ;
    if (CMP_BE(eax & eax, 0)) goto loc_0040B692; /* jbe: below or equal (unsigned <=) */

loc_0040B4DB: ;
    MEM32(esp + 0x20) = eax;
    /* nop */

loc_0040B4E0: ;
    edx = ZX8(MEM8(0x84BDDC));
    eax = MEM32(0x84BDE4);
    ebx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (CMP_BE(edx & edx, 0)) goto loc_0040B64E; /* jbe: below or equal (unsigned <=) */

loc_0040B4FA: ;
    /* nop */

loc_0040B500: ;
    edi = MEM32(ebp + 8);
    ecx = esi;
    esi = esi + MEM32(edi + 0xC);
    (void)0; /* cmp MEM8(ecx + 0xD), 0 - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [esi] */
    edi = MEM32(ebp + 0x10);
    if (CMP_EQ(MEM8(ecx + 0xD), 0)) goto loc_0040B640; /* je: equal / zero */

loc_0040B518: ;
    xmm0 = MEMF(ecx); /* movups */
    xmm2 = MEMF(edi + 0x20); /* movaps */
    xmm1 = MEMF(edi + 0x30); /* movaps */
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0xaa */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0x55 */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0 */
    xmm0 = MEMF(ecx + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    /* mulps: xmm3 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edi + 0x10); /* movaps */
    MEMF(esp + 0x24) = xmm0; /* movss */
    /* mulps: xmm4 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edi); /* movaps */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    edx = esp + 0x40;
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    MEMF(edx) = xmm5; /* movaps */
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0xC) = edx;
    xmm1 = MEMF(ecx + 0x20); /* movups */
    edx = esp + 0x24;
    xmm0 = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1 *= xmm0 (packed 4xfloat) */
    edx = esp + 0x30;
    MEMF(edx) = xmm1; /* movaps */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    ecx = ZX8(MEM8(ecx + 0xC));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x28) = edx;
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
    xmm0 = MEMF(0x648D24); /* movss */
    /* comiss xmm0, MEMF(esp + 0x2C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x2C))) goto loc_0040B624; /* jbe: below or equal (unsigned <=) */

loc_0040B61D: ;
    ecx = 1;
    goto loc_0040B626;

loc_0040B624: ;
    ecx = 0; /* xor self */

loc_0040B626: ;
    edx = MEM32(esp + 0x1C);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    eax = eax + 0x20;
    ebx++;

loc_0040B640: ;
    edi = edi + 0x40;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(ebp + 0x10) = edi;
    if (CMP_B(ebx, edx)) goto loc_0040B500; /* jb: below (unsigned <) */

loc_0040B64E: ;
    ecx = MEM32(0x757D6C);
    eax = edx + edx + 1;
    edx = MEM32(0x84BDE0);
    ecx = ecx + 0x60;
    if (CMP_NE(eax, 1)) goto loc_0040B66D; /* jne: not equal / not zero */

loc_0040B666: ;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0040B66B: ;
    goto loc_0040B676;

loc_0040B66D: ;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0040B676: ;
    eax = MEM32(0x84BDEC);
    PUSH32(esp, 6);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053A930(); /* call 0x0053A930 */

loc_0040B684: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    if ((MEM32(esp + 0x20) != 0)) goto loc_0040B4E0; /* jne: not equal / not zero */

loc_0040B68E: ;
    edi = MEM32(esp + 0x18);

loc_0040B692: ;
    if (TEST_Z(edi, edi)) goto loc_0040BB14; /* je: equal / zero */

loc_0040B69A: ;
    ecx = ZX8(MEM8(0x84BDDC));
    ebx = MEM32(0x84BDE4);
    MEM32(esp + 0x1C) = ecx;
    ecx = ecx - edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x75EEFC));
    edi = edi << 5;
    edx = ecx;
    ecx = ecx >> 2;
    edi = edi + ebx;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x18);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040B832; /* jbe: below or equal (unsigned <=) */

loc_0040B6D7: ;
    goto loc_0040B6E0;

    /* nop */

loc_0040B6E0: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0xC);
    /* TODO: prefetcht0 byte ptr [esi + edx] */
    eax = esi;
    SET_LO8(ecx, MEM8(eax + 0xD));
    esi = esi + edx;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(ebp + 0x10);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0040B820; /* je: equal / zero */

loc_0040B6FC: ;
    xmm0 = MEMF(eax); /* movups */
    xmm2 = MEMF(ecx + 0x20); /* movaps */
    xmm1 = MEMF(ecx + 0x30); /* movaps */
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0xaa */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0x55 */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0 */
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    /* mulps: xmm3 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    /* mulps: xmm4 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(ecx); /* movaps */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    edx = esp + 0x40;
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    MEMF(edx) = xmm5; /* movaps */
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    edx = MEM32(eax + 0x2C);
    MEM32(ebx + 0xC) = edx;
    xmm1 = MEMF(eax + 0x20); /* movups */
    edx = esp + 0x2C;
    xmm0 = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1 *= xmm0 (packed 4xfloat) */
    edx = esp + 0x30;
    MEMF(edx) = xmm1; /* movaps */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(ebx + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(ebx + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(ebx + 0x18) = xmm0; /* movss */
    eax = ZX8(MEM8(eax + 0xC));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    MEMF(ebx + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x28) = edx;
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
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm0 = MEMF(0x648D24); /* movss */
    /* comiss xmm0, MEMF(esp + 0x24) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x24))) goto loc_0040B808; /* jbe: below or equal (unsigned <=) */

loc_0040B801: ;
    eax = 1;
    goto loc_0040B80A;

loc_0040B808: ;
    eax = 0; /* xor self */

loc_0040B80A: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x10); /* addss */
    MEMF(ebx + 0x10) = xmm1; /* movss */
    ebx = ebx + 0x20;
    edi++;

loc_0040B820: ;
    eax = MEM32(esp + 0x18);
    ecx = ecx + 0x40;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(ebp + 0x10) = ecx;
    if (CMP_B(edi, eax)) goto loc_0040B6E0; /* jb: below (unsigned <) */

loc_0040B832: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x757D6C);
    edx = MEM32(0x84BDE0);
    eax = eax + eax + 1;
    ecx = ecx + 0x60;
    if (CMP_NE(eax, 1)) goto loc_0040BAFD; /* jne: not equal / not zero */

loc_0040B852: ;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0040B857: ;
    goto loc_0040BB06;

loc_0040B85C: ;
    if (CMP_BE(eax & eax, 0)) goto loc_0040B9BC; /* jbe: below or equal (unsigned <=) */

loc_0040B864: ;
    MEM32(esp + 0x20) = eax;
    goto loc_0040B870;

    /* nop */

loc_0040B870: ;
    ebx = ZX8(MEM8(0x84BDDC));
    eax = MEM32(0x84BDE4);
    edi = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_0040B978; /* jbe: below or equal (unsigned <=) */

loc_0040B886: ;
    edx = MEM32(ebp + 8);
    ecx = esi;
    esi = esi + MEM32(edx + 0xC);
    SET_LO8(edx, MEM8(ecx + 0xD));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [esi] */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0040B970; /* je: equal / zero */

loc_0040B89C: ;
    xmm0 = MEMF(ecx + 0x2C); /* movss */
    edx = MEM32(ecx);
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0xC) = edx;
    xmm1 = MEMF(ecx + 0x20); /* movups */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    edx = esp + 0x2C;
    xmm0 = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1 *= xmm0 (packed 4xfloat) */
    edx = esp + 0x30;
    MEMF(edx) = xmm1; /* movaps */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    ecx = ZX8(MEM8(ecx + 0xC));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x28) = edx;
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
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm0 = MEMF(0x648D24); /* movss */
    /* comiss xmm0, MEMF(esp + 0x24) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x24))) goto loc_0040B958; /* jbe: below or equal (unsigned <=) */

loc_0040B951: ;
    ecx = 1;
    goto loc_0040B95A;

loc_0040B958: ;
    ecx = 0; /* xor self */

loc_0040B95A: ;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    eax = eax + 0x20;
    edi++;

loc_0040B970: ;
    if (CMP_B(edi, ebx)) goto loc_0040B886; /* jb: below (unsigned <) */

loc_0040B978: ;
    ecx = MEM32(0x757D6C);
    edx = MEM32(0x84BDE0);
    eax = ebx + ebx + 1;
    ecx = ecx + 0x60;
    if (CMP_NE(eax, 1)) goto loc_0040B997; /* jne: not equal / not zero */

loc_0040B990: ;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0040B995: ;
    goto loc_0040B9A0;

loc_0040B997: ;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0040B9A0: ;
    eax = MEM32(0x84BDEC);
    PUSH32(esp, 6);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053A930(); /* call 0x0053A930 */

loc_0040B9AE: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    if ((MEM32(esp + 0x20) != 0)) goto loc_0040B870; /* jne: not equal / not zero */

loc_0040B9B8: ;
    edi = MEM32(esp + 0x18);

loc_0040B9BC: ;
    if (TEST_Z(edi, edi)) goto loc_0040BB14; /* je: equal / zero */

loc_0040B9C4: ;
    ecx = ZX8(MEM8(0x84BDDC));
    ebx = MEM32(0x84BDE4);
    MEM32(esp + 0x1C) = ecx;
    ecx = ecx - edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x75EEFC));
    edx = ecx;
    edi = edi << 5;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edi + ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0040B832; /* jbe: below or equal (unsigned <=) */

loc_0040BA01: ;
    edx = MEM32(ebp + 8);
    edi = MEM32(edx + 0xC);
    /* TODO: prefetcht0 byte ptr [esi + edi] */
    eax = esi;
    SET_LO8(edx, MEM8(eax + 0xD));
    esi = esi + edi;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0040BAEE; /* je: equal / zero */

loc_0040BA1A: ;
    xmm0 = MEMF(eax + 0x2C); /* movss */
    edx = MEM32(eax);
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    MEM32(ebx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ebx + 8) = edx;
    edx = MEM32(eax + 0x2C);
    MEM32(ebx + 0xC) = edx;
    xmm1 = MEMF(eax + 0x20); /* movups */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    edx = esp + 0x2C;
    xmm0 = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1 *= xmm0 (packed 4xfloat) */
    edx = esp + 0x30;
    MEMF(edx) = xmm1; /* movaps */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(ebx + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(ebx + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(ebx + 0x18) = xmm0; /* movss */
    eax = ZX8(MEM8(eax + 0xC));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    MEMF(ebx + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x28) = edx;
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
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm0 = MEMF(0x648D24); /* movss */
    /* comiss xmm0, MEMF(esp + 0x24) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x24))) goto loc_0040BAD6; /* jbe: below or equal (unsigned <=) */

loc_0040BACF: ;
    eax = 1;
    goto loc_0040BAD8;

loc_0040BAD6: ;
    eax = 0; /* xor self */

loc_0040BAD8: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x10); /* addss */
    MEMF(ebx + 0x10) = xmm1; /* movss */
    ebx = ebx + 0x20;
    ecx++;

loc_0040BAEE: ;
    if (CMP_B(ecx, MEM32(esp + 0x18))) goto loc_0040BA01; /* jb: below (unsigned <) */

loc_0040BAF8: ;
    goto loc_0040B832;

loc_0040BAFD: ;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0040BB06: ;
    eax = MEM32(0x84BDEC);
    ecx = 0; /* xor self */
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0053A930(); /* call 0x0053A930 */

loc_0040BB14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0040BB20
 * Original: 0x0040BB20 - 0x0040BC25 (261 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040BB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0040BB20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(0x81B7C0);
    edx = MEM32(ebx + 0x5C);
    PUSH32(esp, edi);
    esi = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ecx | 0x80000000u;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003EC430(); /* call 0x003EC430 */

loc_0040BB4E: ;
    eax = MEM32(esp + 0x24);
    edi = MEM32(eax);
    eax = MEM32(0x84BDBC);
    esp = esp + 0xC;
    if (CMP_EQ(edi, eax)) goto loc_0040BB6C; /* je: equal / zero */

loc_0040BB60: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0040BB66: ;
    MEM32(0x84BDBC) = edi;

loc_0040BB6C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(ebx + 0x7C);
    MEM32(0x757D6C) = ecx;
    if (TEST_Z(esi, esi)) { sub_0040BC25(); return; } /* je: equal / zero */

loc_0040BB7D: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0040BB8F: ;
    ecx = esp + 0xB0;
    edx = esp + 0x70;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = edx;
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
    eax = MEM32(ebx + 0xC);
    SET_LO8(ecx, MEM8(0x547548));
    eax = eax + 0x60;
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_0040BC0F; /* jne: not equal / not zero */

loc_0040BBFB: ;
    edi = eax;
    edi = edi << 4;
    ecx = 0xC;
    esi = edx;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0040BC0F: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x74;
    ecx = eax;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0040BC1C: ;
    MEM8(0x84BDC1) = 0;
    g_seh_ebp = ebp; sub_0040BC6B(); return; /* tail jmp 0x0040BC6B */

}

/**
 * sub_0040BE60
 * Original: 0x0040BE60 - 0x0040C2A4 (1092 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040BE60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040BE60: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    eax = MEM32(0x84BDE0);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(eax, esi)) goto loc_0040BE86; /* je: equal / zero */

loc_0040BE76: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E4), _icall_esp); /* indirect call */
    }

loc_0040BE7D: ;
    esp = esp + 4;
    MEM32(0x84BDE0) = esi;

loc_0040BE86: ;
    eax = MEM32(0x84BDE8);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM8(0x84BDDC) = 0;
    MEM32(0x84BDEC) = esi;
    if (CMP_EQ(eax, esi)) goto loc_0040BEA8; /* je: equal / zero */

loc_0040BE9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0040BEA2: ;
    MEM32(0x84BDE8) = esi;

loc_0040BEA8: ;
    (void)0; /* cmp ebx, 0x19 - flags set for next jcc */
    SET_LO8(eax, LO8(ebx));
    if (CMP_L(ebx, 0x19)) goto loc_0040BEB1; /* jl: less (signed <) */

loc_0040BEAF: ;
    SET_LO8(eax, 0x19);

loc_0040BEB1: ;
    MEM8(0x84BDDC) = LO8(eax);
    eax = ZX8(LO8(eax));
    eax++;
    eax = eax << 5;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E0), _icall_esp); /* indirect call */
    }

loc_0040BEC4: ;
    xmm0 = MEMF(0x649138); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ebp = edi + 1;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edi);
    MEM32(0x84BDE0) = eax;
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    eax = eax + 0x10;
    MEM32(0x84BDE4) = eax;
    eax = ZX8(MEM8(0x84BDDC));
    ebp = ebp << 1;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ebx = ebp + ebp * 2;
    ebx = ebx << 2;
    edx = ecx + eax * 2 + -2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(0x84BDEC) = edx;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E0), _icall_esp); /* indirect call */
    }

loc_0040BF2C: ;
    esi = eax;
    esp = esp + 8;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0040C033; /* jle: less or equal (signed <=) */

loc_0040BF3D: ;
    xmm2 = MEMF(0x648D88); /* movss */
    xmm3 = MEMF(0x648DE0); /* movss */
    xmm4 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    goto loc_0040BF60;

    /* nop */

loc_0040BF60: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 / xmm4; /* divss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax++;
    /* fld st(0) */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* FPU: fsin  */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 / xmm4; /* divss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x2C) = eax;
    edx = 0; /* xor self */
    eax = ecx + ecx * 2;
    MEM32(esp + 0x14) = edx;
    eax = esi + eax * 4;
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* FPU: fcos  */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x24); /* movss */
    /* FPU: fcos  */
    goto loc_0040BFD0;

    /* nop */
    edi = edi;

loc_0040BFD0: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    eax = eax + 0xC;
    MEMF(eax + -8) = xmm0; /* movss */
    ecx++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx++;
    eax = eax + 0xC;
    edx++;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    /* fld st(0) */
    /* FPU: fcos  */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -24) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fsin  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -16) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + -8) = xmm1; /* movss */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x14) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(edx, edi)) goto loc_0040BFD0; /* jle: less or equal (signed <=) */

loc_0040C023: ;
    eax = MEM32(esp + 0x2C);
    /* fstp st(0) */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    /* fstp st(0) */
    if (CMP_L(eax, edi)) goto loc_0040BF60; /* jl: less (signed <) */

loc_0040C033: ;
    eax = MEM32(0x84BDEC);
    eax = eax + eax * 2;
    PUSH32(esp, 0x64800000);
    eax = eax << 2;
    PUSH32(esp, 0xC);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0040C04E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0040C084; /* je: equal / zero */

loc_0040C054: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0xB2800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0040C063: ;
    if (TEST_NZ(eax, eax)) goto loc_0040C076; /* jne: not equal / not zero */

loc_0040C067: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0040C072: ;
    edi = 0; /* xor self */
    goto loc_0040C084;

loc_0040C076: ;
    eax = eax & 0xFFFFFFF;
    MEM32(edi) = 0x1000001;
    MEM32(edi + 4) = eax;

loc_0040C084: ;
    edx = MEM32(0x5499E8);
    ecx = edx;
    MEM32(0x84BDE8) = edi;
    eax = MEM32(ecx);
    (void)0; /* cmp eax, MEM32(ecx + 4) - flags set for next jcc */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_B(eax, MEM32(ecx + 4))) goto loc_0040C0B6; /* jb: below (unsigned <) */

loc_0040C09D: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0040C0AC: ;
    edx = MEM32(0x5499E8);
    ecx = MEM32(esp + 0x2C);

loc_0040C0B6: ;
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ecx) = eax;
    if (TEST_Z(edx, edx)) goto loc_0040C0EA; /* je: equal / zero */

loc_0040C0CC: ;
    (void)0; /* test MEM32(edi), 0x780000 - flags set for next jcc */
    eax = MEM32(edi + 8);
    if (TEST_Z(MEM32(edi), 0x780000)) goto loc_0040C0DE; /* je: equal / zero */

loc_0040C0D7: ;
    eax = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    goto loc_0040C0E4;

loc_0040C0DE: ;
    if (TEST_Z(eax, eax)) goto loc_0040C0EA; /* je: equal / zero */

loc_0040C0E2: ;
    PUSH32(esp, 0x10);

loc_0040C0E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_0040C0EA: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(0x84BDDC));
    SET_LO8(edx, 0); /* xor self */
    eax = eax | 0x80000000u;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(edx);
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_0040C292; /* jbe: below or equal (unsigned <=) */

loc_0040C106: ;
    xmm3 = MEMF(0x649130); /* movss */
    xmm5 = MEMF(0x64A72C); /* movss */
    ecx = ZX8(LO8(ecx));
    ecx--;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x14) = 0;

loc_0040C126: ;
    if (CMP_LE(ebp & ebp, 0)) goto loc_0040C1CD; /* jle: less or equal (signed <=) */

loc_0040C12E: ;
    SET_LO16(edi, ZX8(LO8(edx)));
    ecx = esi + 4;
    edx = ebp;
    edi = edi + edi + 1;
    goto loc_0040C140;

    /* nop */

loc_0040C140: ;
    xmm0 = MEMF(ecx + -4); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    ebx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax) = LO16(ebx);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    ebx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 2) = LO16(ebx);
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    ebx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 4) = LO16(ebx);
    xmm1 = MEMF(ecx + -4); /* movss */
    PUSH32(esp, 0); sub_003E3A70(); /* call 0x003E3A70 */

loc_0040C17B: ;
    xmm4 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 * xmm3; /* mulss */
    ebx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 6) = LO16(ebx);
    xmm1 = MEMF(ecx); /* movss */
    PUSH32(esp, 0); sub_003E3A70(); /* call 0x003E3A70 */

loc_0040C1A0: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 * xmm3; /* mulss */
    ebx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 8) = LO16(ebx);
    MEM16(eax + 0xA) = LO16(edi);
    eax = eax + 0xC;
    ecx = ecx + 0xC;
    edx--;
    if ((edx != 0)) goto loc_0040C140; /* jne: not equal / not zero */

loc_0040C1C5: ;
    ebx = MEM32(esp + 0x30);
    SET_LO8(edx, MEM8(esp + 0x13));

loc_0040C1CD: ;
    ecx = MEM32(esp + 0x2C);
    if (CMP_GE(MEM32(esp + 0x14), ecx)) goto loc_0040C275; /* jge: greater or equal (signed >=) */

loc_0040C1DB: ;
    xmm0 = MEMF(ebx + esi + -12); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax) = LO16(ecx);
    xmm0 = MEMF(ebx + esi + -8); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 2) = LO16(ecx);
    xmm0 = MEMF(ebx + esi + -4); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 4) = LO16(ecx);
    ecx = 1;
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, ZX8(LO8(edx)));
    eax = eax + 0xC;
    ecx = ecx << 1;
    edi = ecx + 1;
    MEM16(eax + -2) = LO16(edi);
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    edi = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax) = LO16(edi);
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    edi = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 2) = LO16(edi);
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    edi = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 4) = LO16(edi);
    edi = 1;
    ecx = ecx + 3;
    MEM16(eax + 6) = LO16(edi);
    MEM16(eax + 8) = LO16(edi);
    MEM16(eax + 0xA) = LO16(ecx);
    eax = eax + 0xC;

loc_0040C275: ;
    edi = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(0x84BDDC));
    SET_LO8(edx, LO8(edx) + 1);
    edi++;
    (void)0; /* cmp LO8(edx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(edx);
    MEM32(esp + 0x14) = edi;
    if (CMP_B(LO8(edx), LO8(ecx))) goto loc_0040C126; /* jb: below (unsigned <) */

loc_0040C292: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E4), _icall_esp); /* indirect call */
    }

loc_0040C299: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040C2B0
 * Original: 0x0040C2B0 - 0x0040C344 (148 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040C2B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040C2B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BDF0);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0040C2D6; /* jne: not equal / not zero */

loc_0040C2C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x84BDF0);
    PUSH32(esp, 0x757E98);
    PUSH32(esp, 0x757D94);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_0040C2D6: ;
    eax = MEM32(0x84BDF4);
    if (TEST_NZ(eax, eax)) goto loc_0040C2F5; /* jne: not equal / not zero */

loc_0040C2DF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x84BDF4);
    PUSH32(esp, 0x758000);
    PUSH32(esp, 0x757D70);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_0040C2F5: ;
    eax = MEM32(0x84BDF8);
    if (TEST_NZ(eax, eax)) goto loc_0040C314; /* jne: not equal / not zero */

loc_0040C2FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x84BDF8);
    PUSH32(esp, 0x758178);
    PUSH32(esp, 0x757D84);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_0040C314: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040C323: ;
    MEM32(0x549AE4) = 1;
    ecx = MEM32(esi + 0x54);
    eax = ZX8(MEM8(ecx));
    eax = eax - 0;
    if ((eax == 0)) { sub_0040C344(); return; } /* je: equal / zero */

loc_0040C338: ;
    eax--;
    if ((eax != 0)) { sub_0040C344(); return; } /* jne: not equal / not zero */

loc_0040C33B: ;
    SET_LO8(eax, MEM8(ecx + 4));
    MEM8(esp + 8) = LO8(eax);
    g_seh_ebp = ebp; sub_0040C349(); return; /* tail jmp 0x0040C349 */

}

/**
 * sub_0040C460
 * Original: 0x0040C460 - 0x0040C481 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040C460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040C460: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi) = 0;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 0xC) = 0;
    if (TEST_NZ(eax, eax)) { sub_0040C481(); return; } /* jne: not equal / not zero */

loc_0040C47C: ;
    MEM32(edi + 8) = eax;
    g_seh_ebp = ebp; sub_0040C49A(); return; /* tail jmp 0x0040C49A */

}

/**
 * sub_0040C4C0
 * Original: 0x0040C4C0 - 0x0040C5B4 (244 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040C4C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0040C4C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0040C4D8: ;
    if (TEST_Z(edx, edx)) goto loc_0040C4EA; /* je: equal / zero */

loc_0040C4DC: ;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0040C4EA: ;
    eax = esp + 0x10;
    ecx = esp + 0x50;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
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
    edx = esp + 0x50;
    ecx = 0x60;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0040C550: ;
    eax = MEM32(0x84BDF0);
    if (CMP_EQ(eax, MEM32(0x84BDBC))) goto loc_0040C56F; /* je: equal / zero */

loc_0040C55D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0040C563: ;
    edx = MEM32(0x84BDF0);
    MEM32(0x84BDBC) = edx;

loc_0040C56F: ;
    if (CMP_EQ(MEM32(0x84BDB8), 0x757DA8)) goto loc_0040C5B0; /* je: equal / zero */

loc_0040C57B: ;
    ecx = MEM32(0x5499E8);
    eax = ecx + 0x924;
    MEM32(eax) = 1;
    MEM32(ecx + 0x928) = 0;
    MEM32(ecx + 0x92C) = 0x757DA8;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0040C5A6: ;
    MEM32(0x84BDB8) = 0x757DA8;

loc_0040C5B0: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0040C5C0
 * Original: 0x0040C5C0 - 0x0040C70D (333 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040C5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0040C5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x8C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0040C5D9: ;
    if (TEST_Z(edx, edx)) goto loc_0040C5EB; /* je: equal / zero */

loc_0040C5DD: ;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0040C5EB: ;
    eax = esp + 0x10;
    ecx = esp + 0x50;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
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
    edx = esp + 0x50;
    ecx = 0x60;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0040C651: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_0040C6AF; /* je: equal / zero */

loc_0040C658: ;
    edx = MEM32(0x84BDF4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0040C664: ;
    ecx = MEM32(0x5499E8);
    eax = ecx + 0x924;
    esi = 0x757F10;
    MEM32(eax) = 1;
    MEM32(ecx + 0x928) = 0;
    MEM32(ecx + 0x92C) = esi;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0040C690: ;
    eax = MEM32(0x84BDF4);
    if (CMP_EQ(eax, MEM32(0x84BDBC))) goto loc_0040C6D3; /* je: equal / zero */

loc_0040C69D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0040C6A3: ;
    eax = MEM32(0x84BDF4);
    MEM32(0x84BDBC) = eax;
    goto loc_0040C6D3;

loc_0040C6AF: ;
    eax = MEM32(0x84BDF8);
    if (CMP_EQ(eax, MEM32(0x84BDBC))) goto loc_0040C6CE; /* je: equal / zero */

loc_0040C6BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0040C6C2: ;
    ecx = MEM32(0x84BDF8);
    MEM32(0x84BDBC) = ecx;

loc_0040C6CE: ;
    esi = 0x757DA8;

loc_0040C6D3: ;
    if (CMP_EQ(MEM32(0x84BDB8), esi)) goto loc_0040C708; /* je: equal / zero */

loc_0040C6DB: ;
    ecx = MEM32(0x5499E8);
    MEM32(ecx + 0x92C) = esi;
    eax = ecx + 0x924;
    MEM32(ecx + 0x928) = 0;
    MEM32(eax) = 1;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0040C702: ;
    MEM32(0x84BDB8) = esi;

loc_0040C708: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0040C710
 * Original: 0x0040C710 - 0x0040C75B (75 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040C710(void)
{
    int _flags = 0; /* fallback flag var */

loc_0040C710: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x28);
    MEM32(0x84BDB8) = esi;
    PUSH32(esp, 0); sub_003F5200(); /* call 0x003F5200 */

loc_0040C71F: ;
    eax = MEM32(edi + 0x30);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0040C72C; /* je: equal / zero */

loc_0040C727: ;
    MEM32(0x84B854) = eax;

loc_0040C72C: ;
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, 0); sub_003F3E10(); /* call 0x003F3E10 */

loc_0040C734: ;
    ecx = MEM32(0x5499F0);
    ecx = ecx | 0x3000;
    PUSH32(esp, 0x200);
    MEM32(0x5499F0) = ecx;
    MEM32(0x549B94) = 1;
    PUSH32(esp, 0); sub_00536FD0(); /* call 0x00536FD0 */

loc_0040C75A: ;
    esp += 4; return; /* ret */

}
