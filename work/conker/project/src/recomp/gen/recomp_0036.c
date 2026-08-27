/**
 * Burnout 3 - Recompiled code chunk 36
 * Functions: 250 (0x003174C0 - 0x00330350)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003174C0
 * Original: 0x003174C0 - 0x0031776F (687 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003174C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003174C0: ;
    esp = esp - 8;
    eax = MEM32(0x7FFE60);
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FA20C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 1;
    if (CMP_EQ(eax, ebp)) goto loc_003174EA; /* je: equal / zero */

loc_003174E0: ;
    eax = eax - ebx;
    if (((int32_t)eax < 0)) eax = ebp; /* cmovs */
    MEM32(0x7FFE60) = eax;

loc_003174EA: ;
    esi = MEM32(0x84A5F8);
    SET_LO8(eax, MEM8(esi + 0x1B5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00317539; /* je: equal / zero */

loc_003174FA: ;
    ecx = ZX16(MEM16(esi + 0x1B8));
    if (CMP_LE(ecx, 0x5A)) goto loc_00317539; /* jle: less or equal (signed <=) */

loc_00317506: ;
    eax = 0xB60B60B7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 9);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, MEMF(0x649278) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649278))) goto loc_0031752B; /* jbe: below or equal (unsigned <=) */

loc_00317526: ;
    eax = 9;

loc_0031752B: ;
    ecx = 9;
    ecx = ecx - eax;
    eax = ecx + ecx * 8;
    if (TEST_NZ(eax, eax)) goto loc_0031753D; /* jne: not equal / not zero */

loc_00317539: ;
    MEM32(esp + 0x10) = ebp;

loc_0031753D: ;
    ecx = ZX16(MEM16(esi + 0x1B8));
    xmm2 = MEMF(0x648D14); /* movss */
    edi = MEM32(0x7FA1F8);
    xmm3 = MEMF(0x648CFC); /* movss */
    xmm4 = MEMF(0x649854); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    xmm0 = xmm0 * MEMF(0x649850); /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEM32(esp + 0x14) = ebp;
    esi = 0x7FFE74;

loc_00317586: ;
    if (CMP_NE(MEM8(esi + 1), 2)) goto loc_003175A3; /* jne: not equal / not zero */

loc_0031758C: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + -2);
    eax = eax - ebx;
    if (CMP_G(eax, ebp)) goto loc_0031759F; /* jg: greater (signed >) */

loc_00317596: ;
    eax = 6;
    MEM8(esi + 1) = 3;

loc_0031759F: ;
    MEM16(esi + -2) = LO16(eax);

loc_003175A3: ;
    eax = ZX8(MEM8(esi + 1));
    if (CMP_A(eax, 3)) goto loc_0031774F; /* ja: above (unsigned >) */

loc_003175B0: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x317770); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003175B7u) goto loc_003175B7;
    if (_jt == 0x0031764Cu) goto loc_0031764C;
    if (_jt == 0x00317673u) goto loc_00317673;
    if (_jt == 0x00317745u) goto loc_00317745;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003175B7: ;
    if (CMP_EQ(MEM32(esp + 0x10), ebp)) goto loc_0031774F; /* je: equal / zero */

loc_003175C1: ;
    eax = MEM32(esp + 0x14);
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    if (CMP_G(eax, edx)) goto loc_0031774F; /* jg: greater (signed >) */

loc_003175D8: ;
    if (CMP_NE(MEM32(0x7FFE60), ebp)) goto loc_0031774F; /* jne: not equal / not zero */

loc_003175E4: ;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, 0x23 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(edi, 0x23)) ? 1 : 0); /* setne */
    MEM32(0x7FFE60) = 5;
    MEM8(esi + 1) = 1;
    MEM16(esi + -12) = 0x1FE;
    MEM16(esi + -6) = LO16(ebp);
    MEM8(esi) = 0;
    eax--;
    eax = eax & 0x46;
    eax = eax + 0xD2;
    MEM16(esi + -10) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00317619: ;
    MEM8(esi + 2) = LO8(eax);
    MEM16(esi + -4) = 0x500;
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_00317627: ;
    xmm0 = xmm0 * xmm4; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx >> 8);
    edx = 0x1FE;
    edx = edx - ecx;
    MEM16(esi + -8) = LO16(edx);
    MEM8(esi + 3) = 0;
    MEM16(esi + -2) = 0x64;
    goto loc_0031774F;

loc_0031764C: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + -6);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    eax = eax + ecx;
    if (CMP_L(eax, 0x666)) goto loc_0031766A; /* jl: less (signed <) */

loc_00317661: ;
    MEM8(esi + 1) = 2;
    eax = 0x666;

loc_0031766A: ;
    MEM16(esi + -6) = LO16(eax);
    goto loc_0031774F;

loc_00317673: ;
    eax = ZX8(MEM8(esi));
    if (CMP_GE(eax, 0x20)) goto loc_00317689; /* jge: greater or equal (signed >=) */

loc_0031767B: ;
    eax = eax + ebx;
    if (CMP_LE(eax, 0x20)) goto loc_00317687; /* jle: less or equal (signed <=) */

loc_00317682: ;
    eax = 0x20;

loc_00317687: ;
    MEM8(esi) = LO8(eax);

loc_00317689: ;
    edx = ZX8(MEM8(esi));
    eax = (uint32_t)(int32_t)SMEM16(esi + -6);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    edx = (uint32_t)((int32_t)edx >> 4);
    MEM16(esi + -10) = MEM16(esi + -10) - LO16(edx);
    if (CMP_LE(ebx, ebp)) goto loc_003176AC; /* jle: less or equal (signed <=) */

loc_0031769E: ;
    ecx = ebx;

loc_003176A0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x104);
    eax = (uint32_t)((int32_t)eax >> 8);
    ecx--;
    if ((ecx != 0)) goto loc_003176A0; /* jne: not equal / not zero */

loc_003176AC: ;
    MEM16(esi + -6) = LO16(eax);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, 5);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ecx, MEM8(esi + 2));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    SET_LO16(eax, LO16(eax) + MEM16(esi + -4));
    MEM8(esi + 2) = LO8(ecx);
    SET_LO8(ecx, LO8(ecx) - 0x40);
    (void)0; /* cmp LO8(ecx), 0x40 - flags set for next jcc */
    MEM16(esi + -4) = LO16(eax);
    if (CMP_BE(LO8(ecx), 0x40)) goto loc_00317714; /* jbe: below or equal (unsigned <=) */

loc_003176D3: ;
    if (CMP_BE(LO8(ecx), 0x80)) goto loc_003176FE; /* jbe: below or equal (unsigned <=) */

loc_003176D8: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    edx = ZX8(LO8(ecx));
    if (CMP_BE(LO8(ecx), 0xC0)) goto loc_003176F0; /* jbe: below or equal (unsigned <=) */

loc_003176E0: ;
    edx = edx << 2;
    ecx = 0x743490;
    ecx = ecx - edx;
    xmm0 = MEMF(ecx); /* movss */
    goto loc_00317720;

loc_003176F0: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x742E90); /* subss */
    goto loc_00317720;

loc_003176FE: ;
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 2;
    edx = 0x743290;
    edx = edx - ecx;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(edx); /* subss */
    goto loc_00317720;

loc_00317714: ;
    ecx = ZX8(LO8(ecx));
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_00317720: ;
    edx = SX16(LO16(eax));
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5 = xmm5 * xmm0; /* mulss */
    eax = (int32_t)xmm5; /* cvttss2si */
    eax = (uint32_t)((int32_t)eax >> 8);
    SET_LO16(eax, LO16(eax) + MEM16(esi + -8));
    SET_LO8(ecx, 0xA);
    MEM16(esi + -12) = LO16(eax);
    SET_LO8(eax, LO8(ebx));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(esi + 3) = MEM8(esi + 3) + LO8(eax);
    goto loc_0031774F;

loc_00317745: ;
    if (CMP_NE(MEM16(esi + -2), LO16(ebp))) goto loc_0031774F; /* jne: not equal / not zero */

loc_0031774B: ;
    MEM8(esi + 1) = 0;

loc_0031774F: ;
    edx = MEM32(esp + 0x14);
    edx++;
    esi = esi + 0x10;
    (void)0; /* cmp esi, 0x7FFF94 - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(esi, 0x7FFF94)) goto loc_00317586; /* jl: less (signed <) */

loc_00317767: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00317900
 * Original: 0x00317900 - 0x00317F40 (1600 bytes, 368 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00317900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    eax = MEM32(0x84A664);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_00317939; /* jne: not equal / not zero */

loc_00317918: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E9377F);
    PUSH32(esp, 0); sub_00206470(); /* call 0x00206470 */

loc_00317929: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84A664) = eax;
    if (TEST_Z(eax, eax)) goto loc_00317F39; /* je: equal / zero */

loc_00317939: ;
    eax = ZX16(MEM16(0x7FFF90));
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ebp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    if (TEST_Z(eax, eax)) goto loc_003179B7; /* je: equal / zero */

loc_00317959: ;
    xmm0 = MEMF(0x64B188); /* movss */
    ecx = MEM32(0x84A5F8);
    edx = ZX16(MEM16(ecx + 0x3AE));
    PUSH32(esp, 0xBEB2B8C2u);
    PUSH32(esp, 0xBEB2B8C2u);
    PUSH32(esp, 0x3F5F66F3);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A66C); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B184); /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0xD0;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(esp + 0x44) = edx;
    PUSH32(esp, eax);
    goto loc_00317A34;

loc_003179B7: ;
    xmm0 = MEMF(0x7FFFB8); /* movss */
    xmm1 = MEMF(0x7FFFB4); /* movss */
    xmm1 = xmm1 - MEMF(0x64908C); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x7FFFBC); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x7FFFC0); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(0x7FFFAC); /* movss */
    xmm1 = xmm1 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0xBEB2B8C2u);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);

loc_00317A34: ;
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00317A39: ;
    ecx = MEM32(esp + 0x48);
    eax = 6;
    esp = esp + 0x24;
    if (CMP_LE(ecx, eax)) goto loc_00317A4D; /* jle: less or equal (signed <=) */

loc_00317A49: ;
    MEM32(esp + 0x24) = eax;

loc_00317A4D: ;
    xmm1 = MEMF(0x648E64); /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 - MEMF(0x648EC0); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x6490B4); /* addss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x648F38); /* subss */
    eax = esp + 0xFC;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_00317AB3: ;
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00317AC6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D8C); /* movss */
    eax = esp + 0x18;
    ebx = eax;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00317B00: ;
    edx = MEM32(0x84A13C);
    edx = edx + 0x100;
    eax = ebx;
    ecx = esp + 0x2C;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x14) = ecx;
    eax = MEM32(esp + 0x28);
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
    edx = MEM32(0x84A13C);
    edx = edx + 0x100;
    eax = esp + 0x44;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    eax = 0x75EB3C;
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
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_00317BC0: ;
    edx = MEM32(0x85D5B4);
    xmm0 = MEMF(0x648E64); /* movss */
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    MEM32(edx + 0xE0) = ebx;
    ecx = 0x24;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx + 0x338) = 1;
    eax = MEM32(0x85D5B4);
    esi = MEM32(0x84A13C);
    esi = esi + 0x40;
    edi = eax + 0xA0;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(eax + 0x334);
    ecx = MEM32(0x7F9F60);
    MEM32(eax + 0x330) = ecx;
    esi++;
    MEM32(eax + 0x334) = esi;
    eax = MEM32(0x85D5B4);
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x60); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEM8(0x8493C8) = 1;
    MEMF(eax + 0x60) = xmm1; /* movss */
    esi = MEM32(0x85D5B4);
    xmm0 = MEMF(0x649228); /* movss */
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0012E100(); /* call 0x0012E100 */

loc_00317C72: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    xmm0 = MEMF(0x648E94); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x58) = eax;
    eax = esp + 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x68) = edx;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130430(); /* call 0x00130430 */

loc_00317CA5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x75EB38); /* movss */
    xmm3 = MEMF(0x75EB34); /* movss */
    xmm4 = MEMF(0x648D18); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    ecx = MEM32(esp + 0x28);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x2C); /* subss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    edx = MEM32(esp + 0x2C);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    eax = MEM32(esp + 0x30);
    xmm1 = MEMF(0x75EB30); /* movss */
    esp = esp + 0x10;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM8(0x819FE8) = 1;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = eax;
    if ((xmm0 <= xmm1)) goto loc_00317D27; /* jbe: below or equal (unsigned <=) */

loc_00317D22: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00317D2F;

loc_00317D27: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_00317D2F; /* jbe: below or equal (unsigned <=) */

loc_00317D2C: ;
    xmm1 = xmm4; /* movaps */

loc_00317D2F: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00317D39; /* jbe: below or equal (unsigned <=) */

loc_00317D34: ;
    xmm3 = xmm0; /* movaps */
    goto loc_00317D41;

loc_00317D39: ;
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 <= xmm4)) goto loc_00317D41; /* jbe: below or equal (unsigned <=) */

loc_00317D3E: ;
    xmm3 = xmm4; /* movaps */

loc_00317D41: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00317D4B; /* jbe: below or equal (unsigned <=) */

loc_00317D46: ;
    xmm2 = xmm0; /* movaps */
    goto loc_00317D53;

loc_00317D4B: ;
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 <= xmm4)) goto loc_00317D53; /* jbe: below or equal (unsigned <=) */

loc_00317D50: ;
    xmm2 = xmm4; /* movaps */

loc_00317D53: ;
    xmm0 = MEMF(0x648E14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    edi = 1;
    ecx = esp + 0x60;
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm3; /* movss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEM32(esp + 0x68) = edi;
    PUSH32(esp, 0); sub_003EA070(); /* call 0x003EA070 */

loc_00317D99: ;
    esi = MEM32(0x549ADC);
    edx = 0x207;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00317DAE: ;
    edx = 0x75EB20;
    ecx = 0xB5;
    MEM32(0x549ADC) = 0x207;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_00317DC7: ;
    PUSH32(esp, 0x5A0350);
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_00317DD1: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5A0350);
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(ebp + 8), ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(ebp + 8), ebx)) ? 1 : 0); /* setne */
    eax = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00317F40(); /* call 0x00317F40 */

loc_00317DF0: ;
    MEM32(0x81B7C0) = MEM32(0x81B7C0) & 0x80000000u;
    esp = esp + 0x18;
    edx = esi;
    ecx = 0x40354;
    MEM32(0x819FE0) = ebx;
    MEM32(0x819FE4) = ebx;
    MEM32(0x81BE44) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00317E1B: ;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549ADC) = esi;
    MEM8(0x819FE8) = LO8(ebx);
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00317E36: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x549B20) = 0x8006;
    if (CMP_EQ(eax, esi)) goto loc_00317E66; /* je: equal / zero */

loc_00317E4E: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00317E5A: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_00317E66: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_00317E8C; /* je: equal / zero */

loc_00317E74: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00317E80: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_00317E8C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00317E92: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00317EAE; /* jb: below (unsigned <) */

loc_00317E9F: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00317EAE: ;
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
    if (CMP_NE(eax, 2)) goto loc_00317F0B; /* jne: not equal / not zero */

loc_00317EDC: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00317EE1: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00317EE6: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00317EFC; /* jb: below (unsigned <) */

loc_00317EED: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00317EFC: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00317F04: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00317F09: ;
    MEM32(esi) = eax;

loc_00317F0B: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00317F17: ;
    PUSH32(esp, 0x901);
    MEM32(0x549AE4) = edi;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00317F27: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00317F33: ;
    MEM32(0x549AF8) = ebx;

loc_00317F39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00317F40
 * Original: 0x00317F40 - 0x00318717 (2007 bytes, 444 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317F40(void)
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

loc_00317F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    eax = MEM32(ebp + 0x10);
    xmm7 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(eax & eax, 0)) goto loc_003183F2; /* jle: less or equal (signed <=) */

loc_00317F71: ;
    eax = 0x59E3E2;
    MEM32(esp + 0x18) = eax;
    goto loc_00317F90;

loc_00317F7C: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_00317F90: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00317FA6; /* jne: not equal / not zero */

loc_00317F97: ;
    xmm0 = MEMF(esi * 4 + 0x7FFFC4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_00317FA6: ;
    xmm6 = 0.0f; /* xorps self = zero */
    ecx = MEM32(0x5499F0);
    edx = (uint32_t)(int32_t)SMEM16(eax);
    ecx = ecx | 0x2000;
    MEM32(0x5499F0) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + -2);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = esp + 0x90;
    MEMF(esp + 0x84) = xmm1; /* movss */
    PUSH32(esp, ecx);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = ecx;
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, eax);
    MEM32(0x549B68) = 0;
    MEMF(esp + 0xD4) = xmm6; /* movss */
    MEMF(esp + 0xD0) = xmm6; /* movss */
    MEMF(esp + 0xCC) = xmm6; /* movss */
    MEMF(esp + 0xC8) = xmm6; /* movss */
    MEMF(esp + 0xC0) = xmm6; /* movss */
    MEMF(esp + 0xBC) = xmm6; /* movss */
    MEMF(esp + 0xB8) = xmm6; /* movss */
    MEMF(esp + 0xB4) = xmm6; /* movss */
    MEMF(esp + 0xAC) = xmm6; /* movss */
    MEMF(esp + 0xA8) = xmm6; /* movss */
    MEMF(esp + 0xA4) = xmm6; /* movss */
    MEMF(esp + 0xA0) = xmm6; /* movss */
    MEMF(esp + 0xD8) = xmm7; /* movss */
    MEMF(esp + 0x88) = xmm6; /* movss */
    MEMF(esp + 0x80) = xmm6; /* movss */
    MEMF(esp + 0x7C) = xmm6; /* movss */
    MEMF(esp + 0x78) = xmm6; /* movss */
    MEMF(esp + 0x74) = xmm6; /* movss */
    MEMF(esp + 0x6C) = xmm6; /* movss */
    MEMF(esp + 0x68) = xmm6; /* movss */
    MEMF(esp + 0x64) = xmm6; /* movss */
    MEMF(esp + 0x60) = xmm6; /* movss */
    MEMF(esp + 0x98) = xmm7; /* movss */
    MEMF(esp + 0x84) = xmm7; /* movss */
    MEMF(esp + 0x70) = xmm7; /* movss */
    MEMF(esp + 0x5C) = xmm7; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0031810A: ;
    PUSH32(esp, 0x40490FDA);
    SET_LO8(eax, 0x79);
    ecx = edx;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00318118: ;
    esp = esp + 4;
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00318130: ;
    ecx = MEM32(ebp + 8);
    ebx = esi + esi;
    esi = (uint32_t)(int32_t)SMEM8(0x7FA230);
    esi = esi + ebx;
    PUSH32(esp, ecx);
    esi = esi << 6;
    edx = esp + 0x94;
    PUSH32(esp, edx);
    esi = esi + 0x7FFFE0;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00318157: ;
    eax = MEM32(0x84B80C);
    eax = eax + eax * 8;
    MEM8(0x7FFFDC) = 1;
    eax = eax << 4;
    eax = eax + 0x81DE70;
    if (TEST_Z(esi, esi)) goto loc_0031817E; /* je: equal / zero */

loc_00318172: ;
    edi = eax + 0x40;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_003181CE;

loc_0031817E: ;
    MEMF(eax + 0x78) = xmm6; /* movss */
    MEMF(eax + 0x74) = xmm6; /* movss */
    MEMF(eax + 0x70) = xmm6; /* movss */
    MEMF(eax + 0x6C) = xmm6; /* movss */
    MEMF(eax + 0x64) = xmm6; /* movss */
    MEMF(eax + 0x60) = xmm6; /* movss */
    MEMF(eax + 0x5C) = xmm6; /* movss */
    MEMF(eax + 0x58) = xmm6; /* movss */
    MEMF(eax + 0x50) = xmm6; /* movss */
    MEMF(eax + 0x4C) = xmm6; /* movss */
    MEMF(eax + 0x48) = xmm6; /* movss */
    MEMF(eax + 0x44) = xmm6; /* movss */
    MEMF(eax + 0x7C) = xmm7; /* movss */
    MEMF(eax + 0x68) = xmm7; /* movss */
    MEMF(eax + 0x54) = xmm7; /* movss */
    MEMF(eax + 0x40) = xmm7; /* movss */

loc_003181CE: ;
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(0x81BD70) = 0x3EE100;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_003181E0: ;
    edi = MEM32(0x5499F0);
    edi = edi | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x5499F0) = edi;
    MEM32(0x549B68) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00318204: ;
    edx = MEM32(0x7FA020);
    eax = MEM32(0x84A664);
    MEM32(0x549AE8) = esi;
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    esi = MEM32(eax + 0x10);
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00318234: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = edi;
    ecx = MEM32(edi + 0x14);
    MEM32(0x81BE58) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(0x81BE5C) = edx;
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_00318262; /* je: equal / zero */

loc_0031825D: ;
    MEM32(0x84B854) = eax;

loc_00318262: ;
    eax = MEM32(esi + -16);
    PUSH32(esp, 4);
    ecx = esi;
    MEM32(0x81BE64) = eax;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_0031827D: ;
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_0031828B: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_00318299: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = ecx + ebx;
    ecx = ecx << 6;
    PUSH32(esp, eax);
    ecx = ecx + 0x7FFFE0;
    MEM32(0x81BE48) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003182C6: ;
    eax = MEM32(0x84B80C);
    edi = eax + eax * 8;
    edi = edi << 4;
    esi = edx;
    edi = edi + 0x81DEB0;
    ecx = 0x10;
    PUSH32(esp, 1);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x81BD70) = 0x3F0270;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_003182F1: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00318300: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00318319: ;
    edx = 0xFF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00318332: ;
    edx = MEM32(0x7FA020);
    eax = MEM32(0x84A664);
    MEM32(0x549B1C) = 0xFF;
    esi = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    edi = MEM32(eax + 0x10);
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00318366: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    ecx = MEM32(esi + 0x14);
    MEM32(0x81BE58) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = edx;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00318394; /* je: equal / zero */

loc_0031838F: ;
    MEM32(0x84B854) = eax;

loc_00318394: ;
    eax = MEM32(edi + -16);
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(0x81BE64) = eax;
    MEM32(0x81BE50) = 0;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_003183AF: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_003183BD: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_003183CB: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0x10);
    xmm7 = MEMF(0x648D14); /* movss */
    eax++;
    edx = edx + 6;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(eax, ecx)) goto loc_00317F7C; /* jl: less (signed <) */

loc_003183F2: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00318710; /* jne: not equal / not zero */

loc_003183FD: ;
    eax = MEM32(0x84A660);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(eax, eax)) goto loc_00318710; /* je: equal / zero */

loc_0031840E: ;
    MEMF(esp + 0x44) = xmm7; /* movss */
    goto loc_00318430;

loc_00318416: ;
    xmm7 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x18);
    goto loc_00318430;

    /* nop */
    goto loc_00318430;

    /* nop */

loc_00318430: ;
    xmm0 = MEMF(eax + 0x88); /* movss */
    edx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    xmm1 = MEMF(eax + 0xA4); /* movss */
    xmm5 = MEMF(eax + 0x8C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x84); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0xA0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = edx << 6;
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x9C); /* movss */
    ecx = edx + eax;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    eax = MEM32(esp + 0x34);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fsincos  */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    /* FPU: fsincos  */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fincstp  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: ffree st(1) */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm6 = MEMF(esp + 0x4C); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm4 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(ecx + 0x28) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x30); /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(ecx + 0x24) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    MEMF(ecx + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(ecx + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    PUSH32(esp, edx);
    MEMF(ecx + 0x10) = xmm6; /* movss */
    MEMF(ecx + 0x20) = xmm1; /* movss */
    MEMF(ecx + 0x3C) = xmm7; /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    MEMF(ecx + 0x38) = xmm5; /* movss */
    MEM32(0x81BE48) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003185BE: ;
    eax = MEM32(0x84B80C);
    edi = eax + eax * 8;
    edi = edi << 4;
    edi = edi + 0x81DEB0;
    ecx = 0x10;
    esi = esp + 0x50;
    PUSH32(esp, 0x5A0350);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_003185E4: ;
    esp = esp + 4;
    MEM32(0x81BD70) = 0x3EE100;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_003185F9: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549B68) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00318615: ;
    eax = MEM32(0x84A664);
    MEM32(0x549AE8) = ebx;
    ecx = MEM32(eax + 8);
    edi = MEM32(ecx + 0x10);
    ecx = MEM32(0x7FA020);
    esi = MEM32(eax + 0xC);
    ecx++;
    MEM32(0x7FA020) = ecx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00318645: ;
    PUSH32(esp, ebx);
    ebx = 4;
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_003ED380(); /* call 0x003ED380 */

loc_0031865A: ;
    esp = esp + 4;
    PUSH32(esp, 1);
    MEM32(0x81BD70) = 0x3F0270;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0031866E: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0031867D: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00318696: ;
    edx = 0xFF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003186AF: ;
    eax = MEM32(0x84A664);
    MEM32(0x549B1C) = 0xFF;
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);
    eax = MEM32(0x7FA020);
    edi = MEM32(edx + 0x10);
    eax++;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x7FA020) = eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003186E1: ;
    PUSH32(esp, 0);
    ebx = 1;
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_003ED380(); /* call 0x003ED380 */

loc_003186F7: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x80);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00318416; /* jne: not equal / not zero */

loc_00318710: ;
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
 * sub_00318720
 * Original: 0x00318720 - 0x00318988 (616 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318720: ;
    eax = MEM32(0x84A5F8);
    ecx = ZX16(MEM16(eax + 0x1B8));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649850); /* mulss */
    esp = esp - 0x18;
    /* comiss xmm0, MEMF(0x64ABB8) - sets EFLAGS */
    if ((xmm0 >= MEMF(0x64ABB8))) goto loc_00318984; /* jae: above or equal (unsigned >=) */

loc_00318748: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x1E) = 0xFF;
    MEM8(esp + 0x21) = 0;
    MEM8(0x80175A) = 0xFF;
    MEM8(0x801759) = 0xFF;
    MEM8(0x801758) = 0xFF;
    ebx = 1;
    ebp = 0x7FFE75;

loc_00318775: ;
    SET_LO8(eax, MEM8(ebp));
    if (CMP_EQ(LO8(eax), 1)) goto loc_00318784; /* je: equal / zero */

loc_0031877C: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_00318898; /* jne: not equal / not zero */

loc_00318784: ;
    if (TEST_Z(ebx, ebx)) goto loc_003187A4; /* je: equal / zero */

loc_00318788: ;
    ecx = esp + 0x14;
    eax = 0; /* xor self */
    esi = 0x58DAFC;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00356490(); /* call 0x00356490 */

loc_0031879A: ;
    eax = 0x801860;
    PUSH32(esp, 0); sub_00356550(); /* call 0x00356550 */

loc_003187A4: ;
    SET_LO8(eax, MEM8(ebp + 2));
    SET_LO8(eax, LO8(eax) - 0x40);
    if (CMP_BE(LO8(eax), 0x40)) goto loc_003187EF; /* jbe: below or equal (unsigned <=) */

loc_003187AD: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_003187D9; /* jbe: below or equal (unsigned <=) */

loc_003187B1: ;
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_003187C8; /* jbe: below or equal (unsigned <=) */

loc_003187B5: ;
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    eax = 0x743490;
    eax = eax - edx;
    xmm0 = MEMF(eax); /* movss */
    goto loc_003187FB;

loc_003187C8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(eax));
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x742E90); /* subss */
    goto loc_003187FB;

loc_003187D9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = ZX8(LO8(eax));
    edx = edx << 2;
    eax = 0x743290;
    eax = eax - edx;
    xmm0 = xmm0 - MEMF(eax); /* subss */
    goto loc_003187FB;

loc_003187EF: ;
    ecx = ZX8(LO8(eax));
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_003187FB: ;
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    edx = (uint32_t)(int32_t)SMEM16(ebp + -7);
    xmm2 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(0x649580); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ebp + -11);
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    eax = (int32_t)xmm4; /* cvttss2si */
    xmm2 = xmm2 - xmm0; /* subss */
    MEM16(esp + 0x1A) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -13);
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp - 8;
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    esi = esp + 0x1C;
    edx = esp + 0x20;
    MEM16(esp + 0x28) = LO16(ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003567E0(); /* call 0x003567E0 */

loc_0031887D: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00318898; /* je: equal / zero */

loc_00318888: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00356AA0(); /* call 0x00356AA0 */

loc_00318895: ;
    esp = esp + 4;

loc_00318898: ;
    ebp = ebp + 0x10;
    if (CMP_L(ebp, 0x7FFF95)) goto loc_00318775; /* jl: less (signed <) */

loc_003188A7: ;
    esi = 0x7FFE68;
    SET_LO8(ebx, 3);
    edi = edi;

loc_003188B0: ;
    if (CMP_NE(MEM8(esi + 0xD), LO8(ebx))) goto loc_00318971; /* jne: not equal / not zero */

loc_003188B9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, 0xC8);
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xAA);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x43C80000);
    PUSH32(esp, 0x41800000);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    eax = esp + 0x54;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0xC);
    edi = 0x5A02CC;
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_00318934: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_00318962; /* je: equal / zero */

loc_0031893B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x104) = 0;
    MEM8(eax + 0x100) = 0x80;
    MEM8(eax + 0x101) = 0x80;
    MEM8(eax + 0x102) = 0x80;
    MEMF(eax + 0x48) = xmm0; /* movss */

loc_00318962: ;
    eax = MEM32(0x7FA20C);
    eax = (uint32_t)(-(int32_t)eax);
    if (((int32_t)eax >= 0)) goto loc_0031896D; /* jns: not sign (positive) */

loc_0031896B: ;
    eax = 0; /* xor self */

loc_0031896D: ;
    MEM16(esi + 0xA) = LO16(eax);

loc_00318971: ;
    esi = esi + 0x10;
    if (CMP_L(esi, 0x7FFF88)) goto loc_003188B0; /* jl: less (signed <) */

loc_00318980: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00318984: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00318990
 * Original: 0x00318990 - 0x00318CB0 (800 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318990(void)
{
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

loc_00318990: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    SET_LO8(eax, MEM8(edi + 0x1B5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00318CA6; /* je: equal / zero */

loc_003189A6: ;
    esi = ZX16(MEM16(edi + 0x1B8));
    if (CMP_LE(esi, 0x5A)) goto loc_00318CA6; /* jle: less or equal (signed <=) */

loc_003189B6: ;
    SET_LO8(eax, MEM8(0x7FFE56));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00318A1C; /* jne: not equal / not zero */

loc_003189C2: ;
    xmm0 = MEMF(0x649418); /* movss */
    MEMF(0x7FFE34) = xmm0; /* movss */
    xmm0 = MEMF(0x649414); /* movss */
    MEM8(0x7FFE56) = 0xFF;
    MEMF(0x7FFE30) = xmm2; /* movss */
    MEMF(0x7FFE3C) = xmm2; /* movss */
    MEMF(0x7FFE40) = xmm0; /* movss */
    MEMF(0x7FFE44) = xmm2; /* movss */
    MEMF(0x7FFE48) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00318A0E: ;
    eax = eax & 0x3F;
    eax = eax + 0x3C;
    MEM16(0x7FFE54) = LO16(eax);
    goto loc_00318A22;

loc_00318A1C: ;
    SET_LO16(eax, MEM16(0x7FFE54));

loc_00318A22: ;
    ecx = ZX16(MEM16(edi + 0x1B8));
    xmm6 = MEMF(0x648D14); /* movss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3 = xmm3 * MEMF(0x649410); /* mulss */
    /* comiss xmm3, xmm6 - sets EFLAGS */
    MEMF(0x7FFE38) = xmm3; /* movss */
    if ((xmm3 <= xmm6)) goto loc_00318A55; /* jbe: below or equal (unsigned <=) */

loc_00318A4A: ;
    xmm3 = xmm6; /* movaps */
    MEMF(0x7FFE38) = xmm3; /* movss */

loc_00318A55: ;
    (void)0; /* cmp esi, 0x10E0 - flags set for next jcc */
    xmm7 = MEMF(0x648CE0); /* movss */
    edx = MEM32(0x7FA20C);
    xmm5 = MEMF(0x648E64); /* movss */
    if (CMP_G(esi, 0x10E0)) goto loc_00318ADA; /* jg: greater (signed >) */

loc_00318A73: ;
    xmm4 = MEMF(0x7FFE34); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(0x7FFE30); /* addss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(0x7FFE30) = xmm1; /* movss */
    if ((xmm2 <= xmm0)) goto loc_00318AA2; /* jbe: below or equal (unsigned <=) */

loc_00318A9F: ;
    xmm0 = xmm2; /* movaps */

loc_00318AA2: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_00318ABB; /* jae: above or equal (unsigned >=) */

loc_00318AA7: ;
    xmm3 = xmm3 + xmm5; /* addss */
    xmm0 = xmm3; /* movaps */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_00318AB6; /* jbe: below or equal (unsigned <=) */

loc_00318AB3: ;
    xmm0 = xmm6; /* movaps */

loc_00318AB6: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00318ADA; /* jb: below (unsigned <) */

loc_00318ABB: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(0x7FFE30) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(0x7FFE34) = xmm0; /* movss */

loc_00318ADA: ;
    if (CMP_GE(esi, 0x5A0)) goto loc_00318AFE; /* jge: greater or equal (signed >=) */

loc_00318AE2: ;
    ecx = MEM32(0x69DB40);
    MEM16(0x7FFE52) = LO16(ecx);
    MEM16(0x7FFE50) = LO16(ecx);
    ecx = MEM32(0x69DADC);
    goto loc_00318B36;

loc_00318AFE: ;
    (void)0; /* cmp esi, 0xB40 - flags set for next jcc */
    ecx = MEM32(0x69DB54);
    MEM16(0x7FFE50) = LO16(ecx);
    MEM16(0x7FFE52) = LO16(ecx);
    if (CMP_GE(esi, 0xB40)) goto loc_00318B22; /* jge: greater or equal (signed >=) */

loc_00318B1A: ;
    ecx = MEM32(0x69DADC);
    goto loc_00318B36;

loc_00318B22: ;
    (void)0; /* cmp esi, 0xE10 - flags set for next jcc */
    ecx = MEM32(0x69DB18);
    if (CMP_L(esi, 0xE10)) goto loc_00318B36; /* jl: less (signed <) */

loc_00318B30: ;
    ecx = MEM32(0x69DB04);

loc_00318B36: ;
    (void)0; /* cmp esi, 0x10E0 - flags set for next jcc */
    MEM16(0x7FFE4E) = LO16(ecx);
    MEM16(0x7FFE4C) = LO16(ecx);
    if (CMP_LE(esi, 0x10E0)) goto loc_00318B59; /* jle: less or equal (signed <=) */

loc_00318B4C: ;
    xmm3 = xmm2; /* movaps */
    MEMF(0x7FFE48) = xmm3; /* movss */
    goto loc_00318BD2;

loc_00318B59: ;
    if (CMP_LE(esi, 0xE10)) goto loc_00318B87; /* jle: less or equal (signed <=) */

loc_00318B61: ;
    fp_push(MEMF(0x7FFE48)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x649228)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00318BCA; /* jbe: below or equal (unsigned <=) */

loc_00318B75: ;
    xmm3 = MEMF(0x649228); /* movss */
    MEMF(0x7FFE48) = xmm3; /* movss */
    goto loc_00318BD2;

loc_00318B87: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00318BCA; /* je: equal / zero */

loc_00318B8C: ;
    eax = SX16(LO16(eax));
    eax = eax - edx;
    if (CMP_G(eax & eax, 0)) goto loc_00318BBA; /* jg: greater (signed >) */

loc_00318B95: ;
    eax = 0; /* xor self */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(0x7FFE48) = xmm3; /* movss */
    MEMF(0x7FFE44) = xmm0; /* movss */
    MEM16(0x7FFE54) = LO16(eax);
    goto loc_00318BD2;

loc_00318BBA: ;
    xmm3 = MEMF(0x7FFE48); /* movss */
    MEM16(0x7FFE54) = LO16(eax);
    goto loc_00318BD2;

loc_00318BCA: ;
    xmm3 = MEMF(0x7FFE48); /* movss */

loc_00318BD2: ;
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x7FFE44); /* addss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEMF(0x7FFE44) = xmm0; /* movss */
    if ((xmm0 <= xmm7)) goto loc_00318BFF; /* jbe: below or equal (unsigned <=) */

loc_00318BF5: ;
    xmm1 = MEMF(0x648D18); /* movss */
    goto loc_00318C14;

loc_00318BFF: ;
    xmm5 = MEMF(0x648D74); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00318C26; /* jbe: below or equal (unsigned <=) */

loc_00318C0C: ;
    xmm1 = MEMF(0x6493F4); /* movss */

loc_00318C14: ;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(0x7FFE44) = xmm1; /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    goto loc_00318C5A;

loc_00318C26: ;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_00318C62; /* jne: not equal / not zero */

loc_00318C2B: ;
    if (CMP_GE(esi, 0xE10)) goto loc_00318C62; /* jge: greater or equal (signed >=) */

loc_00318C33: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_00318C62; /* jb: below (unsigned <) */

loc_00318C38: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00318C62; /* jbe: below or equal (unsigned <=) */

loc_00318C41: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00318C46: ;
    eax = eax & 0x3F;
    eax = eax + 0x3C;
    MEM16(0x7FFE54) = LO16(eax);
    MEMF(0x7FFE44) = xmm2; /* movss */

loc_00318C5A: ;
    MEMF(0x7FFE48) = xmm2; /* movss */

loc_00318C62: ;
    if (CMP_L(esi, 0x10E0)) goto loc_00318CAD; /* jl: less (signed <) */

loc_00318C6A: ;
    xmm1 = MEMF(0x7FFE3C); /* movss */
    /* comiss xmm1, MEMF(0x64940C) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x64940C))) goto loc_00318CAD; /* jbe: below or equal (unsigned <=) */

loc_00318C7B: ;
    xmm0 = MEMF(0x7FFE40); /* movss */
    xmm4 = xmm4 * MEMF(0x648E14); /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(0x7FFE40) = xmm0; /* movss */
    POP32(esp, edi);
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(0x7FFE3C) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00318CA6: ;
    MEM8(0x7FFE56) = 0;

loc_00318CAD: ;
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
 * sub_00318CB0
 * Original: 0x00318CB0 - 0x00318D4C (156 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318CB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00318CB0: ;
    SET_LO8(eax, MEM8(0x7FFE56));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00318D4B; /* je: equal / zero */

loc_00318CBD: ;
    xmm0 = MEMF(0x7FFE44); /* movss */
    xmm0 = xmm0 - MEMF(0x64912C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(0x7FA230);
    PUSH32(esp, 0xC4D08000u);
    PUSH32(esp, 0x43180000);
    PUSH32(esp, 0x4426C000);
    PUSH32(esp, 0x4081999A);
    PUSH32(esp, 0x4081999A);
    PUSH32(esp, 0x4081999A);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    xmm0 = xmm0 - MEMF(0x7FFE3C); /* subss */
    esi = esi << 6;
    esi = esi + 0x7FFDA0;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029C650(); /* call 0x0029C650 */

loc_00318D22: ;
    eax = MEM32(0x84A5F8);
    ecx = ZX16(MEM16(eax + 0x1B8));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649850); /* mulss */
    esp = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00315D50(); /* call 0x00315D50 */

loc_00318D47: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_00318D4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318D50
 * Original: 0x00318D50 - 0x00318D96 (70 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318D50: ;
    SET_LO8(eax, MEM8(0x863D11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x776154) = 3;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00318D96(); return; } /* je: equal / zero */

loc_00318D60: ;
    SET_LO8(eax, MEM8(0x862D90));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00318D72; /* jne: not equal / not zero */

loc_00318D69: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00318D96(); return; } /* je: equal / zero */

loc_00318D72: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm1 = xmm1 * MEMF(0x648D18); /* mulss */
    xmm0 = MEMF(0x776150); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    g_seh_ebp = ebp; sub_00318DB9(); return; /* tail jmp 0x00318DB9 */

}

/**
 * sub_00318DD0
 * Original: 0x00318DD0 - 0x00318DF5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318DD0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, MEM8(0x7FFF88));
    if (TEST_Z(eax, eax)) goto loc_00318DE9; /* je: equal / zero */

loc_00318DD9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00318DF4; /* jne: not equal / not zero */

loc_00318DDD: ;
    MEM8(0x7FFF88) = 1;
    g_seh_ebp = ebp; sub_00318E00(); return; /* tail jmp 0x00318E00 */

loc_00318DE9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00318DF4; /* je: equal / zero */

loc_00318DED: ;
    MEM8(0x7FFF88) = 0;

loc_00318DF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00318E00
 * Original: 0x00318E00 - 0x00318EC3 (195 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318E00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00318E00: ;
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, 2)) goto loc_00318E1A; /* je: equal / zero */

loc_00318E0B: ;
    if (CMP_EQ(eax, 0x42)) goto loc_00318E1A; /* je: equal / zero */

loc_00318E10: ;
    (void)0; /* cmp eax, 0x43 - flags set for next jcc */
    eax = 0xBA;
    if (CMP_NE(eax, 0x43)) goto loc_00318E1F; /* jne: not equal / not zero */

loc_00318E1A: ;
    eax = 0x295;

loc_00318E1F: ;
    esi = 0x84A674;
    PUSH32(esp, 0x7FFD98);
    PUSH32(esp, 0); sub_0010F700(); /* call 0x0010F700 */

loc_00318E2E: ;
    eax = MEM32(0x84A65C);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00318EC1; /* jne: not equal / not zero */

loc_00318E3E: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00318E4C; /* jne: not equal / not zero */

loc_00318E47: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00318E4C: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00318E9B; /* je: equal / zero */

loc_00318E73: ;
    if (CMP_B(MEM32(esi + 0x80), 0x80)) goto loc_00318E9B; /* jb: below (unsigned <) */

loc_00318E7F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00318E89: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00318E94: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00318EBB; /* jne: not equal / not zero */

loc_00318E9B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00318EAD: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00318EB8: ;
    esp = esp + 8;

loc_00318EBB: ;
    MEM32(0x84A65C) = eax;
    POP32(esp, edi);

loc_00318EC1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00318ED0
 * Original: 0x00318ED0 - 0x00318FF6 (294 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00318ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    xmm0 = MEMF(0x64A510); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A65C);
    eax = eax << 6;
    eax = eax + esi;
    PUSH32(esp, edi);
    edi = eax;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD2C); /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64B180); /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_00318F2B: ;
    eax = MEM32(0x84A13C);
    eax = eax + 0x40;
    ecx = esp + 0x10;
    esi = esp + 0x50;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_00318F40: ;
    ecx = MEM32(0x84A13C);
    xmm1 = MEMF(ecx); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00318FF6(); return; } /* jnp: not parity */

loc_00318F5A: ;
    xmm1 = MEMF(ecx + 0x14); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00318FF6(); return; } /* jnp: not parity */

loc_00318F6C: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm6 = MEMF(0x649BC8); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / MEMF(ecx); /* divss */
    xmm1 = xmm1 / MEMF(ecx + 0x14); /* divss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x50); /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x54); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x58); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x60); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x64); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x68); /* mulss */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    MEMF(esp + 0x50) = xmm5; /* movss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_0031901A(); return; /* tail jmp 0x0031901A */

}

/**
 * sub_003193A0
 * Original: 0x003193A0 - 0x003195A7 (519 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003193A0(void)
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

loc_003193A0: ;
    esp = esp - 0x18;
    edx = MEM32(0x84A5F8);
    fp_push(MEMF(ecx + 0x78)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm6 = MEMF(0x648EDC); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003195A3; /* ja: above (unsigned >) */

loc_003193FD: ;
    xmm4 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm2, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00319421; /* jnp: not parity */

loc_00319409: ;
    xmm1 = xmm1 / xmm2; /* divss */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0xC); /* mulss */
    xmm3 = xmm1; /* movaps */
    goto loc_0031942D;

loc_00319421: ;
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */

loc_0031942D: ;
    eax = ZX16(MEM16(edx + 0x170));
    MEM32(esp + 8) = eax;
    xmm5 = MEMF(0x648E5C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x10); /* movss */
    /* FPU: fcos  */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(ecx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(edx + 0x7C); /* subss */
    SET_LO8(ecx, MEM8(ecx + 0x57C));
    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm7; /* addss */
    xmm4 = xmm4 + MEMF(0x64994C); /* addss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(0x648E38); /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(LO8(ecx), 1)) goto loc_00319533; /* jne: not equal / not zero */

loc_003194DC: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x3F800000);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    esi = MEM32(esp + 0x24);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003585F0(); /* call 0x003585F0 */

loc_00319523: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    goto loc_0031958D;

loc_00319533: ;
    if (CMP_NE(LO8(ecx), 2)) goto loc_003195A1; /* jne: not equal / not zero */

loc_00319538: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 8);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x3F800000);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    esi = MEM32(esp + 0x24);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003585F0(); /* call 0x003585F0 */

loc_0031957F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_0031958D: ;
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003585F0(); /* call 0x003585F0 */

loc_0031959E: ;
    esp = esp + 0x40;

loc_003195A1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003195A3: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003195B0
 * Original: 0x003195B0 - 0x00319644 (148 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003195B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003195B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A678);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_003195D3; /* jne: not equal / not zero */

loc_003195BB: ;
    edi = 0x84A678;
    eax = 0x638C48;
    PUSH32(esp, 0); sub_00076060(); /* call 0x00076060 */

loc_003195CA: ;
    eax = MEM32(0x84A678);
    if (TEST_Z(eax, eax)) goto loc_00319641; /* je: equal / zero */

loc_003195D3: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_003195DD: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x42100000);
    PUSH32(esp, 0x43870000);
    PUSH32(esp, 0); sub_00357CF0(); /* call 0x00357CF0 */

loc_00319600: ;
    edi = 5;
    esp = esp + 0x18;
    edx = edi;
    PUSH32(esp, 0); sub_002E5B70(); /* call 0x002E5B70 */

loc_0031960F: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00319640; /* je: equal / zero */

loc_00319615: ;
    ecx = esi;
    PUSH32(esp, 0); sub_003193A0(); /* call 0x003193A0 */

loc_0031961C: ;
    ecx = MEM32(0x84A5F8);
    eax = esi + 0x6D0;
    ecx = ecx + 0x36800;
    if (CMP_AE(eax, ecx)) goto loc_00319640; /* jae: above or equal (unsigned >=) */

loc_00319632: ;
    if (CMP_EQ(MEM32(eax + 0x68), edi)) { sub_00319644(); return; } /* je: equal / zero */

loc_00319637: ;
    eax = eax + 0x6D0;
    if (CMP_B(eax, ecx)) goto loc_00319632; /* jb: below (unsigned <) */

loc_00319640: ;
    POP32(esp, esi);

loc_00319641: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00319650
 * Original: 0x00319650 - 0x00319748 (248 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319650(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;

loc_00319650: ;
    xmm0 = MEMF(0x648FA4); /* movss */
    MEMF(0x7FFFB8) = xmm0; /* movss */
    xmm0 = MEMF(0x649740); /* movss */
    MEMF(0x7FFFBC) = xmm0; /* movss */
    xmm0 = MEMF(0x64984C); /* movss */
    ecx = 0; /* xor self */
    MEMF(0x7FFFC0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x7FFFAC) = xmm0; /* movss */
    MEMF(0x7FFFB0) = xmm0; /* movss */
    MEMF(0x7FFFB4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(0x7FFF88) = LO8(ecx);
    MEM32(0x84A664) = ecx;
    MEM32(0x7FFF9C) = ecx;
    MEM32(0x84A660) = ecx;
    MEMF(0x7FFFC4) = xmm0; /* movss */
    MEMF(0x7FFFC8) = xmm0; /* movss */
    MEMF(0x7FFFCC) = xmm0; /* movss */
    MEMF(0x7FFFD0) = xmm0; /* movss */
    MEMF(0x7FFFD4) = xmm0; /* movss */
    MEMF(0x7FFFD8) = xmm0; /* movss */
    eax = 0x7FFE75;

loc_003196F2: ;
    MEM8(eax) = LO8(ecx);
    eax = eax + 0x10;
    if (CMP_L(eax, 0x7FFF95)) goto loc_003196F2; /* jl: less (signed <) */

loc_003196FE: ;
    xmm3 = MEMF(0x649430); /* movss */
    xmm0 = MEMF(0x649260); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(0x7FFE60) = ecx;
    eax = 0; /* xor self */
    PUSH32(esp, 0x3F800000);
    ecx = 0x30;
    edi = 0x7FFDA0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0x42726666);
    PUSH32(esp, 0x42480000);
    ebx = 0x7FFF94;
    eax = 0x8002E0;
    PUSH32(esp, 0); sub_0029C2D0(); /* call 0x0029C2D0 */

loc_00319742: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00319750
 * Original: 0x00319750 - 0x003197E9 (153 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319750: ;
    eax = MEM32(0x8003F4);
    if (TEST_NZ(eax, eax)) goto loc_003197E2; /* jne: not equal / not zero */

loc_0031975D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0031976B; /* jne: not equal / not zero */

loc_00319766: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0031976B: ;
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
    if (TEST_Z(esi, esi)) goto loc_003197BB; /* je: equal / zero */

loc_00319793: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C0)) goto loc_003197BB; /* jb: below (unsigned <) */

loc_0031979F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003197A9: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003197B4: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003197DB; /* jne: not equal / not zero */

loc_003197BB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003197CD: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003197D8: ;
    esp = esp + 8;

loc_003197DB: ;
    POP32(esp, edi);
    MEM32(0x8003F4) = eax;
    POP32(esp, esi);

loc_003197E2: ;
    edx = eax;
    g_seh_ebp = ebp; sub_003FA650(); return; /* tail jmp 0x003FA650 */

}

/**
 * sub_003197F0
 * Original: 0x003197F0 - 0x003198EB (251 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003197F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003197F0: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX16(MEM16(edi + 0x60));
    if (CMP_L(eax, ecx)) goto loc_0031980D; /* jl: less (signed <) */

loc_00319808: ;
    eax = 0x14;

loc_0031980D: ;
    SET_LO8(ebx, MEM8(0x7819D5));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    edx = eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00319860; /* je: equal / zero */

loc_00319824: ;
    if (TEST_NZ(esi, esi)) goto loc_00319847; /* jne: not equal / not zero */

loc_00319828: ;
    ecx = MEM32(edi + 0x568);
    eax = MEM32(ecx + 0x1F8);
    if (TEST_Z(eax, eax)) goto loc_00319856; /* je: equal / zero */

loc_00319838: ;
    if (CMP_NE(eax, 2)) goto loc_00319860; /* jne: not equal / not zero */

loc_0031983D: ;
    if (CMP_EQ(MEM32(ecx + 0xA0), ebp)) goto loc_00319860; /* je: equal / zero */

loc_00319845: ;
    goto loc_00319856;

loc_00319847: ;
    eax = MEM32(edi + 0x568);
    if (CMP_NE(MEM32(eax + 0x1F8), 2)) goto loc_00319860; /* jne: not equal / not zero */

loc_00319856: ;
    MEM32(edx + 0x84) = 1;

loc_00319860: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(MEM32(edi + 0xA4), ecx)) goto loc_003198AE; /* je: equal / zero */

loc_0031986C: ;
    eax = MEM32(edi + 0x568);
    eax = MEM32(eax + 0x1F8);
    if (CMP_EQ(eax, 1)) goto loc_00319882; /* je: equal / zero */

loc_0031987D: ;
    if (CMP_NE(eax, 3)) goto loc_003198AE; /* jne: not equal / not zero */

loc_00319882: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(edx + 0x84) = 1;
    if (TEST_NZ(esi, esi)) goto loc_0031989E; /* jne: not equal / not zero */

loc_00319890: ;
    ecx = MEM32(edi + 0x568);
    MEM32(ecx + 0x1F8) = esi;
    goto loc_003198AE;

loc_0031989E: ;
    eax = MEM32(edi + 0x568);
    MEM32(eax + 0x1F8) = 2;

loc_003198AE: ;
    SET_LO8(eax, MEM8(edi + 0x250));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003198C5; /* je: equal / zero */

loc_003198BD: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_003198EB(); return; } /* jne: not equal / not zero */

loc_003198C1: ;
    SET_LO8(ecx, 1);
    goto loc_003198C9;

loc_003198C5: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_003198EB(); return; } /* jne: not equal / not zero */

loc_003198C9: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) { sub_003198EB(); return; } /* je: equal / zero */

loc_003198D3: ;
    eax = MEM32(eax + 4);
    xmm1 = MEMF(eax + 0x29C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003198EB(); return; } /* jnp: not parity */

loc_003198E7: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_003198ED(); return; /* tail jmp 0x003198ED */

}

/**
 * sub_00319B10
 * Original: 0x00319B10 - 0x00319B28 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00319B10: ;
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00319B21: ;
    if (TEST_NZ(eax, eax)) { sub_00319B28(); return; } /* jne: not equal / not zero */

loc_00319B25: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00319B50
 * Original: 0x00319B50 - 0x00319BB6 (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00319B50: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM16(0x74A0A0), 0xFFFF)) goto loc_00319BB4; /* jne: not equal / not zero */

loc_00319B5C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_00319B60: ;
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    ebx = MEM32(esi * 4 + 0x74A08C);
    eax = MEM32(edx + 0x10);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00319B84: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00319B98; /* je: equal / zero */

loc_00319B8B: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00319B98; /* je: equal / zero */

loc_00319B93: ;
    eax = MEM32(eax + 8);
    goto loc_00319B9A;

loc_00319B98: ;
    eax = 0; /* xor self */

loc_00319B9A: ;
    MEM16(esi * 2 + 0x74A0A0) = LO16(eax);
    esi++;
    if (CMP_B(esi, 5)) goto loc_00319B60; /* jb: below (unsigned <) */

loc_00319BA8: ;
    MEM16(esi * 2 + 0x74A0A0) = 0xFFFF;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00319BB4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00319BC0
 * Original: 0x00319BC0 - 0x00319CAC (236 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319BC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(ebp, ebp)) goto loc_00319CA8; /* je: equal / zero */

loc_00319BD1: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0xA4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002B17A0(); /* call 0x002B17A0 */

loc_00319BDE: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00319CA7; /* jne: not equal / not zero */

loc_00319BE9: ;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_NE(edi, ecx)) goto loc_00319C02; /* jne: not equal / not zero */

loc_00319BF9: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00319CA7; /* jne: not equal / not zero */

loc_00319C02: ;
    eax = MEM32(eax + 0x478);
    if (CMP_NE(edi, eax)) goto loc_00319C15; /* jne: not equal / not zero */

loc_00319C0C: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00319CA7; /* jne: not equal / not zero */

loc_00319C15: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_002D6390(); /* call 0x002D6390 */

loc_00319C1C: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00319CA7; /* jne: not equal / not zero */

loc_00319C24: ;
    edx = MEM32(esp + 0x18);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_002B1810(); /* call 0x002B1810 */

loc_00319C36: ;
    ecx = MEM32(ebp + 0x4C);
    edx = MEM32(esi + 0x30);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edi = ebx;
    PUSH32(esp, 0); sub_003197F0(); /* call 0x003197F0 */

loc_00319C50: ;
    SET_LO8(ecx, MEM8(esp + 0x34));
    xmm0 = MEMF(0x74A084); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    esp = esp + 0x18;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esi) = eax;
    MEMF(esi + 8) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00319CA7; /* je: equal / zero */

loc_00319C70: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00319CA7; /* je: equal / zero */

loc_00319C75: ;
    PUSH32(esp, 0); sub_00319B50(); /* call 0x00319B50 */

loc_00319C7A: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    PUSH32(esp, 0x74A0A0);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    PUSH32(esp, 0); sub_002F1BD0(); /* call 0x002F1BD0 */

loc_00319C9E: ;
    esp = esp + 0x28;
    MEM32(esi) = 0;

loc_00319CA7: ;
    POP32(esp, edi);

loc_00319CA8: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00319CB0
 * Original: 0x00319CB0 - 0x00319D9B (235 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319CB0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx + 0x1C);
    eax = MEM32(eax);
    eax--;
    if (CMP_A(eax, 0x31)) goto loc_00319D99; /* ja: above (unsigned >) */

loc_00319CC2: ;
    edx = ZX8(MEM8(eax + 0x319E6C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x319E4C)); return; /* indirect tail jmp */

    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00319D0C; /* je: equal / zero */

loc_00319CD9: ;
    eax = MEM32(ecx + 8);
    eax = eax - 2;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    if ((eax == 0)) goto loc_00319CF1; /* je: equal / zero */

loc_00319CE7: ;
    PUSH32(esp, 0x8E5);
    g_seh_ebp = ebp; sub_00319E37(); return; /* tail jmp 0x00319E37 */

loc_00319CF1: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xD28);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00319D0A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00319D0C: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD29);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00319D2D: ;
    ecx = MEM32(0x7FA1F8);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 0x36 - flags set for next jcc */
    ecx = MEM32(0x847024);
    ebx = MEM32(ecx + 0x40);
    SET_LO8(eax, (CMP_EQ(ecx, 0x36)) ? 1 : 0); /* sete */
    eax--;
    eax = eax & 0xFFFFFF8Cu;
    eax = eax + 0xC00;
    edi = eax;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00319D54: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00319D97; /* je: equal / zero */

loc_00319D58: ;
    edi = edi & 0x7FFF;
    if (((int32_t)edi <= 0)) goto loc_00319D97; /* jle: less or equal (signed <=) */

loc_00319D60: ;
    if (CMP_G(edi, 0xDDA)) goto loc_00319D97; /* jg: greater (signed >) */

loc_00319D68: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00319D97; /* je: equal / zero */

loc_00319D6F: ;
    if (CMP_EQ(eax, 5)) goto loc_00319D97; /* je: equal / zero */

loc_00319D74: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00319D79: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_G(edx, 0x1E)) goto loc_00319D97; /* jg: greater (signed >) */

loc_00319D86: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00025310(); /* call 0x00025310 */

loc_00319D97: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00319D99: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00319EA0
 * Original: 0x00319EA0 - 0x00319F42 (162 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00319EA0: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = eax + ecx + 0x14;
    eax = MEM32(edx + 0x68);
    eax = eax - 0;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if ((eax == 0)) goto loc_00319EC5; /* je: equal / zero */

loc_00319EBD: ;
    eax--;
    if ((eax != 0)) goto loc_00319EDB; /* jne: not equal / not zero */

loc_00319EC0: ;
    ecx = edx + 0x1C;
    goto loc_00319ECB;

loc_00319EC5: ;
    ecx = ecx + 0x29C;

loc_00319ECB: ;
    if (TEST_Z(ecx, ecx)) goto loc_00319EDB; /* je: equal / zero */

loc_00319ECF: ;
    edx = MEM32(ecx + 0x14);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00319F3E; /* jne: not equal / not zero */

loc_00319EDB: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), 0)) goto loc_00319F3E; /* je: equal / zero */

loc_00319EE5: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0xBC);
    SET_LO8(edx, 0); /* xor self */
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(ecx, 2)) goto loc_00319F05; /* jne: not equal / not zero */

loc_00319EF9: ;
    SET_LO8(ebx, MEM8(eax + 0x38C));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00319F05; /* je: equal / zero */

loc_00319F03: ;
    SET_LO8(edx, 1);

loc_00319F05: ;
    SET_LO8(ebx, MEM8(esp + 0x14));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00319F13; /* jne: not equal / not zero */

loc_00319F0E: ;
    if (CMP_EQ(ecx, 2)) goto loc_00319F3E; /* je: equal / zero */

loc_00319F13: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM8(eax + 0x38C) = 0;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00319F42(); return; } /* jne: not equal / not zero */

loc_00319F1E: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00319F3E; /* jne: not equal / not zero */

loc_00319F26: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(edi + 4);
    ecx = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FC20(); /* call 0x0032FC20 */

loc_00319F3A: ;
    if (CMP_EQ(LO8(eax), 1)) { sub_00319F42(); return; } /* je: equal / zero */

loc_00319F3E: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A010
 * Original: 0x0031A010 - 0x0031A037 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A010: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_0031A032; /* je: equal / zero */

loc_0031A021: ;
    eax = eax + 4;
    edx = 3;
    PUSH32(esp, 0); sub_00036930(); /* call 0x00036930 */

loc_0031A02E: ;
    if (TEST_NZ(eax, eax)) { sub_0031A037(); return; } /* jne: not equal / not zero */

loc_0031A032: ;
    ebp = ebp | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0031A043(); return; /* tail jmp 0x0031A043 */

}

/**
 * sub_0031A0D0
 * Original: 0x0031A0D0 - 0x0031A20F (319 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A0D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A0D0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(ebx + 0xA4);
    eax = MEM32(ecx + 0x474);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (CMP_NE(edx, eax)) goto loc_0031A0FA; /* jne: not equal / not zero */

loc_0031A0F1: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0031A209; /* jne: not equal / not zero */

loc_0031A0FA: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0031A109; /* je: equal / zero */

loc_0031A100: ;
    if (CMP_EQ(MEM32(ebp), eax)) goto loc_0031A208; /* je: equal / zero */

loc_0031A109: ;
    eax = MEM32(ecx + 0x478);
    if (CMP_NE(edx, eax)) goto loc_0031A11C; /* jne: not equal / not zero */

loc_0031A113: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0031A208; /* jne: not equal / not zero */

loc_0031A11C: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0031A12A; /* je: equal / zero */

loc_0031A121: ;
    if (CMP_EQ(MEM32(ebp), eax)) goto loc_0031A208; /* je: equal / zero */

loc_0031A12A: ;
    ecx = MEM32(ecx + 0x3DC);
    if (CMP_NE(edx, ecx)) goto loc_0031A13D; /* jne: not equal / not zero */

loc_0031A134: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0031A208; /* jne: not equal / not zero */

loc_0031A13D: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = 8;
    edi = esp + 0x1C;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_0031A157: ;
    eax = MEM32(ebx + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x610));
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 * MEMF(0x648F24); /* mulss */
    esp = esp + 8;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031A187; /* je: equal / zero */

loc_0031A178: ;
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    MEM8(eax + 0x610) = 0;

loc_0031A187: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0); sub_0031AB90(); /* call 0x0031AB90 */

loc_0031A18F: ;
    edx = MEM32(esp + 0x18);
    MEM8(esp + 0x14) = LO8(eax);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = 1;
    edi = ebx;
    PUSH32(esp, 0); sub_003197F0(); /* call 0x003197F0 */

loc_0031A1AF: ;
    SET_LO8(ecx, MEM8(esp + 0x3C));
    xmm0 = MEMF(0x74A088); /* movss */
    esp = esp + 0x18;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEM32(ebp) = eax;
    MEMF(ebp + 8) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031A207; /* je: equal / zero */

loc_0031A1CE: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0031A207; /* je: equal / zero */

loc_0031A1D3: ;
    PUSH32(esp, 0); sub_00319B50(); /* call 0x00319B50 */

loc_0031A1D8: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x74A0A0);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp);
    PUSH32(esp, 0); sub_002F1BD0(); /* call 0x002F1BD0 */

loc_0031A1FD: ;
    esp = esp + 0x28;
    MEM32(ebp) = 0;

loc_0031A207: ;
    POP32(esp, edi);

loc_0031A208: ;
    POP32(esp, esi);

loc_0031A209: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031A210
 * Original: 0x0031A210 - 0x0031A239 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A210(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031A210: ;
    edx = MEM32(eax + 0x568);
    edx = MEM32(edx + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x30);
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(esi, esi)) { sub_0031A239(); return; } /* jne: not equal / not zero */

loc_0031A225: ;
    SET_LO8(edx, MEM8(ecx + 0x2E));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0031A239(); return; } /* jne: not equal / not zero */

loc_0031A22C: ;
    SET_LO8(edx, MEM8(0x7819D5));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_0031A239(); return; } /* je: equal / zero */

loc_0031A236: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031A250
 * Original: 0x0031A250 - 0x0031A2EA (154 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A250: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    esi = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, ebp);
    ebx = esi;
    PUSH32(esp, 0); sub_0002F100(); /* call 0x0002F100 */

loc_0031A276: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0031A2E5; /* jge: greater or equal (signed >=) */

loc_0031A27A: ;
    edi = MEM32(esp + 0x18);
    if (CMP_EQ(edi, 1)) goto loc_0031A28E; /* je: equal / zero */

loc_0031A283: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_0031A289: ;
    esp = esp + 4;
    ebp = eax;

loc_0031A28E: ;
    eax = MEM32(0x847024);
    edi = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0031A29B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031A2E5; /* je: equal / zero */

loc_0031A29F: ;
    if (TEST_Z(ebp, ebp)) goto loc_0031A2E5; /* je: equal / zero */

loc_0031A2A3: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031A2C0; /* je: equal / zero */

loc_0031A2AD: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0031A2C6;

loc_0031A2C0: ;
    eax = MEM32(esi + 0x580);

loc_0031A2C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0031A2E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A2F0
 * Original: 0x0031A2F0 - 0x0031A368 (120 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A2F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A2F0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x847024);
    ebp = MEM32(eax + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_0031A30D: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0031A363; /* jge: greater or equal (signed >=) */

loc_0031A311: ;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0031A316: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031A363; /* je: equal / zero */

loc_0031A31A: ;
    ecx = MEM32(esp + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_0031A363; /* je: equal / zero */

loc_0031A322: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031A33F; /* je: equal / zero */

loc_0031A32C: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0031A345;

loc_0031A33F: ;
    eax = MEM32(esi + 0x580);

loc_0031A345: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 3);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0031A363: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A370
 * Original: 0x0031A370 - 0x0031A3AB (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A370(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031A370: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) { sub_0031A3AB(); return; } /* je: equal / zero */

loc_0031A37A: ;
    eax = MEM32(eax + 0x3DC);
    if (CMP_NE(MEM32(ecx + 0xA4), eax)) goto loc_0031A38D; /* jne: not equal / not zero */

loc_0031A388: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0031A3A8; /* jne: not equal / not zero */

loc_0031A38D: ;
    eax = MEM32(ecx + 0x3C4);
    if (TEST_Z(eax, eax)) { sub_0031A3AB(); return; } /* je: equal / zero */

loc_0031A397: ;
    eax = eax + 4;
    edx = 3;
    PUSH32(esp, 0); sub_00036930(); /* call 0x00036930 */

loc_0031A3A4: ;
    if (TEST_Z(eax, eax)) { sub_0031A3AB(); return; } /* je: equal / zero */

loc_0031A3A8: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A3B0
 * Original: 0x0031A3B0 - 0x0031A416 (102 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A3B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031A3B0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0031A3B8: ;
    if (TEST_NZ(LO8(eax), 8)) goto loc_0031A414; /* jne: not equal / not zero */

loc_0031A3BC: ;
    eax = MEM32(0x847024);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0031A3CA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031A413; /* je: equal / zero */

loc_0031A3CE: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031A3EB; /* je: equal / zero */

loc_0031A3D8: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0031A3F1;

loc_0031A3EB: ;
    eax = MEM32(esi + 0x580);

loc_0031A3F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xBD8;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0031A413: ;
    POP32(esp, edi);

loc_0031A414: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A420
 * Original: 0x0031A420 - 0x0031A4AE (142 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A420(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0031A420: ;
    edx = MEM32(eax + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    edx = MEM32(edx + esi + 0xD0);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x568);
    MEM32(edi + 0x518) = edx;
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    edi = MEM32(ecx + 0x568);
    edx = MEM32(edx + esi + 0xD4);
    edi = MEM32(edi + 0x4D4);
    MEM32(edi + 0xD8) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    SET_LO8(ebx, MEM8(edx + eax + 0xCD));
    POP32(esp, edi);
    POP32(esp, esi);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0031A488; /* je: equal / zero */

loc_0031A481: ;
    MEM8(ecx + 0x181) = 0x14;

loc_0031A488: ;
    ecx = MEM32(ecx + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x26));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031A4AD; /* je: equal / zero */

loc_0031A495: ;
    xmm0 = MEMF(ecx + 0x518); /* movss */
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    MEMF(ecx + 0x518) = xmm0; /* movss */

loc_0031A4AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031A4B0
 * Original: 0x0031A4B0 - 0x0031A514 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A4B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031A4B0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x568);
    MEM8(eax + 0x70) = 0;
    ecx = MEM32(ebx + 0x568);
    MEM32(ecx + 0x478) = 0xFFFFFFFFu;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0031A4F2; /* je: equal / zero */

loc_0031A4DE: ;
    eax--;
    if ((eax == 0)) goto loc_0031A4EB; /* je: equal / zero */

loc_0031A4E1: ;
    eax--;
    if ((eax != 0)) { sub_0031A514(); return; } /* jne: not equal / not zero */

loc_0031A4E4: ;
    PUSH32(esp, 0); sub_002B1E80(); /* call 0x002B1E80 */

loc_0031A4E9: ;
    goto loc_0031A4F7;

loc_0031A4EB: ;
    PUSH32(esp, 0); sub_002B1E10(); /* call 0x002B1E10 */

loc_0031A4F0: ;
    goto loc_0031A4F7;

loc_0031A4F2: ;
    PUSH32(esp, 0); sub_002B1EF0(); /* call 0x002B1EF0 */

loc_0031A4F7: ;
    if (TEST_Z(eax, eax)) { sub_0031A514(); return; } /* je: equal / zero */

loc_0031A4FB: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) { sub_0031A514(); return; } /* je: equal / zero */

loc_0031A501: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 4);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A520
 * Original: 0x0031A520 - 0x0031A54E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A520(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031A520: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031A548; /* je: equal / zero */

loc_0031A52C: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x530);
    if (CMP_LE(ecx, MEM32(esp + 0xC))) { sub_0031A54E(); return; } /* jle: less or equal (signed <=) */

loc_0031A53E: ;
    MEM32(eax + 0x530) = 0;

loc_0031A548: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031A6B0
 * Original: 0x0031A6B0 - 0x0031A721 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A6B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0031A6B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x68);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) { sub_0031A721(); return; } /* je: equal / zero */

loc_0031A6BB: ;
    SET_LO8(eax, MEM8(esi + 0x180));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0031A721(); return; } /* jne: not equal / not zero */

loc_0031A6C5: ;
    xmm1 = MEMF(esi + 0xDC); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0031A721(); return; } /* jp: parity */

loc_0031A6D9: ;
    edi = MEM32(esi + 0x568);
    ecx = MEM32(edi + 0x480);
    if (CMP_EQ(ecx, MEM32(esi + 0xA4))) { sub_0031A721(); return; } /* je: equal / zero */

loc_0031A6ED: ;
    PUSH32(esp, 0); sub_002E5180(); /* call 0x002E5180 */

loc_0031A6F2: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0031A721(); return; } /* jne: not equal / not zero */

loc_0031A6F6: ;
    xmm1 = MEMF(esi + 0x228); /* movss */
    /* ucomiss xmm1, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0031A721(); return; } /* jp: parity */

loc_0031A70B: ;
    xmm1 = MEMF(edi + 0x650); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0031A721(); return; } /* jp: parity */

loc_0031A71C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A730
 * Original: 0x0031A730 - 0x0031A792 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A730(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031A730: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0031A77E; /* je: equal / zero */

loc_0031A743: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0032F650(); /* call 0x0032F650 */

loc_0031A74D: ;
    edi = MEM32(esi + 0x568);
    esp = esp + 8;
    edi = edi + 0x444;
    PUSH32(esp, 0); sub_0032D790(); /* call 0x0032D790 */

loc_0031A761: ;
    eax = MEM32(esi + 0x568);
    ebx = eax + 0x4D4;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_0031A77C; /* je: equal / zero */

loc_0031A772: ;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_0031A777: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_0031A77C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0031A77E: ;
    esi = MEM32(esi + 0x564);
    if (TEST_Z(esi, esi)) goto loc_0031A790; /* je: equal / zero */

loc_0031A788: ;
    esi = MEM32(esi + 4);
    PUSH32(esp, 0); sub_00039210(); /* call 0x00039210 */

loc_0031A790: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A7A0
 * Original: 0x0031A7A0 - 0x0031A80A (106 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A7A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031A7A0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x74A0B0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    ecx = 0x74A0B0;
    if (TEST_Z(eax, eax)) goto loc_0031A7C0; /* je: equal / zero */

loc_0031A7B2: ;
    if (CMP_EQ(eax, edx)) { sub_0031A80A(); return; } /* je: equal / zero */

loc_0031A7B6: ;
    eax = MEM32(ecx + 0xC);
    ecx = ecx + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0031A7B2; /* jne: not equal / not zero */

loc_0031A7C0: ;
    esi = 0; /* xor self */
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0031A7E5; /* je: equal / zero */

loc_0031A7D2: ;
    ecx = MEM32(eax + 8);
    if (CMP_EQ(ecx, MEM32(esi + 4))) goto loc_0031A7F1; /* je: equal / zero */

loc_0031A7DA: ;
    if (TEST_Z(eax, eax)) goto loc_0031A7E5; /* je: equal / zero */

loc_0031A7DE: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0031A730(); /* call 0x0031A730 */

loc_0031A7E5: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002B4CE0(); /* call 0x002B4CE0 */

loc_0031A7EE: ;
    esp = esp + 4;

loc_0031A7F1: ;
    eax = MEM32(ebx + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031A807; /* je: equal / zero */

loc_0031A7FB: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00039190(); /* call 0x00039190 */

loc_0031A807: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A810
 * Original: 0x0031A810 - 0x0031A91C (268 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A810: ;
    esp = esp - 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031A832; /* jne: not equal / not zero */

loc_0031A81A: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(esi + 0xA4))) goto loc_0031A915; /* je: equal / zero */

loc_0031A832: ;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    eax = esp + 8;
    edx = ebx;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031A842: ;
    edx = MEM32(esp + 8);
    esp = esp + 4;
    if (TEST_Z(edx, edx)) goto loc_0031A88A; /* je: equal / zero */

loc_0031A84D: ;
    if (CMP_EQ(MEM32(esi + 0xA4), edx)) goto loc_0031A915; /* je: equal / zero */

loc_0031A859: ;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    (void)0; /* cmp ebp, 2 - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_NE(ebp, 2)) goto loc_0031A87F; /* jne: not equal / not zero */

loc_0031A86E: ;
    if (CMP_EQ(MEM8(eax + 0x5A8), LO8(ecx))) goto loc_0031A878; /* je: equal / zero */

loc_0031A876: ;
    SET_LO8(ecx, 1);

loc_0031A878: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031A87F: ;
    SET_LO8(eax, MEM8(ebx + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031A891; /* jne: not equal / not zero */

loc_0031A886: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0031A891; /* jne: not equal / not zero */

loc_0031A88A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031A891: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_0031A90C; /* je: equal / zero */

loc_0031A896: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x10);
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    ecx = MEM32(edi);
    MEM32(eax + 0x474) = ecx;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0031A8CD; /* jne: not equal / not zero */

loc_0031A8C4: ;
    eax = edx;
    MEM8(eax + 0x5A8) = 1;

loc_0031A8CD: ;
    edx = MEM32(esi + 0x568);
    ecx = MEM32(0x847024);
    eax = MEM32(edx + 0x444);
    edi = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031A8ED: ;
    ecx = eax;
    eax = MEM32(ebx + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031A8F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031A905: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031A90C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031A912: ;
    esp = esp + 4;

loc_0031A915: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031A920
 * Original: 0x0031A920 - 0x0031AA56 (310 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A920(void)
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

loc_0031A920: ;
    esp = esp - 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000C0570(); /* call 0x000C0570 */

loc_0031A941: ;
    esp = esp + 0x28;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031AA52; /* je: equal / zero */

loc_0031A94C: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0031A96E: ;
    esp = esp + 8;
    edx = esp + 0x10;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0CB0(); /* call 0x002B0CB0 */

loc_0031A97F: ;
    xmm0 = xmm0 + MEMF(0x648E6C); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0031A9AF; /* jbe: below or equal (unsigned <=) */

loc_0031A9A8: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm1; /* movaps */

loc_0031A9AF: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esp = esp - 8;
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_0031AA05: ;
    esp = esp + 0x38;
    if (CMP_NE(edi, 0xF)) goto loc_0031AA3D; /* jne: not equal / not zero */

loc_0031AA0D: ;
    xmm1 = MEMF(eax + 0x260); /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x260) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x264); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x264) = xmm1; /* movss */

loc_0031AA3D: ;
    xmm0 = MEMF(esp); /* movss */
    xmm0 = xmm0 * MEMF(0x64934C); /* mulss */
    MEMF(eax + 0x1C0) = xmm0; /* movss */

loc_0031AA52: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0031AA60
 * Original: 0x0031AA60 - 0x0031AB0A (170 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AA60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031AA60: ;
    PUSH32(esp, edi);
    edi = eax;
    edx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_0031A7A0(); /* call 0x0031A7A0 */

loc_0031AA6C: ;
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031AA7D: ;
    if (TEST_Z(eax, eax)) goto loc_0031AB08; /* je: equal / zero */

loc_0031AA85: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    ecx = MEM32(ecx + edx + 0x2C);
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0xAC) = edi;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0xA0) = edi;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x300) = ecx;
    eax = MEM32(ecx + 0x4C);
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x2F8) = eax;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x1F8) = 2;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x530) = 0;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x444);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0032F650(); /* call 0x0032F650 */

loc_0031AAFC: ;
    edx = MEM32(esi + 0x564);
    esp = esp + 8;
    MEM8(edx) = 1;

loc_0031AB08: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031AB10
 * Original: 0x0031AB10 - 0x0031AB8E (126 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AB10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031AB10: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x1F8) = 0;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0xA0) = 0;
    edx = MEM32(esi + 0x564);
    MEM8(edx) = 0;
    eax = MEM32(esi + 0x564);
    MEM32(eax + 0x5D0) = 3;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0031AB71; /* je: equal / zero */

loc_0031AB5C: ;
    edx = ecx;
    eax = MEM32(edx + 0x444);
    if (CMP_EQ(MEM32(eax + 8), 0x25)) goto loc_0031AB71; /* je: equal / zero */

loc_0031AB6A: ;
    eax = esi;
    PUSH32(esp, 0); sub_0031A730(); /* call 0x0031A730 */

loc_0031AB71: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031AB8C; /* jne: not equal / not zero */

loc_0031AB7A: ;
    esi = MEM32(esi + 0x564);
    if (TEST_Z(esi, esi)) goto loc_0031AB8C; /* je: equal / zero */

loc_0031AB84: ;
    esi = MEM32(esi + 4);
    PUSH32(esp, 0); sub_00039210(); /* call 0x00039210 */

loc_0031AB8C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031AB90
 * Original: 0x0031AB90 - 0x0031ABB9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AB90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031AB90: ;
    SET_LO8(eax, MEM8(ecx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0031ABB9(); return; } /* jne: not equal / not zero */

loc_0031AB97: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x568);
    edx = MEM32(eax + 0xA0);
    if (CMP_NE(edx, MEM32(ecx + 0x30))) goto loc_0031ABB6; /* jne: not equal / not zero */

loc_0031ABAC: ;
    ecx = MEM32(eax + 0x1F8);
    if (TEST_Z(ecx, ecx)) { sub_0031ABB9(); return; } /* je: equal / zero */

loc_0031ABB6: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0031ABC0
 * Original: 0x0031ABC0 - 0x0031AD78 (440 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ABC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031ABC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031AD75; /* je: equal / zero */

loc_0031ABD4: ;
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031ABEC: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0031AD73; /* je: equal / zero */

loc_0031ABF6: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = MEM32(eax + ecx + 0x2C);
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_0031AC29; /* je: equal / zero */

loc_0031AC14: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0031AC21: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031AC29: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0031AC32: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031AC45; /* je: equal / zero */

loc_0031AC39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031AC45: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0031AC4D: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031AD73; /* je: equal / zero */

loc_0031AC58: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x474);
    if (CMP_EQ(eax, MEM32(ebp + 0xA4))) goto loc_0031AD73; /* je: equal / zero */

loc_0031AC70: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x18;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031AC80: ;
    esi = MEM32(esp + 0x18);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0031AD52; /* je: equal / zero */

loc_0031AC8F: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0031AD73; /* je: equal / zero */

loc_0031AC9B: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0031ACC1; /* jne: not equal / not zero */

loc_0031ACAE: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031ACBA; /* je: equal / zero */

loc_0031ACB8: ;
    SET_LO8(ecx, 1);

loc_0031ACBA: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031ACC1: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031ACD0; /* jne: not equal / not zero */

loc_0031ACC8: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031AD52; /* je: equal / zero */

loc_0031ACD0: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031AD44; /* je: equal / zero */

loc_0031ACD5: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(ebx + 8) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = esi;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0031AD07; /* jne: not equal / not zero */

loc_0031ACFE: ;
    eax = edx;
    MEM8(eax + 0x5A8) = 1;

loc_0031AD07: ;
    edx = MEM32(ebp + 0x568);
    ecx = MEM32(0x847024);
    eax = MEM32(edx + 0x444);
    esi = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031AD27: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031AD33: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031AD3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031AD44: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031AD4A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031AD52: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0031AD5D: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0031AD73; /* je: equal / zero */

loc_0031AD64: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0031AD70: ;
    esp = esp + 8;

loc_0031AD73: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0031AD75: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031AD80
 * Original: 0x0031AD80 - 0x0031ADED (109 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AD80(void)
{

loc_0031AD80: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    ecx = 0; /* xor self */
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_000AC710(); /* call 0x000AC710 */

loc_0031ADB0: ;
    PUSH32(esp, 0); sub_000AD960(); /* call 0x000AD960 */

loc_0031ADB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, esi);
    MEM32(0x7FDBF8) = edi;
    MEM32(0x7FDBF4) = edi;
    MEM32(0x7FDBF0) = edi;
    MEM32(0x7FDBEC) = 0x14;
    MEM32(0x7FDBE8) = edi;
    PUSH32(esp, 0); sub_001A7F50(); /* call 0x001A7F50 */

loc_0031ADE4: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0031ADF0
 * Original: 0x0031ADF0 - 0x0031B646 (2134 bytes, 572 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ADF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031ADF0: ;
    eax = MEM32(esp + 8);
    esp = esp - 0x180;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x19C);
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_L(esi, 5)) goto loc_0031AE90; /* jl: less (signed <) */

loc_0031AE12: ;
    if (CMP_LE(esi, 6)) goto loc_0031AE31; /* jle: less or equal (signed <=) */

loc_0031AE17: ;
    if (CMP_NE(esi, 7)) goto loc_0031AE90; /* jne: not equal / not zero */

loc_0031AE1C: ;
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_NZ(ecx, ecx)) goto loc_0031AE2D; /* jne: not equal / not zero */

loc_0031AE26: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_0031AE90; /* je: equal / zero */

loc_0031AE2D: ;
    SET_LO8(ebx, 1);
    goto loc_0031AE90;

loc_0031AE31: ;
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x24);
    xmm0 = 0.0f; /* xorps self = zero */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(ebp + 0x568);
    MEM16(ecx + 0x290) = 0xFFFF;
    edx = MEM32(ebp + 0x568);
    MEMF(edx + 0x294) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x28D) = 0;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x28E) = 0;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x28F) = 0;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ebx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    MEM8(eax + 0x292) = 0;

loc_0031AE90: ;
    (void)0; /* cmp esi, 6 - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(esi, 6)) goto loc_0031AEB3; /* jne: not equal / not zero */

loc_0031AE99: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0031B646(); return; } /* je: equal / zero */

loc_0031AEA1: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002674D0(); /* call 0x002674D0 */

loc_0031AEAB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0031B646(); return; } /* jne: not equal / not zero */

loc_0031AEB3: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0031B646(); return; } /* je: equal / zero */

loc_0031AEBB: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x444);
    ecx = MEM32(eax + 0x30);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) goto loc_0031B609; /* jne: not equal / not zero */

loc_0031AED3: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0031B609; /* je: equal / zero */

loc_0031AEE5: ;
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0031AEF4: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B609; /* je: equal / zero */

loc_0031AEFF: ;
    if (CMP_NE(esi, 7)) goto loc_0031B3F1; /* jne: not equal / not zero */

loc_0031AF08: ;
    edx = MEM32(esp + 0x198);
    eax = MEM32(edx + 0x38);
    ecx = MEM32(eax + 0x28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_0031B306; /* je: equal / zero */

loc_0031AF22: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    eax = MEM32(eax + 0x3070);
    if (TEST_Z(eax, eax)) goto loc_0031AF46; /* je: equal / zero */

loc_0031AF3A: ;
    edx = MEM32(eax + 0xC);
    if (CMP_EQ(edx, eax)) goto loc_0031AF46; /* je: equal / zero */

loc_0031AF41: ;
    if (CMP_GE(MEM32(edx), 0)) goto loc_0031AF5C; /* jge: greater or equal (signed >=) */

loc_0031AF46: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC1C);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031AF5C: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x6C);
    PUSH32(esp, ecx);
    eax = 0x79;
    MEM32(esp + 0x30) = ebp;
    MEM8(esp + 0x34) = 1;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0031AF76: ;
    eax = MEM32(ebp + 0x564);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    esi = 0xFFFF;
    if (TEST_Z(eax, eax)) goto loc_0031AFF3; /* je: equal / zero */

loc_0031AF8C: ;
    edx = eax + 0x330;
    ecx = MEM32(edx);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(edx + 4);
    eax = eax + 0x2F4;
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(edx + 8);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x1C;
    ecx = esp + 0x30;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x30;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0031AFF1: ;
    goto loc_0031B02C;

loc_0031AFF3: ;
    eax = MEM32(ebp + 0x568);
    edx = eax + 0x228;
    ecx = MEM32(edx);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(edx + 8);
    eax = eax + 0x21C;
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x34) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x38) = eax;

loc_0031B02C: ;
    xmm0 = MEMF(0x648E98); /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    edx = esp + 0x20;
    edi = 0x870ED4;
    MEMF(esp + 0x48) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0031BAA0(); /* call 0x0031BAA0 */

loc_0031B08D: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_0031B111; /* je: equal / zero */

loc_0031B093: ;
    edx = MEM32(ebp + 0x238);
    edx = MEM32(edx);
    goto loc_0031B0A0;

    /* nop */

loc_0031B0A0: ;
    ecx = MEM32(ecx + 0x238);
    if (CMP_NE(MEM32(ecx), edx)) goto loc_0031B0B6; /* jne: not equal / not zero */

loc_0031B0AA: ;
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0031B0A0; /* jne: not equal / not zero */

loc_0031B0B4: ;
    goto loc_0031B111;

loc_0031B0B6: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0031B111; /* je: equal / zero */

loc_0031B0BC: ;
    SET_LO16(esi, MEM16(eax + 0x60));
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    ebx = ebp;
    eax = 0xC1C;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_0031B0D6: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x40);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    eax = MEM32(eax + 0x306C);
    if (TEST_Z(eax, eax)) goto loc_0031B0FB; /* je: equal / zero */

loc_0031B0EF: ;
    edx = MEM32(eax + 0xC);
    if (CMP_EQ(edx, eax)) goto loc_0031B0FB; /* je: equal / zero */

loc_0031B0F6: ;
    if (CMP_GE(MEM32(edx), 0)) goto loc_0031B111; /* jge: greater or equal (signed >=) */

loc_0031B0FB: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC1B);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031B111: ;
    eax = ZX16(LO16(esi));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0031B14B; /* je: equal / zero */

loc_0031B119: ;
    ecx = MEM32(ebp + 0x568);
    SET_LO16(ecx, MEM16(ecx + 0x290));
    edx = SX16(LO16(ecx));
    if (CMP_NE(eax, edx)) goto loc_0031B14B; /* jne: not equal / not zero */

loc_0031B12D: ;
    if (CMP_EQ(LO16(ecx), 0xFFFFFFFFu)) goto loc_0031B15C; /* je: equal / zero */

loc_0031B133: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(ecx + 0x294); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    goto loc_0031B154;

loc_0031B14B: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */

loc_0031B154: ;
    MEMF(ecx + 0x294) = xmm0; /* movss */

loc_0031B15C: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edx = MEM32(ebp + 0x568);
    MEM16(edx + 0x290) = LO16(esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0031B1D3; /* je: equal / zero */

loc_0031B16E: ;
    edx = MEM32(ebp + 0x568);
    xmm0 = MEMF(edx + 0x294); /* movss */
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D10))) goto loc_0031B1D3; /* jbe: below or equal (unsigned <=) */

loc_0031B185: ;
    eax = edx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x290);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x28D);
    SET_LO8(ecx, 0); /* xor self */
    esi++;
    if (CMP_NE(eax, esi)) goto loc_0031B19E; /* jne: not equal / not zero */

loc_0031B19C: ;
    SET_LO8(ecx, 1);

loc_0031B19E: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0031B1D3; /* jne: not equal / not zero */

loc_0031B1A2: ;
    eax = 0; /* xor self */
    ecx = edx + 0x28D;
    /* nop */

loc_0031B1B0: ;
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_0031B1BE; /* je: equal / zero */

loc_0031B1B5: ;
    eax++;
    ecx++;
    if (CMP_L(eax, 1)) goto loc_0031B1B0; /* jl: less (signed <) */

loc_0031B1BC: ;
    goto loc_0031B1D3;

loc_0031B1BE: ;
    ecx = MEM32(ebp + 0x568);
    SET_LO8(edx, MEM8(ecx + 0x290));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(ecx + eax + 0x28D) = LO8(edx);

loc_0031B1D3: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0031B639; /* je: equal / zero */

loc_0031B1DF: ;
    edi = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(edi + 0x28D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B639; /* je: equal / zero */

loc_0031B1F3: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(ecx + 0x2A8));
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(0x84A5F8);
    SET_LO8(eax, MEM8(eax + ecx + -1378));
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0031B639; /* je: equal / zero */

loc_0031B222: ;
    MEM8(edi + 0x28D) = 0;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031B639; /* je: equal / zero */

loc_0031B237: ;
    ecx = MEM32(0x847024);
    esi = MEM32(ecx + 0x40);
    edi = MEM32(esi + 4);
    PUSH32(esp, 0xC1C);
    ebx = ebp;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_0031B253: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0031B289; /* jl: less (signed <) */

loc_0031B259: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B27A; /* je: equal / zero */

loc_0031B262: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0031B273: ;
    esi = MEM32(esp + 0x20);
    esp = esp + 8;

loc_0031B27A: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_0031B289: ;
    eax = MEM32(0x847024);
    esi = MEM32(eax + 0x40);
    edi = MEM32(esi + 4);
    PUSH32(esp, 0xC1B);
    ebx = ebp;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_0031B2A4: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0031B2DA; /* jl: less (signed <) */

loc_0031B2AA: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B2CB; /* je: equal / zero */

loc_0031B2B3: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0031B2C4: ;
    esi = MEM32(esp + 0x20);
    esp = esp + 8;

loc_0031B2CB: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_0031B2DA: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC2A);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031B2F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x180;
    esp += 4; return; /* ret */

loc_0031B306: ;
    ecx = MEM32(eax + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_0031B3B8; /* je: equal / zero */

loc_0031B311: ;
    ecx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x28D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B337; /* je: equal / zero */

loc_0031B321: ;
    PUSH32(esp, 0xC1B);
    eax = ebp;
    PUSH32(esp, 0); sub_00021960(); /* call 0x00021960 */

loc_0031B32D: ;
    esp = esp + 4;
    MEM8(esp + 0x13) = 1;
    goto loc_0031B389;

loc_0031B337: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031B389; /* je: equal / zero */

loc_0031B341: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    ebx = ebp;
    eax = 0xC1C;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_0031B357: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    eax = 0xC1B;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_0031B36B: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC2A);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031B389: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(edx, MEM8(eax + 0x28D));
    MEM8(eax + 0x292) = LO8(edx);
    eax = esp + 0x28;
    PUSH32(esp, 0x6C);
    PUSH32(esp, eax);
    eax = 0x79;
    MEM32(esp + 0x30) = ebp;
    MEM8(esp + 0x34) = 0;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0031B3B5: ;
    esp = esp + 8;

loc_0031B3B8: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(ecx + 0x290) = 0xFFFF;
    edx = MEM32(ebp + 0x568);
    MEMF(edx + 0x294) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x28D) = 0;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B639; /* je: equal / zero */

loc_0031B3F1: ;
    eax = MEM32(ebp + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, 1);
    if (TEST_Z(eax, eax)) goto loc_0031B410; /* je: equal / zero */

loc_0031B3FD: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0031B412; /* je: equal / zero */

loc_0031B407: ;
    if (CMP_NE(MEM32(eax + 0xBC), 1)) goto loc_0031B412; /* jne: not equal / not zero */

loc_0031B410: ;
    SET_LO8(ecx, 0); /* xor self */

loc_0031B412: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031B442; /* je: equal / zero */

loc_0031B41E: ;
    PUSH32(esp, 0);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_001A88B0(); /* call 0x001A88B0 */

loc_0031B433: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B442; /* je: equal / zero */

loc_0031B43A: ;
    eax = esp + 0x3C;
    MEM32(esp + 0x14) = eax;

loc_0031B442: ;
    ebx = MEM32(esp + 0x19C);
    esi = MEM32(esp + 0x198);
    edx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0032A5C0(); /* call 0x0032A5C0 */

loc_0031B459: ;
    SET_LO8(eax, MEM8(0x7819D5));
    edi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B4DB; /* je: equal / zero */

loc_0031B464: ;
    esi = esp + 0x50;
    MEM32(esp + 0x50) = edi;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x60) = edi;
    MEM32(esp + 0x64) = 0x5D12B0;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x6C) = 0x862C40;
    MEM32(esp + 0x170) = 0x5D1274;
    MEM32(esp + 0x174) = edi;
    MEM32(esp + 0x178) = edi;
    MEM32(esp + 0x17C) = edi;
    MEM32(esp + 0x180) = edi;
    MEM32(esp + 0x184) = edi;
    MEM32(esp + 0x188) = edi;
    MEM32(esp + 0x18C) = edi;
    PUSH32(esp, 0); sub_00022320(); /* call 0x00022320 */

loc_0031B4D1: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    eax = 0xC33;
    if (CMP_G(eax, 4)) goto loc_0031B4E0; /* jg: greater (signed >) */

loc_0031B4DB: ;
    eax = 0x8B2;

loc_0031B4E0: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031B4FB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0031B501: ;
    if (TEST_NZ(eax, eax)) goto loc_0031B571; /* jne: not equal / not zero */

loc_0031B505: ;
    esi = MEM32(0x84A5F8);
    if (CMP_B(ebp, esi)) goto loc_0031B571; /* jb: below (unsigned <) */

loc_0031B50F: ;
    eax = esi + 0x36ED0;
    if (CMP_A(ebp, eax)) goto loc_0031B571; /* ja: above (unsigned >) */

loc_0031B519: ;
    ecx = ebp;
    ecx = ecx - esi;
    eax = 0x2C9FB4D9;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = ecx - edx;
    ecx = ecx >> 1;
    ecx = ecx + edx;
    ecx = ecx >> 0xA;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + esi;
    if (CMP_NE(ebp, ecx)) goto loc_0031B571; /* jne: not equal / not zero */

loc_0031B539: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(eax, edi)) goto loc_0031B571; /* je: equal / zero */

loc_0031B543: ;
    eax = MEM32(eax + 0x444);
    if (CMP_EQ(eax, edi)) goto loc_0031B571; /* je: equal / zero */

loc_0031B54D: ;
    ecx = MEM32(eax + 8);
    esi = MEM32(0x84706C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x16);
    eax = esi;
    PUSH32(esp, 0); sub_00027EE0(); /* call 0x00027EE0 */

loc_0031B565: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031B571: ;
    eax = MEM32(esp + 0x14);
    ecx = ebp;
    PUSH32(esp, 0); sub_0031AD80(); /* call 0x0031AD80 */

loc_0031B57C: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ebx + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0031B592: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B5D0; /* je: equal / zero */

loc_0031B5A4: ;
    if (CMP_NE(MEM32(esp + 0x1A8), 6)) goto loc_0031B5BF; /* jne: not equal / not zero */

loc_0031B5AE: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xD9D);
    PUSH32(esp, eax);
    goto loc_0031B5DE;

loc_0031B5BF: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0x8B1);
    PUSH32(esp, edx);
    goto loc_0031B5DE;

loc_0031B5D0: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xD86);
    PUSH32(esp, ecx);

loc_0031B5DE: ;
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031B5E8: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0031B5EF: ;
    ebp = MEM32(ebp + 0x568);
    MEM16(ebp + 0x2D8) = MEM16(ebp + 0x2D8) + 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x180;
    esp += 4; return; /* ret */

loc_0031B609: ;
    edx = MEM32(esp + 0x198);
    eax = MEM32(edx + 0x38);
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_0031B639; /* je: equal / zero */

loc_0031B61A: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBD5);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031B639: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x180;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B660
 * Original: 0x0031B660 - 0x0031B8C9 (617 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B660: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031B680: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0031B8C2; /* je: equal / zero */

loc_0031B68A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0031B8B3; /* jne: not equal / not zero */

loc_0031B6B0: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_0031B6D5; /* je: equal / zero */

loc_0031B6BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0031B6CB: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031B6D5: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0031B6DE: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031B6F0: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031B8C2; /* jne: not equal / not zero */

loc_0031B6FB: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B710; /* je: equal / zero */

loc_0031B702: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031B710: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0031B718: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B8C2; /* je: equal / zero */

loc_0031B723: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0031B817; /* je: equal / zero */

loc_0031B73B: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031B74B: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0031B859; /* je: equal / zero */

loc_0031B75A: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0031B817; /* je: equal / zero */

loc_0031B766: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0031B78C; /* jne: not equal / not zero */

loc_0031B779: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031B785; /* je: equal / zero */

loc_0031B783: ;
    SET_LO8(ecx, 1);

loc_0031B785: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031B78C: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031B79B; /* jne: not equal / not zero */

loc_0031B793: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031B859; /* je: equal / zero */

loc_0031B79B: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031B80E; /* je: equal / zero */

loc_0031B7A0: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0031B7D5; /* jne: not equal / not zero */

loc_0031B7CC: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_0031B7D5: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031B7F4: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031B800: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031B80C: ;
    goto loc_0031B817;

loc_0031B80E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031B814: ;
    esp = esp + 4;

loc_0031B817: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031B8C2; /* je: equal / zero */

loc_0031B825: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031B8C2; /* je: equal / zero */

loc_0031B830: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    if (CMP_NE(MEM32(edx + eax + 0x14), 7)) goto loc_0031B8C2; /* jne: not equal / not zero */

loc_0031B843: ;
    PUSH32(esp, 0x43480000);
    edi = ebp;
    PUSH32(esp, 0); sub_000ADAB0(); /* call 0x000ADAB0 */

loc_0031B84F: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031B859: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0031B864: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0031B8C2; /* je: equal / zero */

loc_0031B86B: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0031B8B3; /* je: equal / zero */

loc_0031B87A: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031B8B3; /* jne: not equal / not zero */

loc_0031B881: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0031B8B3; /* jp: parity */

loc_0031B896: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0031B8B3; /* je: equal / zero */

loc_0031B89F: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0031ADF0(); /* call 0x0031ADF0 */

loc_0031B8AC: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031B8C2; /* jne: not equal / not zero */

loc_0031B8B3: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0031B8BF: ;
    esp = esp + 8;

loc_0031B8C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B8D0
 * Original: 0x0031B8D0 - 0x0031BA9F (463 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B8D0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    edi = MEM32(ebx + 0x1C);
    eax = ebx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031B8F2: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031BA97; /* jne: not equal / not zero */

loc_0031B8FD: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(ebp + 0xA4) - flags set for next jcc */
    edi = MEM32(ebx + 0x1C);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0031BA97; /* je: equal / zero */

loc_0031B918: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    eax = esp + 0x18;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031B928: ;
    esi = MEM32(esp + 0x18);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0031BA01; /* je: equal / zero */

loc_0031B937: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0031BA97; /* je: equal / zero */

loc_0031B943: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0031B969; /* jne: not equal / not zero */

loc_0031B956: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031B962; /* je: equal / zero */

loc_0031B960: ;
    SET_LO8(ecx, 1);

loc_0031B962: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031B969: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031B978; /* jne: not equal / not zero */

loc_0031B970: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031BA01; /* je: equal / zero */

loc_0031B978: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031B9F0; /* je: equal / zero */

loc_0031B97D: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0031B9B0; /* jne: not equal / not zero */

loc_0031B9A9: ;
    MEM8(eax + 0x5A8) = 1;

loc_0031B9B0: ;
    edx = MEM32(ebp + 0x568);
    ecx = MEM32(0x847024);
    eax = MEM32(edx + 0x444);
    esi = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031B9D0: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031B9DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031B9E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031B9F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031B9F6: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031BA01: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031BA97; /* je: equal / zero */

loc_0031BA0C: ;
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 1);
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_0032FAE0(); /* call 0x0032FAE0 */

loc_0031BA21: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031BA97; /* je: equal / zero */

loc_0031BA28: ;
    ecx = MEM32(ebx + 0x1C);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    ecx = 1;
    PUSH32(esp, 0); sub_002B1600(); /* call 0x002B1600 */

loc_0031BA3D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esi = MEM32(0x847024);
    esp = esp + 8;
    MEMF(ebx + 8) = xmm0; /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(ebp + 0x180) = LO8(eax);
    MEM8(ebp + 0x17D) = LO8(eax);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, 0xC33);
    PUSH32(esp, 0x8B2);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_0031BA72: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031BA87: ;
    eax = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_0031AD80(); /* call 0x0031AD80 */

loc_0031BA90: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_0031BA97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BAA0
 * Original: 0x0031BAA0 - 0x0031BAB2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BAA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031BAA0: ;
    eax = MEM32(edi);
    esp = esp - 0x20;
    if (TEST_NZ(eax, eax)) { sub_0031BAB2(); return; } /* jne: not equal / not zero */

loc_0031BAA9: ;
    eax = edi + 4;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031BB80
 * Original: 0x0031BB80 - 0x0031BCC8 (328 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BB80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BB80: ;
    esp = esp - 0x424;
    eax = MEM32(esp + 0x430);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x430);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0031BBA9; /* je: equal / zero */

loc_0031BBA3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_0031BBA9: ;
    MEM32(esp + 0x34) = 0;
    ebx = 1;

loc_0031BBB6: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_0031BC52; /* jne: not equal / not zero */

loc_0031BBC9: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0031BC9C; /* jbe: below or equal (unsigned <=) */

loc_0031BBD1: ;
    esi = esi + 0x10;

loc_0031BBD4: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x440);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x43C);
    eax = esp + 0x14;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_0031BC11: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031BC44; /* je: equal / zero */

loc_0031BC15: ;
    eax = MEM32(esi);
    if (CMP_NE(MEM32(eax + 0x64), 0x35)) goto loc_0031BC44; /* jne: not equal / not zero */

loc_0031BC1D: ;
    eax = MEM32(eax + 0x68);
    if (CMP_EQ(eax, 0xDF)) goto loc_0031BC3C; /* je: equal / zero */

loc_0031BC27: ;
    if (CMP_EQ(eax, 0xE9)) goto loc_0031BC3C; /* je: equal / zero */

loc_0031BC2E: ;
    if (CMP_EQ(eax, 0x12F)) goto loc_0031BC3C; /* je: equal / zero */

loc_0031BC35: ;
    if (CMP_NE(eax, 0xEC)) goto loc_0031BC44; /* jne: not equal / not zero */

loc_0031BC3C: ;
    MEM32(esp + 0x440) = MEM32(esp + 0x440) + 4;

loc_0031BC44: ;
    eax = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, eax)) goto loc_0031BBD4; /* jl: less (signed <) */

loc_0031BC50: ;
    goto loc_0031BC9C;

loc_0031BC52: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0031BC9C; /* jbe: below or equal (unsigned <=) */

loc_0031BC56: ;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x43C);
    ecx = esp + 0x24;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + ebx * 4 + 0x3C) = esi;
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_0031BC8B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031BC90; /* je: equal / zero */

loc_0031BC8F: ;
    ebx++;

loc_0031BC90: ;
    ecx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, ecx)) goto loc_0031BC56; /* jl: less (signed <) */

loc_0031BC9C: ;
    ebp = MEM32(esp + ebx * 4 + 0x30);
    ebx--;
    if (TEST_NZ(ebp, ebp)) goto loc_0031BBB6; /* jne: not equal / not zero */

loc_0031BCA9: ;
    eax = MEM32(esp + 0x440);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x424;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0031BCD0
 * Original: 0x0031BCD0 - 0x0031C449 (1913 bytes, 421 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BCD0(void)
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

loc_0031BCD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x194;
    xmm0 = MEMF(0x648E60); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    MEMF(esp + 0xF0) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x59D944); /* subss */
    MEM32(esp + 0x190) = esi;
    MEM8(esp + 0x194) = 0;
    MEM8(esp + 0x195) = 0;
    MEM32(esp + 0x198) = esi;
    ecx = 0x24;
    edi = esp + 0x100;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    ecx = esp + 0xF8;
    eax = 1;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(esp + 0xFC) = eax;
    MEM32(esp + 0xAC) = eax;
    eax = ebx + 0x78;
    ecx = 0x2000;
    edi = esp + 0x34;
    MEM32(esp + 0xA8) = 0x5D4C44;
    MEM32(esp + 0xB0) = esi;
    MEM32(esp + 0xB4) = esi;
    MEM32(esp + 0xB8) = ebx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029F590(); /* call 0x0029F590 */

loc_0031BD8F: ;
    esp = esp + 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x23) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031C000; /* je: equal / zero */

loc_0031BD9E: ;
    PUSH32(esp, 0x5A02E4);
    eax = esp + 0x68;
    edx = esp + 0x174;
    PUSH32(esp, 0); sub_003E4CA0(); /* call 0x003E4CA0 */

loc_0031BDB3: ;
    xmm0 = MEMF(esp + 0x70); /* movss */
    xmm1 = MEMF(esp + 0x74); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(esp + 0x6C); /* movss */
    xmm4 = xmm1; /* movaps */
    MEMF(esp + 0x28) = xmm4; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x68); /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    MEMF(esp + 0x2C) = xmm7; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm6 = xmm6 + xmm0; /* addss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 + MEMF(esp + 0x18); /* addss */
    xmm6 = xmm6 + xmm5; /* addss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x38); /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x1C); /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x34); /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x30); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x34); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x1C); /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x38); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x34); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x30); /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x1C); /* mulss */
    xmm6 = xmm6 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x174); /* movss */
    MEMF(esp + 0x4C) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x178); /* movss */
    esp = esp + 4;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x4C) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x178); /* movss */
    MEMF(esp + 0x50) = xmm5; /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm7 = xmm2; /* movaps */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x28); /* movss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 - MEMF(esp + 0x14); /* subss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x54) = xmm6; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x14); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x58) = xmm6; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */

loc_0031C000: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x74;
    PUSH32(esp, 0x18);
    PUSH32(esp, edx);
    MEM32(esp + 0x7C) = 0x31CCA0;
    MEM32(esp + 0x80) = 0x31CEB0;
    MEM32(esp + 0x84) = esi;
    MEM32(esp + 0x88) = 0x31D230;
    MEM32(esp + 0x8C) = 0x6C;
    MEM32(esp + 0x90) = 0x303;
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM32(esp + 0x98) = 0x64;
    MEM8(esp + 0x9C) = 1;
    PUSH32(esp, 0); sub_00106EC0(); /* call 0x00106EC0 */

loc_0031C066: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_0031C442; /* je: equal / zero */

loc_0031C073: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esi + 0xA8) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(esi + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(0x64909C); /* movss */
    MEMF(esi + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(0x648E74); /* movss */
    MEMF(esi + 0xB4) = xmm0; /* movss */
    edi = MEM32(esi + 0x70);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x93);
    edi = edi + edi * 4;
    edi = edi << 2;
    PUSH32(esp, 0x638FF4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0031C0D9: ;
    edx = eax;
    esp = esp + 0x10;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    if (TEST_Z(edx, edx)) goto loc_0031C0FE; /* je: equal / zero */

loc_0031C0E6: ;
    ecx = edi;
    edi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    edx = MEM32(esp + 0x24);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0031C0FE: ;
    MEM32(esi + 0xB8) = edx;
    eax = MEM32(esi + 0x70);
    xmm7 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    xmm6 = MEMF(ebx + 0x78); /* movss */
    xmm7 = xmm7 + MEMF(0x64908C); /* addss */
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(eax, edi)) goto loc_0031C442; /* jle: less or equal (signed <=) */

loc_0031C139: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM16(esp + 0x30) = LO16(eax);
    MEM32(esp + 0x18) = edi;
    goto loc_0031C150;

    /* nop */
    /* nop */

loc_0031C150: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    ebx = MEM32(esi + 0xB8);
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esp + 0x23));
    /* FPU: fdivr dword ptr [0x648d30] */
    ebx = ebx + ecx;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x2C) = ebx;
    /* FPU: fimul dword ptr [esp + 0x14] */
    /* fld st(0) */
    /* FPU: fcos  */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* FPU: fsin  */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031C23D; /* je: equal / zero */

loc_0031C18E: ;
    ecx = esp + 0x3C;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x24) = ecx;
    xmm0 = MEMF(esp + 0x38); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 0x54); /* movss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    edx = MEM32(esp + 0x60);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 + MEMF(ebx); /* addss */
    xmm2 = MEMF(esp + 0x4C); /* movss */
    MEMF(ebx) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 + MEMF(ebx + 4); /* addss */
    MEMF(ebx + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 + MEMF(ebx + 8); /* addss */
    edx = edx & 0xFFFFFF;
    MEMF(ebx + 8) = xmm1; /* movss */
    MEM32(ebx + 0x10) = edx;
    goto loc_0031C25E;

loc_0031C23D: ;
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    MEM32(ebx + 0x10) = 0x7F7F7F;

loc_0031C25E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0031C263: ;
    xmm0 = xmm0 * MEMF(0x648EBC); /* mulss */
    xmm0 = xmm0 + MEMF(0x6492D4); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEMF(ebx + 0xC) = xmm5; /* movss */
    ecx = MEM32(esi + 0x9C);
    eax = (int32_t)xmm6; /* cvttss2si */
    MEM16(ecx + edi + 0x4C) = LO16(eax);
    edx = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(edx + edi + 0x4C));
    MEM16(edx + edi + 0x34) = LO16(ecx);
    eax = edx + edi;
    edx = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(edx + edi + 0x34));
    MEM16(edx + edi + 0x1C) = LO16(ecx);
    eax = edx + edi;
    edx = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(edx + edi + 0x1C));
    MEM16(edx + edi + 4) = LO16(ecx);
    eax = edx + edi;
    edx = MEM32(esi + 0x9C);
    eax = (int32_t)xmm7; /* cvttss2si */
    MEM16(edx + edi + 0x4E) = LO16(eax);
    eax = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(eax + edi + 0x4E));
    MEM16(eax + edi + 0x36) = LO16(ecx);
    edx = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(edx + edi + 0x36));
    eax = eax + edi;
    MEM16(edx + edi + 0x1E) = LO16(ecx);
    eax = edx + edi;
    edx = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(edx + edi + 0x1E));
    MEM16(edx + edi + 6) = LO16(ecx);
    eax = edx + edi;
    edx = MEM32(esi + 0x9C);
    SET_LO16(eax, MEM16(esp + 0x30));
    MEM16(edx + edi + 0x50) = LO16(eax);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ecx + edi + 0x50));
    eax = ecx + edi;
    MEM16(eax + 0x38) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(eax + edi + 0x38));
    eax = eax + edi;
    MEM16(eax + 0x20) = LO16(ecx);
    edx = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(edx + edi + 0x20));
    eax = edx + edi;
    MEM16(eax + 8) = LO16(ecx);
    xmm0 = MEMF(esi + 0x8C); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_0031C386; /* jbe: below or equal (unsigned <=) */

loc_0031C384: ;
    goto loc_0031C389;

loc_0031C386: ;
    xmm0 = xmm6; /* movaps */

loc_0031C389: ;
    MEMF(esi + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x90); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_0031C3A0; /* jbe: below or equal (unsigned <=) */

loc_0031C39E: ;
    goto loc_0031C3A3;

loc_0031C3A0: ;
    xmm0 = xmm7; /* movaps */

loc_0031C3A3: ;
    xmm1 = MEMF(esp + 0x6C); /* movss */
    MEMF(esi + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x94); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0031C3C0; /* jbe: below or equal (unsigned <=) */

loc_0031C3BE: ;
    goto loc_0031C3C3;

loc_0031C3C0: ;
    xmm0 = xmm1; /* movaps */

loc_0031C3C3: ;
    MEMF(esi + 0x94) = xmm0; /* movss */
    /* comiss xmm6, MEMF(esi + 0x7C) - sets EFLAGS */
    if ((xmm6 <= MEMF(esi + 0x7C))) goto loc_0031C3D8; /* jbe: below or equal (unsigned <=) */

loc_0031C3D1: ;
    xmm0 = MEMF(esi + 0x7C); /* movss */
    goto loc_0031C3DB;

loc_0031C3D8: ;
    xmm0 = xmm6; /* movaps */

loc_0031C3DB: ;
    /* comiss xmm7, MEMF(esi + 0x80) - sets EFLAGS */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    if ((xmm7 <= MEMF(esi + 0x80))) goto loc_0031C3F3; /* jbe: below or equal (unsigned <=) */

loc_0031C3E9: ;
    xmm0 = MEMF(esi + 0x80); /* movss */
    goto loc_0031C3F6;

loc_0031C3F3: ;
    xmm0 = xmm7; /* movaps */

loc_0031C3F6: ;
    /* comiss xmm1, MEMF(esi + 0x84) - sets EFLAGS */
    MEMF(esi + 0x80) = xmm0; /* movss */
    if ((xmm1 <= MEMF(esi + 0x84))) goto loc_0031C411; /* jbe: below or equal (unsigned <=) */

loc_0031C407: ;
    xmm0 = MEMF(esi + 0x84); /* movss */
    goto loc_0031C414;

loc_0031C411: ;
    xmm0 = xmm1; /* movaps */

loc_0031C414: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax = eax + 0x14;
    MEMF(esi + 0x84) = xmm0; /* movss */
    ecx++;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x70);
    edi = edi + 0x60;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(ecx, eax)) goto loc_0031C150; /* jl: less (signed <) */

loc_0031C442: ;
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
 * sub_0031C450
 * Original: 0x0031C450 - 0x0031C605 (437 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C450(void)
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

loc_0031C450: ;
    eax = MEM32(0x7FDBF8);
    esp = esp - 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0031C5A7; /* jne: not equal / not zero */

loc_0031C462: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 0x78);
    eax = eax + 0x78;
    ecx = eax;
    edi = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 8);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_0031C4A3: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_0031C4BD; /* je: equal / zero */

loc_0031C4AC: ;
    /* nop */

loc_0031C4B0: ;
    if (CMP_EQ(MEM32(eax + 4), 0x48)) goto loc_0031C4BF; /* je: equal / zero */

loc_0031C4B6: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_0031C4B0; /* jne: not equal / not zero */

loc_0031C4BD: ;
    eax = ecx;

loc_0031C4BF: ;
    if (CMP_NE(eax, ecx)) goto loc_0031C4C7; /* jne: not equal / not zero */

loc_0031C4C3: ;
    eax = 0; /* xor self */
    goto loc_0031C4C9;

loc_0031C4C7: ;
    eax = MEM32(eax);

loc_0031C4C9: ;
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_0031C52E; /* je: equal / zero */

loc_0031C4CF: ;
    SET_LO8(eax, MEM8(esi + 6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031C4F2; /* jne: not equal / not zero */

loc_0031C4D6: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031C4F2; /* jne: not equal / not zero */

loc_0031C4DF: ;
    eax = 0x14;
    MEM16(0x744C4E) = LO16(eax);
    MEM16(0x744C1E) = LO16(eax);
    goto loc_0031C528;

loc_0031C4F2: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0031C500: ;
    MEM16(0x744C4E) = LO16(eax);
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0031C514: ;
    MEM16(0x744C1E) = LO16(eax);
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0031C528: ;
    MEM16(0x744C7E) = LO16(eax);

loc_0031C52E: ;
    esi = MEM32(0x7FDBA8);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    esi++;
    MEM32(0x7FDBA8) = esi;
    esi = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x61);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM8(0x7FDBAC) = 1;
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_0031C564: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x60);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_0031C57E: ;
    esp = esp + 0x58;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x62);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_0031C59B: ;
    esp = esp + 0x2C;
    POP32(esp, ebp);
    MEM8(0x7FDBAC) = 0;
    POP32(esp, ebx);

loc_0031C5A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xEE);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x451C4000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D4CCCCD);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_0031C5F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0031BCD0(); /* call 0x0031BCD0 */

loc_0031C5FC: ;
    esp = esp + 0x4C;
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
 * sub_0031C610
 * Original: 0x0031C610 - 0x0031C647 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C610(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031C610: ;
    edx = MEM32(ecx + 0x568);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xBC);
    eax = 0; /* xor self */
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(esi, 2)) goto loc_0031C62A; /* jne: not equal / not zero */

loc_0031C625: ;
    eax = 1;

loc_0031C62A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F488889);
    PUSH32(esp, 0x31C450);
    PUSH32(esp, 0); sub_0030F240(); /* call 0x0030F240 */

loc_0031C643: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C650
 * Original: 0x0031C650 - 0x0031C7D3 (387 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C650: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = eax;
    MEM32(edi) = 0xFFFFFFFFu;
    MEMF(ebp) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = eax - esi;
    if ((eax == 0)) goto loc_0031C74A; /* je: equal / zero */

loc_0031C683: ;
    eax--;
    if ((eax == 0)) goto loc_0031C6F3; /* je: equal / zero */

loc_0031C686: ;
    eax--;
    if ((eax != 0)) goto loc_0031C7A4; /* jne: not equal / not zero */

loc_0031C68D: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0031C6A4: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C6AF: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, esi)) goto loc_0031C6D2; /* je: equal / zero */

loc_0031C6B7: ;
    eax = eax + 0x2C;
    if (CMP_EQ(eax, esi)) goto loc_0031C6D2; /* je: equal / zero */

loc_0031C6BE: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_0031C6D2; /* je: equal / zero */

loc_0031C6C4: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (CMP_NE(ecx, esi)) goto loc_0031C796; /* jne: not equal / not zero */

loc_0031C6D2: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x2C;
    if (CMP_EQ(eax, esi)) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C6E1: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C6EB: ;
    eax = eax + 0x10;
    goto loc_0031C792;

loc_0031C6F3: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0031C70A: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C715: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, esi)) goto loc_0031C734; /* je: equal / zero */

loc_0031C71D: ;
    eax = eax + 0x2C;
    if (CMP_EQ(eax, esi)) goto loc_0031C734; /* je: equal / zero */

loc_0031C724: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_0031C734; /* je: equal / zero */

loc_0031C72A: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (CMP_NE(ecx, esi)) goto loc_0031C796; /* jne: not equal / not zero */

loc_0031C734: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x2C;
    if (CMP_EQ(eax, esi)) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C73F: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C745: ;
    eax = eax + 8;
    goto loc_0031C792;

loc_0031C74A: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0031C761: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C768: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, esi)) goto loc_0031C781; /* je: equal / zero */

loc_0031C770: ;
    eax = eax + 0x2C;
    if (CMP_EQ(eax, esi)) goto loc_0031C781; /* je: equal / zero */

loc_0031C777: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_0031C781; /* je: equal / zero */

loc_0031C77D: ;
    if (CMP_NE(MEM32(eax), esi)) goto loc_0031C796; /* jne: not equal / not zero */

loc_0031C781: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x2C;
    if (CMP_EQ(eax, esi)) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C78C: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C792: ;
    if (CMP_EQ(MEM32(eax), esi)) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C796: ;
    if (CMP_EQ(eax, esi)) goto loc_0031C7A4; /* je: equal / zero */

loc_0031C79A: ;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp) = edx;

loc_0031C7A4: ;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(edi);
    MEM32(eax + 0x474) = ecx;
    edx = MEM32(ebx + 0x568);
    eax = MEM32(edi);
    MEM32(edx + 0x480) = eax;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x484) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C7E0
 * Original: 0x0031C7E0 - 0x0031C88D (173 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C7E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C7E0: ;
    (void)0; /* cmp eax, 0x4F - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_NE(eax, 0x4F)) { sub_0031C88D(); return; } /* jne: not equal / not zero */

loc_0031C7EE: ;
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) { sub_0031C88D(); return; } /* je: equal / zero */

loc_0031C7FC: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0031C889; /* jne: not equal / not zero */

loc_0031C80F: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0031C889; /* je: equal / zero */

loc_0031C81D: ;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0031C82D: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031C888; /* je: equal / zero */

loc_0031C834: ;
    eax = ebx + 8;
    PUSH32(esp, eax);
    edx = ebp;
    edi = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_0031C650(); /* call 0x0031C650 */

loc_0031C843: ;
    ecx = esi;
    MEM8(ebx + 0x1D) = 0;
    PUSH32(esp, 0); sub_0031C610(); /* call 0x0031C610 */

loc_0031C84E: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ebp + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0031C864: ;
    esp = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0031C86E: ;
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x5DE) = 1;

loc_0031C888: ;
    POP32(esp, edi);

loc_0031C889: ;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C8A0
 * Original: 0x0031C8A0 - 0x0031CC2C (908 bytes, 269 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031C8A0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x568);
    ebx = eax;
    eax = MEM32(esi + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031C8C1: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0031CC24; /* je: equal / zero */

loc_0031C8CB: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    ecx = MEM32(eax + 0x18);
    SET_LO8(eax, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x34) = edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031CC24; /* jne: not equal / not zero */

loc_0031C8F1: ;
    eax = ZX8(MEM8(ebx + 0x30));
    if (CMP_EQ(MEM32(esi + 0xA0), eax)) goto loc_0031CA8D; /* je: equal / zero */

loc_0031C901: ;
    eax = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_L(eax, edx)) goto loc_0031C915; /* jl: less (signed <) */

loc_0031C910: ;
    eax = 0x14;

loc_0031C915: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    PUSH32(esp, 0);
    MEM32(eax + 0x7632E4) = 1;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0031C932: ;
    eax = esp + 0x28;
    PUSH32(esp, 0x7A);
    PUSH32(esp, eax);
    eax = 5;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0031C94F: ;
    eax = MEM32(esp + 0x34);
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_0031CC24; /* jne: not equal / not zero */

loc_0031C95E: ;
    ecx = MEM32(ebp + 0x4B0);
    edx = MEM32(ecx + 0x24);
    ebx = MEM32(edx + 8);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = 0x5E991C;
    PUSH32(esp, 0); sub_003ED460(); /* call 0x003ED460 */

loc_0031C978: ;
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(eax + 0x34);
    PUSH32(esp, 0x5F34F8);
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_0031C99C: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0031CC24; /* je: equal / zero */

loc_0031C9A7: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648E68); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    edi = edi;

loc_0031C9C0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x3C8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    esi = esp + 0x34;
    ecx = ebx;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_0031C9DB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x14);
    PUSH32(esp, 2);
    PUSH32(esp, 0x130);
    PUSH32(esp, 0x12F);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41C80000);
    PUSH32(esp, 0x3D0F5C29);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_0031CA28: ;
    esp = esp + 0x50;
    if (TEST_Z(eax, eax)) goto loc_0031CA60; /* je: equal / zero */

loc_0031CA2F: ;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x104) = ebp;
    ecx = ZX8(MEM8(ebp + 0x10B));
    MEM32(eax + 0x108) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x10C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x110) = ecx;
    MEM32(eax + 0x114) = edx;

loc_0031CA60: ;
    eax = MEM32(esp + 0x14);
    eax++;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F34F8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_0031CA7A: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_0031C9C0; /* jne: not equal / not zero */

loc_0031CA85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0031CA8D: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0031CA96: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031CAAC; /* je: equal / zero */

loc_0031CA9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0031CAAC: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0031CAB4: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031CC24; /* je: equal / zero */

loc_0031CABF: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0x474);
    if (CMP_EQ(edx, MEM32(ebp + 0xA4))) goto loc_0031CC24; /* je: equal / zero */

loc_0031CAD7: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    eax = esp + 0x40;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031CAE7: ;
    esi = MEM32(esp + 0x40);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0031CBBE; /* je: equal / zero */

loc_0031CAF6: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0031CC24; /* je: equal / zero */

loc_0031CB02: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0031CB28; /* jne: not equal / not zero */

loc_0031CB15: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031CB21; /* je: equal / zero */

loc_0031CB1F: ;
    SET_LO8(ecx, 1);

loc_0031CB21: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031CB28: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031CB37; /* jne: not equal / not zero */

loc_0031CB2F: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031CBBE; /* je: equal / zero */

loc_0031CB37: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031CBAD; /* je: equal / zero */

loc_0031CB3C: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(ebx) = esi;
    MEMF(ebx + 8) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0031CB6E; /* jne: not equal / not zero */

loc_0031CB65: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_0031CB6E: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031CB8D: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031CB99: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031CBA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0031CBAD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031CBB3: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0031CBBE: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0031CBC9: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0031CC24; /* je: equal / zero */

loc_0031CBD0: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_0031CC15; /* je: equal / zero */

loc_0031CBDF: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031CC15; /* jne: not equal / not zero */

loc_0031CBE6: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0031CC15; /* jp: parity */

loc_0031CBFB: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0031CC15; /* je: equal / zero */

loc_0031CC04: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031C7E0(); /* call 0x0031C7E0 */

loc_0031CC0E: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031CC24; /* jne: not equal / not zero */

loc_0031CC15: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0031CC21: ;
    esp = esp + 8;

loc_0031CC24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0031CC30
 * Original: 0x0031CC30 - 0x0031CC98 (104 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CC30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031CC30: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(ebx + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031CC96; /* je: equal / zero */

loc_0031CC3A: ;
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0031CC96; /* jne: not equal / not zero */

loc_0031CC4D: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0031CC96; /* je: equal / zero */

loc_0031CC5B: ;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0031CC6B: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031CC95; /* je: equal / zero */

loc_0031CC72: ;
    edx = ebx + 4;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x1C);
    edi = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_0031C650(); /* call 0x0031C650 */

loc_0031CC82: ;
    esp = esp + 4;
    ecx = esi;
    MEM8(ebx + 0x10) = 0;
    PUSH32(esp, 0); sub_0031C610(); /* call 0x0031C610 */

loc_0031CC90: ;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_0031CC95: ;
    POP32(esp, edi);

loc_0031CC96: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031CCA0
 * Original: 0x0031CCA0 - 0x0031CE96 (502 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031CCA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031CCA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x70);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 8) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_0031CE92; /* jle: less or equal (signed <=) */

loc_0031CCB8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */

loc_0031CCC0: ;
    eax = MEM32(esi + 0x9C);
    MEM16(edi + eax + 0x4A) = LO16(ebp);
    ecx = MEM32(esi + 0x9C);
    MEM16(edi + ecx + 0x48) = LO16(ebp);
    edx = MEM32(esi + 0x9C);
    MEM16(edi + edx + 0x32) = LO16(ebp);
    eax = MEM32(esi + 0x9C);
    MEM16(edi + eax + 0x30) = LO16(ebp);
    ecx = MEM32(esi + 0x9C);
    MEM16(edi + ecx + 0x1A) = LO16(ebp);
    edx = MEM32(esi + 0x9C);
    MEM16(edi + edx + 0x18) = LO16(ebp);
    eax = MEM32(esi + 0x9C);
    MEM16(edi + eax + 2) = LO16(ebp);
    ecx = MEM32(esi + 0x9C);
    MEM16(edi + ecx) = LO16(ebp);
    edx = MEM32(esi + 0x9C);
    eax = 0xFFFFFF;
    MEM32(edi + edx + 0xC) = eax;
    ecx = MEM32(esi + 0x9C);
    MEM32(edi + ecx + 0x24) = eax;
    edx = MEM32(esi + 0x9C);
    MEM32(edi + edx + 0x3C) = eax;
    ecx = MEM32(esi + 0x9C);
    MEM32(edi + ecx + 0x54) = eax;
    eax = MEM32(esi + 0x40);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0031CD57: ;
    ebx = eax;
    esp = esp + 4;
    if (CMP_NE(ebx, ebp)) goto loc_0031CD70; /* jne: not equal / not zero */

loc_0031CD60: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0031CD68: ;
    MEM32(0x771764) = ebp;
    goto loc_0031CDAB;

loc_0031CD70: ;
    if (CMP_EQ(MEM32(0x771764), ebx)) goto loc_0031CDAB; /* je: equal / zero */

loc_0031CD78: ;
    eax = MEM32(ebx + 4);
    if (CMP_A(eax, 4)) goto loc_0031CDA5; /* ja: above (unsigned >) */

loc_0031CD80: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x31CE98); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0031CD87u) goto loc_0031CD87;
    if (_jt == 0x0031CD8Du) goto loc_0031CD8D;
    if (_jt == 0x0031CD92u) goto loc_0031CD92;
    if (_jt == 0x0031CD98u) goto loc_0031CD98;
    if (_jt == 0x0031CDA5u) goto loc_0031CDA5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031CD87: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, eax);
    goto loc_0031CD9E;

loc_0031CD8D: ;
    ecx = MEM32(ebx + 0x1C);
    goto loc_0031CD9D;

loc_0031CD92: ;
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, edx);
    goto loc_0031CD9E;

loc_0031CD98: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(eax);

loc_0031CD9D: ;
    PUSH32(esp, ecx);

loc_0031CD9E: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0031CDA5: ;
    MEM32(0x771764) = ebx;

loc_0031CDAB: ;
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(eax, ebp)) goto loc_0031CE1C; /* je: equal / zero */

loc_0031CDB3: ;
    edx = MEM32(esi + 0x9C);
    xmm0 = MEMF(eax + 0x10); /* movss */
    ecx = edi + edx + 0x10;
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    MEMF(ecx + 4) = xmm0; /* movss */
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(eax + 0xC);
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEM32(edi + ecx + 0x28) = edx;
    MEMF(edi + ecx + 0x2C) = xmm0; /* movss */
    edx = MEM32(eax + 0xC);
    xmm0 = MEMF(eax + 0x14); /* movss */
    ecx = edi + ecx + 0x28;
    ecx = MEM32(esi + 0x9C);
    ecx = edi + ecx + 0x40;
    MEM32(ecx) = edx;
    MEMF(ecx + 4) = xmm0; /* movss */
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(eax + 8);
    xmm0 = MEMF(eax + 0x14); /* movss */
    ecx = edi + ecx + 0x58;
    MEM32(ecx) = edx;
    MEMF(ecx + 4) = xmm0; /* movss */
    goto loc_0031CE79;

loc_0031CE1C: ;
    eax = MEM32(esi + 0x9C);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(edi + eax + 0x10) = xmm0; /* movss */
    MEMF(edi + eax + 0x14) = xmm0; /* movss */
    ecx = MEM32(esi + 0x9C);
    eax = edi + eax + 0x10;
    MEMF(edi + ecx + 0x28) = xmm1; /* movss */
    MEMF(edi + ecx + 0x2C) = xmm0; /* movss */
    edx = MEM32(esi + 0x9C);
    eax = edi + ecx + 0x28;
    eax = edi + edx + 0x40;
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    eax = MEM32(esi + 0x9C);
    eax = edi + eax + 0x58;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */

loc_0031CE79: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x70);
    eax++;
    edi = edi + 0x60;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_0031CCC0; /* jl: less (signed <) */

loc_0031CE90: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0031CE92: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D230
 * Original: 0x0031D230 - 0x0031D256 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D230(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031D230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB8);
    esi = esi + 0xB8;
    if (TEST_Z(eax, eax)) goto loc_0031D254; /* je: equal / zero */

loc_0031D245: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0031D24B: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0031D254: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031D260
 * Original: 0x0031D260 - 0x0031D463 (515 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D260(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0031D260: ;
    esp = esp - 0x28;
    eax = eax - 0x14;
    if ((eax == 0)) goto loc_0031D36B; /* je: equal / zero */

loc_0031D26C: ;
    eax--;
    if ((eax != 0)) goto loc_0031D45F; /* jne: not equal / not zero */

loc_0031D273: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    eax = MEM32(0x59CA38);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649020); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x84); /* movss */
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
    MEM32(esp) = 0x15;
    MEMF(0x7FCB60) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0031D356; /* je: equal / zero */

loc_0031D34C: ;
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0031D353: ;
    esp = esp + 8;

loc_0031D356: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xAF8);
    eax = esi;
    PUSH32(esp, 0); sub_0031A2F0(); /* call 0x0031A2F0 */

loc_0031D364: ;
    esp = esp + 8;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_0031D36B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x59CA38);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x649370); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x649550); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x84); /* movss */
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
    MEM32(esp) = 0x14;
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(0x7FCB60) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0031D44E; /* je: equal / zero */

loc_0031D444: ;
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0031D44B: ;
    esp = esp + 8;

loc_0031D44E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xC2D);
    eax = esi;
    PUSH32(esp, 0); sub_0031A2F0(); /* call 0x0031A2F0 */

loc_0031D45C: ;
    esp = esp + 8;

loc_0031D45F: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D470
 * Original: 0x0031D470 - 0x0031D5D2 (354 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D470(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0031D470: ;
    eax = MEM32(eax + 0x38);
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x28);
    if (TEST_Z(ecx, ecx)) { sub_0031D5D2(); return; } /* je: equal / zero */

loc_0031D484: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) goto loc_0031D5A6; /* jne: not equal / not zero */

loc_0031D49C: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0031D5A6; /* je: equal / zero */

loc_0031D4AE: ;
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0031D4BD: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031D5A6; /* je: equal / zero */

loc_0031D4C8: ;
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648E14); /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(eax + 0x30C) = xmm0; /* movss */
    ecx = MEM32(esi + 0x568);
    eax = MEM32(edx + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0031D4F8: ;
    esp = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0031D502: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x63C) = 1;
    ecx = MEM32(esi + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x63D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031D528; /* jne: not equal / not zero */

loc_0031D51F: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_0031D260(); /* call 0x0031D260 */

loc_0031D528: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031D5CA; /* je: equal / zero */

loc_0031D536: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x510));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031D56C; /* je: equal / zero */

loc_0031D546: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x16);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_0031D554: ;
    edx = MEM32(esi + 0x568);
    esp = esp + 8;
    POP32(esp, edi);
    MEM8(edx + 0x510) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031D56C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax + 0x50C) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x50C))) goto loc_0031D5CA; /* jb: below (unsigned <) */

loc_0031D578: ;
    PUSH32(esp, 0x16);
    eax = esi;
    PUSH32(esp, 0); sub_000217F0(); /* call 0x000217F0 */

loc_0031D581: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031D5CA; /* jne: not equal / not zero */

loc_0031D588: ;
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648D20); /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x50C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031D5A6: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, 0x26);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM32(esp + 0x18) = esi;
    MEM8(esp + 0x1C) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0031D5C7: ;
    esp = esp + 0x10;

loc_0031D5CA: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D610
 * Original: 0x0031D610 - 0x0031D638 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D610(void)
{

loc_0031D610: ;
    esp = esp - 8;
    PUSH32(esp, 0x26);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0031D634: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D640
 * Original: 0x0031D640 - 0x0031D8A1 (609 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D640: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    eax = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031D660: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0031D89A; /* je: equal / zero */

loc_0031D66A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0031D88B; /* jne: not equal / not zero */

loc_0031D690: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xA0), ecx)) goto loc_0031D6B8; /* je: equal / zero */

loc_0031D6A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0031D6AE: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031D6B8: ;
    eax = MEM32(edi + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_0032FC70(); /* call 0x0032FC70 */

loc_0031D6C2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031D6F5; /* je: equal / zero */

loc_0031D6C6: ;
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_0031D6F5; /* je: equal / zero */

loc_0031D6D0: ;
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_0031D6F5; /* je: equal / zero */

loc_0031D6D7: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB50);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031D6F5: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0031D6FE: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031D713; /* je: equal / zero */

loc_0031D705: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031D713: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031D725: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031D89A; /* jne: not equal / not zero */

loc_0031D730: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0031D738: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031D89A; /* je: equal / zero */

loc_0031D743: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x474);
    if (CMP_EQ(eax, MEM32(ebp + 0xA4))) goto loc_0031D89A; /* je: equal / zero */

loc_0031D75B: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031D76B: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0031D844; /* je: equal / zero */

loc_0031D77A: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0031D89A; /* je: equal / zero */

loc_0031D786: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0031D7AC; /* jne: not equal / not zero */

loc_0031D799: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031D7A5; /* je: equal / zero */

loc_0031D7A3: ;
    SET_LO8(ecx, 1);

loc_0031D7A5: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031D7AC: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031D7BB; /* jne: not equal / not zero */

loc_0031D7B3: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031D844; /* je: equal / zero */

loc_0031D7BB: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031D834; /* je: equal / zero */

loc_0031D7C0: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0031D7F5; /* jne: not equal / not zero */

loc_0031D7EC: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_0031D7F5: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031D815: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031D821: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031D82D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031D834: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031D83A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031D844: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0031D84F: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0031D89A; /* je: equal / zero */

loc_0031D856: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0031D88B; /* je: equal / zero */

loc_0031D865: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031D88B; /* jne: not equal / not zero */

loc_0031D86C: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0031D88B; /* je: equal / zero */

loc_0031D875: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031D470(); /* call 0x0031D470 */

loc_0031D884: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031D89A; /* jne: not equal / not zero */

loc_0031D88B: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0031D897: ;
    esp = esp + 8;

loc_0031D89A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0031D8B0
 * Original: 0x0031D8B0 - 0x0031DA70 (448 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031D8B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031D8B0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031D8D0: ;
    if (TEST_Z(eax, eax)) goto loc_0031DA69; /* je: equal / zero */

loc_0031D8D8: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    eax = MEM32(ecx + edx + 0x14);
    edi = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ebx = ebp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031D8FC: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031DA68; /* jne: not equal / not zero */

loc_0031D907: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(ecx + 0x474);
    (void)0; /* cmp edx, MEM32(esi + 0xA4) - flags set for next jcc */
    edi = MEM32(ebp + 0x1C);
    MEM32(esp + 0x28) = edi;
    if (CMP_EQ(edx, MEM32(esi + 0xA4))) goto loc_0031DA68; /* je: equal / zero */

loc_0031D926: ;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    eax = esp + 0x14;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031D936: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) goto loc_0031DA0D; /* je: equal / zero */

loc_0031D945: ;
    if (CMP_EQ(MEM32(esi + 0xA4), ecx)) goto loc_0031DA68; /* je: equal / zero */

loc_0031D951: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(edx, 0); /* xor self */
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0031D973; /* jne: not equal / not zero */

loc_0031D962: ;
    if (CMP_EQ(MEM8(eax + 0x5A8), LO8(edx))) goto loc_0031D96C; /* je: equal / zero */

loc_0031D96A: ;
    SET_LO8(edx, 1);

loc_0031D96C: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031D973: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031D982; /* jne: not equal / not zero */

loc_0031D97A: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031DA0D; /* je: equal / zero */

loc_0031D982: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0031D9FC; /* je: equal / zero */

loc_0031D987: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(ebp) = ecx;
    MEMF(ebx) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = ecx;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0031D9B9; /* jne: not equal / not zero */

loc_0031D9B0: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_0031D9B9: ;
    eax = MEM32(0x847024);
    ecx = MEM32(esi + 0x568);
    edi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031D9D8: ;
    edx = MEM32(esp + 0x30);
    ecx = eax;
    eax = MEM32(edx + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031D9E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031D9F4: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031D9FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031DA02: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031DA0D: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x30A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031DA4F; /* je: equal / zero */

loc_0031DA20: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0031DA3A; /* jne: not equal / not zero */

loc_0031DA24: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_0031D260(); /* call 0x0031D260 */

loc_0031DA2D: ;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x30A) = 1;

loc_0031DA3A: ;
    edx = MEM32(esi + 0x568);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(edx + 0x63C) = 1;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031DA4F: ;
    if (CMP_NE(LO8(ecx), 1)) goto loc_0031DA68; /* jne: not equal / not zero */

loc_0031DA54: ;
    eax = esi;
    PUSH32(esp, 0); sub_0031D610(); /* call 0x0031D610 */

loc_0031DA5B: ;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x30A) = 0;

loc_0031DA68: ;
    POP32(esp, ebx);

loc_0031DA69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DA70
 * Original: 0x0031DA70 - 0x0031DB28 (184 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DA70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0031DA70: ;
    esp = esp - 0x15C;
    xmm0 = MEMF(0x648EFC); /* movss */
    ecx = MEM32(edi + 0x568);
    eax = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = 0x1A;
    edx = ZX8(MEM8(ecx + 0x48C));
    PUSH32(esp, edi);
    eax = esp + 4;
    MEM32(esp + 4) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00309CB0(); /* call 0x00309CB0 */

loc_0031DAD6: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031DB02; /* je: equal / zero */

loc_0031DAE2: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_0031DAEE: ;
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_00022320(); /* call 0x00022320 */

loc_0031DAF7: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    POP32(esp, esi);
    eax = 0xC3D;
    if (CMP_G(eax, 4)) goto loc_0031DB07; /* jg: greater (signed >) */

loc_0031DB02: ;
    eax = 0x954;

loc_0031DB07: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031DB21: ;
    esp = esp + 0x15C;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DB30
 * Original: 0x0031DB30 - 0x0031DB55 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DB30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031DB30: ;
    eax = MEM32(ecx + 0x568);
    MEM8(eax + 0x48C) = MEM8(eax + 0x48C) + 1;
    eax = MEM32(ecx + 0x568);
    if (CMP_NE(MEM8(eax + 0x48C), 2)) goto loc_0031DB54; /* jne: not equal / not zero */

loc_0031DB4B: ;
    ecx = eax;
    MEM8(ecx + 0x48C) = 0;

loc_0031DB54: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DB60
 * Original: 0x0031DB60 - 0x0031DB91 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DB60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031DB60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x38);
    ebx = ecx;
    ecx = MEM32(eax + 0x24);
    if (TEST_NZ(ecx, ecx)) { sub_0031DB91(); return; } /* jne: not equal / not zero */

loc_0031DB75: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FBD0(); /* call 0x0032FBD0 */

loc_0031DB89: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0031DB91(); return; } /* jne: not equal / not zero */

loc_0031DB8D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031DD00
 * Original: 0x0031DD00 - 0x0031DF1D (541 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DD00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031DD00: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031DD20: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0031DF16; /* je: equal / zero */

loc_0031DD2A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0031DF07; /* jne: not equal / not zero */

loc_0031DD50: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_0031DD75; /* je: equal / zero */

loc_0031DD5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0031DD6B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0031DD75: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0031DD7E: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031DD8C: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031DF16; /* jne: not equal / not zero */

loc_0031DD97: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031DDAC; /* je: equal / zero */

loc_0031DD9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0031DDAC: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0031DDB4: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031DF16; /* je: equal / zero */

loc_0031DDBF: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0031DEB1; /* je: equal / zero */

loc_0031DDD7: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x24;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031DDE7: ;
    esi = MEM32(esp + 0x24);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0031DEC5; /* je: equal / zero */

loc_0031DDF6: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0031DEB1; /* je: equal / zero */

loc_0031DE02: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0031DE28; /* jne: not equal / not zero */

loc_0031DE15: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031DE21; /* je: equal / zero */

loc_0031DE1F: ;
    SET_LO8(ecx, 1);

loc_0031DE21: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031DE28: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031DE37; /* jne: not equal / not zero */

loc_0031DE2F: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031DEC5; /* je: equal / zero */

loc_0031DE37: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031DEA8; /* je: equal / zero */

loc_0031DE3C: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(ebx + 8) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0031DE6E; /* jne: not equal / not zero */

loc_0031DE65: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_0031DE6E: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031DE8E: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031DE9A: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031DEA6: ;
    goto loc_0031DEB1;

loc_0031DEA8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031DEAE: ;
    esp = esp + 4;

loc_0031DEB1: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ebp + 0xA4);
    if (CMP_NE(edx, MEM32(ecx + 0x488))) goto loc_0031DF16; /* jne: not equal / not zero */

loc_0031DEC5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0031DED0: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0031DF16; /* je: equal / zero */

loc_0031DED7: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_0031DF07; /* je: equal / zero */

loc_0031DEE6: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031DF07; /* jne: not equal / not zero */

loc_0031DEED: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0031DF07; /* je: equal / zero */

loc_0031DEF6: ;
    PUSH32(esp, ebx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031DB60(); /* call 0x0031DB60 */

loc_0031DF00: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031DF16; /* jne: not equal / not zero */

loc_0031DF07: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0031DF13: ;
    esp = esp + 8;

loc_0031DF16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0031DF20
 * Original: 0x0031DF20 - 0x0031E0D0 (432 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031DF20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031DF20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    ebx = eax;
    eax = ebp + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    esi = ebx;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031DF3C: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031E0CA; /* jne: not equal / not zero */

loc_0031DF47: ;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(ebx + 0xA4) - flags set for next jcc */
    edi = MEM32(ebp + 0x1C);
    if (CMP_EQ(ecx, MEM32(ebx + 0xA4))) goto loc_0031E03D; /* je: equal / zero */

loc_0031DF62: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    eax = esp + 0x1C;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031DF72: ;
    esi = MEM32(esp + 0x1C);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0031E051; /* je: equal / zero */

loc_0031DF81: ;
    if (CMP_EQ(MEM32(ebx + 0xA4), esi)) goto loc_0031E03D; /* je: equal / zero */

loc_0031DF8D: ;
    eax = MEM32(ebx + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0031DFB3; /* jne: not equal / not zero */

loc_0031DFA0: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031DFAC; /* je: equal / zero */

loc_0031DFAA: ;
    SET_LO8(ecx, 1);

loc_0031DFAC: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031DFB3: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031DFC2; /* jne: not equal / not zero */

loc_0031DFBA: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031E051; /* je: equal / zero */

loc_0031DFC2: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031E034; /* je: equal / zero */

loc_0031DFC7: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebp) = esi;
    MEMF(ebp + 4) = xmm0; /* movss */
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0031DFFA; /* jne: not equal / not zero */

loc_0031DFF1: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_0031DFFA: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031E01A: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebx;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031E026: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031E032: ;
    goto loc_0031E03D;

loc_0031E034: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031E03A: ;
    esp = esp + 4;

loc_0031E03D: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(ebx + 0xA4);
    if (CMP_NE(edx, MEM32(ecx + 0x488))) goto loc_0031E0CA; /* jne: not equal / not zero */

loc_0031E051: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031E0CA; /* je: equal / zero */

loc_0031E058: ;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0031E0CA; /* jne: not equal / not zero */

loc_0031E06B: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0031E0CA; /* je: equal / zero */

loc_0031E079: ;
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0031E088: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031E0CA; /* je: equal / zero */

loc_0031E08F: ;
    esi = MEM32(ebp + 0x1C);
    eax = ebp + 4;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031E300(); /* call 0x0031E300 */

loc_0031E09C: ;
    edi = ebx;
    PUSH32(esp, 0); sub_0031DA70(); /* call 0x0031DA70 */

loc_0031E0A3: ;
    edx = MEM32(ebx + 0x568);
    edi = MEM32(edx + 0x444);
    PUSH32(esp, 1);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0031E0B9: ;
    esp = esp + 4;
    ecx = ebx;
    PUSH32(esp, 0); sub_0031DB30(); /* call 0x0031DB30 */

loc_0031E0C3: ;
    esi = ebx;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_0031E0CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E0D0
 * Original: 0x0031E0D0 - 0x0031E137 (103 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E0D0(void)
{
    float xmm0;

loc_0031E0D0: ;
    esp = esp - 0x1C;
    xmm0 = MEMF(0x648EFC); /* movss */
    edx = MEM32(eax + 0x568);
    ecx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 8) = 0x1A;
    MEM32(esp + 0xC) = ecx;
    ecx = ZX8(MEM8(edx + 0x48C));
    PUSH32(esp, eax);
    eax = esp + 4;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00309CB0(); /* call 0x00309CB0 */

loc_0031E133: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E140
 * Original: 0x0031E140 - 0x0031E196 (86 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E140: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    SET_LO8(edx, 0); /* xor self */
    MEM8(eax) = LO8(ecx);
    xmm0 = MEMF(ebx + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    MEM8(esp + 0xB) = LO8(edx);
    if ((xmm0 <= MEMF(0x648CF8))) { sub_0031E196(); return; } /* jbe: below or equal (unsigned <=) */

loc_0031E16A: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x5C0);
    if (CMP_EQ(eax, 2)) goto loc_0031E18E; /* je: equal / zero */

loc_0031E17B: ;
    if (CMP_EQ(eax, 3)) goto loc_0031E18E; /* je: equal / zero */

loc_0031E180: ;
    POP32(esp, ebp);
    MEM32(edi) = 0x436;
    SET_LO8(eax, LO8(edx));
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031E18E: ;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E300
 * Original: 0x0031E300 - 0x0031E332 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E300(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0031E300: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 7;
    PUSH32(esp, ecx);
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = ebx;
    MEM8(esp + 0xF) = 0;
    PUSH32(esp, 0); sub_0031E140(); /* call 0x0031E140 */

loc_0031E322: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0031E332(); return; } /* je: equal / zero */

loc_0031E329: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E380
 * Original: 0x0031E380 - 0x0031E3B1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E380: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x38);
    ebx = ecx;
    ecx = MEM32(eax + 0x24);
    if (TEST_NZ(ecx, ecx)) { sub_0031E3B1(); return; } /* jne: not equal / not zero */

loc_0031E395: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FBD0(); /* call 0x0032FBD0 */

loc_0031E3A9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0031E3B1(); return; } /* jne: not equal / not zero */

loc_0031E3AD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E5B0
 * Original: 0x0031E5B0 - 0x0031E7D2 (546 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E5B0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031E5D0: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0031E7CB; /* je: equal / zero */

loc_0031E5DA: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0031E7BC; /* jne: not equal / not zero */

loc_0031E600: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_0031E625; /* je: equal / zero */

loc_0031E60E: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0031E61B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0031E625: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0031E62E: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031E63C: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031E7CB; /* jne: not equal / not zero */

loc_0031E647: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031E65C; /* je: equal / zero */

loc_0031E64E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0031E65C: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0031E664: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031E7CB; /* je: equal / zero */

loc_0031E66F: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0031E761; /* je: equal / zero */

loc_0031E687: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x24;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031E697: ;
    esi = MEM32(esp + 0x24);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0031E775; /* je: equal / zero */

loc_0031E6A6: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0031E761; /* je: equal / zero */

loc_0031E6B2: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0031E6D8; /* jne: not equal / not zero */

loc_0031E6C5: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031E6D1; /* je: equal / zero */

loc_0031E6CF: ;
    SET_LO8(ecx, 1);

loc_0031E6D1: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031E6D8: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031E6E7; /* jne: not equal / not zero */

loc_0031E6DF: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031E775; /* je: equal / zero */

loc_0031E6E7: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031E758; /* je: equal / zero */

loc_0031E6EC: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(ebx + 8) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0031E71E; /* jne: not equal / not zero */

loc_0031E715: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_0031E71E: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031E73E: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031E74A: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031E756: ;
    goto loc_0031E761;

loc_0031E758: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031E75E: ;
    esp = esp + 4;

loc_0031E761: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ebp + 0xA4);
    if (CMP_NE(edx, MEM32(ecx + 0x488))) goto loc_0031E7CB; /* jne: not equal / not zero */

loc_0031E775: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0031E780: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0031E7CB; /* je: equal / zero */

loc_0031E787: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_0031E7BC; /* je: equal / zero */

loc_0031E796: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031E7BC; /* jne: not equal / not zero */

loc_0031E79D: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0031E7BC; /* je: equal / zero */

loc_0031E7A6: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031E380(); /* call 0x0031E380 */

loc_0031E7B5: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031E7CB; /* jne: not equal / not zero */

loc_0031E7BC: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0031E7C8: ;
    esp = esp + 8;

loc_0031E7CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E7E0
 * Original: 0x0031E7E0 - 0x0031E9DC (508 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E7E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E7E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    ebx = eax;
    eax = ebp + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    esi = ebx;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031E7FC: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031E9D6; /* jne: not equal / not zero */

loc_0031E807: ;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(ebx + 0xA4) - flags set for next jcc */
    edi = MEM32(ebp + 0x1C);
    if (CMP_EQ(ecx, MEM32(ebx + 0xA4))) goto loc_0031E8FD; /* je: equal / zero */

loc_0031E822: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    eax = esp + 0x1C;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031E832: ;
    esi = MEM32(esp + 0x1C);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0031E915; /* je: equal / zero */

loc_0031E841: ;
    if (CMP_EQ(MEM32(ebx + 0xA4), esi)) goto loc_0031E8FD; /* je: equal / zero */

loc_0031E84D: ;
    eax = MEM32(ebx + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0031E873; /* jne: not equal / not zero */

loc_0031E860: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031E86C; /* je: equal / zero */

loc_0031E86A: ;
    SET_LO8(ecx, 1);

loc_0031E86C: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031E873: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031E882; /* jne: not equal / not zero */

loc_0031E87A: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031E915; /* je: equal / zero */

loc_0031E882: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031E8F4; /* je: equal / zero */

loc_0031E887: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebp) = esi;
    MEMF(ebp + 4) = xmm0; /* movss */
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0031E8BA; /* jne: not equal / not zero */

loc_0031E8B1: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_0031E8BA: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031E8DA: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebx;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031E8E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031E8F2: ;
    goto loc_0031E8FD;

loc_0031E8F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031E8FA: ;
    esp = esp + 4;

loc_0031E8FD: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(ebx + 0xA4);
    if (CMP_NE(edx, MEM32(ecx + 0x488))) goto loc_0031E9D6; /* jne: not equal / not zero */

loc_0031E915: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031E93B; /* jne: not equal / not zero */

loc_0031E91C: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(eax + 4);
    ecx = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FBD0(); /* call 0x0032FBD0 */

loc_0031E933: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031E9D6; /* je: equal / zero */

loc_0031E93B: ;
    edx = MEM32(ebx + 0x568);
    eax = MEM32(edx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0031E9D6; /* jne: not equal / not zero */

loc_0031E952: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0031E9D6; /* je: equal / zero */

loc_0031E960: ;
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0031E96F: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031E9D6; /* je: equal / zero */

loc_0031E976: ;
    esi = MEM32(ebp + 0x1C);
    eax = ebp + 4;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031E300(); /* call 0x0031E300 */

loc_0031E983: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0031E0D0(); /* call 0x0031E0D0 */

loc_0031E98A: ;
    edx = MEM32(ebx + 0x568);
    edi = MEM32(edx + 0x444);
    PUSH32(esp, 1);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0031E9A0: ;
    eax = MEM32(ebx + 0x568);
    SET_LO8(edx, MEM8(eax + 0x48C));
    esp = esp + 4;
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(eax + 0x48C) = LO8(edx);
    eax = MEM32(ebx + 0x568);
    if (CMP_NE(MEM8(eax + 0x48C), 2)) goto loc_0031E9CF; /* jne: not equal / not zero */

loc_0031E9C6: ;
    ecx = eax;
    MEM8(ecx + 0x48C) = 0;

loc_0031E9CF: ;
    esi = ebx;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_0031E9D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E9E0
 * Original: 0x0031E9E0 - 0x0031EA18 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E9E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0031E9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2B4;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x444);
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(ecx, esi)) goto loc_0031EA14; /* jne: not equal / not zero */

loc_0031EA06: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (CMP_NE(eax, esi)) { sub_0031EA18(); return; } /* jne: not equal / not zero */

loc_0031EA14: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0031EA2A(); return; /* tail jmp 0x0031EA2A */

}

/**
 * sub_0031EF70
 * Original: 0x0031EF70 - 0x0031F15B (491 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EF70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031EF70: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x38);
    edx = MEM32(eax + 0x28);
    ecx = 0; /* xor self */
    if (CMP_EQ(edx, ecx)) { sub_0031F15B(); return; } /* je: equal / zero */

loc_0031EF88: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0x444);
    (void)0; /* cmp MEM32(eax + 0x30), ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(eax + 0x30), ecx)) goto loc_0031EFAD; /* jne: not equal / not zero */

loc_0031EF9B: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (CMP_NE(eax, ecx)) goto loc_0031F098; /* jne: not equal / not zero */

loc_0031EFAD: ;
    SET_LO8(eax, 0); /* xor self */

loc_0031EFAF: ;
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031F108; /* je: equal / zero */

loc_0031EFB9: ;
    edx = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(edx + 0x30C) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x2E7));
    edx = MEM32(esp + 0x1C);
    SET_LO8(ecx, LO8(ecx) | 0x10);
    MEM8(eax + 0x2E7) = LO8(ecx);
    ecx = MEM32(esi + 0x568);
    eax = MEM32(edx + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    MEM8(0x7FDB7C) = 1;
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0031F005: ;
    esp = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0031F00F: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0031F01F; /* jne: not equal / not zero */

loc_0031F013: ;
    if (CMP_NE(MEM32(esi + 0xA4), 0x4E2)) goto loc_0031F046; /* jne: not equal / not zero */

loc_0031F01F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(ebp) = 0x4E2;
    MEMF(ebp + 8) = xmm0; /* movss */
    MEM8(ebp + 0x1D) = 1;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(ebp);
    MEM32(eax + 0x478) = ecx;

loc_0031F046: ;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x63C) = 1;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031F152; /* je: equal / zero */

loc_0031F061: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x510));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031F0CD; /* je: equal / zero */

loc_0031F071: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x16);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_0031F07F: ;
    eax = MEM32(esi + 0x568);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM8(eax + 0x510) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031F098: ;
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0031F0A7: ;
    esp = esp + 8;
    if (CMP_NE(LO8(eax), 1)) goto loc_0031EFAF; /* jne: not equal / not zero */

loc_0031F0B2: ;
    ecx = MEM32(esi + 0x568);
    SET_LO8(edx, MEM8(ecx + 0x63D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0031EFAF; /* jne: not equal / not zero */

loc_0031F0C6: ;
    SET_LO8(ebx, LO8(eax));
    goto loc_0031EFB9;

loc_0031F0CD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax + 0x50C) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x50C))) goto loc_0031F152; /* jb: below (unsigned <) */

loc_0031F0D9: ;
    PUSH32(esp, 0x16);
    eax = esi;
    PUSH32(esp, 0); sub_000217F0(); /* call 0x000217F0 */

loc_0031F0E2: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031F152; /* jne: not equal / not zero */

loc_0031F0E9: ;
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648D20); /* movss */
    POP32(esp, edi);
    POP32(esp, ebx);
    MEMF(ecx + 0x50C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031F108: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 4);
    ecx = MEM32(edx + 0x444);
    PUSH32(esp, 0); sub_0032FC70(); /* call 0x0032FC70 */

loc_0031F120: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031F152; /* jne: not equal / not zero */

loc_0031F124: ;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0031F12B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(ebp) = 0x826;
    MEMF(ebp + 8) = xmm0; /* movss */
    MEM8(ebp + 0x1D) = 1;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(ebp);
    MEM32(ecx + 0x474) = edx;

loc_0031F152: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F1F0
 * Original: 0x0031F1F0 - 0x0031F396 (422 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F1F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F1F0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x568);
    eax = MEM32(esi + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x30);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031F217: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0031F38E; /* je: equal / zero */

loc_0031F221: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebp + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031F24A; /* je: equal / zero */

loc_0031F243: ;
    eax = ebx;
    goto loc_0031F381;

loc_0031F24A: ;
    ecx = ZX8(MEM8(ebp + 0x30));
    if (CMP_EQ(MEM32(esi + 0xA0), ecx)) goto loc_0031F26E; /* je: equal / zero */

loc_0031F256: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebp;
    eax = ebx;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0031F263: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031F26E: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0); sub_0032FC70(); /* call 0x0032FC70 */

loc_0031F27A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031F2AE; /* je: equal / zero */

loc_0031F27E: ;
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_0031F2AE; /* je: equal / zero */

loc_0031F288: ;
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_0031F2AE; /* je: equal / zero */

loc_0031F28F: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC24);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031F2AE: ;
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0031F2B7: ;
    eax = ebp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    esi = ebx;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031F2C5: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031F38E; /* jne: not equal / not zero */

loc_0031F2D0: ;
    SET_LO8(eax, MEM8(ebp + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031F2E6; /* je: equal / zero */

loc_0031F2D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x14) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031F2E6: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0031F2EE: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031F38E; /* je: equal / zero */

loc_0031F2F9: ;
    ebx = MEM32(ebx + 0xA4);
    if (CMP_EQ(ebx, 0x4E2)) goto loc_0031F313; /* je: equal / zero */

loc_0031F307: ;
    if (CMP_EQ(ebx, 0x4E1)) goto loc_0031F313; /* je: equal / zero */

loc_0031F30F: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_0031F315;

loc_0031F313: ;
    SET_LO8(eax, 1);

loc_0031F315: ;
    esi = MEM32(esp + 0x20);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ebx = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A810(); /* call 0x0031A810 */

loc_0031F326: ;
    esp = esp + 4;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0031F38E; /* je: equal / zero */

loc_0031F32D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0031F336: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0031F38E; /* je: equal / zero */

loc_0031F33D: ;
    ecx = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0031F37F; /* je: equal / zero */

loc_0031F34C: ;
    SET_LO8(eax, MEM8(ebp + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031F37F; /* jne: not equal / not zero */

loc_0031F353: ;
    xmm0 = MEMF(esi + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0031F37F; /* jp: parity */

loc_0031F368: ;
    if (CMP_EQ(MEM8(esi + 0x180), 0xFE)) goto loc_0031F37F; /* je: equal / zero */

loc_0031F371: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0031EF70(); /* call 0x0031EF70 */

loc_0031F378: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031F38E; /* jne: not equal / not zero */

loc_0031F37F: ;
    eax = esi;

loc_0031F381: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0031F38B: ;
    esp = esp + 8;

loc_0031F38E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F3A0
 * Original: 0x0031F3A0 - 0x0031F54C (428 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F3A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F3A0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    PUSH32(esp, 1);
    ebx = ebp + 4;
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0031F3BC: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031F544; /* jne: not equal / not zero */

loc_0031F3C7: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(esi + 0xA4) - flags set for next jcc */
    edi = MEM32(ebp + 0x1C);
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(ecx, MEM32(esi + 0xA4))) goto loc_0031F544; /* je: equal / zero */

loc_0031F3E6: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    eax = esp + 0x20;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0031F3F6: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) goto loc_0031F4CE; /* je: equal / zero */

loc_0031F405: ;
    if (CMP_EQ(MEM32(esi + 0xA4), ecx)) goto loc_0031F544; /* je: equal / zero */

loc_0031F411: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(edx, 0); /* xor self */
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0031F433; /* jne: not equal / not zero */

loc_0031F422: ;
    if (CMP_EQ(MEM8(eax + 0x5A8), LO8(edx))) goto loc_0031F42C; /* je: equal / zero */

loc_0031F42A: ;
    SET_LO8(edx, 1);

loc_0031F42C: ;
    MEM8(eax + 0x5A8) = 0;

loc_0031F433: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031F442; /* jne: not equal / not zero */

loc_0031F43A: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0031F4CE; /* je: equal / zero */

loc_0031F442: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0031F4BD; /* je: equal / zero */

loc_0031F447: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebp) = ecx;
    MEMF(ebx) = xmm0; /* movss */
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x474) = ecx;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0031F479; /* jne: not equal / not zero */

loc_0031F470: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_0031F479: ;
    edx = MEM32(0x847024);
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x444);
    edi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0031F499: ;
    edx = MEM32(esp + 0x1C);
    ecx = eax;
    eax = MEM32(edx + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0031F4A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0031F4B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031F4BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0031F4C3: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031F4CE: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031F517; /* je: equal / zero */

loc_0031F4D5: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x2E7) = MEM8(eax + 0x2E7) | 0x10;
    ecx = MEM32(esi + 0x568);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    eax = eax | 0xFFFFFFFFu;
    MEM8(0x7FDB7C) = 1;
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0031F4FF: ;
    edx = MEM32(esi + 0x568);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx + 0x63C) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031F517: ;
    SET_LO8(eax, MEM8(ebp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031F544; /* je: equal / zero */

loc_0031F51E: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(ebp) = 0x826;
    MEMF(ebx) = xmm0; /* movss */
    MEM8(ebp + 0x10) = 1;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(ebp);
    MEM32(eax + 0x474) = ecx;

loc_0031F544: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F550
 * Original: 0x0031F550 - 0x0031F5E1 (145 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F550(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0031F550: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    edi = esi + 0x2A8;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_0031F565: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0031F5E1(); return; } /* je: equal / zero */

loc_0031F56C: ;
    eax = MEM32(esp + 0x4C);
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
    MEMF(esi + 0x5C) = xmm0; /* movss */
    MEMF(esi + 0x54) = xmm0; /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x58) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F920
 * Original: 0x0031F920 - 0x0031FB88 (616 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F920(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0031F920: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xD4);
    esp = esp - 0x68;
    if (TEST_Z(eax, eax)) { sub_0031FB88(); return; } /* je: equal / zero */

loc_0031F935: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_0031FB88(); return; } /* je: equal / zero */

loc_0031F943: ;
    SET_LO8(edx, MEM8(eax + 0x63C));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_0031FB88(); return; } /* je: equal / zero */

loc_0031F951: ;
    eax = MEM32(ecx + 0x290);
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(ecx + 0x60) = eax;
    edx = MEM32(ecx + 0x294);
    MEM32(ecx + 0x64) = edx;
    eax = MEM32(ecx + 0x298);
    MEM32(ecx + 0x68) = eax;
    xmm0 = MEMF(ecx + 0x2CC); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x2C8); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    edx = ecx + 0x29C;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    eax = ecx + 0x2A8;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edx;
    MEMF(ecx + 0x2C8) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0031F9B9; /* jbe: below or equal (unsigned <=) */

loc_0031F9B6: ;
    xmm0 = xmm1; /* movaps */

loc_0031F9B9: ;
    SET_LO8(eax, MEM8(ecx + 0x2D0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(ecx + 0x2C8) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031FB7E; /* je: equal / zero */

loc_0031F9CF: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0031FB7E; /* jp: parity */

loc_0031F9DC: ;
    xmm0 = MEMF(ecx + 0x2D4); /* movss */
    xmm2 = MEMF(ecx + 0x2E4); /* movss */
    xmm1 = MEMF(ecx + 0x2E0); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x2D8); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x2DC); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x649530); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A814); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648F20); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x2E8); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648F5C); /* movss */
    PUSH32(esp, 0);
    eax = esp + 8;
    esi = esp + 0x2C;
    MEM32(esp + 0x40) = 2;
    MEM32(esp + 0x4C) = 0x105;
    MEM8(esp + 0x60) = 0;
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_0031FB07: ;
    xmm0 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEM32(esp + 0x40) = 2;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0031FB5A: ;
    xmm0 = xmm0 * MEMF(0x649020); /* mulss */
    xmm0 = xmm0 - MEMF(0x648EC8); /* subss */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_0031FB7B: ;
    esp = esp + 8;

loc_0031FB7E: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FB90
 * Original: 0x0031FB90 - 0x0031FC57 (199 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FB90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031FB90: ;
    eax = MEM32(esp + 0xC);
    eax = eax - 0x64;
    edx = MEM32(esp + 4);
    if ((eax == 0)) { sub_0031FC57(); return; } /* je: equal / zero */

loc_0031FBA1: ;
    eax--;
    if ((eax == 0)) goto loc_0031FC3E; /* je: equal / zero */

loc_0031FBA8: ;
    eax = eax - 9;
    if ((eax != 0)) goto loc_0031FC3D; /* jne: not equal / not zero */

loc_0031FBB1: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(edx + 0xD4))) goto loc_0031FC3D; /* jne: not equal / not zero */

loc_0031FBBF: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(edx + 0x2C4) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 0x290) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 0x294) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0x298) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edx + 0x29C) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(edx + 0x2A0) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(edx + 0x2A4) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEM8(edx + 0x2D0) = LO8(ecx);
    ecx = MEM32(eax + 0x24);
    MEM32(edx + 0x2D4) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(edx + 0x2D8) = ecx;
    ecx = MEM32(eax + 0x2C);
    MEM32(edx + 0x2DC) = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(edx + 0x2E0) = ecx;
    ecx = MEM32(eax + 0x34);
    MEM32(edx + 0x2E4) = ecx;
    eax = MEM32(eax + 0x38);
    MEM32(edx + 0x2E8) = eax;

loc_0031FC3D: ;
    esp += 4; return; /* ret */

loc_0031FC3E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(edx + 0xD4))) goto loc_0031FC3D; /* jne: not equal / not zero */

loc_0031FC4C: ;
    if (CMP_EQ(MEM32(eax + 4), 0x2D)) goto loc_0031FC3D; /* je: equal / zero */

loc_0031FC52: ;
    g_seh_ebp = ebp; sub_000DAE10(); return; /* tail jmp 0x000DAE10 */

}

/**
 * sub_0031FCA0
 * Original: 0x0031FCA0 - 0x0031FCCA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FCA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031FCA0: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = eax + eax * 2;
    eax = eax << 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    edx = MEM32(ecx + 0x568);
    ecx = ZX16(MEM16(edx + 0x2C6));
    eax = (uint32_t)((int32_t)eax >> 2);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    SET_LO8(eax, (CMP_L(ecx, eax)) ? 1 : 0); /* setl */
    esp += 4; return; /* ret */

}

/**
 * sub_0031FCD0
 * Original: 0x0031FCD0 - 0x0031FE29 (345 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FCD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031FCD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = MEM32(eax + ecx + 0x28);
    eax = eax + 0xFFFFFFA3u;
    (void)0; /* cmp eax, 7 - flags set for next jcc */
    esi = edx;
    if (CMP_A(eax, 7)) goto loc_0031FE25; /* ja: above (unsigned >) */

loc_0031FCF3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x31FE2C); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0031FCFAu) goto loc_0031FCFA;
    if (_jt == 0x0031FD01u) goto loc_0031FD01;
    if (_jt == 0x0031FD08u) goto loc_0031FD08;
    if (_jt == 0x0031FD0Fu) goto loc_0031FD0F;
    if (_jt == 0x0031FD16u) goto loc_0031FD16;
    if (_jt == 0x0031FD1Du) goto loc_0031FD1D;
    if (_jt == 0x0031FD24u) goto loc_0031FD24;
    if (_jt == 0x0031FD2Bu) goto loc_0031FD2B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031FCFA: ;
    edx = 0xE8C47C5;
    goto loc_0031FD30;

loc_0031FD01: ;
    edx = 0x425DAB5;
    goto loc_0031FD30;

loc_0031FD08: ;
    edx = 0x4CE50B5;
    goto loc_0031FD30;

loc_0031FD0F: ;
    edx = 0x92187C5;
    goto loc_0031FD30;

loc_0031FD16: ;
    edx = 0xDEF7B5;
    goto loc_0031FD30;

loc_0031FD1D: ;
    edx = 0x6E46F85;
    goto loc_0031FD30;

loc_0031FD24: ;
    edx = 0xEE7C2C5;
    goto loc_0031FD30;

loc_0031FD2B: ;
    edx = 0x3397E15;

loc_0031FD30: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm0 = MEMF(0x6491FC); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_Z(edi, edi)) goto loc_0031FD47; /* je: equal / zero */

loc_0031FD42: ;
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_0031FD57;

loc_0031FD47: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0031FD5D; /* je: equal / zero */

loc_0031FD4F: ;
    xmm0 = MEMF(0x64B29C); /* movss */

loc_0031FD57: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_0031FD5D: ;
    eax = MEM32(esi + 0x568);
    ecx = ZX16(MEM16(eax + 0x2C6));
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = eax << 2;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * MEMF(0x648F78); /* mulss */
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (TEST_NZ(eax, eax)) goto loc_0031FD9E; /* jne: not equal / not zero */

loc_0031FD99: ;
    eax = 1;

loc_0031FD9E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30AF00);
    PUSH32(esp, 0); sub_0030F240(); /* call 0x0030F240 */

loc_0031FDB4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30AEF0);
    PUSH32(esp, 0); sub_0030F240(); /* call 0x0030F240 */

loc_0031FDCA: ;
    ecx = MEM32(0x847024);
    edi = MEM32(ecx + 0x40);
    esp = esp + 0x40;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0031FDDB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031FE25; /* je: equal / zero */

loc_0031FDDF: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0031FDFC; /* je: equal / zero */

loc_0031FDE9: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0031FE02;

loc_0031FDFC: ;
    eax = MEM32(esi + 0x580);

loc_0031FE02: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = 0xDDA;
    ecx = 0x8B5;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0031FE25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FE50
 * Original: 0x0031FE50 - 0x0031FEC7 (119 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FE50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031FE50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = eax + eax * 2;
    eax = eax << 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    ebx = ecx;
    ecx = MEM32(ebx + 0x568);
    edx = ZX16(MEM16(ecx + 0x2C6));
    eax = (uint32_t)((int32_t)eax >> 2);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    SET_LO8(eax, (CMP_L(edx, eax)) ? 1 : 0); /* setl */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebp = edi + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031FEA0; /* je: equal / zero */

loc_0031FE88: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    esi = 0xB8;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_0031FE99: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0031FEB4; /* jne: not equal / not zero */

loc_0031FEA0: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    esi = 0xB0;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_0031FEB1: ;
    esp = esp + 8;

loc_0031FEB4: ;
    ecx = MEM32(edi);
    eax = MEM32(ebx + 0x568);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x474) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FED0
 * Original: 0x0031FED0 - 0x0031FF3A (106 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031FED0: ;
    eax = MEM32(edx + 0x568);
    MEM32(eax + 0xA0) = 0;
    ecx = MEM32(edx + 0x568);
    eax = MEM32(0x6BD92C);
    PUSH32(esp, ebx);
    MEM32(ecx + 0x2F8) = 0;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(0x84A63C);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_0031FF1A; /* je: equal / zero */

loc_0031FF05: ;
    ebx = MEM32(eax + 0x4C);
    if (TEST_NZ(ebx, ebx)) goto loc_0031FF13; /* jne: not equal / not zero */

loc_0031FF0C: ;
    if (CMP_EQ(MEM32(eax + 0x54), esi)) goto loc_0031FF1C; /* je: equal / zero */

loc_0031FF11: ;
    ecx = eax;

loc_0031FF13: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_0031FF05; /* jne: not equal / not zero */

loc_0031FF1A: ;
    eax = ecx;

loc_0031FF1C: ;
    ecx = MEM32(edx + 0x568);
    MEM32(ecx + 0x300) = eax;
    edx = MEM32(edx + 0x568);
    POP32(esp, esi);
    MEM16(edx + 0x2C6) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FF40
 * Original: 0x0031FF40 - 0x0031FFB4 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0031FF40: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0031FE50(); /* call 0x0031FE50 */

loc_0031FF4B: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = MEM32(esi + 0x568);
    eax = eax + eax * 2;
    eax = eax << 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    edx = ZX16(MEM16(ecx + 0x2C6));
    eax = (uint32_t)((int32_t)eax >> 2);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    SET_LO8(eax, (CMP_L(edx, eax)) ? 1 : 0); /* setl */
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = edi;
    edx = esi;
    PUSH32(esp, 0); sub_0031FCD0(); /* call 0x0031FCD0 */

loc_0031FF83: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(edi + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0031FF99: ;
    esp = esp + 0xC;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0031FFA3: ;
    edx = MEM32(esi + 0x568);
    MEM16(edx + 0x2C6) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FFC0
 * Original: 0x0031FFC0 - 0x0032018C (460 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031FFC0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = MEM32(eax + ecx + 0x28);
    eax = eax + 0xFFFFFFA3u;
    if (CMP_A(eax, 7)) goto loc_0032018A; /* ja: above (unsigned >) */

loc_0031FFDF: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x32018C); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0031FFE7u) goto loc_0031FFE7;
    if (_jt == 0x0031FFEEu) goto loc_0031FFEE;
    if (_jt == 0x0031FFF5u) goto loc_0031FFF5;
    if (_jt == 0x0031FFFCu) goto loc_0031FFFC;
    if (_jt == 0x00320003u) goto loc_00320003;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0031FFE7: ;
    esi = 0x952;
    goto loc_00320008;

loc_0031FFEE: ;
    esi = 0x953;
    goto loc_00320008;

loc_0031FFF5: ;
    esi = 0x950;
    goto loc_00320008;

loc_0031FFFC: ;
    esi = 0xA44;
    goto loc_00320008;

loc_00320003: ;
    esi = 0x951;

loc_00320008: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    if (TEST_NZ(esi, esi)) goto loc_0032001A; /* jne: not equal / not zero */

loc_00320015: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_00320039;

loc_0032001A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00320039: ;
    edx = MEM32(edi + 0x568);
    MEM32(edx + 0x4E8) = eax;
    eax = MEM32(edi + 0x568);
    if (CMP_EQ(MEM32(eax + 0x4E8), 0xFFFFFFFFu)) goto loc_00320189; /* je: equal / zero */

loc_00320058: ;
    ecx = eax;
    MEM32(ecx + 0x4EC) = esi;
    edx = MEM32(edi + 0x568);
    eax = MEM32(edx + 0x4E8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_S(eax, eax)) goto loc_00320098; /* jl: less (signed <) */

loc_00320071: ;
    ecx = MEM32(0x84706C);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx);
    eax = MEM32(ecx + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_00320098; /* je: equal / zero */

loc_00320083: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_00320091; /* je: equal / zero */

loc_0032008A: ;
    eax = MEM32(eax + 0x1C);
    ebx = eax;
    goto loc_0032009B;

loc_00320091: ;
    eax = eax | 0xFFFFFFFFu;
    ebx = eax;
    goto loc_0032009B;

loc_00320098: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0032009B: ;
    edx = MEM32(0x847024);
    ecx = MEM32(edx + 0x44);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_00034EF0(); /* call 0x00034EF0 */

loc_003200AC: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320116; /* je: equal / zero */

loc_003200B5: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x6382B0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_003200C5: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x6390AC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_003200D5: ;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0x4E8);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x639090);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_003200F2: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x639074);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00320103: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x639054);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00320113: ;
    esp = esp + 0x1C;

loc_00320116: ;
    edx = MEM32(0x847024);
    ebx = MEM32(edx + 0x40);
    esi = edi;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00320126: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032016C; /* je: equal / zero */

loc_0032012A: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00320146; /* je: equal / zero */

loc_00320134: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0032014C;

loc_00320146: ;
    eax = MEM32(edi + 0x580);

loc_0032014C: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = edi + 0x78;
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0x94E;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0032016C: ;
    SET_LO8(eax, MEM8(0x846FF8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320189; /* je: equal / zero */

loc_00320176: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x6382B0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00320186: ;
    esp = esp + 4;

loc_00320189: ;
    POP32(esp, esi);

loc_0032018A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003201B0
 * Original: 0x003201B0 - 0x003202FA (330 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003201B0(void)
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

loc_003201B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x38);
    edx = MEM32(ecx + 0x28);
    if (TEST_Z(edx, edx)) goto loc_003202DF; /* je: equal / zero */

loc_003201C1: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM16(eax + 0x2C6), 0)) goto loc_0032023F; /* jne: not equal / not zero */

loc_003201D1: ;
    eax = MEM32(eax + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_003202F6; /* jne: not equal / not zero */

loc_003201E2: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_003202F6; /* je: equal / zero */

loc_003201F4: ;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_00320204: ;
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003202F6; /* je: equal / zero */

loc_00320210: ;
    fp_push(MEMF(0x7F9F5C)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0032021B: ;
    ecx = MEM32(esi + 0x568);
    eax = eax << 2;
    MEM16(ecx + 0x2C6) = LO16(eax);
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_0031FFC0(); /* call 0x0031FFC0 */

loc_00320234: ;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0032023B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032023F: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(eax + 0x30C) = xmm0; /* movss */
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00320256: ;
    edx = MEM32(esi + 0x568);
    eax = ZX16(MEM16(edx + 0x2C6));
    if (CMP_LE(eax, MEM32(0x7FA20C))) goto loc_0032028C; /* jle: less or equal (signed <=) */

loc_0032026B: ;
    PUSH32(esp, 0); sub_002E5C00(); /* call 0x002E5C00 */

loc_00320270: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003202DB; /* jne: not equal / not zero */

loc_00320274: ;
    esi = MEM32(esi + 0x568);
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(esi + 0x2C6) = MEM16(esi + 0x2C6) - LO16(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032028C: ;
    edx = esi;
    PUSH32(esp, 0); sub_0031FED0(); /* call 0x0031FED0 */

loc_00320293: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0x4E8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003202C8; /* je: equal / zero */

loc_003202A4: ;
    PUSH32(esp, 0); sub_000216B0(); /* call 0x000216B0 */

loc_003202A9: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000256B0(); /* call 0x000256B0 */

loc_003202B8: ;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x4E8) = 0xFFFFFFFFu;

loc_003202C8: ;
    eax = 1;
    ecx = esi;
    MEM8(esi + 0x234) = 0;
    PUSH32(esp, 0); sub_002FBDE0(); /* call 0x002FBDE0 */

loc_003202DB: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003202DF: ;
    ecx = MEM32(esi + 0x568);
    if (CMP_EQ(MEM16(ecx + 0x2C6), 0)) goto loc_003202F6; /* je: equal / zero */

loc_003202EF: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0031FF40(); /* call 0x0031FF40 */

loc_003202F6: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00320300
 * Original: 0x00320300 - 0x00320372 (114 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320300: ;
    ecx = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_00320371; /* je: equal / zero */

loc_0032030F: ;
    if (CMP_EQ(MEM16(ecx + 0x2C6), 0)) goto loc_00320371; /* je: equal / zero */

loc_00320319: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xA0);
    eax = edi;
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_00320327: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320370; /* je: equal / zero */

loc_0032032B: ;
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00320336: ;
    edi = eax;
    PUSH32(esp, 0);
    eax = 1;
    ecx = edi;
    edx = esi;
    PUSH32(esp, 0); sub_0031FCD0(); /* call 0x0031FCD0 */

loc_00320348: ;
    edx = esi;
    PUSH32(esp, 0); sub_0031FED0(); /* call 0x0031FED0 */

loc_0032034F: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(edi + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00320365: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002FC240(); return; /* tail jmp 0x002FC240 */

loc_00320370: ;
    POP32(esp, edi);

loc_00320371: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320380
 * Original: 0x00320380 - 0x003205D6 (598 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320380: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_003203A5: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003205CE; /* je: equal / zero */

loc_003203AF: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003205BF; /* jne: not equal / not zero */

loc_003203D5: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_003203FB; /* je: equal / zero */

loc_003203E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_003203F0: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003203FB: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_00320404: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320435; /* je: equal / zero */

loc_0032040B: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM16(eax + 0x2C6), 0)) goto loc_00320435; /* je: equal / zero */

loc_0032041B: ;
    ecx = edi;
    eax = ebx;
    esi = ebp;
    PUSH32(esp, 0); sub_0031FF40(); /* call 0x0031FF40 */

loc_00320426: ;
    edx = ebp;
    PUSH32(esp, 0); sub_0031FED0(); /* call 0x0031FED0 */

loc_0032042D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00320435: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320466; /* je: equal / zero */

loc_0032043C: ;
    MEM32(ebx + 0x14) = 0;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM16(ecx + 0x2C6), 0)) goto loc_003205CE; /* je: equal / zero */

loc_00320457: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00320300(); /* call 0x00320300 */

loc_0032045E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00320466: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032046E: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003205CE; /* je: equal / zero */

loc_00320479: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x474);
    if (CMP_EQ(eax, MEM32(ebp + 0xA4))) goto loc_003205CE; /* je: equal / zero */

loc_00320491: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_003204A1: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00320579; /* je: equal / zero */

loc_003204B0: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_003205CE; /* je: equal / zero */

loc_003204BC: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_003204E2; /* jne: not equal / not zero */

loc_003204CF: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003204DB; /* je: equal / zero */

loc_003204D9: ;
    SET_LO8(ecx, 1);

loc_003204DB: ;
    MEM8(eax + 0x5A8) = 0;

loc_003204E2: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003204F1; /* jne: not equal / not zero */

loc_003204E9: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00320579; /* je: equal / zero */

loc_003204F1: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00320568; /* je: equal / zero */

loc_003204F6: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebx) = esi;
    MEMF(ebx + 8) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = esi;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00320528; /* jne: not equal / not zero */

loc_0032051F: ;
    eax = edx;
    MEM8(eax + 0x5A8) = 1;

loc_00320528: ;
    edx = MEM32(ebp + 0x568);
    ecx = MEM32(0x847024);
    eax = MEM32(edx + 0x444);
    esi = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00320548: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00320554: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00320560: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00320568: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032056E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00320579: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_00320584: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_003205CE; /* je: equal / zero */

loc_0032058B: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_003205BF; /* je: equal / zero */

loc_0032059A: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003205BF; /* jne: not equal / not zero */

loc_003205A1: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_003205BF; /* je: equal / zero */

loc_003205AA: ;
    eax = MEM32(esp + 0x28);
    ebx = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_003201B0(); /* call 0x003201B0 */

loc_003205B7: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003205CE; /* jne: not equal / not zero */

loc_003205BB: ;
    ebx = MEM32(esp + 0x28);

loc_003205BF: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_003205CB: ;
    esp = esp + 8;

loc_003205CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003205E0
 * Original: 0x003205E0 - 0x00320621 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003205E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003205E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x568);
    eax = MEM32(ebp + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_003205F6: ;
    ecx = eax;
    SET_LO8(eax, MEM8(esi + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00320621(); return; } /* je: equal / zero */

loc_003205FF: ;
    if (CMP_NE(MEM32(ebp + 0x4E8), 0xFFFFFFFFu)) goto loc_0032060F; /* jne: not equal / not zero */

loc_00320608: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0031FFC0(); /* call 0x0031FFC0 */

loc_0032060F: ;
    eax = MEM32(ebx + 0x568);
    POP32(esp, edi);
    MEM16(eax + 0x2C6) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00320680
 * Original: 0x00320680 - 0x00320753 (211 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320680(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00320680: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x64935C); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    xmm1 = MEMF(esi + 0x640); /* movss */
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm1 <= MEMF(0x648CF8))) goto loc_003206AD; /* jbe: below or equal (unsigned <=) */

loc_003206A3: ;
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 4) = xmm1; /* movss */

loc_003206AD: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, esi);
    MEM32(0x7FDBF8) = edi;
    MEM32(0x7FDBF4) = edi;
    MEM32(0x7FDBF0) = edi;
    MEM32(0x7FDBEC) = 0x14;
    MEM32(0x7FDBE8) = edi;
    PUSH32(esp, 0); sub_001A7F50(); /* call 0x001A7F50 */

loc_003206DF: ;
    eax = MEM32(esp + 0x18);
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x41700000);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x60728B5);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030AF80(); /* call 0x0030AF80 */

loc_00320703: ;
    esp = esp + 0x30;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(eax, edi)) goto loc_00320750; /* je: equal / zero */

loc_0032070B: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    ecx = MEM32(ecx + edx + 0x14);
    ecx = ecx - 0x50;
    if ((ecx == 0)) goto loc_00320746; /* je: equal / zero */

loc_00320720: ;
    ecx--;
    if ((ecx != 0)) goto loc_00320750; /* jne: not equal / not zero */

loc_00320723: ;
    MEM32(eax + 0x530) = 2;
    esi = MEM32(esi + 0x568);
    MEM8(esi + 0x608) = MEM8(esi + 0x608) + 1;
    MEM32(eax + 0x200) = MEM32(eax + 0x200) | 0x1000000;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00320746: ;
    MEM32(eax + 0x530) = 1;

loc_00320750: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320760
 * Original: 0x00320760 - 0x003208DD (381 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320760(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00320760: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x568);
    xmm0 = MEMF(eax + 0x390); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003208D8; /* jp: parity */

loc_00320785: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi) = 0xFFFFFFFFu;
    MEMF(esi + 8) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    ecx = 0; /* xor self */
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0032086D; /* je: equal / zero */

loc_003207AE: ;
    eax--;
    if ((eax == 0)) goto loc_0032081A; /* je: equal / zero */

loc_003207B1: ;
    eax--;
    if ((eax != 0)) goto loc_003208C7; /* jne: not equal / not zero */

loc_003207B8: ;
    eax = esp + 8;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_003207CF: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003208C5; /* je: equal / zero */

loc_003207DA: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_003207FB; /* je: equal / zero */

loc_003207E2: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003207FB; /* je: equal / zero */

loc_003207E7: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003207FB; /* je: equal / zero */

loc_003207ED: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (TEST_NZ(ecx, ecx)) goto loc_003208B7; /* jne: not equal / not zero */

loc_003207FB: ;
    eax = MEM32(esp + 8);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003208C5; /* je: equal / zero */

loc_00320808: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003208C5; /* je: equal / zero */

loc_00320812: ;
    eax = eax + 0x10;
    goto loc_003208B2;

loc_0032081A: ;
    eax = esp + 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00320831: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003208C5; /* je: equal / zero */

loc_0032083C: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00320859; /* je: equal / zero */

loc_00320844: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_00320859; /* je: equal / zero */

loc_00320849: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00320859; /* je: equal / zero */

loc_0032084F: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_003208B7; /* jne: not equal / not zero */

loc_00320859: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003208C5; /* je: equal / zero */

loc_00320862: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003208C5; /* je: equal / zero */

loc_00320868: ;
    eax = eax + 8;
    goto loc_003208B2;

loc_0032086D: ;
    eax = esp + 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00320884: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003208C5; /* je: equal / zero */

loc_0032088B: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_003208A3; /* je: equal / zero */

loc_00320893: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003208A3; /* je: equal / zero */

loc_00320898: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003208A3; /* je: equal / zero */

loc_0032089E: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_003208B7; /* jne: not equal / not zero */

loc_003208A3: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003208C5; /* je: equal / zero */

loc_003208AC: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003208C5; /* je: equal / zero */

loc_003208B2: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_003208C5; /* je: equal / zero */

loc_003208B7: ;
    if (TEST_Z(eax, eax)) goto loc_003208C5; /* je: equal / zero */

loc_003208BB: ;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    eax = MEM32(eax + 4);
    MEM32(esi + 8) = eax;

loc_003208C5: ;
    ecx = 0; /* xor self */

loc_003208C7: ;
    edx = MEM32(esi);
    MEM8(esi + 0x1D) = LO8(ecx);
    ecx = MEM32(ebx + 0x568);
    MEM32(ecx + 0x474) = edx;

loc_003208D8: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003208E0
 * Original: 0x003208E0 - 0x003208F9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003208E0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003208E0: ;
    eax = MEM32(ebx + 0x568);
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    MEM8(eax + 0x608) = 0;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00320900(); return; /* tail jmp 0x00320900 */

}

/**
 * sub_003209D0
 * Original: 0x003209D0 - 0x00320B9C (460 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003209D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003209D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(eax + 0x608));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320A37; /* je: equal / zero */

loc_003209EA: ;
    if (CMP_NE(MEM32(esp + 0x1C), 0x51)) goto loc_00320A28; /* jne: not equal / not zero */

loc_003209F1: ;
    if (CMP_BE(LO8(eax), 1)) goto loc_00320A01; /* jbe: below or equal (unsigned <=) */

loc_003209F5: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 0x28);
    if (TEST_Z(edx, edx)) goto loc_00320A28; /* je: equal / zero */

loc_003209FF: ;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */

loc_00320A01: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00320A37; /* jne: not equal / not zero */

loc_00320A03: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00320A37; /* je: equal / zero */

loc_00320A0D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ebx = ebp;
    PUSH32(esp, 0); sub_003208E0(); /* call 0x003208E0 */

loc_00320A19: ;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x609) = 1;
    goto loc_00320A34;

loc_00320A28: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ebx = ebp;
    PUSH32(esp, 0); sub_003208E0(); /* call 0x003208E0 */

loc_00320A34: ;
    esp = esp + 4;

loc_00320A37: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x609));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00320A63; /* je: equal / zero */

loc_00320A47: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 0x28);
    if (TEST_NZ(edx, edx)) goto loc_00320B95; /* jne: not equal / not zero */

loc_00320A55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 0x609) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00320A63: ;
    edx = MEM32(esi + 0x38);
    edi = MEM32(edx + 0x28);
    eax = MEM32(eax + 0x444);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    MEM8(esp + 0x14) = LO8(ecx);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_00320B5D; /* jne: not equal / not zero */

loc_00320A83: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_00320B5D; /* je: equal / zero */

loc_00320A95: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_00320AA7: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320B5D; /* je: equal / zero */

loc_00320AB2: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_00320B18; /* je: equal / zero */

loc_00320ABC: ;
    edx = MEM32(esp + 0x18);
    eax = ebp;
    PUSH32(esp, 0); sub_00320760(); /* call 0x00320760 */

loc_00320AC7: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8B9);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00320AE6: ;
    ebx = MEM32(esp + 0x18);
    eax = ebp;
    PUSH32(esp, 0); sub_00320680(); /* call 0x00320680 */

loc_00320AF1: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ebx + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00320B07: ;
    esp = esp + 4;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00320B11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00320B18: ;
    if (CMP_NE(MEM32(esp + 0x1C), 0x51)) goto loc_00320B95; /* jne: not equal / not zero */

loc_00320B1F: ;
    ecx = MEM32(eax + 0xC8);
    if (TEST_Z(ecx, ecx)) goto loc_00320B95; /* je: equal / zero */

loc_00320B29: ;
    edx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(edx + 0x608));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00320B48; /* jbe: below or equal (unsigned <=) */

loc_00320B39: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ebx = ebp;
    PUSH32(esp, 0); sub_003208E0(); /* call 0x003208E0 */

loc_00320B45: ;
    esp = esp + 4;

loc_00320B48: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx + 0x2E4) = 1;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00320B5D: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00320B95; /* je: equal / zero */

loc_00320B67: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8BA);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00320B86: ;
    eax = MEM32(ebp + 0x568);
    MEM16(eax + 0x2D0) = 0xFFFF;

loc_00320B95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320BA0
 * Original: 0x00320BA0 - 0x00320DBF (543 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320BA0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00320BC0: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00320DB8; /* je: equal / zero */

loc_00320BCA: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00320DA9; /* jne: not equal / not zero */

loc_00320BF0: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_00320C15; /* je: equal / zero */

loc_00320BFE: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_00320C0B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00320C15: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_00320C1E: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00320C30: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00320DB8; /* jne: not equal / not zero */

loc_00320C3B: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320C50; /* je: equal / zero */

loc_00320C42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00320C50: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_00320C58: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320DB8; /* je: equal / zero */

loc_00320C63: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_00320DB8; /* je: equal / zero */

loc_00320C7B: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00320C8B: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00320D63; /* je: equal / zero */

loc_00320C9A: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_00320DB8; /* je: equal / zero */

loc_00320CA6: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00320CCC; /* jne: not equal / not zero */

loc_00320CB9: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00320CC5; /* je: equal / zero */

loc_00320CC3: ;
    SET_LO8(ecx, 1);

loc_00320CC5: ;
    MEM8(eax + 0x5A8) = 0;

loc_00320CCC: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00320CDB; /* jne: not equal / not zero */

loc_00320CD3: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00320D63; /* je: equal / zero */

loc_00320CDB: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00320D53; /* je: equal / zero */

loc_00320CE0: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00320D15; /* jne: not equal / not zero */

loc_00320D0C: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_00320D15: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00320D34: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00320D40: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00320D4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00320D53: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00320D59: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00320D63: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_00320D6E: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00320DB8; /* je: equal / zero */

loc_00320D75: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_00320DA9; /* je: equal / zero */

loc_00320D84: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00320DA9; /* jne: not equal / not zero */

loc_00320D8B: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_00320DA9; /* je: equal / zero */

loc_00320D94: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_003209D0(); /* call 0x003209D0 */

loc_00320DA2: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00320DB8; /* jne: not equal / not zero */

loc_00320DA9: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_00320DB5: ;
    esp = esp + 8;

loc_00320DB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00320DC0
 * Original: 0x00320DC0 - 0x00320F75 (437 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320DC0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    edi = MEM32(ebx + 0x1C);
    eax = ebx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00320DE2: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00320F6D; /* jne: not equal / not zero */

loc_00320DED: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(ebp + 0xA4) - flags set for next jcc */
    edi = MEM32(ebx + 0x1C);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_00320F6D; /* je: equal / zero */

loc_00320E08: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    eax = esp + 0x18;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00320E18: ;
    esi = MEM32(esp + 0x18);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00320EF2; /* je: equal / zero */

loc_00320E27: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_00320F6D; /* je: equal / zero */

loc_00320E33: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00320E59; /* jne: not equal / not zero */

loc_00320E46: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00320E52; /* je: equal / zero */

loc_00320E50: ;
    SET_LO8(ecx, 1);

loc_00320E52: ;
    MEM8(eax + 0x5A8) = 0;

loc_00320E59: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00320E68; /* jne: not equal / not zero */

loc_00320E60: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00320EF2; /* je: equal / zero */

loc_00320E68: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00320EE1; /* je: equal / zero */

loc_00320E6D: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00320EA2; /* jne: not equal / not zero */

loc_00320E99: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_00320EA2: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00320EC1: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00320ECD: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00320ED9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00320EE1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00320EE7: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00320EF2: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320F6D; /* je: equal / zero */

loc_00320EF9: ;
    edx = MEM32(ebp + 0x568);
    xmm0 = MEMF(edx + 0x390); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00320F3E; /* jp: parity */

loc_00320F14: ;
    eax = MEM32(ebx + 0x1C);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    ecx = 1;
    PUSH32(esp, 0); sub_002B1600(); /* call 0x002B1600 */

loc_00320F29: ;
    edx = MEM32(ebx);
    MEM8(ebx + 0x10) = 0;
    ecx = MEM32(ebp + 0x568);
    esp = esp + 8;
    MEM32(ecx + 0x474) = edx;

loc_00320F3E: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8B9);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00320F5C: ;
    ebx = MEM32(ebx + 0x1C);
    eax = ebp;
    PUSH32(esp, 0); sub_00320680(); /* call 0x00320680 */

loc_00320F66: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_00320F6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00320F80
 * Original: 0x00320F80 - 0x00320FA0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320F80(void)
{

loc_00320F80: ;
    ecx = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x66);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_00320F9C: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00320FA0
 * Original: 0x00320FA0 - 0x0032129F (767 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320FA0(void)
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

loc_00320FA0: ;
    esp = esp - 0x44;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x5A0060); /* movss */
    PUSH32(esp, edi);
    edi = ecx;
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00320FCB; /* je: equal / zero */

loc_00320FB8: ;
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001EE240(); /* call 0x001EE240 */

loc_00320FC8: ;
    esp = esp + 0xC;

loc_00320FCB: ;
    eax = MEM32(edi + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_0032129A; /* je: equal / zero */

loc_00320FDE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_00320FE4: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00320FFE; /* je: equal / zero */

loc_00320FED: ;
    edx = 0x54;

loc_00320FF2: ;
    if (CMP_EQ(MEM32(eax + 4), edx)) goto loc_00321000; /* je: equal / zero */

loc_00320FF7: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_00320FF2; /* jne: not equal / not zero */

loc_00320FFE: ;
    eax = ecx;

loc_00321000: ;
    if (CMP_NE(eax, ecx)) goto loc_00321008; /* jne: not equal / not zero */

loc_00321004: ;
    eax = 0; /* xor self */
    goto loc_0032100A;

loc_00321008: ;
    eax = MEM32(eax);

loc_0032100A: ;
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00321298; /* je: equal / zero */

loc_0032101B: ;
    SET_LO8(ecx, MEM8(edi + 0x10B));
    PUSH32(esp, ebp);
    edx = esp + 0x30;
    PUSH32(esp, 0x70);
    PUSH32(esp, edx);
    eax = 0x7A;
    MEM32(esp + 0x38) = edi;
    MEM8(esp + 0x3C) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0032103B: ;
    xmm0 = MEMF(0x5A0060); /* movss */
    ebp = edi + 0x78;
    eax = ebp;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, edx);
    eax = 0x870ED4;
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001D6A50(); /* call 0x001D6A50 */

loc_00321079: ;
    esi = MEM32(eax);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    SET_LO8(ecx, MEM8(edi + 0x10B));
    MEM32(esp + 0x38) = edi;
    MEM8(esp + 0x3C) = LO8(ecx);
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(esi, ebx)) goto loc_00321283; /* je: equal / zero */

loc_00321099: ;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_003210A0: ;
    eax = MEM32(esi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_003210B1; /* je: equal / zero */

loc_003210A7: ;
    edx = ZX16(MEM16(eax + 0xE));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    goto loc_003210B9;

loc_003210B1: ;
    xmm3 = MEMF(0x648F08); /* movss */

loc_003210B9: ;
    ebx = esi + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003210C3: ;
    xmm1 = MEMF(esi + 0x260); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_003211C0; /* jbe: below or equal (unsigned <=) */

loc_003210EB: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(ebp); /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(edi + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x80); /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_00321123; /* jp: parity */

loc_00321116: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00321123; /* jp: parity */

loc_0032111F: ;
    eax = 0; /* xor self */
    goto loc_0032114F;

loc_00321123: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00321137: ;
    MEMF(esp + 0x28) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0032114F: ;
    ecx = MEM32(edi + 0x568);
    xmm0 = MEMF(ecx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x6491F8); /* mulss */
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x174));
    edx = (int32_t)xmm0; /* cvttss2si */
    SET_LO16(ecx, LO16(ecx) - LO16(edx));
    ecx = ecx - eax;
    ecx = ecx - 0x4000;
    edx = SX16(LO16(ecx));
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E5C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003211C0; /* jbe: below or equal (unsigned <=) */

loc_00321199: ;
    edx = esi;
    PUSH32(esp, 0); sub_003433A0(); /* call 0x003433A0 */

loc_003211A0: ;
    if (TEST_Z(eax, eax)) goto loc_003211C0; /* je: equal / zero */

loc_003211A4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_003211AC: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_003211C0; /* jne: not equal / not zero */

loc_003211B0: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEM32(esp + 0x18) = esi;
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_003211C0: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 4);
    eax = eax + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (TEST_NZ(esi, esi)) goto loc_003210A0; /* jne: not equal / not zero */

loc_003211D6: ;
    esi = MEM32(esp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_00321283; /* je: equal / zero */

loc_003211E2: ;
    eax = MEM32(esp + 0x2C);
    xmm0 = MEMF(eax + 0x20); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003211F6: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_00321232; /* jne: not equal / not zero */

loc_003211FF: ;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00321232; /* je: equal / zero */

loc_00321209: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0032120E: ;
    edx = 0x6390D0;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00321218: ;
    if (TEST_Z(eax, eax)) goto loc_00321232; /* je: equal / zero */

loc_0032121C: ;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x90); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    goto loc_00321238;

loc_00321232: ;
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_00321238: ;
    eax = MEM32(edi + 0x568);
    MEM32(esp + 0x40) = esi;
    /* comiss xmm0, MEMF(eax + 0x604) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x604))) goto loc_0032126D; /* jbe: below or equal (unsigned <=) */

loc_0032124B: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    POP32(esp, ebp);
    edi = eax;
    xmm0 = xmm0 + MEMF(edi + 0x604); /* addss */
    POP32(esp, ebx);
    POP32(esp, esi);
    MEMF(edi + 0x604) = xmm0; /* movss */
    POP32(esp, edi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0032126D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x604) = xmm0; /* movss */
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_00320F80(); /* call 0x00320F80 */

loc_00321280: ;
    esp = esp + 4;

loc_00321283: ;
    edx = esp + 0x38;
    PUSH32(esp, 0x71);
    PUSH32(esp, edx);
    eax = 0x7A;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00321294: ;
    esp = esp + 8;
    POP32(esp, ebp);

loc_00321298: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_0032129A: ;
    POP32(esp, edi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003212A0
 * Original: 0x003212A0 - 0x00321380 (224 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003212A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003212A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(eax + 0x28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(esi + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_00321380(); return; } /* je: equal / zero */

loc_003212B9: ;
    xmm0 = MEMF(0x648E14); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x63D));
    edx = ecx;
    MEMF(edx + 0x30C) = xmm0; /* movss */
    ecx = MEM32(esi + 0x568);
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x444);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, 1);
    SET_LO8(ebx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_003212F2: ;
    esp = esp + 4;
    SET_LO8(eax, LO8(ebx));
    ecx = esi;
    PUSH32(esp, 0); sub_00320FA0(); /* call 0x00320FA0 */

loc_003212FE: ;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00321305: ;
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00321346; /* je: equal / zero */

loc_0032130F: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(ecx + 0x3F4);
    ebx = MEM32(edx + 8);
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    eax = eax + eax + 0xC91;
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00321346: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xC10);
    eax = esi;
    PUSH32(esp, 0); sub_0031A2F0(); /* call 0x0031A2F0 */

loc_00321354: ;
    edx = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648E14); /* movss */
    esp = esp + 8;
    MEMF(edx + 0x30C) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM8(eax + 0x63C) = 1;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003213A0
 * Original: 0x003213A0 - 0x003215E8 (584 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003213A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003213A0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_003213C0: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003215E1; /* je: equal / zero */

loc_003213CA: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003213F8; /* je: equal / zero */

loc_003213EC: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003217C0(); /* call 0x003217C0 */

loc_003213F3: ;
    goto loc_003215D2;

loc_003213F8: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_0032141D; /* je: equal / zero */

loc_00321406: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_00321413: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032141D: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_00321426: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00321438: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00321570; /* jne: not equal / not zero */

loc_00321443: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032145F; /* je: equal / zero */

loc_0032144C: ;
    MEM32(ebx + 0x14) = 0;
    PUSH32(esp, 0); sub_003217C0(); /* call 0x003217C0 */

loc_00321458: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032145F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_00321465: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00321570; /* je: equal / zero */

loc_00321470: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_00321570; /* je: equal / zero */

loc_00321488: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00321498: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0032157E; /* je: equal / zero */

loc_003214A7: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_00321570; /* je: equal / zero */

loc_003214B3: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_003214D9; /* jne: not equal / not zero */

loc_003214C6: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003214D2; /* je: equal / zero */

loc_003214D0: ;
    SET_LO8(ecx, 1);

loc_003214D2: ;
    MEM8(eax + 0x5A8) = 0;

loc_003214D9: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003214E8; /* jne: not equal / not zero */

loc_003214E0: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032157E; /* je: equal / zero */

loc_003214E8: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00321567; /* je: equal / zero */

loc_003214ED: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00321522; /* jne: not equal / not zero */

loc_00321519: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_00321522: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00321541: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032154D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00321559: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003217C0(); /* call 0x003217C0 */

loc_00321560: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00321567: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032156D: ;
    esp = esp + 4;

loc_00321570: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003217C0(); /* call 0x003217C0 */

loc_00321577: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032157E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_00321589: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00321570; /* je: equal / zero */

loc_00321590: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_003215D2; /* je: equal / zero */

loc_0032159F: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003215D2; /* jne: not equal / not zero */

loc_003215A6: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003215D2; /* jp: parity */

loc_003215BB: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_003215D2; /* je: equal / zero */

loc_003215C4: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003212A0(); /* call 0x003212A0 */

loc_003215CB: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003215E1; /* jne: not equal / not zero */

loc_003215D2: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_003215DE: ;
    esp = esp + 8;

loc_003215E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003215F0
 * Original: 0x003215F0 - 0x00321650 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003215F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003215F0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    esi = eax;
    eax = ebp + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032160F: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00321650(); return; } /* je: equal / zero */

loc_00321616: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    ecx = esp + 0x10;
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    eax = 0x56;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00321635: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    eax = 0x7A;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00321646: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003217C0
 * Original: 0x003217C0 - 0x003217F5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003217C0(void)
{

loc_003217C0: ;
    esp = esp - 8;
    MEM32(esp) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    ecx = esp;
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    eax = 0x56;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_003217E0: ;
    edx = esp + 8;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    eax = 0x7A;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_003217F1: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00321800
 * Original: 0x00321800 - 0x00321895 (149 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321800(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00321800: ;
    if (CMP_NE(eax, 0x13)) goto loc_0032183C; /* jne: not equal / not zero */

loc_00321805: ;
    SET_LO8(eax, MEM8(esp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032183C; /* jne: not equal / not zero */

loc_0032180D: ;
    if (CMP_BE(MEM16(esi + 0x3AE), 0)) goto loc_0032183C; /* jbe: below or equal (unsigned <=) */

loc_00321817: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x5DD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00321894; /* jne: not equal / not zero */

loc_00321827: ;
    MEM8(eax + 0x5DD) = 1;
    PUSH32(esp, 0x5F5334);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0032183A: ;
    goto loc_0032185E;

loc_0032183C: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM8(eax + 0x5DD), 1)) goto loc_00321894; /* jne: not equal / not zero */

loc_0032184B: ;
    MEM8(eax + 0x5DD) = 0;
    PUSH32(esp, 0x5F5334);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0032185E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x62C) = xmm0; /* movss */
    MEMF(esi + 0x624) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esi + 0x628) = xmm1; /* movss */
    esp = esp + 4;
    MEMF(esi + 0x630) = xmm0; /* movss */

loc_00321894: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003218A0
 * Original: 0x003218A0 - 0x00321901 (97 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003218A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003218A0: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    MEM32(ebx) = 0xFFFFFFFFu;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(ebp) = xmm0; /* movss */
    ecx = MEM32(esi + 0x568);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x54C);
    edi--;
    if (((int32_t)edi >= 0)) goto loc_003218D9; /* jns: not sign (positive) */

loc_003218D7: ;
    edi = 0; /* xor self */

loc_003218D9: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00311560(); /* call 0x00311560 */

loc_003218E0: ;
    edx = MEM32(esi + 0x568);
    xmm0 = MEMF(edx + 0x390); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    ecx = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00321901(); return; } /* jnp: not parity */

loc_003218FD: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00321903(); return; /* tail jmp 0x00321903 */

}

/**
 * sub_00321990
 * Original: 0x00321990 - 0x00322118 (1928 bytes, 453 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321990: ;
    esp = esp - 0x10;
    eax = eax - 0x12;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((eax == 0)) goto loc_00321CA1; /* je: equal / zero */

loc_003219A6: ;
    eax--;
    if ((eax != 0)) goto loc_0032210E; /* jne: not equal / not zero */

loc_003219AD: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x5DC) = 1;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 0x28);
    if (TEST_Z(eax, eax)) goto loc_00321ACE; /* je: equal / zero */

loc_003219C8: ;
    edx = MEM32(ebp + 0xA4);
    if (CMP_EQ(edx, 0x5AC)) goto loc_00321AC6; /* je: equal / zero */

loc_003219DA: ;
    if (CMP_EQ(edx, 0x5AD)) goto loc_00321AC6; /* je: equal / zero */

loc_003219E6: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(ecx + 0x56C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00321A22; /* jp: parity */

loc_00321A00: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC65);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00321A1F: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_00321A22: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648E14); /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    MEMF(ecx + 0x30C) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(edx + 0x518) = xmm2; /* movss */
    eax = MEM32(ebp + 0x568);
    /* comiss xmm0, MEMF(eax + 0x56C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x56C))) goto loc_00321A7D; /* jbe: below or equal (unsigned <=) */

loc_00321A65: ;
    xmm0 = MEMF(eax + 0x56C); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    MEMF(eax + 0x56C) = xmm0; /* movss */

loc_00321A7D: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = MEMF(eax + 0x56C); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00321AA7; /* ja: above (unsigned >) */

loc_00321A9A: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00321AAD; /* jbe: below or equal (unsigned <=) */

loc_00321AA7: ;
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_00321AAD: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    esi = ebp;
    PUSH32(esp, 0); sub_000AA770(); /* call 0x000AA770 */

loc_00321AB9: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00321AC6: ;
    if (TEST_NZ(eax, eax)) goto loc_00321BEA; /* jne: not equal / not zero */

loc_00321ACE: ;
    eax = MEM32(ecx + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00321BEA; /* je: equal / zero */

loc_00321AD9: ;
    edx = MEM32(ebp + 0x568);
    xmm0 = MEMF(edx + 0x56C); /* movss */
    /* comiss xmm0, MEMF(0x648CE0) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CE0))) goto loc_00321BB9; /* jb: below (unsigned <) */

loc_00321AF4: ;
    edi = ebp;
    PUSH32(esp, 0); sub_000AACB0(); /* call 0x000AACB0 */

loc_00321AFB: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(0x847024);
    MEMF(eax + 0x56C) = xmm0; /* movss */
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    ebx = ebp;
    eax = 0xC65;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_00321B22: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC66);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00321B40: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x16);
    eax = ebp;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00321B4E: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00321B68: ;
    esp = esp + 0xC;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00321B72: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648D14); /* movss */
    eax = 0x5AC;
    MEM32(ecx + 0x47C) = eax;
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(esi) = eax;
    POP32(esp, edi);
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEM8(esi + 0x1D) = 0;
    edx = MEM32(ebp + 0x568);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x474) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00321BB9: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    ebx = ebp;
    eax = 0xC65;
    PUSH32(esp, 0); sub_000255A0(); /* call 0x000255A0 */

loc_00321BCF: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(eax + 0x56C) = xmm0; /* movss */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00321BEA: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    esi = MEM32(0x847024);
    MEMF(ecx + 0x56C) = xmm0; /* movss */
    eax = MEM32(esi + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0xC65);
    ebx = ebp;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_00321C17: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_00321C4D; /* jl: less (signed <) */

loc_00321C1D: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00321C34; /* je: equal / zero */

loc_00321C26: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00321C31: ;
    esp = esp + 8;

loc_00321C34: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_00321C47: ;
    esi = MEM32(0x847024);

loc_00321C4D: ;
    eax = MEM32(esi + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0xC66);
    ebx = ebp;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_00321C63: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0032210E; /* jl: less (signed <) */

loc_00321C6D: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00321C84; /* je: equal / zero */

loc_00321C76: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00321C81: ;
    esp = esp + 8;

loc_00321C84: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_00321C97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00321CA1: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x24);
    xmm2 = MEMF(0x648D10); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_EQ(ecx, ebx)) goto loc_00321F0B; /* je: equal / zero */

loc_00321CC0: ;
    ecx = MEM32(ebp + 0x568);
    xmm1 = MEMF(ecx + 0x560); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00321D03; /* jp: parity */

loc_00321CD7: ;
    if (CMP_LE(MEM32(ecx + 0x54C), ebx)) goto loc_00321D03; /* jle: less or equal (signed <=) */

loc_00321CDF: ;
    MEM32(ecx + 0x574) = ebx;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x54C) = ebx;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = edx;

loc_00321D03: ;
    ecx = MEM32(ebp + 0x568);
    xmm1 = MEMF(ecx + 0x560); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00321E53; /* jbe: below or equal (unsigned <=) */

loc_00321D1A: ;
    edx = MEM32(ecx + 0x548);
    if (CMP_LE(edx, ebx)) goto loc_00321E53; /* jle: less or equal (signed <=) */

loc_00321D28: ;
    if (CMP_NE(MEM8(ecx + 0x558), LO8(ebx))) goto loc_00321E53; /* jne: not equal / not zero */

loc_00321D34: ;
    xmm1 = MEMF(ecx + 0x55C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00321E53; /* jp: parity */

loc_00321D49: ;
    if (CMP_NE(MEM8(ecx + 0x568), LO8(ebx))) goto loc_00321E53; /* jne: not equal / not zero */

loc_00321D55: ;
    xmm1 = MEMF(ecx + 0x564); /* movss */
    eax = edx + edx * 2;
    edx = MEM32(ecx + 0x54C);
    eax = eax + edx + -4;
    edx = eax + eax * 2;
    edx = edx << 5;
    edx = edx + 0x74A158;
    /* comiss xmm1, MEMF(ecx + 0x560) - sets EFLAGS */
    if ((xmm1 <= MEMF(ecx + 0x560))) goto loc_00321E04; /* jbe: below or equal (unsigned <=) */

loc_00321D83: ;
    MEM8(ecx + 0x558) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x568) = 1;
    xmm1 = MEMF(edx + 0x50); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00321DE3; /* jnp: not parity */

loc_00321DA4: ;
    xmm3 = MEMF(edx + 0x54); /* movss */
    ecx = MEM32(ebp + 0x568);
    xmm3 = xmm3 + xmm1; /* addss */
    xmm1 = MEMF(0x64922C); /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(ecx + 0x560) = xmm3; /* movss */
    xmm3 = MEMF(edx + 0x54); /* movss */
    edx = MEM32(ebp + 0x568);
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(edx + 0x564) = xmm3; /* movss */
    goto loc_00321F0B;

loc_00321DE3: ;
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x560) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEMF(ecx + 0x564) = xmm0; /* movss */
    goto loc_00321F0B;

loc_00321E04: ;
    MEMF(ecx + 0x55C) = xmm2; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x548) = ebx;
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x54C) = ebx;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x574) = ebx;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = edx;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x568) = LO8(ebx);
    goto loc_00321F0B;

loc_00321E53: ;
    xmm1 = MEMF(ecx + 0x55C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00321F0B; /* jp: parity */

loc_00321E68: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00321E6D: ;
    edx = MEM32(ebp + 0x568);
    xmm1 = MEMF(0x64922C); /* movss */
    ecx = 1;
    MEM32(edx + 0x548) = ecx;
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x54C) = ecx;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = edx;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x558) = LO8(ebx);
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x568) = LO8(ecx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0x54C);
    eax = eax + eax * 2;
    eax = eax << 5;
    xmm3 = MEMF(eax + 0x74A148); /* movss */
    xmm3 = xmm3 + MEMF(eax + 0x74A14C); /* addss */
    eax = eax + 0x74A0F8;
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(ecx + 0x560) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x54); /* movss */
    eax = MEM32(ebp + 0x568);
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(eax + 0x564) = xmm3; /* movss */

loc_00321F0B: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM8(ecx + 0x568), LO8(ebx))) goto loc_003220AB; /* je: equal / zero */

loc_00321F1D: ;
    eax = MEM32(ecx + 0x548);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x54C);
    edi = edx + eax + -4;
    SET_LO8(eax, MEM8(esp + 0x13));
    edi = edi + edi * 2;
    edi = edi << 5;
    edi = edi + 0x74A158;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00321F9D; /* jne: not equal / not zero */

loc_00321F48: ;
    MEM32(ecx + 0x54C) = MEM32(ecx + 0x54C) - 1;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    ebx = esp + 0x18;
    ecx = ebp;
    PUSH32(esp, 0); sub_003218A0(); /* call 0x003218A0 */

loc_00321F62: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x54C);
    esp = esp + 4;
    ecx++;
    MEM32(eax + 0x54C) = ecx;
    edx = MEM32(ebp + 0xA4);
    if (CMP_NE(edx, MEM32(esp + 0x14))) goto loc_00321F9B; /* jne: not equal / not zero */

loc_00321F84: ;
    eax = MEM32(ebp + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036EF0(); /* call 0x00036EF0 */

loc_00321F91: ;
    /* comiss xmm0, MEMF(edi + 0x58) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x58))) goto loc_0032210E; /* jbe: below or equal (unsigned <=) */

loc_00321F9B: ;
    ebx = 0; /* xor self */

loc_00321F9D: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x568) = LO8(ebx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x16);
    eax = ebp;
    MEM8(ebp + 0x215) = LO8(ebx);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00321FBD: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00321FD7: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00321FDE: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    ebx = esp + 0x24;
    ecx = ebp;
    PUSH32(esp, 0); sub_003218A0(); /* call 0x003218A0 */

loc_00321FF2: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 0x10;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00322026; /* je: equal / zero */

loc_00321FFE: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(esi) = eax;
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEM8(esi + 0x1D) = 0;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = eax;

loc_00322026: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0x548);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x54C);
    eax = edx + eax + -4;
    edx = eax + eax * 2;
    edx = edx << 5;
    xmm1 = MEMF(edx + 0x74A1A8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00322089; /* jp: parity */

loc_00322059: ;
    MEMF(ecx + 0x560) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    POP32(esp, edi);
    MEMF(eax + 0x564) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x548) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00322089: ;
    MEM32(ecx + 0x54C) = MEM32(ecx + 0x54C) + 1;
    ebp = MEM32(ebp + 0x568);
    edx = MEM32(ebp + 0x54C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x554) = edx;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003220AB: ;
    if (CMP_LE(MEM32(ecx + 0x548), ebx)) goto loc_0032210E; /* jle: less or equal (signed <=) */

loc_003220B3: ;
    xmm1 = MEMF(ecx + 0x560); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032210E; /* jp: parity */

loc_003220C4: ;
    MEMF(ecx + 0x55C) = xmm2; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x548) = ebx;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x54C) = ebx;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x574) = ebx;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = ecx;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x568) = LO8(ebx);

loc_0032210E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00322120
 * Original: 0x00322120 - 0x003224D8 (952 bytes, 292 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322120: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00322141: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_003224D0; /* je: equal / zero */

loc_0032214B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x2C);
    eax = eax + ecx + 0x14;
    ecx = MEM32(eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x2E));
    esi = ebx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0); sub_00321800(); /* call 0x00321800 */

loc_00322178: ;
    ecx = MEM32(ebx + 0x568);
    esi = MEM32(esp + 0x28);
    MEM8(ecx + 0x5DC) = 0;
    SET_LO8(eax, MEM8(esi + 0x2E));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003222DF; /* je: equal / zero */

loc_00322197: ;
    SET_LO8(eax, MEM8(ebx + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003222D1; /* je: equal / zero */

loc_003221A5: ;
    esi = MEM32(0x847024);
    eax = MEM32(esi + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0xAC1);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_003221BF: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_003221F5; /* jl: less (signed <) */

loc_003221C5: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003221DC; /* je: equal / zero */

loc_003221CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_003221D9: ;
    esp = esp + 8;

loc_003221DC: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_003221EF: ;
    esi = MEM32(0x847024);

loc_003221F5: ;
    eax = MEM32(esi + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0xC67);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_00322209: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0032223F; /* jl: less (signed <) */

loc_0032220F: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00322226; /* je: equal / zero */

loc_00322218: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00322223: ;
    esp = esp + 8;

loc_00322226: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_00322239: ;
    esi = MEM32(0x847024);

loc_0032223F: ;
    eax = MEM32(esi + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0xC65);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_00322253: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_00322289; /* jl: less (signed <) */

loc_00322259: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00322270; /* je: equal / zero */

loc_00322262: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0032226D: ;
    esp = esp + 8;

loc_00322270: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_00322283: ;
    esi = MEM32(0x847024);

loc_00322289: ;
    eax = MEM32(esi + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0xC66);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_0032229D: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_003222CD; /* jl: less (signed <) */

loc_003222A3: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003222BA; /* je: equal / zero */

loc_003222AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_003222B7: ;
    esp = esp + 8;

loc_003222BA: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_003222CD: ;
    esi = MEM32(esp + 0x24);

loc_003222D1: ;
    SET_LO8(eax, MEM8(esi + 0x2E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003222DF; /* je: equal / zero */

loc_003222D8: ;
    ecx = esi;
    goto loc_003224C3;

loc_003222DF: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(ecx + 0xA0);
    if (CMP_EQ(edx, MEM32(esi + 0x30))) goto loc_0032230A; /* je: equal / zero */

loc_003222F0: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_003222FF: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0032230A: ;
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_00322313: ;
    eax = esi + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = ebp;
    esi = ebx;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00322323: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003224D0; /* jne: not equal / not zero */

loc_0032232E: ;
    edi = MEM32(esp + 0x24);
    SET_LO8(eax, MEM8(edi + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00322348; /* je: equal / zero */

loc_00322339: ;
    MEM32(edi + 0x14) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00322348: ;
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_00322350: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003224D0; /* je: equal / zero */

loc_0032235B: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(ecx + 0x474);
    if (CMP_EQ(edx, MEM32(ebx + 0xA4))) goto loc_0032244C; /* je: equal / zero */

loc_00322373: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    eax = esp + 0x28;
    edx = ebp;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00322383: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00322467; /* je: equal / zero */

loc_00322392: ;
    if (CMP_EQ(MEM32(ebx + 0xA4), esi)) goto loc_0032244C; /* je: equal / zero */

loc_0032239E: ;
    eax = MEM32(ebx + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_003223C4; /* jne: not equal / not zero */

loc_003223B1: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003223BD; /* je: equal / zero */

loc_003223BB: ;
    SET_LO8(ecx, 1);

loc_003223BD: ;
    MEM8(eax + 0x5A8) = 0;

loc_003223C4: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003223D3; /* jne: not equal / not zero */

loc_003223CB: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00322467; /* je: equal / zero */

loc_003223D3: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00322443; /* je: equal / zero */

loc_003223D8: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(edi) = esi;
    MEMF(edi + 8) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0032240A; /* jne: not equal / not zero */

loc_00322401: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_0032240A: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebx + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00322429: ;
    ecx = eax;
    eax = MEM32(ebp + 0x14);
    edx = ebx;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00322435: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00322441: ;
    goto loc_0032244C;

loc_00322443: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00322449: ;
    esp = esp + 4;

loc_0032244C: ;
    edx = MEM32(ebx + 0x568);
    xmm0 = MEMF(edx + 0x560); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003224D0; /* jnp: not parity */

loc_00322467: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ebx;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_00322472: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_003224D0; /* je: equal / zero */

loc_00322479: ;
    eax = MEM32(ebx + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_003224C1; /* je: equal / zero */

loc_00322488: ;
    SET_LO8(eax, MEM8(edi + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003224C1; /* jne: not equal / not zero */

loc_0032248F: ;
    xmm0 = MEMF(ebx + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003224C1; /* jp: parity */

loc_003224A4: ;
    if (CMP_EQ(MEM8(ebx + 0x180), 0xFE)) goto loc_003224C1; /* je: equal / zero */

loc_003224AD: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_00321990(); /* call 0x00321990 */

loc_003224BA: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003224D0; /* jne: not equal / not zero */

loc_003224C1: ;
    ecx = edi;

loc_003224C3: ;
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_003224CD: ;
    esp = esp + 8;

loc_003224D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003224E0
 * Original: 0x003224E0 - 0x00322798 (696 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003224E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003224E0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp MEM32(ebp + 0x20), 0x13 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0x20), 0x13)) goto loc_00322522; /* jne: not equal / not zero */

loc_003224F3: ;
    if (CMP_BE(MEM16(esi + 0x3AE), 0)) goto loc_00322522; /* jbe: below or equal (unsigned <=) */

loc_003224FD: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x5DD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032257A; /* jne: not equal / not zero */

loc_0032250D: ;
    MEM8(eax + 0x5DD) = 1;
    PUSH32(esp, 0x5F5334);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00322520: ;
    goto loc_00322544;

loc_00322522: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM8(eax + 0x5DD), 1)) goto loc_0032257A; /* jne: not equal / not zero */

loc_00322531: ;
    MEM8(eax + 0x5DD) = 0;
    PUSH32(esp, 0x5F5334);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00322544: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x62C) = xmm0; /* movss */
    MEMF(esi + 0x624) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esi + 0x628) = xmm1; /* movss */
    esp = esp + 4;
    MEMF(esi + 0x630) = xmm0; /* movss */

loc_0032257A: ;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, 1);
    ebx = ebp + 4;
    MEM8(eax + 0x5DC) = 0;
    edi = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00322596: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00322790; /* jne: not equal / not zero */

loc_003225A1: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(ecx + 0x474);
    (void)0; /* cmp edx, MEM32(esi + 0xA4) - flags set for next jcc */
    edi = MEM32(ebp + 0x1C);
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(edx, MEM32(esi + 0xA4))) goto loc_00322790; /* je: equal / zero */

loc_003225C0: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    eax = esp + 0x20;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_003225D0: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) goto loc_003226A7; /* je: equal / zero */

loc_003225DF: ;
    if (CMP_EQ(MEM32(esi + 0xA4), ecx)) goto loc_00322790; /* je: equal / zero */

loc_003225EB: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(edx, 0); /* xor self */
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0032260D; /* jne: not equal / not zero */

loc_003225FC: ;
    if (CMP_EQ(MEM8(eax + 0x5A8), LO8(edx))) goto loc_00322606; /* je: equal / zero */

loc_00322604: ;
    SET_LO8(edx, 1);

loc_00322606: ;
    MEM8(eax + 0x5A8) = 0;

loc_0032260D: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032261C; /* jne: not equal / not zero */

loc_00322614: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003226A7; /* je: equal / zero */

loc_0032261C: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00322696; /* je: equal / zero */

loc_00322621: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebp) = ecx;
    MEMF(ebx) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = ecx;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00322653; /* jne: not equal / not zero */

loc_0032264A: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_00322653: ;
    eax = MEM32(0x847024);
    ecx = MEM32(esi + 0x568);
    edi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00322672: ;
    edx = MEM32(esp + 0x1C);
    ecx = eax;
    eax = MEM32(edx + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00322682: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032268E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00322696: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032269C: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003226A7: ;
    eax = MEM32(ebp + 0x20);
    eax = eax - 0x12;
    if ((eax == 0)) goto loc_0032271F; /* je: equal / zero */

loc_003226AF: ;
    eax--;
    if ((eax != 0)) goto loc_00322790; /* jne: not equal / not zero */

loc_003226B6: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x5DC) = 1;
    SET_LO8(eax, MEM8(ebp + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00322790; /* je: equal / zero */

loc_003226CE: ;
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648D14); /* movss */
    eax = 0x5AC;
    MEM32(ecx + 0x47C) = eax;
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(ebp) = eax;
    MEMF(ebp + 8) = xmm0; /* movss */
    MEM8(ebp + 0x10) = 1;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x474) = eax;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_00322710: ;
    edi = esi;
    PUSH32(esp, 0); sub_000AACB0(); /* call 0x000AACB0 */

loc_00322717: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0032271F: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00322790; /* je: equal / zero */

loc_00322726: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x14;
    ebx = esp + 0x18;
    ecx = esi;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003218A0(); /* call 0x003218A0 */

loc_00322756: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 4;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0032278B; /* je: equal / zero */

loc_00322762: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebp) = eax;
    MEMF(ebp + 8) = xmm0; /* movss */
    MEM8(ebp + 0x10) = 1;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x474) = eax;

loc_0032278B: ;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_00322790: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003227A0
 * Original: 0x003227A0 - 0x003227D8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003227A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003227A0: ;
    ecx = MEM32(0x6BD92C);
    edx = MEM32(ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = 0x15;
    if (TEST_NZ(edx, edx)) goto loc_003227B7; /* jne: not equal / not zero */

loc_003227B2: ;
    eax = 0x16;

loc_003227B7: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E2AAAAB);
    PUSH32(esp, 0x304940);
    PUSH32(esp, 0); sub_0030F240(); /* call 0x0030F240 */

loc_003227D4: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003227E0
 * Original: 0x003227E0 - 0x00322822 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003227E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003227E0: ;
    esp = esp - 0x38;
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(0x648EA0); /* movss */
    PUSH32(esp, ebx);
    ebx = ecx + 0x78;
    eax = ebx;
    edx = MEM32(eax);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(0x870ED4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_00322822(); return; } /* jne: not equal / not zero */

loc_0032281B: ;
    eax = 0x870ED8;
    g_seh_ebp = ebp; sub_0032284E(); return; /* tail jmp 0x0032284E */

}

/**
 * sub_003229A0
 * Original: 0x003229A0 - 0x003229BB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003229A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003229A0: ;
    ecx = MEM32(eax + 0xA4);
    eax = 0; /* xor self */

loc_003229A8: ;
    if (CMP_EQ(ecx, MEM32(eax + 0x74A278))) { sub_003229BB(); return; } /* je: equal / zero */

loc_003229B0: ;
    eax = eax + 4;
    if (CMP_B(eax, 0x14)) goto loc_003229A8; /* jb: below (unsigned <) */

loc_003229B8: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003229C0
 * Original: 0x003229C0 - 0x003229DE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003229C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003229C0: ;
    ecx = MEM32(eax + 0x568);
    xmm0 = MEMF(ecx + 0x390); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003229DE(); return; } /* jnp: not parity */

loc_003229DB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003229F0
 * Original: 0x003229F0 - 0x00322A45 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003229F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003229F0: ;
    edx = MEM32(eax + 0x568);
    ecx = MEM32(edx + 0x548);
    if (TEST_Z(ecx, ecx)) goto loc_00322A3A; /* je: equal / zero */

loc_00322A00: ;
    ecx = edx;
    eax = MEM32(ecx + 0x548);
    ecx = MEM32(ecx + 0x54C);
    eax--;
    ecx--;
    if (TEST_S(eax, eax)) goto loc_00322A44; /* jl: less (signed <) */

loc_00322A14: ;
    if (CMP_AE(eax, 1)) goto loc_00322A44; /* jae: above or equal (unsigned >=) */

loc_00322A19: ;
    if (TEST_S(ecx, ecx)) goto loc_00322A44; /* jl: less (signed <) */

loc_00322A1D: ;
    if (CMP_GE(ecx, 3)) goto loc_00322A44; /* jge: greater or equal (signed >=) */

loc_00322A22: ;
    ecx = ecx + eax * 2;
    ecx = ecx + eax;
    eax = ecx + ecx * 2;
    eax = eax << 5;
    ecx = MEM32(eax + 0x74A2EC);
    MEM32(edx + 0x544) = ecx;
    esp += 4; return; /* ret */

loc_00322A3A: ;
    MEM32(edx + 0x544) = 0;

loc_00322A44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00322A50
 * Original: 0x00322A50 - 0x00322BEC (412 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322A50: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(ebp) = 0xFFFFFFFFu;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14);
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esi = ecx;
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(eax + 0x390); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    ecx = MEM32(eax + 0x548);
    if ((xmm0 > MEMF(0x648CF8))) goto loc_00322AE2; /* ja: above (unsigned >) */

loc_00322A9B: ;
    if (TEST_NZ(ecx, ecx)) goto loc_00322AE4; /* jne: not equal / not zero */

loc_00322A9F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00322AA4: ;
    edx = 0; /* xor self */
    ecx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(esi + 0xA4);
    eax = MEM32(edx * 4 + 0x74A278);
    if (CMP_NE(eax, ecx)) goto loc_00322AC8; /* jne: not equal / not zero */

loc_00322ABE: ;
    MEM32(esi + 0xA4) = 0xFFFFFFFFu;

loc_00322AC8: ;
    ecx = MEM32(edx * 4 + 0x74A278);
    xmm0 = MEMF(0x648D20); /* movss */
    MEM32(ebp) = ecx;
    MEMF(edi) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00322AE2: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */

loc_00322AE4: ;
    if (CMP_G(ecx & ecx, 0)) goto loc_00322AF0; /* jg: greater (signed >) */

loc_00322AE6: ;
    MEM32(eax + 0x548) = 1;

loc_00322AF0: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x54C);
    if (CMP_G(ecx & ecx, 0)) goto loc_00322B1C; /* jg: greater (signed >) */

loc_00322B00: ;
    MEM32(eax + 0x54C) = 1;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = edx;

loc_00322B1C: ;
    eax = MEM32(esi + 0x568);
    edi = MEM32(eax + 0x548);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x54C);
    edi--;
    ebx--;
    if (TEST_S(edi, edi)) goto loc_00322BE7; /* jl: less (signed <) */

loc_00322B39: ;
    if (CMP_AE(edi, 1)) goto loc_00322BE7; /* jae: above or equal (unsigned >=) */

loc_00322B42: ;
    if (TEST_S(ebx, ebx)) goto loc_00322BE7; /* jl: less (signed <) */

loc_00322B4A: ;
    if (CMP_GE(ebx, 3)) goto loc_00322BE7; /* jge: greater or equal (signed >=) */

loc_00322B53: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00311560(); /* call 0x00311560 */

loc_00322B5A: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0); sub_003229C0(); /* call 0x003229C0 */

loc_00322B63: ;
    ecx = ZX8(LO8(eax));
    eax = ebx + edi * 2;
    eax = eax + edi;
    edi = eax + eax * 2;
    edx = edx + edi * 4;
    ecx = ecx + edx * 2;
    ecx = ecx << 2;
    edx = MEM32(ecx + 0x74A290);
    MEM32(ebp) = edx;
    ecx = MEM32(ecx + 0x74A2B8);
    edx = MEM32(esp + 0x18);
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(ebp);
    MEM32(ecx + 0x47C) = edx;
    ecx = MEM32(esi + 0x568);
    eax = eax + eax * 2;
    eax = eax << 5;
    edx = MEM32(eax + 0x74A2EC);
    MEM32(ecx + 0x544) = edx;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x574) = 1;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x548);
    MEM32(eax + 0x550) = ecx;
    esi = MEM32(esi + 0x568);
    edx = MEM32(esi + 0x54C);
    MEM32(esi + 0x554) = edx;

loc_00322BE7: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00322BF0
 * Original: 0x00322BF0 - 0x00323501 (2321 bytes, 553 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322BF0: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 9 - flags set for next jcc */
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    if (CMP_NE(eax, 9)) goto loc_00322CB0; /* jne: not equal / not zero */

loc_00322C0E: ;
    if (CMP_EQ(ecx, ebx)) goto loc_003234F7; /* je: equal / zero */

loc_00322C16: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0x444);
    if (CMP_NE(MEM32(eax + 0x30), ebx)) goto loc_00322C96; /* jne: not equal / not zero */

loc_00322C27: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (CMP_EQ(eax, ebx)) goto loc_00322C96; /* je: equal / zero */

loc_00322C35: ;
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_00322C44: ;
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00322C96; /* je: equal / zero */

loc_00322C4B: ;
    edi = MEM32(esp + 0x4C);
    edx = edi;
    eax = ebp;
    PUSH32(esp, 0); sub_0032A5C0(); /* call 0x0032A5C0 */

loc_00322C58: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003227A0(); /* call 0x003227A0 */

loc_00322C5E: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x16);
    eax = ebp;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00322C6C: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(edi + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00322C82: ;
    esp = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00322C8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_00322C96: ;
    edx = MEM32(esi + 0x38);
    if (CMP_EQ(MEM32(edx + 0x24), ebx)) goto loc_003234F7; /* je: equal / zero */

loc_00322CA2: ;
    POP32(esp, edi);
    MEM8(esi + 0x2D) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_00322CB0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(edx, 0); /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_00322DDF; /* je: equal / zero */

loc_00322CBD: ;
    ecx = MEM32(ebp + 0x568);
    xmm1 = MEMF(ecx + 0x560); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00322D00; /* jp: parity */

loc_00322CD4: ;
    if (CMP_LE(MEM32(ecx + 0x54C), ebx)) goto loc_00322D00; /* jle: less or equal (signed <=) */

loc_00322CDC: ;
    MEM32(ecx + 0x54C) = ebx;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x574) = ebx;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = ecx;

loc_00322D00: ;
    ecx = MEM32(ebp + 0x568);
    xmm1 = MEMF(ecx + 0x560); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00322FCC; /* jbe: below or equal (unsigned <=) */

loc_00322D17: ;
    edi = MEM32(ecx + 0x548);
    if (CMP_LE(edi, ebx)) goto loc_00322FCC; /* jle: less or equal (signed <=) */

loc_00322D25: ;
    if (CMP_NE(MEM8(ecx + 0x558), LO8(ebx))) goto loc_00322FCC; /* jne: not equal / not zero */

loc_00322D31: ;
    xmm1 = MEMF(ecx + 0x55C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00322FCC; /* jp: parity */

loc_00322D46: ;
    if (CMP_NE(MEM8(ecx + 0x568), LO8(ebx))) goto loc_00322FCC; /* jne: not equal / not zero */

loc_00322D52: ;
    xmm1 = MEMF(ecx + 0x564); /* movss */
    eax = edi + edi * 2;
    edi = MEM32(ecx + 0x54C);
    edi = eax + edi + -4;
    edi = edi + edi * 2;
    edi = edi << 5;
    edi = edi + 0x74A290;
    /* comiss xmm1, MEMF(ecx + 0x560) - sets EFLAGS */
    if ((xmm1 <= MEMF(ecx + 0x560))) goto loc_00322F75; /* jbe: below or equal (unsigned <=) */

loc_00322D80: ;
    MEM8(ecx + 0x558) = LO8(ebx);
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x568) = 1;
    xmm1 = MEMF(edi + 0x50); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = MEM32(ebp + 0x568);
    if (1 /* jnp after test - parity */) goto loc_00322F5A; /* jnp: not parity */

loc_00322DAB: ;
    xmm2 = MEMF(edi + 0x54); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(0x64922C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x560) = xmm2; /* movss */
    xmm2 = MEMF(edi + 0x54); /* movss */
    ecx = MEM32(ebp + 0x568);
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 0x564) = xmm2; /* movss */

loc_00322DDF: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM8(ecx + 0x568), LO8(ebx))) goto loc_0032348C; /* je: equal / zero */

loc_00322DF1: ;
    eax = MEM32(ecx + 0x548);
    edi = MEM32(ecx + 0x54C);
    eax = eax + eax * 2;
    eax = eax + edi + -4;
    edi = eax + eax * 2;
    edi = edi << 5;
    edi = edi + 0x74A290;
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_00322E6E; /* jne: not equal / not zero */

loc_00322E18: ;
    MEM32(ecx + 0x54C) = MEM32(ecx + 0x54C) - 1;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    ecx = ebp;
    PUSH32(esp, 0); sub_00322A50(); /* call 0x00322A50 */

loc_00322E33: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0x54C);
    ecx = MEM32(esp + 0x18);
    esp = esp + 8;
    edx++;
    MEM32(eax + 0x54C) = edx;
    eax = MEM32(ebp + 0xA4);
    if (CMP_NE(eax, ecx)) goto loc_00322E6E; /* jne: not equal / not zero */

loc_00322E57: ;
    eax = MEM32(ebp + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036EF0(); /* call 0x00036EF0 */

loc_00322E64: ;
    /* comiss xmm0, MEMF(edi + 0x58) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x58))) goto loc_003234F7; /* jbe: below or equal (unsigned <=) */

loc_00322E6E: ;
    ecx = MEM32(ebp + 0x568);
    PUSH32(esp, 0xBF800000u);
    MEM8(ecx + 0x568) = LO8(ebx);
    PUSH32(esp, 0x16);
    eax = ebp;
    MEM8(ebp + 0x215) = LO8(ebx);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00322E8E: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(esp + 0x54);
    eax = MEM32(eax + 4);
    edi = MEM32(edx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00322EA8: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00322EAF: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    ecx = ebp;
    PUSH32(esp, 0); sub_00322A50(); /* call 0x00322A50 */

loc_00322EC4: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 0x14;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00322EF7; /* je: equal / zero */

loc_00322ED0: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(esi) = eax;
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEM8(esi + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = eax;

loc_00322EF7: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0x548);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x54C);
    eax = edx + eax + -4;
    edx = eax + eax * 2;
    edx = edx << 5;
    xmm1 = MEMF(edx + 0x74A2E0); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032346A; /* jp: parity */

loc_00322F2E: ;
    MEMF(ecx + 0x560) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    POP32(esp, edi);
    MEMF(eax + 0x564) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x548) = ebx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_00322F5A: ;
    MEMF(eax + 0x560) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEMF(ecx + 0x564) = xmm0; /* movss */
    goto loc_00322DDF;

loc_00322F75: ;
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(ecx + 0x55C) = xmm1; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x548) = ebx;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x54C) = ebx;
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x574) = ebx;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = ecx;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x568) = LO8(ebx);
    goto loc_00322DDF;

loc_00322FCC: ;
    xmm1 = MEMF(ecx + 0x55C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00322DDF; /* jp: parity */

loc_00322FE1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003227E0(); /* call 0x003227E0 */

loc_00322FE7: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00323186; /* jne: not equal / not zero */

loc_00322FF6: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = MEMF(eax + 0x390); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003230BB; /* jbe: below or equal (unsigned <=) */

loc_00323011: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00323016: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x64922C); /* movss */
    eax = 1;
    MEM32(ecx + 0x548) = eax;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x54C) = eax;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = ecx;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x558) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x568) = 1;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0x54C);
    eax = eax + eax * 2;
    eax = eax << 5;
    xmm1 = MEMF(eax + 0x74A280); /* movss */
    xmm1 = xmm1 + MEMF(eax + 0x74A284); /* addss */
    eax = eax + 0x74A230;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 0x560) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x54); /* movss */
    ecx = MEM32(ebp + 0x568);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(edx, 1);
    MEMF(ecx + 0x564) = xmm1; /* movss */
    goto loc_00322DDF;

loc_003230BB: ;
    MEM32(eax + 0x548) = ebx;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x54C) = ebx;
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x550) = ebx;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x554) = ebx;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x574) = ebx;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x558) = LO8(ebx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x16);
    eax = ebp;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_0032310F: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(esp + 0x54);
    eax = MEM32(edx + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00323129: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00323130: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = esp + 0x24;
    ecx = ebp;
    PUSH32(esp, 0); sub_00322A50(); /* call 0x00322A50 */

loc_00323145: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 0x14;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003234F7; /* je: equal / zero */

loc_00323155: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(esi) = eax;
    MEM8(esi + 0x1D) = LO8(ebx);
    POP32(esp, edi);
    MEMF(esi + 0xC) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x474) = eax;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_00323186: ;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x568) = LO8(ebx);
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x3F4);
    eax = MEM32(eax + 8);
    if (CMP_NE(eax, ebx)) goto loc_003231BC; /* jne: not equal / not zero */

loc_003231A5: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB35);
    PUSH32(esp, edx);
    goto loc_003231D5;

loc_003231BC: ;
    if (CMP_NE(eax, 1)) goto loc_003231DF; /* jne: not equal / not zero */

loc_003231C1: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB2D);
    PUSH32(esp, ecx);

loc_003231D5: ;
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003231DF: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x16);
    eax = ebp;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003231ED: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(esp + 0x54);
    eax = MEM32(eax + 4);
    edi = MEM32(edx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00323207: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0032320E: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi) = 0x5C6;
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEM8(esi + 0x1D) = 1;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = 0x5C6;
    eax = MEM32(esi);
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x480) = eax;
    edx = MEM32(esi);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    MEM32(ecx + 0x484) = edx;
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, 0x49);
    PUSH32(esp, ebx);
    MEM32(eax + 0x574) = 2;
    eax = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0x5B);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F06F0(); /* call 0x002F06F0 */

loc_0032327A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x20;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x6499A0); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    eax = esp + 0x40;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_003232BD: ;
    xmm5 = MEMF(esp + 0x4C); /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x28); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0x40); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x20) = xmm5; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm5 = xmm4; /* movaps */
    esp = esp + 0xC;
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x24); /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x1C); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x40); /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x10); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm5; /* movaps */
    xmm5 = MEMF(esp + 0x40); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x14); /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    ecx = esi + 0x78;
    edx = esp + 0x1C;
    eax = esp + 0x28;
    xmm6 = xmm6 - xmm7; /* subss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
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
    ecx = MEM32(esi + 0x114);
    xmm0 = MEMF(0x648D10); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0); sub_002F8020(); /* call 0x002F8020 */

loc_0032345D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_0032346A: ;
    MEM32(ecx + 0x54C) = MEM32(ecx + 0x54C) + 1;
    ebp = MEM32(ebp + 0x568);
    edx = MEM32(ebp + 0x54C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x554) = edx;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_0032348C: ;
    if (CMP_LE(MEM32(ecx + 0x548), ebx)) goto loc_003234F7; /* jle: less or equal (signed <=) */

loc_00323494: ;
    xmm1 = MEMF(ecx + 0x560); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003234F7; /* jp: parity */

loc_003234A5: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(ecx + 0x55C) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x548) = ebx;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x54C) = ebx;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x574) = ebx;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = ecx;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x568) = LO8(ebx);

loc_003234F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00323510
 * Original: 0x00323510 - 0x00323729 (537 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323510: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00323530: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00323722; /* je: equal / zero */

loc_0032353A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00323713; /* jne: not equal / not zero */

loc_00323560: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_00323585; /* je: equal / zero */

loc_0032356E: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032357B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00323585: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032358E: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003235A3; /* je: equal / zero */

loc_00323595: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003235A3: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_003235AB: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00323722; /* je: equal / zero */

loc_003235B6: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_003236A8; /* je: equal / zero */

loc_003235CE: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x24;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_003235DE: ;
    esi = MEM32(esp + 0x24);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_003236CE; /* je: equal / zero */

loc_003235ED: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_003236A8; /* je: equal / zero */

loc_003235F9: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032361F; /* jne: not equal / not zero */

loc_0032360C: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00323618; /* je: equal / zero */

loc_00323616: ;
    SET_LO8(ecx, 1);

loc_00323618: ;
    MEM8(eax + 0x5A8) = 0;

loc_0032361F: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032362E; /* jne: not equal / not zero */

loc_00323626: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003236CE; /* je: equal / zero */

loc_0032362E: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0032369F; /* je: equal / zero */

loc_00323633: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(ebx + 8) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_00323665; /* jne: not equal / not zero */

loc_0032365C: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_00323665: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00323685: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00323691: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032369D: ;
    goto loc_003236A8;

loc_0032369F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_003236A5: ;
    esp = esp + 4;

loc_003236A8: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003229A0(); /* call 0x003229A0 */

loc_003236AF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003236CE; /* jne: not equal / not zero */

loc_003236B3: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(ecx + 0x560); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00323722; /* jnp: not parity */

loc_003236CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_003236D9: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00323722; /* je: equal / zero */

loc_003236E0: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_00323713; /* je: equal / zero */

loc_003236EF: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00323713; /* jne: not equal / not zero */

loc_003236F6: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_00323713; /* je: equal / zero */

loc_003236FF: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0); sub_00322BF0(); /* call 0x00322BF0 */

loc_0032370C: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00323722; /* jne: not equal / not zero */

loc_00323713: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032371F: ;
    esp = esp + 8;

loc_00323722: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00323730
 * Original: 0x00323730 - 0x0032396D (573 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323730: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    edi = MEM32(ebx + 0x1C);
    eax = ebx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00323752: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00323965; /* jne: not equal / not zero */

loc_0032375D: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(ebp + 0xA4) - flags set for next jcc */
    edi = MEM32(ebx + 0x1C);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_00323965; /* je: equal / zero */

loc_00323778: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    eax = esp + 0x1C;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00323788: ;
    esi = MEM32(esp + 0x1C);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00323862; /* je: equal / zero */

loc_00323797: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_00323965; /* je: equal / zero */

loc_003237A3: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_003237C9; /* jne: not equal / not zero */

loc_003237B6: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003237C2; /* je: equal / zero */

loc_003237C0: ;
    SET_LO8(ecx, 1);

loc_003237C2: ;
    MEM8(eax + 0x5A8) = 0;

loc_003237C9: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003237D8; /* jne: not equal / not zero */

loc_003237D0: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00323862; /* je: equal / zero */

loc_003237D8: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00323851; /* je: equal / zero */

loc_003237DD: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00323812; /* jne: not equal / not zero */

loc_00323809: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_00323812: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00323831: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032383D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00323849: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00323851: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00323857: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00323862: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00323965; /* je: equal / zero */

loc_0032386D: ;
    if (CMP_NE(MEM32(ebx + 0x20), 9)) goto loc_003238B2; /* jne: not equal / not zero */

loc_00323873: ;
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 1);
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_0032FAE0(); /* call 0x0032FAE0 */

loc_00323888: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032395E; /* je: equal / zero */

loc_00323893: ;
    ecx = MEM32(ebx + 0x1C);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    ecx = 1;
    PUSH32(esp, 0); sub_002B1600(); /* call 0x002B1600 */

loc_003238A8: ;
    eax = MEM32(ebx);
    esp = esp + 8;
    goto loc_0032394E;

loc_003238B2: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(ecx + 0x578));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00323912; /* je: equal / zero */

loc_003238DE: ;
    edx = ecx;
    MEM8(edx + 0x578) = 0;
    ecx = MEM32(ebp + 0x568);
    eax = 0x5C6;
    MEM32(ecx + 0x474) = eax;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x480) = eax;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x484) = eax;
    goto loc_00323933;

loc_00323912: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    ecx = ebp;
    PUSH32(esp, 0); sub_00322A50(); /* call 0x00322A50 */

loc_00323927: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0032395E; /* je: equal / zero */

loc_00323933: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(ebx) = eax;
    MEMF(ebx + 8) = xmm0; /* movss */

loc_0032394E: ;
    MEM8(ebx + 0x10) = 0;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x474) = eax;

loc_0032395E: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_00323965: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00323970
 * Original: 0x00323970 - 0x00323B94 (548 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323970: ;
    esp = esp - 0x454;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x46C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00323994; /* je: equal / zero */

loc_0032398E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00323994: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_003239A1: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_00323AA2; /* jne: not equal / not zero */

loc_003239B4: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00323B68; /* jbe: below or equal (unsigned <=) */

loc_003239BC: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;

loc_003239D5: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x46C);
    MEM32(edx) = ecx;
    eax = esi + -16;
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_00323A8D; /* jbe: below or equal (unsigned <=) */

loc_00323A74: ;
    eax = MEM32(esi);
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_00323A8D; /* jne: not equal / not zero */

loc_00323A7C: ;
    if (CMP_EQ(eax, MEM32(esp + 0x470))) goto loc_00323A8D; /* je: equal / zero */

loc_00323A85: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_00323A8D: ;
    ecx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, ecx)) goto loc_003239D5; /* jl: less (signed <) */

loc_00323A9D: ;
    goto loc_00323B68;

loc_00323AA2: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00323B68; /* jbe: below or equal (unsigned <=) */

loc_00323AAA: ;
    eax = esp + 0x58;
    edx = esp + 0x20;
    ecx = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;

loc_00323AC0: ;
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_00323B58; /* jbe: below or equal (unsigned <=) */

loc_00323B57: ;
    ebx++;

loc_00323B58: ;
    eax = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, eax)) goto loc_00323AC0; /* jl: less (signed <) */

loc_00323B68: ;
    edi = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_003239A1; /* jne: not equal / not zero */

loc_00323B75: ;
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
 * sub_00323BA0
 * Original: 0x00323BA0 - 0x00323BC0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323BA0(void)
{

loc_00323BA0: ;
    ecx = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_00323BBC: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00323BC0
 * Original: 0x00323BC0 - 0x00323E6D (685 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323BC0(void)
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

loc_00323BC0: ;
    esp = esp - 0x2C;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_00323E68; /* je: equal / zero */

loc_00323BD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_00323BDF: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00323BFC; /* je: equal / zero */

loc_00323BE8: ;
    edx = 0x54;
    /* nop */

loc_00323BF0: ;
    if (CMP_EQ(MEM32(eax + 4), edx)) goto loc_00323BFE; /* je: equal / zero */

loc_00323BF5: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_00323BF0; /* jne: not equal / not zero */

loc_00323BFC: ;
    eax = ecx;

loc_00323BFE: ;
    if (CMP_NE(eax, ecx)) goto loc_00323C06; /* jne: not equal / not zero */

loc_00323C02: ;
    eax = 0; /* xor self */
    goto loc_00323C08;

loc_00323C06: ;
    eax = MEM32(eax);

loc_00323C08: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00323E67; /* je: equal / zero */

loc_00323C12: ;
    xmm0 = MEMF(eax + 0x20); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00323C22: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_00323C5E; /* jne: not equal / not zero */

loc_00323C2B: ;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00323C5E; /* je: equal / zero */

loc_00323C35: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00323C3A: ;
    edx = 0x6390E4;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00323C44: ;
    if (TEST_Z(eax, eax)) goto loc_00323C5E; /* je: equal / zero */

loc_00323C48: ;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0xB0); /* movss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    goto loc_00323C64;

loc_00323C5E: ;
    xmm0 = MEMF(esp + 8); /* movss */

loc_00323C64: ;
    eax = MEM32(edi + 0x568);
    /* comiss xmm0, MEMF(eax + 0x604) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x604))) goto loc_00323C93; /* jbe: below or equal (unsigned <=) */

loc_00323C73: ;
    edi = eax;
    xmm0 = MEMF(edi + 0x604); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    POP32(esp, esi);
    MEMF(edi + 0x604) = xmm0; /* movss */
    POP32(esp, edi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00323C93: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x604) = xmm0; /* movss */
    edx = MEM32(edi + 0x238);
    eax = MEM32(edx);
    xmm0 = MEMF(0x648EBC); /* movss */
    PUSH32(esp, ebp);
    ebp = edi + 0x78;
    ecx = ebp;
    edx = MEM32(ecx);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = 0x870ED4;
    MEM32(esp + 0x3C) = ecx;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003252E0(); /* call 0x003252E0 */

loc_00323CDF: ;
    esi = MEM32(eax);
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(0x648EBC); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x14) = 0;
    if (TEST_Z(esi, esi)) goto loc_00323E66; /* je: equal / zero */

loc_00323CFF: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ebx);
    goto loc_00323D10;

    /* nop */
    /* nop */

loc_00323D10: ;
    SET_LO16(eax, MEM16(esi + 0x3AE));
    if (CMP_B(LO16(eax), MEM16(esi + 0x3B0))) goto loc_00323D34; /* jb: below (unsigned <) */

loc_00323D20: ;
    SET_LO16(ecx, MEM16(esi + 0x3AA));
    if (CMP_AE(LO16(ecx), MEM16(esi + 0x3AC))) goto loc_00323E2B; /* jae: above or equal (unsigned >=) */

loc_00323D34: ;
    ebx = esi + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00323D3E: ;
    edx = MEM32(esi + 0x74);
    eax = ZX16(MEM16(edx + 0xE));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(esi + 0x260); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00323E2B; /* jbe: below or equal (unsigned <=) */

loc_00323D6D: ;
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 - MEMF(ebp); /* subss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(edi + 0x80); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x80); /* subss */
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    if (1 /* jp after test - parity */) goto loc_00323DA5; /* jp: parity */

loc_00323D98: ;
    /* ucomiss xmm2, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00323DA5; /* jp: parity */

loc_00323DA1: ;
    eax = 0; /* xor self */
    goto loc_00323DD7;

loc_00323DA5: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00323DB9: ;
    MEMF(esp + 0x28) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00323DD1: ;
    xmm0 = MEMF(esp + 0x24); /* movss */

loc_00323DD7: ;
    edx = MEM32(edi + 0x568);
    xmm1 = MEMF(edx + 0x14); /* movss */
    xmm1 = xmm1 * MEMF(0x6491F8); /* mulss */
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 0x174));
    ecx = (int32_t)xmm1; /* cvttss2si */
    SET_LO16(edx, LO16(edx) - LO16(ecx));
    edx = edx - eax;
    edx = edx - 0x4000;
    eax = SX16(LO16(edx));
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E3C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00323E2B; /* jbe: below or equal (unsigned <=) */

loc_00323E21: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x18) = esi;

loc_00323E2B: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 4);
    eax = eax + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (TEST_NZ(esi, esi)) goto loc_00323D10; /* jne: not equal / not zero */

loc_00323E41: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00323E66; /* je: equal / zero */

loc_00323E4A: ;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00323BA0(); /* call 0x00323BA0 */

loc_00323E52: ;
    ecx = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_00323E63: ;
    esp = esp + 0x18;

loc_00323E66: ;
    POP32(esp, ebp);

loc_00323E67: ;
    POP32(esp, esi);

loc_00323E68: ;
    POP32(esp, edi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00323E70
 * Original: 0x00323E70 - 0x00323F7B (267 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323E70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00323E70: ;
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_Z(ecx, ecx)) { sub_00323F7B(); return; } /* je: equal / zero */

loc_00323E7E: ;
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648E14); /* movss */
    eax = MEM32(esp + 4);
    MEMF(ecx + 0x30C) = xmm0; /* movss */
    edx = MEM32(esi + 0x568);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00323EAF: ;
    esp = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_00323BC0(); /* call 0x00323BC0 */

loc_00323EB9: ;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00323EC0: ;
    ecx = MEM32(ebx + 0x38);
    eax = MEM32(ecx + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00323F78; /* je: equal / zero */

loc_00323ECF: ;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0x3F4);
    ecx = MEM32(edx + 8);
    if (TEST_NZ(ecx, ecx)) goto loc_00323F0D; /* jne: not equal / not zero */

loc_00323EE2: ;
    eax = MEM32(eax + 0x444);
    eax = MEM32(eax + 8);
    eax = eax - 3;
    if ((eax == 0)) goto loc_00323F06; /* je: equal / zero */

loc_00323EF0: ;
    eax--;
    if ((eax == 0)) goto loc_00323EFF; /* je: equal / zero */

loc_00323EF3: ;
    eax = eax - 0x1E;
    if ((eax == 0)) goto loc_00323EFF; /* je: equal / zero */

loc_00323EF8: ;
    eax = 0xA58;
    goto loc_00323F36;

loc_00323EFF: ;
    eax = 0xAF3;
    goto loc_00323F36;

loc_00323F06: ;
    eax = 0xA5E;
    goto loc_00323F36;

loc_00323F0D: ;
    ecx = MEM32(eax + 0x444);
    eax = MEM32(ecx + 8);
    eax = eax - 3;
    if ((eax == 0)) goto loc_00323F31; /* je: equal / zero */

loc_00323F1B: ;
    eax--;
    if ((eax == 0)) goto loc_00323F2A; /* je: equal / zero */

loc_00323F1E: ;
    eax = eax - 0x1E;
    if ((eax == 0)) goto loc_00323F2A; /* je: equal / zero */

loc_00323F23: ;
    eax = 0xAF7;
    goto loc_00323F36;

loc_00323F2A: ;
    eax = 0xAF5;
    goto loc_00323F36;

loc_00323F31: ;
    eax = 0xA94;

loc_00323F36: ;
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00323F51: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xC0F);
    eax = esi;
    PUSH32(esp, 0); sub_0031A2F0(); /* call 0x0031A2F0 */

loc_00323F5F: ;
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648E14); /* movss */
    esp = esp + 8;
    MEMF(ecx + 0x30C) = xmm0; /* movss */

loc_00323F78: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00323F80
 * Original: 0x00323F80 - 0x003241B4 (564 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323F80: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    ebx = eax;
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00323FA3: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003241AC; /* je: equal / zero */

loc_00323FAD: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x20) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032419D; /* jne: not equal / not zero */

loc_00323FD3: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_00323FF9; /* je: equal / zero */

loc_00323FE1: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_00323FEE: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00323FF9: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_00324002: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00324014: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003241AC; /* jne: not equal / not zero */

loc_0032401F: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00324035; /* je: equal / zero */

loc_00324026: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00324035: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032403D: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003241AC; /* je: equal / zero */

loc_00324048: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_003241AC; /* je: equal / zero */

loc_00324060: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    eax = esp + 0x2C;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00324070: ;
    esi = MEM32(esp + 0x2C);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0032414A; /* je: equal / zero */

loc_0032407F: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_003241AC; /* je: equal / zero */

loc_0032408B: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_003240B1; /* jne: not equal / not zero */

loc_0032409E: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003240AA; /* je: equal / zero */

loc_003240A8: ;
    SET_LO8(ecx, 1);

loc_003240AA: ;
    MEM8(eax + 0x5A8) = 0;

loc_003240B1: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003240C0; /* jne: not equal / not zero */

loc_003240B8: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032414A; /* je: equal / zero */

loc_003240C0: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00324139; /* je: equal / zero */

loc_003240C5: ;
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_003240FA; /* jne: not equal / not zero */

loc_003240F1: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_003240FA: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00324119: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00324125: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00324131: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00324139: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032413F: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032414A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_00324155: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_003241AC; /* je: equal / zero */

loc_0032415C: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_0032419D; /* je: equal / zero */

loc_0032416B: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032419D; /* jne: not equal / not zero */

loc_00324172: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032419D; /* jp: parity */

loc_00324187: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0032419D; /* je: equal / zero */

loc_00324190: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00323E70(); /* call 0x00323E70 */

loc_00324196: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003241AC; /* jne: not equal / not zero */

loc_0032419D: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_003241A9: ;
    esp = esp + 8;

loc_003241AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003241C0
 * Original: 0x003241C0 - 0x003242FE (318 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003241C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003241C0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C);
    esi = eax;
    eax = ebx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_003241DA: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003242F8; /* jne: not equal / not zero */

loc_003241E5: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(esi + 0xA4) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x1C);
    if (CMP_EQ(ecx, MEM32(esi + 0xA4))) goto loc_003242F7; /* je: equal / zero */

loc_00324201: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    eax = esp + 0x10;
    edx = ebp;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00324211: ;
    edi = MEM32(esp + 0x10);
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_003242E9; /* je: equal / zero */

loc_00324220: ;
    if (CMP_EQ(MEM32(esi + 0xA4), edi)) goto loc_003242F7; /* je: equal / zero */

loc_0032422C: ;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00324252; /* jne: not equal / not zero */

loc_0032423F: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032424B; /* je: equal / zero */

loc_00324249: ;
    SET_LO8(ecx, 1);

loc_0032424B: ;
    MEM8(eax + 0x5A8) = 0;

loc_00324252: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00324261; /* jne: not equal / not zero */

loc_00324259: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003242E9; /* je: equal / zero */

loc_00324261: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_003242D9; /* je: equal / zero */

loc_00324266: ;
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebx) = edi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = edi;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0032429B; /* jne: not equal / not zero */

loc_00324292: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_0032429B: ;
    eax = MEM32(0x847024);
    ecx = MEM32(esi + 0x568);
    edi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_003242BA: ;
    ecx = eax;
    eax = MEM32(ebp + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_003242C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003242D2: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003242D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_003242DF: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003242E9: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003242F7; /* je: equal / zero */

loc_003242F0: ;
    eax = esi;
    PUSH32(esp, 0); sub_00323BC0(); /* call 0x00323BC0 */

loc_003242F7: ;
    POP32(esp, ebp);

loc_003242F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00324300
 * Original: 0x00324300 - 0x0032449C (412 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00324300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 4;
    eax = esp + 0x1C;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(ebp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x1C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0032434F: ;
    eax = esi + 0x10;
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0032435B: ;
    ecx = ebx;
    PUSH32(esp, ecx);
    esi = esp + 0x38;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_003E5FA0(); /* call 0x003E5FA0 */

loc_0032436B: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0032437B: ;
    eax = MEM32(ebp + 8);
    xmm2 = MEMF(eax + 4); /* movss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x5A005C); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    if ((xmm0 <= xmm1)) goto loc_003243DA; /* jbe: below or equal (unsigned <=) */

loc_003243A7: ;
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003243C0; /* ja: above (unsigned >) */

loc_003243B3: ;
    xmm1 = MEMF(0x648D1C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003243C3; /* jbe: below or equal (unsigned <=) */

loc_003243C0: ;
    xmm0 = xmm1; /* movaps */

loc_003243C3: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_003243DA: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    ebx = MEM32(ebp + 0xC);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    edx = esp + 0x20;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00324407: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0); sub_00428AB7(); /* call 0x00428AB7 */

loc_0032441D: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0032442C: ;
    xmm1 = MEMF(esi); /* movss */
    xmm0 = MEMF(0x7FA21C); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi); /* addss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    PUSH32(esp, eax);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 8); /* addss */
    PUSH32(esp, edi);
    MEMF(edi + 8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00324474: ;
    xmm1 = MEMF(0x648F38); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) { sub_0032449C(); return; } /* jb: below (unsigned <) */

loc_00324484: ;
    SET_LO8(eax, MEM8(ebx + 0x1D));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0032449C(); return; } /* jne: not equal / not zero */

loc_0032448B: ;
    MEM8(ebx + 0x1C) = 0;
    MEM8(ebx + 0x1D) = 1;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003244B0
 * Original: 0x003244B0 - 0x0032452B (123 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003244B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003244B0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebp = MEM32(esi + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    eax = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x1C;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_003244D9: ;
    SET_LO8(ecx, MEM8(esi + 0x4C));
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0032451E; /* jle: less or equal (signed <=) */

loc_003244E9: ;
    eax = eax << 5;
    eax = eax + ebp;
    ebp = eax;

loc_003244F0: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00324300(); /* call 0x00324300 */

loc_003244FC: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00324512; /* jne: not equal / not zero */

loc_00324503: ;
    eax = MEM32(edi + 0x1C);
    eax++;
    MEM32(edi + 0x1C) = eax;
    ecx = ZX8(MEM8(esi + 0x41));
    if (CMP_EQ(eax, ecx)) { sub_0032452B(); return; } /* je: equal / zero */

loc_00324512: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x4C);
    ebx++;
    ebp = ebp + 0x20;
    if (CMP_L(ebx, edx)) goto loc_003244F0; /* jl: less (signed <) */

loc_0032451E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00324540
 * Original: 0x00324540 - 0x003246B1 (369 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324540: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(edi + 0x20));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003246A6; /* jne: not equal / not zero */

loc_00324564: ;
    eax = MEM32(edi + 0x28);
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    ecx = MEM32(eax + 0x78);
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEMF(esi + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    ebp = esi + 0x2C;
    PUSH32(esp, 0);
    MEM32(ebp) = ecx;
    MEMF(ebp + 8) = xmm1; /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x18); /* addss */
    eax = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x28;
    MEMF(edi + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_003245BD: ;
    xmm0 = MEMF(edi + 0x18); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_003246A4; /* jbe: below or equal (unsigned <=) */

loc_003245D2: ;
    edx = edi + 0xC;
    MEM32(esp + 0x14) = edx;
    /* nop */

loc_003245E0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    eax = MEM32(esp + 0x2C);
    ecx = ecx << 5;
    ecx = ecx + eax;
    edx = ebp;
    ebx = MEM32(edx);
    eax = ecx + 4;
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    xmm0 = MEMF(edi); /* movss */
    eax = ecx + 0x10;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00324300(); /* call 0x00324300 */

loc_00324644: ;
    SET_LO8(edx, MEM8(esi + 0x4E));
    SET_LO8(ecx, MEM8(esi + 0x4C));
    esp = esp + 0xC;
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(ecx, LO8(ecx) + 1);
    SET_LO8(eax, LO8(edx));
    MEM8(esi + 0x4E) = LO8(edx);
    MEM8(esi + 0x4C) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x41));
    edx = SX8(LO8(eax));
    if (CMP_EQ(edx, ecx)) goto loc_00324690; /* je: equal / zero */

loc_00324664: ;
    xmm0 = MEMF(edi + 0x18); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x18) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_003245E0; /* ja: above (unsigned >) */

loc_00324683: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00324690: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(edi + 0x20) = 1;
    SET_LO8(eax, MEM8(esi + 0x41));
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esi + 0x4E) = LO8(eax);
    MEMF(edi + 0x18) = xmm0; /* movss */

loc_003246A4: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003246A6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003246C0
 * Original: 0x003246C0 - 0x003247B3 (243 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003246C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003246C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x771760);
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x140);
    eax = MEM32(0x6B826C);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_003246EE; /* je: equal / zero */

loc_003246E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003246E8: ;
    MEM32(0x771760) = esi;

loc_003246EE: ;
    eax = MEM32(0x77175C);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_00324706; /* je: equal / zero */

loc_003246F9: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00324700: ;
    MEM32(0x77175C) = ebp;

loc_00324706: ;
    SET_LO8(eax, MEM8(0x75BA9C));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_003247A3; /* jbe: below or equal (unsigned <=) */

loc_00324713: ;
    esi = MEM32(0x75BA98);
    if (CMP_NE(MEM32(esi + 8), ebp)) goto loc_00324746; /* jne: not equal / not zero */

loc_0032471E: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0032472F: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00324737: ;
    edx = MEM32(0x75BA98);
    MEM32(edx + 8) = eax;
    esi = MEM32(0x75BA98);

loc_00324746: ;
    if (CMP_NE(MEM32(esi + 0x10), ebp)) goto loc_0032476E; /* jne: not equal / not zero */

loc_0032474B: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00324753: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75BA98);
    if (CMP_NE(MEM32(esi + 0x10), ebp)) goto loc_0032476E; /* jne: not equal / not zero */

loc_00324761: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75BA98);

loc_0032476E: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00324797; /* jne: not equal / not zero */

loc_00324776: ;
    ecx = MEM32(esi + 4);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    eax = esi + 4;
    if (CMP_NE(ecx, ebp)) goto loc_00324792; /* jne: not equal / not zero */

loc_00324780: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00324789: ;
    esi = MEM32(0x75BA98);
    esp = esp + 8;

loc_00324792: ;
    esi = MEM32(esi + 4);
    goto loc_0032479F;

loc_00324797: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0032479C: ;
    esi = MEM32(eax + 4);

loc_0032479F: ;
    if (CMP_NE(esi, ebp)) { sub_003247B3(); return; } /* jne: not equal / not zero */

loc_003247A3: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003247AB: ;
    MEM32(0x771764) = ebp;
    g_seh_ebp = ebp; sub_003247CA(); return; /* tail jmp 0x003247CA */

}

/**
 * sub_00325200
 * Original: 0x00325200 - 0x00325262 (98 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325200: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* cmp ecx, 0x66 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x144);
    if (CMP_A(ecx, 0x66)) goto loc_00325260; /* ja: above (unsigned >) */

loc_00325214: ;
    ecx = ZX8(MEM8(ecx + 0x325274));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x325264)); return; /* indirect tail jmp */

    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx);
    if (CMP_EQ(ecx, MEM32(eax + 0x28))) goto loc_0032525B; /* je: equal / zero */

loc_0032522D: ;
    if (CMP_NE(ecx, MEM32(eax + 0x24))) goto loc_00325260; /* jne: not equal / not zero */

loc_00325232: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00325237: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    (void)0; /* cmp MEM32(ecx + 4), 0x1F - flags set for next jcc */
    goto loc_00325259;

    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    if (CMP_NE(edx, MEM32(eax + 0x24))) goto loc_00325260; /* jne: not equal / not zero */

loc_00325255: ;
    (void)0; /* cmp MEM32(ecx + 4), 0x54 - flags set for next jcc */

loc_00325259: ;
    if (CMP_EQ(MEM32(ecx + 4), 0x54)) goto loc_00325260; /* je: equal / zero */

loc_0032525B: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00325260: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003252E0
 * Original: 0x003252E0 - 0x003252EE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003252E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003252E0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_003252EE(); return; } /* jne: not equal / not zero */

loc_003252E7: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00325330
 * Original: 0x00325330 - 0x00325574 (580 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325330: ;
    esp = esp - 0x454;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x46C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00325354; /* je: equal / zero */

loc_0032534E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00325354: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_00325361: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_0032547D; /* jne: not equal / not zero */

loc_00325374: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00325548; /* jbe: below or equal (unsigned <=) */

loc_0032537C: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;

loc_00325395: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x46C);
    MEM32(edx) = ecx;
    eax = esi + -16;
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_00325468; /* jbe: below or equal (unsigned <=) */

loc_00325434: ;
    eax = MEM32(esi);
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_00325468; /* jne: not equal / not zero */

loc_0032543C: ;
    ecx = MEM32(eax + 0x238);
    edx = MEM32(esp + 0x470);
    if (CMP_NE(MEM32(ecx), edx)) goto loc_00325468; /* jne: not equal / not zero */

loc_0032544D: ;
    if (CMP_EQ(MEM16(eax + 0x3AE), 0)) goto loc_00325468; /* je: equal / zero */

loc_00325457: ;
    if (CMP_EQ(eax, MEM32(esp + 0x474))) goto loc_00325468; /* je: equal / zero */

loc_00325460: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_00325468: ;
    eax = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, eax)) goto loc_00325395; /* jl: less (signed <) */

loc_00325478: ;
    goto loc_00325548;

loc_0032547D: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00325548; /* jbe: below or equal (unsigned <=) */

loc_00325485: ;
    edx = esp + 0x58;
    ecx = esp + 0x20;
    eax = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_003254A0;

    /* nop */

loc_003254A0: ;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x468);
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_00325538; /* jbe: below or equal (unsigned <=) */

loc_00325537: ;
    ebx++;

loc_00325538: ;
    edx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, edx)) goto loc_003254A0; /* jl: less (signed <) */

loc_00325548: ;
    edi = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_00325361; /* jne: not equal / not zero */

loc_00325555: ;
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
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00325580
 * Original: 0x00325580 - 0x0032576A (490 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325580: ;
    esp = esp - 0x168;
    xmm0 = MEMF(0x648EFC); /* movss */
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648EF8); /* movss */
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    MEM32(esp + 0x1C) = 0x1A;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00309CB0(); /* call 0x00309CB0 */

loc_003255D7: ;
    esp = esp + 4;
    eax = edi;
    PUSH32(esp, 0); sub_0031A3B0(); /* call 0x0031A3B0 */

loc_003255E1: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00325608; /* je: equal / zero */

loc_003255EA: ;
    edx = 0; /* xor self */
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_003255F5: ;
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_00022320(); /* call 0x00022320 */

loc_003255FE: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    eax = 0xC44;
    if (CMP_G(eax, 4)) goto loc_0032560D; /* jg: greater (signed >) */

loc_00325608: ;
    eax = 0x903;

loc_0032560D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAB2);
    eax = edi;
    PUSH32(esp, 0); sub_0031A2F0(); /* call 0x0031A2F0 */

loc_0032561A: ;
    eax = MEM32(edi + 0x564);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00325689; /* je: equal / zero */

loc_00325627: ;
    eax = MEM32(edi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x510));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00325657; /* je: equal / zero */

loc_00325637: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x16);
    eax = edi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00325645: ;
    ecx = MEM32(edi + 0x568);
    esp = esp + 8;
    MEM8(ecx + 0x510) = 0;
    goto loc_00325689;

loc_00325657: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax + 0x50C) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x50C))) goto loc_00325689; /* jb: below (unsigned <) */

loc_00325663: ;
    PUSH32(esp, 0x16);
    eax = edi;
    PUSH32(esp, 0); sub_000217F0(); /* call 0x000217F0 */

loc_0032566C: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00325689; /* jne: not equal / not zero */

loc_00325673: ;
    edx = MEM32(edi + 0x568);
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(edx + 0x50C) = xmm0; /* movss */

loc_00325689: ;
    eax = MEM32(edi + 0x568);
    eax = MEM32(eax + 0x444);
    SET_LO8(ecx, MEM8(eax + 0x2C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00325762; /* jne: not equal / not zero */

loc_003256A0: ;
    ecx = MEM32(eax + 0x30);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    if (TEST_NZ(ecx, ecx)) goto loc_003256B6; /* jne: not equal / not zero */

loc_003256A8: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + eax + 0x40;
    if (TEST_NZ(ecx, ecx)) goto loc_003256BA; /* jne: not equal / not zero */

loc_003256B6: ;
    ebp = 0; /* xor self */
    goto loc_003256DA;

loc_003256BA: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_00331950(); /* call 0x00331950 */

loc_003256D3: ;
    ebp = MEM32(esp + 0x10);
    esp = esp + 8;

loc_003256DA: ;
    ecx = MEM32(edi + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_003256F1; /* je: equal / zero */

loc_003256ED: ;
    ecx = 0; /* xor self */
    goto loc_003256FB;

loc_003256F1: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    ecx = edx + eax + 0x40;

loc_003256FB: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1C);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_003318E0(); /* call 0x003318E0 */

loc_00325714: ;
    xmm1 = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648D3C); /* mulss */
    esp = esp + 8;
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    POP32(esp, ebp);
    if ((xmm1 <= xmm0)) goto loc_00325762; /* jbe: below or equal (unsigned <=) */

loc_0032572F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00325734: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_G(edx, 0x32)) goto loc_00325762; /* jg: greater (signed >) */

loc_00325741: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 8);
    eax = edi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_0032574F: ;
    edx = MEM32(edi + 0x568);
    eax = MEM32(edx + 0x444);
    esp = esp + 8;
    MEM8(eax + 0x2C) = 1;

loc_00325762: ;
    POP32(esp, esi);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

}

/**
 * sub_00325770
 * Original: 0x00325770 - 0x00325848 (216 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325770: ;
    ecx = MEM32(eax + 0x38);
    eax = MEM32(ecx + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_00325848(); return; } /* je: equal / zero */

loc_00325783: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0x444);
    ecx = MEM32(eax + 0x30);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) goto loc_003257FD; /* jne: not equal / not zero */

loc_00325797: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_003257FD; /* je: equal / zero */

loc_003257A5: ;
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_003257B4: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003257FD; /* je: equal / zero */

loc_003257BB: ;
    edx = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648E14); /* movss */
    edi = esi;
    MEMF(edx + 0x30C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00325580(); /* call 0x00325580 */

loc_003257D8: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ebp + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_003257EE: ;
    esp = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_003257F8: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003257FD: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(ebp + 4);
    ecx = MEM32(edx + 0x444);
    PUSH32(esp, 0); sub_0032FC70(); /* call 0x0032FC70 */

loc_00325811: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00325843; /* jne: not equal / not zero */

loc_00325815: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xAB3);
    eax = esi;
    PUSH32(esp, 0); sub_0031A2F0(); /* call 0x0031A2F0 */

loc_00325823: ;
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(eax + 0x30C) = xmm0; /* movss */
    esp = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00325843: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00325870
 * Original: 0x00325870 - 0x00325AD8 (616 bytes, 198 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325870: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    eax = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00325890: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00325AD1; /* je: equal / zero */

loc_0032589A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00325AC2; /* jne: not equal / not zero */

loc_003258C0: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xA0), ecx)) goto loc_003258E8; /* je: equal / zero */

loc_003258D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_003258DE: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003258E8: ;
    eax = MEM32(edi + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_0032FC70(); /* call 0x0032FC70 */

loc_003258F2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00325925; /* je: equal / zero */

loc_003258F6: ;
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_00325925; /* je: equal / zero */

loc_00325900: ;
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00325925; /* je: equal / zero */

loc_00325907: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBD4);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00325925: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032592E: ;
    MEM8(ebp + 0x181) = 0x14;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032594A; /* je: equal / zero */

loc_0032593C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032594A: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032595C: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00325971; /* je: equal / zero */

loc_00325963: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x180) = 0xFF;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00325971: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_00325979: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00325AD1; /* je: equal / zero */

loc_00325984: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x474);
    if (CMP_EQ(eax, MEM32(ebp + 0xA4))) goto loc_00325AD1; /* je: equal / zero */

loc_0032599C: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_003259AC: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00325A82; /* je: equal / zero */

loc_003259BB: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_00325AD1; /* je: equal / zero */

loc_003259C7: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_003259ED; /* jne: not equal / not zero */

loc_003259DA: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003259E6; /* je: equal / zero */

loc_003259E4: ;
    SET_LO8(ecx, 1);

loc_003259E6: ;
    MEM8(eax + 0x5A8) = 0;

loc_003259ED: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003259FC; /* jne: not equal / not zero */

loc_003259F4: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00325A82; /* je: equal / zero */

loc_003259FC: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00325A72; /* je: equal / zero */

loc_00325A01: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_00325A34; /* jne: not equal / not zero */

loc_00325A2D: ;
    MEM8(eax + 0x5A8) = 1;

loc_00325A34: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00325A53: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00325A5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00325A6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00325A72: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00325A78: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00325A82: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_00325A8D: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00325AD1; /* je: equal / zero */

loc_00325A94: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_00325AC2; /* je: equal / zero */

loc_00325AA3: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00325AC2; /* jne: not equal / not zero */

loc_00325AAA: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_00325AC2; /* je: equal / zero */

loc_00325AB3: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_00325770(); /* call 0x00325770 */

loc_00325ABB: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00325AD1; /* jne: not equal / not zero */

loc_00325AC2: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_00325ACE: ;
    esp = esp + 8;

loc_00325AD1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00325AE0
 * Original: 0x00325AE0 - 0x00325C53 (371 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325AE0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C);
    esi = eax;
    eax = ebx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00325AFA: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00325C4D; /* jne: not equal / not zero */

loc_00325B05: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(esi + 0xA4) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x1C);
    if (CMP_EQ(ecx, MEM32(esi + 0xA4))) goto loc_00325C4C; /* je: equal / zero */

loc_00325B21: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    eax = esp + 0x10;
    edx = ebp;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00325B31: ;
    edi = MEM32(esp + 0x10);
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_00325C09; /* je: equal / zero */

loc_00325B40: ;
    if (CMP_EQ(MEM32(esi + 0xA4), edi)) goto loc_00325C4C; /* je: equal / zero */

loc_00325B4C: ;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00325B72; /* jne: not equal / not zero */

loc_00325B5F: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00325B6B; /* je: equal / zero */

loc_00325B69: ;
    SET_LO8(ecx, 1);

loc_00325B6B: ;
    MEM8(eax + 0x5A8) = 0;

loc_00325B72: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00325B81; /* jne: not equal / not zero */

loc_00325B79: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00325C09; /* je: equal / zero */

loc_00325B81: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00325BF9; /* je: equal / zero */

loc_00325B86: ;
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebx) = edi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = edi;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00325BBB; /* jne: not equal / not zero */

loc_00325BB2: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_00325BBB: ;
    eax = MEM32(0x847024);
    ecx = MEM32(esi + 0x568);
    edi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00325BDA: ;
    ecx = eax;
    eax = MEM32(ebp + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00325BE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00325BF2: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00325BF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00325BFF: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00325C09: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00325C4C; /* je: equal / zero */

loc_00325C10: ;
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 1);
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_0032FAE0(); /* call 0x0032FAE0 */

loc_00325C25: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00325C4C; /* je: equal / zero */

loc_00325C2C: ;
    edi = esi;
    PUSH32(esp, 0); sub_00325580(); /* call 0x00325580 */

loc_00325C33: ;
    ecx = MEM32(esi + 0x568);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00325C49: ;
    esp = esp + 4;

loc_00325C4C: ;
    POP32(esp, ebp);

loc_00325C4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00325C60
 * Original: 0x00325C60 - 0x00325CC9 (105 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325C60: ;
    ecx = MEM32(eax + 0x64);
    ecx--;
    if (CMP_A(ecx, 0x3C)) goto loc_00325C9A; /* ja: above (unsigned >) */

loc_00325C69: ;
    ecx = ZX8(MEM8(ecx + 0x325CD8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x325CCC); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00325C77u) goto loc_00325C77;
    if (_jt == 0x00325C8Au) goto loc_00325C8A;
    if (_jt == 0x00325C9Au) goto loc_00325C9A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00325C77: ;
    SET_LO16(edx, MEM16(eax + 0x3AA));
    if (CMP_AE(LO16(edx), MEM16(eax + 0x3AC))) goto loc_00325C9A; /* jae: above or equal (unsigned >=) */

loc_00325C87: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00325C8A: ;
    SET_LO16(ecx, MEM16(eax + 0x3AE));
    if (CMP_B(LO16(ecx), MEM16(eax + 0x3B0))) goto loc_00325C87; /* jb: below (unsigned <) */

loc_00325C9A: ;
    ecx = MEM32(eax + 0x68);
    ecx = ecx + 0xFFFFFF3Au;
    if (CMP_A(ecx, 0x6F)) goto loc_00325CC6; /* ja: above (unsigned >) */

loc_00325CA8: ;
    edx = ZX8(MEM8(ecx + 0x325D20));
    { uint32_t _jt = MEM32(edx * 4 + 0x325D18); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00325CB6u) goto loc_00325CB6;
    if (_jt == 0x00325CC6u) goto loc_00325CC6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00325CB6: ;
    SET_LO16(ecx, MEM16(eax + 0x3AE));
    if (CMP_B(LO16(ecx), MEM16(eax + 0x3B0))) goto loc_00325C87; /* jb: below (unsigned <) */

loc_00325CC6: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00325D90
 * Original: 0x00325D90 - 0x00325DC7 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00325D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1F4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_00325DA4: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00325DBD; /* je: equal / zero */

loc_00325DAD: ;
    /* nop */

loc_00325DB0: ;
    if (CMP_EQ(MEM32(eax + 4), 0x55)) goto loc_00325DBF; /* je: equal / zero */

loc_00325DB6: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_00325DB0; /* jne: not equal / not zero */

loc_00325DBD: ;
    eax = ecx;

loc_00325DBF: ;
    if (CMP_NE(eax, ecx)) { sub_00325DC7(); return; } /* jne: not equal / not zero */

loc_00325DC3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00325DC9(); return; /* tail jmp 0x00325DC9 */

}

/**
 * sub_00326540
 * Original: 0x00326540 - 0x0032668E (334 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326540: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_Z(ecx, ecx)) { sub_0032668E(); return; } /* je: equal / zero */

loc_00326558: ;
    eax = MEM32(ebx + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x63D));
    xmm0 = MEMF(0x648E14); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    MEMF(eax + 0x30C) = xmm0; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xC4B);
    eax = ebx;
    MEM8(esp + 0x18) = LO8(ecx);
    PUSH32(esp, 0); sub_0031A2F0(); /* call 0x0031A2F0 */

loc_0032658E: ;
    esi = MEM32(0x847024);
    ebp = MEM32(esi + 0x40);
    edi = MEM32(ebp + 4);
    esp = esp + 8;
    PUSH32(esp, 0xC4C);
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_003265A7: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_003265D3; /* jl: less (signed <) */

loc_003265AD: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003265C4; /* je: equal / zero */

loc_003265B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_003265C1: ;
    esp = esp + 8;

loc_003265C4: ;
    edx = MEM32(ebp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_003265D3: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_003265ED: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00325D90(); /* call 0x00325D90 */

loc_003265F8: ;
    esp = esp + 0xC;
    eax = ebx;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00326602: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(esp + 0x1C);
    MEM8(ecx + 0x63C) = 1;
    eax = MEM32(edx + 0x38);
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00326684; /* je: equal / zero */

loc_0032661D: ;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0x3F4);
    edx = MEM32(ecx + 8);
    if (TEST_NZ(edx, edx)) goto loc_0032664C; /* jne: not equal / not zero */

loc_00326630: ;
    edx = MEM32(eax + 0x444);
    edi = MEM32(edx + 8);
    eax = 0; /* xor self */
    (void)0; /* cmp edi, 5 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edi, 5)) ? 1 : 0); /* sete */
    eax--;
    eax = eax & 0xFFFFFFCEu;
    eax = eax + 0xA7B;
    goto loc_00326669;

loc_0032664C: ;
    eax = MEM32(eax + 0x444);
    edi = MEM32(eax + 8);
    ecx = 0; /* xor self */
    (void)0; /* cmp edi, 5 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edi, 5)) ? 1 : 0); /* sete */
    ecx--;
    ecx = ecx & 0xFFFFFF9Cu;
    ecx = ecx + 0xAE9;
    eax = ecx;

loc_00326669: ;
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00326684: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003266E0
 * Original: 0x003266E0 - 0x0032690F (559 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003266E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003266E0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00326700: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00326908; /* je: equal / zero */

loc_0032670A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003268F9; /* jne: not equal / not zero */

loc_00326730: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_00326755; /* je: equal / zero */

loc_0032673E: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032674B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00326755: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032675E: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00326770: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00326908; /* jne: not equal / not zero */

loc_0032677B: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00326790; /* je: equal / zero */

loc_00326782: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00326790: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_00326798: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00326908; /* je: equal / zero */

loc_003267A3: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_00326908; /* je: equal / zero */

loc_003267BB: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_003267CB: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_003268A3; /* je: equal / zero */

loc_003267DA: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_00326908; /* je: equal / zero */

loc_003267E6: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032680C; /* jne: not equal / not zero */

loc_003267F9: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00326805; /* je: equal / zero */

loc_00326803: ;
    SET_LO8(ecx, 1);

loc_00326805: ;
    MEM8(eax + 0x5A8) = 0;

loc_0032680C: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032681B; /* jne: not equal / not zero */

loc_00326813: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003268A3; /* je: equal / zero */

loc_0032681B: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00326893; /* je: equal / zero */

loc_00326820: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00326855; /* jne: not equal / not zero */

loc_0032684C: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_00326855: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00326874: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00326880: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032688C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00326893: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00326899: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003268A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_003268AE: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00326908; /* je: equal / zero */

loc_003268B5: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_003268F9; /* je: equal / zero */

loc_003268C4: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003268F9; /* jne: not equal / not zero */

loc_003268CB: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003268F9; /* jp: parity */

loc_003268E0: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_003268F9; /* je: equal / zero */

loc_003268E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_00326540(); /* call 0x00326540 */

loc_003268F2: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00326908; /* jne: not equal / not zero */

loc_003268F9: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_00326905: ;
    esp = esp + 8;

loc_00326908: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00326910
 * Original: 0x00326910 - 0x00326A98 (392 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326910: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C);
    esi = eax;
    eax = ebx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032692A: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00326A92; /* jne: not equal / not zero */

loc_00326935: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(esi + 0xA4) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x1C);
    if (CMP_EQ(ecx, MEM32(esi + 0xA4))) goto loc_00326A91; /* je: equal / zero */

loc_00326951: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    eax = esp + 0x10;
    edx = ebp;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00326961: ;
    edi = MEM32(esp + 0x10);
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_00326A39; /* je: equal / zero */

loc_00326970: ;
    if (CMP_EQ(MEM32(esi + 0xA4), edi)) goto loc_00326A91; /* je: equal / zero */

loc_0032697C: ;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_003269A2; /* jne: not equal / not zero */

loc_0032698F: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032699B; /* je: equal / zero */

loc_00326999: ;
    SET_LO8(ecx, 1);

loc_0032699B: ;
    MEM8(eax + 0x5A8) = 0;

loc_003269A2: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003269B1; /* jne: not equal / not zero */

loc_003269A9: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00326A39; /* je: equal / zero */

loc_003269B1: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00326A29; /* je: equal / zero */

loc_003269B6: ;
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebx) = edi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = edi;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_003269EB; /* jne: not equal / not zero */

loc_003269E2: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_003269EB: ;
    eax = MEM32(0x847024);
    ecx = MEM32(esi + 0x568);
    edi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00326A0A: ;
    ecx = eax;
    eax = MEM32(ebp + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00326A16: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00326A22: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00326A29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00326A2F: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00326A39: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(ebx + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00326A6B; /* je: equal / zero */

loc_00326A43: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00326A59; /* jne: not equal / not zero */

loc_00326A47: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00325D90(); /* call 0x00325D90 */

loc_00326A4F: ;
    esp = esp + 8;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00326A59: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00325D90(); /* call 0x00325D90 */

loc_00326A61: ;
    esp = esp + 8;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00326A6B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00326A91; /* je: equal / zero */

loc_00326A6F: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    eax = 0x47;
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00326A8E: ;
    esp = esp + 8;

loc_00326A91: ;
    POP32(esp, ebp);

loc_00326A92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00326AA0
 * Original: 0x00326AA0 - 0x00326AAE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00326AA0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_00326AAE(); return; } /* jne: not equal / not zero */

loc_00326AA7: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00326AF0
 * Original: 0x00326AF0 - 0x00326D56 (614 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326AF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326AF0: ;
    esp = esp - 0x454;
    ecx = MEM32(esp + 0x45C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(eax + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00326B14; /* je: equal / zero */

loc_00326B0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00326B14: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_00326B21: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_00326C64; /* jne: not equal / not zero */

loc_00326B34: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00326D2A; /* jbe: below or equal (unsigned <=) */

loc_00326B3C: ;
    eax = esp + 0x48;
    edx = esp + 0x30;
    ecx = eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = ecx;
    esi = esi + 0x10;

loc_00326B55: ;
    edx = MEM32(esi);
    eax = MEM32(esp + 0x46C);
    MEM32(eax) = edx;
    ecx = esi + -16;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x468);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0x38) = edx;
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_00326C4F; /* jbe: below or equal (unsigned <=) */

loc_00326BF4: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x64);
    ecx--;
    if (CMP_A(ecx, 0x3C)) goto loc_00326C4F; /* ja: above (unsigned >) */

loc_00326BFF: ;
    edx = ZX8(MEM8(ecx + 0x326D64));
    { uint32_t _jt = MEM32(edx * 4 + 0x326D58); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00326C0Du) goto loc_00326C0D;
    if (_jt == 0x00326C17u) goto loc_00326C17;
    if (_jt == 0x00326C4Fu) goto loc_00326C4F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00326C0D: ;
    if (CMP_EQ(MEM16(eax + 0x3AC), 0)) goto loc_00326C4F; /* je: equal / zero */

loc_00326C17: ;
    ecx = MEM32(eax + 0x238);
    ecx = MEM32(ecx);
    edx = MEM32(esp + 0x470);
    if (CMP_EQ(ecx, edx)) goto loc_00326C34; /* je: equal / zero */

loc_00326C2A: ;
    if (CMP_EQ(ecx, 2)) goto loc_00326C34; /* je: equal / zero */

loc_00326C2F: ;
    if (CMP_NE(edx, 2)) goto loc_00326C4F; /* jne: not equal / not zero */

loc_00326C34: ;
    if (CMP_EQ(MEM16(eax + 0x3AE), 0)) goto loc_00326C4F; /* je: equal / zero */

loc_00326C3E: ;
    if (CMP_EQ(eax, MEM32(esp + 0x474))) goto loc_00326C4F; /* je: equal / zero */

loc_00326C47: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_00326C4F: ;
    eax = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, eax)) goto loc_00326B55; /* jl: less (signed <) */

loc_00326C5F: ;
    goto loc_00326D2A;

loc_00326C64: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00326D2A; /* jbe: below or equal (unsigned <=) */

loc_00326C6C: ;
    edx = esp + 0x58;
    ecx = esp + 0x20;
    eax = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;

loc_00326C82: ;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x468);
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_00326D1A; /* jbe: below or equal (unsigned <=) */

loc_00326D19: ;
    ebx++;

loc_00326D1A: ;
    edx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, edx)) goto loc_00326C82; /* jl: less (signed <) */

loc_00326D2A: ;
    ebp = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(ebp, ebp)) goto loc_00326B21; /* jne: not equal / not zero */

loc_00326D37: ;
    eax = MEM32(esp + 0x46C);
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
 * sub_00326DB0
 * Original: 0x00326DB0 - 0x00326DE5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326DB0(void)
{

loc_00326DB0: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(0x7FDBF8) = eax;
    MEM32(0x7FDBF4) = eax;
    MEM32(0x7FDBF0) = eax;
    MEM32(0x7FDBE8) = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, eax);
    MEM32(0x7FDBEC) = 0x14;
    PUSH32(esp, 0); sub_001A7F50(); /* call 0x001A7F50 */

loc_00326DE1: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00326DF0
 * Original: 0x00326DF0 - 0x00326F5D (365 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326DF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00326DF0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp - 8;
    MEM32(esi) = 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    ebx = eax;
    MEMF(esi + 8) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    ecx = 0; /* xor self */
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00326EDE; /* je: equal / zero */

loc_00326E1F: ;
    eax--;
    if ((eax == 0)) goto loc_00326E8B; /* je: equal / zero */

loc_00326E22: ;
    eax--;
    if ((eax != 0)) goto loc_00326F38; /* jne: not equal / not zero */

loc_00326E29: ;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00326E40: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00326F36; /* je: equal / zero */

loc_00326E4B: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_00326E6C; /* je: equal / zero */

loc_00326E53: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_00326E6C; /* je: equal / zero */

loc_00326E58: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00326E6C; /* je: equal / zero */

loc_00326E5E: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (TEST_NZ(ecx, ecx)) goto loc_00326F28; /* jne: not equal / not zero */

loc_00326E6C: ;
    eax = MEM32(esp + 8);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_00326F36; /* je: equal / zero */

loc_00326E79: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00326F36; /* je: equal / zero */

loc_00326E83: ;
    eax = eax + 0x10;
    goto loc_00326F23;

loc_00326E8B: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00326EA2: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00326F36; /* je: equal / zero */

loc_00326EAD: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00326ECA; /* je: equal / zero */

loc_00326EB5: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_00326ECA; /* je: equal / zero */

loc_00326EBA: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00326ECA; /* je: equal / zero */

loc_00326EC0: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_00326F28; /* jne: not equal / not zero */

loc_00326ECA: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_00326F36; /* je: equal / zero */

loc_00326ED3: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00326F36; /* je: equal / zero */

loc_00326ED9: ;
    eax = eax + 8;
    goto loc_00326F23;

loc_00326EDE: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00326EF5: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00326F36; /* je: equal / zero */

loc_00326EFC: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00326F14; /* je: equal / zero */

loc_00326F04: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_00326F14; /* je: equal / zero */

loc_00326F09: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00326F14; /* je: equal / zero */

loc_00326F0F: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_00326F28; /* jne: not equal / not zero */

loc_00326F14: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_00326F36; /* je: equal / zero */

loc_00326F1D: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00326F36; /* je: equal / zero */

loc_00326F23: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00326F36; /* je: equal / zero */

loc_00326F28: ;
    if (TEST_Z(eax, eax)) goto loc_00326F36; /* je: equal / zero */

loc_00326F2C: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 8) = edx;

loc_00326F36: ;
    ecx = 0; /* xor self */

loc_00326F38: ;
    eax = MEM32(ebx + 0x568);
    edx = ZX8(MEM8(eax + 0x48C));
    MEM32(esi) = MEM32(esi) + edx;
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(esi);
    MEM32(eax + 0x474) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00326F60
 * Original: 0x00326F60 - 0x00326FA2 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326F60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x52F) = 0;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(ebp + 0x568);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    MEM8(eax + 0x52F) = LO8(edx);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_NZ(ecx, ecx)) { sub_00326FA2(); return; } /* jne: not equal / not zero */

loc_00326F97: ;
    ecx = MEM32(eax + 0x2C);
    if (TEST_Z(ecx, ecx)) { sub_00326FA2(); return; } /* je: equal / zero */

loc_00326F9E: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_00326FA4(); return; /* tail jmp 0x00326FA4 */

}

/**
 * sub_00327130
 * Original: 0x00327130 - 0x00327367 (567 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327130: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x568);
    eax = MEM32(esi + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032714E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00327360; /* je: equal / zero */

loc_00327158: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    eax = MEM32(eax + 0x18);
    MEM8(esi + 0x52F) = 0;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00327351; /* jne: not equal / not zero */

loc_00327185: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0xA0);
    if (CMP_EQ(edx, MEM32(ebx + 0x30))) goto loc_003271AD; /* je: equal / zero */

loc_00327196: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_003271A3: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003271AD: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_003271B6: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_003271C8: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00327360; /* jne: not equal / not zero */

loc_003271D3: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003271E8; /* je: equal / zero */

loc_003271DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003271E8: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_003271F0: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00327360; /* je: equal / zero */

loc_003271FB: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_00327360; /* je: equal / zero */

loc_00327213: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00327223: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_003272FB; /* je: equal / zero */

loc_00327232: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_00327360; /* je: equal / zero */

loc_0032723E: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00327264; /* jne: not equal / not zero */

loc_00327251: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032725D; /* je: equal / zero */

loc_0032725B: ;
    SET_LO8(ecx, 1);

loc_0032725D: ;
    MEM8(eax + 0x5A8) = 0;

loc_00327264: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00327273; /* jne: not equal / not zero */

loc_0032726B: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003272FB; /* je: equal / zero */

loc_00327273: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_003272EB; /* je: equal / zero */

loc_00327278: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_003272AD; /* jne: not equal / not zero */

loc_003272A4: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_003272AD: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_003272CC: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_003272D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003272E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003272EB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_003272F1: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003272FB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_00327306: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00327360; /* je: equal / zero */

loc_0032730D: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_00327351; /* je: equal / zero */

loc_0032731C: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00327351; /* jne: not equal / not zero */

loc_00327323: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00327351; /* jp: parity */

loc_00327338: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_00327351; /* je: equal / zero */

loc_00327341: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_00326F60(); /* call 0x00326F60 */

loc_0032734A: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00327360; /* jne: not equal / not zero */

loc_00327351: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032735D: ;
    esp = esp + 8;

loc_00327360: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00327370
 * Original: 0x00327370 - 0x00327625 (693 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327370: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    ebx = eax;
    eax = ebp + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    esi = ebx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00327392: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032761D; /* jne: not equal / not zero */

loc_0032739D: ;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(ebx + 0xA4) - flags set for next jcc */
    edi = MEM32(ebp + 0x1C);
    if (CMP_EQ(ecx, MEM32(ebx + 0xA4))) goto loc_0032761D; /* je: equal / zero */

loc_003273B8: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    eax = esp + 0x14;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_003273C8: ;
    esi = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(esi, ecx)) goto loc_0032749B; /* je: equal / zero */

loc_003273D9: ;
    if (CMP_EQ(MEM32(ebx + 0xA4), esi)) goto loc_0032761D; /* je: equal / zero */

loc_003273E5: ;
    eax = MEM32(ebx + 0x568);
    SET_LO8(edx, 0); /* xor self */
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_00327406; /* jne: not equal / not zero */

loc_003273F6: ;
    if (CMP_EQ(MEM8(eax + 0x5A8), LO8(ecx))) goto loc_00327400; /* je: equal / zero */

loc_003273FE: ;
    SET_LO8(edx, 1);

loc_00327400: ;
    MEM8(eax + 0x5A8) = LO8(ecx);

loc_00327406: ;
    if (CMP_NE(MEM8(edi + 0xC), LO8(ecx))) goto loc_00327413; /* jne: not equal / not zero */

loc_0032740B: ;
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_0032749B; /* je: equal / zero */

loc_00327413: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0032748A; /* je: equal / zero */

loc_00327418: ;
    edx = MEM32(esp + 0x1C);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(ebp) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    MEM32(eax + 0x474) = esi;
    eax = MEM32(ebx + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), ecx)) goto loc_0032744A; /* jne: not equal / not zero */

loc_00327443: ;
    MEM8(eax + 0x5A8) = 1;

loc_0032744A: ;
    edx = MEM32(ebx + 0x568);
    ecx = MEM32(0x847024);
    eax = MEM32(edx + 0x444);
    esi = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032746A: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebx;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00327476: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00327482: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0032748A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00327490: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0032749B: ;
    if (CMP_EQ(MEM8(ebp + 0x19), LO8(ecx))) goto loc_0032761D; /* je: equal / zero */

loc_003274A4: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(ebp + 0x1C);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(ebp) = 0xFFFFFFFFu;
    MEMF(esi) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00327591; /* je: equal / zero */

loc_003274D2: ;
    eax--;
    if ((eax == 0)) goto loc_0032753E; /* je: equal / zero */

loc_003274D5: ;
    eax--;
    if ((eax != 0)) goto loc_003275E9; /* jne: not equal / not zero */

loc_003274DC: ;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_003274F3: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003275E9; /* je: equal / zero */

loc_003274FE: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0032751F; /* je: equal / zero */

loc_00327506: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032751F; /* je: equal / zero */

loc_0032750B: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032751F; /* je: equal / zero */

loc_00327511: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (TEST_NZ(ecx, ecx)) goto loc_003275DB; /* jne: not equal / not zero */

loc_0032751F: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003275E9; /* je: equal / zero */

loc_0032752C: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003275E9; /* je: equal / zero */

loc_00327536: ;
    eax = eax + 0x10;
    goto loc_003275D6;

loc_0032753E: ;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00327555: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003275E9; /* je: equal / zero */

loc_00327560: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0032757D; /* je: equal / zero */

loc_00327568: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032757D; /* je: equal / zero */

loc_0032756D: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032757D; /* je: equal / zero */

loc_00327573: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_003275DB; /* jne: not equal / not zero */

loc_0032757D: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003275E9; /* je: equal / zero */

loc_00327586: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003275E9; /* je: equal / zero */

loc_0032758C: ;
    eax = eax + 8;
    goto loc_003275D6;

loc_00327591: ;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_003275A8: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003275E9; /* je: equal / zero */

loc_003275AF: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_003275C7; /* je: equal / zero */

loc_003275B7: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003275C7; /* je: equal / zero */

loc_003275BC: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003275C7; /* je: equal / zero */

loc_003275C2: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_003275DB; /* jne: not equal / not zero */

loc_003275C7: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003275E9; /* je: equal / zero */

loc_003275D0: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003275E9; /* je: equal / zero */

loc_003275D6: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_003275E9; /* je: equal / zero */

loc_003275DB: ;
    if (TEST_Z(eax, eax)) goto loc_003275E9; /* je: equal / zero */

loc_003275DF: ;
    ecx = MEM32(eax);
    MEM32(ebp) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi) = edx;

loc_003275E9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 8) = xmm0; /* movss */
    SET_LO8(eax, 0xFF);
    PUSH32(esp, 0xBF800000u);
    MEM8(ebx + 0x180) = LO8(eax);
    MEM8(ebx + 0x17D) = LO8(eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA41);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032761D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00327630
 * Original: 0x00327630 - 0x00327667 (55 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327630(void)
{
    int _flags = 0; /* fallback flag var */

loc_00327630: ;
    ecx = MEM32(0x59DDC0);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(0x7FDBF8) = 0x46;
    MEM32(0x7FDBF4) = eax;
    MEM32(0x7FDBF0) = eax;
    MEM32(0x7FDBEC) = eax;
    MEM32(0x7FDBE8) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_00327666; /* je: equal / zero */

loc_0032765A: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x46);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00327663: ;
    esp = esp + 8;

loc_00327666: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00327670
 * Original: 0x00327670 - 0x00327912 (674 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327670(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00327670: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x568);
    if (TEST_NZ(MEM8(eax + 0x2E7), 4)) goto loc_00327692; /* jne: not equal / not zero */

loc_00327685: ;
    if (CMP_NE(MEM32(eax + 0x2B0), 2)) goto loc_003277D3; /* jne: not equal / not zero */

loc_00327692: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi) = 0xFFFFFFFFu;
    MEMF(esi + 8) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    ecx = 0; /* xor self */
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00327789; /* je: equal / zero */

loc_003276BB: ;
    eax--;
    if ((eax == 0)) goto loc_00327727; /* je: equal / zero */

loc_003276BE: ;
    eax--;
    if ((eax != 0)) goto loc_003278FC; /* jne: not equal / not zero */

loc_003276C5: ;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_003276DC: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003278FA; /* je: equal / zero */

loc_003276E7: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_00327708; /* je: equal / zero */

loc_003276EF: ;
    eax = eax + 0x34;
    if ((eax == 0)) goto loc_00327708; /* je: equal / zero */

loc_003276F4: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00327708; /* je: equal / zero */

loc_003276FA: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (TEST_NZ(ecx, ecx)) goto loc_003278EC; /* jne: not equal / not zero */

loc_00327708: ;
    eax = MEM32(esp + 8);
    eax = eax + 0x34;

loc_0032770F: ;
    if ((eax == 0)) goto loc_003278FA; /* je: equal / zero */

loc_00327715: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003278FA; /* je: equal / zero */

loc_0032771F: ;
    eax = eax + 0x10;
    goto loc_003278E7;

loc_00327727: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032773E: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003278FA; /* je: equal / zero */

loc_00327749: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0032776A; /* je: equal / zero */

loc_00327751: ;
    eax = eax + 0x34;
    if ((eax == 0)) goto loc_0032776A; /* je: equal / zero */

loc_00327756: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032776A; /* je: equal / zero */

loc_0032775C: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_003278EC; /* jne: not equal / not zero */

loc_0032776A: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x34;

loc_00327771: ;
    if ((eax == 0)) goto loc_003278FA; /* je: equal / zero */

loc_00327777: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003278FA; /* je: equal / zero */

loc_00327781: ;
    eax = eax + 8;
    goto loc_003278E7;

loc_00327789: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_003277A0: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003278FA; /* je: equal / zero */

loc_003277AB: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_003277C7; /* je: equal / zero */

loc_003277B3: ;
    eax = eax + 0x34;
    if ((eax == 0)) goto loc_003277C7; /* je: equal / zero */

loc_003277B8: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003277C7; /* je: equal / zero */

loc_003277BE: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_003278EC; /* jne: not equal / not zero */

loc_003277C7: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x34;
    goto loc_003278DF;

loc_003277D3: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi) = 0xFFFFFFFFu;
    MEMF(esi + 8) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    ecx = 0; /* xor self */
    eax = eax - ecx;
    if ((eax == 0)) goto loc_003278A2; /* je: equal / zero */

loc_003277FC: ;
    eax--;
    if ((eax == 0)) goto loc_00327857; /* je: equal / zero */

loc_003277FF: ;
    eax--;
    if ((eax != 0)) goto loc_003278FA; /* jne: not equal / not zero */

loc_00327806: ;
    eax = 0; /* xor self */
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032781F: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003278FA; /* je: equal / zero */

loc_0032782A: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0032784B; /* je: equal / zero */

loc_00327832: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032784B; /* je: equal / zero */

loc_00327837: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032784B; /* je: equal / zero */

loc_0032783D: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (TEST_NZ(ecx, ecx)) goto loc_003278EC; /* jne: not equal / not zero */

loc_0032784B: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    goto loc_0032770F;

loc_00327857: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032786E: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003278FA; /* je: equal / zero */

loc_00327879: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00327896; /* je: equal / zero */

loc_00327881: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_00327896; /* je: equal / zero */

loc_00327886: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00327896; /* je: equal / zero */

loc_0032788C: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_003278EC; /* jne: not equal / not zero */

loc_00327896: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    goto loc_00327771;

loc_003278A2: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_003278B9: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003278FA; /* je: equal / zero */

loc_003278C0: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_003278D8; /* je: equal / zero */

loc_003278C8: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_003278D8; /* je: equal / zero */

loc_003278CD: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003278D8; /* je: equal / zero */

loc_003278D3: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_003278EC; /* jne: not equal / not zero */

loc_003278D8: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;

loc_003278DF: ;
    if ((eax == 0)) goto loc_003278FA; /* je: equal / zero */

loc_003278E1: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003278FA; /* je: equal / zero */

loc_003278E7: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_003278FA; /* je: equal / zero */

loc_003278EC: ;
    if (TEST_Z(eax, eax)) goto loc_003278FA; /* je: equal / zero */

loc_003278F0: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 8) = edx;

loc_003278FA: ;
    ecx = 0; /* xor self */

loc_003278FC: ;
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(esi);
    MEM32(eax + 0x474) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00327920
 * Original: 0x00327920 - 0x00327943 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327920: ;
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(eax + 0x284); /* movss */
    esp = esp - 0x24;
    ecx = 0; /* xor self */
    /* comiss xmm0, MEMF(0x6490F4) - sets EFLAGS */
    if ((xmm0 < MEMF(0x6490F4))) { sub_00327943(); return; } /* jb: below (unsigned <) */

loc_0032793C: ;
    ecx = 2;
    g_seh_ebp = ebp; sub_00327959(); return; /* tail jmp 0x00327959 */

}

/**
 * sub_00327A10
 * Original: 0x00327A10 - 0x00327A32 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327A10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x28);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) { sub_00327A32(); return; } /* jne: not equal / not zero */

loc_00327A27: ;
    ecx = MEM32(eax + 0x2C);
    if (TEST_Z(ecx, ecx)) { sub_00327A32(); return; } /* je: equal / zero */

loc_00327A2E: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_00327A34(); return; /* tail jmp 0x00327A34 */

}

/**
 * sub_00328000
 * Original: 0x00328000 - 0x00328299 (665 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328000: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00328020: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00328292; /* je: equal / zero */

loc_0032802A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00328073; /* je: equal / zero */

loc_0032804C: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_00328058: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(eax + 0x284) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00328073: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_00328096; /* je: equal / zero */

loc_00328081: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032808E: ;
    esp = esp + 0xC;
    goto loc_00328223;

loc_00328096: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032809F: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_003280B1: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003280D0; /* je: equal / zero */

loc_003280B8: ;
    edx = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(edx + 0x284) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003280D0: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003280F6; /* je: equal / zero */

loc_003280D7: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEM32(ebx + 0x14) = 0;
    eax = MEM32(ebp + 0x568);
    POP32(esp, esi);
    MEMF(eax + 0x284) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003280F6: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_003280FE: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00328223; /* je: equal / zero */

loc_00328109: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x474);
    if (CMP_EQ(eax, MEM32(ebp + 0xA4))) goto loc_00328223; /* je: equal / zero */

loc_00328121: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00328131: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_003281F2; /* je: equal / zero */

loc_00328140: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_00328223; /* je: equal / zero */

loc_0032814C: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00328172; /* jne: not equal / not zero */

loc_0032815F: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032816B; /* je: equal / zero */

loc_00328169: ;
    SET_LO8(ecx, 1);

loc_0032816B: ;
    MEM8(eax + 0x5A8) = 0;

loc_00328172: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032817D; /* jne: not equal / not zero */

loc_00328179: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003281F2; /* je: equal / zero */

loc_0032817D: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_003281E7; /* je: equal / zero */

loc_00328182: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_003281B7; /* jne: not equal / not zero */

loc_003281AE: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_003281B7: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_003281D7: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_003281E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    goto loc_00328219;

loc_003281E7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_003281ED: ;
    esp = esp + 4;
    goto loc_00328223;

loc_003281F2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_003281FD: ;
    esp = esp + 0xC;
    if (CMP_NE(LO8(eax), 1)) goto loc_0032823B; /* jne: not equal / not zero */

loc_00328204: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xA45);
    PUSH32(esp, eax);

loc_00328219: ;
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00328223: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ecx + 0x284) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032823B: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_00328283; /* je: equal / zero */

loc_0032824A: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00328283; /* jne: not equal / not zero */

loc_00328251: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00328283; /* jp: parity */

loc_00328266: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_00328283; /* je: equal / zero */

loc_0032826F: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00327A10(); /* call 0x00327A10 */

loc_0032827C: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00328292; /* jne: not equal / not zero */

loc_00328283: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032828F: ;
    esp = esp + 8;

loc_00328292: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003282A0
 * Original: 0x003282A0 - 0x00328467 (455 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003282A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003282A0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    edi = MEM32(ebx + 0x1C);
    eax = ebx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_003282C2: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032845F; /* jne: not equal / not zero */

loc_003282CD: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(ebp + 0xA4) - flags set for next jcc */
    edi = MEM32(ebx + 0x1C);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0032845F; /* je: equal / zero */

loc_003282E8: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    eax = esp + 0x18;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_003282F8: ;
    esi = MEM32(esp + 0x18);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_003283D1; /* je: equal / zero */

loc_00328307: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0032845F; /* je: equal / zero */

loc_00328313: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00328339; /* jne: not equal / not zero */

loc_00328326: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00328332; /* je: equal / zero */

loc_00328330: ;
    SET_LO8(ecx, 1);

loc_00328332: ;
    MEM8(eax + 0x5A8) = 0;

loc_00328339: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00328348; /* jne: not equal / not zero */

loc_00328340: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003283D1; /* je: equal / zero */

loc_00328348: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_003283C0; /* je: equal / zero */

loc_0032834D: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_00328380; /* jne: not equal / not zero */

loc_00328379: ;
    MEM8(eax + 0x5A8) = 1;

loc_00328380: ;
    edx = MEM32(ebp + 0x568);
    ecx = MEM32(0x847024);
    eax = MEM32(edx + 0x444);
    esi = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_003283A0: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_003283AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003283B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003283C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_003283C6: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003283D1: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032845F; /* je: equal / zero */

loc_003283DC: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_NZ(MEM8(eax + 0x2E7), 4)) goto loc_003283F4; /* jne: not equal / not zero */

loc_003283EB: ;
    if (CMP_NE(MEM32(eax + 0x2B0), 2)) goto loc_003283FF; /* jne: not equal / not zero */

loc_003283F4: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, eax);
    ecx = 3;
    goto loc_00328408;

loc_003283FF: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    ecx = 1;

loc_00328408: ;
    esi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002B1600(); /* call 0x002B1600 */

loc_00328414: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(0x847024);
    esp = esp + 8;
    PUSH32(esp, 0xBF800000u);
    MEMF(ebx + 8) = xmm0; /* movss */
    SET_LO8(eax, 0xFF);
    PUSH32(esp, ebp);
    MEM8(ebp + 0x180) = LO8(eax);
    MEM8(ebp + 0x17D) = LO8(eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0x8CA);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032844C: ;
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, ecx);
    esi = ebp;
    PUSH32(esp, 0); sub_00327920(); /* call 0x00327920 */

loc_00328457: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_0032845F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00328470
 * Original: 0x00328470 - 0x003284A5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328470(void)
{

loc_00328470: ;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM8(eax + 0x30) = LO8(ecx);
    MEM16(eax + 0x32) = LO16(ecx);
    MEM32(eax) = 0x639120;
    MEM8(eax + 0x44) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003284B0
 * Original: 0x003284B0 - 0x003284B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003284B0(void)
{

loc_003284B0: ;
    eax = 0x2B;
    esp += 4; return; /* ret */

}

/**
 * sub_003284C0
 * Original: 0x003284C0 - 0x00328527 (103 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003284C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003284C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003284C8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_003284D0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00328527(); return; } /* je: equal / zero */

loc_003284D4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_003284D0; /* jl: less (signed <) */

loc_003284E0: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x44));
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0x6391C0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00328520: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00328540
 * Original: 0x00328540 - 0x0032868B (331 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00328540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x780AB0) = 0x639188;
    MEM32(0x6C0210) = 0x32;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4100000;
    if (CMP_EQ(eax, ebx)) { sub_0032868B(); return; } /* je: equal / zero */

loc_0032857E: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x20) = edx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    ecx = MEM32(esp + 0x20);
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x18) = edx;
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
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    edx = MEM32(esp + 0x2C);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x2C); /* divss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x34); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x3C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = esp + 0x60;
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_00328669: ;
    eax = MEM32(esp + 0x144);
    esp = esp + 0x30;
    if (CMP_NE(eax, 1)) { sub_0032868B(); return; } /* jne: not equal / not zero */

loc_00328678: ;
    MEM32(0x780AB0) = ebx;
    MEM32(0x74FA2C) = ebx;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_003287E0(); return; /* tail jmp 0x003287E0 */

}

/**
 * sub_00328810
 * Original: 0x00328810 - 0x00328A26 (534 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328810(void)
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

loc_00328810: ;
    esp = esp - 0x8C;
    ecx = MEM32(0x5A02D0);
    edx = MEM32(0x5A02D4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x5A02CC);
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = ecx;
    eax = edi + 0x78;
    ecx = esp + 0x3C;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x48);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x98);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm1 = MEMF(edi + 0x114); /* movss */
    xmm1 = xmm1 * MEMF(0x648E18); /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fsin  */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(esp + 0x10);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = edx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x30) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = xmm1 - MEMF(esp + 0x30); /* subss */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x14) = xmm1; /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    xmm1 = xmm0; /* movaps */
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 0x34) = ecx;
    xmm1 = xmm1 - MEMF(esp + 0x34); /* subss */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x38) = edx;
    fp_top() = -fp_top(); /* fchs */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = xmm1 - MEMF(esp + 0x38); /* subss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x50) = ecx;
    fp_top() = -fp_top(); /* fchs */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x54) = edx;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = edx;
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(0x648D34); /* movss */
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x78) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x7C) = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x84) = edx;
    MEMF(esp + 0x24) = xmm1; /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x88) = eax;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM32(esp + 0x90) = ecx;
    MEM32(esp + 0x94) = edx;
    PUSH32(esp, 0); sub_00328540(); /* call 0x00328540 */

loc_00328A14: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00328A26(); return; } /* je: equal / zero */

loc_00328A1B: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00328B30
 * Original: 0x00328B30 - 0x00328B7F (79 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328B30(void)
{

loc_00328B30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    edx = 0x752;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00328B4B: ;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = 0x752;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x480) = 0x752;
    edx = MEM32(esi + 0x568);
    esp = esp + 0x18;
    MEM32(edx + 0x484) = 0x752;
    esp += 4; return; /* ret */

}

/**
 * sub_00328B80
 * Original: 0x00328B80 - 0x00328BBA (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328B80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00328B80: ;
    PUSH32(esp, esi);
    esi = ebx;
    PUSH32(esp, 0); sub_00328B30(); /* call 0x00328B30 */

loc_00328B88: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00328B9A; /* je: equal / zero */

loc_00328B91: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00328BBA(); return; } /* je: equal / zero */

loc_00328B9A: ;
    eax = MEM32(ebx + 0x114);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x6EE6AE1;
    PUSH32(esp, 0); sub_003894D0(); /* call 0x003894D0 */

loc_00328BB5: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00328CA0
 * Original: 0x00328CA0 - 0x00328CE8 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    /* nop */

loc_00328CB0: ;
    eax = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(eax + ebx), 0x35)) goto loc_00328CD4; /* jne: not equal / not zero */

loc_00328CBB: ;
    ecx = MEM32(0x84A5F8);
    eax = MEM32(esi + ecx + 0x23C);
    edi = esi + ecx;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00328CD0: ;
    if (CMP_EQ(eax, ebp)) { sub_00328CE8(); return; } /* je: equal / zero */

loc_00328CD4: ;
    esi = esi + 0x6D0;
    ebx++;
    if (CMP_L(esi, 0x36800)) goto loc_00328CB0; /* jl: less (signed <) */

loc_00328CE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00328D00
 * Original: 0x00328D00 - 0x00328D9B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328D00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00328D00: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) { sub_00328D9B(); return; } /* je: equal / zero */

loc_00328D14: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x53C);
    if (TEST_NZ(eax, eax)) goto loc_00328D8B; /* jne: not equal / not zero */

loc_00328D24: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_00328810(); /* call 0x00328810 */

loc_00328D30: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00328D94; /* je: equal / zero */

loc_00328D37: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00328D52: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x24);
    esp = esp + 4;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00328D94; /* je: equal / zero */

loc_00328D60: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00328B80(); /* call 0x00328B80 */

loc_00328D6A: ;
    esp = esp + 4;
    eax = ebx;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_00328D74: ;
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x53C) = 1;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00328D8B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00328CA0(); /* call 0x00328CA0 */

loc_00328D91: ;
    esp = esp + 4;

loc_00328D94: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00328DB0
 * Original: 0x00328DB0 - 0x00328EA6 (246 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328DB0: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00328DE9; /* je: equal / zero */

loc_00328DB9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00328DBF: ;
    if (TEST_NZ(eax, eax)) goto loc_00328EA5; /* jne: not equal / not zero */

loc_00328DC7: ;
    ecx = ZX16(MEM16(edi + 0x60));
    goto loc_00328DD0;

    /* nop */

loc_00328DD0: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    if (CMP_EQ(edx, ecx)) goto loc_00328DE2; /* je: equal / zero */

loc_00328DDB: ;
    eax++;
    if (CMP_L(eax, 2)) goto loc_00328DD0; /* jl: less (signed <) */

loc_00328DE1: ;
    esp += 4; return; /* ret */

loc_00328DE2: ;
    eax++;
    if ((eax == 0)) goto loc_00328EA5; /* je: equal / zero */

loc_00328DE9: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00328EA5; /* je: equal / zero */

loc_00328DF7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x2A8));
    eax = MEM32(edi + 0x568);
    if (CMP_NE(MEM32(eax + 0x53C), 3)) goto loc_00328E82; /* jne: not equal / not zero */

loc_00328E0D: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_00328E15: ;
    eax = eax - MEM32(esi + 0x540);
    if (CMP_BE(eax, 0xAFC8)) goto loc_00328E3E; /* jbe: below or equal (unsigned <=) */

loc_00328E22: ;
    MEM32(esi + 0x53C) = 0;
    edx = 0xAFC8;
    POP32(esp, esi);
    SET_LO16(eax, ZX8(LO8(ebx)));
    ecx = edx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001CCC30(); return; /* tail jmp 0x001CCC30 */

loc_00328E3E: ;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_00328E43: ;
    edx = MEM32(edi + 0x568);
    ecx = eax;
    ecx = ecx - MEM32(edx + 0x540);
    if (((int32_t)ecx >= 0)) goto loc_00328E65; /* jns: not sign (positive) */

loc_00328E53: ;
    POP32(esp, esi);
    SET_LO16(eax, ZX8(LO8(ebx)));
    ecx = 0; /* xor self */
    edx = 0xAFC8;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001CCC30(); return; /* tail jmp 0x001CCC30 */

loc_00328E65: ;
    if (CMP_BE(ecx, 0xAFC8)) goto loc_00328E72; /* jbe: below or equal (unsigned <=) */

loc_00328E6D: ;
    ecx = 0xAFC8;

loc_00328E72: ;
    POP32(esp, esi);
    SET_LO16(eax, ZX8(LO8(ebx)));
    edx = 0xAFC8;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001CCC30(); return; /* tail jmp 0x001CCC30 */

loc_00328E82: ;
    xmm0 = MEMF(0x649848); /* movss */
    eax = ZX8(LO8(ebx));
    eax = eax + eax * 2;
    eax = eax * 4 + 0x849484;
    MEM8(eax) = 1;
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    POP32(esp, ebx);

loc_00328EA5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00328EB0
 * Original: 0x00328EB0 - 0x00329104 (596 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328EB0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00328ED3: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_003290FC; /* je: equal / zero */

loc_00328EDD: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(esi + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00328F06; /* je: equal / zero */

loc_00328EFF: ;
    ecx = esi;
    goto loc_003290EF;

loc_00328F06: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), edi)) goto loc_00328F2A; /* je: equal / zero */

loc_00328F14: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_00328F1F: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00328F2A: ;
    edi = ebp;
    PUSH32(esp, 0); sub_00328DB0(); /* call 0x00328DB0 */

loc_00328F31: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x52D) = 0x14;
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_00328F47: ;
    eax = esi + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = ebx;
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00328F5B: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003290FC; /* jne: not equal / not zero */

loc_00328F66: ;
    edi = MEM32(esp + 0x28);
    SET_LO8(eax, MEM8(edi + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00328F80; /* je: equal / zero */

loc_00328F71: ;
    MEM32(edi + 0x14) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00328F80: ;
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_00328F88: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003290FC; /* je: equal / zero */

loc_00328F93: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0x474);
    if (CMP_EQ(edx, MEM32(ebp + 0xA4))) goto loc_003290FC; /* je: equal / zero */

loc_00328FAB: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x28;
    eax = esp + 0x2C;
    edx = ebx;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00328FBB: ;
    esi = MEM32(esp + 0x2C);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00329096; /* je: equal / zero */

loc_00328FCA: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_003290FC; /* je: equal / zero */

loc_00328FD6: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00328FFC; /* jne: not equal / not zero */

loc_00328FE9: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00328FF5; /* je: equal / zero */

loc_00328FF3: ;
    SET_LO8(ecx, 1);

loc_00328FF5: ;
    MEM8(eax + 0x5A8) = 0;

loc_00328FFC: ;
    SET_LO8(eax, MEM8(ebx + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032900B; /* jne: not equal / not zero */

loc_00329003: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00329096; /* je: equal / zero */

loc_0032900B: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00329085; /* je: equal / zero */

loc_00329010: ;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEM32(edi) = esi;
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = esi;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00329045; /* jne: not equal / not zero */

loc_0032903C: ;
    eax = edx;
    MEM8(eax + 0x5A8) = 1;

loc_00329045: ;
    edx = MEM32(ebp + 0x568);
    ecx = MEM32(0x847024);
    eax = MEM32(edx + 0x444);
    esi = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00329065: ;
    ecx = eax;
    eax = MEM32(ebx + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00329071: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032907D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00329085: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032908B: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00329096: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_003290A1: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_003290FC; /* je: equal / zero */

loc_003290A8: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_003290ED; /* je: equal / zero */

loc_003290B7: ;
    SET_LO8(eax, MEM8(edi + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003290ED; /* jne: not equal / not zero */

loc_003290BE: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003290ED; /* jp: parity */

loc_003290D3: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_003290ED; /* je: equal / zero */

loc_003290DC: ;
    PUSH32(esp, ebx);
    esi = edi;
    eax = ebp;
    PUSH32(esp, 0); sub_00328D00(); /* call 0x00328D00 */

loc_003290E6: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003290FC; /* jne: not equal / not zero */

loc_003290ED: ;
    ecx = edi;

loc_003290EF: ;
    PUSH32(esp, 0);
    eax = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_003290F9: ;
    esp = esp + 8;

loc_003290FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00329110
 * Original: 0x00329110 - 0x00329135 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329110: ;
    esp = esp - 0x28;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_0032FD50(); /* call 0x0032FD50 */

loc_0032911C: ;
    ebp = eax;
    eax = MEM32(edi + 0x568);
    eax = MEM32(eax + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) { sub_00329135(); return; } /* je: equal / zero */

loc_00329131: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0032913F(); return; /* tail jmp 0x0032913F */

}

/**
 * sub_00329430
 * Original: 0x00329430 - 0x003294CD (157 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329430: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00329460; /* jne: not equal / not zero */

loc_00329442: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x26)) goto loc_00329460; /* jne: not equal / not zero */

loc_0032944B: ;
    ecx = MEM32(0x84A5F8);
    edx = MEM32(ecx + 0x568);
    ecx = MEM32(edx + 0x444);
    MEM32(ecx + 0x34) = ebx;

loc_00329460: ;
    if (CMP_A(eax, 0x36)) goto loc_00329492; /* ja: above (unsigned >) */

loc_00329465: ;
    edx = ZX8(MEM8(eax + 0x3295D4));
    { uint32_t _jt = MEM32(edx * 4 + 0x3295C4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00329473u) goto loc_00329473;
    if (_jt == 0x0032947Bu) goto loc_0032947B;
    if (_jt == 0x00329483u) goto loc_00329483;
    if (_jt == 0x00329492u) goto loc_00329492;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00329473: ;
    eax = MEM32(ebp + 0x38);
    (void)0; /* cmp MEM32(eax + 0x24), ebx - flags set for next jcc */
    goto loc_0032948B;

loc_0032947B: ;
    ecx = MEM32(ebp + 0x38);
    eax = MEM32(ecx + 0x28);
    goto loc_00329489;

loc_00329483: ;
    edx = MEM32(ebp + 0x38);
    eax = MEM32(edx + 0x24);

loc_00329489: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */

loc_0032948B: ;
    SET_LO8(eax, (CMP_NE(eax, ebx)) ? 1 : 0); /* setne */
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_003294CD(); return; } /* jne: not equal / not zero */

loc_00329492: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x568);
    eax = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FBD0(); /* call 0x0032FBD0 */

loc_003294AA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003294CD(); return; } /* jne: not equal / not zero */

loc_003294AE: ;
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x2CE) = LO16(ebx);
    ecx = MEM32(esi + 0x568);
    POP32(esp, ebp);
    MEM16(ecx + 0x2CC) = LO16(ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00329610
 * Original: 0x00329610 - 0x00329B4D (1341 bytes, 368 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329610: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x568);
    eax = MEM32(esi + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032962E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00329B46; /* je: equal / zero */

loc_00329638: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x14) = eax;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x36 - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(MEM32(0x7FA1F8), 0x36)) goto loc_0032991E; /* jne: not equal / not zero */

loc_00329664: ;
    eax = MEM32(ebx + 0x30);
    if (CMP_NE(MEM32(esi + 0xA0), eax)) goto loc_003298E2; /* jne: not equal / not zero */

loc_00329673: ;
    eax = MEM32(ebx + 0x38);
    edx = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x14));
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)0x64));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xB6));
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    eax = eax - ecx;
    if (CMP_LE(LO16(eax), 0x258)) goto loc_0032969E; /* jle: less or equal (signed <=) */

loc_00329697: ;
    eax = 0x258;
    goto loc_003296A9;

loc_0032969E: ;
    if (CMP_GE(LO16(eax), 0xFDA8)) goto loc_003296A9; /* jge: greater or equal (signed >=) */

loc_003296A4: ;
    eax = 0xFFFFFDA8u;

loc_003296A9: ;
    MEM16(esi + 0xB6) = MEM16(esi + 0xB6) + LO16(eax);
    ecx = MEM32(ebp + 0x568);
    eax = edx + 0x12;
    eax = eax << 5;
    SET_LO16(eax, LO16(eax) - MEM16(ecx + 0xB8));
    if (CMP_LE(LO16(eax), 0x12C)) goto loc_003296D0; /* jle: less or equal (signed <=) */

loc_003296C9: ;
    eax = 0x12C;
    goto loc_003296DB;

loc_003296D0: ;
    if (CMP_GE(LO16(eax), 0xFED4)) goto loc_003296DB; /* jge: greater or equal (signed >=) */

loc_003296D6: ;
    eax = 0xFFFFFED4u;

loc_003296DB: ;
    MEM16(ecx + 0xB8) = MEM16(ecx + 0xB8) + LO16(eax);
    esi = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(esi + 0xB2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003297DD; /* je: equal / zero */

loc_003296F6: ;
    edx = MEM32(ebx + 0x38);
    eax = MEM32(edx + 0x28);
    if (TEST_Z(eax, eax)) goto loc_003297BB; /* je: equal / zero */

loc_00329704: ;
    xmm0 = MEMF(0x649228); /* movss */
    /* comiss xmm0, MEMF(ebp + 0x11C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0x11C))) goto loc_003297BB; /* jbe: below or equal (unsigned <=) */

loc_00329719: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x7FDD28);
    SET_LO16(edi, MEM16(esi + 0xB4));
    ecx = ecx << 2;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = eax + edi;
    MEM16(esi + 0xB4) = LO16(eax);
    ecx = MEM32(ebp + 0x568);
    ecx = ZX16(MEM16(ecx + 0xB4));
    edx = ecx;
    edx = edx ^ edi;
    if (TEST_Z(HI8(edx), 1)) goto loc_00329B46; /* je: equal / zero */

loc_0032975B: ;
    (void)0; /* test HI8(ecx), 2 - flags set for next jcc */
    eax = 0x13;
    if (TEST_Z(HI8(ecx), 2)) goto loc_0032976A; /* je: equal / zero */

loc_00329765: ;
    eax = 0x14;

loc_0032976A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x308510);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_0032977D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x305A70);
    ecx = 0; /* xor self */
    eax = 0xFF0306E0u;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_00329795: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x305A70);
    ecx = 0; /* xor self */
    eax = 0xFF0305CDu;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_003297AD: ;
    esp = esp + 0x3C;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x2C) = 1;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003297BB: ;
    SET_LO8(eax, MEM8(esi + 0xB4));
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) | 1);
    SET_LO16(ecx, ZX8(LO8(eax)));
    SET_HI8(ecx, MEM8(esi + 0xB5));
    POP32(esp, edi);
    MEM16(esi + 0xB4) = LO16(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003297DD: ;
    eax = MEM32(ebp + 0x534);
    if (TEST_Z(eax, eax)) goto loc_003298E2; /* je: equal / zero */

loc_003297EB: ;
    edx = MEM32(ebx + 0x38);
    ecx = MEM32(edx + 0x84);
    if (TEST_Z(ecx, ecx)) goto loc_003298E2; /* je: equal / zero */

loc_003297FC: ;
    if (CMP_NE(eax, 1)) goto loc_003298E2; /* jne: not equal / not zero */

loc_00329805: ;
    eax = MEM32(0x8470DC);
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_00329814: ;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0xFA);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    eax = 0x2C3;
    PUSH32(esp, 0); sub_001D0AE0(); /* call 0x001D0AE0 */

loc_00329839: ;
    xmm1 = MEMF(ebp + 0xDC); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x18;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(0x74A3B0) = 0;
    if (1 /* jp after test - parity */) goto loc_003298EB; /* jp: parity */

loc_0032985B: ;
    xmm1 = MEMF(0x648D50); /* movss */
    MEMF(ebx + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    MEMF(ebx + 8) = xmm1; /* movss */
    MEM32(ebx) = 0x20F;
    xmm1 = MEMF(ebp + 0x78); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    eax = 0x4000;
    MEM16(ebp + 0x172) = LO16(eax);
    MEM16(ebp + 0x174) = LO16(eax);
    MEM16(ebp + 0x170) = LO16(eax);
    MEM32(0x84A680) = 1;
    if ((xmm1 <= xmm0)) goto loc_003298B9; /* jbe: below or equal (unsigned <=) */

loc_003298A9: ;
    MEM32(ebx) = 0x20E;
    MEM32(0x84A680) = 2;

loc_003298B9: ;
    POP32(esp, edi);
    MEMF(ebp + 0x110) = xmm0; /* movss */
    MEMF(ebx + 0x34) = xmm0; /* movss */
    SET_LO8(eax, 0xFF);
    POP32(esp, esi);
    MEM8(ebp + 0x180) = LO8(eax);
    MEM8(ebp + 0x17D) = LO8(eax);
    MEM8(ebp + 0x17B) = 1;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003298E2: ;
    SET_LO8(eax, MEM8(0x74A3B0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329914; /* jne: not equal / not zero */

loc_003298EB: ;
    eax = MEM32(0x8470DC);
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_003298FA: ;
    eax = MEM32(0x8470DC);
    PUSH32(esp, eax);
    eax = 9;
    PUSH32(esp, 0); sub_001CE630(); /* call 0x001CE630 */

loc_0032990A: ;
    esp = esp + 4;
    MEM8(0x74A3B0) = 1;

loc_00329914: ;
    MEM32(0x84A680) = 0;

loc_0032991E: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329B37; /* jne: not equal / not zero */

loc_00329929: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0xA0);
    if (CMP_EQ(edx, MEM32(ebx + 0x30))) goto loc_003299A7; /* je: equal / zero */

loc_0032993A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032994B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329B46; /* jne: not equal / not zero */

loc_0032995B: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(ecx + 0xA0), 9)) goto loc_00329B46; /* jne: not equal / not zero */

loc_0032996E: ;
    esi = MEM32(0x7FA1F8);
    edx = MEM32(0x847024);
    eax = 0; /* xor self */
    (void)0; /* cmp esi, 0x36 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(esi, 0x36)) ? 1 : 0); /* sete */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    eax--;
    eax = eax & 0xFFFFFF89u;
    eax = eax + 0xBFF;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003299A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003299A7: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_003299B0: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003299C5; /* je: equal / zero */

loc_003299B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003299C5: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_003299D7: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329B46; /* jne: not equal / not zero */

loc_003299E2: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_003299EA: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00329B46; /* je: equal / zero */

loc_003299F5: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0x474);
    if (CMP_EQ(edx, MEM32(ebp + 0xA4))) goto loc_00329B46; /* je: equal / zero */

loc_00329A0D: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00329A1D: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00329AF4; /* je: equal / zero */

loc_00329A2C: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_00329B46; /* je: equal / zero */

loc_00329A38: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00329A5E; /* jne: not equal / not zero */

loc_00329A4B: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00329A57; /* je: equal / zero */

loc_00329A55: ;
    SET_LO8(ecx, 1);

loc_00329A57: ;
    MEM8(eax + 0x5A8) = 0;

loc_00329A5E: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329A6D; /* jne: not equal / not zero */

loc_00329A65: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00329AF4; /* je: equal / zero */

loc_00329A6D: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00329AE4; /* je: equal / zero */

loc_00329A72: ;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_00329AA5; /* jne: not equal / not zero */

loc_00329A9E: ;
    MEM8(eax + 0x5A8) = 1;

loc_00329AA5: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00329AC5: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00329AD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00329ADD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00329AE4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00329AEA: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00329AF4: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_00329AFF: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00329B46; /* je: equal / zero */

loc_00329B06: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_00329B37; /* je: equal / zero */

loc_00329B15: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329B37; /* jne: not equal / not zero */

loc_00329B1C: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_00329B37; /* je: equal / zero */

loc_00329B25: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00329430(); /* call 0x00329430 */

loc_00329B30: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329B46; /* jne: not equal / not zero */

loc_00329B37: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_00329B43: ;
    esp = esp + 8;

loc_00329B46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00329B50
 * Original: 0x00329B50 - 0x00329D10 (448 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329B50: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    edi = MEM32(ebx + 0x1C);
    eax = ebx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_00329B6D: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329D09; /* jne: not equal / not zero */

loc_00329B78: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x474);
    (void)0; /* cmp ecx, MEM32(esi + 0xA4) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x1C);
    if (CMP_EQ(ecx, MEM32(esi + 0xA4))) goto loc_00329D08; /* je: equal / zero */

loc_00329B94: ;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    eax = esp + 0x14;
    edx = ebp;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_00329BA4: ;
    edi = MEM32(esp + 0x14);
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_00329C7E; /* je: equal / zero */

loc_00329BB3: ;
    if (CMP_EQ(MEM32(esi + 0xA4), edi)) goto loc_00329D08; /* je: equal / zero */

loc_00329BBF: ;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00329BE5; /* jne: not equal / not zero */

loc_00329BD2: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00329BDE; /* je: equal / zero */

loc_00329BDC: ;
    SET_LO8(ecx, 1);

loc_00329BDE: ;
    MEM8(eax + 0x5A8) = 0;

loc_00329BE5: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329BF4; /* jne: not equal / not zero */

loc_00329BEC: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00329C7E; /* je: equal / zero */

loc_00329BF4: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00329C6D; /* je: equal / zero */

loc_00329BF9: ;
    edx = MEM32(esp + 0x18);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(ebx) = edi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = edi;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00329C2E; /* jne: not equal / not zero */

loc_00329C25: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_00329C2E: ;
    eax = MEM32(0x847024);
    ecx = MEM32(esi + 0x568);
    edi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_00329C4D: ;
    ecx = eax;
    eax = MEM32(ebp + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_00329C59: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00329C65: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00329C6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_00329C73: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00329C7E: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00329CA0; /* jne: not equal / not zero */

loc_00329C85: ;
    edx = MEM32(ebx + 0x1C);
    ecx = MEM32(esi + 0x568);
    eax = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FBD0(); /* call 0x0032FBD0 */

loc_00329C9C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00329D08; /* je: equal / zero */

loc_00329CA0: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_00329D08; /* jne: not equal / not zero */

loc_00329CB3: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_00329D08; /* je: equal / zero */

loc_00329CC1: ;
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_00329CD0: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00329D08; /* je: equal / zero */

loc_00329CD7: ;
    edi = esi;
    PUSH32(esp, 0); sub_00329110(); /* call 0x00329110 */

loc_00329CDE: ;
    edx = MEM32(esi + 0x568);
    edi = MEM32(edx + 0x444);
    PUSH32(esp, 1);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_00329CF4: ;
    ebx = MEM32(ebx + 0x20);
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) goto loc_00329D03; /* je: equal / zero */

loc_00329CFE: ;
    if (CMP_NE(ebx, 2)) goto loc_00329D08; /* jne: not equal / not zero */

loc_00329D03: ;
    PUSH32(esp, 0); sub_00281AA0(); /* call 0x00281AA0 */

loc_00329D08: ;
    POP32(esp, ebp);

loc_00329D09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00329D10
 * Original: 0x00329D10 - 0x00329D79 (105 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329D10: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(ebp) = 0xFFFFFFFFu;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(ecx) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    ebx = MEM32(eax + 0x54C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x548);
    edi--;
    SET_LO8(eax, 0); /* xor self */
    ebx--;
    PUSH32(esp, 0); sub_00311560(); /* call 0x00311560 */

loc_00329D58: ;
    edx = eax;
    eax = MEM32(esi + 0x568);
    xmm0 = MEMF(eax + 0x390); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00329D79(); return; } /* jnp: not parity */

loc_00329D75: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00329D7B(); return; /* tail jmp 0x00329D7B */

}

/**
 * sub_00329DE0
 * Original: 0x00329DE0 - 0x00329E7A (154 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329DE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebp + 0x215));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00329E78; /* je: equal / zero */

loc_00329DF3: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, esi);
    esi = eax + ecx + -1744;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00329E0F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00329E77; /* je: equal / zero */

loc_00329E13: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0x29)) goto loc_00329E54; /* je: equal / zero */

loc_00329E1B: ;
    if (CMP_EQ(eax, 0x195)) goto loc_00329E54; /* je: equal / zero */

loc_00329E22: ;
    if (CMP_NE(eax, 0x194)) goto loc_00329E77; /* jne: not equal / not zero */

loc_00329E29: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = ebp;
    edi = 0x31;
    PUSH32(esp, 0); sub_002EF120(); /* call 0x002EF120 */

loc_00329E38: ;
    esp = esp + 4;
    if (CMP_L(LO16(eax), 0x4000)) goto loc_00329E46; /* jl: less (signed <) */

loc_00329E41: ;
    edi = 0x32;

loc_00329E46: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_00329E4E: ;
    esp = esp + 4;
    POP32(esp, edi);
    goto loc_00329E62;

loc_00329E54: ;
    PUSH32(esp, esi);
    ecx = 0x1A;
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_00329E5F: ;
    esp = esp + 4;

loc_00329E62: ;
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = eax;
    MEM16(esi + 0x428) = 0;

loc_00329E77: ;
    POP32(esp, esi);

loc_00329E78: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00329E80
 * Original: 0x00329E80 - 0x0032A2F7 (1143 bytes, 260 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329E80: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* cmp ecx, 0x53 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_L(ecx, 0x53)) goto loc_00329EA1; /* jl: less (signed <) */

loc_00329E93: ;
    if (CMP_G(ecx, 0x54)) goto loc_00329EA1; /* jg: greater (signed >) */

loc_00329E98: ;
    eax = MEM32(ebp + 0x38);
    (void)0; /* cmp MEM32(eax + 0x24), ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(eax + 0x24), ebx)) ? 1 : 0); /* setne */

loc_00329EA1: ;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0xF) = LO8(ebx);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0032A0E9; /* je: equal / zero */

loc_00329EB0: ;
    ecx = MEM32(esi + 0x568);
    xmm1 = MEMF(ecx + 0x560); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00329EE1; /* jp: parity */

loc_00329EC7: ;
    if (CMP_LE(MEM32(ecx + 0x54C), ebx)) goto loc_00329EE1; /* jle: less or equal (signed <=) */

loc_00329ECF: ;
    PUSH32(esp, esi);
    MEM32(ecx + 0x54C) = ebx;
    PUSH32(esp, 0); sub_00329DE0(); /* call 0x00329DE0 */

loc_00329EDB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;

loc_00329EE1: ;
    ecx = MEM32(esi + 0x568);
    xmm1 = MEMF(ecx + 0x560); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0032A02F; /* jbe: below or equal (unsigned <=) */

loc_00329EF8: ;
    edx = MEM32(ecx + 0x548);
    if (CMP_LE(edx, ebx)) goto loc_0032A02F; /* jle: less or equal (signed <=) */

loc_00329F06: ;
    if (CMP_NE(MEM8(ecx + 0x558), LO8(ebx))) goto loc_0032A02F; /* jne: not equal / not zero */

loc_00329F12: ;
    xmm1 = MEMF(ecx + 0x55C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032A02F; /* jp: parity */

loc_00329F27: ;
    if (CMP_NE(MEM8(ecx + 0x568), LO8(ebx))) goto loc_0032A02F; /* jne: not equal / not zero */

loc_00329F33: ;
    eax = MEM32(ecx + 0x54C);
    xmm1 = MEMF(ecx + 0x564); /* movss */
    edx = edx + edx * 2;
    eax = eax + edx + -4;
    edx = eax + eax * 2;
    edx = edx << 5;
    edx = edx + 0x74A3B8;
    /* comiss xmm1, MEMF(ecx + 0x560) - sets EFLAGS */
    if ((xmm1 <= MEMF(ecx + 0x560))) goto loc_00329FCC; /* jbe: below or equal (unsigned <=) */

loc_00329F5D: ;
    MEM8(ecx + 0x558) = LO8(ebx);
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x568) = 1;
    xmm1 = MEMF(edx + 0x50); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00329FAB; /* jnp: not parity */

loc_00329F7E: ;
    xmm2 = MEMF(edx + 0x54); /* movss */
    eax = MEM32(esi + 0x568);
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(0x64922C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x560) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x54); /* movss */
    goto loc_0032A0D7;

loc_00329FAB: ;
    edx = MEM32(esi + 0x568);
    MEMF(edx + 0x560) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x564) = xmm0; /* movss */
    goto loc_0032A0E9;

loc_00329FCC: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(ecx + 0x55C) = xmm0; /* movss */
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x548) = ebx;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x54C) = ebx;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x574) = ebx;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = ecx;
    edx = MEM32(esi + 0x568);
    PUSH32(esp, esi);
    MEM8(edx + 0x568) = LO8(ebx);
    PUSH32(esp, 0); sub_00329DE0(); /* call 0x00329DE0 */

loc_0032A024: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    goto loc_0032A0E9;

loc_0032A02F: ;
    xmm1 = MEMF(ecx + 0x55C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032A0E9; /* jp: parity */

loc_0032A044: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0032A049: ;
    ecx = MEM32(esi + 0x568);
    xmm1 = MEMF(0x64922C); /* movss */
    eax = 1;
    MEM32(ecx + 0x548) = eax;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x54C) = eax;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = ecx;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x558) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x568) = 1;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x54C);
    eax = eax + eax * 2;
    eax = eax << 5;
    xmm2 = MEMF(eax + 0x74A3A8); /* movss */
    xmm2 = xmm2 + MEMF(eax + 0x74A3AC); /* addss */
    eax = eax + 0x74A358;
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 0x560) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x54); /* movss */
    MEM8(esp + 0xF) = 1;

loc_0032A0D7: ;
    ecx = MEM32(esi + 0x568);
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 0x564) = xmm2; /* movss */

loc_0032A0E9: ;
    ecx = MEM32(esi + 0x568);
    if (CMP_EQ(MEM8(ecx + 0x568), LO8(ebx))) goto loc_0032A27A; /* je: equal / zero */

loc_0032A0FB: ;
    eax = MEM32(ecx + 0x548);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x54C);
    edi = edx + eax + -4;
    SET_LO8(eax, MEM8(esp + 0xF));
    edi = edi + edi * 2;
    edi = edi << 5;
    edi = edi + 0x74A3B8;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0032A17C; /* jne: not equal / not zero */

loc_0032A126: ;
    MEM32(ecx + 0x54C) = MEM32(ecx + 0x54C) - 1;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    ecx = esi;
    PUSH32(esp, 0); sub_00329D10(); /* call 0x00329D10 */

loc_0032A141: ;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0x54C);
    ecx = MEM32(esp + 0x18);
    esp = esp + 8;
    edx++;
    MEM32(eax + 0x54C) = edx;
    eax = MEM32(esi + 0xA4);
    if (CMP_NE(eax, ecx)) goto loc_0032A17C; /* jne: not equal / not zero */

loc_0032A165: ;
    eax = MEM32(esi + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036EF0(); /* call 0x00036EF0 */

loc_0032A172: ;
    /* comiss xmm0, MEMF(edi + 0x58) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x58))) goto loc_0032A2EE; /* jbe: below or equal (unsigned <=) */

loc_0032A17C: ;
    ecx = MEM32(esi + 0x568);
    PUSH32(esp, 0xBF800000u);
    MEM8(ecx + 0x568) = LO8(ebx);
    PUSH32(esp, 0x16);
    eax = esi;
    MEM8(esi + 0x215) = LO8(ebx);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_0032A19C: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(esp + 0x2C);
    eax = MEM32(eax + 4);
    edi = MEM32(edx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0032A1B6: ;
    eax = esi;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0032A1BD: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    ecx = esi;
    PUSH32(esp, 0); sub_00329D10(); /* call 0x00329D10 */

loc_0032A1D2: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 0x14;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0032A206; /* je: equal / zero */

loc_0032A1DE: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ebp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(ebp) = eax;
    MEMF(ebp + 0xC) = xmm0; /* movss */
    MEM8(ebp + 0x1D) = LO8(ebx);
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x474) = eax;

loc_0032A206: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x548);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x54C);
    eax = edx + eax + -4;
    edx = eax + eax * 2;
    edx = edx << 5;
    xmm1 = MEMF(edx + 0x74A408); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032A264; /* jp: parity */

loc_0032A239: ;
    MEMF(ecx + 0x560) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x564) = xmm0; /* movss */
    ecx = MEM32(esi + 0x568);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx + 0x548) = ebx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0032A264: ;
    eax = MEM32(ecx + 0x54C);
    POP32(esp, edi);
    eax++;
    POP32(esp, ebp);
    MEM32(ecx + 0x54C) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0032A27A: ;
    if (CMP_LE(MEM32(ecx + 0x548), ebx)) goto loc_0032A2EE; /* jle: less or equal (signed <=) */

loc_0032A282: ;
    xmm1 = MEMF(ecx + 0x560); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032A2EE; /* jp: parity */

loc_0032A293: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(ecx + 0x55C) = xmm0; /* movss */
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x548) = ebx;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x54C) = ebx;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x574) = ebx;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0x54C);
    MEM32(eax + 0x554) = edx;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, esi);
    MEM8(eax + 0x568) = LO8(ebx);
    PUSH32(esp, 0); sub_00329DE0(); /* call 0x00329DE0 */

loc_0032A2EB: ;
    esp = esp + 4;

loc_0032A2EE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A300
 * Original: 0x0032A300 - 0x0032A548 (584 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032A300: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x568);
    eax = MEM32(esi + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032A31E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0032A541; /* je: equal / zero */

loc_0032A328: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032A532; /* jne: not equal / not zero */

loc_0032A34E: ;
    edx = MEM32(esi + 0xA0);
    ecx = MEM32(ebx + 0x30);
    if (CMP_NE(edx, ecx)) goto loc_0032A36C; /* jne: not equal / not zero */

loc_0032A35B: ;
    if (CMP_EQ(MEM32(esi + 0x1F8), 0)) goto loc_0032A532; /* je: equal / zero */

loc_0032A368: ;
    if (CMP_EQ(edx, ecx)) goto loc_0032A383; /* je: equal / zero */

loc_0032A36C: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032A379: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0032A383: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032A38C: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032A39A: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032A541; /* jne: not equal / not zero */

loc_0032A3A5: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032A3BA; /* je: equal / zero */

loc_0032A3AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0032A3BA: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032A3C2: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032A541; /* je: equal / zero */

loc_0032A3CD: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0032A4BF; /* je: equal / zero */

loc_0032A3E5: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x24;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0032A3F5: ;
    esi = MEM32(esp + 0x24);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0032A4DA; /* je: equal / zero */

loc_0032A404: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0032A4BF; /* je: equal / zero */

loc_0032A410: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032A436; /* jne: not equal / not zero */

loc_0032A423: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032A42F; /* je: equal / zero */

loc_0032A42D: ;
    SET_LO8(ecx, 1);

loc_0032A42F: ;
    MEM8(eax + 0x5A8) = 0;

loc_0032A436: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032A445; /* jne: not equal / not zero */

loc_0032A43D: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032A4DA; /* je: equal / zero */

loc_0032A445: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0032A4B6; /* je: equal / zero */

loc_0032A44A: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(ebx + 8) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0032A47C; /* jne: not equal / not zero */

loc_0032A473: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_0032A47C: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032A49C: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032A4A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032A4B4: ;
    goto loc_0032A4BF;

loc_0032A4B6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032A4BC: ;
    esp = esp + 4;

loc_0032A4BF: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(ecx + 0x560); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0032A541; /* jnp: not parity */

loc_0032A4DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0032A4E5: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032A541; /* je: equal / zero */

loc_0032A4EC: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_0032A532; /* je: equal / zero */

loc_0032A4FB: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032A532; /* jne: not equal / not zero */

loc_0032A502: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032A532; /* jp: parity */

loc_0032A517: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0032A532; /* je: equal / zero */

loc_0032A520: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00329E80(); /* call 0x00329E80 */

loc_0032A52B: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032A541; /* jne: not equal / not zero */

loc_0032A532: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032A53E: ;
    esp = esp + 8;

loc_0032A541: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A550
 * Original: 0x0032A550 - 0x0032A5BA (106 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032A550: ;
    eax = MEM32(0x59DD84);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x7FDBF8) = 0x37;
    MEM32(0x7FDBF4) = esi;
    MEM32(0x7FDBF0) = esi;
    MEM32(0x7FDBEC) = esi;
    MEM32(0x7FDBE8) = esi;
    if (CMP_EQ(eax, esi)) goto loc_0032A586; /* je: equal / zero */

loc_0032A57E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0032A583: ;
    esp = esp + 8;

loc_0032A586: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, edi);
    MEM32(0x7FDBF8) = esi;
    MEM32(0x7FDBF4) = esi;
    MEM32(0x7FDBF0) = esi;
    MEM32(0x7FDBEC) = 0x14;
    MEM32(0x7FDBE8) = esi;
    PUSH32(esp, 0); sub_001A7F50(); /* call 0x001A7F50 */

loc_0032A5B5: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032A5C0
 * Original: 0x0032A5C0 - 0x0032A71E (350 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A5C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0032A5C0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp - 8;
    MEM32(esi) = 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    ebx = eax;
    MEMF(esi + 8) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    ecx = 0; /* xor self */
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0032A6AE; /* je: equal / zero */

loc_0032A5EF: ;
    eax--;
    if ((eax == 0)) goto loc_0032A65B; /* je: equal / zero */

loc_0032A5F2: ;
    eax--;
    if ((eax != 0)) goto loc_0032A708; /* jne: not equal / not zero */

loc_0032A5F9: ;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032A610: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032A706; /* je: equal / zero */

loc_0032A61B: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0032A63C; /* je: equal / zero */

loc_0032A623: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032A63C; /* je: equal / zero */

loc_0032A628: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032A63C; /* je: equal / zero */

loc_0032A62E: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (TEST_NZ(ecx, ecx)) goto loc_0032A6F8; /* jne: not equal / not zero */

loc_0032A63C: ;
    eax = MEM32(esp + 8);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032A706; /* je: equal / zero */

loc_0032A649: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032A706; /* je: equal / zero */

loc_0032A653: ;
    eax = eax + 0x10;
    goto loc_0032A6F3;

loc_0032A65B: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032A672: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032A706; /* je: equal / zero */

loc_0032A67D: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0032A69A; /* je: equal / zero */

loc_0032A685: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032A69A; /* je: equal / zero */

loc_0032A68A: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032A69A; /* je: equal / zero */

loc_0032A690: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_0032A6F8; /* jne: not equal / not zero */

loc_0032A69A: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032A706; /* je: equal / zero */

loc_0032A6A3: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032A706; /* je: equal / zero */

loc_0032A6A9: ;
    eax = eax + 8;
    goto loc_0032A6F3;

loc_0032A6AE: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032A6C5: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032A706; /* je: equal / zero */

loc_0032A6CC: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0032A6E4; /* je: equal / zero */

loc_0032A6D4: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032A6E4; /* je: equal / zero */

loc_0032A6D9: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032A6E4; /* je: equal / zero */

loc_0032A6DF: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_0032A6F8; /* jne: not equal / not zero */

loc_0032A6E4: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032A706; /* je: equal / zero */

loc_0032A6ED: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032A706; /* je: equal / zero */

loc_0032A6F3: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0032A706; /* je: equal / zero */

loc_0032A6F8: ;
    if (TEST_Z(eax, eax)) goto loc_0032A706; /* je: equal / zero */

loc_0032A6FC: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 8) = edx;

loc_0032A706: ;
    ecx = 0; /* xor self */

loc_0032A708: ;
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(esi);
    MEM32(eax + 0x474) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A720
 * Original: 0x0032A720 - 0x0032A88D (365 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032A720: ;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(eax, 5)) { sub_0032A88D(); return; } /* jne: not equal / not zero */

loc_0032A732: ;
    eax = MEM32(esi + 0x38);
    edx = MEM32(eax + 0x24);
    ecx = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(ecx + 0x290) = 0xFFFF;
    ebx = 0; /* xor self */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    edx = MEM32(ebp + 0x568);
    MEMF(edx + 0x294) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x28D) = LO8(ebx);
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x28E) = LO8(ebx);
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x28F) = LO8(ebx);
    edx = MEM32(ebp + 0x568);
    SET_LO8(eax, (CMP_NE(edx, ebx)) ? 1 : 0); /* setne */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(edx + 0x292) = LO8(ebx);
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_0032A88D(); return; } /* je: equal / zero */

loc_0032A797: ;
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    (void)0; /* cmp MEM32(eax + 0x30), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(eax + 0x30), ebx)) goto loc_0032A85F; /* jne: not equal / not zero */

loc_0032A7AD: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (CMP_EQ(eax, ebx)) goto loc_0032A85F; /* je: equal / zero */

loc_0032A7BF: ;
    edi = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0032A7CE: ;
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0032A85F; /* je: equal / zero */

loc_0032A7D9: ;
    ebx = MEM32(esp + 0x18);
    edx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0032A5C0(); /* call 0x0032A5C0 */

loc_0032A7E6: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8B2);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032A805: ;
    edi = ebp;
    PUSH32(esp, 0); sub_0032A550(); /* call 0x0032A550 */

loc_0032A80C: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ebx + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0032A822: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    esp = esp + 4;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xD86);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032A844: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0032A84B: ;
    ebp = MEM32(ebp + 0x568);
    MEM16(ebp + 0x2D8) = MEM16(ebp + 0x2D8) + 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032A85F: ;
    ecx = MEM32(esi + 0x38);
    if (CMP_EQ(MEM32(ecx + 0x24), ebx)) goto loc_0032A886; /* je: equal / zero */

loc_0032A867: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBD5);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032A886: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032A8A0
 * Original: 0x0032A8A0 - 0x0032AC73 (979 bytes, 253 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032A8A0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032A8C0: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0032AC6C; /* je: equal / zero */

loc_0032A8CA: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032AC5D; /* jne: not equal / not zero */

loc_0032A8F0: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_0032A915; /* je: equal / zero */

loc_0032A8FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032A90B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032A915: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x23)) goto loc_0032A924; /* je: equal / zero */

loc_0032A91F: ;
    if (CMP_NE(eax, 0x1C)) goto loc_0032A92B; /* jne: not equal / not zero */

loc_0032A924: ;
    MEM8(ebp + 0x180) = 0xA;

loc_0032A92B: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032A934: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032A946: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032AC6C; /* jne: not equal / not zero */

loc_0032A951: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032A966; /* je: equal / zero */

loc_0032A958: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032A966: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032A96E: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032AC6C; /* je: equal / zero */

loc_0032A979: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0032AC6C; /* je: equal / zero */

loc_0032A991: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0032A9A1: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0032AA78; /* je: equal / zero */

loc_0032A9B0: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), eax)) goto loc_0032AC6C; /* je: equal / zero */

loc_0032A9BC: ;
    esi = MEM32(ebp + 0x568);
    edx = MEM32(esi + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032A9E2; /* jne: not equal / not zero */

loc_0032A9CF: ;
    SET_LO8(edx, MEM8(esi + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032A9DB; /* je: equal / zero */

loc_0032A9D9: ;
    SET_LO8(ecx, 1);

loc_0032A9DB: ;
    MEM8(esi + 0x5A8) = 0;

loc_0032A9E2: ;
    SET_LO8(edx, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0032A9F1; /* jne: not equal / not zero */

loc_0032A9E9: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032AA78; /* je: equal / zero */

loc_0032A9F1: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0032AA68; /* je: equal / zero */

loc_0032A9F6: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = eax;
    MEMF(edx) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = eax;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0032AA29; /* jne: not equal / not zero */

loc_0032AA22: ;
    MEM8(eax + 0x5A8) = 1;

loc_0032AA29: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032AA49: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032AA55: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032AA61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032AA68: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032AA6E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032AA78: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0032AA83: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032AC6C; /* je: equal / zero */

loc_0032AA8E: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0032AC5D; /* je: equal / zero */

loc_0032AAA1: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032AC5D; /* jne: not equal / not zero */

loc_0032AAAC: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032AC5D; /* jp: parity */

loc_0032AAC5: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0032AC5D; /* je: equal / zero */

loc_0032AAD2: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x23)) goto loc_0032AC49; /* jne: not equal / not zero */

loc_0032AADF: ;
    eax = MEM32(0x84A5F8);
    xmm1 = MEMF(0x649774); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x80); /* subss */
    xmm6 = MEMF(0x64B33C); /* movss */
    xmm6 = xmm6 - MEMF(eax + 0x7C); /* subss */
    xmm0 = MEMF(0x64B338); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x80); /* subss */
    xmm3 = MEMF(0x64B334); /* movss */
    xmm3 = xmm3 - MEMF(eax + 0x78); /* subss */
    xmm2 = MEMF(0x64B330); /* movss */
    xmm2 = xmm2 - MEMF(eax + 0x7C); /* subss */
    xmm4 = MEMF(0x64B32C); /* movss */
    xmm4 = xmm4 - MEMF(eax + 0x78); /* subss */
    xmm7 = MEMF(0x64B328); /* movss */
    xmm7 = xmm7 - MEMF(eax + 0x7C); /* subss */
    xmm5 = MEMF(0x64B324); /* movss */
    xmm5 = xmm5 - MEMF(eax + 0x78); /* subss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x64B320); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x80); /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 * xmm2; /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    if ((xmm1 <= xmm0)) goto loc_0032ABF6; /* jbe: below or equal (unsigned <=) */

loc_0032ABCD: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0032AC1F; /* jbe: below or equal (unsigned <=) */

loc_0032ABD2: ;
    xmm0 = MEMF(0x64B334); /* movss */
    MEMF(eax + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64B33C); /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B338); /* movss */
    goto loc_0032AC41;

loc_0032ABF6: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0032AC1F; /* jbe: below or equal (unsigned <=) */

loc_0032ABFB: ;
    xmm0 = MEMF(0x64B32C); /* movss */
    MEMF(eax + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64B330); /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x649774); /* movss */
    goto loc_0032AC41;

loc_0032AC1F: ;
    xmm0 = MEMF(0x64B324); /* movss */
    MEMF(eax + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64B328); /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B320); /* movss */

loc_0032AC41: ;
    MEMF(eax + 0x80) = xmm0; /* movss */

loc_0032AC49: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0); sub_0032A720(); /* call 0x0032A720 */

loc_0032AC56: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032AC6C; /* jne: not equal / not zero */

loc_0032AC5D: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032AC69: ;
    esp = esp + 8;

loc_0032AC6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0032AC80
 * Original: 0x0032AC80 - 0x0032AE03 (387 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AC80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032AC80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x568);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032AC9F: ;
    edx = eax;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0x530);
    edi = 0; /* xor self */
    esi = esi | 0xFFFFFFFFu;
    ecx = ecx - edi;
    if ((ecx == 0)) goto loc_0032AD81; /* je: equal / zero */

loc_0032ACBA: ;
    ecx--;
    if ((ecx == 0)) goto loc_0032AD2A; /* je: equal / zero */

loc_0032ACBD: ;
    ecx--;
    if ((ecx != 0)) goto loc_0032ADD3; /* jne: not equal / not zero */

loc_0032ACC4: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032ACDB: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032ADD3; /* je: equal / zero */

loc_0032ACE6: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_0032AD09; /* je: equal / zero */

loc_0032ACEE: ;
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032AD09; /* je: equal / zero */

loc_0032ACF5: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032AD09; /* je: equal / zero */

loc_0032ACFB: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (CMP_NE(ecx, edi)) goto loc_0032ADCD; /* jne: not equal / not zero */

loc_0032AD09: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032ADD3; /* je: equal / zero */

loc_0032AD18: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032ADD3; /* je: equal / zero */

loc_0032AD22: ;
    eax = eax + 0x10;
    goto loc_0032ADC9;

loc_0032AD2A: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032AD41: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032ADD3; /* je: equal / zero */

loc_0032AD4C: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_0032AD6B; /* je: equal / zero */

loc_0032AD54: ;
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032AD6B; /* je: equal / zero */

loc_0032AD5B: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032AD6B; /* je: equal / zero */

loc_0032AD61: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (CMP_NE(ecx, edi)) goto loc_0032ADCD; /* jne: not equal / not zero */

loc_0032AD6B: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032ADD3; /* je: equal / zero */

loc_0032AD76: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032ADD3; /* je: equal / zero */

loc_0032AD7C: ;
    eax = eax + 8;
    goto loc_0032ADC9;

loc_0032AD81: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032AD98: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032ADD3; /* je: equal / zero */

loc_0032AD9F: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_0032ADB8; /* je: equal / zero */

loc_0032ADA7: ;
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032ADB8; /* je: equal / zero */

loc_0032ADAE: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032ADB8; /* je: equal / zero */

loc_0032ADB4: ;
    if (CMP_NE(MEM32(eax), edi)) goto loc_0032ADCD; /* jne: not equal / not zero */

loc_0032ADB8: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032ADD3; /* je: equal / zero */

loc_0032ADC3: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032ADD3; /* je: equal / zero */

loc_0032ADC9: ;
    if (CMP_EQ(MEM32(eax), edi)) goto loc_0032ADD3; /* je: equal / zero */

loc_0032ADCD: ;
    if (CMP_EQ(eax, edi)) goto loc_0032ADD3; /* je: equal / zero */

loc_0032ADD1: ;
    esi = MEM32(eax);

loc_0032ADD3: ;
    if (CMP_NE(MEM32(ebx + 0xA4), esi)) goto loc_0032ADFE; /* jne: not equal / not zero */

loc_0032ADDB: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x43218000);
    PUSH32(esp, 0x3A);
    eax = 0; /* xor self */
    SET_LO8(ecx, 1);
    edi = 0xF;
    esi = ebx;
    PUSH32(esp, 0); sub_0031A920(); /* call 0x0031A920 */

loc_0032ADFB: ;
    esp = esp + 0x18;

loc_0032ADFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032AE10
 * Original: 0x0032AE10 - 0x0032AEC6 (182 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032AE10: ;
    (void)0; /* cmp eax, 0x30 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = edx;
    if (CMP_NE(eax, 0x30)) { sub_0032AEC6(); return; } /* jne: not equal / not zero */

loc_0032AE24: ;
    eax = MEM32(esi + 0x38);
    edx = MEM32(eax + 0x24);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0032AEC6(); return; } /* je: equal / zero */

loc_0032AE37: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0032AEC0; /* jne: not equal / not zero */

loc_0032AE4A: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0032AEC0; /* je: equal / zero */

loc_0032AE58: ;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0032AE68: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032AEBF; /* je: equal / zero */

loc_0032AE6F: ;
    edx = ebp;
    eax = ebx;
    PUSH32(esp, 0); sub_0032A5C0(); /* call 0x0032A5C0 */

loc_0032AE78: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3EF77777);
    PUSH32(esp, 0x32AC80);
    PUSH32(esp, 0); sub_0030F240(); /* call 0x0030F240 */

loc_0032AE92: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ebp + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0032AEA8: ;
    esp = esp + 0x24;
    eax = ebx;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0032AEB2: ;
    ebx = MEM32(ebx + 0x568);
    MEM16(ebx + 0x2D8) = MEM16(ebx + 0x2D8) + 1;

loc_0032AEBF: ;
    POP32(esp, edi);

loc_0032AEC0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032AED0
 * Original: 0x0032AED0 - 0x0032B111 (577 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032AED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032AED0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032AEF0: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0032B10A; /* je: equal / zero */

loc_0032AEFA: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032B0FB; /* jne: not equal / not zero */

loc_0032AF20: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_0032AF45; /* je: equal / zero */

loc_0032AF2E: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032AF3B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032AF45: ;
    SET_LO8(eax, 0x14);
    MEM8(ebp + 0x181) = LO8(eax);
    MEM8(ebp + 0x180) = LO8(eax);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032AF5C: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032AF6E: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032B10A; /* jne: not equal / not zero */

loc_0032AF79: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032AF8E; /* je: equal / zero */

loc_0032AF80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032AF8E: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032AF96: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032B10A; /* je: equal / zero */

loc_0032AFA1: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0032B10A; /* je: equal / zero */

loc_0032AFB9: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0032AFC9: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0032B0A0; /* je: equal / zero */

loc_0032AFD8: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), eax)) goto loc_0032B10A; /* je: equal / zero */

loc_0032AFE4: ;
    esi = MEM32(ebp + 0x568);
    edx = MEM32(esi + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032B00A; /* jne: not equal / not zero */

loc_0032AFF7: ;
    SET_LO8(edx, MEM8(esi + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032B003; /* je: equal / zero */

loc_0032B001: ;
    SET_LO8(ecx, 1);

loc_0032B003: ;
    MEM8(esi + 0x5A8) = 0;

loc_0032B00A: ;
    SET_LO8(edx, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0032B019; /* jne: not equal / not zero */

loc_0032B011: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032B0A0; /* je: equal / zero */

loc_0032B019: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0032B090; /* je: equal / zero */

loc_0032B01E: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = eax;
    MEMF(edx) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = eax;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0032B051; /* jne: not equal / not zero */

loc_0032B04A: ;
    MEM8(eax + 0x5A8) = 1;

loc_0032B051: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032B071: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032B07D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032B089: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032B090: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032B096: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032B0A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0032B0AB: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032B10A; /* je: equal / zero */

loc_0032B0B2: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0032B0FB; /* je: equal / zero */

loc_0032B0C1: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032B0FB; /* jne: not equal / not zero */

loc_0032B0C8: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032B0FB; /* jp: parity */

loc_0032B0DD: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0032B0FB; /* je: equal / zero */

loc_0032B0E6: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    ecx = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_0032AE10(); /* call 0x0032AE10 */

loc_0032B0F4: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032B10A; /* jne: not equal / not zero */

loc_0032B0FB: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032B107: ;
    esp = esp + 8;

loc_0032B10A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B120
 * Original: 0x0032B120 - 0x0032B15A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B120(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032B120: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0xA0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(ecx, 0x13)) goto loc_0032B13C; /* jne: not equal / not zero */

loc_0032B137: ;
    edi = 1;

loc_0032B13C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x43218000);
    PUSH32(esp, 0x3B);
    eax = 0; /* xor self */
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_0031A920(); /* call 0x0031A920 */

loc_0032B154: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B160
 * Original: 0x0032B160 - 0x0032B24B (235 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032B160: ;
    (void)0; /* cmp eax, 0x31 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = edx;
    if (CMP_NE(eax, 0x31)) { sub_0032B24B(); return; } /* jne: not equal / not zero */

loc_0032B174: ;
    eax = MEM32(esi + 0x38);
    edx = MEM32(eax + 0x24);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0032B24B(); return; } /* je: equal / zero */

loc_0032B187: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0032B245; /* jne: not equal / not zero */

loc_0032B19E: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0032B245; /* je: equal / zero */

loc_0032B1B0: ;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0032B1C0: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032B244; /* je: equal / zero */

loc_0032B1C7: ;
    edx = ebp;
    eax = ebx;
    PUSH32(esp, 0); sub_0032A5C0(); /* call 0x0032A5C0 */

loc_0032B1D0: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x36);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032B1EB: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x13)) goto loc_0032B210; /* jne: not equal / not zero */

loc_0032B1F4: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032B210: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0032B120(); /* call 0x0032B120 */

loc_0032B217: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ebp + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0032B22D: ;
    esp = esp + 4;
    eax = ebx;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0032B237: ;
    ebx = MEM32(ebx + 0x568);
    MEM16(ebx + 0x2D8) = MEM16(ebx + 0x2D8) + 1;

loc_0032B244: ;
    POP32(esp, edi);

loc_0032B245: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032B260
 * Original: 0x0032B260 - 0x0032B4A1 (577 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032B260: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032B280: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0032B49A; /* je: equal / zero */

loc_0032B28A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032B48B; /* jne: not equal / not zero */

loc_0032B2B0: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), esi)) goto loc_0032B2D5; /* je: equal / zero */

loc_0032B2BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032B2CB: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032B2D5: ;
    SET_LO8(eax, 0x14);
    MEM8(ebp + 0x181) = LO8(eax);
    MEM8(ebp + 0x180) = LO8(eax);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032B2EC: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032B2FE: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032B49A; /* jne: not equal / not zero */

loc_0032B309: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032B31E; /* je: equal / zero */

loc_0032B310: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032B31E: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032B326: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032B49A; /* je: equal / zero */

loc_0032B331: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0032B49A; /* je: equal / zero */

loc_0032B349: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0032B359: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0032B430; /* je: equal / zero */

loc_0032B368: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), eax)) goto loc_0032B49A; /* je: equal / zero */

loc_0032B374: ;
    esi = MEM32(ebp + 0x568);
    edx = MEM32(esi + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032B39A; /* jne: not equal / not zero */

loc_0032B387: ;
    SET_LO8(edx, MEM8(esi + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032B393; /* je: equal / zero */

loc_0032B391: ;
    SET_LO8(ecx, 1);

loc_0032B393: ;
    MEM8(esi + 0x5A8) = 0;

loc_0032B39A: ;
    SET_LO8(edx, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0032B3A9; /* jne: not equal / not zero */

loc_0032B3A1: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032B430; /* je: equal / zero */

loc_0032B3A9: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0032B420; /* je: equal / zero */

loc_0032B3AE: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = eax;
    MEMF(edx) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = eax;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0032B3E1; /* jne: not equal / not zero */

loc_0032B3DA: ;
    MEM8(eax + 0x5A8) = 1;

loc_0032B3E1: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032B401: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032B40D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032B419: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032B420: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032B426: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032B430: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0032B43B: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032B49A; /* je: equal / zero */

loc_0032B442: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0032B48B; /* je: equal / zero */

loc_0032B451: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032B48B; /* jne: not equal / not zero */

loc_0032B458: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032B48B; /* jp: parity */

loc_0032B46D: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0032B48B; /* je: equal / zero */

loc_0032B476: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    ecx = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_0032B160(); /* call 0x0032B160 */

loc_0032B484: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032B49A; /* jne: not equal / not zero */

loc_0032B48B: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032B497: ;
    esp = esp + 8;

loc_0032B49A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B4B0
 * Original: 0x0032B4B0 - 0x0032B998 (1256 bytes, 318 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B4B0(void)
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

loc_0032B4B0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDC80);
    eax = 0; /* xor self */
    SET_LO16(eax, LO16(ebx));
    SET_LO16(eax, LO16(eax) - MEM16(esi + 0x174));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    MEM32(ebp) = 0xFFFFFFFFu;
    PUSH32(esp, edi);
    MEM8(esi + 0x444) = 0x2F;
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032B899; /* je: equal / zero */

loc_0032B4EC: ;
    eax = MEM32(esi + 0x568);
    SET_LO16(ecx, MEM16(eax + 0x24));
    SET_LO8(edx, 0xFF);
    MEM8(esi + 0x17D) = LO8(edx);
    MEM8(esi + 0x180) = LO8(edx);
    if (CMP_L(MEM16(eax + 0x24), 0)) goto loc_0032B512; /* jl: less (signed <) */

loc_0032B50B: ;
    MEM16(eax + 0x24) = MEM16(eax + 0x24) + 0xFFFFFFECu;
    goto loc_0032B517;

loc_0032B512: ;
    MEM16(eax + 0x24) = MEM16(eax + 0x24) + 0x14;

loc_0032B517: ;
    eax = MEM32(esi + 0x568);
    SET_LO16(edx, MEM16(eax + 0x24));
    SET_LO16(edx, LO16(edx) ^ LO16(ecx));
    if (((int32_t)(HI8(edx) & HI8(edx)) >= 0)) goto loc_0032B52E; /* jns: not sign (positive) */

loc_0032B528: ;
    MEM16(eax + 0x24) = 0;

loc_0032B52E: ;
    eax = ZX16(MEM16(esi + 0x60));
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_L(eax, ecx)) goto loc_0032B542; /* jl: less (signed <) */

loc_0032B53D: ;
    eax = 0x14;

loc_0032B542: ;
    xmm2 = 0.0f; /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    xmm0 = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(eax + 4); /* cvtsi2ss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0032B585; /* jp: parity */

loc_0032B578: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032B585; /* jp: parity */

loc_0032B581: ;
    eax = 0; /* xor self */
    goto loc_0032B5B1;

loc_0032B585: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0032B599: ;
    MEMF(esp + 0x24) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0032B5B1: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax + 0x4000;
    fp_top() = fabs(fp_top()); /* fabs */
    MEM32(esp + 0x1C) = eax;
    fp_push(MEMF(0x6490B8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0032B5E2; /* ja: above (unsigned >) */

loc_0032B5CE: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x6490B8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0032B641; /* jbe: below or equal (unsigned <=) */

loc_0032B5E2: ;
    ecx = MEM32(esi + 0x568);
    SET_LO16(eax, LO16(eax) - MEM16(ecx + 0xB4));
    if (CMP_GE(LO16(eax), 0x2000)) goto loc_0032B641; /* jge: greater or equal (signed >=) */

loc_0032B5F5: ;
    if (CMP_LE(LO16(eax), 0xE000)) goto loc_0032B641; /* jle: less or equal (signed <=) */

loc_0032B5FB: ;
    if (CMP_G(LO16(eax), 0x100)) goto loc_0032B607; /* jg: greater (signed >) */

loc_0032B601: ;
    if (CMP_GE(LO16(eax), 0xFF00)) goto loc_0032B641; /* jge: greater or equal (signed >=) */

loc_0032B607: ;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0032B612; /* jns: not sign (positive) */

loc_0032B60B: ;
    MEM16(ecx + 0x24) = MEM16(ecx + 0x24) + 0xFFFFFFD8u;
    goto loc_0032B617;

loc_0032B612: ;
    MEM16(ecx + 0x24) = MEM16(ecx + 0x24) + 0x28;

loc_0032B617: ;
    eax = MEM32(esi + 0x568);
    ecx = 0x1000;
    if (CMP_LE(MEM16(eax + 0x24), LO16(ecx))) goto loc_0032B62C; /* jle: less or equal (signed <=) */

loc_0032B628: ;
    MEM16(eax + 0x24) = LO16(ecx);

loc_0032B62C: ;
    eax = MEM32(esi + 0x568);
    ecx = 0xFFFFF000u;
    if (CMP_GE(MEM16(eax + 0x24), LO16(ecx))) goto loc_0032B641; /* jge: greater or equal (signed >=) */

loc_0032B63D: ;
    MEM16(eax + 0x24) = LO16(ecx);

loc_0032B641: ;
    edi = MEM32(esi + 0x568);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x24);
    eax = (uint32_t)(int32_t)SMEM16(0x7FDD28);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 5);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    MEM16(esi + 0x174) = MEM16(esi + 0x174) + LO16(ecx);
    SET_LO16(eax, MEM16(esi + 0x174));
    MEM16(esi + 0x170) = LO16(eax);
    if (CMP_G(MEM16(edi + 0x24), 0x200)) goto loc_0032B68F; /* jg: greater (signed >) */

loc_0032B683: ;
    if (CMP_GE(MEM16(edi + 0x24), 0xFE00)) goto loc_0032B719; /* jge: greater or equal (signed >=) */

loc_0032B68F: ;
    SET_LO16(ebx, LO16(ebx) - MEM16(esi + 0x174));
    ecx = MEM32(esp + 0x14);
    (void)0; /* cmp LO16(ecx), 0x1000 - flags set for next jcc */
    eax = ebx;
    if (CMP_B(LO16(ecx), 0x1000)) goto loc_0032B6AA; /* jb: below (unsigned <) */

loc_0032B6A3: ;
    if (CMP_BE(LO16(ecx), 0xF000)) goto loc_0032B6C0; /* jbe: below or equal (unsigned <=) */

loc_0032B6AA: ;
    if (CMP_B(LO16(eax), 0x1000)) goto loc_0032B6C0; /* jb: below (unsigned <) */

loc_0032B6B0: ;
    if (CMP_AE(LO16(eax), 0x7000)) goto loc_0032B6C0; /* jae: above or equal (unsigned >=) */

loc_0032B6B6: ;
    ebx = 0; /* xor self */
    if (CMP_L(MEM16(edi + 0x24), LO16(ebx))) goto loc_0032B6D5; /* jl: less (signed <) */

loc_0032B6BE: ;
    goto loc_0032B6C2;

loc_0032B6C0: ;
    ebx = 0; /* xor self */

loc_0032B6C2: ;
    if (CMP_BE(LO16(ecx), 0x7000)) goto loc_0032B71B; /* jbe: below or equal (unsigned <=) */

loc_0032B6C9: ;
    if (CMP_A(LO16(eax), 0x7000)) goto loc_0032B71B; /* ja: above (unsigned >) */

loc_0032B6CF: ;
    if (CMP_LE(MEM16(edi + 0x24), LO16(ebx))) goto loc_0032B71B; /* jle: less or equal (signed <=) */

loc_0032B6D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    MEM32(0x7FDBF8) = 0xFF0105B6u;
    MEM32(0x7FDBF4) = ebx;
    MEM32(0x7FDBF0) = ebx;
    MEM32(0x7FDBEC) = ebx;
    MEM32(0x7FDBE8) = ebx;
    PUSH32(esp, 0); sub_00305950(); /* call 0x00305950 */

loc_0032B704: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032B71B; /* je: equal / zero */

loc_0032B70B: ;
    eax = MEM32(0x7FDBF8);
    ecx = esi;
    PUSH32(esp, 0); sub_00302AA0(); /* call 0x00302AA0 */

loc_0032B717: ;
    goto loc_0032B71B;

loc_0032B719: ;
    ebx = 0; /* xor self */

loc_0032B71B: ;
    edx = MEM32(esi + 0x568);
    SET_LO16(eax, MEM16(esp + 0x1C));
    MEM16(edx + 0xB4) = LO16(eax);
    ecx = MEM32(esi + 0x568);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x24);
    MEM32(esp + 0x1C) = edx;
    MEM32(ebp) = 0x288;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x5A005C)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0032B763; /* jbe: below or equal (unsigned <=) */

loc_0032B75C: ;
    MEM32(ebp) = 0x286;

loc_0032B763: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(0x6493C0); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0032B77D; /* jbe: below or equal (unsigned <=) */

loc_0032B776: ;
    MEM32(ebp) = 0x27E;

loc_0032B77D: ;
    eax = MEM32(0x7F9F60);
    SET_LO8(ecx, MEM8(0x7FA23C));
    xmm2 = MEMF(0x648D50); /* movss */
    eax = eax & 0x7FFFFFFF;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(ebp + 0x1D) = 0;
    MEMF(ebp + 0xC) = xmm2; /* movss */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032B7AF; /* jne: not equal / not zero */

loc_0032B7A2: ;
    edx = MEM32(esi + 0x52C);
    ecx = eax + -1;
    if (CMP_GE(edx, ecx)) goto loc_0032B7B7; /* jge: greater or equal (signed >=) */

loc_0032B7AF: ;
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0xC) = xmm2; /* movss */

loc_0032B7B7: ;
    edx = MEM32(esi + 0x568);
    MEM32(esi + 0x52C) = eax;
    eax = MEM32(ebp);
    MEM32(edx + 0x474) = eax;
    ecx = MEM32(ebp + 0x38);
    if (CMP_EQ(MEM32(ecx + 0x1A0), ebx)) goto loc_0032B98F; /* je: equal / zero */

loc_0032B7DB: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0032B98F; /* jbe: below or equal (unsigned <=) */

loc_0032B7E4: ;
    eax = MEM32(0x84A5F8);
    ecx = 0; /* xor self */
    SET_LO8(edx, 6);
    /* nop */

loc_0032B7F0: ;
    if (CMP_EQ(MEM32(eax + 0x64), ebx)) goto loc_0032B7FD; /* je: equal / zero */

loc_0032B7F5: ;
    if (CMP_EQ(MEM8(eax + 0x10B), LO8(edx))) goto loc_0032B80D; /* je: equal / zero */

loc_0032B7FD: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_0032B7F0; /* jl: less (signed <) */

loc_0032B80B: ;
    eax = 0; /* xor self */

loc_0032B80D: ;
    xmm0 = xmm0 + MEMF(0x59D944); /* addss */
    xmm0 = xmm0 * MEMF(0x649E40); /* mulss */
    MEMF(eax + 0x110) = xmm0; /* movss */
    MEM8(eax + 0x20C) = 0;
    MEM8(eax + 0x251) = 0;
    MEM32(eax + 0x420) = ebx;
    MEM8(eax + 0x43D) = 2;
    edx = MEM32(esi + 0x568);
    MEM8(esi + 0x250) = 0;
    MEM8(esi + 0x17D) = 0;
    MEM8(esi + 0x180) = 0xA;
    if (CMP_EQ(MEM32(edx + 0x4D4), ebx)) goto loc_0032B880; /* je: equal / zero */

loc_0032B863: ;
    eax = MEM32(esi + 0x564);
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x92));
    eax = eax + 4;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032B880; /* je: equal / zero */

loc_0032B879: ;
    MEM8(eax + 0x91) = 0;

loc_0032B880: ;
    ecx = MEM32(esi + 0x568);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx + 0x474) = 0xFFFFFFFFu;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0032B899: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0xDC) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + 0xDC))) goto loc_0032B98F; /* jb: below (unsigned <) */

loc_0032B8A9: ;
    SET_LO8(eax, MEM8(esi + 0x181));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032B98F; /* jne: not equal / not zero */

loc_0032B8B7: ;
    if (CMP_EQ(MEM32(esi + 0xA4), 0x27D)) goto loc_0032B98F; /* je: equal / zero */

loc_0032B8C7: ;
    edx = MEM32(esi + 0x564);
    ecx = MEM32(edx + 4);
    SET_LO8(edx, MEM8(ecx + 0x92));
    ecx = ecx + 4;
    SET_LO8(eax, 1);
    if (CMP_EQ(LO8(edx), LO8(eax))) goto loc_0032B8E5; /* je: equal / zero */

loc_0032B8DF: ;
    MEM8(ecx + 0x91) = LO8(eax);

loc_0032B8E5: ;
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(ecx + 0x19C);
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = 0x283;
    if (TEST_Z(edx, edx)) { sub_0032B998(); return; } /* je: equal / zero */

loc_0032B8FB: ;
    /* comiss xmm0, MEMF(esi + 0xD0) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + 0xD0))) goto loc_0032B949; /* jb: below (unsigned <) */

loc_0032B904: ;
    MEM32(ebp) = edi;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = edi;
    eax = MEM32(ebp);
    ebx = MEM32(esi + 0xA4);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(ebx, edi)) ? 1 : 0); /* setne */
    if (TEST_Z(edx, ecx)) goto loc_0032B949; /* je: equal / zero */

loc_0032B92E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x305A40);
    ecx = 0; /* xor self */
    eax = 0xFF010D99u;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_0032B946: ;
    esp = esp + 0x14;

loc_0032B949: ;
    if (CMP_EQ(MEM32(ebp), edi)) goto loc_0032B98F; /* je: equal / zero */

loc_0032B94E: ;
    if (CMP_NE(MEM32(esi + 0xA4), edi)) goto loc_0032B98F; /* jne: not equal / not zero */

loc_0032B956: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0x474), edi)) goto loc_0032B98F; /* jne: not equal / not zero */

loc_0032B964: ;
    PUSH32(esp, esi);
    MEM32(eax + 0x474) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032B974: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x305A40);
    ecx = 0; /* xor self */
    eax = 0xFF010D99u;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_0032B98C: ;
    esp = esp + 0x18;

loc_0032B98F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
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
 * sub_0032BA10
 * Original: 0x0032BA10 - 0x0032BC55 (581 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BA10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032BA10: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi + 0x568);
    eax = MEM32(ebx + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032BA31: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0032BC4D; /* je: equal / zero */

loc_0032BA3B: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    MEM8(ebx + 0x52F) = 0;
    SET_LO8(eax, MEM8(ebp + 0x2E));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032BA7A; /* jne: not equal / not zero */

loc_0032BA5D: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0xA0);
    edx = MEM32(ebp + 0x30);
    if (CMP_NE(ecx, edx)) goto loc_0032BA95; /* jne: not equal / not zero */

loc_0032BA70: ;
    ebx = MEM32(eax + 0x1F8);
    if (TEST_NZ(ebx, ebx)) goto loc_0032BA91; /* jne: not equal / not zero */

loc_0032BA7A: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebp;
    eax = esi;
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032BA86: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0032BA91: ;
    if (CMP_EQ(ecx, edx)) goto loc_0032BAA7; /* je: equal / zero */

loc_0032BA95: ;
    eax = 0x77;
    PUSH32(esp, 0); sub_0031AA60(); /* call 0x0031AA60 */

loc_0032BA9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0032BAA7: ;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032BAB0: ;
    PUSH32(esp, 0);
    ebx = ebp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032BABC: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032BC4D; /* jne: not equal / not zero */

loc_0032BAC7: ;
    SET_LO8(eax, MEM8(ebp + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032BADD; /* je: equal / zero */

loc_0032BACE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x14) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0032BADD: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032BAE5: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032BC4D; /* je: equal / zero */

loc_0032BAF0: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(esi + 0xA4))) goto loc_0032BBDE; /* je: equal / zero */

loc_0032BB08: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0032BB18: ;
    ecx = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) goto loc_0032BC15; /* je: equal / zero */

loc_0032BB27: ;
    if (CMP_EQ(MEM32(esi + 0xA4), ecx)) goto loc_0032BBDE; /* je: equal / zero */

loc_0032BB33: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(edx, 0); /* xor self */
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0032BB55; /* jne: not equal / not zero */

loc_0032BB44: ;
    if (CMP_EQ(MEM8(eax + 0x5A8), LO8(edx))) goto loc_0032BB4E; /* je: equal / zero */

loc_0032BB4C: ;
    SET_LO8(edx, 1);

loc_0032BB4E: ;
    MEM8(eax + 0x5A8) = 0;

loc_0032BB55: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032BB64; /* jne: not equal / not zero */

loc_0032BB5C: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032BC15; /* je: equal / zero */

loc_0032BB64: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0032BBD5; /* je: equal / zero */

loc_0032BB69: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ebp) = ecx;
    MEMF(ebx) = xmm0; /* movss */
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x474) = ecx;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0032BB9B; /* jne: not equal / not zero */

loc_0032BB92: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_0032BB9B: ;
    edx = MEM32(0x847024);
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x444);
    ebx = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032BBBB: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032BBC7: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032BBD3: ;
    goto loc_0032BBDE;

loc_0032BBD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032BBDB: ;
    esp = esp + 4;

loc_0032BBDE: ;
    eax = MEM32(esi + 0xA4);
    if (CMP_EQ(eax, 0x283)) goto loc_0032BC15; /* je: equal / zero */

loc_0032BBEB: ;
    if (CMP_EQ(eax, 0x27A)) goto loc_0032BC15; /* je: equal / zero */

loc_0032BBF2: ;
    if (CMP_EQ(eax, 0x27B)) goto loc_0032BC15; /* je: equal / zero */

loc_0032BBF9: ;
    if (CMP_EQ(eax, 0x27C)) goto loc_0032BC15; /* je: equal / zero */

loc_0032BC00: ;
    if (CMP_EQ(eax, 0x288)) goto loc_0032BC15; /* je: equal / zero */

loc_0032BC07: ;
    if (CMP_EQ(eax, 0x286)) goto loc_0032BC15; /* je: equal / zero */

loc_0032BC0E: ;
    if (CMP_NE(eax, 0x27E)) goto loc_0032BC4D; /* jne: not equal / not zero */

loc_0032BC15: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0032BC1E: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032BC4D; /* je: equal / zero */

loc_0032BC25: ;
    ecx = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0032BC4D; /* je: equal / zero */

loc_0032BC34: ;
    SET_LO8(eax, MEM8(ebp + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032BC4D; /* jne: not equal / not zero */

loc_0032BC3B: ;
    if (CMP_EQ(MEM8(esi + 0x180), 0xFE)) goto loc_0032BC4D; /* je: equal / zero */

loc_0032BC44: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032B4B0(); /* call 0x0032B4B0 */

loc_0032BC4A: ;
    esp = esp + 4;

loc_0032BC4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BC60
 * Original: 0x0032BC60 - 0x0032BDF9 (409 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032BC60: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x568);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032BC82: ;
    edx = eax;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x530);
    edi = 0; /* xor self */
    ebp = ebp | 0xFFFFFFFFu;
    ecx = ecx - edi;
    if ((ecx == 0)) goto loc_0032BD68; /* je: equal / zero */

loc_0032BC9D: ;
    ecx--;
    if ((ecx == 0)) goto loc_0032BD0F; /* je: equal / zero */

loc_0032BCA0: ;
    ecx--;
    if ((ecx != 0)) goto loc_0032BDBC; /* jne: not equal / not zero */

loc_0032BCA7: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ebx = esi;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032BCC0: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BCCB: ;
    eax = MEM32(esp + 0x24);
    if (CMP_EQ(eax, edi)) goto loc_0032BCEE; /* je: equal / zero */

loc_0032BCD3: ;
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032BCEE; /* je: equal / zero */

loc_0032BCDA: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032BCEE; /* je: equal / zero */

loc_0032BCE0: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (CMP_NE(ecx, edi)) goto loc_0032BDB6; /* jne: not equal / not zero */

loc_0032BCEE: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BCFD: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BD07: ;
    eax = eax + 0x10;
    goto loc_0032BDB2;

loc_0032BD0F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ebx = esi;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032BD28: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BD33: ;
    eax = MEM32(esp + 0x24);
    if (CMP_EQ(eax, edi)) goto loc_0032BD52; /* je: equal / zero */

loc_0032BD3B: ;
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032BD52; /* je: equal / zero */

loc_0032BD42: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032BD52; /* je: equal / zero */

loc_0032BD48: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (CMP_NE(ecx, edi)) goto loc_0032BDB6; /* jne: not equal / not zero */

loc_0032BD52: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BD5D: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BD63: ;
    eax = eax + 8;
    goto loc_0032BDB2;

loc_0032BD68: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ebx = esi;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032BD81: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BD88: ;
    eax = MEM32(esp + 0x24);
    if (CMP_EQ(eax, edi)) goto loc_0032BDA1; /* je: equal / zero */

loc_0032BD90: ;
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032BDA1; /* je: equal / zero */

loc_0032BD97: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032BDA1; /* je: equal / zero */

loc_0032BD9D: ;
    if (CMP_NE(MEM32(eax), edi)) goto loc_0032BDB6; /* jne: not equal / not zero */

loc_0032BDA1: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x2C;
    if (CMP_EQ(eax, edi)) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BDAC: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, edi)) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BDB2: ;
    if (CMP_EQ(MEM32(eax), edi)) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BDB6: ;
    if (CMP_EQ(eax, edi)) goto loc_0032BDBC; /* je: equal / zero */

loc_0032BDBA: ;
    ebp = MEM32(eax);

loc_0032BDBC: ;
    if (CMP_NE(MEM32(esi + 0xA4), ebp)) goto loc_0032BDF1; /* jne: not equal / not zero */

loc_0032BDC4: ;
    ebx = esp + 0x14;
    eax = 2;
    ecx = esi;
    PUSH32(esp, 0); sub_00304860(); /* call 0x00304860 */

loc_0032BDD4: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x43218000);
    PUSH32(esp, 0x3E);
    eax = ebx;
    SET_LO8(ecx, 0); /* xor self */
    edi = 2;
    PUSH32(esp, 0); sub_0031A920(); /* call 0x0031A920 */

loc_0032BDEE: ;
    esp = esp + 0x18;

loc_0032BDF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BE00
 * Original: 0x0032BE00 - 0x0032BEB6 (182 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BE00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032BE00: ;
    (void)0; /* cmp eax, 0x34 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = edx;
    if (CMP_NE(eax, 0x34)) { sub_0032BEB6(); return; } /* jne: not equal / not zero */

loc_0032BE14: ;
    eax = MEM32(esi + 0x38);
    edx = MEM32(eax + 0x24);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0032BEB6(); return; } /* je: equal / zero */

loc_0032BE27: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0032BEB0; /* jne: not equal / not zero */

loc_0032BE3A: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0032BEB0; /* je: equal / zero */

loc_0032BE48: ;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0032BE58: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032BEAF; /* je: equal / zero */

loc_0032BE5F: ;
    edx = ebp;
    eax = ebx;
    PUSH32(esp, 0); sub_0032A5C0(); /* call 0x0032A5C0 */

loc_0032BE68: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x32BC60);
    PUSH32(esp, 0); sub_0030F240(); /* call 0x0030F240 */

loc_0032BE82: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ebp + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0032BE98: ;
    esp = esp + 0x24;
    eax = ebx;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0032BEA2: ;
    ebx = MEM32(ebx + 0x568);
    MEM16(ebx + 0x2D8) = MEM16(ebx + 0x2D8) + 1;

loc_0032BEAF: ;
    POP32(esp, edi);

loc_0032BEB0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BEC0
 * Original: 0x0032BEC0 - 0x0032C15F (671 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BEC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032BEC0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x568);
    eax = MEM32(esi + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032BEDE: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0032C158; /* je: equal / zero */

loc_0032BEE8: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x1F8);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(eax, 1)) goto loc_0032BF2A; /* jne: not equal / not zero */

loc_0032BF12: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10B);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002B37D0(); /* call 0x002B37D0 */

loc_0032BF25: ;
    esp = esp + 0x18;
    goto loc_0032BF3E;

loc_0032BF2A: ;
    if (CMP_NE(eax, 3)) goto loc_0032BF3E; /* jne: not equal / not zero */

loc_0032BF2F: ;
    PUSH32(esp, 0x10B);
    eax = ebp;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_0032BF3B: ;
    esp = esp + 4;

loc_0032BF3E: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032BF67; /* je: equal / zero */

loc_0032BF45: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032BF51: ;
    PUSH32(esp, 0x10B);
    eax = ebp;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_0032BF5D: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032BF67: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0xA0);
    if (CMP_EQ(edx, MEM32(ebx + 0x30))) goto loc_0032BF93; /* je: equal / zero */

loc_0032BF78: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032BF89: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032BF93: ;
    SET_LO8(eax, 0x14);
    MEM8(ebp + 0x181) = LO8(eax);
    MEM8(ebp + 0x180) = LO8(eax);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032BFAA: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032BFBC: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032C158; /* jne: not equal / not zero */

loc_0032BFC7: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032BFDC; /* je: equal / zero */

loc_0032BFCE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032BFDC: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032BFE4: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032C158; /* je: equal / zero */

loc_0032BFEF: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0x474);
    if (CMP_EQ(edx, MEM32(ebp + 0xA4))) goto loc_0032C158; /* je: equal / zero */

loc_0032C007: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0032C017: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0032C0EE; /* je: equal / zero */

loc_0032C026: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0032C158; /* je: equal / zero */

loc_0032C032: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032C058; /* jne: not equal / not zero */

loc_0032C045: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032C051; /* je: equal / zero */

loc_0032C04F: ;
    SET_LO8(ecx, 1);

loc_0032C051: ;
    MEM8(eax + 0x5A8) = 0;

loc_0032C058: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032C067; /* jne: not equal / not zero */

loc_0032C05F: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032C0EE; /* je: equal / zero */

loc_0032C067: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0032C0DE; /* je: equal / zero */

loc_0032C06C: ;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0032C09F; /* jne: not equal / not zero */

loc_0032C098: ;
    MEM8(eax + 0x5A8) = 1;

loc_0032C09F: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032C0BF: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032C0CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032C0D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032C0DE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032C0E4: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032C0EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0032C0F9: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032C158; /* je: equal / zero */

loc_0032C100: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0032C149; /* je: equal / zero */

loc_0032C10F: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032C149; /* jne: not equal / not zero */

loc_0032C116: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032C149; /* jp: parity */

loc_0032C12B: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0032C149; /* je: equal / zero */

loc_0032C134: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    ecx = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_0032BE00(); /* call 0x0032BE00 */

loc_0032C142: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032C158; /* jne: not equal / not zero */

loc_0032C149: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032C155: ;
    esp = esp + 8;

loc_0032C158: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0032C160
 * Original: 0x0032C160 - 0x0032C4BC (860 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032C160: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032C181: ;
    edi = eax;
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 0x20) = edi;
    if (CMP_EQ(edi, ebx)) goto loc_0032C4B4; /* je: equal / zero */

loc_0032C191: ;
    MEM32(ebp) = ebx;
    MEM8(ebp + 0x1C) = 1;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_0032C1AE; /* je: equal / zero */

loc_0032C1A2: ;
    if (CMP_EQ(MEM8(eax + 0xD), LO8(ebx))) goto loc_0032C1AE; /* je: equal / zero */

loc_0032C1A7: ;
    MEM8(esi + 0x17D) = 0xFF;

loc_0032C1AE: ;
    if (CMP_NE(MEM8(ebp + 0x2E), LO8(ebx))) goto loc_0032C317; /* jne: not equal / not zero */

loc_0032C1B7: ;
    if (CMP_NE(MEM8(ebp + 0x2F), LO8(ebx))) goto loc_0032C317; /* jne: not equal / not zero */

loc_0032C1C0: ;
    if (CMP_NE(MEM8(eax + 0x22), LO8(ebx))) goto loc_0032C334; /* jne: not equal / not zero */

loc_0032C1C9: ;
    if (CMP_EQ(MEM16(eax + 8), LO16(ebx))) goto loc_0032C23B; /* je: equal / zero */

loc_0032C1CF: ;
    SET_LO16(ecx, ZX8(MEM8(0x7FA250)));
    MEM16(eax + 8) = MEM16(eax + 8) - LO16(ecx);
    eax = MEM32(esi + 0x568);
    if (CMP_GE(MEM16(eax + 8), 0x64)) goto loc_0032C23B; /* jge: greater or equal (signed >=) */

loc_0032C1E8: ;
    MEM16(eax + 0xE) = 0xAD;
    edx = MEM32(esi + 0x568);
    ecx = 0x2A;
    eax = esi;
    MEM8(edx + 0x22) = 1;
    PUSH32(esp, 0); sub_002CF240(); /* call 0x002CF240 */

loc_0032C204: ;
    xmm0 = MEMF(0x648F24); /* movss */
    MEMF(ebp + 8) = xmm0; /* movss */
    MEM32(ebp) = 0x2D;
    eax = MEM32(esi + 0x568);
    MEM8(esi + 0x180) = 0xFF;
    MEM8(esi + 0x17D) = 0xFF;
    MEM32(eax + 0xA0) = ebx;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0xD) = LO8(ebx);

loc_0032C23B: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM8(eax + 0x22), LO8(ebx))) goto loc_0032C334; /* jne: not equal / not zero */

loc_0032C24A: ;
    edx = MEM32(ebp + 0x38);
    if (CMP_EQ(MEM32(edx + 0x84), ebx)) goto loc_0032C2C2; /* je: equal / zero */

loc_0032C255: ;
    MEM8(esi + 0x180) = 0xFF;
    MEM8(esi + 0x17D) = 0xFF;
    if (CMP_EQ(MEM32(eax + 0xA0), ebx)) goto loc_0032C299; /* je: equal / zero */

loc_0032C26B: ;
    xmm0 = MEMF(0x648F24); /* movss */
    MEMF(ebp + 8) = xmm0; /* movss */
    MEM32(ebp) = 0x2D;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0xA0) = ebx;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0xD) = LO8(ebx);
    goto loc_0032C334;

loc_0032C299: ;
    xmm0 = MEMF(0x649B50); /* movss */
    MEM32(eax + 0xA0) = 3;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0xD) = LO8(ebx);
    MEM32(ebp) = 0x2E;
    MEMF(ebp + 8) = xmm0; /* movss */
    goto loc_0032C334;

loc_0032C2C2: ;
    edx = MEM32(eax + 0xA0);
    ecx = 3;
    if (CMP_NE(edx, ecx)) goto loc_0032C334; /* jne: not equal / not zero */

loc_0032C2D1: ;
    if (CMP_EQ(MEM8(esi + 0x180), 0xFF)) goto loc_0032C334; /* je: equal / zero */

loc_0032C2DA: ;
    MEM32(ebp) = 0x2C;
    MEM8(ebp + 0x1D) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0xA0) = ecx;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_0032C2FF; /* je: equal / zero */

loc_0032C2F8: ;
    MEM8(esi + 0x181) = 0xA;

loc_0032C2FF: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM8(eax + 0xD), LO8(ebx))) goto loc_0032C334; /* jne: not equal / not zero */

loc_0032C30A: ;
    MEM8(eax + 0xD) = 1;
    eax = esi;
    PUSH32(esp, 0); sub_00147780(); /* call 0x00147780 */

loc_0032C315: ;
    goto loc_0032C334;

loc_0032C317: ;
    MEM32(eax + 0xA0) = ebx;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0xD) = LO8(ebx);
    MEM8(esi + 0x17D) = LO8(ebx);
    if (CMP_EQ(MEM8(ebp + 0x2F), LO8(ebx))) goto loc_0032C334; /* je: equal / zero */

loc_0032C331: ;
    MEM32(ebp + 0x14) = ebx;

loc_0032C334: ;
    if (CMP_NE(MEM8(ebp + 0x2E), LO8(ebx))) goto loc_0032C4B4; /* jne: not equal / not zero */

loc_0032C33D: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0xA0);
    if (CMP_NE(eax, MEM32(ebp + 0x30))) goto loc_0032C4B4; /* jne: not equal / not zero */

loc_0032C352: ;
    eax = edi;
    ecx = esi;
    MEM8(esi + 0x181) = 0x14;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032C362: ;
    eax = ebp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032C371: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032C4B4; /* jne: not equal / not zero */

loc_0032C37C: ;
    if (CMP_EQ(MEM8(ebp + 0x2F), LO8(ebx))) goto loc_0032C38C; /* je: equal / zero */

loc_0032C381: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x14) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0032C38C: ;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032C398: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032C4B4; /* je: equal / zero */

loc_0032C3A3: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(ecx + 0x474);
    if (CMP_EQ(edx, MEM32(esi + 0xA4))) goto loc_0032C4B4; /* je: equal / zero */

loc_0032C3BB: ;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    eax = esp + 0x14;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0032C3CB: ;
    edi = MEM32(esp + 0x14);
    esp = esp + 4;
    if (CMP_EQ(edi, ebx)) goto loc_0032C4A5; /* je: equal / zero */

loc_0032C3DA: ;
    if (CMP_EQ(MEM32(esi + 0xA4), edi)) goto loc_0032C4B4; /* je: equal / zero */

loc_0032C3E6: ;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032C409; /* jne: not equal / not zero */

loc_0032C3F9: ;
    if (CMP_EQ(MEM8(eax + 0x5A8), LO8(ebx))) goto loc_0032C403; /* je: equal / zero */

loc_0032C401: ;
    SET_LO8(ecx, 1);

loc_0032C403: ;
    MEM8(eax + 0x5A8) = LO8(ebx);

loc_0032C409: ;
    eax = MEM32(esp + 0x20);
    if (CMP_NE(MEM8(eax + 0xC), LO8(ebx))) goto loc_0032C41A; /* jne: not equal / not zero */

loc_0032C412: ;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_0032C4A5; /* je: equal / zero */

loc_0032C41A: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0032C494; /* je: equal / zero */

loc_0032C41F: ;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(ebp) = edi;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x474) = edi;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_0032C451; /* jne: not equal / not zero */

loc_0032C44A: ;
    MEM8(eax + 0x5A8) = 1;

loc_0032C451: ;
    eax = MEM32(0x847024);
    ecx = MEM32(esi + 0x568);
    edi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032C470: ;
    edx = MEM32(esp + 0x28);
    ecx = eax;
    eax = MEM32(edx + 0x14);
    edx = esi;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032C480: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032C48C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0032C494: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032C49A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0032C4A5: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0032C4B1: ;
    esp = esp + 0xC;

loc_0032C4B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0032C4C0
 * Original: 0x0032C4C0 - 0x0032C63F (383 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C4C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032C4C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(eax + 0x52F) = LO8(ebx);
    (void)0; /* cmp MEM32(esp + 0x18), 0xC - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esp + 0x14) = LO8(ebx);
    if (CMP_NE(MEM32(esp + 0x18), 0xC)) goto loc_0032C515; /* jne: not equal / not zero */

loc_0032C4E3: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(ebp + 0x568);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    MEM8(eax + 0x52F) = LO8(edx);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_NZ(ecx, ecx)) goto loc_0032C50F; /* jne: not equal / not zero */

loc_0032C504: ;
    ecx = MEM32(eax + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_0032C50F; /* je: equal / zero */

loc_0032C50B: ;
    SET_LO8(ebx, 1);
    goto loc_0032C511;

loc_0032C50F: ;
    SET_LO8(ebx, 0); /* xor self */

loc_0032C511: ;
    MEM8(esp + 0x14) = LO8(ebx);

loc_0032C515: ;
    ecx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x52F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032C535; /* je: equal / zero */

loc_0032C525: ;
    eax = ecx;
    MEM8(eax + 0x2E7) = MEM8(eax + 0x2E7) | 4;
    MEM8(0x7FDB7C) = 1;

loc_0032C535: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0032C638; /* jne: not equal / not zero */

loc_0032C54C: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0032C638; /* je: equal / zero */

loc_0032C55E: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0032C570: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032C638; /* je: equal / zero */

loc_0032C57B: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0032C638; /* je: equal / zero */

loc_0032C583: ;
    if (CMP_NE(MEM32(esp + 0x1C), 0xC)) goto loc_0032C638; /* jne: not equal / not zero */

loc_0032C58E: ;
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 1);
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_0032FAE0(); /* call 0x0032FAE0 */

loc_0032C5A3: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032C619; /* je: equal / zero */

loc_0032C5AA: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(edx, MEM8(eax + 0x2E7));
    edi = MEM32(esp + 0x18);
    SET_LO8(edx, LO8(edx) | 2);
    MEM8(eax + 0x2E7) = LO8(edx);
    edx = edi;
    eax = ebp;
    MEM8(0x7FDB7C) = 1;
    PUSH32(esp, 0); sub_0032C960(); /* call 0x0032C960 */

loc_0032C5D3: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xA41);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032C5F2: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(edi + 4);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0032C608: ;
    esp = esp + 4;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0032C612: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032C619: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8BA);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032C638: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C640
 * Original: 0x0032C640 - 0x0032C8FE (702 bytes, 225 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032C640: ;
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x568);
    eax = MEM32(esi + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032C65E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0032C8F7; /* je: equal / zero */

loc_0032C668: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    eax = MEM32(eax + 0x18);
    MEM8(esi + 0x52F) = 0;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032C6AD; /* jne: not equal / not zero */

loc_0032C691: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0xA0);
    esi = MEM32(ebx + 0x30);
    if (CMP_NE(edx, esi)) goto loc_0032C6E8; /* jne: not equal / not zero */

loc_0032C6A4: ;
    if (CMP_NE(MEM32(ecx + 0x1F8), 0)) goto loc_0032C6E4; /* jne: not equal / not zero */

loc_0032C6AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032C6B9: ;
    SET_LO8(eax, MEM8(ebp + 0x10B));
    PUSH32(esp, 0x1A);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM32(esp + 0x28) = ebp;
    MEM8(esp + 0x2C) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0032C6DA: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0032C6E4: ;
    if (CMP_EQ(edx, esi)) goto loc_0032C6FF; /* je: equal / zero */

loc_0032C6E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032C6F5: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0032C6FF: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032C708: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edi + 4);
    ecx = MEM32(edx + 0x444);
    PUSH32(esp, 0); sub_0032FC20(); /* call 0x0032FC20 */

loc_0032C71C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032C73E; /* je: equal / zero */

loc_0032C720: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x607);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032C73E: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032C750: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032C77A; /* je: equal / zero */

loc_0032C757: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(ebx);
    MEM32(edx + 0x480) = eax;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x484) = edx;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0032C77A: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032C78F; /* je: equal / zero */

loc_0032C781: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0032C78F: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032C797: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032C8F7; /* je: equal / zero */

loc_0032C7A2: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x474);
    if (CMP_EQ(ecx, MEM32(ebp + 0xA4))) goto loc_0032C8F7; /* je: equal / zero */

loc_0032C7BA: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x2C;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0032C7CA: ;
    esi = MEM32(esp + 0x2C);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0032C8A2; /* je: equal / zero */

loc_0032C7D9: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0032C8F7; /* je: equal / zero */

loc_0032C7E5: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032C80B; /* jne: not equal / not zero */

loc_0032C7F8: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032C804; /* je: equal / zero */

loc_0032C802: ;
    SET_LO8(ecx, 1);

loc_0032C804: ;
    MEM8(eax + 0x5A8) = 0;

loc_0032C80B: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032C81A; /* jne: not equal / not zero */

loc_0032C812: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032C8A2; /* je: equal / zero */

loc_0032C81A: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0032C892; /* je: equal / zero */

loc_0032C81F: ;
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(edx) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x474) = esi;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0032C854; /* jne: not equal / not zero */

loc_0032C84B: ;
    edx = ecx;
    MEM8(edx + 0x5A8) = 1;

loc_0032C854: ;
    eax = MEM32(0x847024);
    ecx = MEM32(ebp + 0x568);
    esi = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032C873: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032C87F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032C88B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0032C892: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032C898: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0032C8A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0032C8AD: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032C8F7; /* je: equal / zero */

loc_0032C8B4: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 2)) goto loc_0032C8E8; /* je: equal / zero */

loc_0032C8C3: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032C8E8; /* jne: not equal / not zero */

loc_0032C8CA: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0032C8E8; /* je: equal / zero */

loc_0032C8D3: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_0032C4C0(); /* call 0x0032C4C0 */

loc_0032C8E1: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032C8F7; /* jne: not equal / not zero */

loc_0032C8E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032C8F4: ;
    esp = esp + 8;

loc_0032C8F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0032C900
 * Original: 0x0032C900 - 0x0032C92D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C900(void)
{

loc_0032C900: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x43C80000);
    PUSH32(esp, 0x51);
    eax = 0; /* xor self */
    SET_LO8(ecx, 0); /* xor self */
    edi = 0x28;
    PUSH32(esp, 0); sub_0031A920(); /* call 0x0031A920 */

loc_0032C928: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C930
 * Original: 0x0032C930 - 0x0032C95D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C930(void)
{

loc_0032C930: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x43C80000);
    PUSH32(esp, 0x52);
    eax = 0; /* xor self */
    SET_LO8(ecx, 0); /* xor self */
    edi = 0x27;
    PUSH32(esp, 0); sub_0031A920(); /* call 0x0031A920 */

loc_0032C958: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032C960
 * Original: 0x0032C960 - 0x0032CAD0 (368 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C960(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0032C960: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x568);
    ecx = 0; /* xor self */
    if (CMP_NE(MEM8(eax + 0x3A0), LO8(ecx))) goto loc_0032CACB; /* jne: not equal / not zero */

loc_0032C97A: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi) = 0xFFFFFFFFu;
    MEMF(esi + 8) = xmm0; /* movss */
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0032CA60; /* je: equal / zero */

loc_0032C9A1: ;
    eax--;
    if ((eax == 0)) goto loc_0032CA0D; /* je: equal / zero */

loc_0032C9A4: ;
    eax--;
    if ((eax != 0)) goto loc_0032CABA; /* jne: not equal / not zero */

loc_0032C9AB: ;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032C9C2: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CAB8; /* je: equal / zero */

loc_0032C9CD: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0032C9EE; /* je: equal / zero */

loc_0032C9D5: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032C9EE; /* je: equal / zero */

loc_0032C9DA: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032C9EE; /* je: equal / zero */

loc_0032C9E0: ;
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    if (TEST_NZ(ecx, ecx)) goto loc_0032CAAA; /* jne: not equal / not zero */

loc_0032C9EE: ;
    eax = MEM32(esp + 8);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032CAB8; /* je: equal / zero */

loc_0032C9FB: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032CAB8; /* je: equal / zero */

loc_0032CA05: ;
    eax = eax + 0x10;
    goto loc_0032CAA5;

loc_0032CA0D: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032CA24: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CAB8; /* je: equal / zero */

loc_0032CA2F: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0032CA4C; /* je: equal / zero */

loc_0032CA37: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032CA4C; /* je: equal / zero */

loc_0032CA3C: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032CA4C; /* je: equal / zero */

loc_0032CA42: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_0032CAAA; /* jne: not equal / not zero */

loc_0032CA4C: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032CAB8; /* je: equal / zero */

loc_0032CA55: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032CAB8; /* je: equal / zero */

loc_0032CA5B: ;
    eax = eax + 8;
    goto loc_0032CAA5;

loc_0032CA60: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0032CA77: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CAB8; /* je: equal / zero */

loc_0032CA7E: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0032CA96; /* je: equal / zero */

loc_0032CA86: ;
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032CA96; /* je: equal / zero */

loc_0032CA8B: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032CA96; /* je: equal / zero */

loc_0032CA91: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_0032CAAA; /* jne: not equal / not zero */

loc_0032CA96: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x2C;
    if ((eax == 0)) goto loc_0032CAB8; /* je: equal / zero */

loc_0032CA9F: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0032CAB8; /* je: equal / zero */

loc_0032CAA5: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0032CAB8; /* je: equal / zero */

loc_0032CAAA: ;
    if (TEST_Z(eax, eax)) goto loc_0032CAB8; /* je: equal / zero */

loc_0032CAAE: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 8) = edx;

loc_0032CAB8: ;
    ecx = 0; /* xor self */

loc_0032CABA: ;
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(esi);
    MEM32(eax + 0x474) = ecx;

loc_0032CACB: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CAD0
 * Original: 0x0032CAD0 - 0x0032CCC8 (504 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CAD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032CAD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(eax + 0x52F) = LO8(ebx);
    eax = MEM32(esp + 0x18);
    eax = eax - 0x4D;
    PUSH32(esp, edi);
    MEM8(esp + 0x14) = LO8(ebx);
    if ((eax == 0)) goto loc_0032CB28; /* je: equal / zero */

loc_0032CAF5: ;
    eax--;
    if ((eax != 0)) goto loc_0032CB37; /* jne: not equal / not zero */

loc_0032CAF8: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(ebp + 0x568);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    MEM8(eax + 0x52F) = LO8(edx);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x28);
    if (TEST_NZ(ecx, ecx)) goto loc_0032CB24; /* jne: not equal / not zero */

loc_0032CB19: ;
    ecx = MEM32(eax + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_0032CB24; /* je: equal / zero */

loc_0032CB20: ;
    SET_LO8(ebx, 1);
    goto loc_0032CB33;

loc_0032CB24: ;
    SET_LO8(ebx, 0); /* xor self */
    goto loc_0032CB33;

loc_0032CB28: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */

loc_0032CB33: ;
    MEM8(esp + 0x14) = LO8(ebx);

loc_0032CB37: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0032CCC1; /* jne: not equal / not zero */

loc_0032CB4E: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0032CCC1; /* je: equal / zero */

loc_0032CB60: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0032CB72: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CCC1; /* je: equal / zero */

loc_0032CB7D: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x52F));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032CB9B; /* je: equal / zero */

loc_0032CB8D: ;
    MEM8(eax + 0x2E7) = MEM8(eax + 0x2E7) | 4;
    MEM8(0x7FDB7C) = 1;

loc_0032CB9B: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0032CCC1; /* je: equal / zero */

loc_0032CBA3: ;
    eax = MEM32(esp + 0x1C);
    eax = eax - 0x4D;
    if ((eax == 0)) goto loc_0032CC53; /* je: equal / zero */

loc_0032CBB0: ;
    eax--;
    if ((eax != 0)) goto loc_0032CCC1; /* jne: not equal / not zero */

loc_0032CBB7: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_0032FAE0(); /* call 0x0032FAE0 */

loc_0032CBCC: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CC2D; /* je: equal / zero */

loc_0032CBD3: ;
    edi = MEM32(esp + 0x18);
    edx = edi;
    eax = ebp;
    PUSH32(esp, 0); sub_0032C960(); /* call 0x0032C960 */

loc_0032CBE0: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBD6);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032CBFF: ;
    esi = ebp;
    PUSH32(esp, 0); sub_0032C930(); /* call 0x0032C930 */

loc_0032CC06: ;
    eax = MEM32(edi + 4);

loc_0032CC09: ;
    ecx = MEM32(ebp + 0x568);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_0032CC1C: ;
    esp = esp + 4;
    eax = ebp;
    PUSH32(esp, 0); sub_002FC240(); /* call 0x002FC240 */

loc_0032CC26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032CC2D: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8BA);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032CC4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032CC53: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_0032FAE0(); /* call 0x0032FAE0 */

loc_0032CC68: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CC98; /* je: equal / zero */

loc_0032CC6F: ;
    edx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648E14); /* movss */
    esi = ebp;
    MEMF(edx + 0x30C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0032C900(); /* call 0x0032C900 */

loc_0032CC8C: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 4);
    goto loc_0032CC09;

loc_0032CC98: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_0032CCC1; /* je: equal / zero */

loc_0032CCA2: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8DD);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032CCC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032CCD0
 * Original: 0x0032CCD0 - 0x0032CF4E (638 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CCD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032CCD0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x568);
    eax = MEM32(esi + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0032CCEE: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0032CF47; /* je: equal / zero */

loc_0032CCF8: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx + 0x14;
    eax = MEM32(eax + 0x18);
    MEM8(esi + 0x52F) = 0;
    SET_LO8(ecx, MEM8(ebx + 0x2E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032CF38; /* jne: not equal / not zero */

loc_0032CD25: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0xA0);
    if (CMP_EQ(edx, MEM32(ebx + 0x30))) goto loc_0032CD4D; /* je: equal / zero */

loc_0032CD36: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_00319BC0(); /* call 0x00319BC0 */

loc_0032CD43: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032CD4D: ;
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A420(); /* call 0x0031A420 */

loc_0032CD56: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(edi + 4);
    ecx = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FC20(); /* call 0x0032FC20 */

loc_0032CD6A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CD8D; /* je: equal / zero */

loc_0032CD6E: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBD7);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032CD8D: ;
    eax = ebx + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00319EA0(); /* call 0x00319EA0 */

loc_0032CD9F: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CDC9; /* je: equal / zero */

loc_0032CDA6: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ebx);
    MEM32(ecx + 0x480) = edx;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x484) = ecx;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032CDC9: ;
    SET_LO8(eax, MEM8(ebx + 0x2F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CDDE; /* je: equal / zero */

loc_0032CDD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032CDDE: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0031A010(); /* call 0x0031A010 */

loc_0032CDE6: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CF47; /* je: equal / zero */

loc_0032CDF1: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x474);
    if (CMP_EQ(eax, MEM32(ebp + 0xA4))) goto loc_0032CF47; /* je: equal / zero */

loc_0032CE09: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    eax = esp + 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B18A0(); /* call 0x002B18A0 */

loc_0032CE19: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0032CEF2; /* je: equal / zero */

loc_0032CE28: ;
    if (CMP_EQ(MEM32(ebp + 0xA4), esi)) goto loc_0032CF47; /* je: equal / zero */

loc_0032CE34: ;
    eax = MEM32(ebp + 0x568);
    edx = MEM32(eax + 0xBC);
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_0032CE5A; /* jne: not equal / not zero */

loc_0032CE47: ;
    SET_LO8(edx, MEM8(eax + 0x5A8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032CE53; /* je: equal / zero */

loc_0032CE51: ;
    SET_LO8(ecx, 1);

loc_0032CE53: ;
    MEM8(eax + 0x5A8) = 0;

loc_0032CE5A: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032CE69; /* jne: not equal / not zero */

loc_0032CE61: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032CEF2; /* je: equal / zero */

loc_0032CE69: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0032CEE2; /* je: equal / zero */

loc_0032CE6E: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(ebx) = esi;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x474) = esi;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_0032CEA3; /* jne: not equal / not zero */

loc_0032CE9A: ;
    ecx = eax;
    MEM8(ecx + 0x5A8) = 1;

loc_0032CEA3: ;
    edx = MEM32(0x847024);
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0x444);
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032CEC3: ;
    ecx = eax;
    eax = MEM32(edi + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_00021AB0(); /* call 0x00021AB0 */

loc_0032CECF: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0032CEDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032CEE2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0032CEE8: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0032CEF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_0031A520(); /* call 0x0031A520 */

loc_0032CEFD: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032CF47; /* je: equal / zero */

loc_0032CF04: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_0032CF38; /* je: equal / zero */

loc_0032CF13: ;
    SET_LO8(eax, MEM8(ebx + 0x2E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032CF38; /* jne: not equal / not zero */

loc_0032CF1A: ;
    if (CMP_EQ(MEM8(ebp + 0x180), 0xFE)) goto loc_0032CF38; /* je: equal / zero */

loc_0032CF23: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_0032CAD0(); /* call 0x0032CAD0 */

loc_0032CF31: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032CF47; /* jne: not equal / not zero */

loc_0032CF38: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0031A210(); /* call 0x0031A210 */

loc_0032CF44: ;
    esp = esp + 8;

loc_0032CF47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0032CF50
 * Original: 0x0032CF50 - 0x0032D08D (317 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032CF50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032CF50: ;
    (void)0; /* cmp LO16(esi), 0xFF - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_GE(LO16(esi), 0xFF)) goto loc_0032D08B; /* jge: greater or equal (signed >=) */

loc_0032CF5E: ;
    if (TEST_S(LO16(esi), LO16(esi))) goto loc_0032D08B; /* jl: less (signed <) */

loc_0032CF67: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_0032CF81; /* jne: not equal / not zero */

loc_0032CF70: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0032CF81: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032CF93; /* jne: not equal / not zero */

loc_0032CF8A: ;
    if (CMP_EQ(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_0032CFA1; /* je: equal / zero */

loc_0032CF93: ;
    SET_LO8(eax, MEM8(0x876754));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x876478;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032CFA6; /* je: equal / zero */

loc_0032CFA1: ;
    eax = 0x8761EC;

loc_0032CFA6: ;
    ecx = SX16(LO16(esi));
    ecx = ecx + ecx * 8;
    eax = eax + ecx * 4 + 4;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 8);
    if (CMP_A(ecx, 0xD)) goto loc_0032D08B; /* ja: above (unsigned >) */

loc_0032CFBE: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x32D090); /* switch: 14 entries, 14 targets */
    if (_jt == 0x0032CFC5u) goto loc_0032CFC5;
    if (_jt == 0x0032CFC9u) goto loc_0032CFC9;
    if (_jt == 0x0032CFCEu) goto loc_0032CFCE;
    if (_jt == 0x0032CFD3u) goto loc_0032CFD3;
    if (_jt == 0x0032CFD8u) goto loc_0032CFD8;
    if (_jt == 0x0032CFEBu) goto loc_0032CFEB;
    if (_jt == 0x0032D00Au) goto loc_0032D00A;
    if (_jt == 0x0032D018u) goto loc_0032D018;
    if (_jt == 0x0032D01Du) goto loc_0032D01D;
    if (_jt == 0x0032D03Cu) goto loc_0032D03C;
    if (_jt == 0x0032D04Du) goto loc_0032D04D;
    if (_jt == 0x0032D052u) goto loc_0032D052;
    if (_jt == 0x0032D057u) goto loc_0032D057;
    if (_jt == 0x0032D075u) goto loc_0032D075;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0032CFC5: ;
    MEM32(eax) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032CFC9: ;
    MEM32(eax + 0x10) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032CFCE: ;
    MEM32(eax + 0x14) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032CFD3: ;
    MEM32(eax + 4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032CFD8: ;
    if (TEST_Z(MEM8(0x849818), 1)) goto loc_0032CFE6; /* je: equal / zero */

loc_0032CFE1: ;
    ebx = 6;

loc_0032CFE6: ;
    MEM8(eax + 8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032CFEB: ;
    SET_LO8(ecx, MEM8(eax + 8));
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    (void)0; /* cmp LO8(ecx), 0x64 - flags set for next jcc */
    MEM8(eax + 8) = LO8(ecx);
    if (CMP_LE(LO8(ecx), 0x64)) goto loc_0032D002; /* jle: less or equal (signed <=) */

loc_0032CFF8: ;
    ecx = 0x64;
    MEM8(eax + 8) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D002: ;
    ecx = SX8(LO8(ecx));
    MEM8(eax + 8) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D00A: ;
    if (TEST_NZ(MEM8(0x849818), 1)) goto loc_0032D08B; /* jne: not equal / not zero */

loc_0032D013: ;
    MEM8(eax + 8) = MEM8(eax + 8) - LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D018: ;
    MEM8(eax + 9) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D01D: ;
    SET_LO8(ecx, MEM8(eax + 9));
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    (void)0; /* cmp LO8(ecx), 0x63 - flags set for next jcc */
    MEM8(eax + 9) = LO8(ecx);
    if (CMP_LE(LO8(ecx), 0x63)) goto loc_0032D034; /* jle: less or equal (signed <=) */

loc_0032D02A: ;
    ecx = 0x63;
    MEM8(eax + 9) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D034: ;
    ecx = SX8(LO8(ecx));
    MEM8(eax + 9) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D03C: ;
    SET_LO8(ecx, MEM8(eax + 9));
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    MEM8(eax + 9) = LO8(ecx);
    if (((int32_t)LO8(ecx) >= 0)) goto loc_0032D034; /* jns: not sign (positive) */

loc_0032D046: ;
    ecx = 0; /* xor self */
    MEM8(eax + 9) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D04D: ;
    MEM8(eax + 0xA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D052: ;
    MEM32(eax + 0xC) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D057: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032D06B; /* je: equal / zero */

loc_0032D061: ;
    SET_LO8(ecx, MEM8(0x776541));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032D08B; /* jne: not equal / not zero */

loc_0032D06B: ;
    ecx = MEM32(eax + 0xC);
    ecx = ecx + ebx;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032D075: ;
    ecx = MEM32(eax + 0xC);
    ecx = ecx - ebx;
    edx = 0;
    SET_LO8(edx, (((int32_t)ecx < 0)) ? 1 : 0); /* sets */
    MEM32(eax + 0xC) = ecx;
    edx--;
    ecx = ecx & edx;
    MEM32(eax + 0xC) = ecx;

loc_0032D08B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D0D0
 * Original: 0x0032D0D0 - 0x0032D160 (144 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D0D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032D0D0: ;
    PUSH32(esp, esi);
    SET_LO16(esi, LO16(eax));
    if (CMP_GE(LO16(esi), 0xFF)) { sub_0032D160(); return; } /* jge: greater or equal (signed >=) */

loc_0032D0DF: ;
    if (TEST_S(LO16(esi), LO16(esi))) { sub_0032D160(); return; } /* jl: less (signed <) */

loc_0032D0E4: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_0032D0FE; /* jne: not equal / not zero */

loc_0032D0ED: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0032D0FE: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 8);
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    esi = SX16(LO16(esi));
    eax = esi + esi * 8;
    eax = eax * 4 + 0x8761F0;
    if (CMP_A(ecx, 8)) { sub_0032D160(); return; } /* ja: above (unsigned >) */

loc_0032D115: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x32D164); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0032D11Cu) goto loc_0032D11C;
    if (_jt == 0x0032D136u) goto loc_0032D136;
    if (_jt == 0x0032D13Au) goto loc_0032D13A;
    if (_jt == 0x0032D13Fu) goto loc_0032D13F;
    if (_jt == 0x0032D145u) goto loc_0032D145;
    if (_jt == 0x0032D14Bu) goto loc_0032D14B;
    if (_jt == 0x0032D151u) goto loc_0032D151;
    if (_jt == 0x0032D156u) goto loc_0032D156;
    if (_jt == 0x0032D15Bu) goto loc_0032D15B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0032D11C: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0032D121: ;
    edx = eax;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(edx + 0x28C);
    POP32(esp, esi);
    eax = eax & ecx;
    esp += 4; return; /* ret */

loc_0032D136: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032D13A: ;
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032D13F: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032D145: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 9);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032D14B: ;
    eax = ZX8(MEM8(eax + 0xA));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032D151: ;
    eax = MEM32(eax + 0xC);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032D156: ;
    eax = MEM32(eax + 0x10);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032D15B: ;
    eax = MEM32(eax + 0x14);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D190
 * Original: 0x0032D190 - 0x0032D1D9 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D190(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032D190: ;
    SET_LO8(eax, MEM8(0x7FCB47));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032D1D8; /* jne: not equal / not zero */

loc_0032D199: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    esi = 0; /* xor self */
    ebx = SX16(LO16(ebx));
    edi = edi + 0x3AE;
    /* nop */

loc_0032D1B0: ;
    eax = 1;
    ecx = esi;
    eax = eax << LO8(ecx);
    if (TEST_Z(ebx, eax)) goto loc_0032D1CA; /* je: equal / zero */

loc_0032D1BD: ;
    eax = ZX16(MEM16(edi));
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D1C7: ;
    esp = esp + 4;

loc_0032D1CA: ;
    esi++;
    edi = edi + 0x6D0;
    if (CMP_L(esi, 4)) goto loc_0032D1B0; /* jl: less (signed <) */

loc_0032D1D6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0032D1D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032D1E0
 * Original: 0x0032D1E0 - 0x0032D22A (74 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D1E0(void)
{

loc_0032D1E0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    MEM8(esi + 0x800488) = 0;
    MEM32(esi * 4 + 0x800448) = 0;
    MEM32(esi * 4 + 0x800408) = 0;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D209: ;
    eax = MEM32(esi * 4 + 0x800448);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D217: ;
    eax = MEM32(esi * 4 + 0x800408);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D225: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D230
 * Original: 0x0032D230 - 0x0032D2EB (187 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D230(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032D230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x800488);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D244: ;
    eax = MEM32(esi * 4 + 0x800448);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D252: ;
    eax = MEM32(esi * 4 + 0x800408);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D260: ;
    eax = MEM32(0x84B118);
    esp = esp + 0xC;
    ecx = 6;
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, LO8(ecx));
    MEM8(esp + 0xF) = 4;
    if (TEST_Z(eax, eax)) goto loc_0032D294; /* je: equal / zero */

loc_0032D27A: ;
    SET_LO8(edx, MEM8(eax + 0x18));
    SET_LO8(ebx, MEM8(eax + 0x19));
    edi = MEM32(eax + 0x14);
    MEM8(esp + 0xF) = LO8(edx);
    MEM8(0x74A4D9) = LO8(ecx);
    MEM8(0x74A4D8) = 4;

loc_0032D294: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032D2B5; /* je: equal / zero */

loc_0032D29D: ;
    SET_LO8(eax, MEM8(0x862C96));
    SET_LO8(ebx, LO8(ecx));
    MEM8(esp + 0xF) = LO8(eax);
    edi = 0; /* xor self */
    MEM8(0x74A4D9) = LO8(ecx);
    MEM8(0x74A4D8) = LO8(eax);

loc_0032D2B5: ;
    eax = ZX8(LO8(ebx));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D2BE: ;
    eax = ZX8(MEM8(esp + 0x13));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D2CA: ;
    PUSH32(esp, 0xA);
    eax = edi;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_0032D2D3: ;
    esp = esp + 0xC;
    SET_LO16(eax, ZX8(LO8(ebx)));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x7FFF90) = LO16(eax);
    MEM16(0x7FFF8C) = LO16(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D2F0
 * Original: 0x0032D2F0 - 0x0032D430 (320 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D2F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032D2F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x876758);
    if (TEST_NZ(LO8(ebx), 1)) goto loc_0032D30F; /* jne: not equal / not zero */

loc_0032D2FC: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0032D30F: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032D42E; /* jne: not equal / not zero */

loc_0032D31C: ;
    eax = MEM32(0x876748);
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    if (CMP_NE(eax, ebp)) goto loc_0032D42D; /* jne: not equal / not zero */

loc_0032D32D: ;
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(ebx), 1)) goto loc_0032D365; /* jne: not equal / not zero */

loc_0032D333: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0032D346: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032D357; /* jne: not equal / not zero */

loc_0032D34F: ;
    if (CMP_EQ(MEM32(0x876748), ebp)) goto loc_0032D365; /* je: equal / zero */

loc_0032D357: ;
    SET_LO8(eax, MEM8(0x876754));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = 0x876478;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032D36A; /* je: equal / zero */

loc_0032D365: ;
    edi = 0x8761EC;

loc_0032D36A: ;
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    ecx = 0xA3;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (TEST_NZ(LO8(ebx), 1)) goto loc_0032D38B; /* jne: not equal / not zero */

loc_0032D378: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0032D38B: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032D39C; /* jne: not equal / not zero */

loc_0032D394: ;
    if (CMP_EQ(MEM32(0x876748), ebp)) goto loc_0032D3AA; /* je: equal / zero */

loc_0032D39C: ;
    SET_LO8(eax, MEM8(0x876754));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x876478;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032D3AF; /* je: equal / zero */

loc_0032D3AA: ;
    eax = 0x8761EC;

loc_0032D3AF: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    PUSH32(esp, esi);
    MEM32(eax) = ecx;
    esi = 0; /* xor self */
    edi = edi;

loc_0032D3C0: ;
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    if (TEST_Z(edi, edx)) goto loc_0032D3DA; /* je: equal / zero */

loc_0032D3CD: ;
    eax = esi;
    PUSH32(esp, 0); sub_0032D230(); /* call 0x0032D230 */

loc_0032D3D4: ;
    ebx = MEM32(0x876758);

loc_0032D3DA: ;
    esi++;
    if (CMP_L(esi, 0x10)) goto loc_0032D3C0; /* jl: less (signed <) */

loc_0032D3E0: ;
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(LO8(ebx), 1)) goto loc_0032D3F9; /* jne: not equal / not zero */

loc_0032D3E6: ;
    ebx = ebx | 1;
    eax = 0x8761E8;
    MEM32(0x876758) = ebx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0032D3F9: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032D40A; /* jne: not equal / not zero */

loc_0032D402: ;
    if (CMP_EQ(MEM32(0x876748), ebp)) goto loc_0032D418; /* je: equal / zero */

loc_0032D40A: ;
    SET_LO8(eax, MEM8(0x876754));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x876478;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032D41D; /* je: equal / zero */

loc_0032D418: ;
    eax = 0x8761EC;

loc_0032D41D: ;
    MEM32(eax + 0x288) = edi;
    MEM16(0x800400) = 0;
    POP32(esp, edi);

loc_0032D42D: ;
    POP32(esp, ebp);

loc_0032D42E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D430
 * Original: 0x0032D430 - 0x0032D488 (88 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D430(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032D430: ;
    SET_LO8(ecx, MEM8(0x876758));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0032D457; /* jne: not equal / not zero */

loc_0032D43F: ;
    ecx = MEM32(0x876758);
    ecx = ecx | eax;
    eax = 0x8761E8;
    MEM32(0x876758) = ecx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0032D457: ;
    SET_LO8(eax, MEM8(0x8761E8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032D46A; /* jne: not equal / not zero */

loc_0032D461: ;
    if (CMP_EQ(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_0032D478; /* je: equal / zero */

loc_0032D46A: ;
    SET_LO8(eax, MEM8(0x876754));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = 0x876478;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032D47D; /* je: equal / zero */

loc_0032D478: ;
    edi = 0x8761EC;

loc_0032D47D: ;
    ecx = 0xA3;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D490
 * Original: 0x0032D490 - 0x0032D540 (176 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D490(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032D490: ;
    eax = MEM32(0x84A688);
    if (TEST_NZ(eax, eax)) goto loc_0032D53F; /* jne: not equal / not zero */

loc_0032D49D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0032D4AB; /* jne: not equal / not zero */

loc_0032D4A6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0032D4AB: ;
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
    if (TEST_Z(esi, esi)) goto loc_0032D4F5; /* je: equal / zero */

loc_0032D4D3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_0032D4F5; /* jb: below (unsigned <) */

loc_0032D4DC: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0032D4E6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0032D4EE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0032D516; /* jne: not equal / not zero */

loc_0032D4F5: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0032D507: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0032D50F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0032D536; /* je: equal / zero */

loc_0032D516: ;
    POP32(esp, edi);
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0;
    MEM8(eax) = 0;
    MEM32(0x84A688) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032D536: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x84A688) = eax;
    POP32(esp, esi);

loc_0032D53F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032D540
 * Original: 0x0032D540 - 0x0032D5A0 (96 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D540(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032D540: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0032D559; /* je: equal / zero */

loc_0032D545: ;
    ecx = MEM32(ebx);
    if (CMP_NE(ecx, MEM32(eax + 0xC))) goto loc_0032D559; /* jne: not equal / not zero */

loc_0032D54C: ;
    edx = MEM32(eax + 4);
    edx--;
    ecx = edx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 4) = edx;
    if (CMP_G(ecx & ecx, 0)) goto loc_0032D599; /* jg: greater (signed >) */

loc_0032D559: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    esi = esi - 0xC;
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0032D56C: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0032D597; /* je: equal / zero */

loc_0032D572: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0032D57D; /* je: equal / zero */

loc_0032D579: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0032D57D: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0032D597; /* jne: not equal / not zero */

loc_0032D584: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0032D58D: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0032D597: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0032D599: ;
    MEM32(ebx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0032D5A0
 * Original: 0x0032D5A0 - 0x0032D5AA (10 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D5A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032D5A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0032D5B0(); return; /* tail jmp 0x0032D5B0 */

}

/**
 * sub_0032D650
 * Original: 0x0032D650 - 0x0032D77F (303 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D650(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0032D650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x63927C);
    PUSH32(esp, 0x288);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0032D669: ;
    ebx = eax;
    esp = esp + 0x10;
    if (TEST_Z(ebx, ebx)) goto loc_0032D67D; /* je: equal / zero */

loc_0032D672: ;
    ecx = 0xA2;
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0032D67D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0032DE20(); /* call 0x0032DE20 */

loc_0032D68D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0x20);
    MEM32(ebx + 0xC) = edx;
    MEMF(ebx + 0x20) = xmm0; /* movss */
    MEMF(ebx + 0x24) = xmm0; /* movss */
    MEMF(ebx + 0x28) = xmm0; /* movss */
    MEM8(ebx + 0x2C) = 0;
    ecx = MEM32(0x84A690);
    esp = esp + 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = 0x84A690;
    if (TEST_Z(ecx, ecx)) goto loc_0032D6C7; /* je: equal / zero */

loc_0032D6BC: ;
    /* nop */

loc_0032D6C0: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_0032D6C0; /* jne: not equal / not zero */

loc_0032D6C7: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 4) = ebx;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0032D6D8; /* je: equal / zero */

loc_0032D6D6: ;
    MEM32(ecx) = ebx;

loc_0032D6D8: ;
    eax = ebx;
    PUSH32(esp, 0); sub_001C76B0(); /* call 0x001C76B0 */

loc_0032D6DF: ;
    MEM32(ebx + 0x284) = eax;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0032D6F3; /* jne: not equal / not zero */

loc_0032D6EE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0032D6F3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0032D73B; /* je: equal / zero */

loc_0032D719: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_0032D73B; /* jb: below (unsigned <) */

loc_0032D722: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0032D72C: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0032D734: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0032D75C; /* jne: not equal / not zero */

loc_0032D73B: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0032D74D: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0032D755: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0032D77F(); return; } /* je: equal / zero */

loc_0032D75C: ;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    edx = eax + 0xC;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    POP32(esp, edi);
    MEM32(edx + 8) = ecx;
    MEM32(ebx + 0x280) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032D790
 * Original: 0x0032D790 - 0x0032D7ED (93 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032D790: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi);
    eax = MEM32(eax + 0x280);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ebp)) goto loc_0032D7BB; /* je: equal / zero */

loc_0032D7A2: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0032D7B0: ;
    edx = MEM32(edi);
    esp = esp + 4;
    MEM32(edx + 0x280) = ebp;

loc_0032D7BB: ;
    eax = MEM32(edi);
    esi = MEM32(eax + 0x284);
    if (CMP_EQ(esi, ebp)) goto loc_0032D7E9; /* je: equal / zero */

loc_0032D7C7: ;
    PUSH32(esp, 0); sub_001CA0C0(); /* call 0x001CA0C0 */

loc_0032D7CC: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032D7E1; /* jne: not equal / not zero */

loc_0032D7D5: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0032D7E1: ;
    ecx = MEM32(edi);
    MEM32(ecx + 0x284) = ebp;

loc_0032D7E9: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0032D7F0(); return; /* tail jmp 0x0032D7F0 */

}

/**
 * sub_0032D8A0
 * Original: 0x0032D8A0 - 0x0032D8CB (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032D8A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032D8A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    eax = MEM32(0x6BD92C);
    SET_LO8(edx, MEM8(eax + 0x33));
    esp = esp - 0x4C;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx * 4 + 0x8004D8);
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0032D8CB(); return; } /* jne: not equal / not zero */

loc_0032D8C0: ;
    SET_LO8(edx, MEM8(eax + 0x34));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0032D8CB(); return; } /* jne: not equal / not zero */

loc_0032D8C7: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_0032D8CD(); return; /* tail jmp 0x0032D8CD */

}

/**
 * sub_0032DAE0
 * Original: 0x0032DAE0 - 0x0032DB48 (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DAE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032DAE0: ;
    ecx = MEM32(ecx * 4 + 0x8004D8);
    MEM32(eax) = 0;
    SET_LO8(edx, MEM8(ecx + 0x64));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_BE(LO8(edx) & LO8(edx), 0)) goto loc_0032DB46; /* jbe: below or equal (unsigned <=) */

loc_0032DAF7: ;
    PUSH32(esp, ebp);
    goto loc_0032DB00;

    /* nop */

loc_0032DB00: ;
    edx = MEM32(ecx + ebx * 8 + 0x6C);
    edx = edx + 0xFFFFFFFEu;
    if (CMP_A(edx, 5)) goto loc_0032DB27; /* ja: above (unsigned >) */

loc_0032DB0C: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x32DB48); /* switch: 6 entries, 2 targets */
    if (_jt == 0x0032DB13u) goto loc_0032DB13;
    if (_jt == 0x0032DB18u) goto loc_0032DB18;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0032DB13: ;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    goto loc_0032DB1A;

loc_0032DB18: ;
    (void)0; /* test edi, edi - flags set for next jcc */

loc_0032DB1A: ;
    if (TEST_Z(edi, edi)) goto loc_0032DB27; /* je: equal / zero */

loc_0032DB1C: ;
    edx = MEM32(eax);
    ebp = MEM32(ecx + ebx * 8 + 0x68);
    MEM32(esi + edx * 4) = ebp;
    MEM32(eax) = MEM32(eax) + 1;

loc_0032DB27: ;
    edx = MEM32(0x6BD92C);
    if (CMP_EQ(MEM32(edx + 4), 1)) goto loc_0032DB3C; /* je: equal / zero */

loc_0032DB33: ;
    if (CMP_NE(MEM32(ecx + ebx * 8 + 0x68), 5)) goto loc_0032DB3C; /* jne: not equal / not zero */

loc_0032DB3A: ;
    MEM32(eax) = MEM32(eax) - 1;

loc_0032DB3C: ;
    edx = ZX8(MEM8(ecx + 0x64));
    ebx++;
    if (CMP_L(ebx, edx)) goto loc_0032DB00; /* jl: less (signed <) */

loc_0032DB45: ;
    POP32(esp, ebp);

loc_0032DB46: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032DB60
 * Original: 0x0032DB60 - 0x0032DBA4 (68 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DB60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032DB60: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    ecx = MEM32(ecx + 8);
    esp = esp - 0x10;
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x10;
    eax = esp + 0xC;
    edi = edx;
    PUSH32(esp, 0); sub_0032DAE0(); /* call 0x0032DAE0 */

loc_0032DB86: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0032DB9B; /* jle: less or equal (signed <=) */

loc_0032DB90: ;
    if (CMP_EQ(MEM32(esp + eax * 4 + 0x10), ebp)) { sub_0032DBA4(); return; } /* je: equal / zero */

loc_0032DB96: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0032DB90; /* jl: less (signed <) */

loc_0032DB9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032DBB0
 * Original: 0x0032DBB0 - 0x0032DBE1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DBB0(void)
{

loc_0032DBB0: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + eax;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x20));
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    esi = edi + 0x40;
    PUSH32(esp, 0); sub_0032DBF0(); /* call 0x0032DBF0 */

loc_0032DBD8: ;
    esp = esp + 0xC;
    MEM32(edi + 0x44) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032DBF0
 * Original: 0x0032DBF0 - 0x0032DCD7 (231 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032DBF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x8004D8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, LO8(edx));
    PUSH32(esp, 0); sub_00332000(); /* call 0x00332000 */

loc_0032DC07: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp LO8(ebx), LO8(ecx) - flags set for next jcc */
    MEM32(esi + 0x1C) = eax;
    if (CMP_NE(LO8(ebx), LO8(ecx))) goto loc_0032DC8F; /* jne: not equal / not zero */

loc_0032DC13: ;
    if (CMP_NE(MEM8(eax + 4), LO8(ecx))) goto loc_0032DC8F; /* jne: not equal / not zero */

loc_0032DC18: ;
    eax = MEM32(edi + 0x1C);
    if (CMP_NE(eax, ebp)) goto loc_0032DC37; /* jne: not equal / not zero */

loc_0032DC1F: ;
    MEM32(esi + 0x14) = eax;
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x18) = edx;
    (void)0; /* cmp MEM8(edi + 0x18), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM8(edi + 0x18), LO8(ecx))) ? 1 : 0); /* setne */
    MEM8(esi + 0xD) = LO8(eax);
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = ecx;

loc_0032DC37: ;
    eax = MEM32(edi + 0x28);
    if (CMP_NE(eax, ebp)) goto loc_0032DC56; /* jne: not equal / not zero */

loc_0032DC3E: ;
    MEM32(esi + 0x14) = eax;
    edx = MEM32(edi + 0x2C);
    MEM32(esi + 0x18) = edx;
    (void)0; /* cmp MEM8(edi + 0x24), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM8(edi + 0x24), LO8(ecx))) ? 1 : 0); /* setne */
    MEM8(esi + 0xD) = LO8(eax);
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = ecx;

loc_0032DC56: ;
    eax = MEM32(edi + 0x34);
    if (CMP_NE(eax, ebp)) goto loc_0032DC75; /* jne: not equal / not zero */

loc_0032DC5D: ;
    MEM32(esi + 0x14) = eax;
    edx = MEM32(edi + 0x38);
    MEM32(esi + 0x18) = edx;
    (void)0; /* cmp MEM8(edi + 0x30), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM8(edi + 0x30), LO8(ecx))) ? 1 : 0); /* setne */
    MEM8(esi + 0xD) = LO8(eax);
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = ecx;

loc_0032DC75: ;
    eax = MEM32(esp + 0x18);

loc_0032DC79: ;
    if (CMP_EQ(eax, ecx)) { sub_0032DCD7(); return; } /* je: equal / zero */

loc_0032DC7D: ;
    ecx = ZX8(MEM8(eax + 0xD));
    MEM32(esi + 0x30) = ecx;
    edx = ZX8(MEM8(eax + 0xE));
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x34) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032DC8F: ;
    (void)0; /* cmp LO8(ebx), LO8(ecx) - flags set for next jcc */
    MEM32(esi + 0x14) = ebp;
    if (CMP_EQ(LO8(ebx), LO8(ecx))) goto loc_0032DCA0; /* je: equal / zero */

loc_0032DC96: ;
    if (CMP_EQ(MEM8(esp + 0x14), LO8(ecx))) goto loc_0032DCA0; /* je: equal / zero */

loc_0032DC9C: ;
    MEM8(esi) = LO8(ecx);
    goto loc_0032DCA3;

loc_0032DCA0: ;
    MEM8(esi) = 1;

loc_0032DCA3: ;
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    eax = MEM32(esp + 0x18);
    if (CMP_NE(LO8(ebx), 1)) goto loc_0032DCCB; /* jne: not equal / not zero */

loc_0032DCAC: ;
    SET_LO8(ebx, MEM8(esp + 0x14));
    edx = 0; /* xor self */
    (void)0; /* cmp LO8(ebx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(LO8(ebx), LO8(ecx))) ? 1 : 0); /* setne */
    edx = edx + 0xA;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0x18) = edx;
    if (CMP_EQ(eax, ecx)) { sub_0032DCD7(); return; } /* je: equal / zero */

loc_0032DCC1: ;
    (void)0; /* cmp MEM8(eax), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM8(eax), LO8(ecx))) ? 1 : 0); /* setne */
    MEM8(esi + 0xD) = LO8(edx);
    goto loc_0032DC79;

loc_0032DCCB: ;
    MEM32(esi + 0x18) = 0xC;
    MEM8(esi + 0xD) = LO8(ecx);
    goto loc_0032DC79;

}

/**
 * sub_0032DCF0
 * Original: 0x0032DCF0 - 0x0032DD0E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DCF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032DCF0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + ecx;
    eax = MEM32(edi + 0x5C);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edi + 0x5C;
    if (TEST_Z(eax, eax)) goto loc_0032DD07; /* je: equal / zero */

loc_0032DD02: ;
    PUSH32(esp, 0); sub_003326A0(); /* call 0x003326A0 */

loc_0032DD07: ;
    MEM8(edi + 0x40) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032DD10
 * Original: 0x0032DD10 - 0x0032DDBA (170 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DD10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032DD10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0xA;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = ecx;
    if (CMP_NE(edi, ebx)) goto loc_0032DD5E; /* jne: not equal / not zero */

loc_0032DD26: ;
    eax = ebp;
    eax = eax << 5;
    edi = eax + esi;
    MEM32(edi + 0x214) = ebx;
    MEM32(edi + 0x218) = 0xC;
    PUSH32(esp, 0); sub_00330BF0(); /* call 0x00330BF0 */

loc_0032DD43: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0032DD4A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0032DD5A; /* je: equal / zero */

loc_0032DD51: ;
    PUSH32(esp, 0); sub_00330EF0(); /* call 0x00330EF0 */

loc_0032DD56: ;
    if (TEST_NZ(eax, eax)) goto loc_0032DD9B; /* jne: not equal / not zero */

loc_0032DD5A: ;
    eax = 0; /* xor self */
    goto loc_0032DD9E;

loc_0032DD5E: ;
    ecx = ebp;
    ebx = 0xB;
    ecx = ecx << 5;
    if (CMP_NE(edi, ebx)) { sub_0032DDBA(); return; } /* jne: not equal / not zero */

loc_0032DD6C: ;
    edi = ecx + esi;
    MEM32(edi + 0x214) = ebx;
    MEM32(edi + 0x218) = 1;
    PUSH32(esp, 0); sub_00330BF0(); /* call 0x00330BF0 */

loc_0032DD84: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0032DD8B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0032DD5A; /* je: equal / zero */

loc_0032DD92: ;
    PUSH32(esp, 0); sub_003316B0(); /* call 0x003316B0 */

loc_0032DD97: ;
    if (TEST_Z(eax, eax)) goto loc_0032DD9E; /* je: equal / zero */

loc_0032DD9B: ;
    MEM32(eax + 0x1C) = ebx;

loc_0032DD9E: ;
    MEM32(edi + 0x204) = ebp;
    ebp = ebp + 0x10;
    ebp = ebp << 5;
    MEM32(edi + 0x21C) = eax;
    POP32(esp, edi);
    MEM8(esi + ebp) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032DE20
 * Original: 0x0032DE20 - 0x0032DE88 (104 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032DE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032DE20: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    ecx = 0xA2;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x28);
    eax = MEM32(eax * 4 + 0x8004D8);
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    SET_LO8(edx, MEM8(eax + 4));
    MEM8(esi + 0x11) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(esi + 0x12) = LO8(ecx);
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 6);
    eax = MEM32(esi + 8);
    ecx = MEM32(0x6BD92C);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(eax * 4 + 0x8004D8);
    SET_LO8(edx, MEM8(ecx + 0x33));
    eax = eax + 0x18;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0032DE88(); return; } /* jne: not equal / not zero */

loc_0032DE7D: ;
    SET_LO8(edx, MEM8(ecx + 0x34));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0032DE88(); return; } /* jne: not equal / not zero */

loc_0032DE84: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_0032DE8A(); return; /* tail jmp 0x0032DE8A */

}

/**
 * sub_0032E330
 * Original: 0x0032E330 - 0x0032E33D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E330(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032E330: ;
    eax = esi + 0x200;
    edx = 4;
    g_seh_ebp = ebp; sub_0032E340(); return; /* tail jmp 0x0032E340 */

}

/**
 * sub_0032E390
 * Original: 0x0032E390 - 0x0032E3E9 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E390(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0032E390: ;
    SET_LO8(eax, MEM8(0x84A698));
    esp = esp - 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032E3E5; /* je: equal / zero */

loc_0032E39C: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 0xC);
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EA6000);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x80);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x78); /* movss */
    edi = esp + 0x24;
    ebx = esp + 0x20;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_0032E3E0: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0032E3E5: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E3F0
 * Original: 0x0032E3F0 - 0x0032E3FC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032E3F0: ;
    eax = MEM32(ecx + 0x30);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_0032E3FC(); return; } /* je: equal / zero */

loc_0032E3F8: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0032E406(); return; /* tail jmp 0x0032E406 */

}

/**
 * sub_0032E550
 * Original: 0x0032E550 - 0x0032E6E8 (408 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E550(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0032E550: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + ecx * 4 + 0x34);
    eax = esi + ecx * 4 + 0x34;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0032E5FD; /* je: equal / zero */

loc_0032E56B: ;
    ecx = ecx - 2;
    if ((ecx != 0)) goto loc_0032E6E2; /* jne: not equal / not zero */

loc_0032E574: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032E59C; /* je: equal / zero */

loc_0032E57C: ;
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + eax * 4 + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + eax * 4 + 0x34;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0032E593; /* jge: greater or equal (signed >=) */

loc_0032E58D: ;
    MEM32(eax) = 3;

loc_0032E593: ;
    ecx = MEM32(esi + 0x30);
    eax = esi + ecx * 4 + 0x34;
    goto loc_0032E5BF;

loc_0032E59C: ;
    MEM32(eax) = MEM32(eax) + 1;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + eax * 4 + 0x34);
    ecx = ecx & 0x80000003u;
    eax = esi + eax * 4 + 0x34;
    if (((int32_t)ecx >= 0)) goto loc_0032E5B6; /* jns: not sign (positive) */

loc_0032E5B1: ;
    ecx--;
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;

loc_0032E5B6: ;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x30);
    eax = esi + eax * 4 + 0x34;

loc_0032E5BF: ;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, edx)) goto loc_0032E6E2; /* je: equal / zero */

loc_0032E5C9: ;
    ebx = ecx + 0x10;
    ebx = ebx << 5;
    if (CMP_EQ(MEM8(ebx + esi), 0)) goto loc_0032E574; /* je: equal / zero */

loc_0032E5D5: ;
    ecx = ecx << 5;
    if (CMP_EQ(MEM32(ecx + esi + 0x214), 0xA)) goto loc_0032E574; /* je: equal / zero */

loc_0032E5E2: ;
    esi = MEM32(esi + 0x284);
    if (TEST_Z(esi, esi)) goto loc_0032E6E2; /* je: equal / zero */

loc_0032E5F0: ;
    ecx = MEM32(esi + 0x3C);
    ebx = 1;
    goto loc_0032E6D3;

loc_0032E5FD: ;
    ebx = 1;

loc_0032E602: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    SET_LO8(ecx, 0); /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    edx = MEM32(eax);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032E628; /* je: equal / zero */

loc_0032E60E: ;
    edx--;
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x30);
    edx = MEM32(esi + eax * 4 + 0x34);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = esi + eax * 4 + 0x34;
    if (CMP_GE(edx & edx, 0)) goto loc_0032E643; /* jge: greater or equal (signed >=) */

loc_0032E620: ;
    MEM32(eax) = 7;
    goto loc_0032E643;

loc_0032E628: ;
    edx++;
    MEM32(eax) = edx;
    edx = MEM32(esi + 0x30);
    eax = esi + edx * 4 + 0x34;
    edx = MEM32(eax);
    edx = edx & 0x80000007u;
    if (((int32_t)edx >= 0)) goto loc_0032E641; /* jns: not sign (positive) */

loc_0032E63C: ;
    edx--;
    edx = edx | 0xFFFFFFF8u;
    edx++;

loc_0032E641: ;
    MEM32(eax) = edx;

loc_0032E643: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E65D; /* jne: not equal / not zero */

loc_0032E64B: ;
    eax = MEM32(esi + 0x30);
    edx = MEM32(esi + eax * 4 + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    if (CMP_NE(MEM8(edx + esi + 0x4D), LO8(ebx))) goto loc_0032E65D; /* jne: not equal / not zero */

loc_0032E65B: ;
    SET_LO8(ecx, LO8(ebx));

loc_0032E65D: ;
    eax = MEM32(esi + 0x30);
    edx = MEM32(esi + eax * 4 + 0x34);
    eax = esi + eax * 4 + 0x34;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    if (CMP_EQ(MEM8(edx + esi + 0x40), 0)) goto loc_0032E602; /* je: equal / zero */

loc_0032E672: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032E602; /* jne: not equal / not zero */

loc_0032E676: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esi + 0xC);
    MEMF(esi + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEM32(esp + 8) = ecx;
    MEMF(esi + 0x24) = xmm0; /* movss */
    edx = MEM32(eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = MEM32(edx + esi + 0x54);
    edx = MEM32(0x74A4FC);
    PUSH32(esp, 0x65);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x74A4E4);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0032E6B7: ;
    esi = MEM32(esi + 0x284);
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0032E6E2; /* je: equal / zero */

loc_0032E6C4: ;
    eax = MEM32(esi + 0x48);
    (void)0; /* cmp MEM32(eax), ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), ebx)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E6E2; /* jne: not equal / not zero */

loc_0032E6D0: ;
    ecx = MEM32(esi + 0x4C);

loc_0032E6D3: ;
    (void)0; /* cmp MEM32(ecx), ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ecx), ebx)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E6E2; /* jne: not equal / not zero */

loc_0032E6DC: ;
    edx = MEM32(esi + 0x44);
    MEM8(edx + 8) = LO8(ebx);

loc_0032E6E2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0032E6F0
 * Original: 0x0032E6F0 - 0x0032F314 (3108 bytes, 905 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032E6F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032E6F0: ;
    esp = esp - 0x34;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = edi;
    PUSH32(esp, 0); sub_0032FE50(); /* call 0x0032FE50 */

loc_0032E6FF: ;
    ecx = MEM32(edi + 0xC);
    SET_LO16(ebp, MEM16(ecx + 0x3AE));
    if (TEST_Z(LO16(ebp), LO16(ebp))) goto loc_0032F30D; /* je: equal / zero */

loc_0032E712: ;
    eax = MEM32(edi + 0x284);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0032E74E; /* je: equal / zero */

loc_0032E71D: ;
    edx = MEM32(eax + 0x48);
    (void)0; /* cmp MEM32(edx), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(edx), 1)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(edx), 1)) goto loc_0032E755; /* je: equal / zero */

loc_0032E72B: ;
    if (TEST_Z(eax, eax)) goto loc_0032E74E; /* je: equal / zero */

loc_0032E72F: ;
    edx = MEM32(eax + 0x4C);
    (void)0; /* cmp MEM32(edx), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(edx), 1)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(edx), 1)) goto loc_0032E755; /* je: equal / zero */

loc_0032E73D: ;
    if (TEST_Z(eax, eax)) goto loc_0032E74E; /* je: equal / zero */

loc_0032E741: ;
    eax = MEM32(eax + 0x3C);
    (void)0; /* cmp MEM32(eax), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 1)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032E755; /* je: equal / zero */

loc_0032E74E: ;
    MEM8(esp + 0x10) = 0;
    goto loc_0032E75A;

loc_0032E755: ;
    MEM8(esp + 0x10) = 1;

loc_0032E75A: ;
    eax = MEM32(edi + 0x3C);
    eax = eax + 0x10;
    eax = eax << 5;
    eax = eax + edi;
    if ((eax == 0)) goto loc_0032E775; /* je: equal / zero */

loc_0032E767: ;
    edx = MEM32(eax + 0x1C);
    SET_LO8(ebx, MEM8(edx + 4));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0032E775; /* je: equal / zero */

loc_0032E771: ;
    SET_LO8(edx, 1);
    goto loc_0032E777;

loc_0032E775: ;
    SET_LO8(edx, 0); /* xor self */

loc_0032E777: ;
    if (CMP_EQ(MEM32(edi + 8), 6)) goto loc_0032E783; /* je: equal / zero */

loc_0032E77D: ;
    if (CMP_NE(MEM32(eax + 0x14), 8)) goto loc_0032E785; /* jne: not equal / not zero */

loc_0032E783: ;
    SET_LO8(edx, 0); /* xor self */

loc_0032E785: ;
    (void)0; /* cmp MEM8(esp + 0x10), 1 - flags set for next jcc */
    SET_LO8(ebx, MEM8(0x7819D5));
    esi = MEM32(0x849ACC);
    if (CMP_EQ(MEM8(esp + 0x10), 1)) goto loc_0032E7DC; /* je: equal / zero */

loc_0032E798: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0032E7A0; /* je: equal / zero */

loc_0032E79C: ;
    if (TEST_NZ(esi, esi)) goto loc_0032E7DC; /* jne: not equal / not zero */

loc_0032E7A0: ;
    if (CMP_EQ(LO8(edx), 1)) goto loc_0032E7DC; /* je: equal / zero */

loc_0032E7A5: ;
    edx = MEM32(ecx + 0x568);
    if (CMP_NE(MEM8(edx + 0x500), 1)) goto loc_0032E7C4; /* jne: not equal / not zero */

loc_0032E7B4: ;
    eax = MEM32(ecx + 0x6A4);
    if (TEST_Z(eax, eax)) goto loc_0032E7C4; /* je: equal / zero */

loc_0032E7BE: ;
    if (CMP_EQ(MEM32(eax + 0x18), 0)) goto loc_0032E7DC; /* je: equal / zero */

loc_0032E7C4: ;
    if (CMP_A(MEM16(edx + 0x2C6), 0)) goto loc_0032E7DC; /* ja: above (unsigned >) */

loc_0032E7CE: ;
    PUSH32(esp, 0); sub_002F9090(); /* call 0x002F9090 */

loc_0032E7D3: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x11) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032E7E1; /* je: equal / zero */

loc_0032E7DC: ;
    MEM8(esp + 0x11) = 1;

loc_0032E7E1: ;
    if (CMP_EQ(MEM8(esp + 0x10), 1)) goto loc_0032E7FE; /* je: equal / zero */

loc_0032E7E8: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0032E7F0; /* je: equal / zero */

loc_0032E7EC: ;
    if (TEST_NZ(esi, esi)) goto loc_0032E7FE; /* jne: not equal / not zero */

loc_0032E7F0: ;
    PUSH32(esp, 0); sub_002F9090(); /* call 0x002F9090 */

loc_0032E7F5: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032E803; /* je: equal / zero */

loc_0032E7FE: ;
    MEM8(esp + 0x13) = 1;

loc_0032E803: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0032E80B; /* je: equal / zero */

loc_0032E807: ;
    if (TEST_NZ(esi, esi)) goto loc_0032E836; /* jne: not equal / not zero */

loc_0032E80B: ;
    SET_LO8(eax, MEM8(0x77A48C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E836; /* jne: not equal / not zero */

loc_0032E814: ;
    eax = MEM32(ecx + 0x568);
    SET_LO8(edx, MEM8(eax + 0x2BC));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0032E836; /* jne: not equal / not zero */

loc_0032E824: ;
    if (CMP_BE(LO16(ebp) & LO16(ebp), 0)) goto loc_0032E836; /* jbe: below or equal (unsigned <=) */

loc_0032E829: ;
    PUSH32(esp, 0); sub_002F9090(); /* call 0x002F9090 */

loc_0032E82E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E836; /* jne: not equal / not zero */

loc_0032E832: ;
    SET_LO8(edx, 0); /* xor self */
    goto loc_0032E838;

loc_0032E836: ;
    SET_LO8(edx, 1);

loc_0032E838: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0032E875; /* je: equal / zero */

loc_0032E842: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0032E875; /* je: equal / zero */

loc_0032E84C: ;
    eax = MEM32(eax + 0x280);
    if (TEST_Z(eax, eax)) goto loc_0032E875; /* je: equal / zero */

loc_0032E856: ;
    SET_LO8(ebx, MEM8(eax + 5));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0032E864; /* je: equal / zero */

loc_0032E85D: ;
    MEM8(esp + 0x12) = 1;
    goto loc_0032E87A;

loc_0032E864: ;
    (void)0; /* cmp MEM32(ecx + 0xA4), 0x667 - flags set for next jcc */
    MEM8(esp + 0x12) = (CMP_EQ(MEM32(ecx + 0xA4), 0x667)) ? 1 : 0; /* sete */
    goto loc_0032E87A;

loc_0032E875: ;
    MEM8(esp + 0x12) = 0;

loc_0032E87A: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    esi = MEM32(esp + 0x48);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032E8BA; /* je: equal / zero */

loc_0032E882: ;
    xmm3 = MEMF(0x7FA21C); /* movss */
    ecx = MEM32(esi + 0xF4);
    SET_LO8(eax, 0); /* xor self */
    xmm1 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_0004E620(); /* call 0x0004E620 */

loc_0032E89A: ;
    ecx = MEM32(esi + 0xF8);
    SET_LO8(eax, 0); /* xor self */
    xmm1 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_0004E620(); /* call 0x0004E620 */

loc_0032E8AA: ;
    ecx = MEM32(esi + 0xFC);
    SET_LO8(eax, 0); /* xor self */
    xmm1 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_0004E620(); /* call 0x0004E620 */

loc_0032E8BA: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032EAC7; /* jne: not equal / not zero */

loc_0032E8C6: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E902; /* jne: not equal / not zero */

loc_0032E8CE: ;
    eax = MEM32(esi + 0xCC);
    if (TEST_Z(eax, eax)) goto loc_0032E902; /* je: equal / zero */

loc_0032E8D8: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx + 0x568);
    SET_LO8(eax, MEM8(edx + 0x51C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E902; /* jne: not equal / not zero */

loc_0032E8EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_0032E550(); /* call 0x0032E550 */

loc_0032E8F6: ;
    eax = MEM32(edi + 0x34);
    esp = esp + 8;
    MEM32(esi + 0xE0) = eax;

loc_0032E902: ;
    eax = MEM32(edi + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_0032EAC7; /* jne: not equal / not zero */

loc_0032E90D: ;
    ecx = MEM32(edi + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = MEM32(ecx + edi + 0x54);
    (void)0; /* cmp eax, 0x13 - flags set for next jcc */
    ebx = ecx + edi + 0x40;
    if (CMP_EQ(eax, 0x13)) goto loc_0032EAC7; /* je: equal / zero */

loc_0032E924: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebx + 0xC) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E93A; /* jne: not equal / not zero */

loc_0032E930: ;
    eax = MEM32(esi + 0xD4);
    if (TEST_NZ(eax, eax)) goto loc_0032E960; /* jne: not equal / not zero */

loc_0032E93A: ;
    eax = MEM32(ebx + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0032E978; /* je: equal / zero */

loc_0032E941: ;
    edx = MEM32(ebx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    xmm0 = MEMF(edx + eax + 0xB0); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0032E978; /* jnp: not parity */

loc_0032E960: ;
    eax = edi;
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032E967: ;
    ecx = edi;
    PUSH32(esp, 0);
    MEM32(0x87B12C) = eax;
    PUSH32(esp, 0); sub_0032E3F0(); /* call 0x0032E3F0 */

loc_0032E975: ;
    esp = esp + 4;

loc_0032E978: ;
    ebp = MEM32(ebx + 0x1C);
    if (TEST_Z(ebp, ebp)) goto loc_0032EAC7; /* je: equal / zero */

loc_0032E983: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E9E6; /* jne: not equal / not zero */

loc_0032E98B: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(eax + 0xC8);
    if (TEST_Z(ecx, ecx)) goto loc_0032E9E6; /* je: equal / zero */

loc_0032E999: ;
    esi = MEM32(edi + 0xC);
    ecx = MEM32(esi + 0x568);
    edx = MEM32(0x7F9F60);
    eax = MEM32(ecx + 0x5E0);
    edx--;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(eax, edx)) goto loc_0032E9E6; /* je: equal / zero */

loc_0032E9B7: ;
    PUSH32(esp, 0); sub_002E5180(); /* call 0x002E5180 */

loc_0032E9BC: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E9E6; /* jne: not equal / not zero */

loc_0032E9C0: ;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_00267290(); /* call 0x00267290 */

loc_0032E9C9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032E9E6; /* jne: not equal / not zero */

loc_0032E9CD: ;
    edx = MEM32(ebx + 8);
    eax = edx;
    ecx = ebp;
    PUSH32(esp, 0); sub_003327A0(); /* call 0x003327A0 */

loc_0032E9D9: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032E9E6; /* je: equal / zero */

loc_0032E9DD: ;
    eax = edx;
    edx = ebp;
    PUSH32(esp, 0); sub_003319F0(); /* call 0x003319F0 */

loc_0032E9E6: ;
    eax = edi;
    PUSH32(esp, 0); sub_00330330(); /* call 0x00330330 */

loc_0032E9ED: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EA27; /* je: equal / zero */

loc_0032E9F1: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(edi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    edx = MEM32(ebx + 0x1C);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + edx + 0x14);
    edx = MEM32(0x74A4FC);
    PUSH32(esp, 0x66);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x74A4E4);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0032EA24: ;
    esp = esp + 0x10;

loc_0032EA27: ;
    esi = MEM32(edi + 0x284);
    if (TEST_Z(esi, esi)) goto loc_0032EA73; /* je: equal / zero */

loc_0032EA31: ;
    eax = eax | 0xFFFFFFFFu;
    ecx = edi;
    PUSH32(esp, 0); sub_0032FBD0(); /* call 0x0032FBD0 */

loc_0032EA3B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032EA66; /* jne: not equal / not zero */

loc_0032EA3F: ;
    eax = eax | 0xFFFFFFFFu;
    ecx = edi;
    PUSH32(esp, 0); sub_0032FC20(); /* call 0x0032FC20 */

loc_0032EA49: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032EA66; /* jne: not equal / not zero */

loc_0032EA4D: ;
    eax = edi;
    PUSH32(esp, 0); sub_00330330(); /* call 0x00330330 */

loc_0032EA54: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032EA66; /* jne: not equal / not zero */

loc_0032EA58: ;
    eax = eax | 0xFFFFFFFFu;
    ecx = edi;
    PUSH32(esp, 0); sub_0032FCC0(); /* call 0x0032FCC0 */

loc_0032EA62: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EA73; /* je: equal / zero */

loc_0032EA66: ;
    eax = MEM32(esi + 0x40);
    ecx = 1;
    PUSH32(esp, 0); sub_003328C0(); /* call 0x003328C0 */

loc_0032EA73: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 8);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    esi = esp + 0x1C;
    edx = ebp;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_00331950(); /* call 0x00331950 */

loc_0032EA93: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edx + 0x568);
    SET_LO16(ecx, MEM16(esp + 0x1C));
    MEM16(eax + 0x2DE) = LO16(ecx);
    esp = esp + 8;
    eax = esi;
    edx = edi;
    PUSH32(esp, 0); sub_0032F390(); /* call 0x0032F390 */

loc_0032EAB4: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edx + 0x568);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(eax + 0x2BF) = LO8(ecx);

loc_0032EAC7: ;
    eax = MEM32(edi + 0x284);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0032F1C9; /* je: equal / zero */

loc_0032EAD7: ;
    ebp = MEM32(esp + 0x48);
    ecx = MEM32(ebp + 0xF4);
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(ecx, ebx)) goto loc_0032ECA6; /* je: equal / zero */

loc_0032EB0F: ;
    edx = MEM32(eax + 0x3C);
    (void)0; /* cmp MEM32(edx), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(edx), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0032ECA6; /* jne: not equal / not zero */

loc_0032EB20: ;
    edx = MEM32(eax + 0x4C);
    (void)0; /* cmp MEM32(edx), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(edx), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0032ECA6; /* jne: not equal / not zero */

loc_0032EB31: ;
    edx = MEM32(eax + 0x3C);
    xmm0 = MEMF(edx + 0xC); /* movss */
    xmm6 = MEMF(0x648EA4); /* movss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0032ECAE; /* jbe: below or equal (unsigned <=) */

loc_0032EB4A: ;
    edx = MEM32(eax + 0x4C);
    xmm0 = MEMF(edx + 0xC); /* movss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0032ECAE; /* jbe: below or equal (unsigned <=) */

loc_0032EB5B: ;
    edx = MEM32(ecx);
    eax = MEM32(eax + 0x48);
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edx, 2)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    ecx = edx;
    PUSH32(esp, 0); sub_003328C0(); /* call 0x003328C0 */

loc_0032EB74: ;
    eax = MEM32(ebp + 0xF4);
    if (CMP_NE(MEM32(eax), 3)) goto loc_0032EB82; /* jne: not equal / not zero */

loc_0032EB7F: ;
    MEM8(eax + 0xB) = LO8(ebx);

loc_0032EB82: ;
    eax = MEM32(edi + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0032ECAE; /* je: equal / zero */

loc_0032EB90: ;
    eax = MEM32(eax + 0x48);
    (void)0; /* cmp MEM32(eax), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 1)) ? 1 : 0); /* sete */
    if (CMP_NE(LO8(eax), 1)) goto loc_0032ECAE; /* jne: not equal / not zero */

loc_0032EBA1: ;
    SET_LO8(eax, MEM8(edi + 0x40));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EBB9; /* je: equal / zero */

loc_0032EBA8: ;
    ebx = 1;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x14) = ebx;

loc_0032EBB9: ;
    SET_LO8(eax, MEM8(edi + 0x78));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EBCD; /* je: equal / zero */

loc_0032EBC0: ;
    MEM32(esp + ebx * 4 + 0x24) = 1;
    ebx++;
    MEM32(esp + 0x14) = ebx;

loc_0032EBCD: ;
    SET_LO8(eax, MEM8(edi + 0xB0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EBE4; /* je: equal / zero */

loc_0032EBD7: ;
    MEM32(esp + ebx * 4 + 0x24) = 2;
    ebx++;
    MEM32(esp + 0x14) = ebx;

loc_0032EBE4: ;
    SET_LO8(eax, MEM8(edi + 0xE8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EBFB; /* je: equal / zero */

loc_0032EBEE: ;
    MEM32(esp + ebx * 4 + 0x24) = 3;
    ebx++;
    MEM32(esp + 0x14) = ebx;

loc_0032EBFB: ;
    SET_LO8(eax, MEM8(edi + 0x120));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EC12; /* je: equal / zero */

loc_0032EC05: ;
    MEM32(esp + ebx * 4 + 0x24) = 4;
    ebx++;
    MEM32(esp + 0x14) = ebx;

loc_0032EC12: ;
    SET_LO8(eax, MEM8(edi + 0x158));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EC29; /* je: equal / zero */

loc_0032EC1C: ;
    MEM32(esp + ebx * 4 + 0x24) = 5;
    ebx++;
    MEM32(esp + 0x14) = ebx;

loc_0032EC29: ;
    SET_LO8(eax, MEM8(edi + 0x190));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EC40; /* je: equal / zero */

loc_0032EC33: ;
    MEM32(esp + ebx * 4 + 0x24) = 6;
    ebx++;
    MEM32(esp + 0x14) = ebx;

loc_0032EC40: ;
    SET_LO8(eax, MEM8(edi + 0x1C8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EC57; /* je: equal / zero */

loc_0032EC4A: ;
    MEM32(esp + ebx * 4 + 0x24) = 7;
    ebx++;
    MEM32(esp + 0x14) = ebx;

loc_0032EC57: ;
    xmm0 = (float)(int32_t)MEM32(ebp + 0xF0); /* cvtsi2ss */
    esi = ebp + 0xE0;
    PUSH32(esp, esi);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0xEC); /* cvtsi2ss */
    edx = ebx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0004E730(); /* call 0x0004E730 */

loc_0032EC83: ;
    ecx = MEM32(esi);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + ecx * 4 + 0x30);
    MEMF(edi + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    esp = esp + 0xC;
    MEM32(edi + 0x34) = edx;
    MEMF(edi + 0x24) = xmm0; /* movss */
    goto loc_0032ECAE;

loc_0032ECA6: ;
    xmm6 = MEMF(0x648EA4); /* movss */

loc_0032ECAE: ;
    eax = MEM32(edi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0032ECB9; /* je: equal / zero */

loc_0032ECB5: ;
    esi = 0; /* xor self */
    goto loc_0032ECC3;

loc_0032ECB9: ;
    eax = MEM32(edi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esi = eax + edi + 0x40;

loc_0032ECC3: ;
    edx = MEM32(ebp + 0xF8);
    if (TEST_Z(edx, edx)) goto loc_0032EF5B; /* je: equal / zero */

loc_0032ECD1: ;
    eax = MEM32(edi + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0032ED2B; /* je: equal / zero */

loc_0032ECDB: ;
    ecx = MEM32(eax + 0x48);
    (void)0; /* cmp MEM32(ecx), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ecx), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032EF5B; /* jne: not equal / not zero */

loc_0032ECEC: ;
    if (TEST_Z(eax, eax)) goto loc_0032ED2B; /* je: equal / zero */

loc_0032ECF0: ;
    ecx = MEM32(eax + 0x3C);
    (void)0; /* cmp MEM32(ecx), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ecx), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032EF5B; /* jne: not equal / not zero */

loc_0032ED01: ;
    if (TEST_Z(eax, eax)) goto loc_0032ED2B; /* je: equal / zero */

loc_0032ED05: ;
    ecx = MEM32(eax + 0x48);
    xmm0 = MEMF(ecx + 0xC); /* movss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0032EF5B; /* jbe: below or equal (unsigned <=) */

loc_0032ED16: ;
    if (TEST_Z(eax, eax)) goto loc_0032ED2B; /* je: equal / zero */

loc_0032ED1A: ;
    ecx = MEM32(eax + 0x3C);
    xmm0 = MEMF(ecx + 0xC); /* movss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0032EF5B; /* jbe: below or equal (unsigned <=) */

loc_0032ED2B: ;
    ecx = MEM32(esi + 0x1C);
    if (CMP_LE(MEM32(ecx + 0x10), 1)) goto loc_0032EF5B; /* jle: less or equal (signed <=) */

loc_0032ED38: ;
    (void)0; /* cmp MEM32(edx), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(edx), 2)) ? 1 : 0); /* sete */
    if (TEST_Z(eax, eax)) goto loc_0032ED53; /* je: equal / zero */

loc_0032ED42: ;
    eax = MEM32(eax + 0x4C);
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    ecx = edx;
    PUSH32(esp, 0); sub_003328C0(); /* call 0x003328C0 */

loc_0032ED53: ;
    eax = MEM32(ebp + 0xF8);
    if (CMP_NE(MEM32(eax), 3)) goto loc_0032ED62; /* jne: not equal / not zero */

loc_0032ED5E: ;
    MEM8(eax + 0xB) = 0;

loc_0032ED62: ;
    eax = MEM32(edi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esi = eax + edi + 0x40;
    eax = MEM32(edi + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0032ED83; /* je: equal / zero */

loc_0032ED76: ;
    ecx = MEM32(eax + 0x4C);
    (void)0; /* cmp MEM32(ecx), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ecx), 1)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032ED92; /* je: equal / zero */

loc_0032ED83: ;
    edx = MEM32(ebp + 0xF8);
    if (CMP_NE(MEM32(edx), 3)) goto loc_0032EE56; /* jne: not equal / not zero */

loc_0032ED92: ;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0032EE27; /* je: equal / zero */

loc_0032ED9B: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0032EE27; /* jle: less or equal (signed <=) */

loc_0032EDAB: ;
    ebx = 0; /* xor self */
    /* nop */

loc_0032EDB0: ;
    eax = MEM32(esi + 0x1C);
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032EE12; /* jne: not equal / not zero */

loc_0032EDBA: ;
    SET_LO8(ecx, MEM8(eax + ebx + 0x81));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032EDCC; /* je: equal / zero */

loc_0032EDC5: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032EE12; /* je: equal / zero */

loc_0032EDCC: ;
    if (CMP_NE(edx, MEM32(esi + 8))) goto loc_0032EE05; /* jne: not equal / not zero */

loc_0032EDD1: ;
    eax = MEM32(edi + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0032EE05; /* je: equal / zero */

loc_0032EDDB: ;
    ecx = MEM32(eax + 0x4C);
    (void)0; /* cmp MEM32(ecx), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ecx), 1)) ? 1 : 0); /* sete */
    if (CMP_NE(LO8(ecx), 1)) goto loc_0032EE05; /* jne: not equal / not zero */

loc_0032EDE9: ;
    if (TEST_Z(eax, eax)) goto loc_0032EDFB; /* je: equal / zero */

loc_0032EDED: ;
    eax = MEM32(eax + 0x4C);
    (void)0; /* cmp MEM32(eax + 4), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax + 4), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032EE05; /* jne: not equal / not zero */

loc_0032EDFB: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ebp + 0xE4) = ecx;

loc_0032EE05: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + eax * 4 + 0x24) = edx;
    eax++;
    MEM32(esp + 0x14) = eax;

loc_0032EE12: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x10);
    edx++;
    ebx = ebx + 0xD8;
    if (CMP_L(edx, ecx)) goto loc_0032EDB0; /* jl: less (signed <) */

loc_0032EE23: ;
    ebx = MEM32(esp + 0x14);

loc_0032EE27: ;
    xmm0 = (float)(int32_t)MEM32(ebp + 0xF0); /* cvtsi2ss */
    ecx = ebp + 0xE4;
    PUSH32(esp, ecx);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0xEC); /* cvtsi2ss */
    edx = ebx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0004E730(); /* call 0x0004E730 */

loc_0032EE53: ;
    esp = esp + 0xC;

loc_0032EE56: ;
    eax = MEM32(ebp + 0xF8);
    if (CMP_NE(MEM32(eax), 3)) goto loc_0032EF5B; /* jne: not equal / not zero */

loc_0032EE65: ;
    if (CMP_NE(MEM32(eax + 4), 2)) goto loc_0032EF5B; /* jne: not equal / not zero */

loc_0032EE6F: ;
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(edi + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = edi;
    MEMF(edi + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0032FA90(); /* call 0x0032FA90 */

loc_0032EE8B: ;
    if (CMP_EQ(MEM32(ebp + 0xE4), eax)) goto loc_0032EF3E; /* je: equal / zero */

loc_0032EE97: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    xmm1 = MEMF(edx + eax + 0xB0); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0032EF3E; /* jp: parity */

loc_0032EEB9: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032EF13; /* jne: not equal / not zero */

loc_0032EEC0: ;
    MEM8(esi + 0xC) = 1;
    ecx = MEM32(ebp + 0xE4);
    edx = MEM32(esp + ecx * 4 + 0x24);
    eax = edi;
    PUSH32(esp, 0); sub_0032FAB0(); /* call 0x0032FAB0 */

loc_0032EED5: ;
    eax = MEM32(esi + 8);
    edx = MEM32(edi + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + ecx + 0x14);
    ecx = MEM32(0x74A4FC);
    PUSH32(esp, 0x66);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x74A4E4);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0032EF08: ;
    xmm6 = MEMF(0x648EA4); /* movss */
    esp = esp + 0x10;

loc_0032EF13: ;
    eax = MEM32(edi + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0032EF3E; /* je: equal / zero */

loc_0032EF1D: ;
    edx = MEM32(eax + 0x48);
    (void)0; /* cmp MEM32(edx), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(edx), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032EF3E; /* jne: not equal / not zero */

loc_0032EF2A: ;
    ecx = MEM32(eax + 0x4C);
    (void)0; /* cmp MEM32(ecx), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ecx), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032EF3E; /* jne: not equal / not zero */

loc_0032EF37: ;
    edx = MEM32(eax + 0x44);
    MEM8(edx + 8) = 1;

loc_0032EF3E: ;
    eax = MEM32(ebp + 0xF8);
    ecx = MEM32(eax);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEM8(eax + 9) = 0;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;

loc_0032EF5B: ;
    edx = MEM32(ebp + 0xFC);
    if (TEST_Z(edx, edx)) goto loc_0032F1C9; /* je: equal / zero */

loc_0032EF69: ;
    eax = MEM32(edi + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0032EFC3; /* je: equal / zero */

loc_0032EF73: ;
    ecx = MEM32(eax + 0x48);
    (void)0; /* cmp MEM32(ecx), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ecx), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032F1C9; /* jne: not equal / not zero */

loc_0032EF84: ;
    if (TEST_Z(eax, eax)) goto loc_0032EFC3; /* je: equal / zero */

loc_0032EF88: ;
    ecx = MEM32(eax + 0x4C);
    (void)0; /* cmp MEM32(ecx), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ecx), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032F1C9; /* jne: not equal / not zero */

loc_0032EF99: ;
    if (TEST_Z(eax, eax)) goto loc_0032EFC3; /* je: equal / zero */

loc_0032EF9D: ;
    ecx = MEM32(eax + 0x48);
    xmm0 = MEMF(ecx + 0xC); /* movss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0032F1C9; /* jbe: below or equal (unsigned <=) */

loc_0032EFAE: ;
    if (TEST_Z(eax, eax)) goto loc_0032EFC3; /* je: equal / zero */

loc_0032EFB2: ;
    ecx = MEM32(eax + 0x4C);
    xmm0 = MEMF(ecx + 0xC); /* movss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0032F1C9; /* jbe: below or equal (unsigned <=) */

loc_0032EFC3: ;
    (void)0; /* cmp MEM32(edx), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(edx), 2)) ? 1 : 0); /* sete */
    if (TEST_Z(eax, eax)) goto loc_0032EFDE; /* je: equal / zero */

loc_0032EFCD: ;
    eax = MEM32(eax + 0x3C);
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    ecx = edx;
    PUSH32(esp, 0); sub_003328C0(); /* call 0x003328C0 */

loc_0032EFDE: ;
    eax = MEM32(ebp + 0xFC);
    if (CMP_NE(MEM32(eax), 3)) goto loc_0032EFED; /* jne: not equal / not zero */

loc_0032EFE9: ;
    MEM8(eax + 0xB) = 0;

loc_0032EFED: ;
    eax = MEM32(edi + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0032F0C3; /* je: equal / zero */

loc_0032EFFB: ;
    eax = MEM32(eax + 0x3C);
    (void)0; /* cmp MEM32(eax), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 1)) ? 1 : 0); /* sete */
    if (CMP_NE(LO8(eax), 1)) goto loc_0032F0C3; /* jne: not equal / not zero */

loc_0032F00C: ;
    (void)0; /* cmp MEM8(edi + 0x200), 1 - flags set for next jcc */
    eax = 0xA;
    if (CMP_NE(MEM8(edi + 0x200), 1)) goto loc_0032F02B; /* jne: not equal / not zero */

loc_0032F01A: ;
    if (CMP_EQ(MEM32(edi + 0x214), eax)) goto loc_0032F02B; /* je: equal / zero */

loc_0032F022: ;
    MEM32(esp + ebx * 4 + 0x24) = 0;
    ebx++;

loc_0032F02B: ;
    if (CMP_NE(MEM8(edi + 0x220), 1)) goto loc_0032F045; /* jne: not equal / not zero */

loc_0032F034: ;
    if (CMP_EQ(MEM32(edi + 0x234), eax)) goto loc_0032F045; /* je: equal / zero */

loc_0032F03C: ;
    MEM32(esp + ebx * 4 + 0x24) = 1;
    ebx++;

loc_0032F045: ;
    if (CMP_NE(MEM8(edi + 0x240), 1)) goto loc_0032F05F; /* jne: not equal / not zero */

loc_0032F04E: ;
    if (CMP_EQ(MEM32(edi + 0x254), eax)) goto loc_0032F05F; /* je: equal / zero */

loc_0032F056: ;
    MEM32(esp + ebx * 4 + 0x24) = 2;
    ebx++;

loc_0032F05F: ;
    if (CMP_NE(MEM8(edi + 0x260), 1)) goto loc_0032F079; /* jne: not equal / not zero */

loc_0032F068: ;
    if (CMP_EQ(MEM32(edi + 0x274), eax)) goto loc_0032F079; /* je: equal / zero */

loc_0032F070: ;
    MEM32(esp + ebx * 4 + 0x24) = 3;
    ebx++;

loc_0032F079: ;
    xmm0 = (float)(int32_t)MEM32(ebp + 0xF0); /* cvtsi2ss */
    esi = ebp + 0xE8;
    PUSH32(esp, esi);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0xEC); /* cvtsi2ss */
    edx = ebx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0004E730(); /* call 0x0004E730 */

loc_0032F0A5: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + ecx * 4 + 0x30);
    xmm0 = MEMF(0x649228); /* movss */
    esp = esp + 0xC;
    MEM32(edi + 0x3C) = edx;
    MEMF(edi + 0x28) = xmm0; /* movss */
    goto loc_0032F1C9;

loc_0032F0C3: ;
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = ebx;
    ebp = edi + 0x21C;
    /* nop */

loc_0032F0D0: ;
    if (CMP_EQ(MEM32(ebp + -8), 0xA)) goto loc_0032F1B8; /* je: equal / zero */

loc_0032F0DA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(ebp);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032F199; /* jne: not equal / not zero */

loc_0032F0E9: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(eax + 0xDC);
    if (TEST_Z(ecx, ecx)) goto loc_0032F199; /* je: equal / zero */

loc_0032F0FB: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032F199; /* jne: not equal / not zero */

loc_0032F107: ;
    eax = MEM32(edi + 0xC);
    if (CMP_BE(MEM16(eax + 0x3AE), 0)) goto loc_0032F199; /* jbe: below or equal (unsigned <=) */

loc_0032F118: ;
    SET_LO8(ecx, MEM8(esp + 0x12));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032F126; /* je: equal / zero */

loc_0032F120: ;
    if (CMP_NE(MEM32(esi + 0x1C), 5)) goto loc_0032F199; /* jne: not equal / not zero */

loc_0032F126: ;
    SET_LO8(ecx, MEM8(ebp + -28));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032F1B8; /* je: equal / zero */

loc_0032F131: ;
    if (CMP_NE(ebx, MEM32(edi + 0x3C))) goto loc_0032F18F; /* jne: not equal / not zero */

loc_0032F136: ;
    SET_LO8(ecx, MEM8(esi + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032F18F; /* jne: not equal / not zero */

loc_0032F13D: ;
    if (CMP_NE(MEM8(esi + 5), 1)) goto loc_0032F1B8; /* jne: not equal / not zero */

loc_0032F143: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0032F14B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032F1B8; /* je: equal / zero */

loc_0032F14F: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0); sub_003301B0(); /* call 0x003301B0 */

loc_0032F157: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032F1B8; /* je: equal / zero */

loc_0032F15B: ;
    eax = esi;
    PUSH32(esp, 0); sub_00330900(); /* call 0x00330900 */

loc_0032F162: ;
    eax = MEM32(edi + 0x3C);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax << 5;
    MEMF(edi + 0x28) = xmm0; /* movss */
    ebx = MEM32(eax + edi + 0x214);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00021780(); /* call 0x00021780 */

loc_0032F186: ;
    ebx = MEM32(esp + 0x1C);
    esp = esp + 8;
    goto loc_0032F1B8;

loc_0032F18F: ;
    if (CMP_NE(MEM8(esi + 4), 1)) goto loc_0032F1B8; /* jne: not equal / not zero */

loc_0032F195: ;
    PUSH32(esp, 0);
    goto loc_0032F1B1;

loc_0032F199: ;
    if (TEST_Z(esi, esi)) goto loc_0032F1B8; /* je: equal / zero */

loc_0032F19D: ;
    if (CMP_NE(MEM8(esi + 4), 1)) goto loc_0032F1B8; /* jne: not equal / not zero */

loc_0032F1A3: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0); sub_003301B0(); /* call 0x003301B0 */

loc_0032F1AB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032F1B8; /* jne: not equal / not zero */

loc_0032F1AF: ;
    PUSH32(esp, 1);

loc_0032F1B1: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00330920(); /* call 0x00330920 */

loc_0032F1B8: ;
    ebx++;
    ebp = ebp + 0x20;
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(ebx, 4)) goto loc_0032F0D0; /* jl: less (signed <) */

loc_0032F1C9: ;
    ebx = MEM32(esp + 0x54);
    ebp = MEM32(esp + 0x50);
    esi = edi + 0x5C;
    MEM32(esp + 0x18) = 8;
    /* nop */

loc_0032F1E0: ;
    SET_LO8(eax, MEM8(esi + -28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032F23D; /* je: equal / zero */

loc_0032F1E7: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_0032F23D; /* je: equal / zero */

loc_0032F1ED: ;
    SET_LO8(eax, MEM8(ecx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032F23D; /* jne: not equal / not zero */

loc_0032F1F4: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032F20C; /* jne: not equal / not zero */

loc_0032F1FC: ;
    edx = MEM32(esp + 0x48);
    eax = MEM32(edx + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x14) = 1;
    if (TEST_NZ(eax, eax)) goto loc_0032F211; /* jne: not equal / not zero */

loc_0032F20C: ;
    MEM8(esp + 0x14) = 0;

loc_0032F211: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(eax + 0x568);
    if (CMP_EQ(MEM8(edx + 0x309), 0)) goto loc_0032F228; /* je: equal / zero */

loc_0032F223: ;
    MEM8(esp + 0x14) = 1;

loc_0032F228: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00331D40(); /* call 0x00331D40 */

loc_0032F23A: ;
    esp = esp + 0x14;

loc_0032F23D: ;
    eax = MEM32(esp + 0x18);
    esi = esi + 0x38;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_0032F1E0; /* jne: not equal / not zero */

loc_0032F24B: ;
    eax = MEM32(edi + 0x280);
    edx = eax;
    esi = MEM32(edx);
    ecx = eax + 0xC;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edx;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esi = edi + 0x21C;
    ebx = 4;
    ebp = 0xA;

loc_0032F280: ;
    SET_LO8(eax, MEM8(esi + -28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0032F2A8; /* je: equal / zero */

loc_0032F287: ;
    if (CMP_EQ(MEM32(esi + -8), ebp)) goto loc_0032F2A8; /* je: equal / zero */

loc_0032F28C: ;
    ecx = MEM32(esi);
    eax = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0032F297: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(edi + 0x280);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(ecx + edx) = LO8(eax);

loc_0032F2A8: ;
    esi = esi + 0x20;
    ebx--;
    if ((ebx != 0)) goto loc_0032F280; /* jne: not equal / not zero */

loc_0032F2AE: ;
    edi = MEM32(edi + 0x284);
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(edi, edi)) goto loc_0032F30D; /* je: equal / zero */

loc_0032F2B9: ;
    ecx = MEM32(edi + 0x3C);
    (void)0; /* cmp MEM32(ecx), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ecx), 1)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032F2E4; /* je: equal / zero */

loc_0032F2C6: ;
    edx = MEM32(edi + 0x48);
    (void)0; /* cmp MEM32(edx), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(edx), 1)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032F2E4; /* je: equal / zero */

loc_0032F2D3: ;
    eax = MEM32(edi + 0x4C);
    (void)0; /* cmp MEM32(eax), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 1)) ? 1 : 0); /* sete */
    if (CMP_EQ(LO8(eax), 1)) goto loc_0032F2E4; /* je: equal / zero */

loc_0032F2E0: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_0032F2E6;

loc_0032F2E4: ;
    SET_LO8(eax, 1);

loc_0032F2E6: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(ecx + 0x120);
    if (TEST_Z(edx, edx)) goto loc_0032F2FC; /* je: equal / zero */

loc_0032F2F4: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032F2FC; /* jne: not equal / not zero */

loc_0032F2F8: ;
    SET_LO8(eax, 1);
    goto loc_0032F2FE;

loc_0032F2FC: ;
    SET_LO8(eax, 0); /* xor self */

loc_0032F2FE: ;
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(edi + 0x44);
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, 0); sub_003328C0(); /* call 0x003328C0 */

loc_0032F30D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F320
 * Original: 0x0032F320 - 0x0032F337 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F320(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032F320: ;
    eax = 0; /* xor self */
    ecx = ecx + 0x58;

loc_0032F325: ;
    if (CMP_EQ(MEM32(ecx), 8)) goto loc_0032F336; /* je: equal / zero */

loc_0032F32A: ;
    eax++;
    ecx = ecx + 0x38;
    if (CMP_L(eax, 8)) goto loc_0032F325; /* jl: less (signed <) */

loc_0032F333: ;
    eax = eax | 0xFFFFFFFFu;

loc_0032F336: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F340
 * Original: 0x0032F340 - 0x0032F373 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F340(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032F340: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0032F354; /* jne: not equal / not zero */

loc_0032F34A: ;
    eax = MEM32(ecx + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_0032F35F; /* jne: not equal / not zero */

loc_0032F351: ;
    eax = MEM32(ecx + 0x34);

loc_0032F354: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = eax + ecx + 0x40;
    if (TEST_NZ(ecx, ecx)) { sub_0032F373(); return; } /* jne: not equal / not zero */

loc_0032F35F: ;
    MEM32(esi) = 0;
    MEM32(edi) = 0;
    MEM32(edx) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F390
 * Original: 0x0032F390 - 0x0032F39D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F390(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032F390: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    ecx = edx + 0x58;
    g_seh_ebp = ebp; sub_0032F3A0(); return; /* tail jmp 0x0032F3A0 */

}

/**
 * sub_0032F3F0
 * Original: 0x0032F3F0 - 0x0032F413 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032F3F0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(ebx, 0xFFFFFFFFu)) { sub_0032F413(); return; } /* jne: not equal / not zero */

loc_0032F3FC: ;
    eax = MEM32(edi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0032F407; /* je: equal / zero */

loc_0032F403: ;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0032F41A(); return; /* tail jmp 0x0032F41A */

loc_0032F407: ;
    eax = MEM32(edi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ebx = eax + edi + 0x40;
    g_seh_ebp = ebp; sub_0032F41A(); return; /* tail jmp 0x0032F41A */

}

/**
 * sub_0032F4C0
 * Original: 0x0032F4C0 - 0x0032F55D (157 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F4C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032F4C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_0032F4CC; /* jne: not equal / not zero */

loc_0032F4C9: ;
    edi = MEM32(eax + 8);

loc_0032F4CC: ;
    if (CMP_NE(MEM32(eax + 0x18), 8)) goto loc_0032F523; /* jne: not equal / not zero */

loc_0032F4D2: ;
    edx = MEM32(eax + 0x1C);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    ecx = MEM32(eax + edx + 0x14);
    PUSH32(esp, 0); sub_00332740(); /* call 0x00332740 */

loc_0032F4E6: ;
    ecx = MEM32(ebx + 0xC);
    esi = eax;
    eax = MEM32(ecx + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x5F8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032F50B; /* jne: not equal / not zero */

loc_0032F4FB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_0032F504: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032F532; /* jne: not equal / not zero */

loc_0032F50B: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0xA0);
    if (TEST_NZ(eax, eax)) goto loc_0032F532; /* jne: not equal / not zero */

loc_0032F51E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032F523: ;
    eax = MEM32(eax + 0x14);
    if (CMP_GE(eax, 0x4C)) goto loc_0032F51E; /* jge: greater or equal (signed >=) */

loc_0032F52B: ;
    esi = MEM32(eax * 8 + 0x74B2F0);

loc_0032F532: ;
    if (CMP_NE(esi, 0x5D)) goto loc_0032F558; /* jne: not equal / not zero */

loc_0032F537: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x3F4);
    if (CMP_NE(MEM32(eax + 8), 1)) goto loc_0032F558; /* jne: not equal / not zero */

loc_0032F54C: ;
    ecx = MEM32(eax + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = 0x5E;
    if (TEST_Z(ecx, ecx)) goto loc_0032F55A; /* je: equal / zero */

loc_0032F558: ;
    eax = esi;

loc_0032F55A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F560
 * Original: 0x0032F560 - 0x0032F56E (14 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F560(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032F560: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x30);
    if (TEST_Z(eax, eax)) { sub_0032F56E(); return; } /* je: equal / zero */

loc_0032F56A: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F590
 * Original: 0x0032F590 - 0x0032F5D0 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F590(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032F590: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) { sub_0032F5D0(); return; } /* jne: not equal / not zero */

loc_0032F597: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + eax + 0x40;
    if (TEST_Z(ecx, ecx)) { sub_0032F5D0(); return; } /* je: equal / zero */

loc_0032F5A5: ;
    eax = MEM32(ecx + 0x1C);
    if (TEST_Z(eax, eax)) { sub_0032F5D0(); return; } /* je: equal / zero */

loc_0032F5AC: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 4));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_0032F5D0(); return; } /* jne: not equal / not zero */

loc_0032F5B5: ;
    ecx = MEM32(ecx + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    eax = ecx + eax + 0x14;
    ecx = MEM32(eax + 0x70);
    MEM32(esi) = ecx;
    eax = MEM32(eax + 0x84);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F5E0
 * Original: 0x0032F5E0 - 0x0032F64A (106 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F5E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032F5E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM32(edi) = 0;
    eax = eax + 0x5C;
    MEM32(esp + 4) = 8;
    PUSH32(esp, esi);

loc_0032F5F4: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032F603; /* je: equal / zero */

loc_0032F5FC: ;
    SET_LO8(ecx, MEM8(eax + -28));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032F638; /* je: equal / zero */

loc_0032F603: ;
    if (CMP_NE(MEM32(eax + -4), 8)) goto loc_0032F638; /* jne: not equal / not zero */

loc_0032F609: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x10);
    esi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0032F638; /* jle: less or equal (signed <=) */

loc_0032F614: ;
    edx = 0; /* xor self */

loc_0032F616: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + edx + 0x14);
    if (CMP_EQ(ecx, 0x3E)) goto loc_0032F628; /* je: equal / zero */

loc_0032F621: ;
    ebp = MEM32(edi);
    MEM32(ebx + ebp * 4) = ecx;
    MEM32(edi) = MEM32(edi) + 1;

loc_0032F628: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 0x10);
    esi++;
    edx = edx + 0xD8;
    if (CMP_L(esi, ebp)) goto loc_0032F616; /* jl: less (signed <) */

loc_0032F638: ;
    ecx = MEM32(esp + 8);
    eax = eax + 0x38;
    ecx--;
    MEM32(esp + 8) = ecx;
    if ((ecx != 0)) goto loc_0032F5F4; /* jne: not equal / not zero */

loc_0032F646: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032F650
 * Original: 0x0032F650 - 0x0032F864 (532 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032F650: ;
    esp = esp - 0x8C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    if (TEST_Z(ebp, ebp)) goto loc_0032F85C; /* je: equal / zero */

loc_0032F666: ;
    eax = MEM32(ebp + 0xC);
    (void)0; /* cmp MEM32(eax + 0x64), 0x42 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(MEM32(eax + 0x64), 0x42)) goto loc_0032F85C; /* je: equal / zero */

loc_0032F677: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = esp + 0x28;
    PUSH32(esp, 0); sub_0007CB20(); /* call 0x0007CB20 */

loc_0032F682: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x6BD92C);
    SET_LO8(ecx, MEM8(eax + 0x33));
    esp = esp + 4;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032F6A0; /* jne: not equal / not zero */

loc_0032F695: ;
    SET_LO8(ecx, MEM8(eax + 0x34));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0032F6A0; /* jne: not equal / not zero */

loc_0032F69C: ;
    SET_LO8(edx, 1);
    goto loc_0032F6A2;

loc_0032F6A0: ;
    SET_LO8(edx, 0); /* xor self */

loc_0032F6A2: ;
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    MEM32(esp + 0xC) = edi;
    ecx = 0; /* xor self */
    eax = ebp + 0x58;
    esi = 0x1A;
    PUSH32(esp, ebx);

loc_0032F6B4: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0032F6BD; /* je: equal / zero */

loc_0032F6B8: ;
    if (CMP_EQ(MEM32(eax + -4), esi)) goto loc_0032F6CF; /* je: equal / zero */

loc_0032F6BD: ;
    if (CMP_EQ(MEM32(eax), 8)) goto loc_0032F6CF; /* je: equal / zero */

loc_0032F6C2: ;
    ebx = eax + -24;
    MEM32(esp + edi * 4 + 0x7C) = ebx;
    edi++;
    if (CMP_EQ(edi, 8)) goto loc_0032F6D8; /* je: equal / zero */

loc_0032F6CF: ;
    ecx++;
    eax = eax + 0x38;
    if (CMP_L(ecx, 8)) goto loc_0032F6B4; /* jl: less (signed <) */

loc_0032F6D8: ;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0);
    ebx = esp + 0x24;
    edi = esp + 0x1C;
    eax = ebp;
    PUSH32(esp, 0); sub_0032F5E0(); /* call 0x0032F5E0 */

loc_0032F6ED: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0032F7C1; /* jle: less or equal (signed <=) */

loc_0032F6FE: ;
    edi = edi;

loc_0032F700: ;
    ebx = MEM32(esp + ebp * 4 + 0x7C);
    eax = MEM32(ebx + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0032F7B4; /* je: equal / zero */

loc_0032F70F: ;
    SET_LO8(ecx, MEM8(ebx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032F71A; /* je: equal / zero */

loc_0032F715: ;
    edx = MEM32(eax + 0x28);
    goto loc_0032F71C;

loc_0032F71A: ;
    edx = 0; /* xor self */

loc_0032F71C: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0032F7B4; /* je: equal / zero */

loc_0032F724: ;
    eax = MEM32(eax + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0032F7B4; /* je: equal / zero */

loc_0032F72F: ;
    if (TEST_Z(edx, edx)) goto loc_0032F7B4; /* je: equal / zero */

loc_0032F737: ;
    edi = MEM32(eax + 0x58);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0032F7B4; /* je: equal / zero */

loc_0032F73F: ;
    ecx = MEM32(esp + 0x14);
    esi = esi | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0032F771; /* jle: less or equal (signed <=) */

loc_0032F74E: ;
    edi = edi;

loc_0032F750: ;
    ecx = MEM32(esp + eax * 4 + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_0032F760; /* je: equal / zero */

loc_0032F758: ;
    ecx = ZX16(MEM16(ecx + 0xA));
    if (CMP_EQ(ecx, edi)) goto loc_0032F76B; /* je: equal / zero */

loc_0032F760: ;
    ecx = MEM32(esp + 0x14);
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0032F750; /* jl: less (signed <) */

loc_0032F769: ;
    goto loc_0032F771;

loc_0032F76B: ;
    edx = MEM32(esp + eax * 4 + 0x2C);
    esi = eax;

loc_0032F771: ;
    SET_LO8(eax, MEM8(esp + 0xA4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0032F798; /* jne: not equal / not zero */

loc_0032F77C: ;
    if (TEST_NZ(edx, edx)) goto loc_0032F7B4; /* jne: not equal / not zero */

loc_0032F780: ;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002B37D0(); /* call 0x002B37D0 */

loc_0032F793: ;
    esp = esp + 0x18;
    goto loc_0032F7B4;

loc_0032F798: ;
    if (TEST_Z(edx, edx)) goto loc_0032F7B4; /* je: equal / zero */

loc_0032F79C: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00076AD0(); /* call 0x00076AD0 */

loc_0032F7A4: ;
    esp = esp + 8;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0032F7B4; /* je: equal / zero */

loc_0032F7AC: ;
    MEM32(esp + esi * 4 + 0x2C) = 0;

loc_0032F7B4: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_0032F700; /* jl: less (signed <) */

loc_0032F7C1: ;
    eax = MEM32(esp + 0x18);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0032F859; /* jle: less or equal (signed <=) */

loc_0032F7CF: ;
    ebx = 0; /* xor self */

loc_0032F7D1: ;
    edx = MEM32(esp + 0xA0);
    eax = 0; /* xor self */
    ecx = edx + 0x58;
    /* nop */

loc_0032F7E0: ;
    if (CMP_EQ(MEM32(ecx), 8)) goto loc_0032F7F1; /* je: equal / zero */

loc_0032F7E5: ;
    eax++;
    ecx = ecx + 0x38;
    if (CMP_L(eax, 8)) goto loc_0032F7E0; /* jl: less (signed <) */

loc_0032F7EE: ;
    eax = eax | 0xFFFFFFFFu;

loc_0032F7F1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esi = eax + edx + 0x40;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + ebx + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0032F846; /* je: equal / zero */

loc_0032F803: ;
    edx = MEM32(eax + 0x58);
    ebp = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0032F82F; /* jle: less or equal (signed <=) */

loc_0032F810: ;
    ecx = MEM32(esp + eax * 4 + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_0032F820; /* je: equal / zero */

loc_0032F818: ;
    ecx = ZX16(MEM16(ecx + 0xA));
    if (CMP_EQ(ecx, edx)) goto loc_0032F827; /* je: equal / zero */

loc_0032F820: ;
    eax++;
    if (CMP_L(eax, ebp)) goto loc_0032F810; /* jl: less (signed <) */

loc_0032F825: ;
    goto loc_0032F82F;

loc_0032F827: ;
    ecx = MEM32(esp + eax * 4 + 0x2C);
    if (TEST_NZ(ecx, ecx)) goto loc_0032F846; /* jne: not equal / not zero */

loc_0032F82F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002B37D0(); /* call 0x002B37D0 */

loc_0032F843: ;
    esp = esp + 0x18;

loc_0032F846: ;
    eax = MEM32(esp + 0x18);
    edi++;
    ebx = ebx + 0xD8;
    if (CMP_L(edi, eax)) goto loc_0032F7D1; /* jl: less (signed <) */

loc_0032F859: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);

loc_0032F85C: ;
    POP32(esp, ebp);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_0032F870
 * Original: 0x0032F870 - 0x0032F8B0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032F870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032F870: ;
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x98);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = esp + 0x4C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_0007CB20(); /* call 0x0007CB20 */

loc_0032F892: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x6BD92C);
    SET_LO8(ecx, MEM8(eax + 0x33));
    esp = esp + 4;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0032F8B0(); return; } /* jne: not equal / not zero */

loc_0032F8A5: ;
    SET_LO8(ecx, MEM8(eax + 0x34));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0032F8B0(); return; } /* jne: not equal / not zero */

loc_0032F8AC: ;
    SET_LO8(edx, 1);
    g_seh_ebp = ebp; sub_0032F8B2(); return; /* tail jmp 0x0032F8B2 */

}

/**
 * sub_0032FA50
 * Original: 0x0032FA50 - 0x0032FA6A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FA50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FA50: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) { sub_0032FA6A(); return; } /* je: equal / zero */

loc_0032FA57: ;
    eax = 0; /* xor self */
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    eax = MEM32(edx + eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0032FA90
 * Original: 0x0032FA90 - 0x0032FAA9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FA90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FA90: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) { sub_0032FAA9(); return; } /* jne: not equal / not zero */

loc_0032FA97: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) { sub_0032FAA9(); return; } /* je: equal / zero */

loc_0032FAA5: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0032FAB0
 * Original: 0x0032FAB0 - 0x0032FAD9 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FAB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FAB0: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0032FAD8; /* jne: not equal / not zero */

loc_0032FAB7: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0032FAD8; /* je: equal / zero */

loc_0032FAC5: ;
    ecx = MEM32(eax + 0x1C);
    if (TEST_Z(ecx, ecx)) goto loc_0032FAD8; /* je: equal / zero */

loc_0032FACC: ;
    if (TEST_S(edx, edx)) goto loc_0032FAD8; /* jl: less (signed <) */

loc_0032FAD0: ;
    if (CMP_GE(edx, MEM32(ecx + 0x10))) goto loc_0032FAD8; /* jge: greater or equal (signed >=) */

loc_0032FAD5: ;
    MEM32(eax + 8) = edx;

loc_0032FAD8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FAE0
 * Original: 0x0032FAE0 - 0x0032FAF8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FAE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FAE0: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0032FAF5; /* jne: not equal / not zero */

loc_0032FAE7: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_NZ(eax, eax)) { sub_0032FAF8(); return; } /* jne: not equal / not zero */

loc_0032FAF5: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0032FB10
 * Original: 0x0032FB10 - 0x0032FB1A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FB10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FB10: ;
    edx = MEM32(ecx + 0x30);
    if (TEST_Z(edx, edx)) { sub_0032FB1A(); return; } /* je: equal / zero */

loc_0032FB17: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0032FB80
 * Original: 0x0032FB80 - 0x0032FBC6 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FB80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FB80: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) { sub_0032FBC6(); return; } /* jne: not equal / not zero */

loc_0032FB87: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    ecx = MEM32(eax + 0x1C);
    SET_LO8(edx, MEM8(ecx + 4));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0032FBC6(); return; } /* jne: not equal / not zero */

loc_0032FB9B: ;
    edx = MEM32(eax + 0x18);
    if (CMP_EQ(edx, 8)) { sub_0032FBC6(); return; } /* je: equal / zero */

loc_0032FBA3: ;
    if (CMP_EQ(edx, 0xC)) { sub_0032FBC6(); return; } /* je: equal / zero */

loc_0032FBA8: ;
    if (CMP_EQ(MEM32(eax + 0x14), 2)) { sub_0032FBC6(); return; } /* je: equal / zero */

loc_0032FBAE: ;
    edx = MEM32(eax + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + ecx + 0x79));
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(ebx), 1)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032FBD0
 * Original: 0x0032FBD0 - 0x0032FC18 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FBD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FBD0: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0032FBDF; /* jne: not equal / not zero */

loc_0032FBD5: ;
    eax = MEM32(ecx + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_0032FC15; /* jne: not equal / not zero */

loc_0032FBDC: ;
    eax = MEM32(ecx + 0x34);

loc_0032FBDF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + ecx + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0032FC15; /* je: equal / zero */

loc_0032FBEA: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    eax = MEM32(edx + ecx + 0x7C);
    eax = eax - 0;
    edx = edx + ecx + 0x14;
    if ((eax == 0)) goto loc_0032FC0B; /* je: equal / zero */

loc_0032FC03: ;
    eax--;
    if ((eax != 0)) goto loc_0032FC15; /* jne: not equal / not zero */

loc_0032FC06: ;
    eax = edx + 0x1C;
    goto loc_0032FC11;

loc_0032FC0B: ;
    eax = ecx + 0x29C;

loc_0032FC11: ;
    if (TEST_NZ(eax, eax)) { sub_0032FC18(); return; } /* jne: not equal / not zero */

loc_0032FC15: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0032FC20
 * Original: 0x0032FC20 - 0x0032FC68 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FC20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FC20: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0032FC2F; /* jne: not equal / not zero */

loc_0032FC25: ;
    eax = MEM32(ecx + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_0032FC65; /* jne: not equal / not zero */

loc_0032FC2C: ;
    eax = MEM32(ecx + 0x34);

loc_0032FC2F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + ecx + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0032FC65; /* je: equal / zero */

loc_0032FC3A: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    eax = MEM32(edx + ecx + 0x7C);
    eax = eax - 0;
    edx = edx + ecx + 0x14;
    if ((eax == 0)) goto loc_0032FC5B; /* je: equal / zero */

loc_0032FC53: ;
    eax--;
    if ((eax != 0)) goto loc_0032FC65; /* jne: not equal / not zero */

loc_0032FC56: ;
    eax = edx + 0x1C;
    goto loc_0032FC61;

loc_0032FC5B: ;
    eax = ecx + 0x29C;

loc_0032FC61: ;
    if (TEST_NZ(eax, eax)) { sub_0032FC68(); return; } /* jne: not equal / not zero */

loc_0032FC65: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0032FC70
 * Original: 0x0032FC70 - 0x0032FC8D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FC70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FC70: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0032FC7F; /* jne: not equal / not zero */

loc_0032FC75: ;
    eax = MEM32(ecx + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_0032FC8A; /* jne: not equal / not zero */

loc_0032FC7C: ;
    eax = MEM32(ecx + 0x34);

loc_0032FC7F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + ecx + 0x40;
    if (TEST_NZ(eax, eax)) { sub_0032FC8D(); return; } /* jne: not equal / not zero */

loc_0032FC8A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0032FCC0
 * Original: 0x0032FCC0 - 0x0032FD08 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FCC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FCC0: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0032FCCF; /* jne: not equal / not zero */

loc_0032FCC5: ;
    eax = MEM32(ecx + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_0032FD05; /* jne: not equal / not zero */

loc_0032FCCC: ;
    eax = MEM32(ecx + 0x34);

loc_0032FCCF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + ecx + 0x40;
    if (TEST_Z(eax, eax)) goto loc_0032FD05; /* je: equal / zero */

loc_0032FCDA: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    eax = MEM32(edx + ecx + 0x7C);
    eax = eax - 0;
    edx = edx + ecx + 0x14;
    if ((eax == 0)) goto loc_0032FCFB; /* je: equal / zero */

loc_0032FCF3: ;
    eax--;
    if ((eax != 0)) goto loc_0032FD05; /* jne: not equal / not zero */

loc_0032FCF6: ;
    eax = edx + 0x1C;
    goto loc_0032FD01;

loc_0032FCFB: ;
    eax = ecx + 0x29C;

loc_0032FD01: ;
    if (TEST_NZ(eax, eax)) { sub_0032FD08(); return; } /* jne: not equal / not zero */

loc_0032FD05: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0032FD10
 * Original: 0x0032FD10 - 0x0032FD1A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FD10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FD10: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) { sub_0032FD1A(); return; } /* je: equal / zero */

loc_0032FD17: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0032FD30
 * Original: 0x0032FD30 - 0x0032FD3A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FD30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FD30: ;
    PUSH32(esp, 0); sub_0032FD50(); /* call 0x0032FD50 */

loc_0032FD35: ;
    if (TEST_NZ(eax, eax)) { sub_0032FD3A(); return; } /* jne: not equal / not zero */

loc_0032FD39: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FD50
 * Original: 0x0032FD50 - 0x0032FD8C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FD50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FD50: ;
    edx = MEM32(eax + 0x568);
    if (TEST_Z(edx, edx)) goto loc_0032FD89; /* je: equal / zero */

loc_0032FD5A: ;
    ecx = MEM32(edx + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_0032FD89; /* je: equal / zero */

loc_0032FD64: ;
    ecx = edx;
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x51C));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0032FD7E; /* je: equal / zero */

loc_0032FD78: ;
    eax = MEM32(edx + 0x528);

loc_0032FD7E: ;
    if (TEST_Z(eax, eax)) goto loc_0032FD89; /* je: equal / zero */

loc_0032FD82: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) { sub_0032FD8C(); return; } /* je: equal / zero */

loc_0032FD89: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0032FDA0
 * Original: 0x0032FDA0 - 0x0032FDA5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FDA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FDA0: ;
    if (TEST_NZ(eax, eax)) { sub_0032FDA5(); return; } /* jne: not equal / not zero */

loc_0032FDA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FE10
 * Original: 0x0032FE10 - 0x0032FE48 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FE10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FE10: ;
    if (TEST_Z(eax, eax)) goto loc_0032FE47; /* je: equal / zero */

loc_0032FE14: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0032FE33; /* jne: not equal / not zero */

loc_0032FE19: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_0032FE30; /* je: equal / zero */

loc_0032FE20: ;
    ecx = 0; /* xor self */
    eax = MEM32(ecx + 8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0); sub_00332810(); /* call 0x00332810 */

loc_0032FE2E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0032FE30: ;
    ecx = MEM32(eax + 0x34);

loc_0032FE33: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + eax + 0x40;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0); sub_00332810(); /* call 0x00332810 */

loc_0032FE46: ;
    POP32(esp, ecx);

loc_0032FE47: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FE50
 * Original: 0x0032FE50 - 0x0032FFE0 (400 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FE50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0032FE50: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x444);
    xmm1 = MEMF(edx + 0x24); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0032FEE1; /* jnp: not parity */

loc_0032FE70: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    xmm1 = MEMF(eax + 0x24); /* movss */
    xmm1 = xmm1 - MEMF(0x7FA21C); /* subss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x568);
    ecx = MEM32(eax + 0x444);
    /* comiss xmm0, MEMF(ecx + 0x24) - sets EFLAGS */
    if ((xmm0 < MEMF(ecx + 0x24))) goto loc_0032FEE1; /* jb: below (unsigned <) */

loc_0032FEA6: ;
    eax = MEM32(edx + 0x568);
    ecx = MEM32(eax + 0x444);
    PUSH32(esp, 0xBF800000u);
    eax = esi;
    MEMF(ecx + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032FEC3: ;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esi + edx * 4 + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = MEM32(eax + esi + 0x54);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000216E0(); /* call 0x000216E0 */

loc_0032FEDB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;

loc_0032FEE1: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x568);
    ecx = MEM32(eax + 0x444);
    xmm1 = MEMF(ecx + 0x20); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0032FF5D; /* jnp: not parity */

loc_0032FEFE: ;
    eax = MEM32(edx + 0x568);
    eax = MEM32(eax + 0x444);
    xmm1 = MEMF(eax + 0x20); /* movss */
    xmm1 = xmm1 - MEMF(0x7FA21C); /* subss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0x444);
    /* comiss xmm0, MEMF(eax + 0x20) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x20))) goto loc_0032FF5D; /* jb: below (unsigned <) */

loc_0032FF31: ;
    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0x444);
    MEMF(eax + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0xBF800000u);
    eax = esi;
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_0032FF4E: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_00021730(); /* call 0x00021730 */

loc_0032FF57: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;

loc_0032FF5D: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0x444);
    xmm1 = MEMF(eax + 0x28); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0032FFDF; /* jnp: not parity */

loc_0032FF7A: ;
    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0x444);
    xmm1 = MEMF(eax + 0x28); /* movss */
    xmm1 = xmm1 - MEMF(0x7FA21C); /* subss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x444);
    /* comiss xmm0, MEMF(edx + 0x28) - sets EFLAGS */
    if ((xmm0 < MEMF(edx + 0x28))) goto loc_0032FFDF; /* jb: below (unsigned <) */

loc_0032FFAD: ;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x444);
    MEMF(edx + 0x28) = xmm0; /* movss */
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ebx);
    eax = eax << 5;
    ebx = MEM32(eax + esi + 0x214);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00021780(); /* call 0x00021780 */

loc_0032FFDB: ;
    esp = esp + 8;
    POP32(esp, ebx);

loc_0032FFDF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032FFE0
 * Original: 0x0032FFE0 - 0x00330022 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032FFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0032FFE0: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00330006; /* jne: not equal / not zero */

loc_0032FFE5: ;
    eax = MEM32(ecx + 0x30);
    if (TEST_Z(eax, eax)) goto loc_00330003; /* je: equal / zero */

loc_0032FFEC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0); sub_003318E0(); /* call 0x003318E0 */

loc_0032FFFF: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00330003: ;
    eax = MEM32(ecx + 0x34);

loc_00330006: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = eax + ecx + 0x40;
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0); sub_003318E0(); /* call 0x003318E0 */

loc_0033001E: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00330030
 * Original: 0x00330030 - 0x00330051 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00330030: ;
    ecx = MEM32(edx + 0x568);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x51C));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00330050; /* je: equal / zero */

loc_00330048: ;
    eax = ecx;
    eax = MEM32(eax + 0x528);

loc_00330050: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00330060
 * Original: 0x00330060 - 0x003300B0 (80 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00330060: ;
    if (TEST_Z(eax, eax)) goto loc_003300AF; /* je: equal / zero */

loc_00330064: ;
    ecx = MEM32(eax + 0x34);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + eax + 0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 8;
    ebp = ecx;
    /* nop */

loc_00330080: ;
    ecx = MEM32(eax + 0x34);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    edx = edx + eax;
    if (CMP_NE(MEM32(edx + 0x54), edi)) goto loc_00330095; /* jne: not equal / not zero */

loc_0033008F: ;
    if (CMP_NE(MEM8(edx + 0x40), 0)) { sub_003300B0(); return; } /* jne: not equal / not zero */

loc_00330095: ;
    ecx++;
    ecx = ecx & 0x80000007u;
    if (((int32_t)ecx >= 0)) goto loc_003300A3; /* jns: not sign (positive) */

loc_0033009E: ;
    ecx--;
    ecx = ecx | 0xFFFFFFF8u;
    ecx++;

loc_003300A3: ;
    esi--;
    MEM32(eax + 0x34) = ecx;
    if (((int32_t)esi >= 0)) goto loc_00330080; /* jns: not sign (positive) */

loc_003300A9: ;
    MEM32(eax + 0x34) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003300AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003300E0
 * Original: 0x003300E0 - 0x00330137 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003300E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003300E0: ;
    eax = MEM32(esi + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_00330136; /* jne: not equal / not zero */

loc_003300E7: ;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = eax + esi + 0x40;
    if (TEST_Z(ecx, ecx)) goto loc_00330136; /* je: equal / zero */

loc_003300F5: ;
    ecx = MEM32(ecx + 0x1C);
    ecx = ecx + 0x14;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = 0; /* xor self */
    if (CMP_EQ(edi, edx)) goto loc_00330121; /* je: equal / zero */

loc_00330104: ;
    goto loc_00330110;

    /* nop */
    /* nop */

loc_00330110: ;
    edi = MEM32(ecx + 0xD8);
    ecx = ecx + 0xD8;
    eax++;
    if (CMP_NE(edi, edx)) goto loc_00330110; /* jne: not equal / not zero */

loc_00330121: ;
    ecx = MEM32(esi + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    edx = MEM32(ecx + esi + 0x48);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    ecx = ecx + esi + 0x48;
    POP32(esp, edi);
    if (CMP_EQ(edx, eax)) goto loc_00330136; /* je: equal / zero */

loc_00330134: ;
    MEM32(ecx) = eax;

loc_00330136: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00330140
 * Original: 0x00330140 - 0x003301AF (111 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00330140: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, edi);
    edi = eax + ecx + 0x40;
    MEM32(esi) = 0;
    eax = MEM32(edi + 0x1C);
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003301AD; /* jne: not equal / not zero */

loc_0033015C: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_003301AC; /* jle: less or equal (signed <=) */

loc_00330166: ;
    ecx = 0; /* xor self */
    SET_LO8(edx, 1);
    PUSH32(esp, ebx);
    goto loc_00330170;

    /* nop */

loc_00330170: ;
    if (CMP_NE(MEM8(ecx + eax + 0x81), LO8(edx))) goto loc_00330189; /* jne: not equal / not zero */

loc_00330179: ;
    ebx = MEM32(esp + 0x10);
    if (CMP_NE(MEM8(ebx + 0x10), 0)) goto loc_00330189; /* jne: not equal / not zero */

loc_00330183: ;
    if (CMP_EQ(MEM8(esp + 0x18), LO8(edx))) goto loc_0033019A; /* je: equal / zero */

loc_00330189: ;
    eax = MEM32(ecx + eax + 0x14);
    edx = MEM32(esi);
    ebx = MEM32(esp + 0x14);
    MEM32(ebx + edx * 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    SET_LO8(edx, 1);

loc_0033019A: ;
    eax = MEM32(edi + 0x1C);
    ebx = MEM32(eax + 0x10);
    ebp++;
    ecx = ecx + 0xD8;
    if (CMP_L(ebp, ebx)) goto loc_00330170; /* jl: less (signed <) */

loc_003301AB: ;
    POP32(esp, ebx);

loc_003301AC: ;
    POP32(esp, ebp);

loc_003301AD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003301B0
 * Original: 0x003301B0 - 0x00330280 (208 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003301B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003301B0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003301C7; /* je: equal / zero */

loc_003301BD: ;
    SET_LO8(ecx, MEM8(eax + 0x2BC));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00330241; /* jne: not equal / not zero */

loc_003301C7: ;
    SET_LO8(eax, MEM8(esi + 0x20C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00330241; /* jne: not equal / not zero */

loc_003301D1: ;
    eax = MEM32(esi + 0xA4);
    if (CMP_EQ(eax, 0x27)) goto loc_00330241; /* je: equal / zero */

loc_003301DC: ;
    if (CMP_EQ(eax, 0xA5)) goto loc_00330241; /* je: equal / zero */

loc_003301E3: ;
    if (CMP_EQ(eax, 0xF0)) goto loc_00330241; /* je: equal / zero */

loc_003301EA: ;
    if (CMP_EQ(eax, 0x1AB)) goto loc_00330241; /* je: equal / zero */

loc_003301F1: ;
    if (CMP_EQ(eax, 0x371)) goto loc_00330241; /* je: equal / zero */

loc_003301F8: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), 0)) goto loc_00330241; /* je: equal / zero */

loc_00330202: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0033024C; /* je: equal / zero */

loc_0033020C: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = eax + ecx + -1744;
    ecx = edx;
    PUSH32(esp, 0); sub_003B8010(); /* call 0x003B8010 */

loc_00330229: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00330245; /* je: equal / zero */

loc_0033022D: ;
    ecx = MEM32(edx + 0x570);
    if (TEST_Z(ecx, ecx)) goto loc_0033024C; /* je: equal / zero */

loc_00330237: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x34), _icall_esp); /* indirect call */
    }

loc_0033023D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0033024C; /* jne: not equal / not zero */

loc_00330241: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00330245: ;
    MEM8(esi + 0x250) = 0;

loc_0033024C: ;
    eax = MEM32(esi + 0x568);
    if (CMP_A(MEM16(eax + 0x2C6), 0)) goto loc_00330241; /* ja: above (unsigned >) */

loc_0033025C: ;
    ecx = MEM32(eax + 0x444);
    if (CMP_NE(MEM32(ecx + 8), 6)) goto loc_0033027C; /* jne: not equal / not zero */

loc_00330268: ;
    esi = MEM32(esi + 0x56C);
    eax = MEM32(esi + 0x28);
    if (TEST_NZ(eax, eax)) goto loc_00330241; /* jne: not equal / not zero */

loc_00330275: ;
    eax = MEM32(esi + 0x24);
    if (TEST_NZ(eax, eax)) goto loc_00330241; /* jne: not equal / not zero */

loc_0033027C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00330280
 * Original: 0x00330280 - 0x00330327 (167 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00330280: ;
    eax = MEM32(eax + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(eax, eax)) { sub_00330327(); return; } /* je: equal / zero */

loc_00330291: ;
    edx = MEM32(eax + 0x444);
    if (TEST_Z(edx, edx)) { sub_00330327(); return; } /* je: equal / zero */

loc_0033029F: ;
    if (CMP_NE(esi, 0x31)) goto loc_003302AB; /* jne: not equal / not zero */

loc_003302A4: ;
    eax = 0x80049C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003302AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00332860(); /* call 0x00332860 */

loc_003302B4: ;
    edi = eax;
    if (CMP_EQ(edi, 0x57)) goto loc_003302F5; /* je: equal / zero */

loc_003302BB: ;
    ecx = edx;
    PUSH32(esp, 0); sub_0032F320(); /* call 0x0032F320 */

loc_003302C2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    edx = edx + eax;
    SET_LO8(ecx, MEM8(edx + 0x40));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = edx + 0x40;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003302EF; /* je: equal / zero */

loc_003302D1: ;
    edx = MEM32(edx + 0x5C);
    esi = MEM32(edx + 0x10);
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_003302EF; /* jle: less or equal (signed <=) */

loc_003302DD: ;
    edx = edx + 0x14;

loc_003302E0: ;
    if (CMP_EQ(MEM32(edx), edi)) goto loc_003302F1; /* je: equal / zero */

loc_003302E4: ;
    ecx++;
    edx = edx + 0xD8;
    if (CMP_L(ecx, esi)) goto loc_003302E0; /* jl: less (signed <) */

loc_003302EF: ;
    eax = 0; /* xor self */

loc_003302F1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003302F5: ;
    eax = 0; /* xor self */
    ecx = edx + 0x5C;
    /* nop */

loc_00330300: ;
    SET_LO8(ebx, MEM8(ecx + -28));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0033030D; /* je: equal / zero */

loc_00330307: ;
    edi = MEM32(ecx);
    if (CMP_EQ(MEM32(edi), esi)) goto loc_0033031C; /* je: equal / zero */

loc_0033030D: ;
    eax++;
    ecx = ecx + 0x38;
    if (CMP_L(eax, 8)) goto loc_00330300; /* jl: less (signed <) */

loc_00330316: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033031C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = eax + edx + 0x40;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00330330
 * Original: 0x00330330 - 0x00330348 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00330330: ;
    ecx = MEM32(eax + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_00330345; /* jne: not equal / not zero */

loc_00330337: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;
    if (TEST_NZ(eax, eax)) { sub_00330348(); return; } /* jne: not equal / not zero */

loc_00330345: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00330350
 * Original: 0x00330350 - 0x003303AE (94 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00330350(void)
{
    int _flags = 0; /* fallback flag var */

loc_00330350: ;
    esp = esp - 0x114;
    eax = MEM32(0x84A14C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x639270);
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0033036D: ;
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 4;
    MEM32(esp + 0x114) = 0x13;
    MEM32(esp + 4) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00330392: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_003303AE(); return; } /* jl: less (signed <) */

loc_003303A0: ;
    if (CMP_G(eax, 0x3E5)) { sub_003303AE(); return; } /* jg: greater (signed >) */

loc_003303A7: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_003303AC: ;
    goto loc_00330392;

}
