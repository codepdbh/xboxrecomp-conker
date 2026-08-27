/**
 * Burnout 3 - Recompiled code chunk 47
 * Functions: 250 (0x0040C760 - 0x00423590)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0040C760
 * Original: 0x0040C760 - 0x0040C819 (185 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040C760(void)
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

loc_0040C760: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    edx = MEM32(ebx + 0x60);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (TEST_Z(edx, edx)) goto loc_0040C814; /* je: equal / zero */

loc_0040C775: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx + 0x30); /* movss */
    xmm0 = xmm0 / MEMF(ecx + 0x34); /* divss */
    xmm0 = xmm0 * MEMF(0x649308); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x6C));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x68);
    esi = esi - eax;
    ebp = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_0040C812; /* jbe: below or equal (unsigned <=) */

loc_0040C7A0: ;
    eax = MEM32(ebx + 0x64);
    eax = MEM32(eax + ebp * 8);
    if (CMP_A(eax, 6)) goto loc_0040C80D; /* ja: above (unsigned >) */

loc_0040C7AB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x40C81C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0040C7B2u) goto loc_0040C7B2;
    if (_jt == 0x0040C7B9u) goto loc_0040C7B9;
    if (_jt == 0x0040C7C1u) goto loc_0040C7C1;
    if (_jt == 0x0040C7D1u) goto loc_0040C7D1;
    if (_jt == 0x0040C7D8u) goto loc_0040C7D8;
    if (_jt == 0x0040C7DFu) goto loc_0040C7DF;
    if (_jt == 0x0040C7E6u) goto loc_0040C7E6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0040C7B2: ;
    eax = MEM32(esi);
    MEM32(edi + 0x10) = eax;
    goto loc_0040C80A;

loc_0040C7B9: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi + 0xC) = LO8(eax);
    esi++;
    goto loc_0040C80D;

loc_0040C7C1: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    goto loc_0040C80A;

loc_0040C7D1: ;
    eax = MEM32(esi);
    MEM32(edi + 0x14) = eax;
    goto loc_0040C80A;

loc_0040C7D8: ;
    eax = MEM32(esi);
    MEM32(edi + 0x18) = eax;
    goto loc_0040C80A;

loc_0040C7DF: ;
    eax = MEM32(esi);
    MEM32(edi + 0x2C) = eax;
    goto loc_0040C80A;

loc_0040C7E6: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x38);
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMD(0x649300)); /* fld double */
    PUSH32(esp, 0); sub_0047F05E(); /* call 0x0047F05E */

loc_0040C7FF: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    MEMF(edi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0040C80A: ;
    esi = esi + 4;

loc_0040C80D: ;
    ebp++;
    if (CMP_B(ebp, edx)) goto loc_0040C7A0; /* jb: below (unsigned <) */

loc_0040C812: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0040C814: ;
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
 * sub_0040C8F0
 * Original: 0x0040C8F0 - 0x0040C920 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040C8F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040C8F0: ;
    esp = esp - 0x64;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x70); /* mulss */
    xmm2 = MEMF(esi + 8); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    PUSH32(esp, edi);
    MEMF(esp + 0x74) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) { sub_0040C920(); return; } /* jbe: below or equal (unsigned <=) */

loc_0040C916: ;
    eax = 0; /* xor self */
    SET_LO8(ebx, 2);
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_0040C994(); return; /* tail jmp 0x0040C994 */

}

/**
 * sub_0040CA50
 * Original: 0x0040CA50 - 0x0040CDC6 (886 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040CA50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0040CA50: ;
    esp = esp - 0x44;
    eax = MEM32(0x5A02E4);
    ecx = MEM32(0x5A02E8);
    edx = MEM32(0x5A02EC);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040CA75: ;
    xmm6 = MEMF(0x648D10); /* movss */
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x2C); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_0040CDC6(); return; } /* jne: not equal / not zero */

loc_0040CA97: ;
    xmm1 = MEMF(esi + 0x24); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040CD66; /* jnp: not parity */

loc_0040CAAC: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edx = esi + 0x18;
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_003E4CA0(); /* call 0x003E4CA0 */

loc_0040CABD: ;
    xmm6 = MEMF(esi + 0x24); /* movss */
    esp = esp + 4;
    xmm7 = xmm7 - xmm6; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040CACE: ;
    xmm5 = xmm0; /* movaps */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm5 = xmm5 * xmm6; /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040CADE: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm5 = xmm5 + xmm7; /* addss */
    eax = esp + 0x40;
    ecx = 0; /* xor self */
    MEMF(esp) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_0040CB08: ;
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm4 = MEMF(esp + 0x4C); /* movss */
    xmm6 = MEMF(esp + 0x3C); /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x34); /* movss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x40); /* movss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = xmm4; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x30); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm6 = MEMF(esp + 0x30); /* movss */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm3 = xmm3 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x34); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x38); /* mulss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x38); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0x3C); /* movss */
    xmm4 = xmm4 * MEMF(esp + 0x40); /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    esp = esp + 0xC;
    MEMF(esp + 0x24) = xmm6; /* movss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x20); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm7; /* addss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm6 = xmm7; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm5 = xmm5 * xmm2; /* mulss */
    MEMF(esp + 4) = xmm6; /* movss */
    xmm7 = MEMF(esp + 4); /* movss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    xmm6 = xmm6 * MEMF(esp + 0x24); /* mulss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x24); /* movss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    MEMF(esp + 4) = xmm5; /* movss */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(esp); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm7 = MEMF(esp + 4); /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm7 = MEMF(esp); /* movss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(esp); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x28); /* movss */
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    edx = esp + 0xC;
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 8) = edx;
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x48);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_0040CD66: ;
    xmm1 = MEMF(esi + 0x18); /* movss */
    eax = esi + 0x18;
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEM32(esp + 8) = eax;
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x48);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0040CE60
 * Original: 0x0040CE60 - 0x0040D184 (804 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040CE60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040CE60: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    ebp = 0; /* xor self */
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ebp;
    if (CMP_BE(ecx, ebp)) goto loc_0040D17C; /* jbe: below or equal (unsigned <=) */

loc_0040CE7E: ;
    MEM32(esp + 0xC) = ebp;
    PUSH32(esp, edi);

loc_0040CE83: ;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0xC);
    edi = ecx + eax;
    if (CMP_BE(edi, edx)) goto loc_0040CE98; /* jbe: below or equal (unsigned <=) */

loc_0040CE94: ;
    edx = edx - ecx;
    eax = edx;

loc_0040CE98: ;
    edx = MEM32(ebx + 8);
    edi = ecx;
    edi = edi << 6;
    ecx = ecx + eax;
    ebp = ebp + eax;
    edi = edi + edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    MEM32(esp + 0x30) = ebp;
    if (TEST_Z(eax, eax)) goto loc_0040D158; /* je: equal / zero */

loc_0040CEB5: ;
    ebp = edi + 0x28;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_0040CEC0: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(eax + ecx); /* movss */
    eax = eax + ecx;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    ecx = esp + 0x40;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edi;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0040CA50(); /* call 0x0040CA50 */

loc_0040CEFC: ;
    eax = MEM32(esp + 0x70);
    SET_LO8(ecx, MEM8(eax + 0x80));
    esp = esp + 4;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0040CF30; /* je: equal / zero */

loc_0040CF0D: ;
    PUSH32(esp, eax);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040CF1B: ;
    ecx = MEM32(esp + 0x6C);
    ecx = ecx + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040CF30: ;
    SET_LO8(eax, MEM8(esp + 0x64));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm5 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0040CFAC; /* jne: not equal / not zero */

loc_0040CF3B: ;
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    xmm0 = MEMF(esp + 0xC); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648DD0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0040CF97; /* jbe: below or equal (unsigned <=) */

loc_0040CF77: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    if ((xmm0 >= xmm5)) goto loc_0040CF9A; /* jae: above or equal (unsigned >=) */

loc_0040CF84: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040CF9A; /* jnp: not parity */

loc_0040CF8D: ;
    xmm1 = xmm1 - MEMF(0x648D14); /* subss */
    goto loc_0040CF9A;

loc_0040CF97: ;
    xmm1 = xmm0; /* movaps */

loc_0040CF9A: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 - MEMF(0x648D10); /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0040CFAC: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(ebp + -36) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMF(ebp + -32) = xmm0; /* movss */
    edx = MEM32(esi + 0x3C);
    MEM32(ebp + -20) = edx;
    eax = MEM32(esi + 0x40);
    MEM32(ebp + -16) = eax;
    ecx = MEM32(esi + 0x38);
    MEM32(ebp + -12) = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(ebp + -24) = edx;
    SET_LO8(eax, MEM8(esi + 0x30));
    MEM8(ebp + -28) = LO8(eax);
    (void)0; /* cmp MEM8(0x84BDFE), 0xA - flags set for next jcc */
    MEM8(ebp + -26) = 0;
    MEM8(ebp + -27) = 1;
    if (CMP_NE(MEM8(0x84BDFE), 0xA)) goto loc_0040D008; /* jne: not equal / not zero */

loc_0040CFFB: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */
    goto loc_0040D021;

loc_0040D008: ;
    ecx = MEM32(esi + 0x44);
    MEM32(ebp + 4) = ecx;
    xmm0 = MEMF(esi + 0x44); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040D021; /* jnp: not parity */

loc_0040D01C: ;
    MEMF(ebp + -20) = xmm5; /* movss */

loc_0040D021: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEMF(ebp + -8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(ebp + -4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    edx = MEM32(esi + 0x48);
    MEM32(ebp + 0xC) = edx;
    xmm0 = MEMF(esi + 0x4C); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040D072; /* jnp: not parity */

loc_0040D056: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040D05B: ;
    xmm0 = xmm0 - MEMF(0x648D10); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x4C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xC); /* addss */
    MEMF(ebp + 0xC) = xmm0; /* movss */

loc_0040D072: ;
    MEMF(ebp + 8) = xmm5; /* movss */
    MEM16(ebp + 0x10) = 0;
    xmm0 = MEMF(esi + 0x10); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0040D09D; /* jp: parity */

loc_0040D08B: ;
    xmm0 = MEMF(esi + 0x14); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040D11F; /* jnp: not parity */

loc_0040D09D: ;
    xmm5 = MEMF(esi + 0x14); /* movss */
    xmm6 = MEMF(esi + 0x10); /* movss */
    eax = esi + 0x18;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040D0B3: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    ecx = esp + 0x4C;
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x20) = ecx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_0040D11F: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0040C760(); /* call 0x0040C760 */

loc_0040D127: ;
    eax = MEM32(esp + 0x70);
    eax = MEM32(eax + 0x98);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0040D13F; /* je: equal / zero */

loc_0040D138: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0040D13C: ;
    esp = esp + 8;

loc_0040D13F: ;
    eax = MEM32(esp + 0x14);
    edi = edi + 0x40;
    ebp = ebp + 0x40;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0040CEC0; /* jne: not equal / not zero */

loc_0040D154: ;
    ebp = MEM32(esp + 0x30);

loc_0040D158: ;
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 4);
    eax++;
    edi = edi + 0xC;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = edi;
    if (CMP_B(eax, edx)) goto loc_0040CE83; /* jb: below (unsigned <) */

loc_0040D17B: ;
    POP32(esp, edi);

loc_0040D17C: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040D190
 * Original: 0x0040D190 - 0x0040D1C7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040D190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040D190: ;
    esp = esp - 0x84;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x94);
    esi = MEM32(edi);
    ebp = MEM32(esi);
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0040D1C7(); return; } /* jne: not equal / not zero */

loc_0040D1AB: ;
    eax = MEM32(esp + 0x98);
    ecx = ZX8(MEM8(eax + 0xE));
    if (CMP_EQ(ecx, MEM32(ebp + 8))) { sub_0040D1C7(); return; } /* je: equal / zero */

loc_0040D1BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_0040D740
 * Original: 0x0040D740 - 0x0040D80F (207 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040D740(void)
{
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0040D740: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040D74D: ;
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040D75E: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    PUSH32(esp, 0); sub_003E3920(); /* call 0x003E3920 */

loc_0040D773: ;
    PUSH32(esp, 0x3EAAAAAB);
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040D783: ;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3DF0(); /* call 0x003E3DF0 */

loc_0040D78E: ;
    esp = esp + 8;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esi) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi + 4) = xmm2; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040D810
 * Original: 0x0040D810 - 0x0040D8B7 (167 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040D810(void)
{
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0040D810: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040D81D: ;
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040D82E: ;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040D853: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    xmm1 = MEMF(esp + 8); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi) = xmm2; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
 * sub_0040D8C0
 * Original: 0x0040D8C0 - 0x0040D9B0 (240 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040D8C0(void)
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

loc_0040D8C0: ;
    esp = esp - 0x14;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp) = eax;
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
    MEMF(esp + 4) = xmm1; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0040D92D; /* ja: above (unsigned >) */

loc_0040D924: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0040D92C: ;
    POP32(esp, ebx);

loc_0040D92D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040D932: ;
    xmm0 = xmm0 - MEMF(0x648D10); /* subss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    ecx = esp + 8;
    edx = ecx;
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ecx;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040D9B0
 * Original: 0x0040D9B0 - 0x0040DADB (299 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040D9B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;

loc_0040D9B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm1 = MEMF(edi + 0x28); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040DA1A; /* jnp: not parity */

loc_0040D9D5: ;
    xmm1 = MEMF(ecx); /* movss */
    (void)0; /* cmp MEM32(esp + 0x14), 1 - flags set for next jcc */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (CMP_NE(MEM32(esp + 0x14), 1)) goto loc_0040DA02; /* jne: not equal / not zero */

loc_0040D9FC: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_0040DA02: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_0040D8C0(); /* call 0x0040D8C0 */

loc_0040DA14: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;

loc_0040DA1A: ;
    xmm1 = MEMF(ebx + 0x94); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040DA47; /* jnp: not parity */

loc_0040DA2B: ;
    edx = MEM32(edi + 0x2C);
    eax = MEM32(ebx + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x5A02E4;
    PUSH32(esp, 0); sub_0040D8C0(); /* call 0x0040D8C0 */

loc_0040DA41: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;

loc_0040DA47: ;
    xmm1 = MEMF(ebx + 0x9C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040DAAE; /* jnp: not parity */

loc_0040DA58: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040DA5D: ;
    xmm7 = MEMF(0x648D10); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm7; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040DA71: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 - xmm7; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040DA7D: ;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(ebx + 0x9C);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm7; /* subss */
    PUSH32(esp, edx);
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    PUSH32(esp, 0); sub_0040D8C0(); /* call 0x0040D8C0 */

loc_0040DAA8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;

loc_0040DAAE: ;
    xmm1 = MEMF(ebx + 0xA0); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040DAD6; /* jnp: not parity */

loc_0040DABF: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(ebx + 0xA0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi + 0x18;
    PUSH32(esp, 0); sub_0040D8C0(); /* call 0x0040D8C0 */

loc_0040DAD3: ;
    esp = esp + 0xC;

loc_0040DAD6: ;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0040DAE0
 * Original: 0x0040DAE0 - 0x0040DE36 (854 bytes, 254 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040DAE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040DAE0: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    ebx = MEM32(ebp);
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + 4);
    esi = edx;
    edx = edx + eax;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = esi;
    if (CMP_BE(edx, ecx)) goto loc_0040DB0E; /* jbe: below or equal (unsigned <=) */

loc_0040DB06: ;
    ecx = ecx - eax;
    MEM32(esp + 0x1C) = ecx;
    esi = ecx;

loc_0040DB0E: ;
    ecx = MEM32(ebp + 8);
    edi = eax;
    edi = edi << 6;
    edi = edi + ecx;
    eax = eax + esi;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    MEM32(ebp + 4) = eax;
    if (TEST_Z(esi, esi)) { sub_0040DE36(); return; } /* je: equal / zero */

loc_0040DB29: ;
    ebp = edi + 0x28;
    MEM32(esp + 0x20) = esi;

loc_0040DB30: ;
    eax = MEM32(ebx);
    eax = MEM32(eax);
    eax--;
    /* TODO: prefetcht0 byte ptr [ebp + 0x18] */
    /* TODO: prefetcht0 byte ptr [ebp + 0x818] */
    if ((eax == 0)) goto loc_0040DB8E; /* je: equal / zero */

loc_0040DB42: ;
    eax--;
    if ((eax == 0)) goto loc_0040DB6D; /* je: equal / zero */

loc_0040DB45: ;
    eax--;
    if ((eax != 0)) goto loc_0040DC21; /* jne: not equal / not zero */

loc_0040DB4C: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax + 0x90);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0040D810(); /* call 0x0040D810 */

loc_0040DB65: ;
    esp = esp + 0xC;
    goto loc_0040DC21;

loc_0040DB6D: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x90);
    PUSH32(esp, ecx);
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0040D740(); /* call 0x0040D740 */

loc_0040DB86: ;
    esp = esp + 0xC;
    goto loc_0040DC21;

loc_0040DB8E: ;
    edx = MEM32(esp + 0x14);
    edx = edx + 4;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040DB9E: ;
    xmm7 = MEMF(0x648CE0); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - MEMF(0x648D14); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040DBBA: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - MEMF(0x648D14); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040DBCE: ;
    eax = esp + 0x30;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    ecx = eax;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_0040DC21: ;
    edx = MEM32(ebx);
    eax = MEM32(edx);
    if (CMP_LE(eax & eax, 0)) goto loc_0040DC4F; /* jle: less or equal (signed <=) */

loc_0040DC29: ;
    if (CMP_LE(eax, 2)) goto loc_0040DC37; /* jle: less or equal (signed <=) */

loc_0040DC2E: ;
    if (CMP_NE(eax, 3)) goto loc_0040DC4F; /* jne: not equal / not zero */

loc_0040DC33: ;
    PUSH32(esp, 1);
    goto loc_0040DC39;

loc_0040DC37: ;
    PUSH32(esp, 0);

loc_0040DC39: ;
    edi = ebx;
    ecx = esp + 0x34;
    esi = esp + 0x40;
    PUSH32(esp, 0); sub_0040D9B0(); /* call 0x0040D9B0 */

loc_0040DC48: ;
    edi = MEM32(esp + 0x1C);
    esp = esp + 4;

loc_0040DC4F: ;
    esi = MEM32(esp + 0x14);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040DC64: ;
    eax = esi + 0x50;
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040DC75: ;
    esi = MEM32(esp + 0x5C);
    SET_LO8(eax, MEM8(esi + 0x80));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0040DCA2; /* je: equal / zero */

loc_0040DC83: ;
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040DC91: ;
    eax = esi + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040DCA2: ;
    SET_LO8(eax, MEM8(esp + 0x54));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm5 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0040DD22; /* jne: not equal / not zero */

loc_0040DCAD: ;
    eax = MEM32(esp + 0x4C);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    xmm0 = MEMF(esp + 0x10); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648DD0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0040DD0D; /* jbe: below or equal (unsigned <=) */

loc_0040DCED: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    if ((xmm0 >= xmm5)) goto loc_0040DD10; /* jae: above or equal (unsigned >=) */

loc_0040DCFA: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040DD10; /* jnp: not parity */

loc_0040DD03: ;
    xmm1 = xmm1 - MEMF(0x648D14); /* subss */
    goto loc_0040DD10;

loc_0040DD0D: ;
    xmm1 = xmm0; /* movaps */

loc_0040DD10: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 - MEMF(0x648D10); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_0040DD22: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(ebp + -36) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(ebp + -32) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x3C);
    MEM32(ebp + -20) = ecx;
    edx = MEM32(ebx + 0x40);
    MEM32(ebp + -16) = edx;
    eax = MEM32(ebx + 0x38);
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebx + 0x34);
    (void)0; /* cmp MEM8(0x84BDFE), 0xA - flags set for next jcc */
    MEM32(ebp + -24) = ecx;
    SET_LO8(edx, MEM8(ebx + 0x30));
    MEM8(ebp + -28) = LO8(edx);
    MEM8(ebp + -26) = 0;
    MEM8(ebp + -27) = 1;
    if (CMP_NE(MEM8(0x84BDFE), 0xA)) goto loc_0040DD7E; /* jne: not equal / not zero */

loc_0040DD71: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */
    goto loc_0040DD97;

loc_0040DD7E: ;
    eax = MEM32(ebx + 0x44);
    MEM32(ebp + 4) = eax;
    xmm0 = MEMF(ebx + 0x44); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040DD97; /* jnp: not parity */

loc_0040DD92: ;
    MEMF(ebp + -20) = xmm5; /* movss */

loc_0040DD97: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMF(ebp + -8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEMF(ebp + -4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x48);
    MEM32(ebp + 0xC) = ecx;
    xmm0 = MEMF(ebx + 0x4C); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040DDE8; /* jnp: not parity */

loc_0040DDCC: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0040DDD1: ;
    xmm0 = xmm0 - MEMF(0x648D10); /* subss */
    xmm0 = xmm0 * MEMF(ebx + 0x4C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xC); /* addss */
    MEMF(ebp + 0xC) = xmm0; /* movss */

loc_0040DDE8: ;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    MEMF(ebp + 8) = xmm5; /* movss */
    MEM16(ebp + 0x10) = 0;
    PUSH32(esp, 0); sub_0040C760(); /* call 0x0040C760 */

loc_0040DDFD: ;
    eax = MEM32(esi + 0x98);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0040DE11; /* je: equal / zero */

loc_0040DE0A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0040DE0E: ;
    esp = esp + 8;

loc_0040DE11: ;
    eax = MEM32(esp + 0x20);
    edi = edi + 0x40;
    ebp = ebp + 0x40;
    eax--;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_0040DB30; /* jne: not equal / not zero */

loc_0040DE2A: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040DE40
 * Original: 0x0040DE40 - 0x0040DF4C (268 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040DE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040DE40: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    ecx = eax;
    ecx = ecx - edi;
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(ecx & ecx, 0)) ? 1 : 0); /* setle */
    eax = eax << 6;
    edi = eax + ebp;
    eax = esp + 0x14;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x24) = eax;
    edx--;
    edx = edx & ecx;
    esi = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x14;
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    esi = esi << 6;
    esi = esi + ebp;
    edx = esp + 0x14;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x14;
    MEM32(esp + 0x24) = eax;
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0xC))) goto loc_0040DF45; /* jbe: below or equal (unsigned <=) */

loc_0040DF3C: ;
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_0040DF50(); /* call 0x0040DF50 */

loc_0040DF45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0040DF50
 * Original: 0x0040DF50 - 0x0040DF9B (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040DF50(void)
{
    float xmm0, xmm1;

loc_0040DF50: ;
    xmm0 = MEMF(eax); /* movaps */
    xmm1 = MEMF(ecx); /* movaps */
    MEMF(eax) = xmm1; /* movaps */
    MEMF(ecx) = xmm0; /* movaps */
    xmm0 = MEMF(eax + 0x10); /* movaps */
    xmm1 = MEMF(ecx + 0x10); /* movaps */
    MEMF(eax + 0x10) = xmm1; /* movaps */
    MEMF(ecx + 0x10) = xmm0; /* movaps */
    eax = eax + 0x10;
    xmm0 = MEMF(eax + 0x10); /* movaps */
    ecx = ecx + 0x10;
    xmm1 = MEMF(ecx + 0x10); /* movaps */
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    MEMF(eax) = xmm1; /* movaps */
    MEMF(ecx) = xmm0; /* movaps */
    xmm0 = MEMF(eax + 0x10); /* movaps */
    xmm1 = MEMF(ecx + 0x10); /* movaps */
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    MEMF(eax) = xmm1; /* movaps */
    MEMF(ecx) = xmm0; /* movaps */
    esp += 4; return; /* ret */

}

/**
 * sub_0040DFA0
 * Original: 0x0040DFA0 - 0x0040E95F (2495 bytes, 583 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040DFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040DFA0: ;
    esp = esp - 0x400;
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    eax = MEM32(edi + 0x58);
    SET_LO8(ebx, MEM8(edi + 0x70));
    xmm0 = MEMF(edi + 0x74); /* movss */
    ecx = MEM32(edi + 0x50);
    edx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0xA8) = eax;
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    (void)0; /* cmp MEM16(ebp + 0x28), LO16(edx) - flags set for next jcc */
    MEM8(0x828480) = LO8(eax);
    eax = MEM32(ebp + 8);
    /* TODO: prefetcht0 byte ptr [eax] */
    MEMF(0x8284D0) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x78); /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm5; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    esi = MEM32(edi + 0x54);
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0xB4) = edi;
    MEMF(0x828434) = xmm0; /* movss */
    if (CMP_NE(MEM16(ebp + 0x28), LO16(edx))) goto loc_0040E026; /* jne: not equal / not zero */

loc_0040E01C: ;
    eax = MEM32(ebp + 4);
    eax = eax >> 2;
    MEM16(ebp + 0x28) = LO16(eax);

loc_0040E026: ;
    ecx--;
    MEM32(esp + 0xBC) = ecx;
    if (((int32_t)ecx < 0)) goto loc_0040E0D9; /* js: sign (negative) */

loc_0040E034: ;
    ecx++;
    ebx = esp + 0x110;
    MEM32(esp + 0x9C) = ecx;

loc_0040E043: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0040E0A1; /* jp: parity */

loc_0040E051: ;
    edx = esp + 0x1C;
    ecx = esi + 0x14;
    eax = edx;
    MEM32(esp + 0xB8) = ecx;
    MEM32(esp + 0xA0) = edx;
    MEM32(esp + 0xAC) = eax;
    ecx = MEM32(esp + 0xA0);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xB8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xAC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_0040E0BA;

loc_0040E0A1: ;
    ecx = MEM32(esp + 0x424);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040E0B0: ;
    MEM32(esp + 0x98) = MEM32(esp + 0x98) + 1;
    ebx = ebx + 0xC;

loc_0040E0BA: ;
    eax = MEM32(esp + 0x9C);
    esi = esi + 0x28;
    eax--;
    MEM32(esp + 0x9C) = eax;
    if ((eax != 0)) goto loc_0040E043; /* jne: not equal / not zero */

loc_0040E0D2: ;
    edx = MEM32(esp + 0x98);

loc_0040E0D9: ;
    eax = MEM32(esp + 0xA8);
    esi = MEM32(edi + 0x5C);
    eax--;
    MEM32(esp + 0xB8) = eax;
    if (((int32_t)eax < 0)) goto loc_0040E134; /* js: sign (negative) */

loc_0040E0ED: ;
    ebx = edx + edx * 2;
    eax++;
    ebx = esp + ebx * 4 + 0x110;
    MEM32(esp + 0x9C) = eax;
    /* nop */

loc_0040E100: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040E120; /* jnp: not parity */

loc_0040E10E: ;
    edx = MEM32(esp + 0x424);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0040E11D: ;
    ebx = ebx + 0xC;

loc_0040E120: ;
    eax = MEM32(esp + 0x9C);
    esi = esi + 0x28;
    eax--;
    MEM32(esp + 0x9C) = eax;
    if ((eax != 0)) goto loc_0040E100; /* jne: not equal / not zero */

loc_0040E134: ;
    SET_LO8(eax, MEM8(edi + 0x31));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm6 = MEMF(0x648D14); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0040E18E; /* je: equal / zero */

loc_0040E143: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 / MEMF(0x84BE08); /* divss */
    eax = esp + 0x4C;
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEM32(esp + 0xAC) = eax;
    xmm0 = MEMF(esp + 0xA0); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = 0x84BDD0;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xAC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_0040E18E: ;
    ebx = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    eax = ebx;
    eax = eax << 6;
    /* TODO: prefetcht0 byte ptr [eax + edx] */
    eax = eax + edx;
    /* TODO: prefetcht0 byte ptr [eax + 0x20] */
    eax = eax + 0x20;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = 0;
    if (TEST_Z(ebx, ebx)) { sub_0040E95F(); return; } /* je: equal / zero */

loc_0040E1C0: ;
    xmm7 = MEMF(esp + 0x418); /* movss */
    /* TODO: prefetcht0 byte ptr [edx + 0x40] */
    /* TODO: prefetcht0 byte ptr [edx + 0x60] */
    edi = edx;
    xmm0 = MEMF(edi + 0x30); /* movss */
    edx = edx + 0x40;
    xmm0 = xmm0 + xmm7; /* addss */
    /* comiss xmm0, MEMF(edi + 0x34) - sets EFLAGS */
    MEM32(esp + 0xB0) = edx;
    MEM32(esp + 0x9C) = edi;
    MEMF(edi + 0x30) = xmm0; /* movss */
    if ((xmm0 <= MEMF(edi + 0x34))) goto loc_0040E23E; /* jbe: below or equal (unsigned <=) */

loc_0040E1F8: ;
    MEM8(edi + 0xD) = 0;
    edi = MEM32(ebp + 4);
    esi = MEM32(ebp + 8);
    edi--;
    eax = edi;
    eax = eax << 6;
    ebx--;
    edx = edx - 0x40;
    eax = eax + esi;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(ebp + 4) = edi;
    MEM32(esp + 0xA8) = ebx;
    if (CMP_EQ(edx, eax)) goto loc_0040E22B; /* je: equal / zero */

loc_0040E21C: ;
    ecx = 0x10;
    esi = eax;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0xD) = 0;

loc_0040E22B: ;
    /* TODO: prefetcht0 byte ptr [eax - 0x40] */
    eax = eax - 0x40;
    /* TODO: prefetcht0 byte ptr [eax + 0x20] */
    eax = eax + 0x20;
    goto loc_0040E94E;

loc_0040E23E: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    ecx = MEM32(esp + 0xB4);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    esi = MEM32(ecx + 0x54);
    ecx = MEM32(esp + 0xBC);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x98) = eax;
    if (TEST_S(ecx, ecx)) goto loc_0040E44C; /* jl: less (signed <) */

loc_0040E284: ;
    edx = ecx;
    esi = esi + 0xC;
    edx++;
    ebx = esp + 0x110;
    MEM32(esp + 0xA0) = edx;

loc_0040E298: ;
    xmm0 = MEMF(esi); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040E42D; /* jnp: not parity */

loc_0040E2A9: ;
    eax = esp + 0xF0;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0xA4) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x9C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xA4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0xF0;
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(esp + 0x18);
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
    MEMF(esp + 0xEC) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm0 = MEMF(esp + 0xEC); /* movss */
    /* ucomiss xmm1, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0040E359; /* jnp: not parity */

loc_0040E346: ;
    edx = MEM32(esi);
    eax = MEM32(esp + 0xC8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3DF0(); /* call 0x003E3DF0 */

loc_0040E356: ;
    esp = esp + 8;

loc_0040E359: ;
    MEMF(esp + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE0); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0xFC) = xmm2; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0xFC); /* mulss */
    ecx = esi + 8;
    edx = esp + 0x40;
    MEM32(esp + 0xA4) = ecx;
    MEMF(esp + 0xD4) = xmm0; /* movss */
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0xD4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xA4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEM32(esp + 0x98) = MEM32(esp + 0x98) + 1;
    ecx = esp + 0x28;
    eax = esp + 0x40;
    edx = ecx;
    ebx = ebx + 0xC;
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xA4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_0040E42D: ;
    eax = MEM32(esp + 0xA0);
    esi = esi + 0x28;
    eax--;
    MEM32(esp + 0xA0) = eax;
    if ((eax != 0)) goto loc_0040E298; /* jne: not equal / not zero */

loc_0040E445: ;
    eax = MEM32(esp + 0x98);

loc_0040E44C: ;
    ecx = MEM32(esp + 0xB4);
    esi = MEM32(ecx + 0x5C);
    ecx = MEM32(esp + 0xB8);
    if (TEST_S(ecx, ecx)) goto loc_0040E6CD; /* jl: less (signed <) */

loc_0040E465: ;
    ebx = eax + eax * 2;
    eax = MEM32(esp + 0xB8);
    edx = esp + 0x40;
    ecx = esp + 0x28;
    MEM32(esp + 0x98) = edx;
    esi = esi + 0x1C;
    edx = ecx;
    eax++;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0xA4) = edx;
    ebx = esp + ebx * 4 + 0x110;
    MEM32(esp + 0xA0) = eax;
    /* nop */

loc_0040E4A0: ;
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - MEMF(edi + 0x20); /* subss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - MEMF(edi + 0x24); /* subss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - MEMF(edi + 0x28); /* subss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    SET_LO8(eax, MEM8(esi + -12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0040E4FD; /* je: equal / zero */

loc_0040E4D1: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esi + -4); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = MEMF(esi + -8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */

loc_0040E4FD: ;
    xmm0 = MEMF(esi + -16); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0040E642; /* jnp: not parity */

loc_0040E50F: ;
    ecx = esp + 0x100;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x9C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x100;
    MEM32(esp + 0x14) = edx;
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
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0xDC) = xmm1; /* movss */
    xmm1 = MEMF(esi + -16); /* movss */
    xmm0 = MEMF(esp + 0xDC); /* movss */
    /* ucomiss xmm1, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x10C) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0040E5BB; /* jnp: not parity */

loc_0040E5A7: ;
    eax = MEM32(esi + -16);
    ecx = MEM32(esp + 0x10C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3DF0(); /* call 0x003E3DF0 */

loc_0040E5B8: ;
    esp = esp + 8;

loc_0040E5BB: ;
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC4); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0xC0) = xmm2; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0xC0); /* mulss */
    edx = esp + 0x34;
    eax = esp + 0x40;
    ebx = ebx + 0xC;
    MEMF(esp + 0xD0) = xmm0; /* movss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0xD0); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_0040E688;

loc_0040E642: ;
    xmm0 = MEMF(esi + 4); /* movss */
    ecx = esp + 0x34;
    edx = esp + 0x40;
    MEMF(esp + 0xD8) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0xD8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_0040E688: ;
    ecx = MEM32(esp + 0x58);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x98);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xA4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0xA0);
    esi = esi + 0x28;
    eax--;
    MEM32(esp + 0xA0) = eax;
    if ((eax != 0)) goto loc_0040E4A0; /* jne: not equal / not zero */

loc_0040E6CD: ;
    xmm0 = MEMF(edi + 0x20); /* movss */
    ecx = edi + 0x20;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    eax = esp + 0x28;
    edx = esp + 0x68;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0xE8) = xmm7; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x58) = edx;
    xmm0 = MEMF(esp + 0xE8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x68;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x5C;
    edx = esp + 0x80;
    MEMF(esp + 0xE4) = xmm7; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x58) = edx;
    xmm0 = MEMF(esp + 0xE4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm7 = xmm7 * MEMF(0x648D10); /* mulss */
    eax = esp + 0x68;
    ecx = esp + 0x8C;
    MEMF(esp + 0xCC) = xmm7; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x58) = ecx;
    xmm0 = MEMF(esp + 0xCC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    eax = esp + 0x80;
    ecx = esp + 0x74;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x74;
    MEM32(esp + 0x58) = edx;
    ecx = MEM32(esp + 0x9C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x58);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x9C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0040C760(); /* call 0x0040C760 */

loc_0040E876: ;
    esi = MEM32(esp + 0x428);
    eax = MEM32(esi + 0x9C);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0040E8EE; /* je: equal / zero */

loc_0040E88A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0040E88E: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0040E8EE; /* je: equal / zero */

loc_0040E895: ;
    SET_LO8(eax, MEM8(edi + 0xE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0040E8AD; /* jne: not equal / not zero */

loc_0040E89C: ;
    eax = MEM32(esi + 0xA0);
    if (TEST_Z(eax, eax)) goto loc_0040E8AD; /* je: equal / zero */

loc_0040E8A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0040E8AA: ;
    esp = esp + 8;

loc_0040E8AD: ;
    eax = ZX8(MEM8(edi + 0xE));
    eax++;
    if (CMP_L(eax, 4)) goto loc_0040E8BC; /* jl: less (signed <) */

loc_0040E8B7: ;
    eax = 4;

loc_0040E8BC: ;
    MEM8(edi + 0xE) = LO8(eax);
    eax = MEM32(ebp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0040E8EE; /* je: equal / zero */

loc_0040E8C6: ;
    ecx = MEM32(esp + 0x420);
    edx = MEM32(esp + 0x418);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x420));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0040D190(); /* call 0x0040D190 */

loc_0040E8EB: ;
    esp = esp + 0x18;

loc_0040E8EE: ;
    edx = MEM32(esp + 0xB4);
    SET_LO8(eax, MEM8(edx + 0x31));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0040E922; /* je: equal / zero */

loc_0040E8FC: ;
    ecx = MEM32(ebp + 8);
    edx = ZX16(MEM16(ebp + 0x28));
    esi = MEM32(esp + 0xAC);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0040DE40(); /* call 0x0040DE40 */

loc_0040E917: ;
    esp = esp + 8;
    esi++;
    MEM32(esp + 0xAC) = esi;

loc_0040E922: ;
    eax = MEM32(esp + 0xA8);
    xmm7 = MEMF(esp + 0x418); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    edx = MEM32(esp + 0xB0);
    eax--;
    MEM32(esp + 0xA8) = eax;
    ebx = eax;

loc_0040E94E: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0040E1C0; /* jne: not equal / not zero */

loc_0040E956: ;
    edi = MEM32(esp + 0xB4);
    g_seh_ebp = ebp; sub_0040E968(); return; /* tail jmp 0x0040E968 */

}

/**
 * sub_0040EB50
 * Original: 0x0040EB50 - 0x0040EB70 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040EB50(void)
{

loc_0040EB50: ;
    edx = MEM32(edx);
    edx = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    eax = MEM32(edx + eax * 8 + 0x14);
    esi = ecx;
    esi = esi >> 3;
    eax = ZX8(MEM8(eax + esi));
    ecx = ecx & 7;
    eax = eax >> LO8(ecx);
    POP32(esp, esi);
    eax = eax & 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0040EB70
 * Original: 0x0040EB70 - 0x0040EBEE (126 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040EB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040EB70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax);
    esi = MEM32(esi + 0x1C);
    edi = edi + edi * 2;
    edi = edi << 3;
    ebx = MEM32(esi + edi + 4);
    edx = 0; /* xor self */
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(ebx, edx)) goto loc_0040EBE9; /* je: equal / zero */

loc_0040EB93: ;
    MEM32(ecx) = edx;
    esi = MEM32(eax);
    eax = MEM32(esi + 0x1C);
    ebx = MEM32(eax + edi + 4);
    eax = eax + edi;
    ebx--;
    if ((ebx == 0)) goto loc_0040EBE9; /* je: equal / zero */

loc_0040EBA3: ;
    PUSH32(esp, ebp);
    ebp = ecx + 4;

loc_0040EBA7: ;
    eax = MEM32(eax + 0x14);
    ebx = edx;
    ebx = ebx >> 3;
    SET_LO8(eax, MEM8(ebx + eax));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 7);
    SET_LO8(eax, LO8(eax) >> LO8(ecx));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    if (TEST_Z(LO8(eax), 1)) goto loc_0040EBC4; /* je: equal / zero */

loc_0040EBC1: ;
    eax++;
    goto loc_0040EBC9;

loc_0040EBC4: ;
    ecx = MEM32(esi + 0x24);
    eax = eax + ecx;

loc_0040EBC9: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ebp) = eax;
    esi = MEM32(ecx);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + edi + 4);
    eax = eax + edi;
    edx++;
    ebp = ebp + 4;
    ecx--;
    if (CMP_B(edx, ecx)) goto loc_0040EBA7; /* jb: below (unsigned <) */

loc_0040EBE8: ;
    POP32(esp, ebp);

loc_0040EBE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040EBF0
 * Original: 0x0040EBF0 - 0x0040ED5E (366 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040EBF0(void)
{
    uint32_t ebp;
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040EBF0: ;
    esp = esp - 0x58;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x1C);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + eax * 2;
    eax = MEM32(edx + eax * 8);
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, ebx);
    eax = eax + edx;
    MEM16(ecx + 0x8A) = 0xFFFF;
    MEMF(ecx + 0x80) = xmm0; /* movss */
    MEM8(ecx + 0x84) = 0xF;
    MEM8(ecx + 0x87) = 2;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x68);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    eax = 0; /* xor self */
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x78) = eax;
    MEM32(ecx + 0x7C) = eax;
    MEM8(ecx + 0x85) = LO8(eax);
    MEM8(ecx + 0x86) = LO8(eax);
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    PUSH32(esp, edi);
    edi = ecx + 0x44;
    ebx = 1;
    MEM16(edi + 0x44) = LO16(ebx);
    MEM16(ecx + 0x88) = LO16(ebx);
    ecx = MEM32(ecx);
    esi = MEM32(ecx + 0x20);
    edx = MEM32(esi + 0xC);
    MEM32(edi + 0x24) = edx;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 0x28) = eax;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x2C) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(edi + 0x30) = edx;
    SET_LO8(edx, MEM8(edi + 0x43));
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0); sub_003D12B0(); /* call 0x003D12B0 */

loc_0040ECA0: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D13D0(); /* call 0x003D13D0 */

loc_0040ECAA: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    esp = esp + 8;
    MEM8(ebp + 0xD) = LO8(ebx);
    MEMF(ebp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040ECDA: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    MEM8(ebp + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040ECE6: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040ECF3: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040ED01: ;
    xmm0 = MEMF(esp + 0x54); /* movss */
    MEMF(ebp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    ecx = ZX8(LO8(eax));
    MEMF(ebp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    ebx = ebx | ecx;
    MEMF(ebp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEM32(ebp + 0x10) = ebx;
    MEMF(ebp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(ebp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    POP32(esp, edi);
    MEMF(ebp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    POP32(esp, esi);
    MEMF(ebp + 0x28) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040ED60
 * Original: 0x0040ED60 - 0x0040F016 (694 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040ED60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040ED60: ;
    PUSH32(esp, ecx);
    xmm1 = MEMF(edi); /* movss */
    fp_push(MEMF(0x648D14)); /* fld float */
    xmm1 = xmm1 - MEMF(esi); /* subss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(ebp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edi + 8); /* movss */
    xmm1 = xmm1 - MEMF(esi + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    MEMF(ebp + 8) = xmm1; /* movss */
    eax = MEM32(edi + 0x10);
    ebx = MEM32(esi + 0x10);
    eax = eax >> 0x10;
    ecx = ZX8(LO8(eax));
    edx = ebx;
    MEM32(esp + 8) = ecx;
    edx = edx >> 0x10;
    eax = ZX8(LO8(edx));
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040EDF3: ;
    edx = MEM32(edi + 0x10);
    ecx = 0; /* xor self */
    edx = edx >> 8;
    SET_HI8(ecx, LO8(eax));
    eax = ZX8(LO8(edx));
    MEM32(esp + 8) = eax;
    ebx = ebx >> 8;
    edx = ZX8(LO8(ebx));
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040EE29: ;
    ecx = MEM32(esp + 8);
    edx = ZX8(MEM8(esi + 0x10));
    SET_LO8(ecx, LO8(eax));
    eax = ZX8(MEM8(edi + 0x10));
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = edx;
    ecx = ecx << 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040EE5D: ;
    ecx = MEM32(esp + 8);
    eax = ZX8(LO8(eax));
    ecx = ecx | eax;
    MEM32(ebp + 0x10) = ecx;
    ecx = ZX8(MEM8(esi + 0xC));
    edx = ZX8(MEM8(edi + 0xC));
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0040EE90: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    MEM8(ebp + 0xC) = LO8(eax);
    xmm0 = MEMF(edi + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x20); /* subss */
    eax = ZX8(MEM8(0x84BDFE));
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x20); /* addss */
    MEMF(ebp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x24); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x24); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x24); /* addss */
    MEMF(ebp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x28); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x28); /* subss */
    eax = eax + 0xFFFFFFFCu;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x28); /* addss */
    MEMF(ebp + 0x28) = xmm0; /* movss */
    if (CMP_A(eax, 6)) goto loc_0040F012; /* ja: above (unsigned >) */

loc_0040EEF4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x40F018); /* switch: 7 entries, 4 targets */
    if (_jt == 0x0040EEFBu) goto loc_0040EEFB;
    if (_jt == 0x0040EF1Cu) goto loc_0040EF1C;
    if (_jt == 0x0040EFDDu) goto loc_0040EFDD;
    if (_jt == 0x0040F012u) goto loc_0040F012;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0040EEFB: ;
    xmm0 = MEMF(esi + 0x2C); /* movss */
    xmm1 = MEMF(edi + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ebp + 0x2C) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0040EF1C: ;
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm3 = MEMF(edi + 0x14); /* movss */
    xmm4 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(ebp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    xmm3 = MEMF(edi + 0x18); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(ebp + 0x18) = xmm0; /* movss */
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(edi + 0x1C);
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm3 = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x10) = ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E6C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0040EFA9; /* jbe: below or equal (unsigned <=) */

loc_0040EF8C: ;
    xmm0 = MEMF(edi + 0x1C); /* movss */
    /* comiss xmm0, MEMF(esi + 0x1C) - sets EFLAGS */
    xmm0 = MEMF(esp + 0x10); /* movss */
    if ((xmm0 <= MEMF(esi + 0x1C))) goto loc_0040EFA3; /* jbe: below or equal (unsigned <=) */

loc_0040EF9D: ;
    xmm3 = xmm3 + xmm4; /* addss */
    goto loc_0040EFAF;

loc_0040EFA3: ;
    xmm0 = xmm0 + xmm4; /* addss */
    goto loc_0040EFAF;

loc_0040EFA9: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_0040EFAF: ;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    MEMF(ebp + 0x1C) = xmm1; /* movss */
    if ((xmm1 < xmm4)) goto loc_0040F012; /* jb: below (unsigned <) */

loc_0040EFC5: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    if ((xmm0 >= xmm4)) goto loc_0040EFC5; /* jae: above or equal (unsigned >=) */

loc_0040EFD4: ;
    MEMF(ebp + 0x1C) = xmm1; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0040EFDD: ;
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm1 = MEMF(edi + 0x14); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ebp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x2C); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x2C); /* addss */
    MEMF(ebp + 0x2C) = xmm0; /* movss */

loc_0040F012: ;
    POP32(esp, ebp);
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
 * sub_0040F040
 * Original: 0x0040F040 - 0x0040F30F (719 bytes, 253 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040F040(void)
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

loc_0040F040: ;
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp);
    ecx = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    eax = edi + edi * 2;
    eax = eax << 3;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + eax + 4);
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + 0x3C);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x28) = edx;
    if (CMP_EQ(edi, eax)) goto loc_0040F0D3; /* je: equal / zero */

loc_0040F077: ;
    ecx = eax + 1;
    if (CMP_NE(edi, ecx)) goto loc_0040F096; /* jne: not equal / not zero */

loc_0040F07E: ;
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(ebp + 0x28);
    MEM32(ebp + 0x28) = eax;
    MEM32(ebp + 0x2C) = ecx;
    esi = MEM32(edx + 0x18);
    eax = edi + 1;
    if (CMP_AE(eax, esi)) goto loc_0040F0D3; /* jae: above or equal (unsigned >=) */

loc_0040F094: ;
    goto loc_0040F0CA;

loc_0040F096: ;
    eax--;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_NE(edi, eax)) goto loc_0040F0AC; /* jne: not equal / not zero */

loc_0040F09C: ;
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(ebp + 0x2C);
    MEM32(ebp + 0x2C) = eax;
    MEM32(ebp + 0x28) = ecx;
    eax = edi;
    goto loc_0040F0CB;

loc_0040F0AC: ;
    ecx = MEM32(ebp + 0x28);
    eax = edi;
    PUSH32(esp, 0); sub_0040EB70(); /* call 0x0040EB70 */

loc_0040F0B6: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(edx + 0x18);
    eax = edi + 1;
    esp = esp + 4;
    if (CMP_AE(eax, ecx)) goto loc_0040F0D3; /* jae: above or equal (unsigned >=) */

loc_0040F0C7: ;
    ecx = MEM32(ebp + 0x2C);

loc_0040F0CA: ;
    PUSH32(esp, ebp);

loc_0040F0CB: ;
    PUSH32(esp, 0); sub_0040EB70(); /* call 0x0040EB70 */

loc_0040F0D0: ;
    esp = esp + 4;

loc_0040F0D3: ;
    eax = MEM32(ebp + 4);
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = esi;
    if (CMP_BE(eax & eax, 0)) goto loc_0040F308; /* jbe: below or equal (unsigned <=) */

loc_0040F0E8: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    goto loc_0040F0F0;

    /* nop */

loc_0040F0F0: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(esp + 0x14);
    edx = edx + ecx;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(edx + 0x10);
    eax = esi;
    eax = eax >> 3;
    SET_LO8(edx, MEM8(eax + edx));
    ecx = esi;
    ecx = ecx & 7;
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    MEM32(esp + 0x20) = ecx;
    if (TEST_NZ(LO8(edx), 1)) goto loc_0040F12C; /* jne: not equal / not zero */

loc_0040F11B: ;
    eax = MEM32(esp + 0x10);
    MEM8(ebx + eax + 0xD) = 0;
    MEM32(ebp + 4) = MEM32(ebp + 4) - 1;
    goto loc_0040F2F3;

loc_0040F12C: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x14);
    SET_LO8(edx, MEM8(eax + edx));
    SET_LO8(ecx, MEM8(esp + 0x20));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    if (TEST_Z(LO8(edx), 1)) goto loc_0040F2CB; /* je: equal / zero */

loc_0040F145: ;
    ecx = MEM32(ebp + 0x3C);
    if (CMP_EQ(edi, ecx)) goto loc_0040F262; /* je: equal / zero */

loc_0040F150: ;
    ecx++;
    if (CMP_NE(edi, ecx)) goto loc_0040F20A; /* jne: not equal / not zero */

loc_0040F159: ;
    if (TEST_Z(edi, edi)) goto loc_0040F1D8; /* je: equal / zero */

loc_0040F15D: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 0x14);
    if (CMP_AE(esi, MEM32(edx + ecx + -20))) goto loc_0040F1D8; /* jae: above or equal (unsigned >=) */

loc_0040F16E: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + -8);
    SET_LO8(edx, MEM8(eax + ecx));
    SET_LO8(ecx, MEM8(esp + 0x20));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    if (TEST_Z(LO8(edx), 1)) goto loc_0040F1D8; /* je: equal / zero */

loc_0040F183: ;
    eax = edi + -1;
    ecx = esi;
    edx = ebp;
    PUSH32(esp, 0); sub_0040EB50(); /* call 0x0040EB50 */

loc_0040F18F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0040F1D8; /* je: equal / zero */

loc_0040F193: ;
    esi = MEM32(ebp + 0x38);
    edi = MEM32(ebp + 0x34);
    eax = MEM32(esp + 0x34);
    esi = esi + ebx;
    edi = edi + ebx;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 0x18);
    eax++;
    if (CMP_AE(eax, edx)) goto loc_0040F262; /* jae: above or equal (unsigned >=) */

loc_0040F1B8: ;
    edx = MEM32(ebp + 0x38);
    ecx = MEM32(ebp + 0x2C);
    edx = edx + ebx;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + edx * 4);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); sub_0040EBF0(); /* call 0x0040EBF0 */

loc_0040F1D0: ;
    esp = esp + 8;
    goto loc_0040F262;

loc_0040F1D8: ;
    edx = MEM32(ebp + 0x34);
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(eax + esi * 4);
    edx = edx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0040EBF0(); /* call 0x0040EBF0 */

loc_0040F1EE: ;
    edx = MEM32(ebp + 0x38);
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(eax + esi * 4);
    edx = edx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = edi + 1;
    ecx = ebp;
    PUSH32(esp, 0); sub_0040EBF0(); /* call 0x0040EBF0 */

loc_0040F205: ;
    esp = esp + 0x10;
    goto loc_0040F262;

loc_0040F20A: ;
    edx = MEM32(ebp + 0x34);
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(eax + esi * 4);
    edx = edx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0040EBF0(); /* call 0x0040EBF0 */

loc_0040F220: ;
    edx = MEM32(ebp);
    eax = MEM32(edx + 0x1C);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(eax + ecx + 0x1C);
    esp = esp + 8;
    if (CMP_AE(esi, edx)) goto loc_0040F251; /* jae: above or equal (unsigned >=) */

loc_0040F235: ;
    edx = MEM32(ebp + 0x38);
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(eax + esi * 4);
    edx = edx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = edi + 1;
    ecx = ebp;
    PUSH32(esp, 0); sub_0040EBF0(); /* call 0x0040EBF0 */

loc_0040F24C: ;
    esp = esp + 8;
    goto loc_0040F262;

loc_0040F251: ;
    esi = MEM32(ebp + 0x34);
    edi = MEM32(ebp + 0x38);
    esi = esi + ebx;
    edi = edi + ebx;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0040F262: ;
    edx = MEM32(esp + 0x2C);
    edi = MEM32(edx + 0x24);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp);
    fp_push(MEMF(edx + 0x28)); /* fld float */
    esi = MEM32(esp + 0x30);
    ecx = ebx + eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esi;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esi = esi - edx;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(esi & esi, 0)) goto loc_0040F297; /* jge: greater or equal (signed >=) */

loc_0040F291: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0040F297: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEM32(esp + 0x20) = edi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(edi & edi, 0)) goto loc_0040F2AB; /* jge: greater or equal (signed >=) */

loc_0040F2A5: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0040F2AB: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    edi = MEM32(ebp + 0x38);
    esi = MEM32(ebp + 0x34);
    PUSH32(esp, ecx);
    edi = edi + ebx;
    esi = esi + ebx;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0040ED60(); /* call 0x0040ED60 */

loc_0040F2C1: ;
    edi = MEM32(esp + 0x3C);
    esi = MEM32(esp + 0x20);
    goto loc_0040F2E6;

loc_0040F2CB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x28);
    edx = MEM32(ecx + esi * 4);
    eax = eax + ebx;
    PUSH32(esp, eax);
    edx = edx + MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0040EBF0(); /* call 0x0040EBF0 */

loc_0040F2E6: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    eax = eax + ebx;
    MEM8(eax + 0xD) = 1;

loc_0040F2F3: ;
    eax = MEM32(esp + 0x24);
    esi++;
    ebx = ebx + 0x30;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_B(esi, eax)) goto loc_0040F0F0; /* jb: below (unsigned <) */

loc_0040F307: ;
    POP32(esp, ebx);

loc_0040F308: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0040F310
 * Original: 0x0040F310 - 0x0040F3C9 (185 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040F310(void)
{

loc_0040F310: ;
    PUSH32(esp, 0);
    MEM32(0x81B808) = 0x81B810;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0040F321: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F330: ;
    edx = 0; /* xor self */
    ecx = 0x40340;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F346: ;
    edx = 0x207;
    ecx = 0x4033C;
    MEM32(0x549AEC) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F35F: ;
    edx = 0x8007;
    ecx = 0x40350;
    MEM32(0x549AE0) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F378: ;
    edx = 0x300;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8007;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F391: ;
    edx = 0x306;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F3AA: ;
    ecx = 0x5A0350;
    PUSH32(esp, 0);
    eax = 0x81B810;
    edx = ecx;
    MEM32(0x549AF4) = 0x306;
    PUSH32(esp, 0); sub_0040C5C0(); /* call 0x0040C5C0 */

loc_0040F3C7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040F3D0
 * Original: 0x0040F3D0 - 0x0040F567 (407 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040F3D0(void)
{
    int _cf = 0; /* carry flag */
    float xmm0;

loc_0040F3D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x82831C);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x828308;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    MEM32(0x81B808) = 0x81B810;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0040F3F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0040F3F9: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F408: ;
    esi = MEM32(0x84BDC8);
    edx = esi;
    ecx = 0x40340;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F424: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AEC) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F439: ;
    edx = 1;
    ecx = 0x40300;
    MEM32(0x549AE0) = 0x206;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F452: ;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AE8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F46B: ;
    edx = 0x308;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F484: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x308;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F49D: ;
    xmm0 = MEMF(0x648E60); /* movss */
    edx = 1;
    ecx = 0x40338;
    MEM32(0x549AF4) = 0x303;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F4C4: ;
    esi = MEM32(esp + 4);
    edx = esi;
    ecx = 0x40388;
    MEM32(0x549B3C) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F4DE: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549B30) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F4F0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    eax = 0x81B810;
    edx = 0x5A0350;
    MEM32(0x549AF8) = 0;
    PUSH32(esp, 0); sub_0040C5C0(); /* call 0x0040C5C0 */

loc_0040F50F: ;
    esp = esp + 4;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0040F519: ;
    edx = 0x205;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F528: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x205;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F541: ;
    edx = 0x7F;
    ecx = 0x40368;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0040F55A: ;
    MEM32(0x549B14) = 0x7F;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0040F570
 * Original: 0x0040F570 - 0x0040F5A7 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040F570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040F570: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BDC8);
    if (TEST_Z(eax, eax)) { sub_0040F5A7(); return; } /* je: equal / zero */

loc_0040F584: ;
    eax = MEM32(0x828430);
    if (TEST_NZ(eax, eax)) goto loc_0040F598; /* jne: not equal / not zero */

loc_0040F58D: ;
    PUSH32(esp, 0); sub_0040F310(); /* call 0x0040F310 */

loc_0040F592: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0040F598: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0040F3D0(); /* call 0x0040F3D0 */

loc_0040F59E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0040F7A0
 * Original: 0x0040F7A0 - 0x0040F7F1 (81 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040F7A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0040F7A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BDC8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_0040F7F1(); return; } /* je: equal / zero */

loc_0040F7B7: ;
    eax = MEM32(0x828430);
    if (TEST_NZ(eax, eax)) goto loc_0040F7D9; /* jne: not equal / not zero */

loc_0040F7C0: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00410300(); /* call 0x00410300 */

loc_0040F7CF: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0040F7D9: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00410630(); /* call 0x00410630 */

loc_0040F7E7: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00410060
 * Original: 0x00410060 - 0x0041015F (255 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00410060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00410060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
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

loc_0041008E: ;
    eax = MEM32(esp + 0x24);
    edi = MEM32(eax);
    eax = MEM32(0x84BDBC);
    esp = esp + 0xC;
    if (CMP_EQ(edi, eax)) goto loc_004100AC; /* je: equal / zero */

loc_004100A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_004100A6: ;
    MEM32(0x84BDBC) = edi;

loc_004100AC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(ebx + 0x7C);
    MEM32(0x757D6C) = ecx;
    if (TEST_Z(esi, esi)) { sub_0041015F(); return; } /* je: equal / zero */

loc_004100BD: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_004100CC: ;
    ecx = esp + 0x70;
    edx = esp + 0x30;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x2C);
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
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_00410149; /* jne: not equal / not zero */

loc_00410135: ;
    edi = eax;
    edi = edi << 4;
    ecx = 0xC;
    esi = edx;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00410149: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x34;
    ecx = eax;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00410156: ;
    MEM8(0x84BDC1) = 0;
    g_seh_ebp = ebp; sub_004101A5(); return; /* tail jmp 0x004101A5 */

}

/**
 * sub_00410300
 * Original: 0x00410300 - 0x00410628 (808 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00410300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00410300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    SET_LO8(eax, MEM8(ebp + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = (float)(int32_t)MEM32(0x84BDC8); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0041034B; /* jne: not equal / not zero */

loc_0041033E: ;
    ecx = 0x10;
    esi = edx;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0041034B: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, 8);
    edi = esp + 0x44;
    ecx = 0x10;
    PUSH32(esp, 0); sub_0040C460(); /* call 0x0040C460 */

loc_00410360: ;
    eax = MEM32(ebx);
    esi = MEM32(ebx + 4);
    edi = MEM32(esp + 0x44);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x34) = 0;
    if (CMP_BE(eax & eax, 0)) goto loc_004105C4; /* jbe: below or equal (unsigned <=) */

loc_00410380: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(esp + 0x4C);
    MEM32(esp + 0x30) = eax;
    goto loc_00410390;

    /* nop */

loc_00410390: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0041059F; /* je: equal / zero */

loc_0041039B: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_004103AF; /* je: equal / zero */

loc_004103A2: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    goto loc_004103BA;

loc_004103AF: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);

loc_004103BA: ;
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_004103BF: ;
    if (TEST_NZ(ebx, ebx)) goto loc_004103E6; /* jne: not equal / not zero */

loc_004103C3: ;
    eax = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x48);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    if (CMP_BE(eax, ebx)) ebx = eax; /* cmovbe */
    edx = ebx;
    edx = edx << 0x12;
    edx = edx + 0x40001818;
    eax = eax - ebx;
    MEM32(edi) = edx;
    MEM32(esp + 0x44) = eax;
    edi = edi + 4;

loc_004103E6: ;
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x2C); /* addss */
    eax = ZX8(MEM8(esi + 0xC));
    xmm0 = xmm0 * MEMF(ebp + 0x14); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm1 = MEMF(0x648EEC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648CEC); /* mulss */
    esi = esp + 0x50;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00068950(); /* call 0x00068950 */

loc_00410436: ;
    xmm1 = MEMF(0x75EF20); /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x75EF24); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(edi) = ecx;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = edx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = eax;
    xmm1 = MEMF(0x75EF30); /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x75EF34); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(edi + 0x10) = edx;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(esp + 0x2C);
    MEM32(edi + 0x18) = edx;
    MEM32(edi + 0x1C) = eax;
    xmm1 = MEMF(0x75EF40); /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    edi = edi + 0x10;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x75EF44); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEM32(edi + 0x10) = ecx;
    edi = edi + 0x10;
    MEMF(esp + 0x1C) = xmm2; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = edx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = eax;
    xmm1 = MEMF(0x75EF50); /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x75EF54); /* movss */
    ebx = ebx - 4;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    ebx = ebx - 4;
    edi = edi + 0x10;
    ebx = ebx - 4;
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    edx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x38);
    MEM32(edi) = edx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esp + 0x2C);
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esp + 0x34);
    edi = edi + 0x10;
    ebx = ebx - 4;
    eax++;
    MEM32(esp + 0x34) = eax;

loc_0041059F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax + 0xC);
    ecx = ecx + 0x40;
    esi = esi + edx;
    edx = MEM32(eax);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x34);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x38) = esi;
    if (CMP_B(ecx, edx)) goto loc_00410390; /* jb: below (unsigned <) */

loc_004105C4: ;
    edx = MEM32(0x5499E8);
    MEM32(edi) = 0x417FC;
    MEM32(edi + 4) = 0;
    edi = edi + 8;
    MEM32(edx) = edi;
    edx = 0; /* xor self */
    ecx = 0x40338;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_004105E8: ;
    esi = 0; /* xor self */
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x549B3C) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_004105FF: ;
    PUSH32(esp, esi);
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0041060F: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0041061B: ;
    POP32(esp, edi);
    MEM32(0x549AE8) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00410630
 * Original: 0x00410630 - 0x00410AFF (1231 bytes, 303 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00410630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00410630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(0x84BDC8); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    PUSH32(esp, edi);
    esi = esp + 0x74;
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00068950(); /* call 0x00068950 */

loc_00410676: ;
    esi = MEM32(ebp + 8);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, 8);
    edi = esp + 0x78;
    ecx = 0x18;
    PUSH32(esp, 0); sub_0040C460(); /* call 0x0040C460 */

loc_0041068D: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(ebp + 0xC); /* divss */
    esi = MEM32(esp + 0x78);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x70) = ecx;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEM32(esp + 0x3C) = 0;
    if (CMP_BE(eax & eax, 0)) goto loc_00410AE1; /* jbe: below or equal (unsigned <=) */

loc_004106C3: ;
    edi = MEM32(esp + 0x80);
    /* nop */

loc_004106D0: ;
    SET_LO8(eax, MEM8(ecx + 0xD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00410ACB; /* je: equal / zero */

loc_004106DF: ;
    xmm0 = MEMF(ebp + 0xC); /* movss */
    eax = esp + 0x40;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    xmm0 = MEMF(esp + 0x8C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(ecx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x2C); /* addss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEMF(esp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x10), _icall_esp); /* indirect call */
    }

loc_00410752: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0041078D; /* jne: not equal / not zero */

loc_00410759: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm2 = xmm0; /* movaps */
    goto loc_00410796;

loc_0041078D: ;
    xmm2 = MEMF(esp + 0x9C); /* movss */

loc_00410796: ;
    xmm0 = MEMF(esp + 0x90); /* movss */
    ecx = esp + 0x40;
    edx = ecx;
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    xmm0 = MEMF(esp + 0x88); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    if (TEST_NZ(edi, edi)) goto loc_00410804; /* jne: not equal / not zero */

loc_004107E2: ;
    eax = MEM32(esp + 0x78);
    edi = MEM32(esp + 0x7C);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    if (CMP_BE(eax, edi)) edi = eax; /* cmovbe */
    eax = eax - edi;
    MEM32(esp + 0x78) = eax;
    eax = edi;
    eax = eax << 0x12;
    eax = eax + 0x40001818;
    MEM32(esi) = eax;
    esi = esi + 4;

loc_00410804: ;
    ecx = esp + 0x24;
    edx = ecx;
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    xmm0 = MEMF(esp + 0x84); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x18;
    ecx = eax;
    MEMF(esp + 0x94) = xmm2; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
    xmm0 = MEMF(esp + 0x94); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    eax = esp + 0x24;
    ecx = esp + 0x30;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648D10); /* movss */
    edx = esp + 0x30;
    eax = edx;
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x98); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x4C;
    edx = esp + 0x30;
    eax = esp + 0x40;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x58;
    edx = esp + 0x4C;
    eax = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x64;
    edx = esp + 0x58;
    eax = esp + 0x24;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x64;
    edx = esp + 0x18;
    eax = esp + 0x40;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x40);
    MEM32(esi) = ecx;
    edx = MEM32(esp + 0x44);
    MEM32(esi + 4) = edx;
    eax = MEM32(esp + 0x48);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ebx;
    ecx = MEM32(0x75EF00);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(0x75EF04);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(esp + 0x4C);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(esp + 0x50);
    esi = esi + 0x18;
    MEM32(esi + 4) = ecx;
    edx = MEM32(esp + 0x54);
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = ebx;
    eax = MEM32(0x75EF08);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x75EF0C);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(esp + 0x58);
    edi = edi - 6;
    esi = esi + 0x18;
    edi = edi - 6;
    MEM32(esi) = edx;
    eax = MEM32(esp + 0x5C);
    MEM32(esi + 4) = eax;
    ecx = MEM32(esp + 0x60);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ebx;
    edx = MEM32(0x75EF10);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(0x75EF14);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(esp + 0x64);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(esp + 0x68);
    esi = esi + 0x18;
    MEM32(esi + 4) = edx;
    eax = MEM32(esp + 0x6C);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esi + 0xC) = ebx;
    ecx = MEM32(0x75EF18);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(0x75EF1C);
    ecx = MEM32(esp + 0x70);
    edi = edi - 6;
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    edi = edi - 6;
    eax++;
    MEM32(esp + 0x3C) = eax;

loc_00410ACB: ;
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 0xC);
    edx = MEM32(esp + 0x3C);
    (void)0; /* cmp edx, MEM32(eax) - flags set for next jcc */
    MEM32(esp + 0x70) = ecx;
    if (CMP_B(edx, MEM32(eax))) goto loc_004106D0; /* jb: below (unsigned <) */

loc_00410AE1: ;
    eax = MEM32(0x5499E8);
    MEM32(esi) = 0x417FC;
    MEM32(esi + 4) = 0;
    esi = esi + 8;
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00410B00
 * Original: 0x00410B00 - 0x00410BD4 (212 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00410B00(void)
{

loc_00410B00: ;
    edx = 0; /* xor self */
    ecx = 0x40338;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00410B0C: ;
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x549B3C) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00410B25: ;
    PUSH32(esp, 0);
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00410B36: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00410B42: ;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00410B5B: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00410B74: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00410B8D: ;
    PUSH32(esp, 0x901);
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00410BA1: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00410BB0: ;
    edx = 1;
    ecx = 0x40340;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00410BC9: ;
    MEM32(0x549AEC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00410BE0
 * Original: 0x00410BE0 - 0x00410C12 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00410BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00410BE0: ;
    eax = MEM32(0x84BDC8);
    esp = esp - 0x5C;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    if (TEST_Z(eax, eax)) { sub_00410C12(); return; } /* je: equal / zero */

loc_00410BF1: ;
    eax = MEM32(0x828430);
    if (TEST_NZ(eax, eax)) goto loc_00410C04; /* jne: not equal / not zero */

loc_00410BFA: ;
    PUSH32(esp, 0); sub_0040F310(); /* call 0x0040F310 */

loc_00410BFF: ;
    POP32(esp, ebp);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

loc_00410C04: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0040F3D0(); /* call 0x0040F3D0 */

loc_00410C0A: ;
    esp = esp + 4;
    POP32(esp, ebp);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00410E20
 * Original: 0x00410E20 - 0x00410E63 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00410E20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00410E20: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(edx));
    edx = MEM32(0x84BDC8);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_Z(edx, edx)) { sub_00410E63(); return; } /* je: equal / zero */

loc_00410E32: ;
    edx = MEM32(0x828430);
    if (TEST_NZ(edx, edx)) goto loc_00410E51; /* jne: not equal / not zero */

loc_00410E3C: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = ecx;
    PUSH32(esp, 0); sub_00410300(); /* call 0x00410300 */

loc_00410E4B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00410E51: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00410630(); /* call 0x00410630 */

loc_00410E5D: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00410EA0
 * Original: 0x00410EA0 - 0x0041128A (1002 bytes, 270 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00410EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00410EA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = MEM32(0x81B7C0);
    edx = MEM32(ebx + 0x5C);
    edi = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ecx | 0x80000000u;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003EC430(); /* call 0x003EC430 */

loc_00410ECE: ;
    eax = MEM32(esp + 0x20);
    esi = MEM32(eax);
    eax = MEM32(0x84BDBC);
    esp = esp + 0xC;
    if (CMP_EQ(esi, eax)) goto loc_00410EEC; /* je: equal / zero */

loc_00410EE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00410EE6: ;
    MEM32(0x84BDBC) = esi;

loc_00410EEC: ;
    if (TEST_Z(MEM8(ebx + 0x54), 1)) goto loc_0041112F; /* je: equal / zero */

loc_00410EF6: ;
    if (TEST_Z(edi, edi)) goto loc_00410F59; /* je: equal / zero */

loc_00410EFA: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00410F0C: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_00410F19: ;
    eax = MEM32(ebx + 0xC);
    SET_LO8(ecx, MEM8(0x547548));
    esp = esp + 8;
    eax = eax + 0x60;
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_00410F43; /* jne: not equal / not zero */

loc_00410F2D: ;
    edi = eax;
    edi = edi << 4;
    ecx = 0xC;
    esi = esp + 0x60;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00410F43: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x64;
    ecx = eax;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00410F50: ;
    MEM8(0x84BDC1) = 0;
    goto loc_00410F9F;

loc_00410F59: ;
    SET_LO8(eax, MEM8(0x84BDC1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00410F9F; /* jne: not equal / not zero */

loc_00410F62: ;
    eax = MEM32(ebx + 0xC);
    SET_LO8(ecx, MEM8(0x547548));
    eax = eax + 0x60;
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_00410F8A; /* jne: not equal / not zero */

loc_00410F73: ;
    edi = eax;
    edi = edi << 4;
    ecx = 0xC;
    esi = 0x828490;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00410F8A: ;
    PUSH32(esp, 0xC);
    edx = 0x828490;
    ecx = eax;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00410F98: ;
    MEM8(0x84BDC1) = 1;

loc_00410F9F: ;
    SET_LO8(eax, MEM8(0x84BE28));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0041112F; /* jne: not equal / not zero */

loc_00410FAC: ;
    edx = MEM32(ebx + 0x7C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x10);
    edx = 0x758224;
    PUSH32(esp, 0); sub_004130C0(); /* call 0x004130C0 */

loc_00410FC4: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40);
    edx = 0x758238;
    PUSH32(esp, 0); sub_004130C0(); /* call 0x004130C0 */

loc_00410FD5: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2E0);
    edx = 0x758278;
    PUSH32(esp, 0); sub_004130C0(); /* call 0x004130C0 */

loc_00410FE9: ;
    SET_LO8(eax, MEM8(ebx + 0x54));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), 4)) goto loc_0041112F; /* je: equal / zero */

loc_00410FF7: ;
    edx = 0x8284F0;
    ecx = 0xA7;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00411006: ;
    xmm3 = MEMF(0x648D10); /* movss */
    eax = esp + 0x40;
    ecx = esp + 0x18;
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    PUSH32(esp, 0); sub_0040B3D0(); /* call 0x0040B3D0 */

loc_0041102D: ;
    xmm4 = MEMF(esp + 0x20); /* movss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x18;
    MEM32(esp + 0x54) = eax;
    edx = esp + 0x24;
    eax = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x58) = eax;
    esi = 0; /* xor self */
    edi = edi;

loc_00411060: ;
    xmm0 = MEMF(esi + 0x75859C); /* movss */
    xmm1 = MEMF(esi + 0x758598); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x7585A0); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_00411098; /* ja: above (unsigned >) */

loc_00411095: ;
    xmm0 = xmm2; /* movaps */

loc_00411098: ;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x54);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + esi + 0xE0;
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0x58);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x50);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x5C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi = esi + 0x10;
    if (CMP_L(esi, 0x40)) goto loc_00411060; /* jl: less (signed <) */

loc_00411101: ;
    edx = esp + 0xE0;
    ecx = 0xAD;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00411112: ;
    edx = MEM32(0x84B7F4);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00411120: ;
    edx = 0x81B890;
    ecx = 0x67;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0041112F: ;
    SET_LO8(eax, MEM8(0x84BDC2));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0041114F; /* jne: not equal / not zero */

loc_00411138: ;
    ecx = MEM32(ebx + 8);
    ecx = ecx + 0x60;
    edx = 0x828440;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00411148: ;
    MEM8(0x84BDC2) = 1;

loc_0041114F: ;
    eax = MEM32(ebx + 0x14);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00411166; /* je: equal / zero */

loc_00411159: ;
    ecx = eax + 0x60;
    edx = 0x81BE00;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_00411166: ;
    SET_LO8(eax, MEM8(ebx + 0x53));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00411184; /* je: equal / zero */

loc_0041116D: ;
    eax = MEM32(ebx + 0x78);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00411184; /* je: equal / zero */

loc_00411177: ;
    ecx = eax + 0x60;
    edx = 0x81BE10;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_00411184: ;
    eax = MEM32(ebx + 0x64);
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    if (CMP_EQ(eax, 0xFFFF)) goto loc_004111B3; /* je: equal / zero */

loc_00411196: ;
    xmm1 = MEMF(ebx + 0x60); /* movss */
    ecx = eax + 0x60;
    edx = esp + 0x30;
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_004111B3: ;
    eax = MEM32(ebx + 0x6C);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_004111DA; /* je: equal / zero */

loc_004111BD: ;
    xmm1 = MEMF(ebx + 0x68); /* movss */
    ecx = eax + 0x60;
    edx = esp + 0x30;
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_004111DA: ;
    if (CMP_EQ(MEM32(ebx + 0x14), 0xFFFF)) goto loc_004111F6; /* je: equal / zero */

loc_004111E3: ;
    eax = MEM32(0x7502EC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x549B68) = 1;
    if (TEST_NZ(eax, eax)) goto loc_00411200; /* jne: not equal / not zero */

loc_004111F6: ;
    MEM32(0x549B68) = 0;

loc_00411200: ;
    eax = MEM32(0x5499F0);
    ecx = MEM32(ebx + 0x70);
    eax = eax | 0x2000;
    (void)0; /* cmp ecx, 0xFFFF - flags set for next jcc */
    MEM32(0x5499F0) = eax;
    if (CMP_EQ(ecx, 0xFFFF)) goto loc_00411283; /* je: equal / zero */

loc_0041121A: ;
    ebx = MEM32(ebx + 0x74);
    if (CMP_NE(ebx, 1)) goto loc_00411236; /* jne: not equal / not zero */

loc_00411222: ;
    ecx = ecx + 0x60;
    edx = 0x74FB40;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_0041122F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00411236: ;
    if (CMP_NE(ebx, 4)) goto loc_0041124F; /* jne: not equal / not zero */

loc_0041123B: ;
    ecx = ecx + 0x60;
    edx = 0x74FB40;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00411248: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0041124F: ;
    eax = ebx * 4;
    ebx = ecx + 0x60;
    if (TEST_NZ(MEM8(0x547548), 0x10)) goto loc_00411276; /* jne: not equal / not zero */

loc_00411262: ;
    edi = ebx;
    edi = edi << 4;
    ecx = eax;
    esi = 0x74FB40;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00411276: ;
    PUSH32(esp, eax);
    edx = 0x74FB40;
    ecx = ebx;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00411283: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00411290
 * Original: 0x00411290 - 0x00411A10 (1920 bytes, 565 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00411290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00411290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    edi = esp + 0x44;
    ecx = 0x20;
    PUSH32(esp, 0); sub_0040C460(); /* call 0x0040C460 */

loc_004112B4: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    esi = ecx;
    esi = esi >> 5;
    edi = ZX16(LO16(esi));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esp = esp + 4;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebp + 8);
    edi = MEM32(edx + 4);
    SET_LO8(edx, MEM8(ebp + 0x14));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [edi] */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_004116BE; /* je: equal / zero */

loc_004112E8: ;
    eax--;
    xmm1 = MEMF(ebp + 0x10); /* movss */
    xmm2 = MEMF(ebp + 0xC); /* movss */
    if (((int32_t)eax < 0)) goto loc_004114E3; /* js: sign (negative) */

loc_004112F9: ;
    eax++;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x40);

loc_00411302: ;
    edx = MEM32(esp + 0x44);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    if (CMP_BE(edx, ecx)) ecx = edx; /* cmovbe */
    edx = edx - ecx;
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001818;
    MEM32(eax) = ecx;
    eax = eax + 4;
    (void)0; /* test LO16(esi), LO16(esi) - flags set for next jcc */
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_004114D3; /* je: equal / zero */

loc_0041132C: ;
    /* nop */

loc_00411330: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    edi = edi + MEM32(ecx + 0xC);
    SET_LO8(ecx, MEM8(edx + 0xD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [edi] */
    MEM32(esp + 0x14) = edi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_004114C1; /* je: equal / zero */

loc_0041134A: ;
    xmm0 = MEMF(edx); /* movups */
    xmm4 = MEMF(ebx + 0x20); /* movaps */
    edi = ZX8(MEM8(edx + 0xC));
    xmm3 = MEMF(ebx + 0x30); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0xaa */
    xmm6 = xmm0; /* movaps */
    /* shufps xmm6, xmm0, 0x55 */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    xmm0 = MEMF(edx + 0x14); /* movss */
    /* mulps: xmm5 *= xmm4 (packed 4xfloat) */
    xmm4 = MEMF(ebx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    xmm4 = MEMF(ebx); /* movaps */
    /* mulps: xmm7 *= xmm4 (packed 4xfloat) */
    xmm0 = xmm0 * xmm2; /* mulss */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    ecx = esp + 0x30;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x18); /* movss */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    /* addps: xmm7 += xmm3 (packed 4xfloat) */
    MEMF(ecx) = xmm7; /* movaps */
    ecx = MEM32(edx + 0x10);
    edi = edi << 0x18;
    xmm0 = xmm0 * xmm1; /* mulss */
    edi = edi | ecx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x1C); /* movss */
    esi = 0; /* xor self */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    ecx = 0xFF;
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_004113FB; /* jbe: below or equal (unsigned <=) */

loc_004113C9: ;
    xmm0 = xmm0 * MEMF(0x648E8C); /* mulss */
    edx = esp + 0x2C;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(edx); /* movss */
    ecx = (int32_t)xmm0; /* cvtss2si */
    ecx = ecx >> 3;
    esi = ecx;
    esi = esi & 0xFFFFFF00u;
    esi = esi << 8;
    edx = 0; /* xor self */
    SET_HI8(edx, LO8(ecx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    ecx = edx;

loc_004113FB: ;
    edx = MEM32(esp + 0x30);
    MEM32(eax) = edx;
    ebx = MEM32(esp + 0x34);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = esi;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = ebx;
    ebx = MEM32(esp + 0x34);
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ebx;
    ebx = MEM32(esp + 0x38);
    MEM32(eax + 0x28) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 0x2C) = edi;
    eax = eax + 0x20;
    esi++;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = ebx;
    ebx = MEM32(esp + 0x34);
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ebx;
    ebx = MEM32(esp + 0x38);
    eax = eax + 0x20;
    MEM32(eax + 8) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edi;
    esi++;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = ebx;
    eax = eax + 0x20;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edi;
    edi = MEM32(esp + 0x14);
    esi++;
    MEM32(eax + 0x10) = esi;
    esi = MEM32(esp + 0x28);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x1C) = ebx;
    ebx = MEM32(ebp + 0x18);
    eax = eax + 0x20;
    ecx = ecx + 0xFFFF;
    MEM32(esp + 0x20) = ecx;

loc_004114C1: ;
    ebx = ebx + 0x40;
    (void)0; /* cmp MEM16(esp + 0x20), 0 - flags set for next jcc */
    MEM32(ebp + 0x18) = ebx;
    if (CMP_NE(MEM16(esp + 0x20), 0)) goto loc_00411330; /* jne: not equal / not zero */

loc_004114D3: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    ecx = MEM32(esp + 0x48);
    if ((MEM32(esp + 0x24) != 0)) goto loc_00411302; /* jne: not equal / not zero */

loc_004114E1: ;
    goto loc_004114E7;

loc_004114E3: ;
    eax = MEM32(esp + 0x40);

loc_004114E7: ;
    if (CMP_EQ(MEM16(esp + 0x10), 0)) goto loc_004119F1; /* je: equal / zero */

loc_004114F3: ;
    edx = MEM32(esp + 0x44);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    if (CMP_BE(edx, ecx)) ecx = edx; /* cmovbe */
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001818;
    MEM32(eax) = ecx;
    eax = eax + 4;
    /* nop */

loc_00411510: ;
    edx = MEM32(ebp + 8);
    esi = MEM32(edx + 0xC);
    /* TODO: prefetcht0 byte ptr [edi + esi] */
    ecx = edi;
    SET_LO8(edx, MEM8(ecx + 0xD));
    edi = edi + esi;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_004116AA; /* je: equal / zero */

loc_0041152D: ;
    xmm0 = MEMF(ecx); /* movups */
    xmm4 = MEMF(ebx + 0x20); /* movaps */
    edi = ZX8(MEM8(ecx + 0xC));
    xmm3 = MEMF(ebx + 0x30); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0xaa */
    xmm6 = xmm0; /* movaps */
    /* shufps xmm6, xmm0, 0x55 */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    xmm0 = MEMF(ecx + 0x14); /* movss */
    /* mulps: xmm5 *= xmm4 (packed 4xfloat) */
    xmm4 = MEMF(ebx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    xmm4 = MEMF(ebx); /* movaps */
    /* mulps: xmm7 *= xmm4 (packed 4xfloat) */
    xmm0 = xmm0 * xmm2; /* mulss */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    edx = esp + 0x30;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x18); /* movss */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    /* addps: xmm7 += xmm3 (packed 4xfloat) */
    MEMF(edx) = xmm7; /* movaps */
    edx = MEM32(ecx + 0x10);
    edi = edi << 0x18;
    xmm0 = xmm0 * xmm1; /* mulss */
    edi = edi | edx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x1C); /* movss */
    esi = 0; /* xor self */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    edx = 0xFF;
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_004115DC; /* jbe: below or equal (unsigned <=) */

loc_004115AC: ;
    xmm0 = xmm0 * MEMF(0x648E8C); /* mulss */
    ecx = esp + 0x2C;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    ecx = (int32_t)xmm0; /* cvtss2si */
    ecx = ecx >> 3;
    esi = ecx;
    esi = esi & 0xFFFFFF00u;
    esi = esi << 8;
    edx = 0; /* xor self */
    SET_HI8(edx, LO8(ecx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(edx, LO8(ecx));

loc_004115DC: ;
    ecx = MEM32(esp + 0x30);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = esi;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax + 0x20;
    MEM32(eax + 0xC) = edi;
    eax = eax + 0x20;
    esi++;
    MEM32(eax + -16) = esi;
    MEM32(eax + -12) = edx;
    MEM32(eax + -8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + -4) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edi;
    esi++;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x30);
    eax = eax + 0x20;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edi;
    edi = MEM32(esp + 0x14);
    esi++;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    eax = eax + 0x20;
    ecx = ecx + 0xFFFF;
    MEM32(esp + 0x10) = ecx;

loc_004116AA: ;
    ebx = ebx + 0x40;
    if (CMP_NE(MEM16(esp + 0x10), 0)) goto loc_00411510; /* jne: not equal / not zero */

loc_004116B9: ;
    goto loc_004119F1;

loc_004116BE: ;
    eax--;
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm1 = MEMF(ebp + 0xC); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x648E8C); /* movss */
    if (((int32_t)eax < 0)) goto loc_00411875; /* js: sign (negative) */

loc_004116DA: ;
    eax++;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x40);

loc_004116E3: ;
    edx = MEM32(esp + 0x44);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    if (CMP_BE(edx, ecx)) ecx = edx; /* cmovbe */
    edx = edx - ecx;
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001818;
    MEM32(eax) = ecx;
    eax = eax + 4;
    (void)0; /* test LO16(esi), LO16(esi) - flags set for next jcc */
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_00411865; /* je: equal / zero */

loc_0041170D: ;
    /* nop */

loc_00411710: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0xC);
    /* TODO: prefetcht0 byte ptr [edi + edx] */
    esi = edi;
    SET_LO8(ecx, MEM8(esi + 0xD));
    edi = edi + edx;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00411855; /* je: equal / zero */

loc_0041172D: ;
    ecx = ZX8(MEM8(esi + 0xC));
    xmm4 = MEMF(esi + 0x14); /* movss */
    edx = MEM32(esi + 0x10);
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    xmm4 = MEMF(esi + 0x18); /* movss */
    ecx = ecx << 0x18;
    xmm4 = xmm4 * xmm0; /* mulss */
    ecx = ecx | edx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm4 = MEMF(esi + 0x1C); /* movss */
    edi = 0; /* xor self */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    edx = 0xFF;
    if ((xmm4 <= xmm2)) goto loc_00411796; /* jbe: below or equal (unsigned <=) */

loc_00411768: ;
    xmm4 = xmm4 * xmm3; /* mulss */
    edx = esp + 0x2C;
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm4 = MEMF(edx); /* movss */
    edx = (int32_t)xmm4; /* cvtss2si */
    edx = edx >> 3;
    edi = edx;
    edi = edi & 0xFFFFFF00u;
    edi = edi << 8;
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(edx));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ebx, LO8(edx));
    edx = ebx;

loc_00411796: ;
    ebx = MEM32(esi);
    MEM32(eax) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edx;
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 0x1C) = ebx;
    ebx = MEM32(esi);
    MEM32(eax + 0x20) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(eax + 0x24) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(eax + 0x28) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0x2C) = ecx;
    eax = eax + 0x20;
    edi++;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 0x1C) = ebx;
    ebx = MEM32(esi);
    MEM32(eax + 0x20) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(eax + 0x24) = ebx;
    ebx = MEM32(esi + 8);
    eax = eax + 0x20;
    MEM32(eax + 8) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = ecx;
    edi++;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 0x1C) = ebx;
    ebx = MEM32(esi);
    eax = eax + 0x20;
    MEM32(eax) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(eax + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x1C);
    edi++;
    MEM32(eax + 0x10) = edi;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x1C) = edx;
    eax = eax + 0x20;
    ecx = ecx + 0xFFFF;
    MEM32(esp + 0x20) = ecx;

loc_00411855: ;
    if (CMP_NE(MEM16(esp + 0x20), 0)) goto loc_00411710; /* jne: not equal / not zero */

loc_00411861: ;
    esi = MEM32(esp + 0x28);

loc_00411865: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    ecx = MEM32(esp + 0x48);
    if ((MEM32(esp + 0x24) != 0)) goto loc_004116E3; /* jne: not equal / not zero */

loc_00411873: ;
    goto loc_00411879;

loc_00411875: ;
    eax = MEM32(esp + 0x40);

loc_00411879: ;
    if (CMP_EQ(MEM16(esp + 0x10), 0)) goto loc_004119F1; /* je: equal / zero */

loc_00411885: ;
    edx = MEM32(esp + 0x44);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    if (CMP_BE(edx, ecx)) ecx = edx; /* cmovbe */
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001818;
    MEM32(eax) = ecx;
    eax = eax + 4;
    /* nop */

loc_004118A0: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0xC);
    /* TODO: prefetcht0 byte ptr [edi + edx] */
    esi = edi;
    SET_LO8(ecx, MEM8(esi + 0xD));
    edi = edi + edx;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_004119E5; /* je: equal / zero */

loc_004118BD: ;
    edx = ZX8(MEM8(esi + 0xC));
    xmm4 = MEMF(esi + 0x14); /* movss */
    ecx = MEM32(esi + 0x10);
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    xmm4 = MEMF(esi + 0x18); /* movss */
    edx = edx << 0x18;
    xmm4 = xmm4 * xmm0; /* mulss */
    edx = edx | ecx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm4 = MEMF(esi + 0x1C); /* movss */
    edi = 0; /* xor self */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    ecx = 0xFF;
    if ((xmm4 <= xmm2)) goto loc_00411926; /* jbe: below or equal (unsigned <=) */

loc_004118F8: ;
    xmm4 = xmm4 * xmm3; /* mulss */
    ecx = esp + 0x2C;
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm4 = MEMF(ecx); /* movss */
    ecx = (int32_t)xmm4; /* cvtss2si */
    ecx = ecx >> 3;
    edi = ecx;
    edi = edi & 0xFFFFFF00u;
    edi = edi << 8;
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(ecx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ebx, LO8(ecx));
    ecx = ebx;

loc_00411926: ;
    ebx = MEM32(esi);
    MEM32(eax) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ecx;
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 0x1C) = ebx;
    ebx = MEM32(esi);
    MEM32(eax + 0x20) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(eax + 0x24) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(eax + 0x28) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0x2C) = edx;
    eax = eax + 0x20;
    edi++;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 0x1C) = ebx;
    ebx = MEM32(esi);
    MEM32(eax + 0x20) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(eax + 0x24) = ebx;
    ebx = MEM32(esi + 8);
    eax = eax + 0x20;
    MEM32(eax + 8) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    edi++;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 0x1C) = ebx;
    ebx = MEM32(esi);
    eax = eax + 0x20;
    MEM32(eax) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(eax + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x1C);
    edi++;
    MEM32(eax + 0x10) = edi;
    edi = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    eax = eax + 0x20;
    ecx = ecx + 0xFFFF;
    MEM32(esp + 0x10) = ecx;

loc_004119E5: ;
    if (CMP_NE(MEM16(esp + 0x10), 0)) goto loc_004118A0; /* jne: not equal / not zero */

loc_004119F1: ;
    edx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    POP32(esp, edi);
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00411A10
 * Original: 0x00411A10 - 0x004130B3 (5795 bytes, 1381 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00411A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00411A10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x198;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    MEM32(esp + 0x2C) = 0;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xC;
    ecx = ecx + 0x18;
    esi = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x14));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00411A5F; /* jne: not equal / not zero */

loc_00411A40: ;
    if (TEST_Z(eax, eax)) goto loc_00411A5B; /* je: equal / zero */

loc_00411A44: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = esp + 0x168;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00411A53: ;
    eax = edx;
    MEM32(esp + 0x2C) = eax;
    goto loc_00411A5F;

loc_00411A5B: ;
    MEM32(esp + 0x2C) = edi;

loc_00411A5F: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    PUSH32(esp, 8);
    edi = esp + 0x54;
    ecx = esi;
    PUSH32(esp, 0); sub_0040C460(); /* call 0x0040C460 */

loc_00411A71: ;
    eax = MEM32(esp + 0x5C);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    esi = MEM32(ebp + 8);
    xmm6 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    ecx = ZX16(LO16(eax));
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(ebp + 0x14));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [esi] */
    MEM32(esp + 0x28) = esi;
    esi = MEM32(esp + 0x50);
    MEM32(esp + 0x30) = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_004125BD; /* je: equal / zero */

loc_00411AB0: ;
    eax--;
    if (((int32_t)eax < 0)) goto loc_00412079; /* js: sign (negative) */

loc_00411AB7: ;
    xmm4 = MEMF(0x648D14); /* movss */
    ecx = MEM32(ebp + 0x18);
    eax++;
    MEM32(esp + 0x38) = eax;
    goto loc_00411AD0;

    /* nop */

loc_00411AD0: ;
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    if (CMP_BE(edx, eax)) eax = edx; /* cmovbe */
    edx = edx - eax;
    eax = eax << 0x12;
    eax = eax + 0x40001818;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x3C);
    esi = esi + 4;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x2C) = eax;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0041206F; /* je: equal / zero */

loc_00411B01: ;
    edx = MEM32(esp + 0x28);

loc_00411B05: ;
    edi = MEM32(ebp + 8);
    eax = edx;
    edx = edx + MEM32(edi + 0xC);
    (void)0; /* cmp MEM8(eax + 0xD), 0 - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [edx] */
    MEM32(esp + 0x28) = edx;
    if (CMP_EQ(MEM8(eax + 0xD), 0)) goto loc_0041205D; /* je: equal / zero */

loc_00411B1E: ;
    xmm0 = MEMF(eax); /* movups */
    xmm2 = MEMF(ecx + 0x20); /* movaps */
    xmm1 = MEMF(ecx + 0x30); /* movaps */
    edi = ZX8(MEM8(eax + 0xC));
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0xaa */
    /* mulps: xmm3 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0x55 */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(ecx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0xC); /* mulss */
    /* mulps: xmm7 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(eax + 0x1C); /* movss */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    edx = esp + 0x40;
    /* addps: xmm7 += xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(ebp + 0x10); /* mulss */
    MEMF(edx) = xmm7; /* movaps */
    edx = MEM32(eax + 0x10);
    edi = edi << 0x18;
    edi = edi | edx;
    /* comiss xmm2, xmm6 - sets EFLAGS */
    if ((xmm2 <= xmm6)) goto loc_00411DC5; /* jbe: below or equal (unsigned <=) */

loc_00411B8C: ;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x124;
    MEMF(esp + 0x9C) = xmm6; /* movss */
    MEMF(esp + 0x98) = xmm6; /* movss */
    MEMF(esp + 0x94) = xmm6; /* movss */
    MEMF(esp + 0x90) = xmm6; /* movss */
    MEMF(esp + 0x88) = xmm6; /* movss */
    MEMF(esp + 0x84) = xmm6; /* movss */
    MEMF(esp + 0x80) = xmm6; /* movss */
    MEMF(esp + 0x7C) = xmm6; /* movss */
    MEMF(esp + 0x74) = xmm6; /* movss */
    MEMF(esp + 0x70) = xmm6; /* movss */
    MEMF(esp + 0x6C) = xmm6; /* movss */
    MEMF(esp + 0x68) = xmm6; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm4; /* movss */
    MEMF(esp + 0xA0) = xmm4; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00411C26: ;
    esp = esp + 4;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00411C39: ;
    eax = esp + 0x40;
    xmm1 = MEMF(eax); /* movups */
    eax = 0xFFFFFFFCu;
    goto loc_00411C50;

    /* nop */
    edi = edi;

loc_00411C50: ;
    xmm0 = MEMF(eax + 0x75826C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758270); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    ecx = esp + 0x10;
    xmm0 = MEMF(ecx); /* movups */
    edx = esp + 0x90;
    xmm2 = MEMF(edx); /* movaps */
    ecx = esp + 0x80;
    xmm3 = MEMF(ecx); /* movaps */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0xaa */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    edx = esp + 0x70;
    xmm3 = MEMF(edx); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0x55 */
    ecx = esp + 0x60;
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(ecx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    edx = esp + 0x10;
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    ecx = edx;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    MEMF(edx) = xmm7; /* movaps */
    xmm0 = MEMF(ecx); /* movups */
    xmm2 = xmm1; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    MEMF(edx) = xmm2; /* movaps */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(eax + 0x758274);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 0x758278);
    MEM32(esi + 0x14) = ecx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00411DA9; /* je: equal / zero */

loc_00411D0B: ;
    xmm0 = MEMF(eax + 0x75858C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758590); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758594); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = esp + 0x10;
    xmm0 = MEMF(edx); /* movups */
    ecx = esp + 0x150;
    xmm2 = MEMF(ecx); /* movaps */
    edx = esp + 0x140;
    xmm3 = MEMF(edx); /* movaps */
    xmm4 = xmm0; /* movaps */
    ecx = esp + 0x130;
    /* shufps xmm4, xmm0, 0xaa */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(ecx); /* movaps */
    xmm5 = xmm0; /* movaps */
    edx = esp + 0x120;
    /* shufps xmm5, xmm0, 0x55 */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(edx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    ecx = esp + 0x10;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    MEMF(ecx) = xmm7; /* movaps */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00411DA9: ;
    eax = eax - 0x10;
    if (CMP_GE(eax, 0xFFFFFFCCu)) goto loc_00411C50; /* jge: greater or equal (signed >=) */

loc_00411DB5: ;
    xmm4 = MEMF(0x648D14); /* movss */
    ecx = MEM32(ebp + 0x18);
    goto loc_0041204C;

loc_00411DC5: ;
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x758268); /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    eax = MEM32(esp + 0x10);
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(0x75826C); /* mulss */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x48);
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    MEMF(esp + 0x14) = xmm7; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758270);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758274);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00411E72; /* je: equal / zero */

loc_00411E31: ;
    xmm5 = MEMF(0x758588); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(0x75858C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm5 = MEMF(0x758590); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm5; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00411E72: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x758258); /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    edx = MEM32(esp + 0x10);
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(0x75825C); /* mulss */
    MEM32(esi) = edx;
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    MEMF(esp + 0x14) = xmm7; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758260);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758264);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00411F0F; /* je: equal / zero */

loc_00411ECE: ;
    xmm5 = MEMF(0x758578); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(0x75857C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm5 = MEMF(0x758580); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm5; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00411F0F: ;
    xmm5 = MEMF(0x758248); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm5 = MEMF(0x75824C); /* movss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    MEMF(esp + 0x14) = xmm7; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758250);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758254);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00411FAE; /* je: equal / zero */

loc_00411F6D: ;
    xmm5 = MEMF(0x758568); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(0x75856C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm5 = MEMF(0x758570); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm5; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00411FAE: ;
    xmm5 = MEMF(0x758238); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm0 = MEMF(0x75823C); /* movss */
    xmm2 = xmm2 - xmm5; /* subss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    eax = MEM32(0x758240);
    MEM32(esi + 0x10) = eax;
    edx = MEM32(0x758244);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm6; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0041204C; /* je: equal / zero */

loc_0041200B: ;
    xmm0 = MEMF(0x758558); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x75855C); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x758560); /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    esi = esi + 0xC;

loc_0041204C: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    eax = eax + 0xFFFF;
    MEM32(esp + 0x2C) = eax;

loc_0041205D: ;
    ecx = ecx + 0x40;
    (void)0; /* cmp MEM16(esp + 0x2C), 0 - flags set for next jcc */
    MEM32(ebp + 0x18) = ecx;
    if (CMP_NE(MEM16(esp + 0x2C), 0)) goto loc_00411B05; /* jne: not equal / not zero */

loc_0041206F: ;
    MEM32(esp + 0x38) = MEM32(esp + 0x38) - 1;
    if ((MEM32(esp + 0x38) != 0)) goto loc_00411AD0; /* jne: not equal / not zero */

loc_00412079: ;
    if (CMP_EQ(MEM16(esp + 0x30), 0)) goto loc_00413095; /* je: equal / zero */

loc_00412085: ;
    ecx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_BE(ecx, eax)) eax = ecx; /* cmovbe */
    ecx = MEM32(ebp + 0x18);
    eax = eax << 0x12;
    eax = eax + 0x40001818;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x28);
    esi = esi + 4;

loc_004120A6: ;
    edi = MEM32(ebp + 8);
    edx = eax;
    eax = eax + MEM32(edi + 0xC);
    (void)0; /* cmp MEM8(edx + 0xD), 0 - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [eax] */
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(MEM8(edx + 0xD), 0)) goto loc_004125A6; /* je: equal / zero */

loc_004120BF: ;
    xmm0 = MEMF(edx); /* movups */
    xmm2 = MEMF(ecx + 0x20); /* movaps */
    xmm1 = MEMF(ecx + 0x30); /* movaps */
    edi = ZX8(MEM8(edx + 0xC));
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0xaa */
    /* mulps: xmm3 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(ecx + 0x10); /* movaps */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0x55 */
    /* mulps: xmm4 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(ecx); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0 */
    xmm0 = MEMF(edx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0xC); /* mulss */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edx + 0x1C); /* movss */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    eax = esp + 0x40;
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(edx + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(ebp + 0x10); /* mulss */
    MEMF(eax) = xmm5; /* movaps */
    eax = MEM32(edx + 0x10);
    edi = edi << 0x18;
    edi = edi | eax;
    /* comiss xmm2, xmm6 - sets EFLAGS */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    if ((xmm2 <= xmm6)) goto loc_00412313; /* jbe: below or equal (unsigned <=) */

loc_00412139: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0xAC;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_00412154: ;
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0xE4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00412173: ;
    esp = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00412187: ;
    ecx = esp + 0x40;
    xmm1 = MEMF(ecx); /* movups */
    eax = 0xFFFFFFFCu;
    goto loc_004121A0;

    /* nop */
    /* nop */

loc_004121A0: ;
    xmm0 = MEMF(eax + 0x75826C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758270); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    edx = esp + 0x10;
    xmm0 = MEMF(edx); /* movups */
    ecx = esp + 0xD0;
    xmm2 = MEMF(ecx); /* movaps */
    edx = esp + 0xC0;
    xmm3 = MEMF(edx); /* movaps */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0xaa */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    ecx = esp + 0xB0;
    xmm3 = MEMF(ecx); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0x55 */
    edx = esp + 0xA0;
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(edx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    ecx = esp + 0x10;
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    edx = ecx;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    MEMF(ecx) = xmm7; /* movaps */
    xmm0 = MEMF(edx); /* movups */
    xmm2 = xmm1; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    MEMF(ecx) = xmm2; /* movaps */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edi;
    ecx = MEM32(eax + 0x758274);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x758278);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_004122FF; /* je: equal / zero */

loc_00412261: ;
    xmm0 = MEMF(eax + 0x75858C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758590); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758594); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    ecx = esp + 0x10;
    xmm0 = MEMF(ecx); /* movups */
    edx = esp + 0x110;
    xmm2 = MEMF(edx); /* movaps */
    ecx = esp + 0x100;
    xmm3 = MEMF(ecx); /* movaps */
    xmm4 = xmm0; /* movaps */
    edx = esp + 0xF0;
    /* shufps xmm4, xmm0, 0xaa */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(edx); /* movaps */
    xmm5 = xmm0; /* movaps */
    ecx = esp + 0xE0;
    /* shufps xmm5, xmm0, 0x55 */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(ecx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    edx = esp + 0x10;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    MEMF(edx) = xmm7; /* movaps */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = ecx;
    esi = esi + 0xC;

loc_004122FF: ;
    eax = eax - 0x10;
    if (CMP_GE(eax, 0xFFFFFFCCu)) goto loc_004121A0; /* jge: greater or equal (signed >=) */

loc_0041230B: ;
    ecx = MEM32(ebp + 0x18);
    goto loc_0041259A;

loc_00412313: ;
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x758268); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    edx = MEM32(esp + 0x10);
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * MEMF(0x75826C); /* mulss */
    MEM32(esi) = edx;
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758270);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758274);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_004123C0; /* je: equal / zero */

loc_0041237F: ;
    xmm4 = MEMF(0x758588); /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    xmm4 = MEMF(0x75858C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(0x758590); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_004123C0: ;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(0x758258); /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    edx = MEM32(esp + 0x10);
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * MEMF(0x75825C); /* mulss */
    MEM32(esi) = edx;
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758260);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758264);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0041245D; /* je: equal / zero */

loc_0041241C: ;
    xmm4 = MEMF(0x758578); /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    xmm4 = MEMF(0x75857C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(0x758580); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_0041245D: ;
    xmm4 = MEMF(0x758248); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm4 = MEMF(0x75824C); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758250);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758254);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_004124FC; /* je: equal / zero */

loc_004124BB: ;
    xmm4 = MEMF(0x758568); /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    xmm4 = MEMF(0x75856C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(0x758570); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_004124FC: ;
    xmm4 = MEMF(0x758238); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(0x75823C); /* movss */
    xmm2 = xmm2 - xmm4; /* subss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    eax = MEM32(0x758240);
    MEM32(esi + 0x10) = eax;
    edx = MEM32(0x758244);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm6; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0041259A; /* je: equal / zero */

loc_00412559: ;
    xmm0 = MEMF(0x758558); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x75855C); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x758560); /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    esi = esi + 0xC;

loc_0041259A: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0xFFFF;
    eax = MEM32(esp + 0x28);

loc_004125A6: ;
    ecx = ecx + 0x40;
    (void)0; /* cmp MEM16(esp + 0x30), 0 - flags set for next jcc */
    MEM32(ebp + 0x18) = ecx;
    if (CMP_NE(MEM16(esp + 0x30), 0)) goto loc_004120A6; /* jne: not equal / not zero */

loc_004125B8: ;
    goto loc_00413095;

loc_004125BD: ;
    eax--;
    if (((int32_t)eax < 0)) goto loc_00412B6B; /* js: sign (negative) */

loc_004125C4: ;
    xmm4 = MEMF(0x648D14); /* movss */
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    eax++;
    MEM32(esp + 0x34) = eax;
    /* nop */

loc_004125E0: ;
    edi = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    if (CMP_BE(edi, eax)) eax = edi; /* cmovbe */
    edi = edi - eax;
    eax = eax << 0x12;
    eax = eax + 0x40001818;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x3C);
    esi = esi + 4;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x38) = eax;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00412B61; /* je: equal / zero */

loc_00412611: ;
    edi = MEM32(ebp + 8);
    eax = ecx;
    ecx = ecx + MEM32(edi + 0xC);
    (void)0; /* cmp MEM8(eax + 0xD), 0 - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [ecx] */
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(MEM8(eax + 0xD), 0)) goto loc_00412B55; /* je: equal / zero */

loc_0041262A: ;
    xmm0 = MEMF(eax); /* movups */
    xmm2 = MEMF(edx + 0x20); /* movaps */
    xmm1 = MEMF(edx + 0x30); /* movaps */
    edi = ZX8(MEM8(eax + 0xC));
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0xaa */
    /* mulps: xmm3 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edx + 0x10); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0x55 */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0xC); /* mulss */
    /* mulps: xmm7 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(eax + 0x1C); /* movss */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    edx = esp + 0x40;
    /* addps: xmm7 += xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(ebp + 0x10); /* mulss */
    MEMF(edx) = xmm7; /* movaps */
    edx = MEM32(eax + 0x10);
    edi = edi << 0x18;
    edi = edi | edx;
    /* comiss xmm2, xmm6 - sets EFLAGS */
    if ((xmm2 <= xmm6)) goto loc_004128C7; /* jbe: below or equal (unsigned <=) */

loc_00412698: ;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0xE4;
    MEMF(esp + 0x9C) = xmm6; /* movss */
    MEMF(esp + 0x98) = xmm6; /* movss */
    MEMF(esp + 0x94) = xmm6; /* movss */
    MEMF(esp + 0x90) = xmm6; /* movss */
    MEMF(esp + 0x88) = xmm6; /* movss */
    MEMF(esp + 0x84) = xmm6; /* movss */
    MEMF(esp + 0x80) = xmm6; /* movss */
    MEMF(esp + 0x7C) = xmm6; /* movss */
    MEMF(esp + 0x74) = xmm6; /* movss */
    MEMF(esp + 0x70) = xmm6; /* movss */
    MEMF(esp + 0x6C) = xmm6; /* movss */
    MEMF(esp + 0x68) = xmm6; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm4; /* movss */
    MEMF(esp + 0xA0) = xmm4; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00412732: ;
    esp = esp + 4;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00412745: ;
    eax = esp + 0x40;
    xmm1 = MEMF(eax); /* movups */
    eax = 0xFFFFFFFCu;

loc_00412751: ;
    xmm0 = MEMF(eax + 0x75826C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758270); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    ecx = esp + 0x10;
    xmm0 = MEMF(ecx); /* movups */
    edx = esp + 0x90;
    xmm2 = MEMF(edx); /* movaps */
    ecx = esp + 0x80;
    xmm3 = MEMF(ecx); /* movaps */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0xaa */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    edx = esp + 0x70;
    xmm3 = MEMF(edx); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0x55 */
    ecx = esp + 0x60;
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(ecx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    edx = esp + 0x10;
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    ecx = edx;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    MEMF(edx) = xmm7; /* movaps */
    xmm0 = MEMF(ecx); /* movups */
    xmm2 = xmm1; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    MEMF(edx) = xmm2; /* movaps */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(eax + 0x758274);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 0x758278);
    MEM32(esi + 0x14) = ecx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_004128AA; /* je: equal / zero */

loc_0041280C: ;
    xmm0 = MEMF(eax + 0x75858C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758590); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758594); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = esp + 0x10;
    xmm0 = MEMF(edx); /* movups */
    ecx = esp + 0x110;
    xmm2 = MEMF(ecx); /* movaps */
    edx = esp + 0x100;
    xmm3 = MEMF(edx); /* movaps */
    xmm4 = xmm0; /* movaps */
    ecx = esp + 0xF0;
    /* shufps xmm4, xmm0, 0xaa */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(ecx); /* movaps */
    xmm5 = xmm0; /* movaps */
    edx = esp + 0xE0;
    /* shufps xmm5, xmm0, 0x55 */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(edx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    ecx = esp + 0x10;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    MEMF(ecx) = xmm7; /* movaps */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_004128AA: ;
    eax = eax - 0x10;
    if (CMP_GE(eax, 0xFFFFFFCCu)) goto loc_00412751; /* jge: greater or equal (signed >=) */

loc_004128B6: ;
    xmm4 = MEMF(0x648D14); /* movss */
    ecx = MEM32(esp + 0x28);
    goto loc_00412B44;

loc_004128C7: ;
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x758268); /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    eax = MEM32(esp + 0x10);
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(0x75826C); /* mulss */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x48);
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    MEMF(esp + 0x14) = xmm7; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758270);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758274);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00412974; /* je: equal / zero */

loc_00412933: ;
    xmm5 = MEMF(0x758588); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(0x75858C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm5 = MEMF(0x758590); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm5; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00412974: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x758258); /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    edx = MEM32(esp + 0x10);
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(0x75825C); /* mulss */
    MEM32(esi) = edx;
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    MEMF(esp + 0x14) = xmm7; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758260);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758264);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00412A11; /* je: equal / zero */

loc_004129D0: ;
    xmm5 = MEMF(0x758578); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(0x75857C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm5 = MEMF(0x758580); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm5; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00412A11: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x758248); /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    edx = MEM32(esp + 0x10);
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(0x75824C); /* mulss */
    MEM32(esi) = edx;
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    MEMF(esp + 0x14) = xmm7; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758250);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758254);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00412AAE; /* je: equal / zero */

loc_00412A6D: ;
    xmm5 = MEMF(0x758568); /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(0x75856C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm5 = MEMF(0x758570); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm5; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00412AAE: ;
    xmm0 = xmm0 * MEMF(0x758238); /* mulss */
    xmm1 = xmm1 * MEMF(0x75823C); /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    eax = MEM32(0x758240);
    MEM32(esi + 0x10) = eax;
    edx = MEM32(0x758244);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm6; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00412B44; /* je: equal / zero */

loc_00412B03: ;
    xmm0 = MEMF(0x758558); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x75855C); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x758560); /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    esi = esi + 0xC;

loc_00412B44: ;
    eax = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x2C);
    eax = eax + 0xFFFF;
    MEM32(esp + 0x38) = eax;

loc_00412B55: ;
    if (CMP_NE(MEM16(esp + 0x38), 0)) goto loc_00412611; /* jne: not equal / not zero */

loc_00412B61: ;
    MEM32(esp + 0x34) = MEM32(esp + 0x34) - 1;
    if ((MEM32(esp + 0x34) != 0)) goto loc_004125E0; /* jne: not equal / not zero */

loc_00412B6B: ;
    if (CMP_EQ(MEM16(esp + 0x30), 0)) goto loc_00413095; /* je: equal / zero */

loc_00412B77: ;
    ecx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_BE(ecx, eax)) eax = ecx; /* cmovbe */
    ecx = MEM32(esp + 0x28);
    eax = eax << 0x12;
    eax = eax + 0x40001818;
    MEM32(esi) = eax;
    esi = esi + 4;

loc_00412B95: ;
    eax = MEM32(ebp + 8);
    edi = MEM32(eax + 0xC);
    /* TODO: prefetcht0 byte ptr [ecx + edi] */
    edx = ecx;
    SET_LO8(eax, MEM8(edx + 0xD));
    ecx = ecx + edi;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x28) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00413089; /* je: equal / zero */

loc_00412BB2: ;
    xmm0 = MEMF(edx); /* movups */
    eax = MEM32(esp + 0x2C);
    xmm2 = MEMF(eax + 0x20); /* movaps */
    xmm1 = MEMF(eax + 0x30); /* movaps */
    edi = ZX8(MEM8(edx + 0xC));
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0xaa */
    /* mulps: xmm3 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(eax + 0x10); /* movaps */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0x55 */
    /* mulps: xmm4 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(eax); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0 */
    xmm0 = MEMF(edx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0xC); /* mulss */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edx + 0x1C); /* movss */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    eax = esp + 0x40;
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(edx + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(ebp + 0x10); /* mulss */
    MEMF(eax) = xmm5; /* movaps */
    eax = MEM32(edx + 0x10);
    edi = edi << 0x18;
    edi = edi | eax;
    /* comiss xmm2, xmm6 - sets EFLAGS */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    if ((xmm2 <= xmm6)) goto loc_00412E04; /* jbe: below or equal (unsigned <=) */

loc_00412C30: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0xAC;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_00412C4B: ;
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x124;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00412C6A: ;
    esp = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00412C7E: ;
    ecx = esp + 0x40;
    xmm1 = MEMF(ecx); /* movups */
    eax = 0xFFFFFFFCu;
    /* nop */

loc_00412C90: ;
    xmm0 = MEMF(eax + 0x75826C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758270); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    edx = esp + 0x10;
    xmm0 = MEMF(edx); /* movups */
    ecx = esp + 0xD0;
    xmm2 = MEMF(ecx); /* movaps */
    edx = esp + 0xC0;
    xmm3 = MEMF(edx); /* movaps */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0xaa */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    ecx = esp + 0xB0;
    xmm3 = MEMF(ecx); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0x55 */
    edx = esp + 0xA0;
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(edx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    ecx = esp + 0x10;
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    edx = ecx;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    MEMF(ecx) = xmm7; /* movaps */
    xmm0 = MEMF(edx); /* movups */
    xmm2 = xmm1; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    MEMF(ecx) = xmm2; /* movaps */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edi;
    ecx = MEM32(eax + 0x758274);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x758278);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00412DEF; /* je: equal / zero */

loc_00412D51: ;
    xmm0 = MEMF(eax + 0x75858C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758590); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x758594); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    ecx = esp + 0x10;
    xmm0 = MEMF(ecx); /* movups */
    edx = esp + 0x150;
    xmm2 = MEMF(edx); /* movaps */
    ecx = esp + 0x140;
    xmm3 = MEMF(ecx); /* movaps */
    xmm4 = xmm0; /* movaps */
    edx = esp + 0x130;
    /* shufps xmm4, xmm0, 0xaa */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(edx); /* movaps */
    xmm5 = xmm0; /* movaps */
    ecx = esp + 0x120;
    /* shufps xmm5, xmm0, 0x55 */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    xmm3 = MEMF(ecx); /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    edx = esp + 0x10;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    MEMF(edx) = xmm7; /* movaps */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = ecx;
    esi = esi + 0xC;

loc_00412DEF: ;
    eax = eax - 0x10;
    if (CMP_GE(eax, 0xFFFFFFCCu)) goto loc_00412C90; /* jge: greater or equal (signed >=) */

loc_00412DFB: ;
    ecx = MEM32(esp + 0x28);
    goto loc_00413081;

loc_00412E04: ;
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x758268); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    edx = MEM32(esp + 0x10);
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * MEMF(0x75826C); /* mulss */
    MEM32(esi) = edx;
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758270);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758274);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00412EB1; /* je: equal / zero */

loc_00412E70: ;
    xmm4 = MEMF(0x758588); /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    xmm4 = MEMF(0x75858C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(0x758590); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00412EB1: ;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(0x758258); /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    edx = MEM32(esp + 0x10);
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * MEMF(0x75825C); /* mulss */
    MEM32(esi) = edx;
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758260);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758264);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00412F4E; /* je: equal / zero */

loc_00412F0D: ;
    xmm4 = MEMF(0x758578); /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    xmm4 = MEMF(0x75857C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(0x758580); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00412F4E: ;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(0x758248); /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    edx = MEM32(esp + 0x10);
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * MEMF(0x75824C); /* mulss */
    MEM32(esi) = edx;
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(0x758250);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(0x758254);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00412FEB; /* je: equal / zero */

loc_00412FAA: ;
    xmm4 = MEMF(0x758568); /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    xmm4 = MEMF(0x75856C); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(0x758570); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;

loc_00412FEB: ;
    xmm0 = xmm0 * MEMF(0x758238); /* mulss */
    xmm1 = xmm1 * MEMF(0x75823C); /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    eax = MEM32(0x758240);
    MEM32(esi + 0x10) = eax;
    edx = MEM32(0x758244);
    MEM32(esi + 0x14) = edx;
    esi = esi + 0x18;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm6; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00413081; /* je: equal / zero */

loc_00413040: ;
    xmm0 = MEMF(0x758558); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x75855C); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x758560); /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    esi = esi + 0xC;

loc_00413081: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0xFFFF;

loc_00413089: ;
    if (CMP_NE(MEM16(esp + 0x30), 0)) goto loc_00412B95; /* jne: not equal / not zero */

loc_00413095: ;
    ecx = MEM32(0x5499E8);
    MEM32(esi) = 0x417FC;
    MEM32(esi + 4) = 0;
    esi = esi + 8;
    POP32(esp, edi);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004130C0
 * Original: 0x004130C0 - 0x004130E5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004130C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004130C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebp = ebp >> 4;
    if (CMP_NE(ebp, 1)) { sub_004130E5(); return; } /* jne: not equal / not zero */

loc_004130D4: ;
    ecx = eax + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_004130DC: ;
    eax = MEM32(ebx);
    eax = eax + ebp;
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00413140
 * Original: 0x00413140 - 0x00413205 (197 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413140(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00413140: ;
    if (CMP_EQ(MEM8(0x84BDC0), 6)) goto loc_004131BE; /* je: equal / zero */

loc_00413149: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00413150: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_00413157: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537760(); /* call 0x00537760 */

loc_0041315E: ;
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0041316D: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00413186: ;
    edx = 1;
    ecx = 0x40304;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0041319F: ;
    MEM32(0x549AE4) = 1;
    MEM8(0x84BDC0) = 6;
    MEM8(0x84BDC1) = 0;
    MEM8(0x84BDC2) = 0;

loc_004131BE: ;
    SET_LO8(ecx, MEM8(esp + 8));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(esp + 4);
    SET_LO8(edx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    eax = 0x81B810;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x44);
    MEM32(0x81B808) = eax;
    edx--;
    edx = edx & edi;
    PUSH32(esp, 0); sub_0040C4C0(); /* call 0x0040C4C0 */

loc_004131E3: ;
    eax = ZX8(MEM8(esi + 0x30));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x6491FC); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_005373D0(); /* call 0x005373D0 */

loc_00413203: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00413210
 * Original: 0x00413210 - 0x00413588 (888 bytes, 262 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413210(void)
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

loc_00413210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = esp + 0x44;
    ecx = 8;
    PUSH32(esp, 0); sub_0040C460(); /* call 0x0040C460 */

loc_00413231: ;
    edi = MEM32(esp + 0x4C);
    eax = MEM32(esi);
    ecx = edi;
    ecx = ecx >> 3;
    ebx = ZX16(LO16(ecx));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ebx = MEM32(esi + 4);
    xmm0 = MEMF(0x84BE14); /* movss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    /* TODO: prefetcht0 byte ptr [ebx] */
    esi = MEM32(esp + 0x44);
    esp = esp + 4;
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x10) = edx;
    SET_LO8(edx, MEM8(ebp + 0x10));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_00413588(); return; } /* je: equal / zero */

loc_00413279: ;
    eax--;
    if (((int32_t)eax < 0)) goto loc_00413401; /* js: sign (negative) */

loc_00413280: ;
    eax++;
    MEM32(esp + 0x20) = eax;

loc_00413285: ;
    edx = MEM32(esp + 0x44);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    eax = edi;
    if (CMP_BE(edx, edi)) eax = edx; /* cmovbe */
    edx = edx - eax;
    eax = eax << 0x12;
    eax = eax + 0x40001818;
    MEM32(esi) = eax;
    esi = esi + 4;
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_004133F7; /* je: equal / zero */

loc_004132B0: ;
    edi = MEM32(ebp + 0x14);
    edi = edi + 0x20;

loc_004132B6: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0xC);
    /* TODO: prefetcht0 byte ptr [ebx + edx] */
    ecx = ebx;
    SET_LO8(eax, MEM8(ecx + 0xD));
    ebx = ebx + edx;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_004133D7; /* je: equal / zero */

loc_004132D3: ;
    xmm0 = MEMF(ecx); /* movups */
    xmm2 = MEMF(ecx + 0x20); /* movups */
    xmm3 = MEMF(edi + -16); /* movaps */
    edx = esp + 0x14;
    xmm1 = MEMF(edx); /* movss */
    edx = MEM32(ebp + 0x14);
    xmm4 = MEMF(edx); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2 *= xmm1 (packed 4xfloat) */
    ebx = MEM32(ecx + 0x10);
    xmm1 = xmm0; /* movaps */
    /* subps: xmm1 -= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edi); /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0xaa */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    /* shufps xmm6, xmm0, 0x55 */
    /* mulps: xmm6 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm4 (packed 4xfloat) */
    eax = esp + 0x30;
    MEMF(eax) = xmm1; /* movaps */
    xmm1 = MEMF(edi + 0x10); /* movaps */
    edx = esp + 0x30;
    xmm0 = MEMF(edx); /* movups */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0xaa */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    xmm2 = xmm0; /* movaps */
    /* shufps xmm2, xmm0, 0x55 */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0 */
    /* mulps: xmm3 *= xmm4 (packed 4xfloat) */
    eax = esp + 0x50;
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(eax) = xmm7; /* movaps */
    /* addps: xmm3 += xmm2 (packed 4xfloat) */
    eax = edx;
    /* addps: xmm3 += xmm5 (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    MEMF(eax) = xmm3; /* movaps */
    eax = ZX8(MEM8(ecx + 0xC));
    MEM32(esp + 0x28) = eax;
    eax = eax << 0x18;
    eax = eax | ebx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0x2C) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00413388: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(esi + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x30);
    eax = ZX8(LO8(eax));
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0x38);
    eax = eax << 0x18;
    eax = eax | ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    esi = esi + 0x20;
    eax = eax + 0xFFFF;
    MEM32(esp + 0x18) = eax;

loc_004133D7: ;
    edx = MEM32(ebp + 0x14);
    edx = edx + 0x40;
    edi = edi + 0x40;
    (void)0; /* cmp MEM16(esp + 0x18), 0 - flags set for next jcc */
    MEM32(ebp + 0x14) = edx;
    if (CMP_NE(MEM16(esp + 0x18), 0)) goto loc_004132B6; /* jne: not equal / not zero */

loc_004133EF: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x48);

loc_004133F7: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    if ((MEM32(esp + 0x20) != 0)) goto loc_00413285; /* jne: not equal / not zero */

loc_00413401: ;
    if (CMP_EQ(MEM16(esp + 0x10), 0)) goto loc_00413569; /* je: equal / zero */

loc_0041340D: ;
    eax = MEM32(esp + 0x44);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    if (CMP_A(eax, edi)) eax = edi; /* cmova */
    edi = MEM32(ebp + 0x14);
    eax = eax << 0x12;
    eax = eax + 0x40001818;
    MEM32(esi) = eax;
    esi = esi + 4;
    edi = edi + 0x20;
    /* nop */

loc_00413430: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xC);
    /* TODO: prefetcht0 byte ptr [ebx + eax] */
    ecx = ebx;
    ebx = ebx + eax;
    SET_LO8(eax, MEM8(ecx + 0xD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00413551; /* je: equal / zero */

loc_00413449: ;
    xmm0 = MEMF(ecx); /* movups */
    xmm2 = MEMF(ecx + 0x20); /* movups */
    xmm3 = MEMF(edi + -16); /* movaps */
    eax = esp + 0x14;
    xmm1 = MEMF(eax); /* movss */
    eax = MEM32(ebp + 0x14);
    xmm4 = MEMF(eax); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2 *= xmm1 (packed 4xfloat) */
    xmm1 = xmm0; /* movaps */
    /* subps: xmm1 -= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edi); /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm7 = xmm0; /* movaps */
    /* shufps xmm7, xmm0, 0 */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0xaa */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    /* shufps xmm6, xmm0, 0x55 */
    /* mulps: xmm6 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm4 (packed 4xfloat) */
    edx = esp + 0x30;
    MEMF(edx) = xmm1; /* movaps */
    xmm1 = MEMF(edi + 0x10); /* movaps */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    edx = esp + 0x50;
    eax = esp + 0x30;
    xmm0 = MEMF(eax); /* movups */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(edx) = xmm7; /* movaps */
    edx = eax;
    eax = ZX8(MEM8(ecx + 0xC));
    ecx = MEM32(ecx + 0x10);
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0xaa */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    MEM32(esp + 0x2C) = eax;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    xmm2 = xmm0; /* movaps */
    /* shufps xmm2, xmm0, 0x55 */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0 */
    /* mulps: xmm3 *= xmm4 (packed 4xfloat) */
    /* addps: xmm3 += xmm2 (packed 4xfloat) */
    eax = eax << 0x18;
    /* addps: xmm3 += xmm5 (packed 4xfloat) */
    eax = eax | ecx;
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    MEMF(edx) = xmm3; /* movaps */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00413502: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x50);
    eax = ZX8(LO8(eax));
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x58);
    eax = eax << 0x18;
    eax = eax | edx;
    edx = MEM32(esp + 0x54);
    MEM32(esi + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esp + 0x10);
    esi = esi + 0x20;
    eax = eax + 0xFFFF;
    MEM32(esp + 0x10) = eax;

loc_00413551: ;
    edx = MEM32(ebp + 0x14);
    edx = edx + 0x40;
    edi = edi + 0x40;
    (void)0; /* cmp MEM16(esp + 0x10), 0 - flags set for next jcc */
    MEM32(ebp + 0x14) = edx;
    if (CMP_NE(MEM16(esp + 0x10), 0)) goto loc_00413430; /* jne: not equal / not zero */

loc_00413569: ;
    edx = MEM32(0x5499E8);
    MEM32(esi) = 0x417FC;
    MEM32(esi + 4) = 0;
    esi = esi + 8;
    MEM32(edx) = esi;
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
 * sub_00413780
 * Original: 0x00413780 - 0x0041380F (143 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413780(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00413780: ;
    if (CMP_EQ(MEM8(0x84BDC0), 3)) goto loc_004137B9; /* je: equal / zero */

loc_00413789: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00413790: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x900;
    MEM32(0x549BD0) = 0;
    MEM8(0x84BDC0) = 3;
    MEM8(0x84BDC1) = 0;
    MEM8(0x84BDC2) = 0;

loc_004137B9: ;
    SET_LO8(ecx, MEM8(esp + 8));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(esp + 4);
    SET_LO8(edx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    eax = 0x81B810;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x44);
    MEM32(0x81B808) = eax;
    edx--;
    edx = edx & edi;
    PUSH32(esp, 0); sub_0040C4C0(); /* call 0x0040C4C0 */

loc_004137DE: ;
    eax = ZX8(MEM8(esi + 0x28));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x6491FC); /* mulss */
    eax = MEM32(0x5499F0);
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC);
    eax = eax | 0x100;
    MEM32(0x5499F0) = eax;
    MEM32(0x549BC8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00413810
 * Original: 0x00413810 - 0x00413A2A (538 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00413810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = esp + 0x24;
    ecx = 4;
    PUSH32(esp, 0); sub_0040C460(); /* call 0x0040C460 */

loc_00413833: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    ebx = ecx;
    ebx = ebx >> 2;
    edi = ZX16(LO16(ebx));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esp = esp + 4;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ebp + 8);
    edi = MEM32(edx + 4);
    SET_LO8(edx, MEM8(ebp + 0xC));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [edi] */
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_00413A2A(); return; } /* je: equal / zero */

loc_00413867: ;
    eax--;
    if (((int32_t)eax < 0)) goto loc_0041394C; /* js: sign (negative) */

loc_0041386E: ;
    eax++;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x20);
    goto loc_00413880;

loc_00413879: ;
    ebx = MEM32(esp + 0x18);
    /* nop */

loc_00413880: ;
    edx = MEM32(esp + 0x24);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    if (CMP_BE(edx, ecx)) ecx = edx; /* cmovbe */
    edx = edx - ecx;
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001818;
    MEM32(eax) = ecx;
    eax = eax + 4;
    (void)0; /* cmp MEM16(esp + 0x18), 0 - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(MEM16(esp + 0x18), 0)) goto loc_0041393C; /* je: equal / zero */

loc_004138A9: ;
    /* nop */

loc_004138B0: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    edi = edi + MEM32(ecx + 0xC);
    SET_LO8(ecx, MEM8(edx + 0xD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    /* TODO: prefetcht0 byte ptr [edi] */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0041392C; /* je: equal / zero */

loc_004138C2: ;
    xmm0 = MEMF(edx); /* movups */
    xmm2 = MEMF(esi + 0x20); /* movaps */
    xmm1 = MEMF(esi + 0x30); /* movaps */
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0xaa */
    /* mulps: xmm3 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0x55 */
    /* mulps: xmm4 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(esi); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0 */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    ecx = esp + 0x30;
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    MEMF(ecx) = xmm5; /* movaps */
    ecx = ZX8(MEM8(edx + 0xC));
    ecx = ecx << 0x18;
    ecx = ecx | MEM32(edx + 0x10);
    edx = MEM32(esp + 0x30);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    ebx = ebx + 0xFFFF;

loc_0041392C: ;
    esi = esi + 0x40;
    if (TEST_NZ(LO16(ebx), LO16(ebx))) goto loc_004138B0; /* jne: not equal / not zero */

loc_00413938: ;
    edx = MEM32(esp + 0x24);

loc_0041393C: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    ecx = MEM32(esp + 0x28);
    if ((MEM32(esp + 0x1C) != 0)) goto loc_00413879; /* jne: not equal / not zero */

loc_0041394A: ;
    goto loc_00413954;

loc_0041394C: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);

loc_00413954: ;
    if (CMP_EQ(MEM16(esp + 0x14), 0)) goto loc_00413A0B; /* je: equal / zero */

loc_00413960: ;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    if (CMP_BE(edx, ecx)) ecx = edx; /* cmovbe */
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001818;
    MEM32(eax) = ecx;
    eax = eax + 4;

loc_00413973: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ecx + 0xC);
    /* TODO: prefetcht0 byte ptr [edi + ebx] */
    edx = edi;
    SET_LO8(ecx, MEM8(edx + 0xD));
    edi = edi + ebx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_004139FC; /* je: equal / zero */

loc_00413988: ;
    xmm0 = MEMF(edx); /* movups */
    xmm2 = MEMF(esi + 0x20); /* movaps */
    xmm1 = MEMF(esi + 0x30); /* movaps */
    ebx = MEM32(edx + 0x10);
    xmm3 = xmm0; /* movaps */
    /* shufps xmm3, xmm0, 0xaa */
    /* mulps: xmm3 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm4 = xmm0; /* movaps */
    /* shufps xmm4, xmm0, 0x55 */
    /* mulps: xmm4 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(esi); /* movaps */
    xmm5 = xmm0; /* movaps */
    /* shufps xmm5, xmm0, 0 */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    ecx = esp + 0x30;
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    MEMF(ecx) = xmm5; /* movaps */
    ecx = ZX8(MEM8(edx + 0xC));
    edx = MEM32(esp + 0x30);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x38);
    ecx = ecx << 0x18;
    ecx = ecx | ebx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    eax = eax + 0x10;
    ecx = ecx + 0xFFFF;
    MEM32(esp + 0x14) = ecx;

loc_004139FC: ;
    esi = esi + 0x40;
    if (CMP_NE(MEM16(esp + 0x14), 0)) goto loc_00413973; /* jne: not equal / not zero */

loc_00413A0B: ;
    ecx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(ecx) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00413B50
 * Original: 0x00413B50 - 0x00413BDB (139 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00413B50: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(ecx, ebp)) goto loc_00413BD8; /* jle: less or equal (signed <=) */

loc_00413B5B: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = ebp;
    PUSH32(esp, edi);

loc_00413B61: ;
    edx = MEM32(ebx + 0x40);
    eax = ZX16(MEM16(edx + ebp * 2));
    esi = MEM32(ebx);
    esi = MEM32(esi + 0x88);
    eax = eax + eax * 8;
    edi = ZX16(MEM16(esi + eax * 4 + 0x18));
    if (CMP_EQ(edi, 0xFFFF)) goto loc_00413BC9; /* je: equal / zero */

loc_00413B80: ;
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00413B97; /* jle: less or equal (signed <=) */

loc_00413B86: ;
    eax = edx;

loc_00413B88: ;
    edx = ZX16(MEM16(eax));
    if (CMP_EQ(edx, edi)) goto loc_00413B9C; /* je: equal / zero */

loc_00413B8F: ;
    esi++;
    eax = eax + 2;
    if (CMP_L(esi, ecx)) goto loc_00413B88; /* jl: less (signed <) */

loc_00413B97: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_00413BA4;

loc_00413B9C: ;
    if (CMP_EQ(esi, 0xFFFF)) goto loc_00413BC9; /* je: equal / zero */

loc_00413BA4: ;
    eax = MEM32(ebx + 8);
    edi = ebx + 4;
    ecx = esi + esi * 4;
    edx = eax + ecx * 8;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00413BBD: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); sub_00414350(); /* call 0x00414350 */

loc_00413BC6: ;
    esp = esp + 0x10;

loc_00413BC9: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 0x28;
    ecx = MEM32(ebx + 0x1C);
    ebp++;
    if (CMP_L(ebp, ecx)) goto loc_00413B61; /* jl: less (signed <) */

loc_00413BD6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00413BD8: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00413BE0
 * Original: 0x00413BE0 - 0x00413CE5 (261 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00413BE0: ;
    eax = MEM32(esi + 0x2C);
    esp = esp - 0x28;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00413CCD; /* jle: less or equal (signed <=) */

loc_00413BF1: ;
    PUSH32(esp, edi);

loc_00413BF2: ;
    eax = MEM32(esi + 0x28);
    ecx = ZX16(MEM16(eax + ebp * 4 + 2));
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    eax = eax + ebp * 4;
    if (CMP_NE(ecx, ebx)) goto loc_00413CC0; /* jne: not equal / not zero */

loc_00413C05: ;
    eax = ZX16(MEM16(eax));
    edx = MEM32(esi + 0x20);
    eax = eax + eax * 2;
    eax = eax << 2;
    ecx = MEM32(edx + eax);
    ecx--;
    if ((ecx != 0)) goto loc_00413CC0; /* jne: not equal / not zero */

loc_00413C1B: ;
    ecx = edx;
    ecx = ecx + eax;
    eax = MEM32(ecx + 8);
    edx = eax + eax * 4;
    eax = MEM32(esi + 8);
    xmm0 = MEMF(eax + edx * 8); /* movss */
    eax = eax + edx * 8;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(esi + 8);
    edi = ebx + ebx * 4;
    MEMF(esp + 0x20) = xmm0; /* movss */
    ecx = MEM32(ecx + 4);
    edi = edi << 3;
    xmm0 = MEMF(eax + edi); /* movss */
    eax = eax + edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00414510(); /* call 0x00414510 */

loc_00413C94: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00413CC0; /* je: equal / zero */

loc_00413C9B: ;
    eax = MEM32(esi + 8);
    xmm0 = MEMF(esp + 0x24); /* movss */
    eax = eax + edi;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */

loc_00413CC0: ;
    eax = MEM32(esi + 0x2C);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_00413BF2; /* jl: less (signed <) */

loc_00413CCC: ;
    POP32(esp, edi);

loc_00413CCD: ;
    eax = MEM32(esi + 0x44);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_00413CE1; /* je: equal / zero */

loc_00413CD5: ;
    ecx = MEM32(esp + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00413CDE: ;
    esp = esp + 0xC;

loc_00413CE1: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00413CF0
 * Original: 0x00413CF0 - 0x00413F9C (684 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00413CF0: ;
    esp = esp - 0x80;
    eax = MEM32(ebx + 0x40);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebx);
    edx = MEM32(ecx + 0x8C);
    eax = eax << 6;
    xmm0 = MEMF(eax + edx + 0x30); /* movss */
    eax = eax + edx;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    eax = MEM32(ebx + 8);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, esi);
    edx = esp + 0x40;
    eax = esp + 0x1C;
    ecx = esp + 0x64;
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ecx;
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
    eax = MEM32(ebx + 0x40);
    ecx = ZX16(MEM16(eax));
    esi = MEM32(ebx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00414FC0(); /* call 0x00414FC0 */

loc_00413DA3: ;
    edx = MEM32(ebx + 0x40);
    eax = ZX16(MEM16(edx));
    ecx = MEM32(ebx);
    edx = MEM32(ecx + 0x8C);
    xmm0 = MEMF(esp + 0x28); /* movss */
    eax = eax << 6;
    eax = eax + edx;
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    eax = MEM32(ebx + 0x34);
    esp = esp + 8;
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00413E31; /* jle: less or equal (signed <=) */

loc_00413DE3: ;
    ebp = 0; /* xor self */

loc_00413DE5: ;
    edx = MEM32(ebx + 0x30);
    eax = MEM32(edx + ebp + 0x24);
    ecx = MEM32(ebx + 8);
    edi = edx + ebp;
    eax = eax + eax * 4;
    xmm0 = MEMF(ecx + eax * 8); /* movss */
    eax = ecx + eax * 8;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    edx = esp + 0x2C;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004159A0(); /* call 0x004159A0 */

loc_00413E23: ;
    eax = MEM32(ebx + 0x34);
    esp = esp + 4;
    esi++;
    ebp = ebp + 0x28;
    if (CMP_L(esi, eax)) goto loc_00413DE5; /* jl: less (signed <) */

loc_00413E31: ;
    ecx = MEM32(ebx + 0x3C);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(ecx, eax)) goto loc_00413F92; /* jle: less or equal (signed <=) */

loc_00413E42: ;
    ecx = esp + 0x50;
    MEM32(esp + 0x18) = ecx;
    edx = esp + 0x38;
    ecx = esp + 0x80;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = eax;

loc_00413E61: ;
    edx = MEM32(ebx + 0x38);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ebx + 0x40);
    esi = MEM32(ebx);
    eax = eax + edx;
    edx = MEM32(eax + 0x38);
    edi = ZX16(MEM16(ecx + edx * 2));
    edx = MEM32(eax + 0x3C);
    ebp = ZX16(MEM16(ecx + edx * 2));
    edx = MEM32(eax + 0x44);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0); sub_00414C90(); /* call 0x00414C90 */

loc_00413E8D: ;
    eax = MEM32(ebx);
    esi = MEM32(eax + 0x8C);
    edi = edi << 6;
    xmm0 = MEMF(edi + esi + 0x30); /* movss */
    edi = edi + esi;
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x34); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x38); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    ecx = MEM32(eax + 0x8C);
    ebp = ebp << 6;
    xmm0 = MEMF(ebp + ecx + 0x30); /* movss */
    ebp = ebp + ecx;
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x34); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x38); /* movss */
    esp = esp + 8;
    MEMF(esp + 0x58) = xmm0; /* movss */
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
    eax = MEM32(ebx + 0x38);
    edi = MEM32(esp + 0xC);
    ecx = edi + eax + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00414600(); /* call 0x00414600 */

loc_00413F31: ;
    ecx = MEM32(ebx + 0x38);
    eax = MEM32(edi + ecx + 0x38);
    esi = edi + ecx;
    edx = eax + eax * 4;
    eax = MEM32(ebx + 8);
    xmm0 = MEMF(eax + edx * 8); /* movss */
    eax = eax + edx * 8;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    ecx = esp + 0x68;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, ecx);
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415740(); /* call 0x00415740 */

loc_00413F74: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 0x3C);
    esp = esp + 0x14;
    eax++;
    edi = edi + 0x48;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = edi;
    if (CMP_L(eax, ecx)) goto loc_00413E61; /* jl: less (signed <) */

loc_00413F92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00413FA0
 * Original: 0x00413FA0 - 0x00413FE9 (73 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00413FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edx = esi + 4;
    edi = eax;
    PUSH32(esp, 0); sub_00414440(); /* call 0x00414440 */

loc_00413FB4: ;
    if (CMP_LE(edi & edi, 0)) goto loc_00413FDD; /* jle: less or equal (signed <=) */

loc_00413FB8: ;
    eax = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00413FD2; /* jle: less or equal (signed <=) */

loc_00413FC1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00413BE0(); /* call 0x00413BE0 */

loc_00413FC7: ;
    eax = MEM32(esi + 0x1C);
    esp = esp + 4;
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_00413FC1; /* jl: less (signed <) */

loc_00413FD2: ;
    eax = esi + 4;
    PUSH32(esp, 0); sub_004143D0(); /* call 0x004143D0 */

loc_00413FDA: ;
    edi--;
    if ((edi != 0)) goto loc_00413FB8; /* jne: not equal / not zero */

loc_00413FDD: ;
    ebx = esi;
    PUSH32(esp, 0); sub_00413CF0(); /* call 0x00413CF0 */

loc_00413FE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00413FF0
 * Original: 0x00413FF0 - 0x004141A0 (432 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00413FF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00413FF0: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = ecx + ecx * 4;
    esi = esi << 3;
    edx = eax + esi;
    edi = edi << 3;
    eax = eax + edi;
    ecx = esp + 0x1C;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x1C;
    MEM32(esp + 0x10) = edx;
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
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(0x648D54) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D54))) goto loc_0041419A; /* jbe: below or equal (unsigned <=) */

loc_00414088: ;
    eax = MEM32(ebx + 4);
    xmm1 = MEMF(eax + edi + 0x24); /* movss */
    xmm1 = xmm1 + MEMF(eax + esi + 0x24); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(esp + 0x44); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(eax + esi + 0x24); /* movss */
    xmm2 = xmm2 / xmm1; /* divss */
    eax = esp + 0x1C;
    ecx = esp + 0x34;
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(ebx + 4);
    xmm0 = MEMF(edx + edi + 0x24); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm2; /* mulss */
    eax = esp + 0x1C;
    ecx = esp + 0x28;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x34;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x28;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_0041419A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_004141A0
 * Original: 0x004141A0 - 0x0041434F (431 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004141A0(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_004141A0: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = ecx + ecx * 4;
    esi = esi << 3;
    edx = eax + esi;
    edi = edi << 3;
    eax = eax + edi;
    ecx = esp + 0x18;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x18;
    MEM32(esp + 0x10) = edx;
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
    MEMF(esp + 0x14) = xmm1; /* movss */
    eax = MEM32(ebx + 4);
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(eax + edi + 0x24); /* movss */
    xmm3 = xmm3 + MEMF(eax + esi + 0x24); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(eax + esi + 0x24); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 / xmm3; /* divss */
    eax = esp + 0x18;
    ecx = esp + 0x30;
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x40) = ecx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(ebx + 4);
    xmm0 = MEMF(edx + edi + 0x24); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm2; /* mulss */
    eax = esp + 0x18;
    ecx = esp + 0x24;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x40) = ecx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x30;
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x24;
    MEM32(esp + 0x40) = eax;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00414350
 * Original: 0x00414350 - 0x004143B4 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414350(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00414350: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax << 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + edx) = esi;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(esp + 0xC);
    eax = eax << 4;
    MEM32(eax + edx + 4) = esi;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x10);
    eax = eax << 4;
    MEMF(eax + edx + 8) = xmm0; /* movss */
    edx = MEM32(ecx + 0x10);
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = MEM32(ecx + 8);
    POP32(esp, esi);
    if (1 /* jnp after test - parity */) { sub_004143B4(); return; } /* jnp: not parity */

loc_00414394: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax << 4;
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(eax + edx + 0xC) = xmm0; /* movss */
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004143D0
 * Original: 0x004143D0 - 0x0041443A (106 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004143D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004143D0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ebx + 0x14));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + 8);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0041440D; /* je: equal / zero */

loc_004143E1: ;
    if (CMP_BE(eax & eax, 0)) goto loc_00414436; /* jbe: below or equal (unsigned <=) */

loc_004143E5: ;
    edi = 0; /* xor self */

loc_004143E7: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + edi + 0xC);
    eax = eax + edi;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, 0); sub_004141A0(); /* call 0x004141A0 */

loc_004143FB: ;
    eax = MEM32(ebx + 8);
    esp = esp + 4;
    esi++;
    edi = edi + 0x10;
    if (CMP_B(esi, eax)) goto loc_004143E7; /* jb: below (unsigned <) */

loc_00414409: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0041440D: ;
    if (CMP_BE(eax & eax, 0)) goto loc_00414436; /* jbe: below or equal (unsigned <=) */

loc_00414411: ;
    edi = 0; /* xor self */

loc_00414413: ;
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + edi + 8);
    eax = edx + edi;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, 0); sub_00413FF0(); /* call 0x00413FF0 */

loc_00414428: ;
    eax = MEM32(ebx + 8);
    esp = esp + 4;
    esi++;
    edi = edi + 0x10;
    if (CMP_B(esi, eax)) goto loc_00414413; /* jb: below (unsigned <) */

loc_00414436: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00414440
 * Original: 0x00414440 - 0x00414505 (197 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414440(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00414440: ;
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 * xmm0; /* mulss */
    if (CMP_BE(eax & eax, 0)) goto loc_00414503; /* jbe: below or equal (unsigned <=) */

loc_00414451: ;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    goto loc_00414460;

    /* nop */
    edi = edi;

loc_00414460: ;
    eax = MEM32(edx + 4);
    xmm1 = MEMF(eax + ecx); /* movss */
    xmm5 = MEMF(eax + ecx + 0x18); /* movss */
    eax = eax + ecx;
    xmm2 = MEMF(eax + 4); /* movss */
    xmm3 = MEMF(eax + 8); /* movss */
    esi = eax + 4;
    edi = eax + 8;
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - MEMF(eax + 0xC); /* subss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(eax) = xmm4; /* movss */
    eax = MEM32(edx + 4);
    xmm5 = MEMF(eax + ecx + 0x1C); /* movss */
    eax = eax + ecx;
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - MEMF(eax + 0x10); /* subss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(esi) = xmm4; /* movss */
    eax = MEM32(edx + 4);
    xmm5 = MEMF(eax + ecx + 0x20); /* movss */
    eax = eax + ecx;
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 - MEMF(eax + 0x14); /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(edi) = xmm4; /* movss */
    eax = MEM32(edx + 4);
    eax = ecx + eax + 0xC;
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    MEMF(eax + 8) = xmm3; /* movss */
    eax = MEM32(edx);
    ebx++;
    ecx = ecx + 0x28;
    if (CMP_B(ebx, eax)) goto loc_00414460; /* jb: below (unsigned <) */

loc_00414501: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00414503: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00414510
 * Original: 0x00414510 - 0x004145F6 (230 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414510(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00414510: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00414524: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm0; /* movaps */
    esp = esp + 8;
    xmm2 = xmm2 * xmm0; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) { sub_004145F6(); return; } /* jbe: below or equal (unsigned <=) */

loc_00414540: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm1 = MEMF(ebx); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00414593; /* jp: parity */

loc_00414577: ;
    xmm1 = MEMF(ebx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00414593; /* jp: parity */

loc_00414585: ;
    xmm1 = MEMF(ebx + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_004145F6(); return; } /* jnp: not parity */

loc_00414593: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0041459A: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00414600
 * Original: 0x00414600 - 0x00414712 (274 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414600(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00414600: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
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
    MEMF(esp + 8) = xmm1; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00414712(); return; } /* jnp: not parity */

loc_0041464E: ;
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 * MEMF(esi + 4); /* mulss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 * MEMF(esi + 8); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * MEMF(esi); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00414712(); return; } /* jnp: not parity */

loc_00414707: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0041470E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00414730
 * Original: 0x00414730 - 0x00414982 (594 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00414730: ;
    esp = esp - 0x48;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
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
    xmm0 = MEMF(0x648D14); /* movss */
    ebx = esp + 0x34;
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEMF(esi + 0x28) = xmm0; /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    MEMF(esi) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00414797: ;
    eax = MEM32(esp + 0x50);
    ebx = esp + 0x40;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_004147A4: ;
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm6 = MEMF(esp + 0x38); /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm7 = MEMF(esp + 0x3C); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    eax = MEM32(esp + 0x28);
    xmm4 = xmm7; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm5 = xmm6; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = xmm6; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x1C) = eax;
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x1C;
    xmm5 = xmm5 + xmm1; /* addss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    xmm5 = xmm5 + xmm3; /* addss */
    MEM32(esp + 4) = eax;
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
    MEMF(esp + 8) = xmm1; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm0, MEMF(0x648D54) - sets EFLAGS */
    POP32(esp, ebx);
    if ((xmm0 <= MEMF(0x648D54))) { sub_00414982(); return; } /* jbe: below or equal (unsigned <=) */

loc_00414887: ;
    xmm6 = MEMF(esp + 0x1C); /* movss */
    xmm7 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 / xmm4; /* divss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm7; /* subss */
    MEMF(esi + 0x10) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 + xmm6; /* addss */
    MEMF(esi + 0x20) = xmm7; /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x30) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    MEMF(esi + 0x14) = xmm2; /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm7; /* subss */
    MEMF(esi + 0x24) = xmm2; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm3 = xmm3 + xmm5; /* addss */
    MEMF(esi + 0x34) = xmm2; /* movss */
    MEMF(esi + 8) = xmm4; /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esi + 0x28) = xmm3; /* movss */
    MEMF(esi + 0x38) = xmm2; /* movss */
    MEMF(esi + 0xC) = xmm2; /* movss */
    MEMF(esi + 0x1C) = xmm2; /* movss */
    MEMF(esi + 0x2C) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_00414B9A(); return; /* tail jmp 0x00414B9A */

}

/**
 * sub_00414BB0
 * Original: 0x00414BB0 - 0x00414C32 (130 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2, xmm3;

loc_00414BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    edx = MEM32(ecx + 0x88);
    eax = eax + eax * 8;
    eax = ZX16(MEM16(edx + eax * 4 + 0x18));
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    PUSH32(esp, esi);
    esi = esp + 0x10;
    if (CMP_EQ(eax, 0xFFFF)) { sub_00414C32(); return; } /* je: equal / zero */

loc_00414BD3: ;
    edx = MEM32(ecx + 0x8C);
    eax = eax << 6;
    eax = eax + edx;
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_00414BE7: ;
    eax = esi;
    MEM32(esp + 0xC) = eax;
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
 * sub_00414C90
 * Original: 0x00414C90 - 0x00414EED (605 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00414C90: ;
    esp = esp - 0x54;
    edx = MEM32(esi + 0x88);
    eax = ecx + ecx * 8;
    eax = ZX16(MEM16(edx + eax * 4 + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax + eax * 8;
    SET_LO16(edi, MEM16(edx + edi * 4 + 0x18));
    edx = MEM32(esi + 0x8C);
    ebp = MEM32(esp + 0x68);
    ecx = ecx << 6;
    xmm0 = MEMF(ecx + edx + 0x30); /* movss */
    ecx = ecx + edx;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x34); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x38); /* movss */
    eax = eax << 6;
    eax = eax + edx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x30); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    eax = ZX16(LO16(edi));
    eax = eax << 6;
    eax = eax + edx;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x30); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    ecx = esp + 0x30;
    edx = esp + 0x3C;
    eax = esp + 0x24;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x30;
    edx = esp + 0x48;
    eax = esp + 0x18;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
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
    eax = esp + 0x24;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00414DB5: ;
    eax = esp + 0x18;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00414DC0: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm3 = MEMF(esp + 0x28); /* movss */
    xmm6 = MEMF(esp + 0x24); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm4 = xmm4 + xmm7; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = MEMF(0x649408); /* movss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) { sub_00414EED(); return; } /* jbe: below or equal (unsigned <=) */

loc_00414E19: ;
    eax = MEM32(esp + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00414E88; /* je: equal / zero */

loc_00414E21: ;
    xmm7 = xmm1; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    edx = MEM32(esp + 0x54);
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    eax = MEM32(esp + 0x58);
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm5; /* mulss */
    ecx = ebp;
    MEM32(ecx) = edx;
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    edx = MEM32(esp + 0x5C);
    MEM32(ecx + 4) = eax;
    eax = ebp;
    ebx = ebp;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00414E7C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_00414E88: ;
    xmm7 = xmm0; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    ecx = MEM32(esp + 0x54);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    edx = MEM32(esp + 0x58);
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    eax = ebp;
    MEM32(eax) = ecx;
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 4) = edx;
    ebx = ebp;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00414EE1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_00414F00
 * Original: 0x00414F00 - 0x00414F79 (121 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00414F00: ;
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(edx + 0x84));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edi++;
    if (CMP_AE(LO16(edi), LO16(ebp))) goto loc_00414F76; /* jae: above or equal (unsigned >=) */

loc_00414F13: ;
    PUSH32(esp, ebx);
    eax = ZX16(LO16(edi));
    PUSH32(esp, esi);
    esi = eax;
    ebx = eax + eax * 8;
    esi = esi << 6;
    ebx = ebx << 2;

loc_00414F23: ;
    eax = edi;

loc_00414F25: ;
    ecx = MEM32(esp + 0x14);
    eax = ZX16(LO16(eax));
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ecx = MEM32(edx + 0x88);
    if (CMP_EQ(eax, ecx)) goto loc_00414F46; /* je: equal / zero */

loc_00414F36: ;
    eax = eax + eax * 8;
    SET_LO16(eax, MEM16(ecx + eax * 4 + 0x18));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00414F25; /* jne: not equal / not zero */

loc_00414F44: ;
    goto loc_00414F68;

loc_00414F46: ;
    ecx = ZX16(MEM16(ebx + ecx + 0x18));
    eax = MEM32(edx + 0x8C);
    ecx = ecx << 6;
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x90);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00414F68: ;
    edi++;
    ebx = ebx + 0x24;
    esi = esi + 0x40;
    if (CMP_B(LO16(edi), LO16(ebp))) goto loc_00414F23; /* jb: below (unsigned <) */

loc_00414F74: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00414F76: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00414F80
 * Original: 0x00414F80 - 0x00414FB5 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414F80(void)
{

loc_00414F80: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x8C);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x88);
    edx = MEM32(edx + 0x90);
    ecx = ecx + ecx * 8;
    ecx = ZX16(MEM16(edi + ecx * 4 + 0x18));
    ecx = ecx << 6;
    eax = eax << 6;
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    edx = edx + eax;
    PUSH32(esp, edx);
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00414FB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00414FC0
 * Original: 0x00414FC0 - 0x004150B4 (244 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00414FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00414FC0: ;
    esp = esp - 0x20;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x84));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    ebx = ebp + 1;
    (void)0; /* cmp LO16(ebx), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_AE(LO16(ebx), LO16(ecx))) goto loc_004150AE; /* jae: above or equal (unsigned >=) */

loc_00414FE2: ;
    PUSH32(esp, edi);
    edi = ZX16(LO16(ebx));
    edi = edi << 6;
    /* nop */

loc_00414FF0: ;
    eax = ebx;

loc_00414FF2: ;
    eax = ZX16(LO16(eax));
    if (CMP_EQ(eax, ebp)) goto loc_00415012; /* je: equal / zero */

loc_00414FF9: ;
    edx = MEM32(esi + 0x88);
    eax = eax + eax * 8;
    SET_LO16(eax, MEM16(edx + eax * 4 + 0x18));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00414FF2; /* jne: not equal / not zero */

loc_0041500D: ;
    goto loc_004150A0;

loc_00415012: ;
    eax = MEM32(esi + 0x8C);
    xmm0 = MEMF(eax + edi + 0x30); /* movss */
    eax = eax + edi;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    eax = esp + 0x14;
    ecx = esp + 0x20;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x34);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esi + 0x8C);
    xmm0 = MEMF(esp + 0x20); /* movss */
    ecx = MEM32(esp + 0x10);
    eax = eax + edi;
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */

loc_004150A0: ;
    ebx++;
    edi = edi + 0x40;
    if (CMP_B(LO16(ebx), LO16(ecx))) goto loc_00414FF0; /* jb: below (unsigned <) */

loc_004150AD: ;
    POP32(esp, edi);

loc_004150AE: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_004150C0
 * Original: 0x004150C0 - 0x00415733 (1651 bytes, 399 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004150C0(void)
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

loc_004150C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x194;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003F8620(); /* call 0x003F8620 */

loc_004150DB: ;
    eax = ZX16(MEM16(ebx + 0x10));
    esi = MEM32(edi + 0x8C);
    eax = eax << 6;
    xmm0 = MEMF(eax + esi + 0x30); /* movss */
    eax = eax + esi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    esp = esp + 4;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0041511F: ;
    eax = ZX16(MEM16(ebx + 0xE));
    ecx = MEM32(edi + 0x8C);
    eax = eax << 6;
    xmm0 = MEMF(eax + ecx + 0x30); /* movss */
    eax = eax + ecx;
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00415163: ;
    eax = ZX16(MEM16(ebx + 0xC));
    edx = MEM32(edi + 0x8C);
    eax = eax << 6;
    xmm0 = MEMF(eax + edx + 0x30); /* movss */
    eax = eax + edx;
    PUSH32(esp, edi);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x104;
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0xA4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_004151B3: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_004151C5: ;
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_004151D7: ;
    xmm2 = xmm0; /* movaps */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 + MEMF(ebx); /* addss */
    esp = esp + 8;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm2; /* movss */
    if ((xmm0 < xmm2)) { sub_00415733(); return; } /* jb: below (unsigned <) */

loc_004151F5: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00415733(); return; } /* jbe: below or equal (unsigned <=) */

loc_0041520A: ;
    ecx = esp + 0x48;
    edx = esp + 0xD8;
    eax = esp + 0xCC;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x48;
    edx = esp + 0xFC;
    eax = esp + 0xF0;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
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
    xmm0 = MEMF(ebx); /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_004152E5; /* ja: above (unsigned >) */

loc_004152D8: ;
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_004152E8; /* jbe: below or equal (unsigned <=) */

loc_004152E5: ;
    xmm0 = xmm1; /* movaps */

loc_004152E8: ;
    PUSH32(esp, 0); sub_003E3920(); /* call 0x003E3920 */

loc_004152ED: ;
    SET_LO8(eax, MEM8(ebx + 0x12));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00415307; /* je: equal / zero */

loc_004152FA: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0xC) = xmm1; /* movss */

loc_00415307: ;
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    esi = esp + 0x164;
    eax = esp + 0xF4;
    PUSH32(esp, 0); sub_00414730(); /* call 0x00414730 */

loc_00415322: ;
    esp = esp + 4;
    edx = esi;
    PUSH32(esp, edx);
    ebx = ebx + 0x14;
    PUSH32(esp, ebx);
    eax = esp + 0xEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00415339: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x124;
    PUSH32(esp, edx);
    ecx = esp + 0xEC;
    PUSH32(esp, 0); sub_00428AB7(); /* call 0x00428AB7 */

loc_00415352: ;
    eax = esp + 0x120;
    ecx = esp + 0xCC;
    edx = esp + 0x30;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = edx;
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
    eax = edx;
    ebx = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_004153BB: ;
    ebx = MEM32(ebp + 8);
    xmm0 = MEMF(ebx); /* movss */
    eax = esp + 0x30;
    ecx = eax;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
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
    eax = ecx;
    edx = esp + 0x48;
    ecx = esp + 0x108;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = edi + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x10C;
    PUSH32(esp, eax);
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00415454: ;
    edx = esp + 0x18;
    eax = esp + 0x60;
    ecx = esp + 0x84;
    MEM32(esp + 0x10) = edx;
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
    edx = esp + 0x18;
    eax = esp + 0xB4;
    ecx = esp + 0x9C;
    MEM32(esp + 0x10) = edx;
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
    xmm0 = MEMF(esp + 0x9C); /* movss */
    eax = ZX16(MEM16(ebx + 0xE));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x8C); /* movss */
    edx = esp + 0x24;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0); sub_00414BB0(); /* call 0x00414BB0 */

loc_00415545: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 0xE));
    ecx = edi;
    PUSH32(esp, 0); sub_00414BB0(); /* call 0x00414BB0 */

loc_00415555: ;
    esp = esp + 8;
    edx = ebx + 0x20;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_00415CB0(); /* call 0x00415CB0 */

loc_00415564: ;
    if (TEST_Z(eax, eax)) { sub_00415733(); return; } /* je: equal / zero */

loc_0041556C: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    esi = esp + 0x124;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00414730(); /* call 0x00414730 */

loc_00415581: ;
    eax = ZX16(MEM16(ebx + 0x10));
    esi = MEM32(edi + 0x8C);
    esp = esp + 4;
    eax = eax << 6;
    eax = eax + esi;
    PUSH32(esp, eax);
    edx = esp + 0x124;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_004155A2: ;
    ecx = ZX16(MEM16(ebx + 0xE));
    edx = edi;
    PUSH32(esp, 0); sub_00414F80(); /* call 0x00414F80 */

loc_004155AD: ;
    ecx = ZX16(MEM16(ebx + 0xC));
    edx = edi;
    PUSH32(esp, 0); sub_00414F80(); /* call 0x00414F80 */

loc_004155B8: ;
    eax = ZX16(MEM16(ebx + 0xC));
    ecx = MEM32(edi + 0x8C);
    eax = eax << 6;
    xmm0 = MEMF(eax + ecx + 0x30); /* movss */
    eax = eax + ecx;
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    eax = esp + 0xB4;
    ecx = esp + 0x78;
    edx = esp + 0xA8;
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
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
    eax = esp + 0xB4;
    ecx = esp + 0xC0;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(ebp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    eax = ZX16(MEM16(ebx + 0xC));
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xAC); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB0); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC0); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC4); /* movss */
    edx = esp + 0x6C;
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00414BB0(); /* call 0x00414BB0 */

loc_004156D7: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 0xC));
    ecx = edi;
    PUSH32(esp, 0); sub_00414BB0(); /* call 0x00414BB0 */

loc_004156E7: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    esi = esp + 0x12C;
    eax = esp + 0x78;
    PUSH32(esp, 0); sub_00414730(); /* call 0x00414730 */

loc_004156FC: ;
    eax = ZX16(MEM16(ebx + 0xE));
    edx = MEM32(edi + 0x8C);
    esp = esp + 0xC;
    eax = eax << 6;
    eax = eax + edx;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00415718: ;
    eax = ZX16(MEM16(ebx + 0xE));
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_00414F00(); /* call 0x00414F00 */

loc_00415724: ;
    esp = esp + 4;
    eax = 1;
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
 * sub_00415740
 * Original: 0x00415740 - 0x004158BB (379 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415740(void)
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

loc_00415740: ;
    esp = esp - 0x30;
    eax = ZX16(MEM16(esi + 0x10));
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x8C);
    eax = eax << 6;
    xmm0 = MEMF(eax + edx + 0x30); /* movss */
    eax = eax + edx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    edx = esp + 0xC;
    eax = esp + 0x24;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 4) = edx;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x24;
    MEM32(esp + 4) = ecx;
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
    MEMF(esp) = xmm1; /* movss */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_004158BB(); return; } /* jbe: below or equal (unsigned <=) */

loc_004157F4: ;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    xmm1 = MEMF(esp); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00415819; /* jb: below (unsigned <) */

loc_00415807: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004150C0(); /* call 0x004150C0 */

loc_00415812: ;
    esp = esp + 8;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_00415819: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x38); /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) { sub_004158BB(); return; } /* jb: below (unsigned <) */

loc_0041582B: ;
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * MEMF(0x649408); /* mulss */
    eax = esp + 0x24;
    ecx = esp + 0x18;
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0xC;
    eax = ecx;
    MEM32(esp + 4) = edx;
    MEM32(esp) = eax;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004150C0(); /* call 0x004150C0 */

loc_004158B2: ;
    esp = esp + 8;
    eax = eax << 1;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004158D0
 * Original: 0x004158D0 - 0x00415996 (198 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004158D0(void)
{
    float xmm0, xmm1, xmm2, xmm4;

loc_004158D0: ;
    esp = esp - 0x14;
    MEM16(ecx + 8) = LO16(edx);
    MEM32(ecx + 4) = eax;
    edx = ZX16(LO16(edx));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x88);
    edx = edx + edx * 8;
    edx = edx << 2;
    SET_LO16(esi, MEM16(esi + edx + 0x18));
    MEM16(ecx + 0xA) = LO16(esi);
    eax = MEM32(eax + 0x88);
    xmm0 = MEMF(eax + edx); /* movss */
    eax = eax + edx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 4) = eax;
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
    xmm0 = MEMF(esp + 8); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    MEMF(ecx) = xmm0; /* movss */
    PUSH32(esp, 0x40C90FDB);
    ecx = ecx + 0xC;
    PUSH32(esp, 0x78);
    xmm1 = xmm4; /* movaps */
    PUSH32(esp, 0); sub_00415BF0(); /* call 0x00415BF0 */

loc_00415970: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0x79);
    xmm1 = xmm4; /* movaps */
    PUSH32(esp, 0); sub_00415BF0(); /* call 0x00415BF0 */

loc_0041597F: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0x7A);
    xmm1 = xmm4; /* movaps */
    PUSH32(esp, 0); sub_00415BF0(); /* call 0x00415BF0 */

loc_0041598E: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_004159A0
 * Original: 0x004159A0 - 0x00415BDF (575 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004159A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_004159A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    eax = ZX16(MEM16(edi + 0xA));
    PUSH32(esp, ebx);
    eax = eax << 6;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    ecx = MEM32(esi + 0x8C);
    xmm0 = MEMF(eax + ecx + 0x30); /* movss */
    eax = eax + ecx;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    eax = ZX16(MEM16(edi + 8));
    MEMF(esp + 0x40) = xmm0; /* movss */
    edx = MEM32(esi + 0x8C);
    eax = eax << 6;
    xmm0 = MEMF(eax + edx + 0x30); /* movss */
    eax = eax + edx;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    eax = esp + 0x38;
    ecx = esp + 0x20;
    MEM32(esp + 0x5C) = esi;
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x38;
    eax = esp + 0x50;
    ecx = esp + 0x14;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 8) = ecx;
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
    eax = esp + 0x20;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00415A97: ;
    xmm0 = MEMF(edi); /* movss */
    edx = ebx;
    eax = ebx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x10) = eax;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x14;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00415ADD: ;
    xmm0 = MEMF(edi); /* movss */
    ecx = ebx;
    edx = ebx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = edx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = esp + 0x2C;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edi + 8));
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    ecx = esi;
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00414BB0(); /* call 0x00414BB0 */

loc_00415B70: ;
    eax = ZX16(MEM16(edi + 8));
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00414BB0(); /* call 0x00414BB0 */

loc_00415B80: ;
    esp = esp + 8;
    edx = edi + 0xC;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_00415CB0(); /* call 0x00415CB0 */

loc_00415B8F: ;
    if (TEST_Z(eax, eax)) { sub_00415BDF(); return; } /* je: equal / zero */

loc_00415B93: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    esi = esp + 0x64;
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_00414730(); /* call 0x00414730 */

loc_00415BA5: ;
    eax = ZX16(MEM16(edi + 0xA));
    edx = MEM32(esp + 0x60);
    esi = MEM32(edx + 0x8C);
    esp = esp + 4;
    eax = eax << 6;
    eax = eax + esi;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00415BC7: ;
    eax = ZX16(MEM16(edi + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00414F00(); /* call 0x00414F00 */

loc_00415BD1: ;
    esp = esp + 4;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00415BF0
 * Original: 0x00415BF0 - 0x00415C76 (134 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00415BF0: ;
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    xmm2 = MEMF(0x648D30); /* movss */
    if ((xmm3 <= xmm1)) goto loc_00415C09; /* jbe: below or equal (unsigned <=) */

loc_00415C00: ;
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 > xmm1)) goto loc_00415C00; /* ja: above (unsigned >) */

loc_00415C09: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_00415C19; /* jbe: below or equal (unsigned <=) */

loc_00415C0E: ;
    edi = edi;

loc_00415C10: ;
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 > xmm2)) goto loc_00415C10; /* ja: above (unsigned >) */

loc_00415C19: ;
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00415C2D; /* jbe: below or equal (unsigned <=) */

loc_00415C24: ;
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_00415C24; /* ja: above (unsigned >) */

loc_00415C2D: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00415C3B; /* jbe: below or equal (unsigned <=) */

loc_00415C32: ;
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_00415C32; /* ja: above (unsigned >) */

loc_00415C3B: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 4);
    eax = eax + 0xFFFFFFA8u;
    if (CMP_A(eax, 0x22)) goto loc_00415C75; /* ja: above (unsigned >) */

loc_00415C48: ;
    eax = ZX8(MEM8(eax + 0x415C88));
    { uint32_t _jt = MEM32(eax * 4 + 0x415C78); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00415C56u) goto loc_00415C56;
    if (_jt == 0x00415C60u) goto loc_00415C60;
    if (_jt == 0x00415C6Bu) goto loc_00415C6B;
    if (_jt == 0x00415C75u) goto loc_00415C75;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00415C56: ;
    MEMF(ecx) = xmm1; /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_00415C60: ;
    MEMF(ecx + 8) = xmm1; /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_00415C6B: ;
    MEMF(ecx + 0x10) = xmm1; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */

loc_00415C75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00415CB0
 * Original: 0x00415CB0 - 0x00415E95 (485 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415CB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00415CB0: ;
    esp = esp - 0x24;
    xmm1 = MEMF(eax + 4); /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm6 = MEMF(0x648D54); /* movss */
    xmm7 = MEMF(eax + 8); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x648D30); /* movss */
    xmm5 = xmm1; /* movaps */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm1, xmm6 - sets EFLAGS */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    if ((xmm1 <= xmm6)) goto loc_00415D87; /* jbe: below or equal (unsigned <=) */

loc_00415D0B: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00415D19: ;
    esp = esp + 8;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_00415D2A; /* jbe: below or equal (unsigned <=) */

loc_00415D21: ;
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_00415D21; /* ja: above (unsigned >) */

loc_00415D2A: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00415D39; /* jbe: below or equal (unsigned <=) */

loc_00415D2F: ;
    /* nop */

loc_00415D30: ;
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_00415D30; /* ja: above (unsigned >) */

loc_00415D39: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm2 = MEMF(edx + 0x14); /* movss */
    xmm1 = MEMF(edx + 0x10); /* movss */
    if ((xmm4 <= xmm0)) goto loc_00415D59; /* jbe: below or equal (unsigned <=) */

loc_00415D48: ;
    goto loc_00415D50;

    /* nop */

loc_00415D50: ;
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_00415D50; /* ja: above (unsigned >) */

loc_00415D59: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00415D69; /* jbe: below or equal (unsigned <=) */

loc_00415D5E: ;
    edi = edi;

loc_00415D60: ;
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_00415D60; /* ja: above (unsigned >) */

loc_00415D69: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00415D79; /* jbe: below or equal (unsigned <=) */

loc_00415D6E: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00415E8F; /* jb: below (unsigned <) */

loc_00415D77: ;
    goto loc_00415D7E;

loc_00415D79: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_00415D87; /* jae: above or equal (unsigned >=) */

loc_00415D7E: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_00415E8F; /* jb: below (unsigned <) */

loc_00415D87: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_00415E0C; /* jbe: below or equal (unsigned <=) */

loc_00415D93: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00415DA2: ;
    esp = esp + 8;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_00415DB9; /* jbe: below or equal (unsigned <=) */

loc_00415DAA: ;
    /* nop */

loc_00415DB0: ;
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_00415DB0; /* ja: above (unsigned >) */

loc_00415DB9: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00415DC9; /* jbe: below or equal (unsigned <=) */

loc_00415DBE: ;
    edi = edi;

loc_00415DC0: ;
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_00415DC0; /* ja: above (unsigned >) */

loc_00415DC9: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm2 = MEMF(edx + 4); /* movss */
    xmm1 = MEMF(edx); /* movss */
    if ((xmm4 <= xmm0)) goto loc_00415DE0; /* jbe: below or equal (unsigned <=) */

loc_00415DD7: ;
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_00415DD7; /* ja: above (unsigned >) */

loc_00415DE0: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00415DEE; /* jbe: below or equal (unsigned <=) */

loc_00415DE5: ;
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_00415DE5; /* ja: above (unsigned >) */

loc_00415DEE: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00415DFE; /* jbe: below or equal (unsigned <=) */

loc_00415DF3: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00415E8F; /* jb: below (unsigned <) */

loc_00415DFC: ;
    goto loc_00415E03;

loc_00415DFE: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_00415E0C; /* jae: above or equal (unsigned >=) */

loc_00415E03: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_00415E8F; /* jb: below (unsigned <) */

loc_00415E0C: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) { sub_00415E95(); return; } /* jbe: below or equal (unsigned <=) */

loc_00415E1C: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00415E2B: ;
    esp = esp + 8;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_00415E3C; /* jbe: below or equal (unsigned <=) */

loc_00415E33: ;
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_00415E33; /* ja: above (unsigned >) */

loc_00415E3C: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00415E4A; /* jbe: below or equal (unsigned <=) */

loc_00415E41: ;
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_00415E41; /* ja: above (unsigned >) */

loc_00415E4A: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm2 = MEMF(edx + 0xC); /* movss */
    xmm1 = MEMF(edx + 8); /* movss */
    if ((xmm4 <= xmm0)) goto loc_00415E69; /* jbe: below or equal (unsigned <=) */

loc_00415E59: ;
    /* nop */

loc_00415E60: ;
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_00415E60; /* ja: above (unsigned >) */

loc_00415E69: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00415E79; /* jbe: below or equal (unsigned <=) */

loc_00415E6E: ;
    edi = edi;

loc_00415E70: ;
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_00415E70; /* ja: above (unsigned >) */

loc_00415E79: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00415E85; /* jbe: below or equal (unsigned <=) */

loc_00415E7E: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00415E8F; /* jb: below (unsigned <) */

loc_00415E83: ;
    goto loc_00415E8A;

loc_00415E85: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) { sub_00415E95(); return; } /* jae: above or equal (unsigned >=) */

loc_00415E8A: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 >= xmm0)) { sub_00415E95(); return; } /* jae: above or equal (unsigned >=) */

loc_00415E8F: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00415EA0
 * Original: 0x00415EA0 - 0x00415EB5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415EA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00415EA0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    eax = eax - MEM32(edx);
    if ((eax != 0)) goto loc_00415EB4; /* jne: not equal / not zero */

loc_00415EAE: ;
    eax = MEM32(ecx + 4);
    eax = eax - MEM32(edx + 4);

loc_00415EB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00415EC0
 * Original: 0x00415EC0 - 0x00415FD9 (281 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00415EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00415EC0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00415FB1; /* je: equal / zero */

loc_00415ED0: ;
    if (TEST_Z(ebx, ebx)) goto loc_00415FB1; /* je: equal / zero */

loc_00415ED8: ;
    edx = MEM32(esp + 0x2C);
    if (TEST_Z(edx, edx)) goto loc_00415FB1; /* je: equal / zero */

loc_00415EE4: ;
    ecx = MEM32(esp + 0x28);
    eax = ecx;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00415EFB; /* je: equal / zero */

loc_00415EEF: ;
    eax--;
    if ((eax != 0)) goto loc_00415FBB; /* jne: not equal / not zero */

loc_00415EF6: ;
    esi = MEM32(edi + 0xC);
    goto loc_00415EFE;

loc_00415EFB: ;
    esi = MEM32(edi + 8);

loc_00415EFE: ;
    if (TEST_Z(esi, esi)) { sub_00415FD9(); return; } /* je: equal / zero */

loc_00415F06: ;
    edx = ebx;
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_00415F0D: ;
    PUSH32(esp, 0x415EA0);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0); sub_00471B99(); /* call 0x00471B99 */

loc_00415F2E: ;
    ebp = eax;
    esp = esp + 0x14;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (TEST_Z(ebp, ebp)) goto loc_00415FB1; /* je: equal / zero */

loc_00415F3F: ;
    edi = MEM32(edi);
    edx = edi + edi * 2;
    edi = esi + edx * 4;

loc_00415F47: ;
    if (CMP_AE(ebp, edi)) goto loc_00415FB1; /* jae: above or equal (unsigned >=) */

loc_00415F4B: ;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(ebp), eax)) goto loc_00415FB1; /* jne: not equal / not zero */

loc_00415F54: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(ebp + 8);
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00416000(); /* call 0x00416000 */

loc_00415F64: ;
    if (TEST_Z(eax, eax)) goto loc_00415FAC; /* je: equal / zero */

loc_00415F68: ;
    eax = MEM32(esp + 0x10);
    esi = ebx;
    edi = edi;

loc_00415F70: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi))) goto loc_00415F94; /* jne: not equal / not zero */

loc_00415F78: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00415F90; /* je: equal / zero */

loc_00415F7C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi + 1))) goto loc_00415F94; /* jne: not equal / not zero */

loc_00415F86: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00415F70; /* jne: not equal / not zero */

loc_00415F90: ;
    eax = 0; /* xor self */
    goto loc_00415F99;

loc_00415F94: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00415F99: ;
    if (TEST_NZ(eax, eax)) goto loc_00415FAC; /* jne: not equal / not zero */

loc_00415F9D: ;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(eax, MEM32(esp + 0x24))) goto loc_00415FC4; /* je: equal / zero */

loc_00415FA7: ;
    eax++;
    MEM32(esp + 0xC) = eax;

loc_00415FAC: ;
    ebp = ebp + 0xC;
    if ((ebp != 0)) goto loc_00415F47; /* jne: not equal / not zero */

loc_00415FB1: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = 0;

loc_00415FBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00415FC4: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = ecx;
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00416000
 * Original: 0x00416000 - 0x0041601B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416000(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416000: ;
    eax = eax - 0;
    if ((eax == 0)) { sub_0041601B(); return; } /* je: equal / zero */

loc_00416005: ;
    eax--;
    if ((eax == 0)) goto loc_00416011; /* je: equal / zero */

loc_00416008: ;
    MEM32(ecx) = 0;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00416011: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00416030
 * Original: 0x00416030 - 0x00416051 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416030: ;
    if (TEST_Z(ecx, ecx)) { sub_00416051(); return; } /* je: equal / zero */

loc_00416034: ;
    if (TEST_Z(edx, edx)) { sub_00416051(); return; } /* je: equal / zero */

loc_00416038: ;
    if (TEST_S(eax, eax)) { sub_00416051(); return; } /* jl: less (signed <) */

loc_0041603C: ;
    if (CMP_AE(eax, MEM32(ecx))) { sub_00416051(); return; } /* jae: above or equal (unsigned >=) */

loc_00416040: ;
    ecx = MEM32(ecx + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    MEM32(edx) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00416060
 * Original: 0x00416060 - 0x004160D7 (119 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00416060: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    MEM32(eax) = 0;
    if (TEST_Z(edi, edi)) goto loc_004160D1; /* je: equal / zero */

loc_00416075: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_004160D1; /* je: equal / zero */

loc_0041607D: ;
    if (TEST_Z(ebp, ebp)) goto loc_004160D1; /* je: equal / zero */

loc_00416081: ;
    eax = MEM32(edi);
    esi = MEM32(edi + 4);
    ecx = eax + eax * 2;
    edx = esi + ecx * 4;
    ebx = 0; /* xor self */
    if (CMP_AE(esi, edx)) goto loc_004160D1; /* jae: above or equal (unsigned >=) */

loc_00416092: ;
    eax = MEM32(esp + 0x18);
    eax = eax - 0;
    if ((eax == 0)) goto loc_004160A2; /* je: equal / zero */

loc_0041609B: ;
    eax--;
    if ((eax != 0)) goto loc_004160BF; /* jne: not equal / not zero */

loc_0041609E: ;
    eax = MEM32(esi);
    goto loc_004160A5;

loc_004160A2: ;
    eax = MEM32(esi + 4);

loc_004160A5: ;
    if (TEST_Z(eax, eax)) goto loc_004160BF; /* je: equal / zero */

loc_004160A9: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_004160B1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_004160BF; /* jne: not equal / not zero */

loc_004160B8: ;
    if (CMP_EQ(MEM32(esp + 0x14), ebx)) { sub_004160D7(); return; } /* je: equal / zero */

loc_004160BE: ;
    ebx++;

loc_004160BF: ;
    eax = MEM32(edi);
    edx = eax + eax * 2;
    eax = MEM32(edi + 4);
    esi = esi + 0xC;
    ecx = eax + edx * 4;
    if (CMP_B(esi, ecx)) goto loc_00416092; /* jb: below (unsigned <) */

loc_004160D1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004160F0
 * Original: 0x004160F0 - 0x00416122 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004160F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004160F0: ;
    ecx = (uint32_t)(int32_t)SMEM8(edx);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_00416121; /* je: equal / zero */

loc_004160F9: ;
    PUSH32(esp, esi);
    /* nop */

loc_00416100: ;
    eax = eax << 4;
    eax = eax + ecx;
    ecx = eax;
    edx++;
    ecx = ecx & 0xF0000000u;
    if ((ecx == 0)) goto loc_00416119; /* je: equal / zero */

loc_00416110: ;
    esi = ecx;
    esi = esi >> 0x18;
    esi = esi | ecx;
    eax = eax ^ esi;

loc_00416119: ;
    ecx = (uint32_t)(int32_t)SMEM8(edx);
    if (TEST_NZ(ecx, ecx)) goto loc_00416100; /* jne: not equal / not zero */

loc_00416120: ;
    POP32(esp, esi);

loc_00416121: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00416130
 * Original: 0x00416130 - 0x00416164 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416130(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416130: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edx));
    eax = 0; /* xor self */
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00416163; /* je: equal / zero */

loc_0041613C: ;
    PUSH32(esp, esi);
    /* nop */

loc_00416140: ;
    eax = eax << 4;
    eax = eax + ecx;
    ecx = eax;
    edx = edx + 2;
    ecx = ecx & 0xF000;
    if ((ecx == 0)) goto loc_0041615A; /* je: equal / zero */

loc_00416152: ;
    SET_LO16(esi, ZX8(HI8(ecx)));
    esi = esi | ecx;
    eax = eax ^ esi;

loc_0041615A: ;
    SET_LO16(ecx, MEM16(edx));
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_00416140; /* jne: not equal / not zero */

loc_00416162: ;
    POP32(esp, esi);

loc_00416163: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00416170
 * Original: 0x00416170 - 0x004161EE (126 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00416170: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = eax + ebx;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = edx;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0x10) = eax;
    if (CMP_AE(ebx, eax)) goto loc_004161E8; /* jae: above or equal (unsigned >=) */

loc_00416187: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    /* nop */

loc_00416190: ;
    edx = MEM32(ebx);
    ebp = MEM32(ebx + 4);
    ebx = ebx + 4;
    ebx = ebx + 4;
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(edx, ebp)) goto loc_004161B7; /* jne: not equal / not zero */

loc_004161A3: ;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    esi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    goto loc_004161D2;

loc_004161B7: ;
    ecx = MEM32(0x84BE38);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = ebp;
    ecx = edi;
    PUSH32(esp, 0); sub_0054AE40(); /* call 0x0054AE40 */

loc_004161CE: ;
    edx = MEM32(esp + 0x14);

loc_004161D2: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    ebx = ebx + ebp;
    edi = edi + edx;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_B(ebx, eax)) goto loc_00416190; /* jb: below (unsigned <) */

loc_004161E6: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_004161E8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_004161F0
 * Original: 0x004161F0 - 0x004162E1 (241 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004161F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_004161F0: ;
    eax = MEM32(0x84BE58);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_00416237; /* je: equal / zero */

loc_004161FC: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(edi, esi)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64612C);
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x646120);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416210: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_00416237; /* je: equal / zero */

loc_0041621C: ;
    (void)0; /* cmp edi, 0x3E8 - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(edi, 0x3E8)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6460F8);
    PUSH32(esp, 0x6F);
    PUSH32(esp, 0x646120);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416234: ;
    esp = esp + 0x10;

loc_00416237: ;
    eax = MEM32(esp + 8);
    MEM32(0x84BE4C) = eax;
    MEM32(0x758620) = edi;
    /* TODO: rdtsc  */
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00416252: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0041625F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x828B38) = esi;
    MEM32(0x828B3C) = esi;
    MEM32(0x84BE44) = esi;
    MEM32(0x828B6C) = esi;
    MEM32(0x828B78) = esi;
    MEM32(0x828B7C) = esi;
    MEM32(0x828B58) = esi;
    MEM32(0x828B48) = eax;
    MEM32(0x828B4C) = edx;
    MEM32(0x828B60) = eax;
    MEM32(0x828B64) = edx;
    MEM32(0x828B50) = eax;
    MEM32(0x828B54) = edx;
    MEMF(0x828B80) = xmm0; /* movss */
    MEMF(0x828B68) = xmm0; /* movss */
    MEMF(0x828B40) = xmm0; /* movss */
    MEMF(0x828B74) = xmm0; /* movss */
    MEMF(0x828B70) = xmm0; /* movss */
    MEM32(0x84BE54) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004162F0
 * Original: 0x004162F0 - 0x0041651C (556 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004162F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
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

loc_004162F0: ;
    eax = MEM32(0x84BE4C);
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebp)) { sub_0041651C(); return; } /* jne: not equal / not zero */

loc_00416305: ;
    esi = MEM32(0x828B50);
    edi = MEM32(0x828B54);
    MEM32(0x828B60) = esi;
    MEM32(0x828B64) = edi;
    /* TODO: rdtsc  */
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00416329: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00416336: ;
    MEM32(0x84BE40) = MEM32(0x84BE40) + 1;
    ecx = eax;
    ecx = ecx - esi;
    esi = edx;
    esi = esi - edi - _cf; /* sbb */
    MEM32(0x828B50) = eax;
    MEM32(0x828B54) = edx;
    MEM32(0x828B38) = ecx;
    MEM32(0x828B3C) = esi;
    if ((esi != 0)) goto loc_00416365; /* jne: not equal / not zero */

loc_0041635D: ;
    if (CMP_BE(ecx, 0xF4240)) goto loc_00416376; /* jbe: below or equal (unsigned <=) */

loc_00416365: ;
    ecx = 0xF4240;
    MEM32(0x828B38) = ecx;
    MEM32(0x828B3C) = ebp;

loc_00416376: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00416388; /* jge: greater or equal (signed >=) */

loc_00416382: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00416388: ;
    esi = MEM32(0x828B48);
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(0x828B4C);
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x649284); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebp);
    eax = eax - esi;
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    xmm1 = xmm1 / xmm0; /* divss */
    PUSH32(esp, eax);
    MEMF(0x828B80) = xmm0; /* movss */
    MEMF(0x828B68) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_004163D3: ;
    MEM32(0x828B6C) = eax;
    if (CMP_EQ(MEM32(0x84BE44), ebp)) goto loc_004163FA; /* je: equal / zero */

loc_004163E0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(0x828B40) = xmm0; /* movss */
    MEMF(0x828B74) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_004163FA: ;
    if (CMP_NE(MEM32(0x84BE48), ebp)) goto loc_00416421; /* jne: not equal / not zero */

loc_00416402: ;
    xmm2 = MEMF(0x75861C); /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x828B80); /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    goto loc_00416442;

loc_00416421: ;
    xmm0 = MEMF(0x828B5C); /* movss */
    xmm0 = xmm0 * MEMF(0x75861C); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648E94); /* mulss */
    MEM32(0x84BE48) = ebp;

loc_00416442: ;
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(0x828B40) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00416464; /* jbe: below or equal (unsigned <=) */

loc_00416458: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / xmm0; /* divss */

loc_00416464: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(0x828B74) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00416475: ;
    edx = MEM32(0x828B78);
    ecx = MEM32(0x828B7C);
    edx = edx + eax;
    ecx = ecx + ebp + _cf; /* adc */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(0x828B78) = edx;
    MEM32(0x828B7C) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_004164A3; /* jge: greater or equal (signed >=) */

loc_0041649D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004164A3: ;
    /* FPU: fsubr dword ptr [esp + 0xc] */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(0x828B70) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_push(MEMF(0x828B70)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_004164F8; /* jb: below (unsigned <) */

loc_004164C5: ;
    ecx = MEM32(0x828B78);
    eax = MEM32(0x828B7C);
    xmm0 = MEMF(0x828B70); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    ecx = ecx + 1;
    eax = eax + ebp + _cf; /* adc */
    MEM32(0x828B78) = ecx;
    MEM32(0x828B7C) = eax;
    MEMF(0x828B70) = xmm0; /* movss */

loc_004164F8: ;
    eax = MEM32(0x828B7C);
    ecx = MEM32(0x828B78);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00416510: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x828B58) = eax;
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
 * sub_00416770
 * Original: 0x00416770 - 0x004167A8 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416770(void)
{
    int _cf = 0; /* carry flag */

loc_00416770: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0041677D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0041678B: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_004167A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004167B0
 * Original: 0x004167B0 - 0x00416800 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004167B0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004167B0: ;
    PUSH32(esp, ecx);
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004167BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_004167CC: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_004167E8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_004167F8; /* jge: greater or equal (signed >=) */

loc_004167F2: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004167F8: ;
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
 * sub_00416800
 * Original: 0x00416800 - 0x0041686B (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416800(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416800: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00416824; /* je: equal / zero */

loc_00416809: ;
    (void)0; /* cmp MEM32(esi + 0x14), edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(esi + 0x14), edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646608);
    PUSH32(esp, 0x1A8);
    PUSH32(esp, 0x646630);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416821: ;
    esp = esp + 0x10;

loc_00416824: ;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00416831; /* je: equal / zero */

loc_0041682B: ;
    edx = MEM32(esi + 0x1C);
    MEM32(eax + 0x1C) = edx;

loc_00416831: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0041683E; /* je: equal / zero */

loc_00416838: ;
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = ecx;

loc_0041683E: ;
    if (CMP_NE(MEM32(edi), esi)) goto loc_00416847; /* jne: not equal / not zero */

loc_00416842: ;
    edx = MEM32(esi + 0x18);
    MEM32(edi) = edx;

loc_00416847: ;
    if (CMP_NE(MEM32(edi + 4), esi)) goto loc_00416852; /* jne: not equal / not zero */

loc_0041684C: ;
    eax = MEM32(esi + 0x1C);
    MEM32(edi + 4) = eax;

loc_00416852: ;
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x1C) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) - 1;
    MEM32(esi + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00416870
 * Original: 0x00416870 - 0x004168C7 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416870: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi) = 0x5F69E8;
    if (TEST_Z(edi, edi)) goto loc_004168B8; /* je: equal / zero */

loc_00416881: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004168A7; /* je: equal / zero */

loc_0041688A: ;
    ecx = MEM32(0x84BEDC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E64);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x646E80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004168A4: ;
    esp = esp + 0x10;

loc_004168A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BEDC), _icall_esp); /* indirect call */
    }

loc_004168AE: ;
    esp = esp + 4;
    MEM32(esi + 0x20) = 0;

loc_004168B8: ;
    edi = MEM32(esi + 0x14);
    if (TEST_Z(edi, edi)) goto loc_004168C4; /* je: equal / zero */

loc_004168BF: ;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_004168C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004168D0
 * Original: 0x004168D0 - 0x00416977 (167 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004168D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004168D0: ;
    eax = MEM32(esi + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_00416937; /* jne: not equal / not zero */

loc_004168D7: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004168FD; /* je: equal / zero */

loc_004168E0: ;
    ecx = MEM32(0x84BED8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E90);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x646E80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004168FA: ;
    esp = esp + 0x10;

loc_004168FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BED8), _icall_esp); /* indirect call */
    }

loc_00416908: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00416932; /* je: equal / zero */

loc_0041690F: ;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0xDC) = ecx;
    MEM32(eax + 0xE0) = ecx;
    goto loc_00416934;

loc_00416932: ;
    eax = 0; /* xor self */

loc_00416934: ;
    MEM32(esi + 0x20) = eax;

loc_00416937: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041695D; /* je: equal / zero */

loc_00416940: ;
    edx = MEM32(esi + 0x20);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0xD0);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041695A: ;
    esp = esp + 0x10;

loc_0041695D: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00416974; /* je: equal / zero */

loc_00416964: ;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esp + 8);
    MEM32(edx + 8) = eax;

loc_00416974: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00416980
 * Original: 0x00416980 - 0x004169D2 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416980(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416980: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004169A9; /* je: equal / zero */

loc_0041698C: ;
    ecx = MEM32(esi + 0x20);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0xEB);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004169A6: ;
    esp = esp + 0x10;

loc_004169A9: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax);
    edx = edx + edi;
    MEM32(eax + 4) = edx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 8);
    if (TEST_S(ecx, ecx)) goto loc_004169D0; /* jl: less (signed <) */

loc_004169BD: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    if (CMP_GE(eax & eax, 0)) goto loc_004169D0; /* jge: greater or equal (signed >=) */

loc_004169C6: ;
    esi = ecx;
    edx = MEM32(esi + 8);
    edx = edx + edi;
    MEM32(esi + 0xC) = edx;

loc_004169D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004169E0
 * Original: 0x004169E0 - 0x00416A80 (160 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004169E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004169E0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00416A09; /* je: equal / zero */

loc_004169EC: ;
    ecx = MEM32(esi + 0x20);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416A06: ;
    esp = esp + 0x10;

loc_00416A09: ;
    eax = MEM32(esi + 0x20);
    MEM32(eax + 0xE0) = MEM32(eax + 0xE0) + 1;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0xE0);
    ecx = 0x32;
    if (CMP_L(eax, ecx)) goto loc_00416A30; /* jl: less (signed <) */

loc_00416A24: ;
    eax = edx;
    MEM32(eax + 0xE0) = 0;

loc_00416A30: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + 0xE0);
    if (CMP_EQ(edx, MEM32(eax + 0xDC))) goto loc_00416A4B; /* je: equal / zero */

loc_00416A41: ;
    edx = MEM32(eax + 0xDC);
    if (CMP_GE(edx & edx, 0)) goto loc_00416A6B; /* jge: greater or equal (signed >=) */

loc_00416A4B: ;
    eax = MEM32(esi + 0x20);
    MEM32(eax + 0xDC) = MEM32(eax + 0xDC) + 1;
    edx = MEM32(esi + 0x20);
    if (CMP_L(MEM32(edx + 0xDC), ecx)) goto loc_00416A6B; /* jl: less (signed <) */

loc_00416A5F: ;
    eax = edx;
    MEM32(eax + 0xDC) = 0;

loc_00416A6B: ;
    esi = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0xE0);
    edx = MEM32(esp + 8);
    MEM32(esi + ecx * 4 + 0x14) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00416A80
 * Original: 0x00416A80 - 0x00416B09 (137 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416A80: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00416AD5; /* je: equal / zero */

loc_00416A8C: ;
    ecx = MEM32(esi + 0x20);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0x111);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416AA6: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00416AD5; /* je: equal / zero */

loc_00416AB2: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + 0xDC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ecx & ecx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465A0);
    PUSH32(esp, 0x112);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416AD2: ;
    esp = esp + 0x10;

loc_00416AD5: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 0xDC);
    if (CMP_EQ(MEM32(ecx + eax * 4 + 0x14), edi)) goto loc_00416B02; /* je: equal / zero */

loc_00416AE4: ;
    edx = MEM32(ecx + 0xE0);
    /* nop */

loc_00416AF0: ;
    if (CMP_EQ(eax, edx)) { sub_00416B09(); return; } /* je: equal / zero */

loc_00416AF4: ;
    eax++;
    if (CMP_L(eax, 0x32)) goto loc_00416AFC; /* jl: less (signed <) */

loc_00416AFA: ;
    eax = 0; /* xor self */

loc_00416AFC: ;
    if (CMP_NE(MEM32(ecx + eax * 4 + 0x14), edi)) goto loc_00416AF0; /* jne: not equal / not zero */

loc_00416B02: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00416B10
 * Original: 0x00416B10 - 0x00416B48 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416B10: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_Z(eax, eax)) goto loc_00416B38; /* je: equal / zero */

loc_00416B1C: ;
    (void)0; /* cmp MEM32(ebx + 8), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ebx + 8), 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64657C);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416B35: ;
    esp = esp + 0x10;

loc_00416B38: ;
    eax = MEM32(esp + 8);
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0); sub_00419EC0(); /* call 0x00419EC0 */

loc_00416B44: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00416B50
 * Original: 0x00416B50 - 0x00416CB4 (356 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00416B50: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00416B9E; /* je: equal / zero */

loc_00416B5C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(esi & esi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646560);
    PUSH32(esp, 0x13A);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416B73: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00416B9E; /* je: equal / zero */

loc_00416B7F: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_G(edi & edi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64653C);
    PUSH32(esp, 0x13B);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416B96: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00416B9E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84BE64) = esi;
    MEM32(0x84BE68) = edi;
    if (TEST_Z(eax, eax)) goto loc_00416BF4; /* je: equal / zero */

loc_00416BAE: ;
    ecx = MEM32(0x84BE5C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646514);
    PUSH32(esp, 0x140);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416BCB: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00416BF4; /* je: equal / zero */

loc_00416BD7: ;
    edx = MEM32(0x84BED8);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E90);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x646E80);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416BF1: ;
    esp = esp + 0x10;

loc_00416BF4: ;
    edi = esi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BED8), _icall_esp); /* indirect call */
    }

loc_00416C02: ;
    MEM32(0x84BE5C) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00416C59; /* je: equal / zero */

loc_00416C13: ;
    ecx = MEM32(0x84BE60);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6464EC);
    PUSH32(esp, 0x142);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416C30: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00416C59; /* je: equal / zero */

loc_00416C3C: ;
    edx = MEM32(0x84BED8);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E90);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x646E80);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416C56: ;
    esp = esp + 0x10;

loc_00416C59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BED8), _icall_esp); /* indirect call */
    }

loc_00416C60: ;
    esp = esp + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x84BE60) = eax;
    if (CMP_LE(esi & esi, 0)) goto loc_00416C93; /* jle: less or equal (signed <=) */

loc_00416C6C: ;
    ecx = MEM32(0x84BE5C);
    ecx = ecx - eax;
    edx = esi;
    goto loc_00416C80;

    /* nop */
    /* nop */

loc_00416C80: ;
    MEM32(ecx + eax) = 0;
    MEM32(eax) = 0;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_00416C80; /* jne: not equal / not zero */

loc_00416C93: ;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x200;
    edi = 0x828B88;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x84BE6C) = 0;
    eax = esi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0041B230(); return; /* tail jmp 0x0041B230 */

}

/**
 * sub_00416CC0
 * Original: 0x00416CC0 - 0x00416DC7 (263 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416CC0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00416CC0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00416D8C; /* je: equal / zero */

loc_00416CCD: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6464D0);
    PUSH32(esp, 0x171);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416CE4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00416D8C; /* je: equal / zero */

loc_00416CF4: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6464B0);
    PUSH32(esp, 0x172);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416D0F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00416D8C; /* je: equal / zero */

loc_00416D1B: ;
    ecx = MEM32(0x84BE68);
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646484);
    PUSH32(esp, 0x173);
    PUSH32(esp, 0x6465D4);
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(edx, LO8(edx) + 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416D3D: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00416D8C; /* je: equal / zero */

loc_00416D49: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64645C);
    PUSH32(esp, 0x174);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416D60: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00416D8C; /* je: equal / zero */

loc_00416D6C: ;
    (void)0; /* cmp edi, 0x20 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, 0x20)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646434);
    PUSH32(esp, 0x175);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416D84: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00416D8C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x84BE5C);
    edx = MEM32(esp + 4);
    MEM32(ecx + esi * 4) = edx;
    if (TEST_Z(eax, eax)) { sub_00416DC7(); return; } /* je: equal / zero */

loc_00416D9D: ;
    ecx = MEM32(0x84BE6C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64640C);
    PUSH32(esp, 0x179);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416DBA: ;
    edx = MEM32(0x84BE60);
    esp = esp + 0x10;
    MEM32(edx + esi * 4) = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_00416DD0
 * Original: 0x00416DD0 - 0x00416E48 (120 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416DD0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00416E1D; /* je: equal / zero */

loc_00416DDC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6464D0);
    PUSH32(esp, 0x18F);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416DF3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00416E1D; /* je: equal / zero */

loc_00416DFF: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6464B0);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416E1A: ;
    esp = esp + 0x10;

loc_00416E1D: ;
    eax = 0x829384;

loc_00416E22: ;
    ecx = MEM32(eax + -4);
    MEM32(eax) = ecx;
    eax = eax + 0xFFFFFFFCu;
    if (CMP_G(eax, 0x828B88)) goto loc_00416E22; /* jg: greater (signed >) */

loc_00416E31: ;
    edx = MEM32(0x84BE5C);
    MEM32(0x828B88) = esi;
    esi = MEM32(edx + esi * 4);
    if (TEST_Z(esi, esi)) { sub_00416E48(); return; } /* je: equal / zero */

loc_00416E44: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_00416E46: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00416E50
 * Original: 0x00416E50 - 0x00416FE1 (401 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00416E50: ;
    edx = MEM32(0x84BE64);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x84BE6C) = 1;
    esi = edx * 4;
    if (CMP_LE(edx & edx, 0)) goto loc_00416E9D; /* jle: less or equal (signed <=) */

loc_00416E73: ;
    edi = MEM32(0x84BE60);
    /* nop */

loc_00416E80: ;
    ecx = MEM32(edi + eax * 4);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00416E98; /* jle: less or equal (signed <=) */

loc_00416E87: ;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx + 7;
    ebx = ebx >> 3;
    esi = esi + ebx + 0xC;

loc_00416E98: ;
    eax++;
    if (CMP_L(eax, edx)) goto loc_00416E80; /* jl: less (signed <) */

loc_00416E9D: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00416EC3; /* je: equal / zero */

loc_00416EA6: ;
    edi = MEM32(0x84BED8);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E90);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x646E80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416EC0: ;
    esp = esp + 0x10;

loc_00416EC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BED8), _icall_esp); /* indirect call */
    }

loc_00416ECA: ;
    edi = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(eax, eax)) goto loc_00416EF6; /* je: equal / zero */

loc_00416EDC: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463F4);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416EF3: ;
    esp = esp + 0x10;

loc_00416EF6: ;
    eax = MEM32(0x84BE64);
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edi + eax * 4;
    MEM32(esp + 0xC) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_00416FD8; /* jle: less or equal (signed <=) */

loc_00416F0C: ;
    PUSH32(esp, ebp);
    /* nop */

loc_00416F10: ;
    ecx = MEM32(0x84BE60);
    if (CMP_LE(MEM32(ecx + edx * 4), 0)) goto loc_00416FC3; /* jle: less or equal (signed <=) */

loc_00416F20: ;
    MEM32(edi + edx * 4) = esi;
    edi = esi + 8;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(edi) = 0;
    ecx = MEM32(ecx + edx * 4);
    eax = 1;
    eax = eax << LO8(ecx);
    esi = esi + 0xC;
    ebp = eax + 7;
    eax = eax >> 2;
    ebx = eax;
    eax = MEM32(0x84BE58);
    ebp = ebp >> 3;
    if (TEST_Z(eax, eax)) goto loc_00416F78; /* je: equal / zero */

loc_00416F5A: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_A(ebx & ebx, 0)) ? 1 : 0); /* seta */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463D8);
    PUSH32(esp, 0x218);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00416F71: ;
    edx = MEM32(esp + 0x20);
    esp = esp + 0x10;

loc_00416F78: ;
    edi = MEM32(edi);
    edi = edi + ebx;
    ebx = edi;
    ebx = ebx >> 3;
    eax = ebx * 8;
    edi = edi - eax;
    eax = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_00416FB6; /* jle: less or equal (signed <=) */

loc_00416F90: ;
    if (CMP_GE(eax, ebx)) goto loc_00416F9A; /* jge: greater or equal (signed >=) */

loc_00416F94: ;
    MEM8(eax + esi) = 0;
    goto loc_00416FB1;

loc_00416F9A: ;
    if (CMP_NE(eax, ebx)) goto loc_00416FAD; /* jne: not equal / not zero */

loc_00416F9C: ;
    SET_LO8(edx, LO8(edx) | 0xFF);
    ecx = edi + 1;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax + esi) = LO8(edx);
    edx = MEM32(esp + 0x10);
    goto loc_00416FB1;

loc_00416FAD: ;
    MEM8(eax + esi) = 0xFF;

loc_00416FB1: ;
    eax++;
    if (CMP_L(eax, ebp)) goto loc_00416F90; /* jl: less (signed <) */

loc_00416FB6: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(0x84BE64);
    esi = esi + ebp;
    goto loc_00416FCA;

loc_00416FC3: ;
    MEM32(edi + edx * 4) = 0;

loc_00416FCA: ;
    edx++;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(edx, eax)) goto loc_00416F10; /* jl: less (signed <) */

loc_00416FD7: ;
    POP32(esp, ebp);

loc_00416FD8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00416FF0
 * Original: 0x00416FF0 - 0x00417023 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00416FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00416FF0: ;
    if (TEST_Z(esi, esi)) goto loc_00417022; /* je: equal / zero */

loc_00416FF4: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041701A; /* je: equal / zero */

loc_00416FFD: ;
    ecx = MEM32(0x84BEDC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E64);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x646E80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417017: ;
    esp = esp + 0x10;

loc_0041701A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BEDC), _icall_esp); /* indirect call */
    }

loc_00417021: ;
    POP32(esp, ecx);

loc_00417022: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00417030
 * Original: 0x00417030 - 0x004170F6 (198 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417030: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004170B5; /* je: equal / zero */

loc_0041703C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x247);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417053: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004170B5; /* je: equal / zero */

loc_0041705F: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x248);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041707A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004170B5; /* je: equal / zero */

loc_00417086: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    edx = 1;
    edx = edx << LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646358);
    PUSH32(esp, 0x249);
    PUSH32(esp, 0x6465D4);
    (void)0; /* cmp edi, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_B(edi, edx)) ? 1 : 0); /* setb */
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004170AD: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_004170B5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 8);
    esi = MEM32(ecx + esi * 4);
    if (TEST_Z(eax, eax)) goto loc_004170DA; /* je: equal / zero */

loc_004170C0: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64633C);
    PUSH32(esp, 0x24D);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004170D7: ;
    esp = esp + 0x10;

loc_004170DA: ;
    eax = edi;
    eax = eax >> 3;
    edx = eax * 8;
    ecx = edi;
    ecx = ecx - edx;
    SET_LO8(edx, 1);
    esi = esi + 0xC;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax + esi) = MEM8(eax + esi) | LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00417100
 * Original: 0x00417100 - 0x004171D1 (209 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417100(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00417100: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00417185; /* je: equal / zero */

loc_0041710C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x25E);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417123: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417185; /* je: equal / zero */

loc_0041712F: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x25F);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041714A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417185; /* je: equal / zero */

loc_00417156: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    edx = 1;
    edx = edx << LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646358);
    PUSH32(esp, 0x260);
    PUSH32(esp, 0x6465D4);
    (void)0; /* cmp edi, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_B(edi, edx)) ? 1 : 0); /* setb */
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041717D: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00417185: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 8);
    esi = MEM32(ecx + esi * 4);
    if (TEST_Z(eax, eax)) goto loc_004171AA; /* je: equal / zero */

loc_00417190: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64633C);
    PUSH32(esp, 0x264);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004171A7: ;
    esp = esp + 0x10;

loc_004171AA: ;
    eax = edi;
    eax = eax >> 3;
    edx = eax * 8;
    SET_LO8(eax, MEM8(eax + esi + 0xC));
    ecx = edi;
    ecx = ecx - edx;
    edx = 1;
    edx = edx << LO8(ecx);
    POP32(esp, esi);
    SET_LO8(edx, LO8(edx) & LO8(eax));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = (uint32_t)(-(int32_t)edx);
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_004171E0
 * Original: 0x004171E0 - 0x0041725B (123 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004171E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004171E0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00417232; /* je: equal / zero */

loc_004171EC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x275);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417203: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417232; /* je: equal / zero */

loc_0041720F: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x276);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041722A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00417232: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 8);
    esi = MEM32(ecx + esi * 4);
    if (TEST_Z(eax, eax)) goto loc_00417257; /* je: equal / zero */

loc_0041723D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64633C);
    PUSH32(esp, 0x27A);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417254: ;
    esp = esp + 0x10;

loc_00417257: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00417260
 * Original: 0x00417260 - 0x004172F8 (152 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417260: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004172AF; /* je: equal / zero */

loc_00417269: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x289);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417280: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004172AF; /* je: equal / zero */

loc_0041728C: ;
    (void)0; /* cmp edi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x28A);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004172A7: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_004172AF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + edi * 4);
    if (TEST_Z(eax, eax)) goto loc_004172D5; /* je: equal / zero */

loc_004172BB: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64633C);
    PUSH32(esp, 0x28E);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004172D2: ;
    esp = esp + 0x10;

loc_004172D5: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(esi);
    eax = 1;
    eax = eax << LO8(ecx);
    edx++;
    ecx = edx;
    MEM32(esi) = edx;
    if (CMP_B(ecx, eax)) goto loc_004172F6; /* jb: below (unsigned <) */

loc_004172F0: ;
    MEM32(esi) = 0;

loc_004172F6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00417300
 * Original: 0x00417300 - 0x0041735D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417300(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417300: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) { sub_0041735D(); return; } /* je: equal / zero */

loc_00417309: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x2A0);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417320: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417353; /* je: equal / zero */

loc_0041732C: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x2A1);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417347: ;
    eax = MEM32(0x84BE60);
    eax = MEM32(eax + esi * 4);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00417353: ;
    ecx = MEM32(0x84BE60);
    eax = MEM32(ecx + esi * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00417370
 * Original: 0x00417370 - 0x004173EC (124 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417370(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417370: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004173C2; /* je: equal / zero */

loc_0041737C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x2AD);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417393: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004173C2; /* je: equal / zero */

loc_0041739F: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x2AE);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004173BA: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_004173C2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 8);
    esi = MEM32(ecx + esi * 4);
    if (TEST_Z(eax, eax)) goto loc_004173E7; /* je: equal / zero */

loc_004173CD: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64633C);
    PUSH32(esp, 0x2B2);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004173E4: ;
    esp = esp + 0x10;

loc_004173E7: ;
    eax = MEM32(esi + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004173F0
 * Original: 0x004173F0 - 0x00417435 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004173F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004173F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00417434; /* je: equal / zero */

loc_004173F8: ;
    PUSH32(esp, ebx);
    /* nop */

loc_00417400: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00417429; /* je: equal / zero */

loc_00417404: ;
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    eax = 0x1F;
    ecx = edi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00417414: ;
    PUSH32(esp, 1);
    eax = 0x1F;
    ecx = esi;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_00417422: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    esp = esp + 8;

loc_00417429: ;
    SET_LO8(eax, LO8(eax) >> 1);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 8) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00417400; /* jne: not equal / not zero */

loc_00417433: ;
    POP32(esp, ebx);

loc_00417434: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00417440
 * Original: 0x00417440 - 0x00417773 (819 bytes, 279 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00417440: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004174CF; /* je: equal / zero */

loc_00417452: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x2D8);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417469: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004174CF; /* je: equal / zero */

loc_00417475: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x2D9);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417490: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004174CF; /* je: equal / zero */

loc_0041749C: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    edi = MEM32(esp + 0x24);
    edx = 1;
    edx = edx << LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6462F8);
    PUSH32(esp, 0x2DA);
    PUSH32(esp, 0x6465D4);
    (void)0; /* cmp edi, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_B(edi, edx)) ? 1 : 0); /* setb */
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004174C7: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_004174CF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x20);
    ebp = MEM32(ecx + esi * 4);
    if (TEST_Z(eax, eax)) goto loc_004174F9; /* je: equal / zero */

loc_004174DA: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ebp, ebp)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64633C);
    PUSH32(esp, 0x2DE);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004174F1: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_004174F9: ;
    ecx = ebp;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    edi = 1;
    edi = edi << LO8(ecx);
    ebp = ebp + 0xC;
    ebx = edi;
    ebx = ebx >> 2;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(eax, eax)) goto loc_0041756D; /* je: equal / zero */

loc_00417529: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_A(ebx & ebx, 0)) ? 1 : 0); /* seta */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463D8);
    PUSH32(esp, 0x2EB);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417540: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041756D; /* je: equal / zero */

loc_0041754C: ;
    (void)0; /* cmp MEM32(esp + 0x20), edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_B(MEM32(esp + 0x20), edi)) ? 1 : 0); /* setb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6462D0);
    PUSH32(esp, 0x2ED);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417565: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041756D: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    ebx = ebx + edx;
    if (CMP_AE(ebx, edi)) goto loc_004175A7; /* jae: above or equal (unsigned >=) */

loc_0041757B: ;
    if (CMP_BE(ecx, edx)) goto loc_0041758A; /* jbe: below or equal (unsigned <=) */

loc_0041757F: ;
    if (CMP_A(ecx, ebx)) goto loc_0041758A; /* ja: above (unsigned >) */

loc_00417583: ;
    ecx = 1;
    goto loc_0041758C;

loc_0041758A: ;
    ecx = 0; /* xor self */

loc_0041758C: ;
    if (TEST_Z(eax, eax)) goto loc_004175DC; /* je: equal / zero */

loc_00417590: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, 0x646290);
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x2F1);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    goto loc_004175D7;

loc_004175A7: ;
    ebx = ebx - edi;
    if (CMP_BE(ecx, edx)) goto loc_004175B1; /* jbe: below or equal (unsigned <=) */

loc_004175AD: ;
    if (CMP_B(ecx, edi)) goto loc_004175B5; /* jb: below (unsigned <) */

loc_004175B1: ;
    if (CMP_A(ecx, ebx)) goto loc_004175BC; /* ja: above (unsigned >) */

loc_004175B5: ;
    ecx = 1;
    goto loc_004175BE;

loc_004175BC: ;
    ecx = 0; /* xor self */

loc_004175BE: ;
    if (TEST_Z(eax, eax)) goto loc_004175DC; /* je: equal / zero */

loc_004175C2: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, 0x646220);
    SET_LO8(edx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x2F6);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);

loc_004175D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004175D9: ;
    esp = esp + 0x10;

loc_004175DC: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x24);
    ecx = ecx + eax;
    if (CMP_B(ecx, edi)) goto loc_004175EC; /* jb: below (unsigned <) */

loc_004175EA: ;
    ecx = ecx - edi;

loc_004175EC: ;
    eax = ebx;
    eax = eax >> 3;
    edx = eax * 8;
    ebx = ebx - edx;
    edi = ecx;
    edi = edi >> 3;
    edx = ebx;
    ebx = edi * 8;
    ecx = ecx - ebx;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x10) = ecx;
    ebx = eax;
    if (CMP_NE(eax, edi)) goto loc_00417624; /* jne: not equal / not zero */

loc_00417620: ;
    if (CMP_GE(ecx, edx)) goto loc_0041765B; /* jge: greater or equal (signed >=) */

loc_00417624: ;
    eax = ZX8(MEM8(eax + ebp));
    edi = MEM32(0x84BEC8);
    ecx = edx + 1;
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ebx, LO8(ebx) - 1);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004173F0(); /* call 0x004173F0 */

loc_00417645: ;
    eax = MEM32(esp + 0x24);
    SET_LO8(ecx, MEM8(eax + ebp));
    edi = MEM32(esp + 0x28);
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    MEM8(eax + ebp) = LO8(ecx);
    ebx = eax + 1;

loc_0041765B: ;
    if (CMP_LE(ebx, edi)) goto loc_004176AF; /* jle: less or equal (signed <=) */

loc_0041765F: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx + 7;
    edx = edx >> 3;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(ebx, edx)) goto loc_004176AB; /* je: equal / zero */

loc_0041767D: ;
    /* nop */

loc_00417680: ;
    edi = MEM32(0x84BEC8);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + ebp));
    SET_LO8(edx, ~LO8(edx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004173F0(); /* call 0x004173F0 */

loc_00417693: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 4;
    MEM8(ebx + ebp) = 0;
    ebx++;
    if (CMP_NE(ebx, eax)) goto loc_00417680; /* jne: not equal / not zero */

loc_004176A3: ;
    edi = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);

loc_004176AB: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp ebx, edi - flags set for next jcc */

loc_004176AF: ;
    if (CMP_EQ(ebx, edi)) goto loc_004176DA; /* je: equal / zero */

loc_004176B1: ;
    edi = MEM32(0x84BEC8);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + ebp));
    SET_LO8(eax, ~LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004173F0(); /* call 0x004173F0 */

loc_004176C4: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 4;
    MEM8(ebx + ebp) = 0;
    ebx++;
    if (CMP_NE(ebx, eax)) goto loc_004176B1; /* jne: not equal / not zero */

loc_004176D4: ;
    edi = eax;
    eax = MEM32(esp + 0x20);

loc_004176DA: ;
    if (CMP_NE(eax, edi)) goto loc_004176E8; /* jne: not equal / not zero */

loc_004176DE: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_GE(ecx, MEM32(esp + 0x14))) goto loc_00417720; /* jge: greater or equal (signed >=) */

loc_004176E8: ;
    ecx = MEM32(esp + 0x10);
    ecx++;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + ebp));
    edi = MEM32(0x84BEC8);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004173F0(); /* call 0x004173F0 */

loc_0041770B: ;
    eax = MEM32(esp + 0x28);
    SET_LO8(ecx, MEM8(eax + ebp));
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    MEM8(eax + ebp) = LO8(ecx);
    edi = eax;
    eax = MEM32(esp + 0x20);

loc_00417720: ;
    if (CMP_NE(eax, edi)) goto loc_0041776B; /* jne: not equal / not zero */

loc_00417724: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    if (CMP_LE(edx, eax)) goto loc_0041776B; /* jle: less or equal (signed <=) */

loc_00417730: ;
    ecx = eax + 1;
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    ecx = edx + 1;
    SET_LO8(edx, LO8(edx) | 0xFF);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + ebp));
    edi = MEM32(0x84BEC8);
    SET_LO8(ebx, LO8(ebx) - 1);
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004173F0(); /* call 0x004173F0 */

loc_0041775C: ;
    eax = MEM32(esp + 0x28);
    SET_LO8(ecx, MEM8(eax + ebp));
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    MEM8(eax + ebp) = LO8(ecx);

loc_0041776B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00417780
 * Original: 0x00417780 - 0x004177FC (124 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417780(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417780: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004177D2; /* je: equal / zero */

loc_0041778C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x349);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004177A3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004177D2; /* je: equal / zero */

loc_004177AF: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x34A);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004177CA: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_004177D2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 8);
    esi = MEM32(ecx + esi * 4);
    if (TEST_Z(eax, eax)) goto loc_004177F7; /* je: equal / zero */

loc_004177DD: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64633C);
    PUSH32(esp, 0x34E);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004177F4: ;
    esp = esp + 0x10;

loc_004177F7: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00417800
 * Original: 0x00417800 - 0x004178AF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417800(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417800: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00417885; /* je: equal / zero */

loc_0041780C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417823: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417885; /* je: equal / zero */

loc_0041782F: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x35D);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041784A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417885; /* je: equal / zero */

loc_00417856: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    edx = 1;
    edx = edx << LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6461D8);
    PUSH32(esp, 0x35E);
    PUSH32(esp, 0x6465D4);
    (void)0; /* cmp edi, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_B(edi, edx)) ? 1 : 0); /* setb */
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041787D: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00417885: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 8);
    esi = MEM32(ecx + esi * 4);
    if (TEST_Z(eax, eax)) goto loc_004178AA; /* je: equal / zero */

loc_00417890: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64633C);
    PUSH32(esp, 0x362);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004178A7: ;
    esp = esp + 0x10;

loc_004178AA: ;
    MEM32(esi + 4) = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004178B0
 * Original: 0x004178B0 - 0x0041790B (91 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004178B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004178B0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004178FA; /* je: equal / zero */

loc_004178B9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x370);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004178D0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004178FA; /* je: equal / zero */

loc_004178DC: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x371);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004178F7: ;
    esp = esp + 0x10;

loc_004178FA: ;
    ecx = MEM32(0x84BE60);
    edx = MEM32(ecx + esi * 4);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(edx & edx, 0)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

}

/**
 * sub_00417910
 * Original: 0x00417910 - 0x0041796B (91 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417910: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041795A; /* je: equal / zero */

loc_00417919: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x37D);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417930: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041795A; /* je: equal / zero */

loc_0041793C: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x37E);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417957: ;
    esp = esp + 0x10;

loc_0041795A: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    eax = 1;
    eax = eax << LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00417970
 * Original: 0x00417970 - 0x00417A69 (249 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00417970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004179F7; /* je: equal / zero */

loc_00417983: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x38B);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041799A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004179F7; /* je: equal / zero */

loc_004179A6: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x38C);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004179C1: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004179F7; /* je: equal / zero */

loc_004179CD: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    edx = 1;
    edx = edx << LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646190);
    PUSH32(esp, 0x38D);
    PUSH32(esp, 0x6465D4);
    (void)0; /* cmp ebp, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_B(ebp, edx)) ? 1 : 0); /* setb */
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004179F4: ;
    esp = esp + 0x10;

loc_004179F7: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = esi;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_004171E0(); /* call 0x004171E0 */

loc_00417A05: ;
    esp = esp + 4;
    edi = eax;
    PUSH32(esp, 0); sub_00417910(); /* call 0x00417910 */

loc_00417A0F: ;
    ecx = eax;
    ecx = ecx >> 1;
    esi = edi;
    esi = esi - ecx;
    if (CMP_B(esi, eax)) goto loc_00417A1D; /* jb: below (unsigned <) */

loc_00417A1B: ;
    esi = esi + eax;

loc_00417A1D: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00417A41; /* je: equal / zero */

loc_00417A27: ;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    SET_LO8(edx, (CMP_B(esi, eax)) ? 1 : 0); /* setb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64616C);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00417A3E: ;
    esp = esp + 0x10;

loc_00417A41: ;
    if (CMP_BE(edi, esi)) goto loc_00417A57; /* jbe: below or equal (unsigned <=) */

loc_00417A45: ;
    if (CMP_B(ebp, esi)) { sub_00417A69(); return; } /* jb: below (unsigned <) */

loc_00417A49: ;
    if (CMP_AE(ebp, edi)) { sub_00417A69(); return; } /* jae: above or equal (unsigned >=) */

loc_00417A4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00417A57: ;
    if (CMP_AE(ebp, esi)) goto loc_00417A5F; /* jae: above or equal (unsigned >=) */

loc_00417A5B: ;
    if (CMP_AE(ebp, edi)) { sub_00417A69(); return; } /* jae: above or equal (unsigned >=) */

loc_00417A5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00417A70
 * Original: 0x00417A70 - 0x00417B68 (248 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00417A70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00417AF7; /* je: equal / zero */

loc_00417A83: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x3B4);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417A9A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417AF7; /* je: equal / zero */

loc_00417AA6: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x3B5);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417AC1: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417AF7; /* je: equal / zero */

loc_00417ACD: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    edx = 1;
    edx = edx << LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646190);
    PUSH32(esp, 0x3B6);
    PUSH32(esp, 0x6465D4);
    (void)0; /* cmp ebp, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_B(ebp, edx)) ? 1 : 0); /* setb */
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417AF4: ;
    esp = esp + 0x10;

loc_00417AF7: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = esi;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00417780(); /* call 0x00417780 */

loc_00417B05: ;
    esp = esp + 4;
    edi = eax;
    PUSH32(esp, 0); sub_00417910(); /* call 0x00417910 */

loc_00417B0F: ;
    esi = eax;
    esi = esi >> 2;
    esi = esi + edi;
    if (CMP_B(esi, eax)) goto loc_00417B1C; /* jb: below (unsigned <) */

loc_00417B1A: ;
    esi = esi - eax;

loc_00417B1C: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00417B40; /* je: equal / zero */

loc_00417B26: ;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    SET_LO8(edx, (CMP_B(esi, eax)) ? 1 : 0); /* setb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646150);
    PUSH32(esp, 0x3C4);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00417B3D: ;
    esp = esp + 0x10;

loc_00417B40: ;
    if (CMP_BE(esi, edi)) goto loc_00417B56; /* jbe: below or equal (unsigned <=) */

loc_00417B44: ;
    if (CMP_B(ebp, edi)) { sub_00417B68(); return; } /* jb: below (unsigned <) */

loc_00417B48: ;
    if (CMP_A(ebp, esi)) { sub_00417B68(); return; } /* ja: above (unsigned >) */

loc_00417B4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00417B56: ;
    if (CMP_AE(ebp, edi)) goto loc_00417B5E; /* jae: above or equal (unsigned >=) */

loc_00417B5A: ;
    if (CMP_A(ebp, esi)) { sub_00417B68(); return; } /* ja: above (unsigned >) */

loc_00417B5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00417B70
 * Original: 0x00417B70 - 0x00417C2C (188 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00417B70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00417BF6; /* je: equal / zero */

loc_00417B82: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x3DC);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417B99: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417BF6; /* je: equal / zero */

loc_00417BA5: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x3DD);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417BC0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417BF6; /* je: equal / zero */

loc_00417BCC: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + esi * 4);
    edx = 1;
    edx = edx << LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646190);
    PUSH32(esp, 0x3DE);
    PUSH32(esp, 0x6465D4);
    (void)0; /* cmp edi, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_B(edi, edx)) ? 1 : 0); /* setb */
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417BF3: ;
    esp = esp + 0x10;

loc_00417BF6: ;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_004171E0(); /* call 0x004171E0 */

loc_00417BFE: ;
    ebx = eax;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_00417780(); /* call 0x00417780 */

loc_00417C08: ;
    esp = esp + 8;
    if (CMP_BE(ebx, eax)) goto loc_00417C15; /* jbe: below or equal (unsigned <=) */

loc_00417C0F: ;
    if (CMP_BE(edi, eax)) goto loc_00417C28; /* jbe: below or equal (unsigned <=) */

loc_00417C13: ;
    goto loc_00417C19;

loc_00417C15: ;
    if (CMP_A(edi, eax)) goto loc_00417C1D; /* ja: above (unsigned >) */

loc_00417C19: ;
    if (CMP_AE(edi, ebx)) goto loc_00417C28; /* jae: above or equal (unsigned >=) */

loc_00417C1D: ;
    eax = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00417800(); /* call 0x00417800 */

loc_00417C25: ;
    esp = esp + 4;

loc_00417C28: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00417C30
 * Original: 0x00417C30 - 0x00417DF8 (456 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00417C30: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00417CB9; /* je: equal / zero */

loc_00417C41: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ebp & ebp, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x3FB);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417C58: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417CB9; /* je: equal / zero */

loc_00417C64: ;
    (void)0; /* cmp ebp, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(ebp, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x3FC);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417C7F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00417CB9; /* je: equal / zero */

loc_00417C8B: ;
    ecx = MEM32(0x84BE60);
    ecx = MEM32(ecx + ebp * 4);
    esi = MEM32(esp + 0x1C);
    edx = 1;
    edx = edx << LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646190);
    PUSH32(esp, 0x3FD);
    PUSH32(esp, 0x6465D4);
    (void)0; /* cmp esi, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_B(esi, edx)) ? 1 : 0); /* setb */
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417CB6: ;
    esp = esp + 0x10;

loc_00417CB9: ;
    ebx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    eax = ebp;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00417100(); /* call 0x00417100 */

loc_00417CCB: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_00417DF8(); return; } /* jne: not equal / not zero */

loc_00417CD6: ;
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_00417370(); /* call 0x00417370 */

loc_00417CDE: ;
    edi = eax;
    esp = esp + 4;
    esi = ebp;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_00417910(); /* call 0x00417910 */

loc_00417CEE: ;
    esi = eax;
    ebx = esi;
    ebx = ebx >> 2;
    ebx = ebx + edi;
    if (CMP_B(ebx, esi)) goto loc_00417CFD; /* jb: below (unsigned <) */

loc_00417CFB: ;
    ebx = ebx - esi;

loc_00417CFD: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00417D25; /* je: equal / zero */

loc_00417D06: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_B(ebx, esi)) ? 1 : 0); /* setb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646150);
    PUSH32(esp, 0x40C);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417D1D: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00417D25: ;
    edx = esi;
    edx = edx >> 1;
    edi = edi - edx;
    if (CMP_B(edi, esi)) goto loc_00417D31; /* jb: below (unsigned <) */

loc_00417D2F: ;
    edi = edi + esi;

loc_00417D31: ;
    if (TEST_Z(eax, eax)) goto loc_00417D4F; /* je: equal / zero */

loc_00417D35: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_B(edi, esi)) ? 1 : 0); /* setb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64616C);
    PUSH32(esp, 0x412);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417D4C: ;
    esp = esp + 0x10;

loc_00417D4F: ;
    if (CMP_BE(ebx, edi)) goto loc_00417D8B; /* jbe: below or equal (unsigned <=) */

loc_00417D53: ;
    esi = MEM32(esp + 0x1C);
    if (CMP_BE(esi, edi)) goto loc_00417D5F; /* jbe: below or equal (unsigned <=) */

loc_00417D5B: ;
    if (CMP_BE(esi, ebx)) goto loc_00417D9B; /* jbe: below or equal (unsigned <=) */

loc_00417D5F: ;
    ecx = MEM32(0x84BEC8);
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    eax = 0x21;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00417D73: ;
    PUSH32(esp, 1);
    eax = 0x21;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_00417D81: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00417D8B: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_A(eax, edi)) goto loc_00417D97; /* ja: above (unsigned >) */

loc_00417D93: ;
    if (CMP_A(eax, ebx)) goto loc_00417D5F; /* ja: above (unsigned >) */

loc_00417D97: ;
    esi = MEM32(esp + 0x1C);

loc_00417D9B: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edi = esi;
    eax = ebp;
    PUSH32(esp, 0); sub_00417030(); /* call 0x00417030 */

loc_00417DA9: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 4;
    if (CMP_BE(ebx, eax)) goto loc_00417DD6; /* jbe: below or equal (unsigned <=) */

loc_00417DB4: ;
    if (CMP_BE(esi, eax)) goto loc_00417DCC; /* jbe: below or equal (unsigned <=) */

loc_00417DB8: ;
    if (CMP_A(esi, ebx)) goto loc_00417DCC; /* ja: above (unsigned >) */

loc_00417DBC: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_00417440(); /* call 0x00417440 */

loc_00417DC9: ;
    esp = esp + 8;

loc_00417DCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00417DD6: ;
    if (CMP_A(esi, eax)) goto loc_00417DDE; /* ja: above (unsigned >) */

loc_00417DDA: ;
    if (CMP_A(esi, ebx)) goto loc_00417DCC; /* ja: above (unsigned >) */

loc_00417DDE: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = ebp;
    PUSH32(esp, 0); sub_00417440(); /* call 0x00417440 */

loc_00417DEB: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00417E30
 * Original: 0x00417E30 - 0x00417E93 (99 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417E30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00417E30: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00417E5B; /* je: equal / zero */

loc_00417E39: ;
    ecx = MEM32(esi + 0x14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E18);
    PUSH32(esp, 0x157);
    PUSH32(esp, 0x646630);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417E53: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00417E5B: ;
    if (TEST_Z(ebx, ebx)) { sub_00417E93(); return; } /* je: equal / zero */

loc_00417E5F: ;
    if (TEST_Z(eax, eax)) goto loc_00417E7E; /* je: equal / zero */

loc_00417E63: ;
    (void)0; /* cmp MEM32(ebx + 0x14), edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(ebx + 0x14), edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DEC);
    PUSH32(esp, 0x15B);
    PUSH32(esp, 0x646630);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417E7B: ;
    esp = esp + 0x10;

loc_00417E7E: ;
    eax = MEM32(ebx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00417E88; /* je: equal / zero */

loc_00417E85: ;
    MEM32(eax + 0x1C) = esi;

loc_00417E88: ;
    eax = MEM32(ebx + 0x18);
    MEM32(esi + 0x18) = eax;
    MEM32(ebx + 0x18) = esi;
    g_seh_ebp = ebp; sub_00417EA3(); return; /* tail jmp 0x00417EA3 */

}

/**
 * sub_00417EC0
 * Original: 0x00417EC0 - 0x00417F3F (127 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00417EC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 4);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00417F36; /* je: equal / zero */

loc_00417ECE: ;
    eax = MEM32(0x84BE58);
    PUSH32(esp, ebp);

loc_00417ED4: ;
    if (TEST_Z(eax, eax)) goto loc_00417EFA; /* je: equal / zero */

loc_00417ED8: ;
    ebp = MEM32(ebx + 0x20);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ebp, ebp)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0xDF);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417EF2: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00417EFA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebx + 0x20);
    ebp = MEM32(edx + 4);
    if (TEST_Z(eax, eax)) goto loc_00417F26; /* je: equal / zero */

loc_00417F04: ;
    ecx = MEM32(esi + 0x20);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0xDF);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00417F1E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00417F26: ;
    edx = MEM32(esi + 0x20);
    if (CMP_LE(ebp, MEM32(edx + 4))) goto loc_00417F35; /* jle: less or equal (signed <=) */

loc_00417F2E: ;
    ebx = MEM32(ebx + 0x1C);
    if (TEST_NZ(ebx, ebx)) goto loc_00417ED4; /* jne: not equal / not zero */

loc_00417F35: ;
    POP32(esp, ebp);

loc_00417F36: ;
    PUSH32(esp, 0); sub_00417E30(); /* call 0x00417E30 */

loc_00417F3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00417F40
 * Original: 0x00417F40 - 0x00417F66 (38 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417F40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 4);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00417F5D; /* je: equal / zero */

loc_00417F4E: ;
    eax = MEM32(esi + 4);

loc_00417F51: ;
    if (CMP_LE(MEM32(ebx + 4), eax)) goto loc_00417F5D; /* jle: less or equal (signed <=) */

loc_00417F56: ;
    ebx = MEM32(ebx + 0x1C);
    if (TEST_NZ(ebx, ebx)) goto loc_00417F51; /* jne: not equal / not zero */

loc_00417F5D: ;
    PUSH32(esp, 0); sub_00417E30(); /* call 0x00417E30 */

loc_00417F62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00417F70
 * Original: 0x00417F70 - 0x00417FCB (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417F70: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_00417FCA; /* je: equal / zero */

loc_00417F76: ;
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_00417F8C; /* je: equal / zero */

loc_00417F7C: ;
    edi = MEM32(ecx + 4);
    MEM32(edi + 0x18) = eax;
    eax = MEM32(edx);
    edi = MEM32(ecx + 4);
    MEM32(eax + 0x1C) = edi;
    goto loc_00417F8E;

loc_00417F8C: ;
    MEM32(ecx) = eax;

loc_00417F8E: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_00417FAA; /* je: equal / zero */

loc_00417F9A: ;
    /* nop */

loc_00417FA0: ;
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(eax + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_00417FA0; /* jne: not equal / not zero */

loc_00417FAA: ;
    edi = MEM32(ecx + 8);
    eax = MEM32(edx + 8);
    edi = edi + eax;
    MEM32(ecx + 8) = edi;
    MEM32(edx + 4) = 0;
    MEM32(edx) = 0;
    MEM32(edx + 8) = 0;
    POP32(esp, edi);

loc_00417FCA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00417FD0
 * Original: 0x00417FD0 - 0x0041802C (92 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00417FD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00417FD0: ;
    esp = esp - 0x19C;
    ecx = 0; /* xor self */
    MEM32(esp) = ecx;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x84BEA0) = LO8(eax);
    eax = esp;
    MEM32(esp + 4) = ecx;
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    MEM32(0x82AEC8) = 0;
    MEM32(esp + 0xC) = ecx;
    MEM8(esp + 4) = 0xC;
    MEM8(esp + 5) = LO8(edx);
    PUSH32(esp, 0); sub_0048DACF(); /* call 0x0048DACF */

loc_00418009: ;
    if (TEST_NZ(eax, eax)) goto loc_00418025; /* jne: not equal / not zero */

loc_0041800D: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x202);
    PUSH32(esp, 0); sub_0048DAE6(); /* call 0x0048DAE6 */

loc_0041801C: ;
    if (TEST_NZ(eax, eax)) goto loc_00418025; /* jne: not equal / not zero */

loc_00418020: ;
    PUSH32(esp, 0); sub_0041B1C0(); /* call 0x0041B1C0 */

loc_00418025: ;
    esp = esp + 0x19C;
    esp += 4; return; /* ret */

}

/**
 * sub_00418030
 * Original: 0x00418030 - 0x00418043 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00418030: ;
    SET_LO8(edx, MEM8(0x84BEA0));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_00418043(); return; } /* je: equal / zero */

loc_0041803C: ;
    edx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00418060
 * Original: 0x00418060 - 0x00418073 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00418060: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x84BEA0));
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_00418073(); return; } /* je: equal / zero */

loc_0041806E: ;
    edx = MEM32(edx);
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00418080
 * Original: 0x00418080 - 0x0041810F (143 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00418080: ;
    MEM32(0x84BEB0) = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004180B5; /* je: equal / zero */

loc_00418090: ;
    esi = MEM32(0x84BEAC);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DCC);
    PUSH32(esp, 0x29D);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004180AD: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_004180B5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(0x84BEB0);
    if (TEST_Z(eax, eax)) goto loc_004180DC; /* je: equal / zero */

loc_004180BF: ;
    edx = MEM32(0x84BED8);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E90);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x646E80);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004180D9: ;
    esp = esp + 0x10;

loc_004180DC: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x11A8);
    eax = eax + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BED8), _icall_esp); /* indirect call */
    }

loc_004180EE: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0041810F(); return; } /* je: equal / zero */

loc_004180F5: ;
    PUSH32(esp, 0x4181A0);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x11A8);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_0041810B: ;
    eax = edi;
    g_seh_ebp = ebp; sub_00418111(); return; /* tail jmp 0x00418111 */

}

/**
 * sub_004181A0
 * Original: 0x004181A0 - 0x004181C9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004181A0(void)
{

loc_004181A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004181D0
 * Original: 0x004181D0 - 0x00418236 (102 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004181D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004181D0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041821D; /* je: equal / zero */

loc_004181DC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0x2F4);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004181F3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041821D; /* je: equal / zero */

loc_004181FF: ;
    (void)0; /* cmp esi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0x2F5);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041821A: ;
    esp = esp + 0x10;

loc_0041821D: ;
    eax = MEM32(0x84BEAC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    ecx = MEM32(eax + esi);
    eax = eax + esi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_00418236(); return; } /* je: equal / zero */

loc_00418232: ;
    eax = eax + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00418240
 * Original: 0x00418240 - 0x00418319 (217 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418240(void)
{
    int _flags = 0; /* fallback flag var */

loc_00418240: ;
    eax = MEM32(0x758624);
    esp = esp - 0x14;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0041830B; /* jne: not equal / not zero */

loc_00418251: ;
    PUSH32(esp, 0xFE);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0048D715(); /* call 0x0048D715 */

loc_0041825F: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(0x758624) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00418272; /* jne: not equal / not zero */

loc_00418269: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_0041826E: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00418272: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8004667Eu);
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 1;
    PUSH32(esp, 0); sub_0048D736(); /* call 0x0048D736 */

loc_00418289: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_004182B2; /* jne: not equal / not zero */

loc_0041828E: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_00418293: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004182B2; /* je: equal / zero */

loc_0041829C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D54);
    PUSH32(esp, 0x378);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004182AF: ;
    esp = esp + 0x10;

loc_004182B2: ;
    PUSH32(esp, 0x3E8);
    MEM16(esp + 8) = 2;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_0049B574(); /* call 0x0049B574 */

loc_004182CB: ;
    PUSH32(esp, 0x10);
    edx = esp + 8;
    MEM16(esp + 0xA) = LO16(eax);
    eax = MEM32(0x758624);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D750(); /* call 0x0048D750 */

loc_004182E2: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0041830B; /* jne: not equal / not zero */

loc_004182E7: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_004182EC: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041830B; /* je: equal / zero */

loc_004182F5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D54);
    PUSH32(esp, 0x383);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418308: ;
    esp = esp + 0x10;

loc_0041830B: ;
    MEM32(0x82AEC8) = 1;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00418320
 * Original: 0x00418320 - 0x004185C5 (677 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00418320: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ebx;
    PUSH32(esp, 0); sub_00418D90(); /* call 0x00418D90 */

loc_00418331: ;
    ebp = eax;
    edi = 0; /* xor self */
    if (CMP_GE(ebp, edi)) { sub_004185C5(); return; } /* jge: greater or equal (signed >=) */

loc_0041833D: ;
    edx = MEM32(0x84BEB0);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, edi - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(edx, edi)) goto loc_00418363; /* jle: less or equal (signed <=) */

loc_0041834A: ;
    ecx = MEM32(0x84BEAC);

loc_00418350: ;
    if (CMP_EQ(MEM32(ecx), edi)) goto loc_00418361; /* je: equal / zero */

loc_00418354: ;
    eax++;
    ecx = ecx + 0x11A8;
    if (CMP_L(eax, edx)) goto loc_00418350; /* jl: less (signed <) */

loc_0041835F: ;
    goto loc_00418363;

loc_00418361: ;
    ebp = eax;

loc_00418363: ;
    if (CMP_L(ebp, edi)) goto loc_004185BB; /* jl: less (signed <) */

loc_0041836B: ;
    eax = MEM32(0x758624);
    esi = esi | 0xFFFFFFFFu;
    if (CMP_NE(eax, esi)) goto loc_0041845A; /* jne: not equal / not zero */

loc_0041837B: ;
    PUSH32(esp, 0xFE);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0048D715(); /* call 0x0048D715 */

loc_00418389: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x758624) = eax;
    if (CMP_NE(eax, esi)) goto loc_004183BE; /* jne: not equal / not zero */

loc_00418392: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_00418397: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, edi)) goto loc_004183BE; /* je: equal / zero */

loc_004183A0: ;
    (void)0; /* cmp MEM32(0x758624), esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(0x758624), esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D28);
    PUSH32(esp, 0x3B8);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004183BB: ;
    esp = esp + 0x10;

loc_004183BE: ;
    eax = MEM32(0x758624);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8004667Eu);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0); sub_0048D736(); /* call 0x0048D736 */

loc_004183DB: ;
    if (CMP_NE(eax, esi)) goto loc_00418402; /* jne: not equal / not zero */

loc_004183DF: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_004183E4: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, edi)) goto loc_00418402; /* je: equal / zero */

loc_004183ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D54);
    PUSH32(esp, 0x3C0);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004183FF: ;
    esp = esp + 0x10;

loc_00418402: ;
    PUSH32(esp, 0x3E8);
    MEM16(esp + 0x18) = 2;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); sub_0049B574(); /* call 0x0049B574 */

loc_00418417: ;
    edx = MEM32(0x758624);
    PUSH32(esp, 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM16(esp + 0x22) = LO16(eax);
    PUSH32(esp, 0); sub_0048D750(); /* call 0x0048D750 */

loc_0041842F: ;
    if (CMP_NE(eax, esi)) goto loc_0041845A; /* jne: not equal / not zero */

loc_00418433: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_00418438: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, edi)) goto loc_00418512; /* je: equal / zero */

loc_00418445: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D54);
    PUSH32(esp, 0x3CB);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418457: ;
    esp = esp + 0x10;

loc_0041845A: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, edi)) goto loc_00418512; /* je: equal / zero */

loc_00418467: ;
    ecx = MEM32(0x84BEAC);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    (void)0; /* cmp MEM32(esi + ecx + 0x30), edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(esi + ecx + 0x30), edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646CF0);
    PUSH32(esp, 0x3F6);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041848E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, edi)) goto loc_00418512; /* je: equal / zero */

loc_0041849A: ;
    ecx = MEM32(0x84BEAC);
    (void)0; /* cmp MEM32(esi + ecx + 0x3C), edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(esi + ecx + 0x3C), edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646CB4);
    PUSH32(esp, 0x3F7);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004184B9: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, edi)) goto loc_00418512; /* je: equal / zero */

loc_004184C5: ;
    ecx = MEM32(0x84BEAC);
    (void)0; /* cmp MEM32(esi + ecx + 0x48), edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(esi + ecx + 0x48), edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646C7C);
    PUSH32(esp, 0x3F8);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004184E4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, edi)) goto loc_00418512; /* je: equal / zero */

loc_004184F0: ;
    ecx = MEM32(0x84BEAC);
    (void)0; /* cmp MEM32(esi + ecx + 0x54), edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(esi + ecx + 0x54), edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646C40);
    PUSH32(esp, 0x3F9);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041850F: ;
    esp = esp + 0x10;

loc_00418512: ;
    PUSH32(esp, 0); sub_00416E50(); /* call 0x00416E50 */

loc_00418517: ;
    edx = MEM32(0x84BE58);
    ecx = MEM32(0x84BEAC);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM32(esi + ecx + 0x64) = eax;
    if (CMP_EQ(edx, edi)) goto loc_00418553; /* je: equal / zero */

loc_00418533: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(eax, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646C0C);
    PUSH32(esp, 0x3FC);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041854A: ;
    ecx = MEM32(0x84BEAC);
    esp = esp + 0x10;

loc_00418553: ;
    MEM16(esi + ecx + 0x10) = 2;
    edx = MEM32(ebx);
    PUSH32(esp, 0x3E8);
    MEM32(esi + ecx + 0x14) = edx;
    ebx = esi + ecx;
    PUSH32(esp, 0); sub_0049B574(); /* call 0x0049B574 */

loc_0041856D: ;
    edx = MEM32(0x84BEAC);
    MEM16(ebx + 0x12) = LO16(eax);
    eax = MEM32(esp + 0x28);
    MEM16(ebx + 0x20) = 2;
    ecx = MEM32(eax);
    PUSH32(esp, 0x3E8);
    MEM32(ebx + 0x24) = ecx;
    esi = esi + edx;
    PUSH32(esp, 0); sub_0049B574(); /* call 0x0049B574 */

loc_00418592: ;
    MEM16(esi + 0x22) = LO16(eax);
    eax = 1;
    MEM32(esi + 4) = eax;
    MEM32(esi) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    eax = 0x1D;
    ecx = ebp;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x60) = edi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_004185B8: ;
    esp = esp + 4;

loc_004185BB: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_004185D0
 * Original: 0x004185D0 - 0x004188D1 (769 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004185D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004185D0: ;
    eax = MEM32(0x758628);
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebp)) goto loc_0041870B; /* jne: not equal / not zero */

loc_004185E9: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0048D715(); /* call 0x0048D715 */

loc_004185F4: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(0x758628) = eax;
    if (CMP_NE(eax, ebp)) goto loc_00418629; /* jne: not equal / not zero */

loc_004185FD: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_00418602: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, ebx)) goto loc_00418629; /* je: equal / zero */

loc_0041860B: ;
    (void)0; /* cmp MEM32(0x758628), ebp - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(0x758628), ebp)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646BD8);
    PUSH32(esp, 0x423);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418626: ;
    esp = esp + 0x10;

loc_00418629: ;
    eax = MEM32(0x758628);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8004667Eu);
    esi = 1;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_0048D736(); /* call 0x0048D736 */

loc_00418647: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0041866F; /* jne: not equal / not zero */

loc_0041864C: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_00418651: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, ebx)) goto loc_0041866F; /* je: equal / zero */

loc_0041865A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D54);
    PUSH32(esp, 0x42B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041866C: ;
    esp = esp + 0x10;

loc_0041866F: ;
    edx = MEM32(0x758628);
    PUSH32(esp, 4);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0); sub_0048D741(); /* call 0x0048D741 */

loc_0041868D: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_004186B5; /* jne: not equal / not zero */

loc_00418692: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_00418697: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, ebx)) goto loc_004186B5; /* je: equal / zero */

loc_004186A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D54);
    PUSH32(esp, 0x434);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004186B2: ;
    esp = esp + 0x10;

loc_004186B5: ;
    PUSH32(esp, 0x3E9);
    MEM16(esp + 0x1C) = 2;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_0049B574(); /* call 0x0049B574 */

loc_004186CA: ;
    ecx = MEM32(0x758628);
    MEM16(esp + 0x1A) = LO16(eax);
    PUSH32(esp, 0x10);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0048D750(); /* call 0x0048D750 */

loc_004186E2: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0041870B; /* jne: not equal / not zero */

loc_004186E7: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_004186EC: ;
    edi = MEM32(0x84BE58);
    if (CMP_EQ(edi, ebx)) goto loc_00418711; /* je: equal / zero */

loc_004186F6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D54);
    PUSH32(esp, 0x43F);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00418708: ;
    esp = esp + 0x10;

loc_0041870B: ;
    edi = MEM32(0x84BE58);

loc_00418711: ;
    edx = MEM32(0x84BEB0);
    eax = 0; /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_00418743; /* jle: less or equal (signed <=) */

loc_0041871D: ;
    ecx = MEM32(0x84BEAC);

loc_00418723: ;
    if (CMP_EQ(MEM32(ecx), ebx)) goto loc_0041872C; /* je: equal / zero */

loc_00418727: ;
    if (CMP_NE(MEM32(ecx + 0xC), ebx)) goto loc_00418739; /* jne: not equal / not zero */

loc_0041872C: ;
    eax++;
    ecx = ecx + 0x11A8;
    if (CMP_L(eax, edx)) goto loc_00418723; /* jl: less (signed <) */

loc_00418737: ;
    goto loc_00418743;

loc_00418739: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ebp = eax;
    if (CMP_GE(eax, ebx)) goto loc_004188C7; /* jge: greater or equal (signed >=) */

loc_00418743: ;
    eax = 0; /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_00418763; /* jle: less or equal (signed <=) */

loc_00418749: ;
    ecx = MEM32(0x84BEAC);
    /* nop */

loc_00418750: ;
    if (CMP_EQ(MEM32(ecx), ebx)) goto loc_00418761; /* je: equal / zero */

loc_00418754: ;
    eax++;
    ecx = ecx + 0x11A8;
    if (CMP_L(eax, edx)) goto loc_00418750; /* jl: less (signed <) */

loc_0041875F: ;
    goto loc_00418763;

loc_00418761: ;
    ebp = eax;

loc_00418763: ;
    if (CMP_L(ebp, ebx)) goto loc_004188C7; /* jl: less (signed <) */

loc_0041876B: ;
    if (CMP_EQ(edi, ebx)) goto loc_0041881E; /* je: equal / zero */

loc_00418773: ;
    edx = MEM32(0x84BEAC);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    (void)0; /* cmp MEM32(esi + edx + 0x30), ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(esi + edx + 0x30), ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646CF0);
    PUSH32(esp, 0x45D);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0041879A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_0041881E; /* je: equal / zero */

loc_004187A6: ;
    ecx = MEM32(0x84BEAC);
    (void)0; /* cmp MEM32(esi + ecx + 0x3C), ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(esi + ecx + 0x3C), ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646CB4);
    PUSH32(esp, 0x45E);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004187C5: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_0041881E; /* je: equal / zero */

loc_004187D1: ;
    ecx = MEM32(0x84BEAC);
    (void)0; /* cmp MEM32(esi + ecx + 0x48), ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(esi + ecx + 0x48), ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646C7C);
    PUSH32(esp, 0x45F);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004187F0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_0041881E; /* je: equal / zero */

loc_004187FC: ;
    ecx = MEM32(0x84BEAC);
    (void)0; /* cmp MEM32(esi + ecx + 0x54), ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(esi + ecx + 0x54), ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646C40);
    PUSH32(esp, 0x460);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041881B: ;
    esp = esp + 0x10;

loc_0041881E: ;
    PUSH32(esp, 0); sub_00416E50(); /* call 0x00416E50 */

loc_00418823: ;
    edx = MEM32(0x84BE58);
    ecx = MEM32(0x84BEAC);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(esi + ecx + 0x64) = eax;
    if (CMP_EQ(edx, ebx)) goto loc_0041885F; /* je: equal / zero */

loc_0041883F: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(eax, ebx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646C0C);
    PUSH32(esp, 0x463);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_00418856: ;
    ecx = MEM32(0x84BEAC);
    esp = esp + 0x10;

loc_0041885F: ;
    PUSH32(esp, 0x3E9);
    MEM16(esi + ecx + 0x10) = 2;
    MEM32(esi + ecx + 0x14) = 0xFFFFFFFFu;
    edi = esi + ecx;
    PUSH32(esp, 0); sub_0049B574(); /* call 0x0049B574 */

loc_0041887B: ;
    ecx = MEM32(0x84BEAC);
    PUSH32(esp, 0x3E9);
    MEM16(edi + 0x12) = LO16(eax);
    MEM16(edi + 0x20) = 2;
    MEM32(edi + 0x24) = 0xFFFFFFFFu;
    esi = esi + ecx;
    PUSH32(esp, 0); sub_0049B574(); /* call 0x0049B574 */

loc_0041889E: ;
    MEM16(esi + 0x22) = LO16(eax);
    eax = 1;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    eax = 0x1D;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_004188C4: ;
    esp = esp + 4;

loc_004188C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_004188E0
 * Original: 0x004188E0 - 0x0041894F (111 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004188E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004188E0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041892D; /* je: equal / zero */

loc_004188EC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0x496);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418903: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041892D; /* je: equal / zero */

loc_0041890F: ;
    (void)0; /* cmp esi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0x497);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041892A: ;
    esp = esp + 0x10;

loc_0041892D: ;
    eax = MEM32(0x84BEAC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    ecx = MEM32(eax + esi);
    eax = eax + esi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_0041894F(); return; } /* je: equal / zero */

loc_00418942: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) { sub_0041894F(); return; } /* je: equal / zero */

loc_00418949: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00418960
 * Original: 0x00418960 - 0x004189BD (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418960(void)
{
    int _flags = 0; /* fallback flag var */

loc_00418960: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004189AD; /* je: equal / zero */

loc_0041896C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0x4A4);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418983: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004189AD; /* je: equal / zero */

loc_0041898F: ;
    (void)0; /* cmp esi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0x4A5);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004189AA: ;
    esp = esp + 0x10;

loc_004189AD: ;
    eax = MEM32(0x84BEAC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    eax = MEM32(esi + eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004189C0
 * Original: 0x004189C0 - 0x00418A60 (160 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004189C0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004189C0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00418A40; /* je: equal / zero */

loc_004189CC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0x4B1);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004189E3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00418A40; /* je: equal / zero */

loc_004189EF: ;
    (void)0; /* cmp esi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0x4B2);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418A0A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00418A40; /* je: equal / zero */

loc_00418A16: ;
    edx = MEM32(0x84BEAC);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x11A8);
    (void)0; /* cmp MEM32(ecx + edx), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(ecx + edx), 0)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646BA8);
    PUSH32(esp, 0x4B3);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418A3D: ;
    esp = esp + 0x10;

loc_00418A40: ;
    edx = MEM32(0x84BEAC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    eax = MEM32(esi + edx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D8B3(); /* call 0x0048D8B3 */

loc_00418A56: ;
    eax = eax - 3;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00418A60
 * Original: 0x00418A60 - 0x00418BCC (364 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00418A60: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00418AAF; /* je: equal / zero */

loc_00418A6E: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ebp & ebp, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0x4BF);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418A85: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00418AAF; /* je: equal / zero */

loc_00418A91: ;
    (void)0; /* cmp ebp, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(ebp, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0x4C0);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418AAC: ;
    esp = esp + 0x10;

loc_00418AAF: ;
    eax = MEM32(0x84BEAC);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x11A8);
    if (CMP_EQ(MEM32(eax + ebp), 0)) goto loc_00418BCA; /* je: equal / zero */

loc_00418AC4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + ebp + 0x64);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00418AE1; /* je: equal / zero */

loc_00418ACF: ;
    PUSH32(esp, 0); sub_00416FF0(); /* call 0x00416FF0 */

loc_00418AD4: ;
    eax = MEM32(0x84BEAC);
    MEM32(eax + ebp + 0x64) = 0;

loc_00418AE1: ;
    ecx = MEM32(eax + ebp + 0x3C);
    if (TEST_Z(ecx, ecx)) goto loc_00418B16; /* je: equal / zero */

loc_00418AE9: ;
    /* nop */

loc_00418AF0: ;
    esi = MEM32(eax + ebp + 0x3C);
    edi = eax + ebp + 0x3C;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_00418AFD: ;
    if (TEST_Z(esi, esi)) goto loc_00418B09; /* je: equal / zero */

loc_00418B01: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00418B09: ;
    eax = MEM32(0x84BEAC);
    ecx = MEM32(eax + ebp + 0x3C);
    if (TEST_NZ(ecx, ecx)) goto loc_00418AF0; /* jne: not equal / not zero */

loc_00418B16: ;
    ecx = MEM32(eax + ebp + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_00418B46; /* je: equal / zero */

loc_00418B1E: ;
    edi = edi;

loc_00418B20: ;
    esi = MEM32(eax + ebp + 0x30);
    edi = eax + ebp + 0x30;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_00418B2D: ;
    if (TEST_Z(esi, esi)) goto loc_00418B39; /* je: equal / zero */

loc_00418B31: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00418B39: ;
    eax = MEM32(0x84BEAC);
    ecx = MEM32(eax + ebp + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_00418B20; /* jne: not equal / not zero */

loc_00418B46: ;
    ecx = MEM32(eax + ebp + 0x48);
    if (TEST_Z(ecx, ecx)) goto loc_00418B76; /* je: equal / zero */

loc_00418B4E: ;
    edi = edi;

loc_00418B50: ;
    esi = MEM32(eax + ebp + 0x48);
    edi = eax + ebp + 0x48;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_00418B5D: ;
    if (TEST_Z(esi, esi)) goto loc_00418B69; /* je: equal / zero */

loc_00418B61: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00418B69: ;
    eax = MEM32(0x84BEAC);
    ecx = MEM32(eax + ebp + 0x48);
    if (TEST_NZ(ecx, ecx)) goto loc_00418B50; /* jne: not equal / not zero */

loc_00418B76: ;
    ecx = MEM32(eax + ebp + 0x54);
    if (TEST_Z(ecx, ecx)) goto loc_00418BA6; /* je: equal / zero */

loc_00418B7E: ;
    edi = edi;

loc_00418B80: ;
    esi = MEM32(eax + ebp + 0x54);
    edi = eax + ebp + 0x54;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_00418B8D: ;
    if (TEST_Z(esi, esi)) goto loc_00418B99; /* je: equal / zero */

loc_00418B91: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00418B99: ;
    eax = MEM32(0x84BEAC);
    ecx = MEM32(eax + ebp + 0x54);
    if (TEST_NZ(ecx, ecx)) goto loc_00418B80; /* jne: not equal / not zero */

loc_00418BA6: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    eax = 0x1E;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00418BB8: ;
    eax = MEM32(0x84BEAC);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + ebp) = ebx;
    MEM32(eax + ebp + 8) = ebx;
    POP32(esp, ebx);

loc_00418BCA: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00418BD0
 * Original: 0x00418BD0 - 0x00418C50 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00418BD0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00418C4E; /* je: equal / zero */

loc_00418BDC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418BF3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00418C4E; /* je: equal / zero */

loc_00418BFF: ;
    (void)0; /* cmp esi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0x501);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418C1A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00418C4E; /* je: equal / zero */

loc_00418C26: ;
    ecx = MEM32(0x84BEAC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    (void)0; /* cmp MEM32(esi + ecx), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(esi + ecx), 0)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646BA8);
    PUSH32(esp, 0x502);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418C4B: ;
    esp = esp + 0x10;

loc_00418C4E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00418C50
 * Original: 0x00418C50 - 0x00418D8B (315 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00418C50: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00418D3C; /* je: equal / zero */

loc_00418C66: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418C7D: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00418D3C; /* je: equal / zero */

loc_00418C8D: ;
    (void)0; /* cmp esi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0x50D);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418CA8: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00418D3C; /* je: equal / zero */

loc_00418CB8: ;
    ecx = MEM32(0x84BEAC);
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x11A8);
    (void)0; /* cmp MEM32(edi + ecx), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(edi + ecx), 0)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646BA8);
    PUSH32(esp, 0x50E);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418CDF: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00418D3C; /* je: equal / zero */

loc_00418CEB: ;
    ecx = MEM32(0x84BEAC);
    edx = MEM32(edi + ecx + 0xC);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646B78);
    PUSH32(esp, 0x510);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418D0C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00418D3C; /* je: equal / zero */

loc_00418D18: ;
    ecx = MEM32(0x84BEAC);
    edx = MEM32(edi + ecx + 8);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646B4C);
    PUSH32(esp, 0x511);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418D39: ;
    esp = esp + 0x10;

loc_00418D3C: ;
    eax = MEM32(0x84BEAC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    MEM16(esi + eax + 0x10) = 2;
    ecx = MEM32(ebp);
    PUSH32(esp, 0x3E8);
    MEM32(esi + eax + 0x14) = ecx;
    edi = esi + eax;
    PUSH32(esp, 0); sub_0049B574(); /* call 0x0049B574 */

loc_00418D62: ;
    MEM16(edi + 0x12) = LO16(eax);
    MEM16(edi + 0x20) = 2;
    edx = MEM32(ebp);
    PUSH32(esp, 0x3E8);
    MEM32(edi + 0x24) = edx;
    PUSH32(esp, 0); sub_0049B574(); /* call 0x0049B574 */

loc_00418D7C: ;
    ecx = MEM32(0x84BEAC);
    POP32(esp, edi);
    MEM16(esi + ecx + 0x22) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00418D90
 * Original: 0x00418D90 - 0x00418DC8 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00418D90: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84BEB0);
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00418DC3; /* jle: less or equal (signed <=) */

loc_00418D9D: ;
    ecx = MEM32(0x84BEAC);
    ecx = ecx + 0x24;

loc_00418DA6: ;
    edx = MEM32(ecx + -36);
    if (TEST_Z(edx, edx)) goto loc_00418DB8; /* je: equal / zero */

loc_00418DAD: ;
    edx = MEM32(edi);
    if (CMP_EQ(MEM32(ecx + -16), edx)) goto loc_00418DC6; /* je: equal / zero */

loc_00418DB4: ;
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_00418DC6; /* je: equal / zero */

loc_00418DB8: ;
    eax++;
    ecx = ecx + 0x11A8;
    if (CMP_L(eax, esi)) goto loc_00418DA6; /* jl: less (signed <) */

loc_00418DC3: ;
    eax = eax | 0xFFFFFFFFu;

loc_00418DC6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00418DD0
 * Original: 0x00418DD0 - 0x00419E8C (4284 bytes, 1308 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00418DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00418DD0: ;
    eax = MEM32(0x84BE84);
    esp = esp - 0x558;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x560);
    if (TEST_Z(eax, eax)) goto loc_00418DF5; /* je: equal / zero */

loc_00418DE7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418DEA: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00419E84; /* je: equal / zero */

loc_00418DF5: ;
    PUSH32(esp, edi);
    edi = MEM32(0x84BE58);
    if (TEST_Z(edi, edi)) goto loc_00418E20; /* je: equal / zero */

loc_00418E00: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0x584);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00418E17: ;
    edi = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00418E20: ;
    (void)0; /* cmp esi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM8(esp + 0x1C) = LO8(ecx);
    if (TEST_Z(edi, edi)) goto loc_00418E50; /* je: equal / zero */

loc_00418E31: ;
    edx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0x585);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00418E47: ;
    edi = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00418E50: ;
    eax = MEM32(0x84BEAC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    (void)0; /* cmp MEM32(esi + eax), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(esi + eax), 0)) ? 1 : 0); /* setne */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    MEM8(esp + 0x1C) = LO8(ecx);
    if (TEST_Z(edi, edi)) goto loc_00418E8D; /* je: equal / zero */

loc_00418E6E: ;
    edx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646BA8);
    PUSH32(esp, 0x586);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00418E84: ;
    edi = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00418E8D: ;
    eax = MEM32(0x84BEAC);
    ecx = MEM32(esi + eax + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM8(esp + 0x1C) = LO8(ecx);
    if (TEST_Z(edi, edi)) goto loc_00418EC2; /* je: equal / zero */

loc_00418EA3: ;
    edx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646B4C);
    PUSH32(esp, 0x587);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00418EB9: ;
    edi = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00418EC2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00418ED1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00418EDF: ;
    ebp = MEM32(0x828B48);
    ebx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - ebp;
    PUSH32(esp, 0x3E8);
    edx = edx - ebx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00418EFD: ;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x84BEAC);
    esi = MEM32(esi + eax + 0x3C);
    if (TEST_Z(esi, esi)) goto loc_0041901F; /* je: equal / zero */

loc_00418F12: ;
    ebp = MEM32(esp + 0x14);
    goto loc_00418F20;

loc_00418F18: ;
    edi = MEM32(0x84BE58);
    edi = edi;

loc_00418F20: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = MEM32(esi + 0x18);
    MEM32(esp + 0x24) = ebx;
    if (TEST_Z(edi, edi)) goto loc_00418F48; /* je: equal / zero */

loc_00418F2B: ;
    eax = MEM32(esi + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0xDF);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00418F45: ;
    esp = esp + 0x10;

loc_00418F48: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esp + 0x28);
    if (CMP_L(eax, MEM32(edx + 4))) goto loc_0041901F; /* jl: less (signed <) */

loc_00418F58: ;
    ecx = MEM32(0x84BEAC);
    edi = ecx + ebp + 0x3C;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_00418F67: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00418F92; /* je: equal / zero */

loc_00418F70: ;
    edx = MEM32(esi + 0x20);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0xE5);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418F8A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00418F92: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0xC);
    if (TEST_S(edx, edx)) goto loc_00418FDB; /* jl: less (signed <) */

loc_00418F9C: ;
    if (TEST_Z(eax, eax)) goto loc_00418FBA; /* je: equal / zero */

loc_00418FA0: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0xE5);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00418FB7: ;
    esp = esp + 0x10;

loc_00418FBA: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esp + 0x28);
    if (CMP_G(MEM32(edx + 0xC), eax)) goto loc_00418FDB; /* jg: greater (signed >) */

loc_00418FC6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x34), _icall_esp); /* indirect call */
    }

loc_00418FCD: ;
    if (TEST_Z(eax, eax)) goto loc_00418FDB; /* je: equal / zero */

loc_00418FD1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00418FD9: ;
    goto loc_00419015;

loc_00418FDB: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x30), _icall_esp); /* indirect call */
    }

loc_00418FE7: ;
    ecx = MEM32(0x84BEAC);
    ebx = MEM32(ecx + ebp + 0x34);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = ecx + ebp + 0x30;
    if (TEST_Z(ebx, ebx)) goto loc_0041900C; /* je: equal / zero */

loc_00418FF9: ;
    eax = MEM32(esi + 4);
    /* nop */

loc_00419000: ;
    if (CMP_LE(MEM32(ebx + 4), eax)) goto loc_0041900C; /* jle: less or equal (signed <=) */

loc_00419005: ;
    ebx = MEM32(ebx + 0x1C);
    if (TEST_NZ(ebx, ebx)) goto loc_00419000; /* jne: not equal / not zero */

loc_0041900C: ;
    PUSH32(esp, 0); sub_00417E30(); /* call 0x00417E30 */

loc_00419011: ;
    ebx = MEM32(esp + 0x24);

loc_00419015: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = ebx;
    if (TEST_NZ(ebx, ebx)) goto loc_00418F18; /* jne: not equal / not zero */

loc_0041901F: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(0x84BEAC);
    ecx = MEM32(edx + esi + 0x30);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, eax)) goto loc_00419E81; /* je: equal / zero */

loc_00419037: ;
    edi = MEM32(esp + 0x28);
    if (CMP_L(edi, MEM32(ecx + 4))) goto loc_00419E81; /* jl: less (signed <) */

loc_00419044: ;
    ecx = esp + 0x68;
    MEM32(esp + 0x40) = ecx;
    ecx = 0x500;
    edi = esp + 0x68;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x38) = edi;
    edi = MEM32(edx + esi + 0xC);
    MEM32(esp + 0x3C) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edi, eax)) ? 1 : 0); /* sete */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(0x75B8F4) = eax;
    MEM32(0x75B8F8) = eax;
    MEM32(0x75B90C) = eax;
    MEM32(0x75B910) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(0x75862C) = eax;

loc_004190B1: ;
    ebx = MEM32(esp + 0x14);
    goto loc_004190C0;

    /* nop */
    edi = edi;

loc_004190C0: ;
    edx = MEM32(0x84BEAC);
    ebp = MEM32(ebx + edx + 0x30);
    if (TEST_Z(ebp, ebp)) goto loc_004198E9; /* je: equal / zero */

loc_004190D2: ;
    eax = MEM32(ebp);
    ecx = ebp;
    MEM32(0x877DA4) = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004190E0: ;
    edx = MEM32(ebp);
    ecx = ebp;
    MEM32(0x877DA0) = eax;
    MEM32(esp + 0x4C) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_004190F5: ;
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00419141; /* je: equal / zero */

loc_00419100: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x370);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419117: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00419141; /* je: equal / zero */

loc_00419123: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x371);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041913E: ;
    esp = esp + 0x10;

loc_00419141: ;
    eax = MEM32(0x84BE60);
    if (CMP_LE(MEM32(eax + esi * 4), 0)) goto loc_00419322; /* jle: less or equal (signed <=) */

loc_00419150: ;
    eax = MEM32(ebp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_004191DD; /* je: equal / zero */

loc_0041915B: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_004191DD; /* je: equal / zero */

loc_00419162: ;
    edi = MEM32(ebp + 0x10);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0041916E: ;
    ecx = MEM32(0x84BEAC);
    edx = MEM32(ebx + ecx + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00417970(); /* call 0x00417970 */

loc_0041917E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00419270; /* jne: not equal / not zero */

loc_00419189: ;
    ecx = MEM32(esp + 0x56C);
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    eax = 0x22;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_0041919E: ;
    eax = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004191A9: ;
    ecx = eax;
    PUSH32(esp, 1);
    eax = 0x22;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_004191B7: ;
    ecx = MEM32(0x84BEAC);
    edx = MEM32(esp + 0x18);
    esp = esp + 4;
    edi = edx + ecx + 0x30;
    esi = ebp;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_004191CF: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_004191D8: ;
    goto loc_004190B1;

loc_004191DD: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_004191E5: ;
    ecx = MEM32(0x84BEAC);
    edx = MEM32(ebx + ecx + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004171E0(); /* call 0x004171E0 */

loc_004191F5: ;
    edi = eax;
    eax = MEM32(ebp);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00419203: ;
    ecx = MEM32(0x84BEAC);
    edx = MEM32(ebx + ecx + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00417A70(); /* call 0x00417A70 */

loc_00419213: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00419265; /* jne: not equal / not zero */

loc_0041921A: ;
    eax = MEM32(0x84BEAC);
    edi = ebx + eax + 0x30;
    esi = ebp;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_0041922A: ;
    eax = MEM32(ebp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00419257; /* je: equal / zero */

loc_00419231: ;
    if (CMP_L(MEM32(eax), 0)) goto loc_00419257; /* jl: less (signed <) */

loc_00419236: ;
    edi = MEM32(esp + 0x28);
    eax = ebp;
    PUSH32(esp, 0); sub_00416980(); /* call 0x00416980 */

loc_00419241: ;
    ecx = MEM32(0x84BEAC);
    ecx = ebx + ecx + 0x3C;
    eax = ebp;
    PUSH32(esp, 0); sub_00417EC0(); /* call 0x00417EC0 */

loc_00419252: ;
    goto loc_004190C0;

loc_00419257: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00419260: ;
    goto loc_004190C0;

loc_00419265: ;
    MEM32(esp + 0x4C) = 1;
    MEM32(ebp + 0x10) = edi;

loc_00419270: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00419278: ;
    if (CMP_NE(eax, 0xF)) goto loc_004192DC; /* jne: not equal / not zero */

loc_0041927D: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_004192A4; /* je: equal / zero */

loc_0041928A: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646B34);
    PUSH32(esp, 0x61B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004192A1: ;
    esp = esp + 0x10;

loc_004192A4: ;
    if (TEST_Z(ebx, ebx)) goto loc_004192D4; /* je: equal / zero */

loc_004192A8: ;
    edx = MEM32(esp + 0x2C);
    if (CMP_GE(edx, MEM32(0x758634))) goto loc_004192D4; /* jge: greater or equal (signed >=) */

loc_004192B4: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B8F4);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_004192C1: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B90C);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_004192CE: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 1;
    goto loc_004192FE;

loc_004192D4: ;
    MEM32(0x75862C) = MEM32(0x75862C) + 1;
    goto loc_004192FE;

loc_004192DC: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B8F4);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_004192E9: ;
    ebx = MEM32(esp + 0x20);
    if (TEST_Z(ebx, ebx)) goto loc_004192FE; /* je: equal / zero */

loc_004192F1: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B90C);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_004192FE: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00419306: ;
    esi = eax;
    PUSH32(esp, 0); sub_00417300(); /* call 0x00417300 */

loc_0041930D: ;
    PUSH32(esp, eax);
    eax = edi;
    esi = 0x75B8F4;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0041931A: ;
    esp = esp + 4;
    goto loc_004193B0;

loc_00419322: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0041932A: ;
    if (CMP_NE(eax, 0xF)) goto loc_0041938E; /* jne: not equal / not zero */

loc_0041932F: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00419356; /* je: equal / zero */

loc_0041933C: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646B34);
    PUSH32(esp, 0x639);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419353: ;
    esp = esp + 0x10;

loc_00419356: ;
    if (TEST_Z(ebx, ebx)) goto loc_00419386; /* je: equal / zero */

loc_0041935A: ;
    edx = MEM32(esp + 0x2C);
    if (CMP_GE(edx, MEM32(0x758634))) goto loc_00419386; /* jge: greater or equal (signed >=) */

loc_00419366: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B8F4);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00419373: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B90C);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_00419380: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 1;
    goto loc_004193B0;

loc_00419386: ;
    MEM32(0x75862C) = MEM32(0x75862C) + 1;
    goto loc_004193B0;

loc_0041938E: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B8F4);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0041939B: ;
    ebx = MEM32(esp + 0x20);
    if (TEST_Z(ebx, ebx)) goto loc_004193B0; /* je: equal / zero */

loc_004193A3: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B90C);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_004193B0: ;
    eax = MEM32(0x75B8F4);
    ecx = MEM32(0x75B8F8);
    edx = MEM32(0x75B90C);
    esi = eax + ecx * 8;
    eax = MEM32(0x75B910);
    edi = edx + eax * 8;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x54) = edi;
    if (TEST_Z(eax, eax)) goto loc_004193FA; /* je: equal / zero */

loc_004193DD: ;
    (void)0; /* cmp esi, MEM32(esp + 0x10) - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ecx, LO8(ecx) + 1);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646B0C);
    PUSH32(esp, 0x655);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004193F7: ;
    esp = esp + 0x10;

loc_004193FA: ;
    eax = MEM32(0x84BE80);
    if (TEST_NZ(eax, eax)) goto loc_00419418; /* jne: not equal / not zero */

loc_00419403: ;
    eax = MEM32(esp + 0x10);
    edx = esi;
    edx = edx - eax;
    if (CMP_AE(edx, 8)) goto loc_00419418; /* jae: above or equal (unsigned >=) */

loc_00419410: ;
    if (CMP_EQ(esi, eax)) goto loc_00419418; /* je: equal / zero */

loc_00419414: ;
    eax = 0; /* xor self */
    goto loc_0041941D;

loc_00419418: ;
    eax = 1;

loc_0041941D: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00419441; /* je: equal / zero */

loc_00419427: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646AA8);
    PUSH32(esp, 0x656);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041943E: ;
    esp = esp + 0x10;

loc_00419441: ;
    eax = esi + 7;
    eax = eax & 0xFFFFFFF8u;
    if (TEST_Z(ebx, ebx)) goto loc_0041944F; /* je: equal / zero */

loc_0041944B: ;
    eax = eax + edi + 0x10;

loc_0041944F: ;
    ecx = MEM32(esp + 0x3C);
    edx = ecx * 8;
    if (CMP_A(eax, edx)) goto loc_004198ED; /* ja: above (unsigned >) */

loc_00419462: ;
    eax = MEM32(ebp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00419605; /* je: equal / zero */

loc_0041946D: ;
    if (CMP_L(MEM32(eax), 0)) goto loc_00419605; /* jl: less (signed <) */

loc_00419476: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_00419605; /* jne: not equal / not zero */

loc_00419482: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004194AB; /* je: equal / zero */

loc_0041948B: ;
    esi = MEM32(0x84BE78);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646A7C);
    PUSH32(esp, 0x664);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004194A8: ;
    esp = esp + 0x10;

loc_004194AB: ;
    edx = MEM32(0x84BEAC);
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + edx + 0x60);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BE78), _icall_esp); /* indirect call */
    }

loc_004194C4: ;
    esi = eax;
    edx = MEM32(esi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B8F4);
    ecx = esi;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_004194D9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75B90C);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_004194E5: ;
    ecx = MEM32(0x75B8F4);
    edx = MEM32(0x75B8F8);
    eax = MEM32(0x75B90C);
    edi = ecx + edx * 8;
    ecx = MEM32(0x75B910);
    ecx = eax + ecx * 8;
    eax = edi + 7;
    eax = eax & 0xFFFFFFF8u;
    eax = eax + ecx;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x48) = ecx;
    if (TEST_Z(ebx, ebx)) goto loc_00419515; /* je: equal / zero */

loc_00419512: ;
    eax = eax + 0x10;

loc_00419515: ;
    edx = MEM32(esp + 0x3C);
    ecx = edx * 8;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, 1);
    if (CMP_A(eax, ecx)) goto loc_004198DF; /* ja: above (unsigned >) */

loc_0041952A: ;
    esi = MEM32(esp + 0x570);
    ebx = 0; /* xor self */
    eax = 0xF;
    ecx = esi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_0041953F: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0041954A: ;
    ecx = eax;
    PUSH32(esp, 1);
    eax = 0xF;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_00419558: ;
    eax = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00419563: ;
    ebx = MEM32(esp + 0x10);
    ecx = eax;
    eax = MEM32(esp + 0x50);
    eax = eax - ebx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    eax = 2;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_00419580: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0041958B: ;
    ebx = MEM32(esp + 0x18);
    ecx = eax;
    eax = MEM32(esp + 0x54);
    eax = eax - ebx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    eax = 3;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_004195A8: ;
    PUSH32(esp, 1);
    eax = 0xF;
    ecx = esi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_004195B6: ;
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi);
    esp = esp + 8;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004195C4: ;
    ecx = eax;
    PUSH32(esp, 1);
    eax = 0xF;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_004195D2: ;
    edx = MEM32(esi);
    esp = esp + 4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_004195DC: ;
    ecx = eax;
    edi = edi - MEM32(esp + 0x50);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_004195ED: ;
    eax = MEM32(esi);
    esp = esp + 4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004195F7: ;
    esi = MEM32(esp + 0x54);
    ecx = eax;
    eax = MEM32(esp + 0x48);
    eax = eax - esi;
    goto loc_0041966E;

loc_00419605: ;
    ecx = MEM32(esp + 0x56C);
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    eax = 0xF;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_0041961A: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00419625: ;
    ecx = eax;
    PUSH32(esp, 1);
    eax = 0xF;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_00419633: ;
    eax = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0041963E: ;
    ecx = eax;
    eax = esi;
    eax = eax - MEM32(esp + 0x10);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_00419655: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00419660: ;
    esi = MEM32(esp + 0x18);
    ecx = eax;
    eax = edi;
    eax = eax - esi;
    MEM32(esp + 0x18) = eax;

loc_0041966E: ;
    PUSH32(esp, eax);
    eax = 3;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_0041967B: ;
    eax = MEM32(0x84BEAC);
    ecx = MEM32(esp + 0x18);
    esp = esp + 4;
    edi = ecx + eax + 0x30;
    esi = ebp;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_00419692: ;
    ebx = MEM32(esp + 0x60);
    edi = esp + 0x5C;
    PUSH32(esp, 0); sub_00417E30(); /* call 0x00417E30 */

loc_0041969F: ;
    eax = MEM32(ebp + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(esp + 0x56C);
    if (TEST_Z(eax, eax)) goto loc_00419736; /* je: equal / zero */

loc_004196B1: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00419736; /* je: equal / zero */

loc_004196B8: ;
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    eax = 0x10;
    ecx = edi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_004196C8: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_004196D3: ;
    ecx = eax;
    PUSH32(esp, 1);
    eax = 0x10;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_004196E1: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    eax = 0x11;
    ecx = edi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_004196F2: ;
    eax = MEM32(ebp);
    esp = esp + 8;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004196FD: ;
    ecx = eax;
    PUSH32(esp, esi);
    eax = 0x11;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_0041970A: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    eax = 0x12;
    ecx = edi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_0041971B: ;
    edx = MEM32(ebp);
    esp = esp + 8;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00419726: ;
    ecx = eax;
    PUSH32(esp, esi);
    eax = 0x12;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_00419733: ;
    esp = esp + 4;

loc_00419736: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0041973E: ;
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041978A; /* je: equal / zero */

loc_00419749: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0x370);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419760: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041978A; /* je: equal / zero */

loc_0041976C: ;
    (void)0; /* cmp esi, MEM32(0x84BE64) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BE64))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646394);
    PUSH32(esp, 0x371);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419787: ;
    esp = esp + 0x10;

loc_0041978A: ;
    eax = MEM32(0x84BE60);
    if (CMP_LE(MEM32(eax + esi * 4), 0)) goto loc_0041988D; /* jle: less or equal (signed <=) */

loc_00419799: ;
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    eax = 0x23;
    ecx = edi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_004197A9: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_004197B4: ;
    ecx = eax;
    PUSH32(esp, 1);
    eax = 0x23;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_004197C2: ;
    eax = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004197CD: ;
    esi = eax;
    PUSH32(esp, 0); sub_00417300(); /* call 0x00417300 */

loc_004197D4: ;
    PUSH32(esp, eax);
    eax = 0x24;
    ecx = edi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_004197E1: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_004197EC: ;
    esi = eax;
    PUSH32(esp, 0); sub_00417300(); /* call 0x00417300 */

loc_004197F3: ;
    esi = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004197FD: ;
    ecx = eax;
    PUSH32(esp, esi);
    eax = 0x24;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_0041980A: ;
    eax = MEM32(ebp + 0x20);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0041988D; /* je: equal / zero */

loc_00419814: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0041988D; /* je: equal / zero */

loc_0041981B: ;
    PUSH32(esp, 1);
    eax = 0x25;
    ecx = edi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419829: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00419834: ;
    ecx = eax;
    PUSH32(esp, 1);
    eax = 0x25;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_00419842: ;
    eax = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0041984D: ;
    esi = eax;
    PUSH32(esp, 0); sub_00417300(); /* call 0x00417300 */

loc_00419854: ;
    PUSH32(esp, eax);
    eax = 0x26;
    ecx = edi;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419861: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0041986C: ;
    esi = eax;
    PUSH32(esp, 0); sub_00417300(); /* call 0x00417300 */

loc_00419873: ;
    esi = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0041987D: ;
    ecx = eax;
    PUSH32(esp, esi);
    eax = 0x26;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_0041988A: ;
    esp = esp + 4;

loc_0041988D: ;
    eax = MEM32(esp + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_004198B6; /* je: equal / zero */

loc_00419895: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0041989D: ;
    ecx = MEM32(0x84BEAC);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + ecx + 0x64);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0); sub_00417260(); /* call 0x00417260 */

loc_004198B3: ;
    esp = esp + 4;

loc_004198B6: ;
    edx = MEM32(0x75B8F4);
    eax = MEM32(0x75B8F8);
    ecx = edx + eax * 8;
    edx = MEM32(0x75B90C);
    eax = MEM32(0x75B910);
    MEM32(esp + 0x10) = ecx;
    ecx = edx + eax * 8;
    MEM32(esp + 0x18) = ecx;
    goto loc_004190B1;

loc_004198DF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_004198E5: ;
    ecx = 0; /* xor self */
    goto loc_004198F1;

loc_004198E9: ;
    ebx = MEM32(esp + 0x20);

loc_004198ED: ;
    ecx = MEM32(esp + 0x1C);

loc_004198F1: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 0x2C);
    MEM32(0x758630) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00419911; /* je: equal / zero */

loc_004198FE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00419904: ;
    eax = MEM32(0x84BEAC);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + eax + 0x60) = MEM32(ecx + eax + 0x60) + 1;

loc_00419911: ;
    eax = MEM32(esp + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_00419E81; /* je: equal / zero */

loc_0041991D: ;
    ebp = MEM32(esp + 0x10);
    ebp = ebp + 7;
    ebp = ebp >> 3;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x48) = ebp;
    if (TEST_Z(ebx, ebx)) goto loc_0041993F; /* je: equal / zero */

loc_0041992F: ;
    PUSH32(esp, 0x10);
    eax = ebp;
    esi = esp + 0x34;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0041993C: ;
    esp = esp + 4;

loc_0041993F: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(0x75B904);
    esi = edi;
    esi = esi >> 3;
    eax = esi * 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ebx = esp + 0x38;
    edi = edi - eax;
    PUSH32(esp, 0); sub_0041DF20(); /* call 0x0041DF20 */

loc_00419962: ;
    esp = esp + 8;
    if (CMP_BE(edi & edi, 0)) goto loc_0041998F; /* jbe: below or equal (unsigned <=) */

loc_00419969: ;
    MEM32(0x75B8F8) = esi;
    PUSH32(esp, edi);
    esi = 0x75B8F4;
    MEM32(0x75B8F4) = 0;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00419984: ;
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0041998C: ;
    esp = esp + 8;

loc_0041998F: ;
    ecx = MEM32(0x84BE80);
    if (TEST_Z(ecx, ecx)) goto loc_004199C9; /* je: equal / zero */

loc_00419999: ;
    eax = MEM32(esp + 0x30);
    eax = eax & 7;
    if (0) goto loc_004199C9; /* jbe: below or equal (unsigned <=) */

loc_004199A2: ;
    edx = 8;
    edx = edx - eax;
    if (CMP_A(MEM32(0x84BE8C), edx)) goto loc_004199C9; /* ja: above (unsigned >) */

loc_004199B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004199B3: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_004199C1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_004199C9: ;
    eax = MEM32(esp + 0x30);
    eax = eax & 7;
    MEM32(esp + 0x1C) = eax;
    if (0) goto loc_004199F2; /* jbe: below or equal (unsigned <=) */

loc_004199D6: ;
    ecx = 8;
    ecx = ecx - eax;
    eax = ecx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    esi = esp + 0x34;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_004199EF: ;
    esp = esp + 4;

loc_004199F2: ;
    edi = MEM32(esp + 0x20);
    if (TEST_Z(edi, edi)) goto loc_00419A84; /* je: equal / zero */

loc_004199FE: ;
    ebp = MEM32(esp + 0x18);
    eax = MEM32(0x75B91C);
    esi = ebp;
    esi = esi >> 3;
    edx = esi * 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebx = esp + 0x38;
    ebp = ebp - edx;
    PUSH32(esp, 0); sub_0041DF20(); /* call 0x0041DF20 */

loc_00419A20: ;
    esp = esp + 8;
    if (CMP_BE(ebp & ebp, 0)) goto loc_00419A4D; /* jbe: below or equal (unsigned <=) */

loc_00419A27: ;
    MEM32(0x75B910) = esi;
    PUSH32(esp, ebp);
    esi = 0x75B90C;
    MEM32(0x75B90C) = 0;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00419A42: ;
    PUSH32(esp, ebp);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00419A4A: ;
    esp = esp + 8;

loc_00419A4D: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00419AB9; /* je: equal / zero */

loc_00419A56: ;
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x34);
    ecx = ecx + edx * 8 + 0x10;
    edx = MEM32(esp + 0x30);
    edx = edx + esi * 8;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, 0x646A30);
    SET_LO8(ecx, (CMP_EQ(edx, ecx)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x701);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    goto loc_00419AB4;

loc_00419A84: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00419AB9; /* je: equal / zero */

loc_00419A8D: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    edx = ecx + edx * 8;
    ecx = ebp * 8;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, 0x6469F4);
    SET_LO8(edx, (CMP_EQ(edx, ecx)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x705);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);

loc_00419AB4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419AB6: ;
    esp = esp + 0x10;

loc_00419AB9: ;
    esi = MEM32(esp + 0x5C);
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = MEM32(esp + 0x56C);
    if (TEST_Z(esi, esi)) goto loc_00419BDD; /* je: equal / zero */

loc_00419ACC: ;
    /* nop */

loc_00419AD0: ;
    edx = MEM32(esi + 0x24);
    edi = MEM32(esp + 0x28);
    edi = edi - edx;
    PUSH32(esp, edi);
    ebx = 1;
    eax = 0x2B;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419AEB: ;
    eax = MEM32(esi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00419AF6: ;
    ecx = eax;
    eax = 0x2B;
    PUSH32(esp, 0); sub_0041B610(); /* call 0x0041B610 */

loc_00419B02: ;
    esp = esp + 4;
    edi = esp + 0x5C;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_00419B0E: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00419BC5; /* je: equal / zero */

loc_00419B19: ;
    if (CMP_L(MEM32(eax), 0)) goto loc_00419BC5; /* jl: less (signed <) */

loc_00419B22: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_004169E0(); /* call 0x004169E0 */

loc_00419B2E: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00419B59; /* je: equal / zero */

loc_00419B37: ;
    edx = MEM32(esi + 0x20);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419B51: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00419B59: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0x10);
    edx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 0x10) = edx;
    if (TEST_Z(eax, eax)) goto loc_00419B84; /* je: equal / zero */

loc_00419B67: ;
    edi = MEM32(esi + 0x20);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6465E4);
    PUSH32(esp, 0xEB);
    PUSH32(esp, 0x6465D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419B81: ;
    esp = esp + 0x10;

loc_00419B84: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x28);
    edx = edx + ecx;
    MEM32(eax + 4) = edx;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + 8);
    if (TEST_S(edx, edx)) goto loc_00419BAF; /* jl: less (signed <) */

loc_00419B9C: ;
    edx = eax;
    eax = MEM32(edx + 0xC);
    if (CMP_GE(eax & eax, 0)) goto loc_00419BAF; /* jge: greater or equal (signed >=) */

loc_00419BA5: ;
    eax = edx;
    edx = MEM32(eax + 8);
    edx = edx + ecx;
    MEM32(eax + 0xC) = edx;

loc_00419BAF: ;
    eax = MEM32(0x84BEAC);
    ecx = MEM32(esp + 0x14);
    ecx = ecx + eax + 0x3C;
    eax = esi;
    PUSH32(esp, 0); sub_00417EC0(); /* call 0x00417EC0 */

loc_00419BC3: ;
    goto loc_00419BCD;

loc_00419BC5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00419BCD: ;
    esi = MEM32(esp + 0x5C);
    if (TEST_NZ(esi, esi)) goto loc_00419AD0; /* jne: not equal / not zero */

loc_00419BD9: ;
    edi = MEM32(esp + 0x20);

loc_00419BDD: ;
    eax = MEM32(0x84BE90);
    if (TEST_Z(eax, eax)) goto loc_00419BF1; /* je: equal / zero */

loc_00419BE6: ;
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419BEE: ;
    esp = esp + 8;

loc_00419BF1: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x34);
    eax = 0; /* xor self */
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esp + 0x30);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    eax = eax + ecx;
    (void)0; /* cmp eax, MEM32(esp + 0x3C) - flags set for next jcc */
    MEM32(esp + 0x54) = eax;
    if (CMP_B(eax, MEM32(esp + 0x3C))) goto loc_00419C47; /* jb: below (unsigned <) */

loc_00419C14: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00419C33; /* je: equal / zero */

loc_00419C1D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6469B0);
    PUSH32(esp, 0x773);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419C30: ;
    esp = esp + 0x10;

loc_00419C33: ;
    eax = MEM32(0x84BE88);
    if (TEST_Z(eax, eax)) goto loc_00419C47; /* je: equal / zero */

loc_00419C3C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646990);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419C44: ;
    esp = esp + 8;

loc_00419C47: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(0x84BEAC);
    eax = MEM32(ebx + edx + 0xC);
    esi = MEM32(0x758628);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) esi = MEM32(0x758624); /* cmove */
    if (TEST_Z(eax, eax)) goto loc_00419C8C; /* je: equal / zero */

loc_00419C6D: ;
    (void)0; /* cmp MEM32(0x758638), 0xFFFFFFFEu - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x758638), 0xFFFFFFFEu)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646968);
    PUSH32(esp, 0x788);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419C89: ;
    esp = esp + 0x10;

loc_00419C8C: ;
    edx = MEM32(0x84BEAC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    eax = ebx + edx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048D7BC(); /* call 0x0048D7BC */

loc_00419CB1: ;
    if (TEST_NZ(eax, eax)) goto loc_00419D80; /* jne: not equal / not zero */

loc_00419CB9: ;
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419CC4: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x38);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 2;
    esi = eax;
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    ecx = ebp;
    MEM32(esp + 0x4C) = esi;
    eax = eax - esi;
    eax = eax + edi;
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419CF5: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    eax = 2;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419D06: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    eax = 3;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419D17: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = 4;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419D28: ;
    edi = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    ecx = ecx - esi;
    ecx = ecx + eax;
    edi = ecx;
    esi = 0x29;
    eax = ebp;
    PUSH32(esp, 0); sub_0041B6E0(); /* call 0x0041B6E0 */

loc_00419D49: ;
    ebx = MEM32(esp + 0x44);
    edi = MEM32(esp + 0x5C);
    esi = MEM32(esp + 0x48);
    edx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    ebx = 1;
    eax = 0x2A;
    ecx = ebp;
    edx = edx - edi;
    edx = edx + esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419D72: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x558;
    esp += 4; return; /* ret */

loc_00419D80: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00419DA5; /* je: equal / zero */

loc_00419D8A: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646944);
    PUSH32(esp, 0x79A);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00419DA2: ;
    esp = esp + 0x10;

loc_00419DA5: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_00419DAA: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0x2751 - flags set for next jcc */
    ecx = ebp;
    PUSH32(esp, 1);
    if (CMP_NE(eax, 0x2751)) goto loc_00419E16; /* jne: not equal / not zero */

loc_00419DB7: ;
    eax = 5;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419DC1: ;
    eax = MEM32(esp + 0x34);
    esi = MEM32(esp + 0x38);
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = 0; /* xor self */
    edi = edi & 2;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    eax = 6;
    ecx = ecx - edi;
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419DE8: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = 7;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419DF9: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = 8;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419E0A: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    eax = 9;
    goto loc_00419E75;

loc_00419E16: ;
    eax = 0xA;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419E20: ;
    eax = MEM32(esp + 0x34);
    esi = MEM32(esp + 0x38);
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = 0; /* xor self */
    edi = edi & 2;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    ebx = 0; /* xor self */
    eax = 0xB;
    ecx = ebp;
    edx = edx - edi;
    edx = edx + esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419E49: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = 0xC;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419E5A: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    eax = 0xD;
    ecx = ebp;
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419E6B: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = 0xE;

loc_00419E75: ;
    ecx = ebp;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0041B4E0(); /* call 0x0041B4E0 */

loc_00419E7E: ;
    esp = esp + 0x14;

loc_00419E81: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);

loc_00419E84: ;
    POP32(esp, esi);
    esp = esp + 0x558;
    esp += 4; return; /* ret */

}

/**
 * sub_00419E90
 * Original: 0x00419E90 - 0x00419EC0 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00419E90: ;
    eax = MEM32(0x84BEB0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00419EBE; /* jle: less or equal (signed <=) */

loc_00419E9C: ;
    /* nop */

loc_00419EA0: ;
    eax = esi;
    PUSH32(esp, 0); sub_004188E0(); /* call 0x004188E0 */

loc_00419EA7: ;
    if (TEST_Z(eax, eax)) goto loc_00419EB4; /* je: equal / zero */

loc_00419EAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00418DD0(); /* call 0x00418DD0 */

loc_00419EB1: ;
    esp = esp + 4;

loc_00419EB4: ;
    eax = MEM32(0x84BEB0);
    esi++;
    if (CMP_L(esi, eax)) goto loc_00419EA0; /* jl: less (signed <) */

loc_00419EBE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00419EC0
 * Original: 0x00419EC0 - 0x00419F96 (214 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00419EC0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00419F0D; /* je: equal / zero */

loc_00419ECC: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0x7DD);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419EE3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00419F0D; /* je: equal / zero */

loc_00419EEF: ;
    (void)0; /* cmp edi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0x7DE);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419F0A: ;
    esp = esp + 0x10;

loc_00419F0D: ;
    eax = MEM32(0x84BEAC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x11A8);
    if (CMP_EQ(MEM32(edi + eax), 0)) goto loc_00419F94; /* je: equal / zero */

loc_00419F1E: ;
    ecx = MEM32(edi + eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_00419F94; /* je: equal / zero */

loc_00419F26: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00419F2E: ;
    esi = eax;
    PUSH32(esp, 0); sub_004178B0(); /* call 0x004178B0 */

loc_00419F35: ;
    if (TEST_Z(eax, eax)) goto loc_00419F49; /* je: equal / zero */

loc_00419F39: ;
    eax = MEM32(ebx + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00419F45; /* je: equal / zero */

loc_00419F40: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_00419F49; /* jge: greater or equal (signed >=) */

loc_00419F45: ;
    ecx = 0; /* xor self */
    goto loc_00419F4E;

loc_00419F49: ;
    ecx = 1;

loc_00419F4E: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00419F71; /* je: equal / zero */

loc_00419F57: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6468F0);
    PUSH32(esp, 0x7E5);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00419F6E: ;
    esp = esp + 0x10;

loc_00419F71: ;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_00419F76: ;
    edx = MEM32(ebx);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x30), _icall_esp); /* indirect call */
    }

loc_00419F80: ;
    eax = MEM32(0x84BEAC);
    ecx = edi + eax + 0x30;
    eax = ebx;
    PUSH32(esp, 0); sub_00417F40(); /* call 0x00417F40 */

loc_00419F90: ;
    MEM32(ebx + 0x24) = esi;
    POP32(esp, esi);

loc_00419F94: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00419FA0
 * Original: 0x00419FA0 - 0x0041A07A (218 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00419FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00419FA0: ;
    esp = esp - 0x55C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x574);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x74;
    ecx = eax;
    edx = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x38) = ecx;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x50) = edx;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x584);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ebp = 1;
    PUSH32(esp, ebp);
    ecx = esp + 0x5C;
    esi = 0x500;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x44) = 0x10;
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0); sub_0048D79E(); /* call 0x0048D79E */

loc_0041A01A: ;
    if (CMP_EQ(eax, ebx)) { sub_0041A07A(); return; } /* je: equal / zero */

loc_0041A01E: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_0041A043; /* je: equal / zero */

loc_0041A028: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6468C4);
    PUSH32(esp, 0x863);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041A040: ;
    esp = esp + 0x10;

loc_0041A043: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_0041A048: ;
    if (CMP_EQ(eax, 0x2733)) goto loc_0041A06D; /* je: equal / zero */

loc_0041A04F: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, ebx)) goto loc_0041A06D; /* je: equal / zero */

loc_0041A058: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6468A8);
    PUSH32(esp, 0x86A);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041A06A: ;
    esp = esp + 0x10;

loc_0041A06D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x55C;
    esp += 4; return; /* ret */

}

/**
 * sub_0041ADB0
 * Original: 0x0041ADB0 - 0x0041AF08 (344 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041ADB0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0041ADB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0041ADBF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0041ADCD: ;
    edi = MEM32(0x828B48);
    esi = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - edi;
    PUSH32(esp, 0x3E8);
    edx = edx - esi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0041ADEB: ;
    esi = eax;
    eax = MEM32(0x758624);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0041AE5A; /* je: equal / zero */

loc_0041ADF7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00419FA0(); /* call 0x00419FA0 */

loc_0041ADFF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0041AE5A; /* je: equal / zero */

loc_0041AE06: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0041AE13: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0041AE21: ;
    ecx = MEM32(0x828B48);
    edi = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - ecx;
    PUSH32(esp, 0x3E8);
    edx = edx - edi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0041AE3F: ;
    eax = eax - esi;
    if (CMP_AE(eax, 0x64)) goto loc_0041AE5A; /* jae: above or equal (unsigned >=) */

loc_0041AE46: ;
    eax = MEM32(0x758624);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00419FA0(); /* call 0x00419FA0 */

loc_0041AE53: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0041AE06; /* jne: not equal / not zero */

loc_0041AE5A: ;
    edx = MEM32(0x758628);
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_0041AF05; /* je: equal / zero */

loc_0041AE69: ;
    ecx = MEM32(0x84BEB0);
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0041AF05; /* jle: less or equal (signed <=) */

loc_0041AE79: ;
    eax = MEM32(0x84BEAC);
    PUSH32(esp, ebx);
    /* nop */

loc_0041AE80: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0041AE8C; /* je: equal / zero */

loc_0041AE85: ;
    ebx = MEM32(eax + 0xC);
    if (TEST_NZ(ebx, ebx)) goto loc_0041AE9A; /* jne: not equal / not zero */

loc_0041AE8C: ;
    edi++;
    eax = eax + 0x11A8;
    if (CMP_L(edi, ecx)) goto loc_0041AE80; /* jl: less (signed <) */

loc_0041AE96: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0041AE9A: ;
    if (TEST_S(edi, edi)) goto loc_0041AF04; /* jl: less (signed <) */

loc_0041AE9E: ;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00419FA0(); /* call 0x00419FA0 */

loc_0041AEA5: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0041AF04; /* je: equal / zero */

loc_0041AEAC: ;
    /* nop */

loc_0041AEB0: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0041AEBD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0041AECB: ;
    ecx = MEM32(0x828B48);
    ebx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - ecx;
    PUSH32(esp, 0x3E8);
    edx = edx - ebx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0041AEE9: ;
    eax = eax - esi;
    if (CMP_AE(eax, 0x64)) goto loc_0041AF04; /* jae: above or equal (unsigned >=) */

loc_0041AEF0: ;
    ecx = MEM32(0x758628);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00419FA0(); /* call 0x00419FA0 */

loc_0041AEFD: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0041AEB0; /* jne: not equal / not zero */

loc_0041AF04: ;
    POP32(esp, ebx);

loc_0041AF05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041AF10
 * Original: 0x0041AF10 - 0x0041AF4C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AF10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041AF10: ;
    PUSH32(esp, edi);
    edi = MEM32(0x84BEB0);
    if (CMP_LE(edi & edi, 0)) goto loc_0041AF40; /* jle: less or equal (signed <=) */

loc_0041AF1B: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84BEAC);
    esi = esi + 0x54;

loc_0041AF25: ;
    eax = MEM32(esi + -84);
    if (TEST_Z(eax, eax)) goto loc_0041AF36; /* je: equal / zero */

loc_0041AF2C: ;
    edx = esi + -12;
    ecx = esi;
    PUSH32(esp, 0); sub_00417F70(); /* call 0x00417F70 */

loc_0041AF36: ;
    esi = esi + 0x11A8;
    edi--;
    if ((edi != 0)) goto loc_0041AF25; /* jne: not equal / not zero */

loc_0041AF3F: ;
    POP32(esp, esi);

loc_0041AF40: ;
    eax = MEM32(0x84BE74);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_0041AF4C(); return; } /* je: equal / zero */

loc_0041AF4A: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_0041AF50
 * Original: 0x0041AF50 - 0x0041AFE8 (152 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AF50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041AF50: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041AFD2; /* je: equal / zero */

loc_0041AF59: ;
    (void)0; /* cmp MEM32(esi), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(MEM32(esi), 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6467D4);
    PUSH32(esp, 0xA64);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041AF71: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041AFD2; /* je: equal / zero */

loc_0041AF7D: ;
    ecx = MEM32(0x84BEB0);
    edx = MEM32(esi);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(edx, ecx)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6467A4);
    PUSH32(esp, 0xA65);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041AF9C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041AFD2; /* je: equal / zero */

loc_0041AFA8: ;
    edx = MEM32(esi);
    ecx = MEM32(0x84BEAC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x11A8);
    (void)0; /* cmp MEM32(edx + ecx), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(edx + ecx), 0)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64676C);
    PUSH32(esp, 0xA66);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041AFCF: ;
    esp = esp + 0x10;

loc_0041AFD2: ;
    eax = MEM32(esi);
    ecx = MEM32(0x84BEAC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x11A8);
    edx = MEM32(eax + ecx + 0x54);
    MEM32(esi + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0041AFF0
 * Original: 0x0041AFF0 - 0x0041B0C0 (208 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041AFF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041AFF0: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0041B09D; /* je: equal / zero */

loc_0041B000: ;
    edi = MEM32(ebx + 4);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646724);
    PUSH32(esp, 0xA7B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B01A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B09D; /* je: equal / zero */

loc_0041B026: ;
    (void)0; /* cmp MEM32(ebx), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(MEM32(ebx), 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6467D4);
    PUSH32(esp, 0xA7C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B03E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B09D; /* je: equal / zero */

loc_0041B04A: ;
    ecx = MEM32(ebx);
    (void)0; /* cmp ecx, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(ecx, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6467A4);
    PUSH32(esp, 0xA7D);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B067: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B09D; /* je: equal / zero */

loc_0041B073: ;
    ecx = MEM32(ebx);
    edx = MEM32(0x84BEAC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x11A8);
    (void)0; /* cmp MEM32(ecx + edx), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(ecx + edx), 0)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64676C);
    PUSH32(esp, 0xA7E);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B09A: ;
    esp = esp + 0x10;

loc_0041B09D: ;
    edx = MEM32(ebx);
    eax = MEM32(0x84BEAC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x11A8);
    esi = MEM32(ebx + 4);
    ebp = MEM32(esi + 0x18);
    edi = edx + eax + 0x54;
    PUSH32(esp, 0); sub_00416800(); /* call 0x00416800 */

loc_0041B0B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 4) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B0C0
 * Original: 0x0041B0C0 - 0x0041B0CD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B0C0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041B0C0: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    eax = esi + 0x958;
    g_seh_ebp = ebp; sub_0041B0D0(); return; /* tail jmp 0x0041B0D0 */

}

/**
 * sub_0041B100
 * Original: 0x0041B100 - 0x0041B149 (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B100(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041B100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x829388;
    PUSH32(esp, 0); sub_0041B0C0(); /* call 0x0041B0C0 */

loc_0041B10C: ;
    eax = MEM32(0x84BEB0);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0041B128; /* jle: less or equal (signed <=) */

loc_0041B117: ;
    eax = esi;
    PUSH32(esp, 0); sub_0041B150(); /* call 0x0041B150 */

loc_0041B11E: ;
    eax = MEM32(0x84BEB0);
    esi++;
    if (CMP_L(esi, eax)) goto loc_0041B117; /* jl: less (signed <) */

loc_0041B128: ;
    edi = MEM32(0x84BECC);
    if (CMP_LE(edi & edi, 0)) goto loc_0041B146; /* jle: less or equal (signed <=) */

loc_0041B132: ;
    esi = MEM32(0x84BED0);

loc_0041B138: ;
    PUSH32(esp, 0); sub_0041B0C0(); /* call 0x0041B0C0 */

loc_0041B13D: ;
    esi = esi + 0x1140;
    edi--;
    if ((edi != 0)) goto loc_0041B138; /* jne: not equal / not zero */

loc_0041B146: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B150
 * Original: 0x0041B150 - 0x0041B1B3 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B150(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041B150: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041B19D; /* je: equal / zero */

loc_0041B15C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0xB08);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B173: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B19D; /* je: equal / zero */

loc_0041B17F: ;
    (void)0; /* cmp esi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0xB09);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B19A: ;
    esp = esp + 0x10;

loc_0041B19D: ;
    eax = MEM32(0x84BEAC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x11A8);
    esi = esi + eax + 0x68;
    PUSH32(esp, 0); sub_0041B0C0(); /* call 0x0041B0C0 */

loc_0041B1B1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B1C0
 * Original: 0x0041B1C0 - 0x0041B223 (99 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B1C0(void)
{
    int _cf = 0; /* carry flag */

loc_0041B1C0: ;
    PUSH32(esp, 0); sub_0041B100(); /* call 0x0041B100 */

loc_0041B1C5: ;
    MEM32(0x84BEC0) = 0;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0041B1DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0041B1EA: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0041B206: ;
    ecx = eax;
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 6;
    MEM32(0x84BEC4) = edx;
    MEM32(0x84BEBC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0041B230
 * Original: 0x0041B230 - 0x0041B32A (250 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B230(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041B230: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x84BECC) = esi;
    if (TEST_Z(eax, eax)) goto loc_0041B261; /* je: equal / zero */

loc_0041B244: ;
    edi = MEM32(0x84BEE0);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E40);
    PUSH32(esp, 0x51);
    PUSH32(esp, 0x646E80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B25E: ;
    esp = esp + 0x10;

loc_0041B261: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1140);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BEE0), _icall_esp); /* indirect call */
    }

loc_0041B270: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 4;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x84BED0) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0041B2C2; /* je: equal / zero */

loc_0041B282: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646704);
    PUSH32(esp, 0xB27);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041B299: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B2C2; /* je: equal / zero */

loc_0041B2A5: ;
    edi = MEM32(0x84BEE0);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646E40);
    PUSH32(esp, 0x51);
    PUSH32(esp, 0x646E80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B2BF: ;
    esp = esp + 0x10;

loc_0041B2C2: ;
    edx = esi + esi * 2;
    edx = edx << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84BEE0), _icall_esp); /* indirect call */
    }

loc_0041B2CF: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 4;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x84BED4) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0041B300; /* je: equal / zero */

loc_0041B2E1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6466E0);
    PUSH32(esp, 0xB2A);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041B2F8: ;
    eax = MEM32(0x84BED4);
    esp = esp + 0x10;

loc_0041B300: ;
    ebx = MEM32(0x84BECC);
    if (CMP_LE(ebx & ebx, 0)) goto loc_0041B326; /* jle: less or equal (signed <=) */

loc_0041B30A: ;
    esi = MEM32(0x84BED0);
    edi = eax;

loc_0041B312: ;
    PUSH32(esp, 0); sub_0041B0C0(); /* call 0x0041B0C0 */

loc_0041B317: ;
    MEM8(edi) = 0;
    esi = esi + 0x1140;
    edi = edi + 0xC;
    ebx--;
    if ((ebx != 0)) goto loc_0041B312; /* jne: not equal / not zero */

loc_0041B326: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B330
 * Original: 0x0041B330 - 0x0041B3B4 (132 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B330(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041B330: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041B37D; /* je: equal / zero */

loc_0041B33C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xB3C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B353: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B37D; /* je: equal / zero */

loc_0041B35F: ;
    (void)0; /* cmp esi, MEM32(0x84BECC) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BECC))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6466B4);
    PUSH32(esp, 0xB3D);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B37A: ;
    esp = esp + 0x10;

loc_0041B37D: ;
    if (TEST_S(esi, esi)) goto loc_0041B3B2; /* jl: less (signed <) */

loc_0041B381: ;
    if (CMP_GE(esi, MEM32(0x84BECC))) goto loc_0041B3B2; /* jge: greater or equal (signed >=) */

loc_0041B389: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x84BED4);
    esi = esi + esi * 2;
    PUSH32(esp, 0xB);
    esi = esi << 2;
    PUSH32(esp, eax);
    edx = esi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0041B3A5: ;
    eax = MEM32(0x84BED4);
    esp = esp + 0xC;
    MEM8(esi + eax + 0xB) = 0;

loc_0041B3B2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B3C0
 * Original: 0x0041B3C0 - 0x0041B4DB (283 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B3C0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0041B3C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    /* TODO: rdtsc  */
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0041B3D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0041B3DD: ;
    ecx = MEM32(0x828B48);
    edi = MEM32(0x828B4C);
    PUSH32(esp, ebx);
    eax = eax - ecx;
    PUSH32(esp, 0x3E8);
    edx = edx - edi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0041B3FA: ;
    ecx = eax;
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(0x84BEC4);
    ecx = edx;
    ecx = ecx >> 6;
    if (CMP_EQ(ecx, eax)) goto loc_0041B4D8; /* je: equal / zero */

loc_0041B415: ;
    eax = MEM32(0x84BEC0);
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(0x84BEC4) = ecx;
    ecx = 0x2E;
    MEM32(0x84BEC0) = edx;
    eax = edx * 4 + 0x829CE0;
    /* nop */

loc_0041B440: ;
    MEM32(eax + -2024) = ebx;
    MEM32(eax) = ebx;
    eax = eax + 0x2C;
    ecx--;
    if ((ecx != 0)) goto loc_0041B440; /* jne: not equal / not zero */

loc_0041B44E: ;
    eax = MEM32(0x84BEB0);
    if (CMP_LE(eax, ebx)) goto loc_0041B497; /* jle: less or equal (signed <=) */

loc_0041B457: ;
    ecx = MEM32(0x84BEAC);
    esi = ecx + edx * 4 + 0x9C0;
    edi = eax;
    goto loc_0041B470;

    /* nop */
    /* nop */

loc_0041B470: ;
    eax = esi;
    ecx = 0x2E;
    goto loc_0041B480;

    /* nop */

loc_0041B480: ;
    MEM32(eax + -2024) = ebx;
    MEM32(eax) = ebx;
    eax = eax + 0x2C;
    ecx--;
    if ((ecx != 0)) goto loc_0041B480; /* jne: not equal / not zero */

loc_0041B48E: ;
    esi = esi + 0x11A8;
    edi--;
    if ((edi != 0)) goto loc_0041B470; /* jne: not equal / not zero */

loc_0041B497: ;
    eax = MEM32(0x84BECC);
    if (CMP_LE(eax, ebx)) goto loc_0041B4D7; /* jle: less or equal (signed <=) */

loc_0041B4A0: ;
    ecx = MEM32(0x84BED0);
    edx = ecx + edx * 4 + 0x958;
    esi = eax;
    /* nop */

loc_0041B4B0: ;
    eax = edx;
    ecx = 0x2E;
    goto loc_0041B4C0;

    /* nop */

loc_0041B4C0: ;
    MEM32(eax + -2024) = ebx;
    MEM32(eax) = ebx;
    eax = eax + 0x2C;
    ecx--;
    if ((ecx != 0)) goto loc_0041B4C0; /* jne: not equal / not zero */

loc_0041B4CE: ;
    edx = edx + 0x1140;
    esi--;
    if ((esi != 0)) goto loc_0041B4B0; /* jne: not equal / not zero */

loc_0041B4D7: ;
    POP32(esp, esi);

loc_0041B4D8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B4E0
 * Original: 0x0041B4E0 - 0x0041B601 (289 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B4E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041B4E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(eax, eax)) goto loc_0041B580; /* je: equal / zero */

loc_0041B4F8: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0xBC1);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B50F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B580; /* je: equal / zero */

loc_0041B51B: ;
    (void)0; /* cmp edi, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0xBC2);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B536: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B580; /* je: equal / zero */

loc_0041B542: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xBC3);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B559: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B580; /* je: equal / zero */

loc_0041B565: ;
    (void)0; /* cmp esi, 0x2E - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 0x2E)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xBC4);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B57D: ;
    esp = esp + 0x10;

loc_0041B580: ;
    eax = MEM32(0x84BEBC);
    if (TEST_Z(eax, eax)) goto loc_0041B5FD; /* je: equal / zero */

loc_0041B589: ;
    eax = MEM32(0x84BEAC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x11A8);
    eax = edi + eax + 0x68;
    ecx = MEM32(eax + esi * 4 + 0xB8);
    edx = MEM32(eax + esi * 4);
    ecx = ecx + ebx;
    MEM32(eax + esi * 4 + 0xB8) = ecx;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB);
    edx = edx + ebp;
    MEM32(eax + esi * 4) = edx;
    edx = MEM32(0x84BEC0);
    ecx = ecx + edx;
    MEM32(eax + ecx * 4 + 0x170) = MEM32(eax + ecx * 4 + 0x170) + ebp;
    MEM32(eax + ecx * 4 + 0x958) = MEM32(eax + ecx * 4 + 0x958) + ebx;
    edi = MEM32(esi * 4 + 0x829388);
    eax = esi * 4 + 0x829440;
    edi = edi + ebp;
    MEM32(esi * 4 + 0x829388) = edi;
    MEM32(eax) = MEM32(eax) + ebx;
    edx = MEM32(ecx * 4 + 0x8294F8);
    eax = ecx * 4 + 0x829CE0;
    edx = edx + ebp;
    MEM32(ecx * 4 + 0x8294F8) = edx;
    MEM32(eax) = MEM32(eax) + ebx;

loc_0041B5FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B610
 * Original: 0x0041B610 - 0x0041B6DC (204 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041B610: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(eax, eax)) goto loc_0041B685; /* je: equal / zero */

loc_0041B624: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xBF4);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B63B: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B685; /* je: equal / zero */

loc_0041B647: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xBF5);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B65E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B685; /* je: equal / zero */

loc_0041B66A: ;
    (void)0; /* cmp esi, 0x2E - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, 0x2E)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xBF6);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B682: ;
    esp = esp + 0x10;

loc_0041B685: ;
    eax = MEM32(0x84BEBC);
    if (TEST_Z(eax, eax)) goto loc_0041B6D8; /* je: equal / zero */

loc_0041B68E: ;
    if (CMP_GE(edi, MEM32(0x84BECC))) goto loc_0041B6D8; /* jge: greater or equal (signed >=) */

loc_0041B696: ;
    edx = MEM32(0x84BED0);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1140);
    edi = edi + edx;
    edx = MEM32(0x84BEC0);
    eax = edi;
    ecx = MEM32(eax + esi * 4);
    edi = MEM32(eax + esi * 4 + 0xB8);
    ecx = ecx + ebp;
    MEM32(eax + esi * 4) = ecx;
    edi = edi + ebx;
    MEM32(eax + esi * 4 + 0xB8) = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB);
    ecx = esi + edx;
    MEM32(eax + ecx * 4 + 0x170) = MEM32(eax + ecx * 4 + 0x170) + ebp;
    MEM32(eax + ecx * 4 + 0x958) = MEM32(eax + ecx * 4 + 0x958) + ebx;

loc_0041B6D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B6E0
 * Original: 0x0041B6E0 - 0x0041B7F6 (278 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B6E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041B6E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    eax = MEM32(0x84BE58);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_0041B77B; /* je: equal / zero */

loc_0041B6F3: ;
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ebx, ebp)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646DA4);
    PUSH32(esp, 0xC1E);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B70A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebp)) goto loc_0041B77B; /* je: equal / zero */

loc_0041B716: ;
    (void)0; /* cmp ebx, MEM32(0x84BEB0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(ebx, MEM32(0x84BEB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646D7C);
    PUSH32(esp, 0xC1F);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B731: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebp)) goto loc_0041B77B; /* je: equal / zero */

loc_0041B73D: ;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi, ebp)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC20);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B754: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebp)) goto loc_0041B77B; /* je: equal / zero */

loc_0041B760: ;
    (void)0; /* cmp esi, 0x2E - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 0x2E)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC21);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B778: ;
    esp = esp + 0x10;

loc_0041B77B: ;
    if (CMP_EQ(MEM32(0x84BEBC), ebp)) goto loc_0041B7F3; /* je: equal / zero */

loc_0041B783: ;
    eax = MEM32(0x84BEAC);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x11A8);
    eax = ebx + eax + 0x68;
    if (CMP_LE(edi, MEM32(eax + esi * 4))) goto loc_0041B7A1; /* jle: less or equal (signed <=) */

loc_0041B797: ;
    MEM32(eax + esi * 4) = edi;
    MEM32(eax + esi * 4 + 0xB8) = ebp;

loc_0041B7A1: ;
    edx = MEM32(0x84BEC0);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB);
    ecx = ecx + edx;
    if (CMP_LE(edi, MEM32(eax + ecx * 4 + 0x170))) goto loc_0041B7C5; /* jle: less or equal (signed <=) */

loc_0041B7B7: ;
    MEM32(eax + ecx * 4 + 0x170) = edi;
    MEM32(eax + ecx * 4 + 0x958) = ebp;

loc_0041B7C5: ;
    if (CMP_LE(edi, MEM32(esi * 4 + 0x829388))) goto loc_0041B7DC; /* jle: less or equal (signed <=) */

loc_0041B7CE: ;
    MEM32(esi * 4 + 0x829388) = edi;
    MEM32(esi * 4 + 0x829440) = ebp;

loc_0041B7DC: ;
    if (CMP_LE(edi, MEM32(ecx * 4 + 0x8294F8))) goto loc_0041B7F3; /* jle: less or equal (signed <=) */

loc_0041B7E5: ;
    MEM32(ecx * 4 + 0x8294F8) = edi;
    MEM32(ecx * 4 + 0x829CE0) = ebp;

loc_0041B7F3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B800
 * Original: 0x0041B800 - 0x0041B8B8 (184 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041B800: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0041B853; /* je: equal / zero */

loc_0041B815: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC6E);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B82C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041B853; /* je: equal / zero */

loc_0041B838: ;
    (void)0; /* cmp esi, 0x2E - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 0x2E)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC6F);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B850: ;
    esp = esp + 0x10;

loc_0041B853: ;
    ebx = MEM32(0x84BEC0);
    eax = ebx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_EQ(edx, ebx)) goto loc_0041B8A2; /* je: equal / zero */

loc_0041B86C: ;
    edi = MEM32(esp + 0x18);
    edi = (uint32_t)((int32_t)edi * (int32_t)0xB);
    goto loc_0041B880;

loc_0041B875: ;
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_0041B880: ;
    eax = edi + edx + 0x5C;
    esi = esi + MEM32(ebp + eax * 4);
    eax = edi + edx + 0x256;
    ecx = ecx + MEM32(ebp + eax * 4);
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    if (CMP_NE(edx, ebx)) goto loc_0041B875; /* jne: not equal / not zero */

loc_0041B8A2: ;
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    POP32(esp, edi);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(ecx, 1)) goto loc_0041B8B7; /* jle: less or equal (signed <=) */

loc_0041B8AF: ;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041B8B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0041B8C0
 * Original: 0x0041B8C0 - 0x0041B914 (84 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B8C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0041B8C0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041B8E6; /* je: equal / zero */

loc_0041B8CC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xD33);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041B8E3: ;
    esp = esp + 0x10;

loc_0041B8E6: ;
    if (CMP_GE(esi, MEM32(0x84BECC))) { sub_0041B914(); return; } /* jge: greater or equal (signed >=) */

loc_0041B8EE: ;
    ecx = MEM32(0x84BED0);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1140);
    edx = MEM32(esp + 8);
    esi = esi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0041B800(); /* call 0x0041B800 */

loc_0041B907: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041B920
 * Original: 0x0041B920 - 0x0041BC72 (850 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041B920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0041B920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x120;
    eax = (int32_t)MEMF(ebp + 0x14); /* cvttss2si */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041B943: ;
    edx = MEM32(ebp + 0x24);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041B953: ;
    xmm1 = MEMF(ebp + 0x1C); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041B96B: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041B973: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041B97D: ;
    ecx = (int32_t)MEMF(ebp + 0x18); /* cvttss2si */
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041B992: ;
    eax = MEM32(ebp + 0x28);
    esp = esp + 0x18;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041B9A2: ;
    xmm1 = MEMF(ebp + 0x1C); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041B9BA: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041B9C2: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041B9CC: ;
    xmm3 = MEMF(ebp + 0x1C); /* movss */
    xmm5 = MEMF(ebp + 0x20); /* movss */
    xmm4 = MEMF(ebp + 0x24); /* movss */
    ecx = MEM32(0x84BEA4);
    xmm6 = MEMF(ebp + 0x28); /* movss */
    eax = edi + -1;
    xmm5 = xmm5 - xmm3; /* subss */
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm5; /* mulss */
    esp = esp + 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm2 = xmm4; /* movaps */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 - xmm6; /* subss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041BA89; /* je: equal / zero */

loc_0041BA3F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041BA5F: ;
    ecx = MEM32(0x84BEA4);
    xmm3 = MEMF(ebp + 0x1C); /* movss */
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm4 = MEMF(ebp + 0x24); /* movss */
    xmm6 = MEMF(ebp + 0x28); /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    esp = esp + 0x18;

loc_0041BA89: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041BAFE; /* je: equal / zero */

loc_0041BAB4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041BAD4: ;
    ecx = MEM32(0x84BEA4);
    xmm3 = MEMF(ebp + 0x1C); /* movss */
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm4 = MEMF(ebp + 0x24); /* movss */
    xmm6 = MEMF(ebp + 0x28); /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    esp = esp + 0x18;

loc_0041BAFE: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm6; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041BB59; /* je: equal / zero */

loc_0041BB1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041BB3A: ;
    ecx = MEM32(0x84BEA4);
    xmm3 = MEMF(ebp + 0x1C); /* movss */
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm4 = MEMF(ebp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    esp = esp + 0x18;

loc_0041BB59: ;
    xmm0 = MEMF(ebp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x14); /* subss */
    esi = MEM32(ebp + 0xC);
    xmm7 = xmm0; /* movaps */
    ebx = 0; /* xor self */
    MEMF(esp + 0x18) = xmm7; /* movss */

loc_0041BB71: ;
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(edx + esi * 4); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x14); /* subss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 / xmm7; /* divss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0041BB91; /* jbe: below or equal (unsigned <=) */

loc_0041BB8E: ;
    xmm0 = xmm6; /* movaps */

loc_0041BB91: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0041BB99; /* jbe: below or equal (unsigned <=) */

loc_0041BB96: ;
    xmm0 = xmm2; /* movaps */

loc_0041BB99: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0041BC5A; /* jle: less or equal (signed <=) */

loc_0041BBA1: ;
    eax = edi + esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(ebp + 8);
    xmm1 = MEMF(eax + edx * 4); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 / xmm7; /* divss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_0041BBC0; /* jbe: below or equal (unsigned <=) */

loc_0041BBBD: ;
    xmm1 = xmm6; /* movaps */

loc_0041BBC0: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_0041BBC8; /* jbe: below or equal (unsigned <=) */

loc_0041BBC5: ;
    xmm1 = xmm2; /* movaps */

loc_0041BBC8: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm6 = MEMF(esp + 0x24); /* movss */
    edx = ebx + -1;
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm7 = xmm7 / xmm6; /* divss */
    xmm7 = xmm7 + xmm3; /* addss */
    MEMF(esp + 8) = xmm7; /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm1 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 / xmm6; /* divss */
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0xC) = xmm7; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041BC5A; /* je: equal / zero */

loc_0041BC1B: ;
    eax = MEM32(ebp + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = eax;
    edx = edx >> 8;
    PUSH32(esp, edx);
    edx = eax;
    edx = edx >> 0x10;
    PUSH32(esp, edx);
    eax = eax >> 0x18;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041BC3B: ;
    ecx = MEM32(0x84BEA4);
    xmm3 = MEMF(ebp + 0x1C); /* movss */
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm4 = MEMF(ebp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    esp = esp + 0x18;

loc_0041BC5A: ;
    if (CMP_EQ(esi, MEM32(ebp + 0x10))) { sub_0041BC72(); return; } /* je: equal / zero */

loc_0041BC5F: ;
    esi++;
    if (CMP_L(esi, edi)) goto loc_0041BC66; /* jl: less (signed <) */

loc_0041BC64: ;
    esi = 0; /* xor self */

loc_0041BC66: ;
    xmm7 = MEMF(esp + 0x18); /* movss */
    ebx++;
    goto loc_0041BB71;

}

/**
 * sub_0041BC80
 * Original: 0x0041BC80 - 0x0041C0AF (1071 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041BC80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0041BC80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x138;
    eax = (int32_t)MEMF(ebp + 0x18); /* cvttss2si */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041BCA3: ;
    edx = MEM32(ebp + 0x28);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041BCB3: ;
    xmm1 = MEMF(ebp + 0x20); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041BCCB: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041BCD3: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041BCDD: ;
    ecx = (int32_t)MEMF(ebp + 0x1C); /* cvttss2si */
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041BCF2: ;
    eax = MEM32(ebp + 0x2C);
    esp = esp + 0x18;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041BD02: ;
    xmm1 = MEMF(ebp + 0x20); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041BD1A: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041BD22: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041BD2C: ;
    xmm2 = MEMF(ebp + 0x20); /* movss */
    xmm1 = MEMF(ebp + 0x24); /* movss */
    xmm5 = MEMF(ebp + 0x28); /* movss */
    ecx = MEM32(0x84BEA4);
    xmm4 = MEMF(ebp + 0x2C); /* movss */
    eax = ebx + -1;
    xmm1 = xmm1 - xmm2; /* subss */
    xmm6 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    esp = esp + 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm3 = xmm5; /* movaps */
    xmm0 = xmm0 / xmm6; /* divss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm3 = xmm3 - xmm4; /* subss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041BDE3; /* je: equal / zero */

loc_0041BD9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041BDBF: ;
    ecx = MEM32(0x84BEA4);
    xmm2 = MEMF(ebp + 0x20); /* movss */
    xmm5 = MEMF(ebp + 0x28); /* movss */
    xmm4 = MEMF(ebp + 0x2C); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x18;

loc_0041BDE3: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041BE52; /* je: equal / zero */

loc_0041BE0E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041BE2E: ;
    ecx = MEM32(0x84BEA4);
    xmm2 = MEMF(ebp + 0x20); /* movss */
    xmm5 = MEMF(ebp + 0x28); /* movss */
    xmm4 = MEMF(ebp + 0x2C); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x18;

loc_0041BE52: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041BEA2; /* je: equal / zero */

loc_0041BE6E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041BE8E: ;
    ecx = MEM32(0x84BEA4);
    xmm5 = MEMF(ebp + 0x28); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    esp = esp + 0x18;

loc_0041BEA2: ;
    xmm7 = MEMF(ebp + 0x1C); /* movss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    edi = MEM32(ebp + 0x10);
    xmm7 = xmm7 - xmm0; /* subss */
    MEM32(esp + 0x24) = 0;
    MEMF(esp + 8) = xmm7; /* movss */

loc_0041BEC1: ;
    edx = MEM32(ebp + 8);
    xmm4 = MEMF(edx + edi * 4); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 / xmm7; /* divss */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm4; /* movss */
    if ((xmm6 <= xmm4)) goto loc_0041BEEC; /* jbe: below or equal (unsigned <=) */

loc_0041BEE3: ;
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm4 = xmm6; /* movaps */

loc_0041BEEC: ;
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_0041BEFA; /* jbe: below or equal (unsigned <=) */

loc_0041BEF1: ;
    MEMF(esp + 0x10) = xmm3; /* movss */
    xmm4 = xmm3; /* movaps */

loc_0041BEFA: ;
    eax = MEM32(ebp + 0xC);
    xmm2 = MEMF(eax + edi * 4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 / xmm7; /* divss */
    /* comiss xmm6, xmm2 - sets EFLAGS */
    if ((xmm6 <= xmm2)) goto loc_0041BF16; /* jbe: below or equal (unsigned <=) */

loc_0041BF13: ;
    xmm2 = xmm6; /* movaps */

loc_0041BF16: ;
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 <= xmm3)) goto loc_0041BF1E; /* jbe: below or equal (unsigned <=) */

loc_0041BF1B: ;
    xmm2 = xmm3; /* movaps */

loc_0041BF1E: ;
    eax = MEM32(esp + 0x24);
    if (CMP_LE(eax & eax, 0)) goto loc_0041C090; /* jle: less or equal (signed <=) */

loc_0041BF2A: ;
    eax = ebx + edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    esi = edx;
    edx = MEM32(ebp + 0xC);
    esi = esi << 2;
    xmm1 = MEMF(esi + edx); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 / xmm7; /* divss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_0041BF4E; /* jbe: below or equal (unsigned <=) */

loc_0041BF4B: ;
    xmm1 = xmm6; /* movaps */

loc_0041BF4E: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_0041BF56; /* jbe: below or equal (unsigned <=) */

loc_0041BF53: ;
    xmm1 = xmm3; /* movaps */

loc_0041BF56: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 0x24);
    edx = eax + -1;
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    xmm0 = xmm0 / MEMF(esp + 0x28); /* divss */
    xmm0 = xmm0 + MEMF(ebp + 0x20); /* addss */
    MEMF(esp + 0x38) = xmm7; /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(esp + 0x3C); /* mulss */
    xmm1 = xmm1 / MEMF(esp + 0x28); /* divss */
    xmm1 = xmm1 + MEMF(ebp + 0x20); /* addss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - xmm2; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm7; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041C006; /* je: equal / zero */

loc_0041BFBD: ;
    eax = MEM32(ebp + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = eax;
    edx = edx >> 8;
    PUSH32(esp, edx);
    edx = eax;
    edx = edx >> 0x10;
    PUSH32(esp, edx);
    eax = eax >> 0x18;
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041BFDD: ;
    ecx = MEM32(0x84BEA4);
    xmm6 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(ebp + 0x28); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm4 = MEMF(esp + 0x28); /* movss */
    esp = esp + 0x18;

loc_0041C006: ;
    eax = MEM32(ebp + 8);
    xmm2 = MEMF(esi + eax); /* movss */
    xmm7 = MEMF(esp + 8); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 / xmm7; /* divss */
    /* comiss xmm6, xmm2 - sets EFLAGS */
    if ((xmm6 <= xmm2)) goto loc_0041C024; /* jbe: below or equal (unsigned <=) */

loc_0041C021: ;
    xmm2 = xmm6; /* movaps */

loc_0041C024: ;
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 <= xmm3)) goto loc_0041C02C; /* jbe: below or equal (unsigned <=) */

loc_0041C029: ;
    xmm2 = xmm3; /* movaps */

loc_0041C02C: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041C090; /* je: equal / zero */

loc_0041C056: ;
    eax = MEM32(ebp + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = eax;
    edx = edx >> 8;
    PUSH32(esp, edx);
    edx = eax;
    edx = edx >> 0x10;
    PUSH32(esp, edx);
    eax = eax >> 0x18;
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041C076: ;
    ecx = MEM32(0x84BEA4);
    xmm5 = MEMF(ebp + 0x28); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm7 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x18;

loc_0041C090: ;
    if (CMP_EQ(edi, MEM32(ebp + 0x14))) { sub_0041C0AF(); return; } /* je: equal / zero */

loc_0041C095: ;
    edi++;
    if (CMP_L(edi, ebx)) goto loc_0041C09C; /* jl: less (signed <) */

loc_0041C09A: ;
    edi = 0; /* xor self */

loc_0041C09C: ;
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(ebp + 0x18); /* movss */
    eax++;
    MEM32(esp + 0x24) = eax;
    goto loc_0041BEC1;

}

/**
 * sub_0041C0C0
 * Original: 0x0041C0C0 - 0x0041C500 (1088 bytes, 292 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041C0C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0041C0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x150;
    eax = (int32_t)MEMF(ebp + 0x20); /* cvttss2si */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041C0E3: ;
    edx = MEM32(ebp + 0x30);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041C0F3: ;
    xmm1 = MEMF(ebp + 0x28); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041C10B: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041C113: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041C11D: ;
    ecx = (int32_t)MEMF(ebp + 0x24); /* cvttss2si */
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041C132: ;
    eax = MEM32(ebp + 0x34);
    esp = esp + 0x18;
    PUSH32(esp, eax);
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041C142: ;
    xmm1 = MEMF(ebp + 0x28); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041C15A: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041C162: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041C16C: ;
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x28); /* subss */
    xmm4 = MEMF(ebp + 0x30); /* movss */
    xmm5 = MEMF(ebp + 0x20); /* movss */
    esi = MEM32(ebp + 0x18);
    eax = MEM32(0x84BEA8);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x24); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - MEMF(ebp + 0x34); /* subss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm2 = xmm7; /* movaps */
    xmm2 = xmm2 / xmm0; /* divss */
    esp = esp + 0xC;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm7; /* movss */
    edi = 0; /* xor self */
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */

loc_0041C1C1: ;
    edx = MEM32(ebp + 8);
    xmm3 = MEMF(edx + esi * 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 - xmm5; /* subss */
    xmm3 = xmm3 * xmm2; /* mulss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0041C1DC; /* jbe: below or equal (unsigned <=) */

loc_0041C1D9: ;
    xmm3 = xmm0; /* movaps */

loc_0041C1DC: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 <= xmm7)) goto loc_0041C1E4; /* jbe: below or equal (unsigned <=) */

loc_0041C1E1: ;
    xmm3 = xmm7; /* movaps */

loc_0041C1E4: ;
    ecx = MEM32(ebp + 0xC);
    xmm1 = MEMF(ecx + esi * 4); /* movss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x34) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0041C208; /* jbe: below or equal (unsigned <=) */

loc_0041C1FF: ;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */

loc_0041C208: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 <= xmm7)) goto loc_0041C213; /* jbe: below or equal (unsigned <=) */

loc_0041C20D: ;
    MEMF(esp + 0x34) = xmm7; /* movss */

loc_0041C213: ;
    edx = MEM32(ebp + 0x10);
    xmm6 = MEMF(edx + esi * 4); /* movss */
    xmm6 = xmm6 - xmm5; /* subss */
    xmm6 = xmm6 * xmm2; /* mulss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm6; /* movss */
    if ((xmm0 <= xmm6)) goto loc_0041C237; /* jbe: below or equal (unsigned <=) */

loc_0041C22E: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm6 = xmm0; /* movaps */

loc_0041C237: ;
    /* comiss xmm6, xmm7 - sets EFLAGS */
    if ((xmm6 <= xmm7)) goto loc_0041C245; /* jbe: below or equal (unsigned <=) */

loc_0041C23C: ;
    MEMF(esp + 0xC) = xmm7; /* movss */
    xmm6 = xmm7; /* movaps */

loc_0041C245: ;
    ecx = MEM32(ebp + 0x14);
    xmm5 = MEMF(ecx + esi * 4); /* movss */
    xmm5 = xmm5 - MEMF(ebp + 0x20); /* subss */
    xmm5 = xmm5 * xmm2; /* mulss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp + 8) = xmm5; /* movss */
    if ((xmm0 <= xmm5)) goto loc_0041C26A; /* jbe: below or equal (unsigned <=) */

loc_0041C261: ;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm5 = xmm0; /* movaps */

loc_0041C26A: ;
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 <= xmm7)) goto loc_0041C278; /* jbe: below or equal (unsigned <=) */

loc_0041C26F: ;
    MEMF(esp + 8) = xmm7; /* movss */
    xmm5 = xmm7; /* movaps */

loc_0041C278: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    xmm0 = xmm0 / MEMF(esp + 0x4C); /* divss */
    xmm0 = xmm0 + MEMF(ebp + 0x28); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 + MEMF(ebp + 0x38); /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041C337; /* je: equal / zero */

loc_0041C2E2: ;
    ecx = MEM32(ebp + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = ecx;
    edx = edx >> 8;
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx >> 0x10;
    PUSH32(esp, edx);
    ecx = ecx >> 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041C30C: ;
    eax = MEM32(0x84BEA8);
    xmm4 = MEMF(ebp + 0x30); /* movss */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    esp = esp + 0x20;

loc_0041C337: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041C3CF; /* je: equal / zero */

loc_0041C37A: ;
    ecx = MEM32(ebp + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = ecx;
    edx = edx >> 8;
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx >> 0x10;
    PUSH32(esp, edx);
    ecx = ecx >> 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041C3A4: ;
    eax = MEM32(0x84BEA8);
    xmm4 = MEMF(ebp + 0x30); /* movss */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm3 = MEMF(esp + 0x68); /* movss */
    esp = esp + 0x20;

loc_0041C3CF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm7 = MEMF(esp + 0x30); /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm6; /* subss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041C46B; /* je: equal / zero */

loc_0041C416: ;
    ecx = MEM32(ebp + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = ecx;
    edx = edx >> 8;
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx >> 0x10;
    PUSH32(esp, edx);
    ecx = ecx >> 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041C440: ;
    eax = MEM32(0x84BEA8);
    xmm4 = MEMF(ebp + 0x30); /* movss */
    xmm7 = MEMF(esp + 0x50); /* movss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm2 = MEMF(esp + 0x70); /* movss */
    esp = esp + 0x20;

loc_0041C46B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm5; /* subss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041C4E3; /* je: equal / zero */

loc_0041C4A6: ;
    ecx = MEM32(ebp + 0x48);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = ecx;
    edx = edx >> 8;
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx >> 0x10;
    PUSH32(esp, edx);
    ecx = ecx >> 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041C4D0: ;
    eax = MEM32(0x84BEA8);
    xmm4 = MEMF(ebp + 0x30); /* movss */
    xmm7 = MEMF(esp + 0x50); /* movss */
    esp = esp + 0x20;

loc_0041C4E3: ;
    if (CMP_EQ(esi, MEM32(ebp + 0x1C))) { sub_0041C500(); return; } /* je: equal / zero */

loc_0041C4E8: ;
    esi++;
    if (CMP_L(esi, ebx)) goto loc_0041C4EF; /* jl: less (signed <) */

loc_0041C4ED: ;
    esi = 0; /* xor self */

loc_0041C4EF: ;
    xmm2 = MEMF(esp + 0x54); /* movss */
    xmm5 = MEMF(ebp + 0x20); /* movss */
    edi++;
    goto loc_0041C1C1;

}

/**
 * sub_0041C510
 * Original: 0x0041C510 - 0x0041DD74 (6244 bytes, 1490 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041C510(void)
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

loc_0041C510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x188;
    eax = MEM32(0x84BE98);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0041DD6C; /* je: equal / zero */

loc_0041C52D: ;
    ecx = MEM32(0x84BECC);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0041C62C; /* jle: less or equal (signed <=) */

loc_0041C53D: ;
    /* nop */

loc_0041C540: ;
    PUSH32(esp, 0xF);
    eax = esi;
    PUSH32(esp, 0); sub_0041B8C0(); /* call 0x0041B8C0 */

loc_0041C549: ;
    PUSH32(esp, 2);
    eax = esi;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0041B8C0(); /* call 0x0041B8C0 */

loc_0041C558: ;
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    PUSH32(esp, 3);
    eax = esi;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0041B8C0(); /* call 0x0041B8C0 */

loc_0041C56F: ;
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    PUSH32(esp, 0x18);
    eax = esi;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0041B8C0(); /* call 0x0041B8C0 */

loc_0041C586: ;
    PUSH32(esp, 0x15);
    eax = esi;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0041B8C0(); /* call 0x0041B8C0 */

loc_0041C595: ;
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    PUSH32(esp, 0x16);
    eax = esi;
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0041B8C0(); /* call 0x0041B8C0 */

loc_0041C5AC: ;
    xmm2 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x68); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x50); /* addss */
    esp = esp + 0x18;
    /* comiss xmm2, MEMF(0x75EF88) - sets EFLAGS */
    if ((xmm2 <= MEMF(0x75EF88))) goto loc_0041C5E0; /* jbe: below or equal (unsigned <=) */

loc_0041C5D8: ;
    MEMF(0x75EF88) = xmm2; /* movss */

loc_0041C5E0: ;
    /* comiss xmm1, MEMF(0x75EF84) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x75EF84))) goto loc_0041C5F1; /* jbe: below or equal (unsigned <=) */

loc_0041C5E9: ;
    MEMF(0x75EF84) = xmm1; /* movss */

loc_0041C5F1: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm1, MEMF(0x75EF80) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x75EF80))) goto loc_0041C608; /* jbe: below or equal (unsigned <=) */

loc_0041C600: ;
    MEMF(0x75EF80) = xmm1; /* movss */

loc_0041C608: ;
    /* comiss xmm0, MEMF(0x75EF7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x75EF7C))) goto loc_0041C619; /* jbe: below or equal (unsigned <=) */

loc_0041C611: ;
    MEMF(0x75EF7C) = xmm0; /* movss */

loc_0041C619: ;
    eax = MEM32(0x84BECC);
    esi++;
    if (CMP_L(esi, eax)) goto loc_0041C540; /* jl: less (signed <) */

loc_0041C627: ;
    eax = MEM32(0x84BE98);

loc_0041C62C: ;
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x30) = ebx;
    if (CMP_NE(eax, 2)) goto loc_0041C674; /* jne: not equal / not zero */

loc_0041C63D: ;
    xmm0 = MEMF(0x58BD44); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649740); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x6496D0); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x649040); /* movss */
    goto loc_0041C729;

loc_0041C674: ;
    if (CMP_NE(eax, 3)) goto loc_0041C6BC; /* jne: not equal / not zero */

loc_0041C679: ;
    xmm0 = MEMF(0x58BD44); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649740); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x6496D0); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x649040); /* movss */
    ebx = 1;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x30) = ebx;
    goto loc_0041C738;

loc_0041C6BC: ;
    if (CMP_NE(eax, 1)) goto loc_0041C738; /* jne: not equal / not zero */

loc_0041C6C1: ;
    xmm0 = MEMF(0x58BD44); /* movss */
    xmm1 = MEMF(0x648EC0); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649294); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x6496D0); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x649740); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x6496C8); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x649990); /* movss */
    ebx = eax;
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x30) = ebx;

loc_0041C729: ;
    edi = 1;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x48) = edi;

loc_0041C738: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_0042B450(); /* call 0x0042B450 */

loc_0041C742: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_0042B4F0(); /* call 0x0042B4F0 */

loc_0041C74C: ;
    SET_LO8(ecx, 1);
    PUSH32(esp, 0); sub_0042B3F0(); /* call 0x0042B3F0 */

loc_0041C753: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8814A2);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x88149C); /* mulss */
    edx = esp + 0xA0;
    PUSH32(esp, 0x5E05E0);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, edx);
    MEM32(esp + 0xA4) = ecx;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041C783: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x42200000);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041C797: ;
    xmm1 = MEMF(0x649148); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041C7B2: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041C7BA: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041C7C7: ;
    esp = esp + 0xC;
    if (TEST_Z(edi, edi)) goto loc_0041C943; /* je: equal / zero */

loc_0041C7D2: ;
    ecx = esp + 0x98;
    PUSH32(esp, 0x646664);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041C7E4: ;
    esp = esp + 8;
    PUSH32(esp, 0x42200000);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041C7F8: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041C811: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041C819: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041C826: ;
    eax = esp + 0xA4;
    PUSH32(esp, 0x64665C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041C838: ;
    xmm3 = MEMF(esp + 0x38); /* movss */
    xmm3 = xmm3 + MEMF(0x6490B8); /* addss */
    esp = esp + 0x14;
    PUSH32(esp, 0x42200000);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041C85A: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041C86D: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041C875: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041C882: ;
    edx = (int32_t)MEMF(0x75EF88); /* cvttss2si */
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041C89D: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x41F00000);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041C8B1: ;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041C8CA: ;
    eax = 0xFF00FF;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041C8D4: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041C8E1: ;
    edx = (int32_t)MEMF(0x75EF84); /* cvttss2si */
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041C8FC: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x42200000);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041C910: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041C929: ;
    eax = 0xFFFF00FFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041C933: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041C940: ;
    esp = esp + 0xC;

loc_0041C943: ;
    if (TEST_Z(ebx, ebx)) goto loc_0041CABC; /* je: equal / zero */

loc_0041C94B: ;
    edx = esp + 0x98;
    PUSH32(esp, 0x646664);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041C95D: ;
    esp = esp + 8;
    PUSH32(esp, 0x42200000);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041C971: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041C98A: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041C992: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041C99F: ;
    ecx = esp + 0xA4;
    PUSH32(esp, 0x64665C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041C9B1: ;
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm3 = xmm3 + MEMF(0x6490B8); /* addss */
    esp = esp + 0x14;
    PUSH32(esp, 0x42200000);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041C9D3: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041C9E6: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041C9EE: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041C9FB: ;
    eax = (int32_t)MEMF(0x75EF80); /* cvttss2si */
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041CA16: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x41F00000);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041CA2A: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041CA43: ;
    eax = 0xFF0000FFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041CA4D: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041CA5A: ;
    eax = (int32_t)MEMF(0x75EF7C); /* cvttss2si */
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041CA75: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x42200000);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041CA89: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041CAA2: ;
    eax = 0xFF8000FFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041CAAC: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041CAB9: ;
    esp = esp + 0xC;

loc_0041CABC: ;
    eax = MEM32(0x84BECC);
    ecx = MEM32(0x84BE58);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0041D3BB; /* jle: less or equal (signed <=) */

loc_0041CAD1: ;
    ebp = 0; /* xor self */
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x74) = ebp;
    goto loc_0041CAE0;

    /* nop */

loc_0041CAE0: ;
    if (TEST_Z(ecx, ecx)) goto loc_0041CB04; /* je: equal / zero */

loc_0041CAE4: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xD33);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041CAFB: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041CB04: ;
    if (CMP_GE(esi, MEM32(0x84BECC))) goto loc_0041CB30; /* jge: greater or equal (signed >=) */

loc_0041CB0C: ;
    ecx = MEM32(0x84BED0);
    eax = ecx + ebp;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0041B800(); /* call 0x0041B800 */

loc_0041CB1D: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    ecx = MEM32(0x84BE58);
    esp = esp + 8;
    goto loc_0041CB33;

loc_0041CB30: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0041CB33: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041CB5D; /* je: equal / zero */

loc_0041CB3D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xD33);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041CB54: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041CB5D: ;
    if (CMP_GE(esi, MEM32(0x84BECC))) goto loc_0041CB87; /* jge: greater or equal (signed >=) */

loc_0041CB65: ;
    eax = MEM32(0x84BED0);
    eax = eax + ebp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0041B800(); /* call 0x0041B800 */

loc_0041CB74: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    ecx = MEM32(0x84BE58);
    esp = esp + 8;
    goto loc_0041CB8A;

loc_0041CB87: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0041CB8A: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041CBBC; /* je: equal / zero */

loc_0041CB9C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xD33);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041CBB3: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041CBBC: ;
    if (CMP_GE(esi, MEM32(0x84BECC))) goto loc_0041CBE6; /* jge: greater or equal (signed >=) */

loc_0041CBC4: ;
    eax = MEM32(0x84BED0);
    eax = eax + ebp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0041B800(); /* call 0x0041B800 */

loc_0041CBD3: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    ecx = MEM32(0x84BE58);
    esp = esp + 8;
    goto loc_0041CBE9;

loc_0041CBE6: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0041CBE9: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041CC1E; /* je: equal / zero */

loc_0041CBFE: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xD33);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041CC15: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041CC1E: ;
    if (CMP_GE(esi, MEM32(0x84BECC))) goto loc_0041CC48; /* jge: greater or equal (signed >=) */

loc_0041CC26: ;
    eax = MEM32(0x84BED0);
    eax = eax + ebp;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0041B800(); /* call 0x0041B800 */

loc_0041CC35: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    ecx = MEM32(0x84BE58);
    esp = esp + 8;
    goto loc_0041CC4B;

loc_0041CC48: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0041CC4B: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041CC75; /* je: equal / zero */

loc_0041CC55: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xD33);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041CC6C: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041CC75: ;
    if (CMP_GE(esi, MEM32(0x84BECC))) goto loc_0041CC9F; /* jge: greater or equal (signed >=) */

loc_0041CC7D: ;
    eax = MEM32(0x84BED0);
    eax = eax + ebp;
    PUSH32(esp, 0x15);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0041B800(); /* call 0x0041B800 */

loc_0041CC8C: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    ecx = MEM32(0x84BE58);
    esp = esp + 8;
    goto loc_0041CCA2;

loc_0041CC9F: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0041CCA2: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041CCD4; /* je: equal / zero */

loc_0041CCB4: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xD33);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041CCCB: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041CCD4: ;
    if (CMP_GE(esi, MEM32(0x84BECC))) goto loc_0041CCFE; /* jge: greater or equal (signed >=) */

loc_0041CCDC: ;
    eax = MEM32(0x84BED0);
    eax = eax + ebp;
    PUSH32(esp, 0x16);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0041B800(); /* call 0x0041B800 */

loc_0041CCEB: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    ecx = MEM32(0x84BE58);
    esp = esp + 8;
    goto loc_0041CD01;

loc_0041CCFE: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0041CD01: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    xmm1 = MEMF(esp + 0x90); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x50); /* addss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(edi, edi)) goto loc_0041CD3D; /* je: equal / zero */

loc_0041CD2E: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_0041CD58; /* ja: above (unsigned >) */

loc_0041CD3D: ;
    if (TEST_Z(ebx, ebx)) goto loc_0041D39C; /* je: equal / zero */

loc_0041CD45: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0041D39C; /* jbe: below or equal (unsigned <=) */

loc_0041CD58: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = (float)(int32_t)MEM32(esp + 0x74); /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041CDB1; /* je: equal / zero */

loc_0041CD70: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6463B8);
    PUSH32(esp, 0xB4D);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041CD87: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041CDB1; /* je: equal / zero */

loc_0041CD93: ;
    (void)0; /* cmp esi, MEM32(0x84BECC) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84BECC))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6466B4);
    PUSH32(esp, 0xB4E);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041CDAE: ;
    esp = esp + 0x10;

loc_0041CDB1: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(0x84BED4);
    ebx = MEM32(esp + 0x20);
    edi = edx + eax;
    if (CMP_EQ(MEM8(edi), 0)) goto loc_0041CDE3; /* je: equal / zero */

loc_0041CDC7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041CDD2: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041CDDA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041CDE0: ;
    esp = esp + 0xC;

loc_0041CDE3: ;
    PUSH32(esp, esi);
    ecx = esp + 0x9C;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041CDF6: ;
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041CE06: ;
    xmm1 = MEMF(0x649148); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041CE21: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041CE29: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041CE36: ;
    eax = MEM32(esp + 0x54);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0041D0D5; /* je: equal / zero */

loc_0041CE45: ;
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041CE5E: ;
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041CE6E: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041CE87: ;
    eax = 0xFF00FF;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041CE91: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041CE9E: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(0x6490AC) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6490AC))) goto loc_0041CEDF; /* jbe: below or equal (unsigned <=) */

loc_0041CEB0: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x7C) = eax;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    esp = esp - 8;
    ecx = esp + 0xA0;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x646654);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041CEDA: ;
    esp = esp + 0x10;
    goto loc_0041CEF9;

loc_0041CEDF: ;
    edx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041CEF6: ;
    esp = esp + 0xC;

loc_0041CEF9: ;
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm3 = xmm3 + MEMF(0x6490B8); /* addss */
    PUSH32(esp, ebx);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041CF14: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041CF27: ;
    eax = 0xFFFF00FFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041CF31: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041CF3E: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 / MEMF(0x75EF88); /* divss */
    xmm2 = MEMF(0x648D14); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0041CF5F; /* jbe: below or equal (unsigned <=) */

loc_0041CF5C: ;
    xmm0 = xmm2; /* movaps */

loc_0041CF5F: ;
    xmm3 = MEMF(esp + 0x3C); /* movss */
    eax = MEM32(0x84BEA4);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041CFCA; /* je: equal / zero */

loc_0041CF9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041CFB4: ;
    eax = MEM32(0x84BEA4);
    xmm3 = MEMF(esp + 0x54); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    esp = esp + 0x18;

loc_0041CFCA: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 / MEMF(0x75EF84); /* divss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0041CFE6; /* jbe: below or equal (unsigned <=) */

loc_0041CFE3: ;
    xmm0 = xmm2; /* movaps */

loc_0041CFE6: ;
    xmm1 = xmm1 * MEMF(esp + 0x38); /* mulss */
    xmm4 = xmm1; /* movaps */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    MEMF(esp + 0x78) = xmm4; /* movss */
    if ((xmm4 <= xmm2)) goto loc_0041D003; /* jbe: below or equal (unsigned <=) */

loc_0041CFFA: ;
    MEMF(esp + 0x78) = xmm2; /* movss */
    xmm4 = xmm2; /* movaps */

loc_0041D003: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 + MEMF(0x648D1C); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041D08F; /* je: equal / zero */

loc_0041D049: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041D066: ;
    eax = MEM32(0x84BEA4);
    xmm1 = MEMF(esp + 0x98); /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    xmm3 = MEMF(esp + 0x54); /* movss */
    xmm4 = MEMF(esp + 0x90); /* movss */
    esp = esp + 0x18;

loc_0041D08F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm4 = xmm4 * MEMF(esp + 0x44); /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm4; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041D0D5; /* je: equal / zero */

loc_0041D0B5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041D0D2: ;
    esp = esp + 0x18;

loc_0041D0D5: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0041D37D; /* je: equal / zero */

loc_0041D0E1: ;
    edx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041D0FA: ;
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041D10A: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041D123: ;
    eax = 0xFF0000FFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041D12D: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041D13A: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(0x6490AC) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6490AC))) goto loc_0041D17B; /* jbe: below or equal (unsigned <=) */

loc_0041D14C: ;
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x7C) = edx;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    esp = esp - 8;
    eax = esp + 0xA0;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x646654);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041D176: ;
    esp = esp + 0x10;
    goto loc_0041D195;

loc_0041D17B: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    edx = esp + 0x9C;
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0041D192: ;
    esp = esp + 0xC;

loc_0041D195: ;
    xmm3 = MEMF(esp + 0x28); /* movss */
    xmm3 = xmm3 + MEMF(0x6490B8); /* addss */
    PUSH32(esp, ebx);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0042B590(); /* call 0x0042B590 */

loc_0041D1B0: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp) = xmm3; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_0041D1C3: ;
    eax = 0xFF8000FFu;
    PUSH32(esp, 0); sub_0042B330(); /* call 0x0042B330 */

loc_0041D1CD: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_0041D1DA: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 / MEMF(0x75EF80); /* divss */
    xmm2 = MEMF(0x648D14); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0041D1FB; /* jbe: below or equal (unsigned <=) */

loc_0041D1F8: ;
    xmm0 = xmm2; /* movaps */

loc_0041D1FB: ;
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm5 = MEMF(esp + 0x20); /* movss */
    eax = MEM32(0x84BEA4);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041D26F; /* je: equal / zero */

loc_0041D239: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041D253: ;
    eax = MEM32(0x84BEA4);
    xmm3 = MEMF(esp + 0x64); /* movss */
    xmm5 = MEMF(esp + 0x38); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    esp = esp + 0x18;

loc_0041D26F: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 / MEMF(0x75EF7C); /* divss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x50); /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0041D28B; /* jbe: below or equal (unsigned <=) */

loc_0041D288: ;
    xmm0 = xmm2; /* movaps */

loc_0041D28B: ;
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm4 = xmm1; /* movaps */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    MEMF(esp + 0x84) = xmm4; /* movss */
    if ((xmm4 <= xmm2)) goto loc_0041D2AE; /* jbe: below or equal (unsigned <=) */

loc_0041D2A2: ;
    MEMF(esp + 0x84) = xmm2; /* movss */
    xmm4 = xmm2; /* movaps */

loc_0041D2AE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm5 = xmm5 + MEMF(0x648D1C); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041D337; /* je: equal / zero */

loc_0041D2F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFF);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041D30E: ;
    eax = MEM32(0x84BEA4);
    xmm0 = MEMF(esp + 0xA0); /* movss */
    xmm1 = MEMF(esp + 0x98); /* movss */
    xmm3 = MEMF(esp + 0x64); /* movss */
    xmm4 = MEMF(esp + 0x9C); /* movss */
    esp = esp + 0x18;

loc_0041D337: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm4 = xmm4 * MEMF(esp + 0x40); /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm4; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0041D37D; /* je: equal / zero */

loc_0041D35D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041D37A: ;
    esp = esp + 0x18;

loc_0041D37D: ;
    ecx = MEM32(esp + 0x74);
    eax = MEM32(esp + 0x94);
    ebx = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x48);
    ecx = ecx + eax;
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(0x84BE58);

loc_0041D39C: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(0x84BECC);
    esi++;
    edx = edx + 0xC;
    ebp = ebp + 0x1140;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = edx;
    if (CMP_L(esi, eax)) goto loc_0041CAE0; /* jl: less (signed <) */

loc_0041D3BB: ;
    eax = MEM32(0x84BEC4);
    if (CMP_EQ(MEM32(0x875908), eax)) goto loc_0041DA38; /* je: equal / zero */

loc_0041D3CC: ;
    MEM32(0x875908) = eax;
    eax = MEM32(0x75EF74);
    eax++;
    (void)0; /* cmp eax, 0x78 - flags set for next jcc */
    MEM32(0x75EF74) = eax;
    if (CMP_L(eax, 0x78)) goto loc_0041D3E8; /* jl: less (signed <) */

loc_0041D3E1: ;
    eax = 0; /* xor self */
    MEM32(0x75EF74) = eax;

loc_0041D3E8: ;
    edx = MEM32(0x75EF78);
    if (CMP_NE(eax, edx)) goto loc_0041D3FE; /* jne: not equal / not zero */

loc_0041D3F2: ;
    edx++;
    (void)0; /* cmp edx, 0x78 - flags set for next jcc */
    MEM32(0x75EF78) = edx;
    if (CMP_GE(edx, 0x78)) goto loc_0041D402; /* jge: greater or equal (signed >=) */

loc_0041D3FE: ;
    if (CMP_GE(edx & edx, 0)) goto loc_0041D40C; /* jge: greater or equal (signed >=) */

loc_0041D402: ;
    MEM32(0x75EF78) = 0;

loc_0041D40C: ;
    if (TEST_Z(ecx, ecx)) goto loc_0041D44C; /* je: equal / zero */

loc_0041D410: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D423: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D44C; /* je: equal / zero */

loc_0041D430: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D443: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D44C: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x8294F8); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x829CE0);
    if (CMP_LE(edx, 1)) goto loc_0041D479; /* jle: less or equal (signed <=) */

loc_0041D471: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041D479: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(0x75EF74);
    MEMF(edx * 4 + 0x877BC0) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041D4C8; /* je: equal / zero */

loc_0041D48C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D49F: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D4C8; /* je: equal / zero */

loc_0041D4AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D4BF: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D4C8: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x829524); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x829D0C);
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_LE(edx, 1)) goto loc_0041D501; /* jle: less or equal (signed <=) */

loc_0041D4F3: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0041D501: ;
    if (TEST_Z(ecx, ecx)) goto loc_0041D541; /* je: equal / zero */

loc_0041D505: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D518: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D541; /* je: equal / zero */

loc_0041D525: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D538: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D541: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x8294F8); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x829CE0);
    if (CMP_LE(edx, 1)) goto loc_0041D56E; /* jle: less or equal (signed <=) */

loc_0041D566: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041D56E: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x6495F0); /* mulss */
    eax = MEM32(0x75EF74);
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(eax * 4 + 0x8779E0) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041D5CA; /* je: equal / zero */

loc_0041D58E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D5A1: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D5CA; /* je: equal / zero */

loc_0041D5AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D5C1: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D5CA: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x8294F8); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x829CE0);
    if (CMP_LE(edx, 1)) goto loc_0041D5F7; /* jle: less or equal (signed <=) */

loc_0041D5EF: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041D5F7: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(0x75EF74);
    xmm0 = xmm0 * MEMF(0x6495F0); /* mulss */
    MEMF(edx * 4 + 0x877800) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041D64E; /* je: equal / zero */

loc_0041D612: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D625: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D64E; /* je: equal / zero */

loc_0041D632: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D645: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D64E: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x829550); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x829D38);
    if (CMP_LE(edx, 1)) goto loc_0041D67B; /* jle: less or equal (signed <=) */

loc_0041D673: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041D67B: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x75EF74);
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    xmm0 = xmm0 + MEMF(eax * 4 + 0x877800); /* addss */
    MEMF(eax * 4 + 0x877620) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041D6DA; /* je: equal / zero */

loc_0041D69E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D6B1: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D6DA; /* je: equal / zero */

loc_0041D6BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D6D1: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D6DA: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x82957C); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x829D64);
    if (CMP_LE(edx, 1)) goto loc_0041D707; /* jle: less or equal (signed <=) */

loc_0041D6FF: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041D707: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x75EF74);
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    xmm0 = xmm0 + MEMF(eax * 4 + 0x877620); /* addss */
    MEMF(eax * 4 + 0x877440) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041D766; /* je: equal / zero */

loc_0041D72A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D73D: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D766; /* je: equal / zero */

loc_0041D74A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D75D: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D766: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x82983C); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x82A024);
    if (CMP_LE(edx, 1)) goto loc_0041D793; /* jle: less or equal (signed <=) */

loc_0041D78B: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041D793: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x75EF74);
    MEMF(eax * 4 + 0x877260) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041D7E1; /* je: equal / zero */

loc_0041D7A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D7B8: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D7E1; /* je: equal / zero */

loc_0041D7C5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D7D8: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D7E1: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x829868); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x82A050);
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_LE(edx, 1)) goto loc_0041D81A; /* jle: less or equal (signed <=) */

loc_0041D80C: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0041D81A: ;
    if (TEST_Z(ecx, ecx)) goto loc_0041D85A; /* je: equal / zero */

loc_0041D81E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D831: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D85A; /* je: equal / zero */

loc_0041D83E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D851: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D85A: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x82983C); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x82A024);
    if (CMP_LE(edx, 1)) goto loc_0041D887; /* jle: less or equal (signed <=) */

loc_0041D87F: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041D887: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x6495F0); /* mulss */
    edx = MEM32(0x75EF74);
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(edx * 4 + 0x877080) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041D8E4; /* je: equal / zero */

loc_0041D8A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D8BB: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D8E4; /* je: equal / zero */

loc_0041D8C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D8DB: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D8E4: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x82983C); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x82A024);
    if (CMP_LE(edx, 1)) goto loc_0041D911; /* jle: less or equal (signed <=) */

loc_0041D909: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041D911: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x75EF74);
    xmm0 = xmm0 * MEMF(0x6495F0); /* mulss */
    MEMF(eax * 4 + 0x876EA0) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041D967; /* je: equal / zero */

loc_0041D92B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D93E: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0041D967; /* je: equal / zero */

loc_0041D94B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D95E: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041D967: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x829894); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x82A07C);
    if (CMP_LE(edx, 1)) goto loc_0041D994; /* jle: less or equal (signed <=) */

loc_0041D98C: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041D994: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x75EF74);
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    xmm0 = xmm0 + MEMF(eax * 4 + 0x876EA0); /* addss */
    MEMF(eax * 4 + 0x876CC0) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0041D9EC; /* je: equal / zero */

loc_0041D9B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646698);
    PUSH32(esp, 0xC5B);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041D9CA: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041D9EC; /* je: equal / zero */

loc_0041D9D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64666C);
    PUSH32(esp, 0xC5C);
    PUSH32(esp, 0x646DC0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041D9E9: ;
    esp = esp + 0x10;

loc_0041D9EC: ;
    eax = MEM32(0x84BEC0);
    eax = eax + 0xA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = (float)(int32_t)MEM32(edx * 4 + 0x8298C0); /* cvtsi2ss */
    edx = MEM32(edx * 4 + 0x82A0A8);
    if (CMP_LE(edx, 1)) goto loc_0041DA19; /* jle: less or equal (signed <=) */

loc_0041DA11: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_0041DA19: ;
    eax = MEM32(0x75EF74);
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    xmm0 = xmm0 + MEMF(eax * 4 + 0x876CC0); /* addss */
    MEMF(eax * 4 + 0x876AE0) = xmm0; /* movss */

loc_0041DA38: ;
    esi = MEM32(0x75EF78);
    xmm1 = MEMF(0x75EF70); /* movss */
    xmm0 = MEMF(0x75EF6C); /* movss */
    edx = MEM32(0x75EF74);
    eax = esi;
    goto loc_0041DA60;

    /* nop */
    /* nop */

loc_0041DA60: ;
    xmm2 = MEMF(eax * 4 + 0x877BC0); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0041DA71; /* jbe: below or equal (unsigned <=) */

loc_0041DA6E: ;
    xmm1 = xmm2; /* movaps */

loc_0041DA71: ;
    xmm2 = MEMF(eax * 4 + 0x877260); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0041DA82; /* jbe: below or equal (unsigned <=) */

loc_0041DA7F: ;
    xmm0 = xmm2; /* movaps */

loc_0041DA82: ;
    if (CMP_EQ(eax, edx)) goto loc_0041DA90; /* je: equal / zero */

loc_0041DA86: ;
    eax++;
    if (CMP_L(eax, 0x78)) goto loc_0041DA60; /* jl: less (signed <) */

loc_0041DA8C: ;
    eax = 0; /* xor self */
    goto loc_0041DA60;

loc_0041DA90: ;
    ecx = MEM32(0x84BE98);
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEMF(0x75EF6C) = xmm0; /* movss */
    MEMF(0x75EF70) = xmm1; /* movss */
    if (CMP_NE(ecx, 2)) goto loc_0041DAE5; /* jne: not equal / not zero */

loc_0041DAAB: ;
    eax = MEM32(0x75EF70);
    PUSH32(esp, 0x9600FF);
    PUSH32(esp, 0x43820000);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0x44098000);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x877BC0);
    edi = 0x78;
    PUSH32(esp, 0); sub_0041B920(); /* call 0x0041B920 */

loc_0041DADD: ;
    esp = esp + 0x28;
    goto loc_0041DB76;

loc_0041DAE5: ;
    if (CMP_NE(ecx, 3)) goto loc_0041DB22; /* jne: not equal / not zero */

loc_0041DAEA: ;
    ecx = MEM32(0x75EF6C);
    PUSH32(esp, 0x960000FFu);
    PUSH32(esp, 0x43820000);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0x44098000);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x877260);
    edi = 0x78;
    PUSH32(esp, 0); sub_0041B920(); /* call 0x0041B920 */

loc_0041DB1D: ;
    esp = esp + 0x28;
    goto loc_0041DB76;

loc_0041DB22: ;
    if (CMP_NE(ecx, 1)) goto loc_0041DB7C; /* jne: not equal / not zero */

loc_0041DB27: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_0041DB38; /* ja: above (unsigned >) */

loc_0041DB32: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0041DB38: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x960000FFu);
    PUSH32(esp, 0x9600FF);
    PUSH32(esp, 0x43820000);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0x44098000);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x877260);
    PUSH32(esp, 0x877BC0);
    ebx = 0x78;
    PUSH32(esp, 0); sub_0041BC80(); /* call 0x0041BC80 */

loc_0041DB73: ;
    esp = esp + 0x30;

loc_0041DB76: ;
    ecx = MEM32(0x84BE98);

loc_0041DB7C: ;
    esi = MEM32(0x75EF78);
    xmm1 = MEMF(0x75EF68); /* movss */
    xmm0 = MEMF(0x75EF64); /* movss */
    edx = MEM32(0x75EF74);
    eax = esi;
    /* nop */

loc_0041DBA0: ;
    xmm2 = MEMF(eax * 4 + 0x8779E0); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0041DBB1; /* jbe: below or equal (unsigned <=) */

loc_0041DBAE: ;
    xmm1 = xmm2; /* movaps */

loc_0041DBB1: ;
    xmm2 = MEMF(eax * 4 + 0x877080); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0041DBC2; /* jbe: below or equal (unsigned <=) */

loc_0041DBBF: ;
    xmm0 = xmm2; /* movaps */

loc_0041DBC2: ;
    if (CMP_EQ(eax, edx)) goto loc_0041DBD0; /* je: equal / zero */

loc_0041DBC6: ;
    eax++;
    if (CMP_L(eax, 0x78)) goto loc_0041DBA0; /* jl: less (signed <) */

loc_0041DBCC: ;
    eax = 0; /* xor self */
    goto loc_0041DBA0;

loc_0041DBD0: ;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEMF(0x75EF64) = xmm0; /* movss */
    MEMF(0x75EF68) = xmm1; /* movss */
    if (CMP_NE(ecx, 2)) goto loc_0041DC46; /* jne: not equal / not zero */

loc_0041DBE5: ;
    ecx = MEM32(0x75EF68);
    PUSH32(esp, 0x9696FF);
    PUSH32(esp, 0x960096FFu);
    PUSH32(esp, 0x969600FFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x43A50000);
    PUSH32(esp, 0x43D70000);
    PUSH32(esp, 0x44098000);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8779E0);
    PUSH32(esp, 0x877440);
    PUSH32(esp, 0x877620);
    PUSH32(esp, 0x877800);
    ebx = 0x78;
    PUSH32(esp, 0); sub_0041C0C0(); /* call 0x0041C0C0 */

loc_0041DC3B: ;
    esp = esp + 0x44;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0041DC46: ;
    if (CMP_NE(ecx, 3)) goto loc_0041DCAB; /* jne: not equal / not zero */

loc_0041DC4B: ;
    eax = MEM32(0x75EF64);
    PUSH32(esp, 0x9696FF);
    PUSH32(esp, 0x6000FFFF);
    PUSH32(esp, 0xFF6000FFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x43A50000);
    PUSH32(esp, 0x43D70000);
    PUSH32(esp, 0x44098000);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x877080);
    PUSH32(esp, 0x876AE0);
    PUSH32(esp, 0x876CC0);
    PUSH32(esp, 0x876EA0);
    ebx = 0x78;
    PUSH32(esp, 0); sub_0041C0C0(); /* call 0x0041C0C0 */

loc_0041DCA0: ;
    esp = esp + 0x44;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0041DCAB: ;
    if (CMP_NE(ecx, 1)) goto loc_0041DD6C; /* jne: not equal / not zero */

loc_0041DCB4: ;
    ecx = MEM32(0x75EF68);
    PUSH32(esp, 0x9696FF);
    PUSH32(esp, 0x960096FFu);
    PUSH32(esp, 0x969600FFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x43A00000);
    PUSH32(esp, 0x43B68000);
    PUSH32(esp, 0x44098000);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8779E0);
    PUSH32(esp, 0x877440);
    PUSH32(esp, 0x877620);
    PUSH32(esp, 0x877800);
    ebx = 0x78;
    PUSH32(esp, 0); sub_0041C0C0(); /* call 0x0041C0C0 */

loc_0041DD0A: ;
    edx = MEM32(0x75EF64);
    PUSH32(esp, 0x9696FF);
    eax = MEM32(0x75EF74);
    PUSH32(esp, 0x6000FFFF);
    ecx = MEM32(0x75EF78);
    PUSH32(esp, 0xFF6000FFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x43C08000);
    PUSH32(esp, 0x43D70000);
    PUSH32(esp, 0x44098000);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x877080);
    PUSH32(esp, 0x876AE0);
    PUSH32(esp, 0x876CC0);
    PUSH32(esp, 0x876EA0);
    PUSH32(esp, 0); sub_0041C0C0(); /* call 0x0041C0C0 */

loc_0041DD66: ;
    esp = esp + 0x88;

loc_0041DD6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0041DD80
 * Original: 0x0041DD80 - 0x0041DF1B (411 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041DD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041DD80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(0x84BE58);
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(edi, edi)) goto loc_0041DDD9; /* je: equal / zero */

loc_0041DD94: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(eax, (CMP_G(ebp & ebp, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F78);
    PUSH32(esp, 0xC9);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0041DDAB: ;
    edi = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(edi, edi)) goto loc_0041DDD9; /* je: equal / zero */

loc_0041DDB8: ;
    (void)0; /* cmp ebp, 0x20 - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(ebp, 0x20)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F50);
    PUSH32(esp, 0xCA);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0041DDD0: ;
    edi = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041DDD9: ;
    eax = MEM32(esi);
    if (CMP_BE(eax & eax, 0)) goto loc_0041DE54; /* jbe: below or equal (unsigned <=) */

loc_0041DDDF: ;
    edx = eax + ebp;
    if (CMP_B(edx, 8)) goto loc_0041DE54; /* jb: below (unsigned <) */

loc_0041DDE7: ;
    if (TEST_Z(edi, edi)) goto loc_0041DE0C; /* je: equal / zero */

loc_0041DDEB: ;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    SET_LO8(eax, (CMP_B(eax, 8)) ? 1 : 0); /* setb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F30);
    PUSH32(esp, 0xCE);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0041DE03: ;
    edi = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041DE0C: ;
    ebp = MEM32(esi);
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    ecx = ecx + edx;
    MEM32(esp + 0xC) = ecx;
    eax = 8;
    eax = eax - ebp;
    SET_LO8(edx, LO8(edx) | 0xFF);
    ecx = eax;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    ecx = ebp;
    ebp = MEM32(esp + 0xC);
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(ebp) = MEM8(ebp) | LO8(edx);
    ecx = eax;
    ebx = ebx >> LO8(ecx);
    ecx = MEM32(esp + 0x14);
    ecx = ecx - eax;
    eax = MEM32(esi + 4);
    eax++;
    MEM32(esp + 0x14) = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0;
    ebp = ecx;

loc_0041DE54: ;
    if (CMP_L(ebp, 8)) goto loc_0041DEB7; /* jl: less (signed <) */

loc_0041DE59: ;
    eax = ebp;
    eax = eax >> 3;
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    edx = ebp + ecx * 8;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = edx;
    edi = edi;

loc_0041DE70: ;
    if (TEST_Z(edi, edi)) goto loc_0041DE99; /* je: equal / zero */

loc_0041DE74: ;
    (void)0; /* cmp MEM32(esi), 0 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(esi), 0)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F0C);
    PUSH32(esp, 0xDA);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0041DE8C: ;
    edi = MEM32(0x84BE58);
    eax = MEM32(esp + 0x1C);
    esp = esp + 0x10;

loc_0041DE99: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    MEM8(ecx + edx) = LO8(ebx);
    edx = MEM32(esi + 4);
    ebx = ebx >> 8;
    edx++;
    eax--;
    MEM32(esi + 4) = edx;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_0041DE70; /* jne: not equal / not zero */

loc_0041DEB3: ;
    ebp = MEM32(esp + 0x14);

loc_0041DEB7: ;
    if (CMP_LE(ebp & ebp, 0)) goto loc_0041DF16; /* jle: less or equal (signed <=) */

loc_0041DEBB: ;
    if (TEST_Z(edi, edi)) goto loc_0041DEDE; /* je: equal / zero */

loc_0041DEBF: ;
    eax = MEM32(esi);
    eax = eax + ebp;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    SET_LO8(ecx, (CMP_B(eax, 8)) ? 1 : 0); /* setb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646EE4);
    PUSH32(esp, 0xE3);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0041DEDB: ;
    esp = esp + 0x10;

loc_0041DEDE: ;
    eax = eax | 0xFFFFFFFFu;
    ecx = ebp;
    eax = eax << LO8(ecx);
    ecx = MEM32(esi);
    eax = ~eax;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    if (CMP_BE(ecx & ecx, 0)) goto loc_0041DF0B; /* jbe: below or equal (unsigned <=) */

loc_0041DEEF: ;
    edi = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(edx + edi));
    edx = edx + edi;
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(edx) = LO8(eax);
    eax = MEM32(esi);
    eax = eax + ebp;
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0041DF0B: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    MEM8(eax + ecx) = LO8(ebx);
    MEM32(esi) = MEM32(esi) + ebp;

loc_0041DF16: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041DF20
 * Original: 0x0041DF20 - 0x0041DF9F (127 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041DF20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041DF20: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0041DF77; /* je: equal / zero */

loc_0041DF30: ;
    (void)0; /* cmp MEM32(ebx), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ebx), 0)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F0C);
    PUSH32(esp, 0x122);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041DF48: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041DF77; /* je: equal / zero */

loc_0041DF54: ;
    edx = MEM32(ebx + 4);
    edi = MEM32(ebx + 0xC);
    edx = edx + ebp;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ecx, LO8(ecx) + 1);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646EAC);
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041DF74: ;
    esp = esp + 0x10;

loc_0041DF77: ;
    edx = MEM32(ebx + 4);
    edi = MEM32(ebx + 8);
    esi = MEM32(esp + 0x10);
    edi = edi + edx;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    eax = eax + ebp;
    POP32(esp, esi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0041DFA0
 * Original: 0x0041DFA0 - 0x0041E109 (361 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041DFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041DFA0: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x84BE58);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    if (TEST_Z(edx, edx)) goto loc_0041DFF7; /* je: equal / zero */

loc_0041DFB2: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(eax, (CMP_G(ebp & ebp, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F78);
    PUSH32(esp, 0x132);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041DFC9: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_0041DFF7; /* je: equal / zero */

loc_0041DFD6: ;
    (void)0; /* cmp ebp, 0x20 - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(ebp, 0x20)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F50);
    PUSH32(esp, 0x133);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041DFEE: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041DFF7: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0041E056; /* jbe: below or equal (unsigned <=) */

loc_0041E001: ;
    ecx = eax + ebp;
    if (CMP_B(ecx, 8)) goto loc_0041E056; /* jb: below (unsigned <) */

loc_0041E009: ;
    if (TEST_Z(edx, edx)) goto loc_0041E02E; /* je: equal / zero */

loc_0041E00D: ;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    SET_LO8(eax, (CMP_B(eax, 8)) ? 1 : 0); /* setb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F30);
    PUSH32(esp, 0x13A);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041E025: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041E02E: ;
    ecx = MEM32(esi);
    edi = MEM32(esi + 8);
    eax = 8;
    eax = eax - ecx;
    ecx = MEM32(esi + 4);
    edi = ZX8(MEM8(edi + ecx));
    SET_LO8(ecx, MEM8(esi));
    ebx = eax;
    ebp = ebp - eax;
    eax = MEM32(esi + 4);
    edi = edi >> LO8(ecx);
    eax++;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0;

loc_0041E056: ;
    if (CMP_L(ebp, 8)) goto loc_0041E0B6; /* jl: less (signed <) */

loc_0041E05B: ;
    eax = ebp;
    eax = eax >> 3;
    MEM32(esp + 0xC) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    ecx = ebp + eax * 8;
    MEM32(esp + 0x14) = ecx;
    edi = edi;

loc_0041E070: ;
    if (TEST_Z(edx, edx)) goto loc_0041E095; /* je: equal / zero */

loc_0041E074: ;
    (void)0; /* cmp MEM32(esi), 0 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(esi), 0)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F0C);
    PUSH32(esp, 0x145);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041E08C: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041E095: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    ebp = ZX8(MEM8(ecx + eax));
    ecx = ebx;
    ebp = ebp << LO8(ecx);
    ebx = ebx + 8;
    edi = edi | ebp;
    eax++;
    MEM32(esi + 4) = eax;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    if ((MEM32(esp + 0xC) != 0)) goto loc_0041E070; /* jne: not equal / not zero */

loc_0041E0B2: ;
    ebp = MEM32(esp + 0x14);

loc_0041E0B6: ;
    if (CMP_LE(ebp & ebp, 0)) goto loc_0041E102; /* jle: less or equal (signed <=) */

loc_0041E0BA: ;
    if (TEST_Z(edx, edx)) goto loc_0041E0DD; /* je: equal / zero */

loc_0041E0BE: ;
    eax = MEM32(esi);
    eax = eax + ebp;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    SET_LO8(ecx, (CMP_B(eax, 8)) ? 1 : 0); /* setb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646EE4);
    PUSH32(esp, 0x14E);
    PUSH32(esp, 0x646F6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041E0DA: ;
    esp = esp + 0x10;

loc_0041E0DD: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    edx = ZX8(MEM8(edx + eax));
    SET_LO8(ecx, MEM8(esi));
    edx = edx >> LO8(ecx);
    eax = eax | 0xFFFFFFFFu;
    ecx = ebp;
    eax = eax << LO8(ecx);
    ecx = ebx;
    eax = ~eax;
    edx = edx & eax;
    eax = MEM32(esi);
    edx = edx << LO8(ecx);
    edi = edi | edx;
    eax = eax + ebp;
    MEM32(esi) = eax;

loc_0041E102: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041E110
 * Original: 0x0041E110 - 0x0041E263 (339 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041E110(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0041E110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0041E13D; /* je: equal / zero */

loc_0041E11F: ;
    (void)0; /* cmp MEM32(0x84BE54), esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(0x84BE54), esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BF4);
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041E13A: ;
    esp = esp + 0x10;

loc_0041E13D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A0A8E(); /* call 0x004A0A8E */

loc_0041E143: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_0041E167; /* je: equal / zero */

loc_0041E14D: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x308);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041E164: ;
    esp = esp + 0x10;

loc_0041E167: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0041E16C: ;
    MEMF(0x75863C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0041E177: ;
    MEMF(0x758640) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00433049(); /* call 0x00433049 */

loc_0041E182: ;
    eax = eax & 1;
    MEM32(0x84BEE8) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(0x82E5B0) = eax;
    MEM32(0x82E618) = eax;
    MEM32(0x82E680) = eax;
    MEM32(0x82E6E8) = eax;
    eax = edi;
    eax = eax << 5;
    PUSH32(esp, eax);
    MEM32(0x758644) = 1;
    MEM32(0x82E5A0) = esi;
    MEM32(0x82E5A4) = esi;
    MEM32(0x82E5A8) = esi;
    MEM32(0x82E5AC) = esi;
    MEM32(0x82E5B4) = esi;
    MEM32(0x82E5E4) = esi;
    MEM32(0x82E608) = esi;
    MEM32(0x82E60C) = esi;
    MEM32(0x82E610) = esi;
    MEM32(0x82E614) = esi;
    MEM32(0x82E61C) = esi;
    MEM32(0x82E64C) = esi;
    MEM32(0x82E670) = esi;
    MEM32(0x82E674) = esi;
    MEM32(0x82E678) = esi;
    MEM32(0x82E67C) = esi;
    MEM32(0x82E684) = esi;
    MEM32(0x82E6B4) = esi;
    MEM32(0x82E6D8) = esi;
    MEM32(0x82E6DC) = esi;
    MEM32(0x82E6E0) = esi;
    MEM32(0x82E6E4) = esi;
    MEM32(0x82E6EC) = esi;
    MEM32(0x82E71C) = esi;
    MEM32(0x84BFA0) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0041E24C: ;
    esp = esp + 4;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM32(0x84BF9C) = eax;
    if (CMP_LE(edi, esi)) goto loc_0041E260; /* jle: less or equal (signed <=) */

loc_0041E258: ;
    MEM32(eax) = esi;
    eax = eax + 0x20;
    edi--;
    if ((edi != 0)) goto loc_0041E258; /* jne: not equal / not zero */

loc_0041E260: ;
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
 * sub_0041E270
 * Original: 0x0041E270 - 0x0041E380 (272 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041E270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041E270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_0041E279: ;
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041E29E; /* je: equal / zero */

loc_0041E284: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BA0);
    PUSH32(esp, 0x3B1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041E29B: ;
    esp = esp + 0x10;

loc_0041E29E: ;
    ebp = edi + 0x6C;
    esi = 0; /* xor self */
    edi = ebp;

loc_0041E2A5: ;
    eax = esi;
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0041E2AC: ;
    if (TEST_Z(eax, eax)) goto loc_0041E2C2; /* je: equal / zero */

loc_0041E2B0: ;
    if (CMP_NE(MEM32(edi), 0x80151200u)) goto loc_0041E2C2; /* jne: not equal / not zero */

loc_0041E2B8: ;
    ebx = 0x80151200u;
    PUSH32(esp, 0); sub_0041FD80(); /* call 0x0041FD80 */

loc_0041E2C2: ;
    esi++;
    edi = edi + 0x70;
    if (CMP_L(esi, 4)) goto loc_0041E2A5; /* jl: less (signed <) */

loc_0041E2CB: ;
    eax = MEM32(0x84BF00);
    if (TEST_NZ(eax, eax)) goto loc_0041E37B; /* jne: not equal / not zero */

loc_0041E2D8: ;
    esi = 0; /* xor self */
    edi = ebp;
    /* nop */

loc_0041E2E0: ;
    eax = esi;
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0041E2E7: ;
    if (TEST_Z(eax, eax)) goto loc_0041E2FD; /* je: equal / zero */

loc_0041E2EB: ;
    if (CMP_NE(MEM32(edi), 0x1512F0)) goto loc_0041E2FD; /* jne: not equal / not zero */

loc_0041E2F3: ;
    ebx = 0x1512F0;
    PUSH32(esp, 0); sub_0041FD80(); /* call 0x0041FD80 */

loc_0041E2FD: ;
    esi++;
    edi = edi + 0x70;
    if (CMP_L(esi, 4)) goto loc_0041E2E0; /* jl: less (signed <) */

loc_0041E306: ;
    esi = 0; /* xor self */
    edi = ebp;
    /* nop */

loc_0041E310: ;
    eax = esi;
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0041E317: ;
    if (TEST_Z(eax, eax)) goto loc_0041E34E; /* je: equal / zero */

loc_0041E31B: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, 0x80151200u)) goto loc_0041E34E; /* je: equal / zero */

loc_0041E324: ;
    if (TEST_Z(eax, eax)) goto loc_0041E34E; /* je: equal / zero */

loc_0041E328: ;
    if (CMP_EQ(eax, 0x1512F0)) goto loc_0041E34E; /* je: equal / zero */

loc_0041E32F: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041E34E; /* je: equal / zero */

loc_0041E338: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x3F1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041E34B: ;
    esp = esp + 0x10;

loc_0041E34E: ;
    esi++;
    edi = edi + 0x70;
    if (CMP_L(esi, 4)) goto loc_0041E310; /* jl: less (signed <) */

loc_0041E357: ;
    eax = MEM32(0x84BF08);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0041E37B; /* jle: less or equal (signed <=) */

loc_0041E362: ;
    edx = MEM32(esi * 4 + 0x82BFBC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A045C(); /* call 0x004A045C */

loc_0041E371: ;
    eax = MEM32(0x84BF08);
    esi++;
    if (CMP_L(esi, eax)) goto loc_0041E362; /* jl: less (signed <) */

loc_0041E37B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041E380
 * Original: 0x0041E380 - 0x0041E40F (143 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041E380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041E380: ;
    eax = MEM32(0x84BEFC);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    ebx = 1;
    if (CMP_NE(eax, 3)) goto loc_0041E3CA; /* jne: not equal / not zero */

loc_0041E397: ;
    ecx = ebx;
    eax = 0x82EA10;
    edi = edi;

loc_0041E3A0: ;
    if (CMP_NE(MEM32(eax), edi)) goto loc_0041E3B2; /* jne: not equal / not zero */

loc_0041E3A4: ;
    eax = eax + 0x21AC;
    if (CMP_L(eax, 0x8370C0)) goto loc_0041E3A0; /* jl: less (signed <) */

loc_0041E3B0: ;
    goto loc_0041E3B4;

loc_0041E3B2: ;
    ecx = 0; /* xor self */

loc_0041E3B4: ;
    if (CMP_NE(MEM32(0x84BFA8), edi)) goto loc_0041E3CA; /* jne: not equal / not zero */

loc_0041E3BC: ;
    if (CMP_EQ(ecx, edi)) goto loc_0041E3CA; /* je: equal / zero */

loc_0041E3C0: ;
    PUSH32(esp, 0); sub_0041FF30(); /* call 0x0041FF30 */

loc_0041E3C5: ;
    PUSH32(esp, 0); sub_00424230(); /* call 0x00424230 */

loc_0041E3CA: ;
    (void)0; /* cmp MEM32(0x84BF04), edi - flags set for next jcc */
    esi = 2;
    if (CMP_EQ(MEM32(0x84BF04), edi)) { sub_0041E40F(); return; } /* je: equal / zero */

loc_0041E3D7: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, edi)) goto loc_0041E3FE; /* je: equal / zero */

loc_0041E3E0: ;
    (void)0; /* cmp MEM32(0x84BEF0), edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BEF0), edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648B7C);
    PUSH32(esp, 0x444);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041E3FB: ;
    esp = esp + 0x10;

loc_0041E3FE: ;
    edx = MEM32(0x84BF04);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_0041E40A: ;
    g_seh_ebp = ebp; sub_0041E572(); return; /* tail jmp 0x0041E572 */

}

/**
 * sub_0041E860
 * Original: 0x0041E860 - 0x0041E9D7 (375 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041E860(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041E860: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BF34);
    PUSH32(esp, esi);
    esi = MEM32(0x84BF30);
    esi = esi - eax;
    PUSH32(esp, edi);
    if (((int32_t)esi >= 0)) goto loc_0041E874; /* jns: not sign (positive) */

loc_0041E872: ;
    esi = 0; /* xor self */

loc_0041E874: ;
    edi = MEM32(0x84BF38);
    ecx = MEM32(0x84BF3C);
    edi = edi - ecx;
    if (((int32_t)edi >= 0)) goto loc_0041E886; /* jns: not sign (positive) */

loc_0041E884: ;
    edi = 0; /* xor self */

loc_0041E886: ;
    if (TEST_NZ(edx, edx)) goto loc_0041E8AE; /* jne: not equal / not zero */

loc_0041E88A: ;
    if (CMP_NE(MEM32(0x84BF40), eax)) goto loc_0041E8AE; /* jne: not equal / not zero */

loc_0041E892: ;
    if (CMP_NE(MEM32(0x84BF44), esi)) goto loc_0041E8AE; /* jne: not equal / not zero */

loc_0041E89A: ;
    if (CMP_NE(MEM32(0x84BF48), ecx)) goto loc_0041E8AE; /* jne: not equal / not zero */

loc_0041E8A2: ;
    if (CMP_EQ(MEM32(0x84BF4C), edi)) goto loc_0041E9D3; /* je: equal / zero */

loc_0041E8AE: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041E8D7; /* je: equal / zero */

loc_0041E8B7: ;
    ecx = MEM32(0x84BF2C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648AD4);
    PUSH32(esp, 0x57E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041E8D4: ;
    esp = esp + 0x10;

loc_0041E8D7: ;
    edx = MEM32(0x84BF2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0041E8E3: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_0041E90D; /* je: equal / zero */

loc_0041E8ED: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x581);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041E904: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041E90D: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0x84BF2C) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_0041E93B; /* je: equal / zero */

loc_0041E91B: ;
    edx = MEM32(0x758648);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(edx & edx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648AAC);
    PUSH32(esp, 0x584);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041E938: ;
    esp = esp + 0x10;

loc_0041E93B: ;
    eax = MEM32(0x758648);
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0041E945: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(esp + 8) = LO8(eax);
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041E970; /* je: equal / zero */

loc_0041E957: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648A68);
    PUSH32(esp, 0x585);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041E96D: ;
    esp = esp + 0x10;

loc_0041E970: ;
    eax = MEM32(0x758648);
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_0041E97A: ;
    edx = MEM32(0x84BF58);
    ecx = MEM32(0x84BF54);
    PUSH32(esp, 0x84BF2C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(0x84BF3C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x84BF34);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0497(); /* call 0x004A0497 */

loc_0041E9AB: ;
    if (TEST_NZ(eax, eax)) goto loc_0041E9D3; /* jne: not equal / not zero */

loc_0041E9AF: ;
    ecx = MEM32(0x84BF34);
    edx = MEM32(0x84BF3C);
    MEM32(0x84BF40) = ecx;
    MEM32(0x84BF44) = esi;
    MEM32(0x84BF48) = edx;
    MEM32(0x84BF4C) = edi;

loc_0041E9D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041E9E0
 * Original: 0x0041E9E0 - 0x0041EAE9 (265 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041E9E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041E9E0: ;
    eax = MEM32(0x84BF2C);
    esp = esp - 0x18;
    if (TEST_Z(eax, eax)) goto loc_0041EAE5; /* je: equal / zero */

loc_0041E9F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_0041E9F7: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0041EAE4; /* je: equal / zero */

loc_0041EA01: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0041EA59; /* je: equal / zero */

loc_0041EA0C: ;
    ebx = MEM32(0x758648);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ebx & ebx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648AAC);
    PUSH32(esp, 0x5AB);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041EA29: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041EA59; /* je: equal / zero */

loc_0041EA35: ;
    edx = MEM32(0x758648);
    (void)0; /* cmp edx, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(edx, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648A2C);
    PUSH32(esp, 0x5AC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041EA56: ;
    esp = esp + 0x10;

loc_0041EA59: ;
    eax = MEM32(0x758648);
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0041EA63: ;
    if (TEST_NZ(eax, eax)) goto loc_0041EAD7; /* jne: not equal / not zero */

loc_0041EA67: ;
    if (TEST_S(esi, esi)) goto loc_0041EACB; /* jl: less (signed <) */

loc_0041EA6B: ;
    ecx = MEM32(0x84BF2C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004A04C7(); /* call 0x004A04C7 */

loc_0041EA81: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0041EAB0; /* jge: greater or equal (signed >=) */

loc_0041EA85: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041EAA4; /* je: equal / zero */

loc_0041EA8E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x5BE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041EAA1: ;
    esp = esp + 0x10;

loc_0041EAA4: ;
    PUSH32(esp, 0); sub_00420C10(); /* call 0x00420C10 */

loc_0041EAA9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0041EAB0: ;
    ebx = MEM32(0x758648);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00421810(); /* call 0x00421810 */

loc_0041EAC4: ;
    esp = esp + 4;
    if (CMP_GE(eax & eax, 0)) goto loc_0041EAE2; /* jge: greater or equal (signed >=) */

loc_0041EACB: ;
    PUSH32(esp, 0); sub_00420C10(); /* call 0x00420C10 */

loc_0041EAD0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0041EAD7: ;
    if (TEST_S(esi, esi)) goto loc_0041EAE2; /* jl: less (signed <) */

loc_0041EADB: ;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_0041E860(); /* call 0x0041E860 */

loc_0041EAE2: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0041EAE4: ;
    POP32(esp, esi);

loc_0041EAE5: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0041EAF0
 * Original: 0x0041EAF0 - 0x0041ED01 (529 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041EAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041EAF0: ;
    eax = MEM32(0x84BF60);
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_0041ECFC; /* je: equal / zero */

loc_0041EB03: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_0041EB09: ;
    if (CMP_EQ(eax, ebp)) goto loc_0041ECFC; /* je: equal / zero */

loc_0041EB11: ;
    if (CMP_GE(eax, ebp)) goto loc_0041EB23; /* jge: greater or equal (signed >=) */

loc_0041EB13: ;
    PUSH32(esp, 0); sub_004214A0(); /* call 0x004214A0 */

loc_0041EB18: ;
    MEM32(0x84BF64) = ebp;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0041EB23: ;
    edx = MEM32(0x84BF60);
    PUSH32(esp, ebx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A051D(); /* call 0x004A051D */

loc_0041EB3A: ;
    if (CMP_EQ(eax, ebp)) goto loc_0041EB5D; /* je: equal / zero */

loc_0041EB3E: ;
    edx = MEM32(0x84BE58);
    if (CMP_EQ(edx, ebp)) goto loc_0041EB8F; /* je: equal / zero */

loc_0041EB48: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x628);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041EB5A: ;
    esp = esp + 0x10;

loc_0041EB5D: ;
    edx = MEM32(0x84BE58);
    if (CMP_EQ(edx, ebp)) goto loc_0041EB8F; /* je: equal / zero */

loc_0041EB67: ;
    eax = MEM32(0x84BF6C);
    (void)0; /* cmp eax, MEM32(esp + 0xC) - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ecx, LO8(ecx) + 1);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6489FC);
    PUSH32(esp, 0x62B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041EB86: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041EB8F: ;
    eax = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(0x84BF90) = eax;
    if (CMP_BE(eax, ebp)) goto loc_0041ECEC; /* jbe: below or equal (unsigned <=) */

loc_0041EBA2: ;
    eax = MEM32(0x84BF98);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0041EBB0: ;
    edi = MEM32(0x84BF74);
    if (CMP_LE(edi & edi, 0)) goto loc_0041EC55; /* jle: less or equal (signed <=) */

loc_0041EBBE: ;
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0041EBD8; /* jle: less or equal (signed <=) */

loc_0041EBC4: ;
    ecx = MEM32(0x84BF78);
    ecx = ecx + 4;
    esi = edi;
    /* nop */

loc_0041EBD0: ;
    eax = eax + MEM32(ecx);
    ecx = ecx + 8;
    esi--;
    if ((esi != 0)) goto loc_0041EBD0; /* jne: not equal / not zero */

loc_0041EBD8: ;
    if (TEST_Z(edx, edx)) goto loc_0041EC00; /* je: equal / zero */

loc_0041EBDC: ;
    (void)0; /* cmp MEM32(0x84BF7C), eax - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(MEM32(0x84BF7C), eax)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6489B8);
    PUSH32(esp, 0x636);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041EBF7: ;
    edi = MEM32(0x84BF74);
    esp = esp + 0x10;

loc_0041EC00: ;
    eax = MEM32(0x84BF7C);
    edx = MEM32(0x84BF94);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    ecx = MEM32(0x84BF78);
    eax = eax + edx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edx + ebx * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0528(); /* call 0x004A0528 */

loc_0041EC26: ;
    edx = MEM32(0x84BE58);
    if (TEST_Z(edx, edx)) goto loc_0041EC50; /* je: equal / zero */

loc_0041EC30: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x63A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041EC47: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041EC50: ;
    eax = MEM32(0x84BF98);

loc_0041EC55: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + ebx * 4);
    esi = MEM32(ecx + 4);
    MEM32(eax + ebp) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(eax + ebp + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx + ebx * 4);
    esi = esi + 0xC;
    edi = eax + ebp + 8;
    ecx = 9;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + ebx * 4);
    ecx = ecx + 0x30;
    edi = MEM32(ecx);
    esi = eax + ebp + 0x2C;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(esi + 8) = edi;
    ecx = MEM32(ecx + 0xC);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + ebx * 4);
    ecx = MEM32(ecx + 0x40);
    MEM32(eax + ebp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + ebx * 4);
    ecx = MEM32(ecx + 0x44);
    MEM32(eax + ebp + 0x40) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + ebx * 4);
    ecx = MEM32(ecx + 0x48);
    MEM32(eax + ebp + 0x44) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + ebx * 4);
    ecx = MEM32(ecx + 0x4C);
    MEM32(eax + ebp + 0x48) = ecx;
    ecx = MEM32(esp + 0x14);
    ebx++;
    ebp = ebp + 0x4C;
    if (CMP_B(ebx, ecx)) goto loc_0041EBB0; /* jb: below (unsigned <) */

loc_0041ECEA: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0041ECEC: ;
    PUSH32(esp, 0); sub_004214A0(); /* call 0x004214A0 */

loc_0041ECF1: ;
    MEM32(0x84BF64) = 2;
    POP32(esp, ebx);

loc_0041ECFC: ;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0041ED10
 * Original: 0x0041ED10 - 0x0041EE75 (357 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041ED10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041ED10: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BFA8);
    if (TEST_Z(eax, eax)) goto loc_0041EE73; /* je: equal / zero */

loc_0041ED1E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_0041ED24: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0041ED33; /* jge: greater or equal (signed >=) */

loc_0041ED2B: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_004224F0(); return; /* tail jmp 0x004224F0 */

loc_0041ED33: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0x82EA10;
    /* nop */

loc_0041ED40: ;
    eax = MEM32(esi + -8);
    if (TEST_Z(eax, eax)) goto loc_0041ED81; /* je: equal / zero */

loc_0041ED47: ;
    eax = MEM32(esi);
    if (TEST_NZ(eax, eax)) goto loc_0041ED87; /* jne: not equal / not zero */

loc_0041ED4D: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A0583(); /* call 0x004A0583 */

loc_0041ED55: ;
    if (TEST_Z(eax, eax)) goto loc_0041ED7A; /* je: equal / zero */

loc_0041ED59: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041ED81; /* je: equal / zero */

loc_0041ED62: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x666);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041ED75: ;
    esp = esp + 0x10;
    goto loc_0041ED81;

loc_0041ED7A: ;
    MEM32(esi + 4) = 1;

loc_0041ED81: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0041EDF6; /* je: equal / zero */

loc_0041ED87: ;
    ecx = MEM32(esi + -4);
    if (TEST_NZ(ecx, ecx)) goto loc_0041EDF6; /* jne: not equal / not zero */

loc_0041ED8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_0041ED94: ;
    if (CMP_NE(eax, 0x1500F1)) goto loc_0041EDB6; /* jne: not equal / not zero */

loc_0041ED9B: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A0599(); /* call 0x004A0599 */

loc_0041EDA7: ;
    MEM32(esi + 0x21A0) = eax;
    MEM32(esi + 4) = 2;
    goto loc_0041EDF6;

loc_0041EDB6: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_0041EDF6; /* jne: not equal / not zero */

loc_0041EDBD: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0041EDC5: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_0041EDE9; /* je: equal / zero */

loc_0041EDCF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x67C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041EDE6: ;
    esp = esp + 0x10;

loc_0041EDE9: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;

loc_0041EDF6: ;
    esi = esi + 0x21AC;
    edi++;
    if (CMP_L(esi, 0x8370C0)) goto loc_0041ED40; /* jl: less (signed <) */

loc_0041EE09: ;
    (void)0; /* cmp MEM32(0x84BEFC), 3 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(MEM32(0x84BEFC), 3)) goto loc_0041EE73; /* jne: not equal / not zero */

loc_0041EE14: ;
    eax = 0x82EA10;
    /* nop */

loc_0041EE20: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_0041EE73; /* jne: not equal / not zero */

loc_0041EE25: ;
    eax = eax + 0x21AC;
    if (CMP_L(eax, 0x8370C0)) goto loc_0041EE20; /* jl: less (signed <) */

loc_0041EE31: ;
    if (CMP_NE(MEM32(esp), 0x1500F2)) goto loc_0041EE73; /* jne: not equal / not zero */

loc_0041EE3A: ;
    eax = MEM32(0x84BFA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0041EE45: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_0041EE69; /* je: equal / zero */

loc_0041EE4F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x698);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041EE66: ;
    esp = esp + 0x10;

loc_0041EE69: ;
    MEM32(0x84BFA8) = 0;

loc_0041EE73: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041EE80
 * Original: 0x0041EE80 - 0x0041EECA (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041EE80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041EE80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0x82E5AC;
    /* nop */
    eax = edi;
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0041EE97: ;
    if (TEST_Z(eax, eax)) { sub_0041EECA(); return; } /* je: equal / zero */

loc_0041EE9B: ;
    eax = edi;
    PUSH32(esp, 0); sub_00420180(); /* call 0x00420180 */

loc_0041EEA2: ;
    if (TEST_NZ(eax, eax)) { sub_0041EECA(); return; } /* jne: not equal / not zero */

loc_0041EEA6: ;
    eax = edi;
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_0041EEAD: ;
    if (TEST_Z(eax, eax)) { sub_0041EECA(); return; } /* je: equal / zero */

loc_0041EEB1: ;
    if (TEST_Z(ebx, ebx)) { sub_0041EECA(); return; } /* je: equal / zero */

loc_0041EEB5: ;
    eax = 1;
    ecx = edi;
    eax = eax << LO8(ecx);
    if (TEST_Z(eax, eax)) { sub_0041EECA(); return; } /* je: equal / zero */

loc_0041EEC2: ;
    MEM32(esi) = 1;
    g_seh_ebp = ebp; sub_0041EED0(); return; /* tail jmp 0x0041EED0 */

}

/**
 * sub_0041EEE0
 * Original: 0x0041EEE0 - 0x0041F066 (390 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041EEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0041EEE0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    ebp = 0x82E5B0;

loc_0041EEF2: ;
    eax = esi;
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0041EEF9: ;
    if (TEST_Z(eax, eax)) goto loc_0041F03C; /* je: equal / zero */

loc_0041EF01: ;
    eax = esi;
    PUSH32(esp, 0); sub_00420180(); /* call 0x00420180 */

loc_0041EF08: ;
    if (TEST_NZ(eax, eax)) goto loc_0041F03C; /* jne: not equal / not zero */

loc_0041EF10: ;
    eax = MEM32(ebp + -12);
    ebx = 0; /* xor self */
    if (TEST_NZ(eax, eax)) goto loc_0041EF1E; /* jne: not equal / not zero */

loc_0041EF19: ;
    ebx = 1;

loc_0041EF1E: ;
    eax = MEM32(ebp + -8);
    if (TEST_Z(eax, eax)) goto loc_0041EF28; /* je: equal / zero */

loc_0041EF25: ;
    ebx = ebx | 2;

loc_0041EF28: ;
    eax = MEM32(ebp + -4);
    if (TEST_Z(eax, eax)) goto loc_0041EF32; /* je: equal / zero */

loc_0041EF2F: ;
    ebx = ebx | 8;

loc_0041EF32: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x19) = eax;
    MEM16(esp + 0x1D) = LO16(eax);
    MEM8(esp + 0x1F) = LO8(eax);
    eax = MEM32(ebp);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x18) = 0;
    if (TEST_S(eax, eax)) goto loc_0041EF75; /* jl: less (signed <) */

loc_0041EF4D: ;
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_0041EF52: ;
    if (TEST_Z(eax, eax)) goto loc_0041EF75; /* je: equal / zero */

loc_0041EF56: ;
    eax = MEM32(ebp);
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_0041EF5E: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + -16);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(eax, eax)) goto loc_0041EF75; /* je: equal / zero */

loc_0041EF72: ;
    ebx = ebx | 0x10;

loc_0041EF75: ;
    eax = MEM32(0x84BF28);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(eax, eax)) goto loc_0041EF88; /* je: equal / zero */

loc_0041EF83: ;
    MEM8(esp + 0x13) = 1;

loc_0041EF88: ;
    if (CMP_EQ(ebx, MEM32(ebp + 0x28))) goto loc_0041EF92; /* je: equal / zero */

loc_0041EF8D: ;
    MEM8(esp + 0x13) = 1;

loc_0041EF92: ;
    edi = ebp + 0x2C;
    ecx = 2;
    esi = esp + 0x18;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_0041EFA9; /* je: equal / zero */

loc_0041EFA4: ;
    MEM8(esp + 0x13) = 1;

loc_0041EFA9: ;
    eax = MEM32(ebp + 4);
    if (CMP_NE(eax, MEM32(ebp + 0x34))) goto loc_0041EFCB; /* jne: not equal / not zero */

loc_0041EFB1: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0041EFC3; /* jle: less or equal (signed <=) */

loc_0041EFB5: ;
    ecx = eax;
    edi = ebp + 0x38;
    esi = ebp + 8;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0041EFCB; /* jne: not equal / not zero */

loc_0041EFC3: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0041F03C; /* je: equal / zero */

loc_0041EFCB: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0041EFD4; /* jle: less or equal (signed <=) */

loc_0041EFCF: ;
    ecx = ebp + 8;
    goto loc_0041EFD6;

loc_0041EFD4: ;
    ecx = 0; /* xor self */

loc_0041EFD6: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A0549(); /* call 0x004A0549 */

loc_0041EFED: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_0041F011; /* je: equal / zero */

loc_0041EFF7: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648990);
    PUSH32(esp, 0x705);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041F00E: ;
    esp = esp + 0x10;

loc_0041F011: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(ebp + 0x2C) = ecx;
    ecx = MEM32(ebp + 4);
    MEM32(ebp + 0x34) = ecx;
    eax = ecx;
    ecx = ecx >> 2;
    MEM32(ebp + 0x28) = ebx;
    MEM32(ebp + 0x30) = edx;
    esi = ebp + 8;
    edi = ebp + 0x38;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_0041F03C: ;
    esi = MEM32(esp + 0x14);
    esi++;
    ebp = ebp + 0x68;
    (void)0; /* cmp ebp, 0x82E750 - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_L(ebp, 0x82E750)) goto loc_0041EEF2; /* jl: less (signed <) */

loc_0041F054: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x84BF28) = 0;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0041F070
 * Original: 0x0041F070 - 0x0041F111 (161 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F070(void)
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

loc_0041F070: ;
    eax = MEM32(0x84C228);
    if (TEST_Z(eax, eax)) goto loc_0041F083; /* je: equal / zero */

loc_0041F079: ;
    MEM32(0x758644) = 1;

loc_0041F083: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0041F088: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648D10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0041F0B4; /* jbe: below or equal (unsigned <=) */

loc_0041F09C: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0041F0A1: ;
    MEMF(0x758640) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00433049(); /* call 0x00433049 */

loc_0041F0AC: ;
    eax = eax & 1;
    MEM32(0x84BEE8) = eax;

loc_0041F0B4: ;
    PUSH32(esp, 0); sub_0041E380(); /* call 0x0041E380 */

loc_0041F0B9: ;
    PUSH32(esp, 0); sub_0041E9E0(); /* call 0x0041E9E0 */

loc_0041F0BE: ;
    eax = MEM32(0x84BF5C);
    if (TEST_Z(eax, eax)) goto loc_0041F0D6; /* je: equal / zero */

loc_0041F0C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_0041F0CD: ;
    if (TEST_Z(eax, eax)) goto loc_0041F0D6; /* je: equal / zero */

loc_0041F0D1: ;
    PUSH32(esp, 0); sub_00420CB0(); /* call 0x00420CB0 */

loc_0041F0D6: ;
    PUSH32(esp, 0); sub_0041EAF0(); /* call 0x0041EAF0 */

loc_0041F0DB: ;
    PUSH32(esp, 0); sub_0041ED10(); /* call 0x0041ED10 */

loc_0041F0E0: ;
    PUSH32(esp, 0); sub_00423F60(); /* call 0x00423F60 */

loc_0041F0E5: ;
    PUSH32(esp, 0); sub_004266D0(); /* call 0x004266D0 */

loc_0041F0EA: ;
    PUSH32(esp, 0); sub_004278F0(); /* call 0x004278F0 */

loc_0041F0EF: ;
    PUSH32(esp, 0); sub_00427950(); /* call 0x00427950 */

loc_0041F0F4: ;
    PUSH32(esp, 0); sub_00424680(); /* call 0x00424680 */

loc_0041F0F9: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) { sub_0041F111(); return; } /* jne: not equal / not zero */

loc_0041F102: ;
    PUSH32(esp, 0); sub_004242C0(); /* call 0x004242C0 */

loc_0041F107: ;
    PUSH32(esp, 0); sub_0041EE80(); /* call 0x0041EE80 */

loc_0041F10C: ;
    g_seh_ebp = ebp; sub_0041EEE0(); return; /* tail jmp 0x0041EEE0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0041F120
 * Original: 0x0041F120 - 0x0041F150 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F120(void)
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

loc_0041F120: ;
    xmm0 = MEMF(0x75863C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CF8))) { sub_0041F150(); return; } /* jb: below (unsigned <) */

loc_0041F131: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0041F136: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648D10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0041F150(); return; } /* jbe: below or equal (unsigned <=) */

loc_0041F14A: ;
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0041F160
 * Original: 0x0041F160 - 0x0041F18B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F160(void)
{
    int _cf = 0; /* carry flag */

loc_0041F160: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x837748);
    PUSH32(esp, 0); sub_004A0416(); /* call 0x004A0416 */

loc_0041F16F: ;
    ecx = MEM32(esp);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & ecx;
    MEM32(0x84BEEC) = eax;
    MEM32(0x758644) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041F190
 * Original: 0x0041F190 - 0x0041F1E5 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F190(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041F190: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041F1DA; /* je: equal / zero */

loc_0041F199: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648974);
    PUSH32(esp, 0x794);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041F1B0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041F1DA; /* je: equal / zero */

loc_0041F1BC: ;
    (void)0; /* cmp esi, MEM32(0x84BEEC) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEEC))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648954);
    PUSH32(esp, 0x795);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041F1D7: ;
    esp = esp + 0x10;

loc_0041F1DA: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + 0x837754;
    esp += 4; return; /* ret */

}

/**
 * sub_0041F1F0
 * Original: 0x0041F1F0 - 0x0041F22B (59 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F1F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041F1F0: ;
    edx = MEM32(0x84BEEC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(edx & edx, 0)) goto loc_0041F225; /* jle: less or equal (signed <=) */

loc_0041F1FF: ;
    esi = MEM32(ecx);
    edi = MEM32(ecx + 4);
    ecx = 0x837748;
    /* nop */

loc_0041F210: ;
    ebx = MEM32(ecx);
    if (CMP_NE(ebx, esi)) goto loc_0041F21D; /* jne: not equal / not zero */

loc_0041F216: ;
    ebx = MEM32(ecx + 4);
    if (CMP_EQ(ebx, edi)) { sub_0041F22B(); return; } /* je: equal / zero */

loc_0041F21D: ;
    eax++;
    ecx = ecx + 0x70;
    if (CMP_L(eax, edx)) goto loc_0041F210; /* jl: less (signed <) */

loc_0041F225: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0041F240
 * Original: 0x0041F240 - 0x0041F29B (91 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F240(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041F240: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041F28D; /* je: equal / zero */

loc_0041F24C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648974);
    PUSH32(esp, 0x7B4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041F263: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041F28D; /* je: equal / zero */

loc_0041F26F: ;
    (void)0; /* cmp esi, MEM32(0x84BEEC) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEEC))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648954);
    PUSH32(esp, 0x7B5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041F28A: ;
    esp = esp + 0x10;

loc_0041F28D: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    eax = MEM32(esi + 0x837764);
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041F2A0
 * Original: 0x0041F2A0 - 0x0041F2F5 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F2A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041F2A0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041F2EA; /* je: equal / zero */

loc_0041F2A9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648974);
    PUSH32(esp, 0x7C2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041F2C0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041F2EA; /* je: equal / zero */

loc_0041F2CC: ;
    (void)0; /* cmp esi, MEM32(0x84BEEC) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BEEC))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648954);
    PUSH32(esp, 0x7C3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041F2E7: ;
    esp = esp + 0x10;

loc_0041F2EA: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + 0x837768;
    esp += 4; return; /* ret */

}

/**
 * sub_0041F300
 * Original: 0x0041F300 - 0x0041F395 (149 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0041F300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x1C4;
    edx = MEM32(0x84BE58);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(edx, ebx)) goto loc_0041F369; /* je: equal / zero */

loc_0041F31D: ;
    (void)0; /* cmp MEM32(0x84BEFC), ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(0x84BEFC), ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648924);
    PUSH32(esp, 0x807);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041F338: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(edx, ebx)) goto loc_0041F369; /* je: equal / zero */

loc_0041F345: ;
    (void)0; /* cmp MEM32(0x84BEF4), ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BEF4), ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6488F8);
    PUSH32(esp, 0x808);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041F360: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041F369: ;
    eax = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    ecx = 0x6E;
    edi = esp + 0x18;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_GE(esi, ebx)) { sub_0041F395(); return; } /* jge: greater or equal (signed >=) */

loc_0041F382: ;
    if (CMP_GE(MEM32(ebp + 0xC), ebx)) { sub_0041F395(); return; } /* jge: greater or equal (signed >=) */

loc_0041F387: ;
    if (CMP_GE(MEM32(ebp + 0x14), ebx)) { sub_0041F395(); return; } /* jge: greater or equal (signed >=) */

loc_0041F38C: ;
    if (CMP_GE(MEM32(ebp + 0x1C), ebx)) { sub_0041F395(); return; } /* jge: greater or equal (signed >=) */

loc_0041F391: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0041F39A(); return; /* tail jmp 0x0041F39A */

}

/**
 * sub_0041F7B0
 * Original: 0x0041F7B0 - 0x0041F894 (228 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F7B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041F7B0: ;
    eax = MEM32(0x84BE58);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0041F806; /* je: equal / zero */

loc_0041F7BC: ;
    (void)0; /* cmp MEM32(0x84BEFC), esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BEFC), esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648924);
    PUSH32(esp, 0x879);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041F7D7: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_0041F806; /* je: equal / zero */

loc_0041F7E3: ;
    (void)0; /* cmp MEM32(0x84BEF4), esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(0x84BEF4), esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6488F8);
    PUSH32(esp, 0x87A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041F7FE: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041F806: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    ecx = 6;
    MEM32(0x82BFBC) = 2;
    MEM32(0x82BFC0) = ecx;
    MEM32(0x82BFC4) = 7;
    MEM32(0x82BFC8) = 8;
    MEM32(0x82BFCC) = 0x12;
    MEM32(0x82BFD0) = 0x14;
    MEM32(0x84BF08) = ecx;
    if (CMP_EQ(eax, esi)) goto loc_0041F863; /* je: equal / zero */

loc_0041F84D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6486C0);
    PUSH32(esp, 0x890);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041F860: ;
    esp = esp + 0x10;

loc_0041F863: ;
    PUSH32(esp, 0); sub_0041FF30(); /* call 0x0041FF30 */

loc_0041F868: ;
    eax = MEM32(0x84BF08);
    PUSH32(esp, 0x84BEF0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82BFBC);
    MEM32(0x84BEF8) = esi;
    PUSH32(esp, 0); sub_004A0467(); /* call 0x004A0467 */

loc_0041F884: ;
    if (CMP_NE(eax, esi)) { sub_0041F894(); return; } /* jne: not equal / not zero */

loc_0041F888: ;
    MEM32(0x84BEFC) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041F8D0
 * Original: 0x0041F8D0 - 0x0041F98E (190 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041F8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0041F8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x1C4;
    edx = MEM32(0x84BE58);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(edx, ebx)) goto loc_0041F962; /* je: equal / zero */

loc_0041F8ED: ;
    (void)0; /* cmp MEM32(0x84BEFC), 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(0x84BEFC), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648694);
    PUSH32(esp, 0x8B2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041F909: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(edx, ebx)) goto loc_0041F962; /* je: equal / zero */

loc_0041F916: ;
    (void)0; /* cmp MEM32(0x84BEF0), ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(0x84BEF0), ebx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648670);
    PUSH32(esp, 0x8B3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041F931: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(edx, ebx)) goto loc_0041F962; /* je: equal / zero */

loc_0041F93E: ;
    (void)0; /* cmp MEM32(0x84BEF4), ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(0x84BEF4), ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6488F8);
    PUSH32(esp, 0x8B4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_0041F959: ;
    edx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_0041F962: ;
    eax = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    ecx = 0x6E;
    edi = esp + 0x18;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_GE(esi, ebx)) { sub_0041F98E(); return; } /* jge: greater or equal (signed >=) */

loc_0041F97B: ;
    if (CMP_GE(MEM32(ebp + 0xC), ebx)) { sub_0041F98E(); return; } /* jge: greater or equal (signed >=) */

loc_0041F980: ;
    if (CMP_GE(MEM32(ebp + 0x14), ebx)) { sub_0041F98E(); return; } /* jge: greater or equal (signed >=) */

loc_0041F985: ;
    if (CMP_GE(MEM32(ebp + 0x1C), ebx)) { sub_0041F98E(); return; } /* jge: greater or equal (signed >=) */

loc_0041F98A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0041F993(); return; /* tail jmp 0x0041F993 */

}

/**
 * sub_0041FCF0
 * Original: 0x0041FCF0 - 0x0041FD3F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041FCF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041FCF0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0041FD37; /* je: equal / zero */

loc_0041FCF9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x95E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041FD10: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0041FD37; /* je: equal / zero */

loc_0041FD1C: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x95F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041FD34: ;
    esp = esp + 0x10;

loc_0041FD37: ;
    eax = MEM32(esi * 4 + 0x82DDA4);
    esp += 4; return; /* ret */

}

/**
 * sub_0041FD40
 * Original: 0x0041FD40 - 0x0041FD74 (52 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041FD40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041FD40: ;
    ecx = MEM32(0x84BEFC);
    eax = 5;
    if (CMP_EQ(ecx, eax)) goto loc_0041FD73; /* je: equal / zero */

loc_0041FD4F: ;
    MEM32(0x84BEFC) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x84BF00) = eax;
    eax = 0; /* xor self */
    MEM32(0x82DDA4) = eax;
    MEM32(0x82DDA8) = eax;
    MEM32(0x82DDAC) = eax;
    MEM32(0x82DDB0) = eax;

loc_0041FD73: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0041FD80
 * Original: 0x0041FD80 - 0x0041FE0D (141 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041FD80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041FD80: ;
    eax = MEM32(0x84BE58);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0041FDCA; /* je: equal / zero */

loc_0041FD8C: ;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi, edi)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x978);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041FDA3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, edi)) goto loc_0041FDCA; /* je: equal / zero */

loc_0041FDAF: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x979);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0041FDC7: ;
    esp = esp + 0x10;

loc_0041FDCA: ;
    if (CMP_EQ(MEM32(0x84BF00), ebx)) goto loc_0041FE04; /* je: equal / zero */

loc_0041FDD2: ;
    ecx = MEM32(0x84BEFC);
    eax = 5;
    if (CMP_EQ(ecx, eax)) goto loc_0041FE0B; /* je: equal / zero */

loc_0041FDE1: ;
    MEM32(0x84BEFC) = eax;
    MEM32(0x84BF00) = ebx;
    MEM32(0x82DDA4) = edi;
    MEM32(0x82DDA8) = edi;
    MEM32(0x82DDAC) = edi;
    MEM32(0x82DDB0) = edi;

loc_0041FE04: ;
    MEM32(esi * 4 + 0x82DDA4) = ebx;

loc_0041FE0B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041FE10
 * Original: 0x0041FE10 - 0x0041FEF9 (233 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041FE10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041FE10: ;
    eax = MEM32(0x84BF04);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0041FE4C; /* je: equal / zero */

loc_0041FE1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0041FE22: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_0041FE46; /* je: equal / zero */

loc_0041FE2C: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x98A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041FE43: ;
    esp = esp + 0x10;

loc_0041FE46: ;
    MEM32(0x84BF04) = esi;

loc_0041FE4C: ;
    if (CMP_NE(MEM32(0x84BF00), 0x80151200u)) { sub_0041FEF9(); return; } /* jne: not equal / not zero */

loc_0041FE5C: ;
    eax = MEM32(0x84BEF0);
    if (CMP_EQ(eax, esi)) goto loc_0041FE95; /* je: equal / zero */

loc_0041FE65: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0041FE6B: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_0041FE8F; /* je: equal / zero */

loc_0041FE75: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x998);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041FE8C: ;
    esp = esp + 0x10;

loc_0041FE8F: ;
    MEM32(0x84BEF0) = esi;

loc_0041FE95: ;
    PUSH32(esp, 0); sub_004224F0(); /* call 0x004224F0 */

loc_0041FE9A: ;
    eax = MEM32(0x84BFB8);
    if (CMP_EQ(eax, esi)) goto loc_0041FED3; /* je: equal / zero */

loc_0041FEA3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0041FEA9: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_0041FECD; /* je: equal / zero */

loc_0041FEB3: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x9A8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041FECA: ;
    esp = esp + 0x10;

loc_0041FECD: ;
    MEM32(0x84BFB8) = esi;

loc_0041FED3: ;
    MEM32(0x84BEFC) = esi;
    MEM32(0x84BF00) = esi;
    MEM32(0x82DDA4) = esi;
    MEM32(0x82DDA8) = esi;
    MEM32(0x82DDAC) = esi;
    MEM32(0x82DDB0) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041FF10
 * Original: 0x0041FF10 - 0x0041FF2C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041FF10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041FF10: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0041FF13: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422690(); /* call 0x00422690 */

loc_0041FF1A: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_0041FF13; /* jl: less (signed <) */

loc_0041FF20: ;
    MEM32(0x84BEFC) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0041FF30
 * Original: 0x0041FF30 - 0x00420054 (292 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0041FF30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0041FF30: ;
    eax = MEM32(0x84BEF0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0041FF6C; /* je: equal / zero */

loc_0041FF3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0041FF42: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_0041FF66; /* je: equal / zero */

loc_0041FF4C: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0xA0E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041FF63: ;
    esp = esp + 0x10;

loc_0041FF66: ;
    MEM32(0x84BEF0) = esi;

loc_0041FF6C: ;
    eax = MEM32(0x84BF04);
    if (CMP_EQ(eax, esi)) goto loc_0041FFA5; /* je: equal / zero */

loc_0041FF75: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0041FF7B: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_0041FF9F; /* je: equal / zero */

loc_0041FF85: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0xA15);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0041FF9C: ;
    esp = esp + 0x10;

loc_0041FF9F: ;
    MEM32(0x84BF04) = esi;

loc_0041FFA5: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(0x82E5A0) = esi;
    MEM32(0x82E5A4) = esi;
    MEM32(0x82E5A8) = esi;
    MEM32(0x82E5AC) = esi;
    MEM32(0x82E5B4) = esi;
    MEM32(0x82E5E4) = esi;
    MEM32(0x82E608) = esi;
    MEM32(0x82E60C) = esi;
    MEM32(0x82E610) = esi;
    MEM32(0x82E614) = esi;
    MEM32(0x82E61C) = esi;
    MEM32(0x82E64C) = esi;
    MEM32(0x82E670) = esi;
    MEM32(0x82E674) = esi;
    MEM32(0x82E678) = esi;
    MEM32(0x82E67C) = esi;
    MEM32(0x82E684) = esi;
    MEM32(0x82E6B4) = esi;
    MEM32(0x82E6D8) = esi;
    MEM32(0x82E6DC) = esi;
    MEM32(0x82E6E0) = esi;
    MEM32(0x82E6E4) = esi;
    MEM32(0x82E6EC) = esi;
    MEM32(0x82E71C) = esi;
    MEM32(0x84BEFC) = esi;
    MEM32(0x82E5B0) = eax;
    MEM32(0x82E618) = eax;
    MEM32(0x82E680) = eax;
    MEM32(0x82E6E8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00420060
 * Original: 0x00420060 - 0x0042009E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420060: ;
    eax = MEM32(0x84BEF4);
    if (TEST_Z(eax, eax)) goto loc_0042009D; /* je: equal / zero */

loc_00420069: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0042006F: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00420093; /* je: equal / zero */

loc_00420079: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0xA30);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00420090: ;
    esp = esp + 0x10;

loc_00420093: ;
    MEM32(0x84BEF4) = 0;

loc_0042009D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004200A0
 * Original: 0x004200A0 - 0x0042010B (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004200A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004200A0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004200EA; /* je: equal / zero */

loc_004200AC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xA3D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004200C3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004200EA; /* je: equal / zero */

loc_004200CF: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xA3E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004200E7: ;
    esp = esp + 0x10;

loc_004200EA: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) { sub_0042010B(); return; } /* jne: not equal / not zero */

loc_004200F3: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_004200F8: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    ecx = MEM32(esi + eax);
    ecx = ecx | MEM32(esi + eax + 4);
    if ((ecx == 0)) { sub_0042010B(); return; } /* je: equal / zero */

loc_00420104: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00420110
 * Original: 0x00420110 - 0x00420177 (103 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420110(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420110: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042015A; /* je: equal / zero */

loc_0042011C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xA53);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420133: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042015A; /* je: equal / zero */

loc_0042013F: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xA54);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420157: ;
    esp = esp + 0x10;

loc_0042015A: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) { sub_00420177(); return; } /* jne: not equal / not zero */

loc_00420163: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_00420168: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    eax = ZX16(MEM16(esi + eax + 0xA));
    eax = ~eax;
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00420180
 * Original: 0x00420180 - 0x004201E9 (105 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420180(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00420180: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004201CA; /* je: equal / zero */

loc_0042018C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xA95);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004201A3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004201CA; /* je: equal / zero */

loc_004201AF: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xA96);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004201C7: ;
    esp = esp + 0x10;

loc_004201CA: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) { sub_004201E9(); return; } /* jne: not equal / not zero */

loc_004201D3: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_004201D8: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    eax = MEM32(esi + eax + 8);
    SET_LO8(eax, LO8(eax) & 3);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

}

/**
 * sub_004201F0
 * Original: 0x004201F0 - 0x00420254 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004201F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004201F0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042023A; /* je: equal / zero */

loc_004201FC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xAAB);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420213: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042023A; /* je: equal / zero */

loc_0042021F: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xAAC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420237: ;
    esp = esp + 0x10;

loc_0042023A: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) { sub_00420254(); return; } /* jne: not equal / not zero */

loc_00420243: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_00420248: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    eax = MEM32(esi + eax + 8);
    eax = eax & 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00420260
 * Original: 0x00420260 - 0x004202C1 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420260: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004202AA; /* je: equal / zero */

loc_0042026C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xAC1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420283: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004202AA; /* je: equal / zero */

loc_0042028F: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xAC2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004202A7: ;
    esp = esp + 0x10;

loc_004202AA: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) { sub_004202C1(); return; } /* jne: not equal / not zero */

loc_004202B3: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_004202B8: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    eax = eax + esi + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004202D0
 * Original: 0x004202D0 - 0x00420336 (102 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004202D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004202D0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042031A; /* je: equal / zero */

loc_004202DC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xAD7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004202F3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042031A; /* je: equal / zero */

loc_004202FF: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xAD8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420317: ;
    esp = esp + 0x10;

loc_0042031A: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) { sub_00420336(); return; } /* jne: not equal / not zero */

loc_00420323: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_00420328: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    ecx = eax;
    eax = MEM32(esi + ecx);
    edx = MEM32(esi + ecx + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00420340
 * Original: 0x00420340 - 0x00420399 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420340(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420340: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042038A; /* je: equal / zero */

loc_0042034C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xB5D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420363: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042038A; /* je: equal / zero */

loc_0042036F: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xB5E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420387: ;
    esp = esp + 0x10;

loc_0042038A: ;
    eax = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x68);
    MEM32(esi + 0x82E5A0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004203A0
 * Original: 0x004203A0 - 0x004203F9 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004203A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004203A0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004203EA; /* je: equal / zero */

loc_004203AC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xB7F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004203C3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004203EA; /* je: equal / zero */

loc_004203CF: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xB80);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004203E7: ;
    esp = esp + 0x10;

loc_004203EA: ;
    eax = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x68);
    MEM32(esi + 0x82E5A4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00420400
 * Original: 0x00420400 - 0x00420455 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420400(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420400: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042044A; /* je: equal / zero */

loc_0042040C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xB90);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420423: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042044A; /* je: equal / zero */

loc_0042042F: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xB91);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420447: ;
    esp = esp + 0x10;

loc_0042044A: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x68);
    eax = MEM32(esi + 0x82E5A4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00420460
 * Original: 0x00420460 - 0x004204B9 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420460: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004204AA; /* je: equal / zero */

loc_0042046C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xBA1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420483: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004204AA; /* je: equal / zero */

loc_0042048F: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xBA2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004204A7: ;
    esp = esp + 0x10;

loc_004204AA: ;
    eax = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x68);
    MEM32(esi + 0x82E5A8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004204C0
 * Original: 0x004204C0 - 0x00420564 (164 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004204C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004204C0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00420559; /* je: equal / zero */

loc_004204D0: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xBC3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004204E7: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420559; /* je: equal / zero */

loc_004204F3: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xBC4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042050B: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420559; /* je: equal / zero */

loc_00420517: ;
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi, 0xFFFFFFFFu)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485D0);
    PUSH32(esp, 0xBC5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042052F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420559; /* je: equal / zero */

loc_0042053B: ;
    (void)0; /* cmp edi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0xBC6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420556: ;
    esp = esp + 0x10;

loc_00420559: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x68);
    MEM32(esi + 0x82E5B0) = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00420570
 * Original: 0x00420570 - 0x00420763 (499 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00420570: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_LE(esi & esi, 0)) goto loc_004205C1; /* jle: less or equal (signed <=) */

loc_0042057F: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004205A8; /* je: equal / zero */

loc_00420588: ;
    ecx = MEM32(0x84BF58);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648578);
    PUSH32(esp, 0xC1C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004205A5: ;
    esp = esp + 0x10;

loc_004205A8: ;
    edx = esi;
    edx = edx << 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_004205B3: ;
    esp = esp + 4;
    MEM32(0x84BF58) = eax;
    MEM32(0x84BF50) = esi;

loc_004205C1: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004205EA; /* je: equal / zero */

loc_004205CA: ;
    (void)0; /* cmp edi, 0x32 - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(edi, 0x32)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648548);
    PUSH32(esp, 0xC21);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004205E2: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_004205EA: ;
    if (CMP_LE(edi & edi, 0)) goto loc_004205F4; /* jle: less or equal (signed <=) */

loc_004205EE: ;
    MEM32(0x84BF68) = edi;

loc_004205F4: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0042063C; /* jle: less or equal (signed <=) */

loc_004205F8: ;
    if (TEST_Z(eax, eax)) goto loc_0042061C; /* je: equal / zero */

loc_004205FC: ;
    edx = MEM32(0x84BF78);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648518);
    PUSH32(esp, 0xC2C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420619: ;
    esp = esp + 0x10;

loc_0042061C: ;
    eax = ebx * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00420629: ;
    MEM32(0x84BF78) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    MEM32(0x84BF70) = ebx;

loc_0042063C: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0042064A; /* jle: less or equal (signed <=) */

loc_00420644: ;
    MEM32(0x84BF7C) = ecx;

loc_0042064A: ;
    if (CMP_LE(ebp & ebp, 0)) goto loc_00420690; /* jle: less or equal (signed <=) */

loc_0042064E: ;
    if (TEST_Z(eax, eax)) goto loc_00420672; /* je: equal / zero */

loc_00420652: ;
    esi = MEM32(0x84BF8C);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6484E8);
    PUSH32(esp, 0xC3D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042066F: ;
    esp = esp + 0x10;

loc_00420672: ;
    edx = ebp;
    edx = edx << 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0042067D: ;
    MEM32(0x84BF8C) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    MEM32(0x84BF84) = ebp;

loc_00420690: ;
    if (TEST_Z(eax, eax)) goto loc_00420706; /* je: equal / zero */

loc_00420694: ;
    edi = MEM32(0x84BF68);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(edi & edi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6484C8);
    PUSH32(esp, 0xC43);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004206B1: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420706; /* je: equal / zero */

loc_004206BD: ;
    edi = MEM32(0x84BF7C);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_G(edi & edi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6484A4);
    PUSH32(esp, 0xC44);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004206DA: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420706; /* je: equal / zero */

loc_004206E6: ;
    esi = MEM32(0x84BF94);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648480);
    PUSH32(esp, 0xC45);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420703: ;
    esp = esp + 0x10;

loc_00420706: ;
    eax = MEM32(0x84BF7C);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x84BF68));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00420718: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(0x84BF94) = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_0042074C; /* je: equal / zero */

loc_0042072C: ;
    edx = MEM32(0x84BF98);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648454);
    PUSH32(esp, 0xC47);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420749: ;
    esp = esp + 0x10;

loc_0042074C: ;
    eax = MEM32(0x84BF68);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0042075A: ;
    esp = esp + 4;
    MEM32(0x84BF98) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00420770
 * Original: 0x00420770 - 0x004207C1 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420770: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004207BA; /* je: equal / zero */

loc_00420779: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648438);
    PUSH32(esp, 0xC54);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420790: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004207BA; /* je: equal / zero */

loc_0042079C: ;
    (void)0; /* cmp esi, MEM32(0x84BF34) - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi, MEM32(0x84BF34))) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648414);
    PUSH32(esp, 0xC55);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004207B7: ;
    esp = esp + 0x10;

loc_004207BA: ;
    MEM32(0x84BF30) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_004207D0
 * Original: 0x004207D0 - 0x00420821 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004207D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004207D0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042081A; /* je: equal / zero */

loc_004207D9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6483F8);
    PUSH32(esp, 0xC63);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004207F0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042081A; /* je: equal / zero */

loc_004207FC: ;
    (void)0; /* cmp esi, MEM32(0x84BF30) - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(esi, MEM32(0x84BF30))) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6483D4);
    PUSH32(esp, 0xC64);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420817: ;
    esp = esp + 0x10;

loc_0042081A: ;
    MEM32(0x84BF34) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00420830
 * Original: 0x00420830 - 0x00420881 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420830(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420830: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042087A; /* je: equal / zero */

loc_00420839: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648438);
    PUSH32(esp, 0xC72);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420850: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042087A; /* je: equal / zero */

loc_0042085C: ;
    (void)0; /* cmp esi, MEM32(0x84BF3C) - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi, MEM32(0x84BF3C))) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6483AC);
    PUSH32(esp, 0xC73);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420877: ;
    esp = esp + 0x10;

loc_0042087A: ;
    MEM32(0x84BF38) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00420890
 * Original: 0x00420890 - 0x004208E1 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420890: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004208DA; /* je: equal / zero */

loc_00420899: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6483F8);
    PUSH32(esp, 0xC81);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004208B0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004208DA; /* je: equal / zero */

loc_004208BC: ;
    (void)0; /* cmp esi, MEM32(0x84BF30) - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(esi, MEM32(0x84BF30))) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6483D4);
    PUSH32(esp, 0xC82);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004208D7: ;
    esp = esp + 0x10;

loc_004208DA: ;
    MEM32(0x84BF3C) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_004208F0
 * Original: 0x004208F0 - 0x004209EC (252 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004208F0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004208F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ecx;
    if (TEST_Z(eax, eax)) goto loc_00420990; /* je: equal / zero */

loc_00420904: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xCB5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042091B: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420990; /* je: equal / zero */

loc_00420927: ;
    (void)0; /* cmp esi, MEM32(0x84BF54) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BF54))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648314);
    PUSH32(esp, 0xCB6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420942: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420990; /* je: equal / zero */

loc_0042094E: ;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi, 1)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6482F4);
    PUSH32(esp, 0xCB7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420966: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420990; /* je: equal / zero */

loc_00420972: ;
    (void)0; /* cmp edi, 0xFFFF - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(edi, 0xFFFF)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6482C8);
    PUSH32(esp, 0xCB8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042098D: ;
    esp = esp + 0x10;

loc_00420990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00420996: ;
    esp = esp + 4;
    ecx = 0x18F;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    eax = MEM32(0x84BE58);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(edx, LO8(edx) + 1);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 8) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_004209CA; /* je: equal / zero */

loc_004209B1: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64828C);
    PUSH32(esp, 0xCB9);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004209C7: ;
    esp = esp + 0x10;

loc_004209CA: ;
    edx = MEM32(0x84BF58);
    esi = esi << 4;
    eax = esi + edx;
    edi = edi | 0x100000;
    MEM32(eax) = edi;
    POP32(esp, edi);
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004209F0
 * Original: 0x004209F0 - 0x00420B86 (406 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004209F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004209F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84BE58);
    if (TEST_Z(edi, edi)) goto loc_00420A4C; /* je: equal / zero */

loc_004209FC: ;
    esi = MEM32(0x84BF2C);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648260);
    PUSH32(esp, 0xCE7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00420A19: ;
    edi = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(edi, edi)) goto loc_00420A4C; /* je: equal / zero */

loc_00420A26: ;
    esi = MEM32(0x758648);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_S(esi, esi)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648238);
    PUSH32(esp, 0xCE8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00420A43: ;
    edi = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00420A4C: ;
    esi = MEM32(0x84BFA0);
    eax = eax | 0xFFFFFFFFu;
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00420A72; /* jle: less or equal (signed <=) */

loc_00420A5B: ;
    edx = MEM32(0x84BF9C);

loc_00420A61: ;
    if (CMP_EQ(MEM32(edx), 0)) goto loc_00420A70; /* je: equal / zero */

loc_00420A66: ;
    ecx++;
    edx = edx + 0x20;
    if (CMP_L(ecx, esi)) goto loc_00420A61; /* jl: less (signed <) */

loc_00420A6E: ;
    goto loc_00420A72;

loc_00420A70: ;
    eax = ecx;

loc_00420A72: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x758648) = eax;
    if (TEST_S(eax, eax)) goto loc_00420B83; /* jl: less (signed <) */

loc_00420A7F: ;
    if (TEST_Z(edi, edi)) goto loc_00420AFF; /* je: equal / zero */

loc_00420A83: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648AAC);
    PUSH32(esp, 0xCF1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00420A96: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420AFA; /* je: equal / zero */

loc_00420AA2: ;
    edx = MEM32(0x758648);
    (void)0; /* cmp edx, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(edx, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648A2C);
    PUSH32(esp, 0xCF2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420AC3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420AFA; /* je: equal / zero */

loc_00420ACF: ;
    edx = MEM32(0x758648);
    ecx = MEM32(0x84BF9C);
    edx = edx << 5;
    (void)0; /* cmp MEM32(edx + ecx), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(edx + ecx), 0)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6481F8);
    PUSH32(esp, 0xCF3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420AF7: ;
    esp = esp + 0x10;

loc_00420AFA: ;
    eax = MEM32(0x758648);

loc_00420AFF: ;
    ecx = MEM32(0x84BF9C);
    esi = MEM32(0x84BF30);
    eax = eax << 5;
    eax = eax + ecx;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 0;
    eax = MEM32(0x84BF34);
    esi = esi - eax;
    if (((int32_t)esi >= 0)) goto loc_00420B28; /* jns: not sign (positive) */

loc_00420B26: ;
    esi = 0; /* xor self */

loc_00420B28: ;
    edi = MEM32(0x84BF38);
    ecx = MEM32(0x84BF3C);
    edi = edi - ecx;
    if (((int32_t)edi >= 0)) goto loc_00420B3A; /* jns: not sign (positive) */

loc_00420B38: ;
    edi = 0; /* xor self */

loc_00420B3A: ;
    edx = MEM32(0x84BF58);
    PUSH32(esp, 0x84BF2C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(0x84BF54);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0488(); /* call 0x004A0488 */

loc_00420B58: ;
    if (TEST_NZ(eax, eax)) goto loc_00420B7E; /* jne: not equal / not zero */

loc_00420B5C: ;
    eax = MEM32(0x84BF34);
    ecx = MEM32(0x84BF3C);
    MEM32(0x84BF40) = eax;
    MEM32(0x84BF44) = esi;
    MEM32(0x84BF48) = ecx;
    MEM32(0x84BF4C) = edi;

loc_00420B7E: ;
    eax = MEM32(0x758648);

loc_00420B83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00420B90
 * Original: 0x00420B90 - 0x00420C06 (118 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420B90: ;
    eax = MEM32(0x84BF2C);
    if (TEST_Z(eax, eax)) { sub_00420C06(); return; } /* je: equal / zero */

loc_00420B99: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00420BF1; /* je: equal / zero */

loc_00420BA2: ;
    ecx = MEM32(0x758648);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ecx & ecx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648AAC);
    PUSH32(esp, 0xD1D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420BBF: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420BF1; /* je: equal / zero */

loc_00420BCB: ;
    ecx = MEM32(0x84BFA0);
    edx = MEM32(0x758648);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(edx, ecx)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648A2C);
    PUSH32(esp, 0xD1E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420BEE: ;
    esp = esp + 0x10;

loc_00420BF1: ;
    eax = MEM32(0x758648);
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_00420BFB: ;
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    edx++;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00420C10
 * Original: 0x00420C10 - 0x00420C68 (88 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420C10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420C10: ;
    eax = MEM32(0x84BF2C);
    if (TEST_Z(eax, eax)) goto loc_00420C4D; /* je: equal / zero */

loc_00420C19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00420C1F: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00420C43; /* je: equal / zero */

loc_00420C29: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0xD35);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00420C40: ;
    esp = esp + 0x10;

loc_00420C43: ;
    MEM32(0x84BF2C) = 0;

loc_00420C4D: ;
    eax = MEM32(0x758648);
    if (TEST_S(eax, eax)) goto loc_00420C67; /* jl: less (signed <) */

loc_00420C56: ;
    PUSH32(esp, eax);
    MEM32(0x758648) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00421BE0(); /* call 0x00421BE0 */

loc_00420C66: ;
    POP32(esp, ecx);

loc_00420C67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00420C70
 * Original: 0x00420C70 - 0x00420CAD (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00420C70: ;
    eax = MEM32(0x84BF2C);
    if (TEST_Z(eax, eax)) goto loc_00420CA8; /* je: equal / zero */

loc_00420C79: ;
    eax = MEM32(0x758648);
    if (TEST_S(eax, eax)) goto loc_00420CA8; /* jl: less (signed <) */

loc_00420C82: ;
    PUSH32(esp, 0); sub_00421B50(); /* call 0x00421B50 */

loc_00420C87: ;
    if (TEST_Z(eax, eax)) goto loc_00420CA8; /* je: equal / zero */

loc_00420C8B: ;
    eax = MEM32(0x758648);
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_00420C95: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, 0x84BF5C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A04D2(); /* call 0x004A04D2 */

loc_00420CA8: ;
    g_seh_ebp = ebp; sub_00420C10(); return; /* tail jmp 0x00420C10 */

}

/**
 * sub_00420CB0
 * Original: 0x00420CB0 - 0x00420CEE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420CB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420CB0: ;
    eax = MEM32(0x84BF5C);
    if (TEST_Z(eax, eax)) goto loc_00420CED; /* je: equal / zero */

loc_00420CB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00420CBF: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00420CE3; /* je: equal / zero */

loc_00420CC9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0xD6B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00420CE0: ;
    esp = esp + 0x10;

loc_00420CE3: ;
    MEM32(0x84BF5C) = 0;

loc_00420CED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00420CF0
 * Original: 0x00420CF0 - 0x00420D72 (130 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420CF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00420D3B; /* je: equal / zero */

loc_00420CFA: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648388);
    PUSH32(esp, 0xD77);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420D11: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420D3B; /* je: equal / zero */

loc_00420D1D: ;
    (void)0; /* cmp esi, MEM32(0x84BF50) - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(esi, MEM32(0x84BF50))) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648358);
    PUSH32(esp, 0xD78);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420D38: ;
    esp = esp + 0x10;

loc_00420D3B: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_00420D40: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 2)) ? 1 : 0); /* sete */
    MEM8(esp) = LO8(eax);
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00420D6A; /* je: equal / zero */

loc_00420D52: ;
    ecx = MEM32(esp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6481BC);
    PUSH32(esp, 0xD79);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420D67: ;
    esp = esp + 0x10;

loc_00420D6A: ;
    MEM32(0x84BF54) = esi;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00420D80
 * Original: 0x00420D80 - 0x00420E74 (244 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420D80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420D80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00420E1D; /* je: equal / zero */

loc_00420D91: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xD89);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420DA8: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420E1D; /* je: equal / zero */

loc_00420DB4: ;
    (void)0; /* cmp esi, MEM32(0x84BF54) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BF54))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648314);
    PUSH32(esp, 0xD8A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420DCF: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420E1D; /* je: equal / zero */

loc_00420DDB: ;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi, 1)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6482F4);
    PUSH32(esp, 0xD8B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420DF3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420E1D; /* je: equal / zero */

loc_00420DFF: ;
    (void)0; /* cmp edi, 0xFFFF - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(edi, 0xFFFF)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6482C8);
    PUSH32(esp, 0xD8C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420E1A: ;
    esp = esp + 0x10;

loc_00420E1D: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_00420E22: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 2)) ? 1 : 0); /* sete */
    MEM8(esp + 4) = LO8(eax);
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00420E4E; /* je: equal / zero */

loc_00420E35: ;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6481BC);
    PUSH32(esp, 0xD8D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420E4B: ;
    esp = esp + 0x10;

loc_00420E4E: ;
    edx = MEM32(0x84BF58);
    ecx = MEM32(esp + 0xC);
    esi = esi << 4;
    eax = esi + edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = 1;
    MEM32(eax) = edi;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00420E80
 * Original: 0x00420E80 - 0x00420ED1 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420E80: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00420ECA; /* je: equal / zero */

loc_00420E89: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(esi & esi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64819C);
    PUSH32(esp, 0xDD7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420EA0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420ECA; /* je: equal / zero */

loc_00420EAC: ;
    (void)0; /* cmp esi, MEM32(0x84BF68) - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(esi, MEM32(0x84BF68))) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648174);
    PUSH32(esp, 0xDD8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420EC7: ;
    esp = esp + 0x10;

loc_00420ECA: ;
    MEM32(0x84BF6C) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00420EE0
 * Original: 0x00420EE0 - 0x00420F31 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420EE0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00420F2A; /* je: equal / zero */

loc_00420EE9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648388);
    PUSH32(esp, 0xDE4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420F00: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420F2A; /* je: equal / zero */

loc_00420F0C: ;
    (void)0; /* cmp esi, MEM32(0x84BF70) - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(esi, MEM32(0x84BF70))) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64813C);
    PUSH32(esp, 0xDE5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420F27: ;
    esp = esp + 0x10;

loc_00420F2A: ;
    MEM32(0x84BF74) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00420F40
 * Original: 0x00420F40 - 0x00420FC7 (135 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420F40: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00420FB2; /* je: equal / zero */

loc_00420F49: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xDF2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420F60: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420FB2; /* je: equal / zero */

loc_00420F6C: ;
    (void)0; /* cmp esi, MEM32(0x84BF74) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BF74))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648110);
    PUSH32(esp, 0xDF3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420F87: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00420FB2; /* je: equal / zero */

loc_00420F93: ;
    (void)0; /* cmp MEM32(0x84BF7C), 8 - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(MEM32(0x84BF7C), 8)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6480EC);
    PUSH32(esp, 0xDF4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420FAF: ;
    esp = esp + 0x10;

loc_00420FB2: ;
    eax = MEM32(0x84BF78);
    MEM32(eax + esi * 8) = 0;
    MEM32(eax + esi * 8 + 4) = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00420FD0
 * Original: 0x00420FD0 - 0x0042105B (139 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00420FD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00420FD0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00421046; /* je: equal / zero */

loc_00420FD9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xE03);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00420FF0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421046; /* je: equal / zero */

loc_00420FFC: ;
    (void)0; /* cmp esi, MEM32(0x84BF74) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BF74))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648110);
    PUSH32(esp, 0xE04);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421017: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421046; /* je: equal / zero */

loc_00421023: ;
    edx = MEM32(0x84BF7C);
    ecx = edi + 1;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(ecx, edx)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6480BC);
    PUSH32(esp, 0xE05);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421043: ;
    esp = esp + 0x10;

loc_00421046: ;
    eax = MEM32(0x84BF78);
    ecx = edi + edi + 2;
    MEM32(eax + esi * 8) = 0x100000;
    MEM32(eax + esi * 8 + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00421060
 * Original: 0x00421060 - 0x004210B1 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421060: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004210AA; /* je: equal / zero */

loc_00421069: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648388);
    PUSH32(esp, 0xE2F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421080: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004210AA; /* je: equal / zero */

loc_0042108C: ;
    (void)0; /* cmp esi, MEM32(0x84BF84) - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(esi, MEM32(0x84BF84))) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648084);
    PUSH32(esp, 0xE30);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004210A7: ;
    esp = esp + 0x10;

loc_004210AA: ;
    MEM32(0x84BF88) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_004210C0
 * Original: 0x004210C0 - 0x00421134 (116 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004210C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004210C0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042110D; /* je: equal / zero */

loc_004210CC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xE3E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004210E3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042110D; /* je: equal / zero */

loc_004210EF: ;
    (void)0; /* cmp esi, MEM32(0x84BF88) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BF88))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648058);
    PUSH32(esp, 0xE3F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042110A: ;
    esp = esp + 0x10;

loc_0042110D: ;
    eax = MEM32(0x84BF8C);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    esi = esi << 4;
    eax = eax + esi;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00421140
 * Original: 0x00421140 - 0x004211DD (157 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421140(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421140: ;
    eax = MEM32(0x84BF78);
    ecx = MEM32(0x84BF74);
    edx = MEM32(0x84BF6C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A0533(); /* call 0x004A0533 */

loc_0042115A: ;
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00421185; /* je: equal / zero */

loc_00421165: ;
    ecx = MEM32(0x84BF60);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64802C);
    PUSH32(esp, 0xE88);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421182: ;
    esp = esp + 0x10;

loc_00421185: ;
    edx = MEM32(0x84BF8C);
    eax = MEM32(0x84BF88);
    ecx = MEM32(0x84BF6C);
    PUSH32(esp, 0x84BF60);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(0x84BF80);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A050E(); /* call 0x004A050E */

loc_004211AD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_004211D2; /* je: equal / zero */

loc_004211B2: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004211DC; /* je: equal / zero */

loc_004211BB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0xE8F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004211CE: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_004211D2: ;
    MEM32(0x84BF64) = 1;

loc_004211DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004211E0
 * Original: 0x004211E0 - 0x004212B0 (208 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004211E0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004211E0: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00421252; /* je: equal / zero */

loc_004211EB: ;
    ebx = MEM32(0x84BF60);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ebx, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64802C);
    PUSH32(esp, 0xEA4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421208: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421252; /* je: equal / zero */

loc_00421214: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xEA6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042122B: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421252; /* je: equal / zero */

loc_00421237: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xEA7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042124F: ;
    esp = esp + 0x10;

loc_00421252: ;
    edi = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00421263: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_004212B0(); return; } /* jl: less (signed <) */

loc_0042126A: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00421289; /* je: equal / zero */

loc_00421273: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FFC);
    PUSH32(esp, 0xEAC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421286: ;
    esp = esp + 0x10;

loc_00421289: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00422E40(); /* call 0x00422E40 */

loc_00421292: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_004212D0(); /* call 0x004212D0 */

loc_004212A0: ;
    esp = esp + 0x10;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFEu;
    eax = eax + 2;
    esp += 4; return; /* ret */

}

/**
 * sub_004212D0
 * Original: 0x004212D0 - 0x00421435 (357 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004212D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004212D0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00421397; /* je: equal / zero */

loc_004212E0: ;
    ecx = MEM32(0x84BF60);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64802C);
    PUSH32(esp, 0xEC9);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004212FD: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421397; /* je: equal / zero */

loc_0042130D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xECB);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421324: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421397; /* je: equal / zero */

loc_00421330: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xECC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421348: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421397; /* je: equal / zero */

loc_00421354: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64819C);
    PUSH32(esp, 0xDD7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421367: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421397; /* je: equal / zero */

loc_00421373: ;
    (void)0; /* cmp MEM32(0x84BF68), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(MEM32(0x84BF68), 1)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648174);
    PUSH32(esp, 0xDD8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042138F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00421397: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84BF6C) = 1;
    if (TEST_Z(eax, eax)) goto loc_004213E9; /* je: equal / zero */

loc_004213A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648388);
    PUSH32(esp, 0xDE4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004213B8: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004213E9; /* je: equal / zero */

loc_004213C4: ;
    esi = MEM32(0x84BF70);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64813C);
    PUSH32(esp, 0xDE5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004213E1: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_004213E9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84BF74) = 0;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0042140E; /* je: equal / zero */

loc_004213F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FFC);
    PUSH32(esp, 0xED1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042140B: ;
    esp = esp + 0x10;

loc_0042140E: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x84BF60);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A04F0(); /* call 0x004A04F0 */

loc_00421424: ;
    if (TEST_Z(eax, eax)) { sub_00421435(); return; } /* je: equal / zero */

loc_00421428: ;
    MEM32(0x84BF64) = 0;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00421450
 * Original: 0x00421450 - 0x00421498 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421450(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421450: ;
    eax = MEM32(0x84BF60);
    if (TEST_Z(eax, eax)) goto loc_0042148D; /* je: equal / zero */

loc_00421459: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0042145F: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00421483; /* je: equal / zero */

loc_00421469: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0xEFC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00421480: ;
    esp = esp + 0x10;

loc_00421483: ;
    MEM32(0x84BF60) = 0;

loc_0042148D: ;
    MEM32(0x84BF64) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004214A0
 * Original: 0x004214A0 - 0x004214DE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004214A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004214A0: ;
    eax = MEM32(0x84BF60);
    if (TEST_Z(eax, eax)) goto loc_004214DD; /* je: equal / zero */

loc_004214A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004214AF: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_004214D3; /* je: equal / zero */

loc_004214B9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0xEFC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004214D0: ;
    esp = esp + 0x10;

loc_004214D3: ;
    MEM32(0x84BF60) = 0;

loc_004214DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004214E0
 * Original: 0x004214E0 - 0x0042154A (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004214E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004214E0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042152D; /* je: equal / zero */

loc_004214EC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xF1C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421503: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042152D; /* je: equal / zero */

loc_0042150F: ;
    (void)0; /* cmp esi, MEM32(0x84BF74) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BF74))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648110);
    PUSH32(esp, 0xF1D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042152A: ;
    esp = esp + 0x10;

loc_0042152D: ;
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00421548; /* jle: less or equal (signed <=) */

loc_00421533: ;
    ecx = MEM32(0x84BF78);
    ecx = ecx + 4;
    /* nop */

loc_00421540: ;
    eax = eax + MEM32(ecx);
    ecx = ecx + 8;
    esi--;
    if ((esi != 0)) goto loc_00421540; /* jne: not equal / not zero */

loc_00421548: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00421550
 * Original: 0x00421550 - 0x004216A7 (343 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421550(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421550: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042164D; /* je: equal / zero */

loc_00421566: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FDC);
    PUSH32(esp, 0xF45);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042157D: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042164D; /* je: equal / zero */

loc_0042158D: ;
    (void)0; /* cmp edi, MEM32(0x84BF90) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, MEM32(0x84BF90))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FB4);
    PUSH32(esp, 0xF46);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004215A8: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042164D; /* je: equal / zero */

loc_004215B8: ;
    ecx = MEM32(0x84BF60);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64802C);
    PUSH32(esp, 0xF47);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004215D5: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042164D; /* je: equal / zero */

loc_004215E1: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(ebx & ebx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xF48);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004215F8: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042164D; /* je: equal / zero */

loc_00421604: ;
    (void)0; /* cmp ebx, MEM32(0x84BF74) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(ebx, MEM32(0x84BF74))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648110);
    PUSH32(esp, 0xF49);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042161F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042164D; /* je: equal / zero */

loc_0042162B: ;
    edx = MEM32(0x84BF78);
    (void)0; /* cmp MEM32(edx + ebx * 8), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(edx + ebx * 8), 0)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647F60);
    PUSH32(esp, 0xF4A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042164A: ;
    esp = esp + 0x10;

loc_0042164D: ;
    esi = MEM32(0x84BF7C);
    edx = MEM32(0x84BF94);
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    eax = ebx;
    esi = esi + edx;
    PUSH32(esp, 0); sub_004214E0(); /* call 0x004214E0 */

loc_00421665: ;
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042169C; /* je: equal / zero */

loc_00421670: ;
    edx = MEM32(0x84BF78);
    ecx = MEM32(edx + ebx * 8 + 4);
    edx = MEM32(0x84BF7C);
    ecx = ecx + edi;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(ecx, edx)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647F08);
    PUSH32(esp, 0xF4F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421699: ;
    esp = esp + 0x10;

loc_0042169C: ;
    eax = MEM32(edi + esi);
    edx = MEM32(edi + esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004216B0
 * Original: 0x004216B0 - 0x00421806 (342 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004216B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004216B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004217B0; /* je: equal / zero */

loc_004216C6: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FDC);
    PUSH32(esp, 0xF60);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004216DD: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004217B0; /* je: equal / zero */

loc_004216ED: ;
    (void)0; /* cmp edi, MEM32(0x84BF90) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, MEM32(0x84BF90))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FB4);
    PUSH32(esp, 0xF61);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421708: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004217B0; /* je: equal / zero */

loc_00421718: ;
    ecx = MEM32(0x84BF60);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64802C);
    PUSH32(esp, 0xF62);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421735: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004217B0; /* je: equal / zero */

loc_00421741: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(ebx & ebx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64833C);
    PUSH32(esp, 0xF63);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421758: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004217B0; /* je: equal / zero */

loc_00421764: ;
    (void)0; /* cmp ebx, MEM32(0x84BF74) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(ebx, MEM32(0x84BF74))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648110);
    PUSH32(esp, 0xF64);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042177F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004217B0; /* je: equal / zero */

loc_0042178B: ;
    edx = MEM32(0x84BF78);
    (void)0; /* cmp MEM32(edx + ebx * 8), 0x100000 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(edx + ebx * 8), 0x100000)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647EB0);
    PUSH32(esp, 0xF65);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004217AD: ;
    esp = esp + 0x10;

loc_004217B0: ;
    esi = MEM32(0x84BF7C);
    edx = MEM32(0x84BF94);
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    eax = ebx;
    esi = esi + edx;
    PUSH32(esp, 0); sub_004214E0(); /* call 0x004214E0 */

loc_004217C8: ;
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004217FF; /* je: equal / zero */

loc_004217D3: ;
    edx = MEM32(0x84BF78);
    ecx = MEM32(edx + ebx * 8 + 4);
    edx = MEM32(0x84BF7C);
    ecx = ecx + edi;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(ecx, edx)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647F08);
    PUSH32(esp, 0xF6A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004217FC: ;
    esp = esp + 0x10;

loc_004217FF: ;
    eax = edi + esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00421810
 * Original: 0x00421810 - 0x00421884 (116 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00421810: ;
    ecx = MEM32(0x84BE58);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_00421868; /* je: equal / zero */

loc_00421820: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(ebx & ebx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0xFFB);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00421837: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_00421868; /* je: equal / zero */

loc_00421844: ;
    (void)0; /* cmp ebx, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(ebx, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0xFFC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0042185F: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00421868: ;
    eax = MEM32(0x84BF9C);
    esi = ebx;
    esi = esi << 5;
    if (CMP_EQ(MEM32(esi + eax), 0)) { sub_00421884(); return; } /* je: equal / zero */

loc_00421878: ;
    edx = MEM32(esi + eax + 4);
    if (TEST_Z(edx, edx)) { sub_00421884(); return; } /* je: equal / zero */

loc_00421880: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00421889(); return; /* tail jmp 0x00421889 */

}

/**
 * sub_00421910
 * Original: 0x00421910 - 0x00421954 (68 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421910: ;
    ecx = MEM32(0x84BFA0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0042194F; /* jle: less or equal (signed <=) */

loc_0042191D: ;
    eax = MEM32(0x84BF9C);

loc_00421922: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00421934; /* je: equal / zero */

loc_00421927: ;
    ebx++;
    eax = eax + 0x20;
    if (CMP_L(ebx, ecx)) goto loc_00421922; /* jl: less (signed <) */

loc_0042192F: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00421934: ;
    if (TEST_S(ebx, ebx)) goto loc_0042194F; /* jl: less (signed <) */

loc_00421938: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00421810(); /* call 0x00421810 */

loc_00421947: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_GE(eax & eax, 0)) { sub_00421954(); return; } /* jge: greater or equal (signed >=) */

loc_0042194F: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00421960
 * Original: 0x00421960 - 0x004219C6 (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421960(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421960: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004219AD; /* je: equal / zero */

loc_0042196C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FDC);
    PUSH32(esp, 0x1030);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421983: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004219AD; /* je: equal / zero */

loc_0042198F: ;
    (void)0; /* cmp esi, MEM32(0x84BF90) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BF90))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FB4);
    PUSH32(esp, 0x1031);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004219AA: ;
    esp = esp + 0x10;

loc_004219AD: ;
    eax = MEM32(0x84BF98);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    eax = eax + esi;
    ecx = eax + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00421910(); /* call 0x00421910 */

loc_004219C1: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004219D0
 * Original: 0x004219D0 - 0x00421B14 (324 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004219D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004219D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x84BE58);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00421AE8; /* je: equal / zero */

loc_004219E9: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(ebx & ebx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FDC);
    PUSH32(esp, 0x1053);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00421A00: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_00421AE8; /* je: equal / zero */

loc_00421A11: ;
    (void)0; /* cmp ebx, MEM32(0x84BF90) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(ebx, MEM32(0x84BF90))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647FB4);
    PUSH32(esp, 0x1054);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00421A2C: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_00421AE8; /* je: equal / zero */

loc_00421A3D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0x1055);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00421A54: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_00421AE8; /* je: equal / zero */

loc_00421A65: ;
    (void)0; /* cmp esi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0x1056);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00421A80: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_00421AE8; /* je: equal / zero */

loc_00421A8D: ;
    eax = MEM32(0x84BF9C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi << 5;
    (void)0; /* cmp MEM32(edi + eax), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(edi + eax), 0)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x647DF0);
    PUSH32(esp, 0x1057);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00421AB1: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_00421AE7; /* je: equal / zero */

loc_00421ABE: ;
    eax = MEM32(0x84BF9C);
    edx = MEM32(edi + eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DB0);
    PUSH32(esp, 0x1058);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00421ADE: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00421AE7: ;
    POP32(esp, edi);

loc_00421AE8: ;
    edx = MEM32(0x84BF98);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x4C);
    eax = MEM32(0x84BF9C);
    esi = esi << 5;
    ebx = ebx + edx + 8;
    SET_LO8(edx, MEM8(0x84BEA0));
    esi = esi + eax + 8;
    eax = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_00421B14(); return; } /* je: equal / zero */

loc_00421B0D: ;
    edx = MEM32(ebx);
    MEM32(ebp) = edx;
    g_seh_ebp = ebp; sub_00421B22(); return; /* tail jmp 0x00421B22 */

}

/**
 * sub_00421B50
 * Original: 0x00421B50 - 0x00421BDC (140 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421B50: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00421BCD; /* je: equal / zero */

loc_00421B5C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0x1067);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421B73: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421BCD; /* je: equal / zero */

loc_00421B7F: ;
    (void)0; /* cmp esi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0x1068);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421B9A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421BCD; /* je: equal / zero */

loc_00421BA6: ;
    edx = MEM32(0x84BF9C);
    ecx = esi;
    ecx = ecx << 5;
    (void)0; /* cmp MEM32(ecx + edx), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(ecx + edx), 0)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DF0);
    PUSH32(esp, 0x1069);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421BCA: ;
    esp = esp + 0x10;

loc_00421BCD: ;
    edx = MEM32(0x84BF9C);
    esi = esi << 5;
    eax = MEM32(esi + edx + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00421BE0
 * Original: 0x00421BE0 - 0x00421CFE (286 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00421BE0: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00421C62; /* je: equal / zero */

loc_00421BF1: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0x1078);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421C08: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421C62; /* je: equal / zero */

loc_00421C14: ;
    (void)0; /* cmp edi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0x1079);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421C2F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421C62; /* je: equal / zero */

loc_00421C3B: ;
    edx = MEM32(0x84BF9C);
    ecx = edi;
    ecx = ecx << 5;
    (void)0; /* cmp MEM32(ecx + edx), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(ecx + edx), 0)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DF0);
    PUSH32(esp, 0x107A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421C5F: ;
    esp = esp + 0x10;

loc_00421C62: ;
    eax = MEM32(0x84BF2C);
    if (TEST_Z(eax, eax)) goto loc_00421C78; /* je: equal / zero */

loc_00421C6B: ;
    if (CMP_NE(edi, MEM32(0x758648))) goto loc_00421C78; /* jne: not equal / not zero */

loc_00421C73: ;
    PUSH32(esp, 0); sub_00420C10(); /* call 0x00420C10 */

loc_00421C78: ;
    eax = MEM32(0x84BF9C);
    ebp = edi;
    ebp = ebp << 5;
    ecx = MEM32(eax + ebp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00421CF2; /* je: equal / zero */

loc_00421C8A: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) goto loc_00421CCD; /* jne: not equal / not zero */

loc_00421C93: ;
    ebx = 0; /* xor self */
    esi = 0x82E5B0;
    /* nop */

loc_00421CA0: ;
    eax = ebx;
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_00421CA7: ;
    if (TEST_Z(eax, eax)) goto loc_00421CBC; /* je: equal / zero */

loc_00421CAB: ;
    if (CMP_NE(MEM32(esi), edi)) goto loc_00421CBC; /* jne: not equal / not zero */

loc_00421CAF: ;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + -16) = 0;

loc_00421CBC: ;
    esi = esi + 0x68;
    ebx++;
    if (CMP_L(esi, 0x82E750)) goto loc_00421CA0; /* jl: less (signed <) */

loc_00421CC8: ;
    eax = MEM32(0x84BF9C);

loc_00421CCD: ;
    SET_LO8(edx, MEM8(0x84BEA0));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = eax + ebp + 8;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00421CEA; /* jne: not equal / not zero */

loc_00421CDB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0048D690(); /* call 0x0048D690 */

loc_00421CE1: ;
    if (TEST_NZ(eax, eax)) goto loc_00421CF9; /* jne: not equal / not zero */

loc_00421CE5: ;
    eax = MEM32(0x84BF9C);

loc_00421CEA: ;
    MEM32(eax + ebp + 4) = 0;

loc_00421CF2: ;
    MEM32(eax + ebp) = 0;

loc_00421CF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00421D00
 * Original: 0x00421D00 - 0x00421DBE (190 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421D00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421D00: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00421DB0; /* je: equal / zero */

loc_00421D10: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0x10D7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421D27: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421DB0; /* je: equal / zero */

loc_00421D33: ;
    (void)0; /* cmp edi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0x10D8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421D4E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421DB0; /* je: equal / zero */

loc_00421D5A: ;
    ecx = MEM32(0x84BF9C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = edi;
    esi = esi << 5;
    (void)0; /* cmp MEM32(esi + ecx), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(esi + ecx), 0)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x647DF0);
    PUSH32(esp, 0x10D9);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421D7F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421DAF; /* je: equal / zero */

loc_00421D8B: ;
    ecx = MEM32(0x84BF9C);
    edx = MEM32(esi + ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DB0);
    PUSH32(esp, 0x10DA);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421DAC: ;
    esp = esp + 0x10;

loc_00421DAF: ;
    POP32(esp, esi);

loc_00421DB0: ;
    eax = MEM32(0x84BF9C);
    edi = edi << 5;
    eax = edi + eax + 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00421DC0
 * Original: 0x00421DC0 - 0x00421E7E (190 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421DC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421DC0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00421E70; /* je: equal / zero */

loc_00421DD0: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0x10E4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421DE7: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421E70; /* je: equal / zero */

loc_00421DF3: ;
    (void)0; /* cmp edi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0x10E5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421E0E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421E70; /* je: equal / zero */

loc_00421E1A: ;
    ecx = MEM32(0x84BF9C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = edi;
    esi = esi << 5;
    (void)0; /* cmp MEM32(esi + ecx), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(esi + ecx), 0)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x647DF0);
    PUSH32(esp, 0x10E6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421E3F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421E6F; /* je: equal / zero */

loc_00421E4B: ;
    ecx = MEM32(0x84BF9C);
    edx = MEM32(esi + ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DB0);
    PUSH32(esp, 0x10E7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421E6C: ;
    esp = esp + 0x10;

loc_00421E6F: ;
    POP32(esp, esi);

loc_00421E70: ;
    eax = MEM32(0x84BF9C);
    edi = edi << 5;
    eax = edi + eax + 0x10;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00421E80
 * Original: 0x00421E80 - 0x00421FA1 (289 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421E80: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00421F5B; /* je: equal / zero */

loc_00421E90: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0x113B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421EA7: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421F5B; /* je: equal / zero */

loc_00421EB7: ;
    (void)0; /* cmp esi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0x113C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421ED2: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421F5B; /* je: equal / zero */

loc_00421EDE: ;
    ecx = MEM32(0x84BF9C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi << 5;
    (void)0; /* cmp MEM32(edi + ecx), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(edi + ecx), 0)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x647DF0);
    PUSH32(esp, 0x113D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421F03: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421F5A; /* je: equal / zero */

loc_00421F0F: ;
    ecx = MEM32(0x84BF9C);
    edx = MEM32(edi + ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DB0);
    PUSH32(esp, 0x113E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421F30: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00421F5A; /* je: equal / zero */

loc_00421F3C: ;
    (void)0; /* cmp ebx, 0x1000 - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ebx, 0x1000)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647D6C);
    PUSH32(esp, 0x1140);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421F57: ;
    esp = esp + 0x10;

loc_00421F5A: ;
    POP32(esp, edi);

loc_00421F5B: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    ecx = MEM32(0x84BF9C);
    PUSH32(esp, 0xD);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    esi = esi << 5;
    PUSH32(esp, eax);
    edx = esi + ecx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0048D6D4(); /* call 0x0048D6D4 */

loc_00421F7B: ;
    ecx = MEM32(0x84BE58);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_00421FA0; /* je: equal / zero */

loc_00421F86: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647D50);
    PUSH32(esp, 0x1143);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00421F9D: ;
    esp = esp + 0x10;

loc_00421FA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00421FB0
 * Original: 0x00421FB0 - 0x004220A0 (240 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00421FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00421FB0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00422060; /* je: equal / zero */

loc_00421FC0: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0x1163);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421FD7: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422060; /* je: equal / zero */

loc_00421FE3: ;
    (void)0; /* cmp esi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0x1164);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00421FFE: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422060; /* je: equal / zero */

loc_0042200A: ;
    ecx = MEM32(0x84BF9C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi << 5;
    (void)0; /* cmp MEM32(edi + ecx), 0 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(edi + ecx), 0)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x647DF0);
    PUSH32(esp, 0x1165);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042202F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042205F; /* je: equal / zero */

loc_0042203B: ;
    ecx = MEM32(0x84BF9C);
    edx = MEM32(edi + ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DB0);
    PUSH32(esp, 0x1166);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042205C: ;
    esp = esp + 0x10;

loc_0042205F: ;
    POP32(esp, edi);

loc_00422060: ;
    eax = MEM32(0x84BF9C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esi << 5;
    PUSH32(esp, 0);
    ecx = esi + eax + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0048D6D4(); /* call 0x0048D6D4 */

loc_0042207A: ;
    ecx = MEM32(0x84BE58);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_0042209F; /* je: equal / zero */

loc_00422085: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647D50);
    PUSH32(esp, 0x1169);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0042209C: ;
    esp = esp + 0x10;

loc_0042209F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004220A0
 * Original: 0x004220A0 - 0x0042213F (159 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004220A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004220A0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004220EC; /* je: equal / zero */

loc_004220A9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(esi & esi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647D30);
    PUSH32(esp, 0x117D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004220C0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004220EC; /* je: equal / zero */

loc_004220CC: ;
    edx = MEM32(0x84BFA4);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647D08);
    PUSH32(esp, 0x117E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004220E9: ;
    esp = esp + 0x10;

loc_004220EC: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x84BFA4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048D6E3(); /* call 0x0048D6E3 */

loc_0042211A: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_0042213E; /* je: equal / zero */

loc_00422124: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647D50);
    PUSH32(esp, 0x1180);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0042213B: ;
    esp = esp + 0x10;

loc_0042213E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00422140
 * Original: 0x00422140 - 0x00422215 (213 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422140(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422140: ;
    eax = MEM32(0x84BE58);
    esp = esp - 0x258;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00422174; /* je: equal / zero */

loc_00422150: ;
    (void)0; /* cmp MEM32(0x84BF64), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BF64), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647CD4);
    PUSH32(esp, 0x1190);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042216C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00422174: ;
    esi = MEM32(0x84BF90);
    if (CMP_LE(esi & esi, 0)) goto loc_0042220D; /* jle: less or equal (signed <=) */

loc_00422182: ;
    if (TEST_Z(eax, eax)) goto loc_004221A7; /* je: equal / zero */

loc_00422186: ;
    (void)0; /* cmp esi, 0x32 - flags set for next jcc */
    SET_LO8(edx, (CMP_LE(esi, 0x32)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647CA8);
    PUSH32(esp, 0x1193);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042219E: ;
    esi = MEM32(0x84BF90);
    esp = esp + 0x10;

loc_004221A7: ;
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_004221E0; /* jle: less or equal (signed <=) */

loc_004221AD: ;
    ecx = MEM32(0x84BF98);
    ecx = ecx + 0x2C;
    goto loc_004221C0;

    /* nop */
    /* nop */

loc_004221C0: ;
    edx = ecx + -36;
    MEM32(esp + eax * 4 + 0x194) = edx;
    edx = ecx + -44;
    MEM32(esp + eax * 4 + 0xCC) = ecx;
    MEM32(esp + eax * 4 + 4) = edx;
    eax++;
    ecx = ecx + 0x4C;
    if (CMP_L(eax, esi)) goto loc_004221C0; /* jl: less (signed <) */

loc_004221E0: ;
    eax = MEM32(esp + 0x264);
    ecx = MEM32(esp + 0x260);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1A4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004220A0(); /* call 0x004220A0 */

loc_0042220A: ;
    esp = esp + 0x14;

loc_0042220D: ;
    POP32(esp, esi);
    esp = esp + 0x258;
    esp += 4; return; /* ret */

}

/**
 * sub_00422220
 * Original: 0x00422220 - 0x0042225E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422220(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422220: ;
    eax = MEM32(0x84BFA4);
    if (TEST_Z(eax, eax)) goto loc_0042225D; /* je: equal / zero */

loc_00422229: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D6FF(); /* call 0x0048D6FF */

loc_0042222F: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00422253; /* je: equal / zero */

loc_00422239: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647D50);
    PUSH32(esp, 0x11B0);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00422250: ;
    esp = esp + 0x10;

loc_00422253: ;
    MEM32(0x84BFA4) = 0;

loc_0042225D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00422260
 * Original: 0x00422260 - 0x004222E9 (137 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422260: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004222D5; /* je: equal / zero */

loc_00422269: ;
    ecx = MEM32(0x84BFA4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C84);
    PUSH32(esp, 0x11D6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422286: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004222D5; /* je: equal / zero */

loc_00422292: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C64);
    PUSH32(esp, 0x11D7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004222A9: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004222D5; /* je: equal / zero */

loc_004222B5: ;
    ecx = MEM32(0x84BFA4);
    (void)0; /* cmp esi, MEM32(ecx) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(ecx))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C2C);
    PUSH32(esp, 0x11D8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004222D2: ;
    esp = esp + 0x10;

loc_004222D5: ;
    ecx = MEM32(0x84BFA4);
    eax = esi + esi * 2;
    eax = ZX8(MEM8(ecx + eax * 8 + 8));
    eax = eax >> 1;
    eax = eax & 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004222F0
 * Original: 0x004222F0 - 0x00422377 (135 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004222F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004222F0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00422365; /* je: equal / zero */

loc_004222F9: ;
    ecx = MEM32(0x84BFA4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C84);
    PUSH32(esp, 0x11E7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422316: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422365; /* je: equal / zero */

loc_00422322: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C64);
    PUSH32(esp, 0x11E8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422339: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422365; /* je: equal / zero */

loc_00422345: ;
    ecx = MEM32(0x84BFA4);
    (void)0; /* cmp esi, MEM32(ecx) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(ecx))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C2C);
    PUSH32(esp, 0x11E9);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422362: ;
    esp = esp + 0x10;

loc_00422365: ;
    ecx = MEM32(0x84BFA4);
    eax = esi + esi * 2;
    eax = ZX8(MEM8(ecx + eax * 8 + 8));
    eax = eax & 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00422380
 * Original: 0x00422380 - 0x00422404 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422380(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422380: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004223F5; /* je: equal / zero */

loc_00422389: ;
    ecx = MEM32(0x84BFA4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C84);
    PUSH32(esp, 0x1254);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004223A6: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004223F5; /* je: equal / zero */

loc_004223B2: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C64);
    PUSH32(esp, 0x1255);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004223C9: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004223F5; /* je: equal / zero */

loc_004223D5: ;
    ecx = MEM32(0x84BFA4);
    (void)0; /* cmp esi, MEM32(ecx) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(ecx))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C2C);
    PUSH32(esp, 0x1256);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004223F2: ;
    esp = esp + 0x10;

loc_004223F5: ;
    ecx = MEM32(0x84BFA4);
    eax = esi + esi * 2;
    eax = ZX16(MEM16(ecx + eax * 8 + 0x16));
    esp += 4; return; /* ret */

}

/**
 * sub_00422410
 * Original: 0x00422410 - 0x004224E3 (211 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422410(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422410: ;
    eax = MEM32(0x84BE58);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0042243A; /* je: equal / zero */

loc_0042241C: ;
    (void)0; /* cmp MEM32(0x84BFA8), esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BFA8), esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647C04);
    PUSH32(esp, 0x12D0);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422437: ;
    esp = esp + 0x10;

loc_0042243A: ;
    PUSH32(esp, 0x84BFA8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A0578(); /* call 0x004A0578 */

loc_00422445: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_00422469; /* je: equal / zero */

loc_0042244F: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x12D3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00422466: ;
    esp = esp + 0x10;

loc_00422469: ;
    MEM32(0x82EA08) = esi;
    MEM32(0x82EA0C) = esi;
    MEM32(0x82EA10) = esi;
    MEM32(0x82EA14) = esi;
    MEM32(0x830BB0) = esi;
    MEM32(0x830BB4) = esi;
    MEM32(0x830BB8) = esi;
    MEM32(0x830BBC) = esi;
    MEM32(0x830BC0) = esi;
    MEM32(0x832D5C) = esi;
    MEM32(0x832D60) = esi;
    MEM32(0x832D64) = esi;
    MEM32(0x832D68) = esi;
    MEM32(0x832D6C) = esi;
    MEM32(0x834F08) = esi;
    MEM32(0x834F0C) = esi;
    MEM32(0x834F10) = esi;
    MEM32(0x834F14) = esi;
    MEM32(0x834F18) = esi;
    MEM32(0x8370B4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004224F0
 * Original: 0x004224F0 - 0x0042258B (155 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004224F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004224F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x82EA10;
    edi = 0; /* xor self */
    /* nop */

loc_00422500: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + -8) = edi;
    MEM32(esi + -4) = edi;
    if (CMP_EQ(eax, edi)) goto loc_00422538; /* je: equal / zero */

loc_0042250C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00422512: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, edi)) goto loc_00422536; /* je: equal / zero */

loc_0042251C: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x12ED);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00422533: ;
    esp = esp + 0x10;

loc_00422536: ;
    MEM32(esi) = edi;

loc_00422538: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x21A0) = edi;
    esi = esi + 0x21AC;
    if (CMP_L(esi, 0x8370C0)) goto loc_00422500; /* jl: less (signed <) */

loc_0042254F: ;
    eax = MEM32(0x84BFA8);
    if (CMP_EQ(eax, edi)) goto loc_00422588; /* je: equal / zero */

loc_00422558: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0042255E: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, edi)) goto loc_00422582; /* je: equal / zero */

loc_00422568: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x12F7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0042257F: ;
    esp = esp + 0x10;

loc_00422582: ;
    MEM32(0x84BFA8) = edi;

loc_00422588: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422590
 * Original: 0x00422590 - 0x00422687 (247 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422590(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422590: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00422659; /* je: equal / zero */

loc_0042259D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1307);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004225B4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422659; /* je: equal / zero */

loc_004225C4: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1308);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004225DC: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422659; /* je: equal / zero */

loc_004225E8: ;
    ecx = MEM32(0x84BFA8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647BDC);
    PUSH32(esp, 0x1309);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422605: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422659; /* je: equal / zero */

loc_00422611: ;
    (void)0; /* cmp MEM32(0x84BEFC), 2 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(0x84BEFC), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648694);
    PUSH32(esp, 0x130A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042262D: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422659; /* je: equal / zero */

loc_00422639: ;
    ecx = MEM32(0x84BEF0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648670);
    PUSH32(esp, 0x130B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422656: ;
    esp = esp + 0x10;

loc_00422659: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x21AC);
    edx = MEM32(eax + 0x82EA14);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = 1;
    MEM32(eax + 0x82EA08) = ecx;
    MEM32(eax + 0x82EA0C) = 0;
    if (TEST_NZ(edx, edx)) goto loc_00422686; /* jne: not equal / not zero */

loc_00422680: ;
    MEM32(eax + 0x82EA14) = ecx;

loc_00422686: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00422690
 * Original: 0x00422690 - 0x00422734 (164 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422690: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004226DA; /* je: equal / zero */

loc_0042269C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1331);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004226B3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004226DA; /* je: equal / zero */

loc_004226BF: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1332);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004226D7: ;
    esp = esp + 0x10;

loc_004226DA: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = MEM32(esi + 0x82EA10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x82EA08) = 0;
    MEM32(esi + 0x82EA0C) = 0;
    if (TEST_Z(eax, eax)) { sub_00422734(); return; } /* je: equal / zero */

loc_004226FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A058E(); /* call 0x004A058E */

loc_00422704: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00422728; /* je: equal / zero */

loc_0042270E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x133A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00422725: ;
    esp = esp + 0x10;

loc_00422728: ;
    MEM32(esi + 0x82EA14) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422740
 * Original: 0x00422740 - 0x00422798 (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422740(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422740: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042278A; /* je: equal / zero */

loc_0042274C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1352);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422763: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042278A; /* je: equal / zero */

loc_0042276F: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1353);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422787: ;
    esp = esp + 0x10;

loc_0042278A: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = MEM32(esi + 0x82EA14);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004227A0
 * Original: 0x004227A0 - 0x004227F8 (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004227A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004227A0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004227EA; /* je: equal / zero */

loc_004227AC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1360);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004227C3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004227EA; /* je: equal / zero */

loc_004227CF: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1361);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004227E7: ;
    esp = esp + 0x10;

loc_004227EA: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = MEM32(esi + 0x830BB0);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422800
 * Original: 0x00422800 - 0x004228BD (189 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422800(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422800: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ecx;
    if (TEST_Z(eax, eax)) goto loc_004228A3; /* je: equal / zero */

loc_00422813: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1370);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042282A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004228A3; /* je: equal / zero */

loc_00422836: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1371);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042284E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004228A3; /* je: equal / zero */

loc_0042285A: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647BB8);
    PUSH32(esp, 0x1372);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422871: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004228A3; /* je: equal / zero */

loc_0042287D: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x21AC);
    (void)0; /* cmp edi, MEM32(edx + 0x830BB0) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(edi, MEM32(edx + 0x830BB0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B80);
    PUSH32(esp, 0x1373);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004228A0: ;
    esp = esp + 0x10;

loc_004228A3: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x56);
    eax = MEM32(esi + edi + 0x82EA18);
    edx = MEM32(esi + edi + 0x82EA1C);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004228C0
 * Original: 0x004228C0 - 0x0042294C (140 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004228C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004228C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0042290C; /* je: equal / zero */

loc_004228CE: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1382);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004228E5: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042290C; /* je: equal / zero */

loc_004228F1: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1383);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422909: ;
    esp = esp + 0x10;

loc_0042290C: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x21AC);
    edx = MEM32(ecx + 0x830BB0);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00422945; /* jle: less or equal (signed <=) */

loc_00422920: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = ecx + 0x82EA18;
    edi = edi;

loc_00422930: ;
    ebx = MEM32(ecx);
    if (CMP_NE(ebx, edi)) goto loc_0042293D; /* jne: not equal / not zero */

loc_00422936: ;
    ebx = MEM32(ecx + 4);
    if (CMP_EQ(ebx, esi)) goto loc_00422948; /* je: equal / zero */

loc_0042293D: ;
    eax++;
    ecx = ecx + 0x56;
    if (CMP_L(eax, edx)) goto loc_00422930; /* jl: less (signed <) */

loc_00422945: ;
    eax = eax | 0xFFFFFFFFu;

loc_00422948: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00422950
 * Original: 0x00422950 - 0x004229C8 (120 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422950: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0042299B; /* je: equal / zero */

loc_0042295D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1398);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422974: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042299B; /* je: equal / zero */

loc_00422980: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1399);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422998: ;
    esp = esp + 0x10;

loc_0042299B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_004229AE: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_004229C8(); return; } /* jl: less (signed <) */

loc_004229B5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    POP32(esp, edi);
    eax = esi + eax + 0x82EA24;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004229D0
 * Original: 0x004229D0 - 0x00422A4E (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004229D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004229D0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00422A1B; /* je: equal / zero */

loc_004229DD: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x13AC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004229F4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422A1B; /* je: equal / zero */

loc_00422A00: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x13AD);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422A18: ;
    esp = esp + 0x10;

loc_00422A1B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00422A2E: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_00422A4E(); return; } /* jl: less (signed <) */

loc_00422A35: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(esi + eax + 0x82EA34);
    eax = eax >> 4;
    POP32(esp, edi);
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422A60
 * Original: 0x00422A60 - 0x00422ADB (123 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422A60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422A60: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00422AAB; /* je: equal / zero */

loc_00422A6D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x13C0);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422A84: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422AAB; /* je: equal / zero */

loc_00422A90: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x13C1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422AA8: ;
    esp = esp + 0x10;

loc_00422AAB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00422ABE: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_00422ADB(); return; } /* jl: less (signed <) */

loc_00422AC5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(esi + eax + 0x82EA34);
    POP32(esp, edi);
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422AE0
 * Original: 0x00422AE0 - 0x00422B5D (125 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422AE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422AE0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00422B2B; /* je: equal / zero */

loc_00422AED: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x13D4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422B04: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422B2B; /* je: equal / zero */

loc_00422B10: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x13D5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422B28: ;
    esp = esp + 0x10;

loc_00422B2B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00422B3E: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_00422B5D(); return; } /* jl: less (signed <) */

loc_00422B45: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(esi + eax + 0x82EA34);
    eax = eax >> 1;
    POP32(esp, edi);
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422B70
 * Original: 0x00422B70 - 0x00422D03 (403 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00422B70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00422C1F; /* je: equal / zero */

loc_00422B87: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x13EE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422B9E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422C1F; /* je: equal / zero */

loc_00422BAA: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x13EF);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422BC2: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422C1F; /* je: equal / zero */

loc_00422BCE: ;
    ebx = MEM32(0x84BFA8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647BDC);
    PUSH32(esp, 0x13F0);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422BEB: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422C1F; /* je: equal / zero */

loc_00422BF7: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x21AC);
    edi = MEM32(edx + 0x82EA10);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B4C);
    PUSH32(esp, 0x13F1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422C1C: ;
    esp = esp + 0x10;

loc_00422C1F: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00422C30: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_S(edi, edi)) { sub_00422D03(); return; } /* jl: less (signed <) */

loc_00422C3D: ;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_00422C42: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x56);
    esi = MEM32(esi + edi + 0x82EA48);
    ebx = eax;
    if (CMP_NE(MEM32(0x875964), esi)) goto loc_00422C99; /* jne: not equal / not zero */

loc_00422C5C: ;
    if (CMP_NE(MEM32(0x875960), ebx)) goto loc_00422C99; /* jne: not equal / not zero */

loc_00422C64: ;
    PUSH32(esp, 0x875910);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00422C6E: ;
    esp = esp + 4;
    if (CMP_BE(eax & eax, 0)) goto loc_00422C99; /* jbe: below or equal (unsigned <=) */

loc_00422C75: ;
    (void)0; /* cmp ebp, 0x28 - flags set for next jcc */
    eax = ebp;
    if (CMP_L(ebp, 0x28)) goto loc_00422C81; /* jl: less (signed <) */

loc_00422C7C: ;
    eax = 0x28;

loc_00422C81: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x875910);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00422C91: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00422C99: ;
    PUSH32(esp, 0x875910);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(0x875964) = esi;
    MEM32(0x875960) = ebx;
    MEM16(0x875910) = 0;
    PUSH32(esp, 0); sub_004A05A4(); /* call 0x004A05A4 */

loc_00422CBC: ;
    if (TEST_Z(eax, eax)) goto loc_00422CDF; /* je: equal / zero */

loc_00422CC0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00422CDF; /* je: equal / zero */

loc_00422CC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x140E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422CDC: ;
    esp = esp + 0x10;

loc_00422CDF: ;
    (void)0; /* cmp ebp, 0x28 - flags set for next jcc */
    eax = ebp;
    if (CMP_L(ebp, 0x28)) goto loc_00422CEB; /* jl: less (signed <) */

loc_00422CE6: ;
    eax = 0x28;

loc_00422CEB: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x875910);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00422CFB: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00422D20
 * Original: 0x00422D20 - 0x00422D9E (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422D20: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00422D6B; /* je: equal / zero */

loc_00422D2D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1424);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422D44: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422D6B; /* je: equal / zero */

loc_00422D50: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1425);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422D68: ;
    esp = esp + 0x10;

loc_00422D6B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00422D7E: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_00422D9E(); return; } /* jl: less (signed <) */

loc_00422D85: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    edx = MEM32(esi + eax + 0x82EA48);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A053E(); /* call 0x004A053E */

loc_00422D9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422DB0
 * Original: 0x00422DB0 - 0x00422E2E (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422DB0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00422DFB; /* je: equal / zero */

loc_00422DBD: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1450);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422DD4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422DFB; /* je: equal / zero */

loc_00422DE0: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1451);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422DF8: ;
    esp = esp + 0x10;

loc_00422DFB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00422E0E: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_00422E2E(); return; } /* jl: less (signed <) */

loc_00422E15: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(esi + eax + 0x82EA34);
    eax = eax >> 3;
    POP32(esp, edi);
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422E40
 * Original: 0x00422E40 - 0x00422EB8 (120 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422E40: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00422E8B; /* je: equal / zero */

loc_00422E4D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1466);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422E64: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422E8B; /* je: equal / zero */

loc_00422E70: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1467);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422E88: ;
    esp = esp + 0x10;

loc_00422E8B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00422E9E: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_00422EB8(); return; } /* jl: less (signed <) */

loc_00422EA5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    POP32(esp, edi);
    eax = esi + eax + 0x82EA40;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422EC0
 * Original: 0x00422EC0 - 0x00422F3E (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422EC0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00422F0B; /* je: equal / zero */

loc_00422ECD: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x14A2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422EE4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422F0B; /* je: equal / zero */

loc_00422EF0: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x14A3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422F08: ;
    esp = esp + 0x10;

loc_00422F0B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00422F1E: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_00422F3E(); return; } /* jl: less (signed <) */

loc_00422F25: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(esi + eax + 0x82EA34);
    eax = eax >> 0x1B;
    POP32(esp, edi);
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00422F50
 * Original: 0x00422F50 - 0x0042304F (255 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00422F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00422F50: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00422FF5; /* je: equal / zero */

loc_00422F5D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x14D3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422F74: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422FF5; /* je: equal / zero */

loc_00422F80: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x14D4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422F98: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422FF5; /* je: equal / zero */

loc_00422FA4: ;
    ecx = MEM32(0x84BFA8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647BDC);
    PUSH32(esp, 0x14D5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422FC1: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00422FF5; /* je: equal / zero */

loc_00422FCD: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x21AC);
    ecx = MEM32(edx + 0x82EA10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B4C);
    PUSH32(esp, 0x14D6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00422FF2: ;
    esp = esp + 0x10;

loc_00422FF5: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00423006: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) goto loc_0042304E; /* jl: less (signed <) */

loc_0042300D: ;
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x21AC);
    PUSH32(esp, ecx);
    eax = edx + eax + 0x82EA18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A0629(); /* call 0x004A0629 */

loc_0042302B: ;
    if (TEST_Z(eax, eax)) goto loc_0042304E; /* je: equal / zero */

loc_0042302F: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042304E; /* je: equal / zero */

loc_00423038: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x14DE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042304B: ;
    esp = esp + 0x10;

loc_0042304E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00423050
 * Original: 0x00423050 - 0x004230CE (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423050(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423050: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0042309B; /* je: equal / zero */

loc_0042305D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1509);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423074: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042309B; /* je: equal / zero */

loc_00423080: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x150A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423098: ;
    esp = esp + 0x10;

loc_0042309B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_004230AE: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_004230CE(); return; } /* jl: less (signed <) */

loc_004230B5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(esi + eax + 0x82EA34);
    eax = eax >> 0x1A;
    POP32(esp, edi);
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004230E0
 * Original: 0x004230E0 - 0x0042315E (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004230E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004230E0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0042312B; /* je: equal / zero */

loc_004230ED: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1535);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423104: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042312B; /* je: equal / zero */

loc_00423110: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x1536);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423128: ;
    esp = esp + 0x10;

loc_0042312B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_0042313E: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_0042315E(); return; } /* jl: less (signed <) */

loc_00423145: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(esi + eax + 0x82EA34);
    eax = eax >> 0x1D;
    POP32(esp, edi);
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00423170
 * Original: 0x00423170 - 0x00423340 (464 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00423170: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00423218; /* je: equal / zero */

loc_00423180: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ebx & ebx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x154B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423197: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423218; /* je: equal / zero */

loc_004231A3: ;
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(ebx, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x154C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004231BB: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423218; /* je: equal / zero */

loc_004231C7: ;
    edi = MEM32(0x84BFA8);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647BDC);
    PUSH32(esp, 0x154D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004231E4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423218; /* je: equal / zero */

loc_004231F0: ;
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x21AC);
    esi = MEM32(edx + 0x82EA10);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B4C);
    PUSH32(esp, 0x154E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423215: ;
    esp = esp + 0x10;

loc_00423218: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00423229: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_S(ebp, ebp)) goto loc_0042333C; /* jl: less (signed <) */

loc_00423236: ;
    eax = MEM32(0x84BE58);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x68);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(ecx + 0x82E5B0);
    if (TEST_Z(eax, eax)) goto loc_004232EC; /* je: equal / zero */

loc_0042324E: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0x1555);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423265: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004232EC; /* je: equal / zero */

loc_00423271: ;
    (void)0; /* cmp esi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0x1556);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042328C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004232EC; /* je: equal / zero */

loc_00423298: ;
    edx = MEM32(0x84BF9C);
    edi = esi;
    edi = edi << 5;
    (void)0; /* cmp MEM32(edi + edx), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(edi + edx), 0)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DF0);
    PUSH32(esp, 0x1557);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004232BC: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004232EC; /* je: equal / zero */

loc_004232C8: ;
    edx = MEM32(0x84BF9C);
    ecx = MEM32(edi + edx + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DB0);
    PUSH32(esp, 0x1558);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004232E9: ;
    esp = esp + 0x10;

loc_004232EC: ;
    edx = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x56);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x21AC);
    eax = edx + ebp + 0x82EA18;
    PUSH32(esp, eax);
    eax = MEM32(0x84BF9C);
    PUSH32(esp, 1);
    esi = esi << 5;
    ecx = MEM32(esi + eax + 0xC);
    edx = MEM32(esi + eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004A05DC(); /* call 0x004A05DC */

loc_00423319: ;
    if (TEST_Z(eax, eax)) goto loc_0042333C; /* je: equal / zero */

loc_0042331D: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042333C; /* je: equal / zero */

loc_00423326: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x155D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423339: ;
    esp = esp + 0x10;

loc_0042333C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00423340
 * Original: 0x00423340 - 0x00423510 (464 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00423340: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004233E8; /* je: equal / zero */

loc_00423350: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(ebx & ebx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x156C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423367: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004233E8; /* je: equal / zero */

loc_00423373: ;
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(ebx, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x156D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042338B: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004233E8; /* je: equal / zero */

loc_00423397: ;
    edi = MEM32(0x84BFA8);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647BDC);
    PUSH32(esp, 0x156E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004233B4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004233E8; /* je: equal / zero */

loc_004233C0: ;
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x21AC);
    esi = MEM32(edx + 0x82EA10);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B4C);
    PUSH32(esp, 0x156F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004233E5: ;
    esp = esp + 0x10;

loc_004233E8: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_004233F9: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_S(ebp, ebp)) goto loc_0042350C; /* jl: less (signed <) */

loc_00423406: ;
    eax = MEM32(0x84BE58);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x68);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(ecx + 0x82E5B0);
    if (TEST_Z(eax, eax)) goto loc_004234BC; /* je: equal / zero */

loc_0042341E: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647E90);
    PUSH32(esp, 0x1576);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423435: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004234BC; /* je: equal / zero */

loc_00423441: ;
    (void)0; /* cmp esi, MEM32(0x84BFA0) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84BFA0))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485A0);
    PUSH32(esp, 0x1577);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042345C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004234BC; /* je: equal / zero */

loc_00423468: ;
    edx = MEM32(0x84BF9C);
    edi = esi;
    edi = edi << 5;
    (void)0; /* cmp MEM32(edi + edx), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(edi + edx), 0)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DF0);
    PUSH32(esp, 0x1578);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042348C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004234BC; /* je: equal / zero */

loc_00423498: ;
    edx = MEM32(0x84BF9C);
    ecx = MEM32(edi + edx + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647DB0);
    PUSH32(esp, 0x1579);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004234B9: ;
    esp = esp + 0x10;

loc_004234BC: ;
    edx = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x56);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x21AC);
    eax = edx + ebp + 0x82EA18;
    PUSH32(esp, eax);
    eax = MEM32(0x84BF9C);
    PUSH32(esp, 1);
    esi = esi << 5;
    ecx = MEM32(esi + eax + 0xC);
    edx = MEM32(esi + eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004A05FD(); /* call 0x004A05FD */

loc_004234E9: ;
    if (TEST_Z(eax, eax)) goto loc_0042350C; /* je: equal / zero */

loc_004234ED: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042350C; /* je: equal / zero */

loc_004234F6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x157E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423509: ;
    esp = esp + 0x10;

loc_0042350C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00423510
 * Original: 0x00423510 - 0x0042358B (123 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423510(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423510: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0042355B; /* je: equal / zero */

loc_0042351D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x158D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423534: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042355B; /* je: equal / zero */

loc_00423540: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x158E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423558: ;
    esp = esp + 0x10;

loc_0042355B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_0042356E: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_0042358B(); return; } /* jl: less (signed <) */

loc_00423575: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(esi + eax + 0x82EA34);
    POP32(esp, edi);
    eax = eax >> 0x1F;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00423590
 * Original: 0x00423590 - 0x0042360E (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423590(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423590: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004235DB; /* je: equal / zero */

loc_0042359D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x15A3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004235B4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004235DB; /* je: equal / zero */

loc_004235C0: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x15A4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004235D8: ;
    esp = esp + 0x10;

loc_004235DB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_004235EE: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) { sub_0042360E(); return; } /* jl: less (signed <) */

loc_004235F5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    eax = MEM32(esi + eax + 0x82EA34);
    eax = eax >> 0x1E;
    POP32(esp, edi);
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
