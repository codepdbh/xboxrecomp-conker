/**
 * Burnout 3 - Recompiled code chunk 51
 * Functions: 250 (0x00446B46 - 0x0045F444)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00446B46
 * Original: 0x00446B46 - 0x00446B72 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446B46(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00446B46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */

loc_00446B4C: ;
    ecx = SX16(LO16(eax));
    ecx = ecx << 4;
    SET_LO16(ecx, MEM16(ecx + 0x580BA8));
    if (CMP_EQ(LO16(ecx), MEM16(ebp + 0xC))) goto loc_00446B66; /* je: equal / zero */

loc_00446B5F: ;
    eax++;
    if (CMP_L(LO16(eax), 0x11)) goto loc_00446B4C; /* jl: less (signed <) */

loc_00446B66: ;
    if (CMP_L(LO16(eax), 0x11)) { sub_00446B72(); return; } /* jl: less (signed <) */

loc_00446B6C: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00446BD1
 * Original: 0x00446BD1 - 0x00446C14 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446BD1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446BD1: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0x154;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(esi + 0x8C);
    MEM32(ebp + 0x70) = eax;
    eax = MEM32(esi + 0xB4);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) { sub_00446C14(); return; } /* je: equal / zero */

loc_00446BF7: ;
    eax = MEM32(esi + 0x114);
    edx = MEM32(eax);
    ecx = ZX16(MEM16(esi + 0x19C));
    edi = MEM32(eax + 8);
    MEM32(ebp + 0x68) = edx;
    edx = MEM32(eax + 4);
    MEM32(ebp + 0x60) = edx;
    g_seh_ebp = ebp; sub_00446C2B(); return; /* tail jmp 0x00446C2B */

}

/**
 * sub_00446EDB
 * Original: 0x00446EDB - 0x00446F42 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446EDB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00446EDB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi + 0x94));
    eax = esi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x8C));
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x580B6C);
    PUSH32(esp, 0); sub_00448E7A(); /* call 0x00448E7A */

loc_00446F0A: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_00446F3B; /* jne: not equal / not zero */

loc_00446F11: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    SET_LO16(ecx, MEM16(esi + eax * 2 + 0xDA));
    eax = 0; /* xor self */

loc_00446F1F: ;
    edx = SX16(LO16(eax));
    edx = edx << 4;
    if (CMP_EQ(MEM16(edx + 0x580BA8), LO16(ecx))) goto loc_00446F35; /* je: equal / zero */

loc_00446F2E: ;
    eax++;
    if (CMP_L(LO16(eax), 0x11)) goto loc_00446F1F; /* jl: less (signed <) */

loc_00446F35: ;
    if (CMP_L(LO16(eax), 0x11)) { sub_00446F42(); return; } /* jl: less (signed <) */

loc_00446F3B: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00446F99(); return; /* tail jmp 0x00446F99 */

}

/**
 * sub_00446F9C
 * Original: 0x00446F9C - 0x0044727A (734 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446F9C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00446F9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xA));
    PUSH32(esp, edi);
    SET_LO16(eax, LO16(eax) >> 1);
    ebx = 0; /* xor self */
    ebx++;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0);
    edi = esi + 0x98;
    MEM32(ebp + -8) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_00446FD8: ;
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_00447275; /* jne: not equal / not zero */

loc_00446FE3: ;
    eax = MEM32(ebp + -20);
    if (CMP_GE(LO16(eax), 0x36)) goto loc_00446FF0; /* jge: greater or equal (signed >=) */

loc_00446FEC: ;
    ebx = 0; /* xor self */
    goto loc_00447023;

loc_00446FF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_0044700B: ;
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_00447275; /* jne: not equal / not zero */

loc_00447016: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -24);
    eax = ecx + eax * 4 + -162;

loc_00447023: ;
    SET_LO16(ecx, MEM16(esi + 0x1C8));
    eax = SX16(LO16(eax));
    MEM16(esi + 0x1EC) = LO16(ebx);
    SET_LO16(eax, MEM16(eax * 2 + 0x57A738));
    MEM16(esi + 0x1EA) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x1C6));
    (void)0; /* cmp LO16(eax), LO16(ecx) - flags set for next jcc */
    eax = ZX16(LO16(eax));
    if (CMP_B(LO16(eax), LO16(ecx))) goto loc_00447055; /* jb: below (unsigned <) */

loc_00447052: ;
    eax = ZX16(LO16(ecx));

loc_00447055: ;
    if (CMP_G(eax, 0x20)) goto loc_00447065; /* jg: greater (signed >) */

loc_0044705A: ;
    MEM16(esi + 0x1EE) = 0x10;
    goto loc_0044706E;

loc_00447065: ;
    MEM16(esi + 0x1EE) = 0x18;

loc_0044706E: ;
    ecx = 0xFF01FF01u;
    eax = ecx;
    edi = ebp + -48;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    eax = ecx;
    edi = ebp + -72;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    ecx = ZX16(MEM16(esi + 0xA));
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    SET_LO16(eax, MEM16(esi + 0x1EE));
    eax = SX16(LO16(eax));
    MEM32(ebp + -16) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 0x1EA));
    eax = eax - edx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 8) = (uint32_t)((int32_t)MEM32(ebp + 8) >> 1);
    ecx = ecx + MEM32(ebp + 8);
    SET_LO16(ebx, LO16(edi));
    eax = SX16(LO16(ebx));
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -12) = edi;
    if (CMP_L(eax, ecx)) goto loc_004470F8; /* jl: less (signed <) */

loc_004470C2: ;
    ebx = 0; /* xor self */
    MEM16(esi + 0x1F2) = LO16(ebx);
    MEM16(esi + 0x1F0) = LO16(ebx);
    edi = 0; /* xor self */
    edx = 0; /* xor self */
    MEM16(esi + 0x1F6) = 0xFF01;
    MEM16(esi + 0x1F4) = 0xFF01;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -20) = ebx;
    eax = 0; /* xor self */
    goto loc_00447164;

loc_004470F5: ;
    edi = MEM32(ebp + -12);

loc_004470F8: ;
    if (CMP_GE(MEM16(ebp + -4), 0xB)) goto loc_00447158; /* jge: greater or equal (signed >=) */

loc_004470FF: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    edi = edi - MEM32(ebp + 8);
    ecx = ecx << 1;
    MEM16(ebp + ecx + -48) = LO16(edi);
    MEM16(ebp + ecx + -72) = LO16(ebx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(eax & eax, 0)) goto loc_00447121; /* jle: less or equal (signed <=) */

loc_0044711D: ;
    ecx = eax;
    goto loc_00447123;

loc_00447121: ;
    ecx = 0; /* xor self */

loc_00447123: ;
    if (CMP_GE(ecx, 1)) goto loc_00447130; /* jge: greater or equal (signed >=) */

loc_00447128: ;
    if (CMP_G(eax & eax, 0)) goto loc_00447133; /* jg: greater (signed >) */

loc_0044712C: ;
    eax = 0; /* xor self */
    goto loc_00447133;

loc_00447130: ;
    eax = 0; /* xor self */
    eax++;

loc_00447133: ;
    ecx = ZX16(MEM16(esi + 0xA));
    ecx = ecx + MEM32(ebp + 8);
    eax = SX16(LO16(eax));
    SET_LO16(ebx, LO16(ebx) + MEM16(esi + eax * 2 + 0x1C6));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = SX16(LO16(ebx));
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM16(ebp + -12) = LO16(ebx);
    if (CMP_L(eax, ecx)) goto loc_004470F5; /* jl: less (signed <) */

loc_00447153: ;
    goto loc_004470C2;

loc_00447158: ;
    eax = 0x80004005u;
    goto loc_00447275;

loc_00447162: ;
    ebx = 0; /* xor self */

loc_00447164: ;
    SET_LO16(ecx, MEM16(ebp + eax + -72));
    if (CMP_L(LO16(ecx), LO16(ebx))) goto loc_0044719D; /* jl: less (signed <) */

loc_0044716E: ;
    if (CMP_GE(LO16(ecx), MEM16(ebp + -8))) goto loc_004471A3; /* jge: greater or equal (signed >=) */

loc_00447174: ;
    MEM16(esi + 0x1F0) = MEM16(esi + 0x1F0) + 1;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_004471D6; /* jne: not equal / not zero */

loc_00447181: ;
    SET_LO16(ecx, MEM16(ebp + eax + -48));
    MEM16(esi + 0x1F4) = LO16(ecx);
    ecx = 0; /* xor self */
    ecx++;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_004471D6; /* je: equal / zero */

loc_00447198: ;
    MEM32(ebp + -20) = ecx;
    goto loc_004471D6;

loc_0044719D: ;
    if (CMP_L(LO16(ecx), MEM16(ebp + -8))) goto loc_004471D6; /* jl: less (signed <) */

loc_004471A3: ;
    ebx = ZX16(MEM16(esi + 0xA));
    ecx = SX16(LO16(ecx));
    if (CMP_GE(ecx, ebx)) goto loc_004471D6; /* jge: greater or equal (signed >=) */

loc_004471AE: ;
    MEM16(esi + 0x1F2) = MEM16(esi + 0x1F2) + 1;
    if (TEST_NZ(edi, edi)) goto loc_004471D6; /* jne: not equal / not zero */

loc_004471B9: ;
    SET_LO16(ecx, MEM16(ebp + eax + -48));
    SET_LO16(ecx, LO16(ecx) - MEM16(ebp + -8));
    edi++;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM16(esi + 0x1F6) = LO16(ecx);
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_004471D6; /* je: equal / zero */

loc_004471CF: ;
    MEM32(ebp + -12) = 1;

loc_004471D6: ;
    edx++;
    eax++;
    eax++;
    if (CMP_L(LO16(edx), 0xB)) goto loc_00447162; /* jl: less (signed <) */

loc_004471DF: ;
    SET_LO16(eax, MEM16(esi + 0x1F4));
    if (CMP_EQ(LO16(eax), 0xFF01)) goto loc_00447220; /* je: equal / zero */

loc_004471EC: ;
    if (CMP_NE(MEM32(ebp + -20), 1)) goto loc_00447220; /* jne: not equal / not zero */

loc_004471F2: ;
    edi = SX16(LO16(eax));
    eax = MEM32(ebp + -16);
    goto loc_0044720A;

loc_004471FA: ;
    MEM16(esi + 0x1F4) = MEM16(esi + 0x1F4) - LO16(ecx);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x1F4);
    ecx = 0; /* xor self */

loc_0044720A: ;
    SET_LO16(ecx, MEM16(esi + 0x1C6));
    edx = ZX16(LO16(ecx));
    edi = edi - edx;
    edx = edi + eax + -1;
    if (CMP_GE(edx & edx, 0)) goto loc_004471FA; /* jge: greater or equal (signed >=) */

loc_0044721E: ;
    goto loc_00447223;

loc_00447220: ;
    eax = MEM32(ebp + -16);

loc_00447223: ;
    SET_LO16(edx, MEM16(esi + 0x1F6));
    if (CMP_EQ(LO16(edx), 0xFF01)) goto loc_00447260; /* je: equal / zero */

loc_00447231: ;
    if (CMP_NE(MEM32(ebp + -12), 1)) goto loc_00447260; /* jne: not equal / not zero */

loc_00447237: ;
    edx = SX16(LO16(edx));
    goto loc_0044724C;

loc_0044723C: ;
    MEM16(esi + 0x1F6) = MEM16(esi + 0x1F6) - LO16(ecx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1F6);
    ecx = 0; /* xor self */

loc_0044724C: ;
    SET_LO16(ecx, MEM16(esi + 0x1C8));
    edi = ZX16(LO16(ecx));
    edx = edx - edi;
    edx = edx + eax + -1;
    if (CMP_GE(edx & edx, 0)) goto loc_0044723C; /* jge: greater or equal (signed >=) */

loc_00447260: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x1F0), LO16(eax) - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM16(esi + 0x1F0), LO16(eax))) ? 1 : 0); /* sete */
    MEM16(esi + 0x1F8) = LO16(eax);
    eax = 0; /* xor self */

loc_00447275: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0044727A
 * Original: 0x0044727A - 0x004473D8 (350 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044727A(void)
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

loc_0044727A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1AE);
    MEM32(ebp + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1AC);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + 8) = eax;
    PUSH32(esp, ecx);
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0044CDAC(); /* call 0x0044CDAC */

loc_004472B1: ;
    SET_LO16(eax, MEM16(esi + 0xD6));
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* cmp LO16(eax), 1 - flags set for next jcc */
    fp_push(MEMF(0x648D10)); /* fld float */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(LO16(eax), 1)) goto loc_004472E6; /* je: equal / zero */

loc_004472C9: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_004472E6; /* je: equal / zero */

loc_004472CE: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fdivr dword ptr [ebp + 8] */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d80] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004472EC; /* jne: not equal / not zero */

loc_004472E6: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_004472EC: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00447308: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(esi + 0x1C6) = LO16(eax);
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044732A: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0xD0), LO16(ebx) - flags set for next jcc */
    MEM16(esi + 0x1C8) = LO16(eax);
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(MEM16(esi + 0xD0), LO16(ebx))) goto loc_0044739B; /* jbe: below or equal (unsigned <=) */

loc_0044733F: ;
    PUSH32(esp, edi);
    edi = esi + 0x1B6;

loc_00447346: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xD2));
    ebx = ebx + eax;
    eax = ZX16(LO16(eax));
    eax = eax >> 1;
    ecx = ZX16(LO16(ebx));
    ecx = ecx - eax;
    eax = ZX16(MEM16(esi + 0xA));
    MEM32(ebp + -12) = ecx;
    fp_push((double)SMEM32(ebp + -12)); /* fild */
    MEM32(ebp + -12) = eax;
    /* FPU: fidiv dword ptr [ebp - 0xc] */
    fp_push(MEMD(0x648D08)); /* fld double */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00447384: ;
    /* fstp st(0) */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM16(edi) = LO16(eax);
    eax = ZX16(MEM16(esi + 0xD0));
    edi++;
    edi++;
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_00447346; /* jl: less (signed <) */

loc_0044739A: ;
    POP32(esp, edi);

loc_0044739B: ;
    eax = ZX16(MEM16(esi + 0xA));
    /* fstp st(0) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEM32(ebp + 8) = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    POP32(esp, ebx);
    /* FPU: fidiv dword ptr [ebp + 8] */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    if (CMP_LE(eax & eax, 0)) goto loc_004473D3; /* jle: less or equal (signed <=) */

loc_004473B6: ;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ZX16(MEM16(esi + 0xA));
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_004473B6; /* jl: less (signed <) */

loc_004473D3: ;
    /* fstp st(0) */
    POP32(esp, esi);
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
 * sub_004473D8
 * Original: 0x004473D8 - 0x004474C3 (235 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004473D8(void)
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

loc_004473D8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) { sub_004474C3(); return; } /* je: equal / zero */

loc_004473E9: ;
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) { sub_004474C3(); return; } /* je: equal / zero */

loc_004473F3: ;
    edi = MEM32(ebp + 0x14);
    if (TEST_Z(edi, edi)) { sub_004474C3(); return; } /* je: equal / zero */

loc_004473FE: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(esi + 8));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ecx = MEM32(esi + 0x26C);
    ecx = ecx - MEM32(esi + 0x270);
    MEM32(ebp + 8) = ecx;
    if (CMP_L(ecx, eax)) goto loc_00447420; /* jl: less (signed <) */

loc_0044741D: ;
    MEM32(ebp + 8) = eax;

loc_00447420: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    edi = MEM32(edi);
    edi = edi + MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x270);
    ebx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0044748C; /* jle: less or equal (signed <=) */

loc_00447435: ;
    eax = eax << 2;
    MEM32(ebp + -4) = eax;

loc_0044743B: ;
    eax = MEM32(esi + 0x260);
    ecx = MEM32(ebp + -4);
    ecx = ecx + eax;
    fp_push(MEMF(ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649724] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044745D; /* jne: not equal / not zero */

loc_00447455: ;
    MEM16(edi + ebx * 2) = 0x7FFF;
    goto loc_0044747F;

loc_0044745D: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649720] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00447474; /* jp: parity */

loc_0044746C: ;
    MEM16(edi + ebx * 2) = 0x8000;
    goto loc_0044747F;

loc_00447474: ;
    fp_push(MEMF(ecx)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044747B: ;
    MEM16(edi + ebx * 2) = LO16(eax);

loc_0044747F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_0044743B; /* jl: less (signed <) */

loc_0044748C: ;
    ecx = ZX16(MEM16(esi + 8));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 8));
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) + ecx;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x270) = MEM32(esi + 0x270) + eax;
    eax = MEM32(esi + 0x270);
    (void)0; /* cmp MEM32(esi + 0x26C), eax - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(MEM32(esi + 0x26C), eax)) goto loc_004474BF; /* jne: not equal / not zero */

loc_004474B1: ;
    MEM32(esi + 0x270) = MEM32(esi + 0x270) & 0;
    MEM32(esi + 0x26C) = MEM32(esi + 0x26C) & 0;

loc_004474BF: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004474C8(); return; /* tail jmp 0x004474C8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004474CC
 * Original: 0x004474CC - 0x00447501 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004474CC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004474CC: ;
    eax = MEM32(esp + 4);
    ecx = ZX16(MEM16(eax + 0x1E4));
    ecx = ecx - 0;
    if ((ecx == 0)) { sub_00447501(); return; } /* je: equal / zero */

loc_004474DC: ;
    ecx--;
    ecx--;
    if ((ecx == 0)) goto loc_004474F0; /* je: equal / zero */

loc_004474E0: ;
    SET_LO16(ecx, MEM16(eax + 0x1AC));

loc_004474E7: ;
    MEM16(eax + 0x1AE) = LO16(ecx);
    g_seh_ebp = ebp; sub_00447509(); return; /* tail jmp 0x00447509 */

loc_004474F0: ;
    ecx = ZX16(MEM16(eax + 0xD0));
    SET_LO16(ecx, MEM16(eax + ecx * 2 + 0x1B4));
    goto loc_004474E7;

}

/**
 * sub_00447563
 * Original: 0x00447563 - 0x004476B5 (338 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447563(void)
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

loc_00447563: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x80;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ZX16(MEM16(esi + 0xA));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(esi + 0x260);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x290), LO16(edi) - flags set for next jcc */
    ebx = ecx + eax * 4;
    if (CMP_LE(MEM16(esi + 0x290), LO16(edi))) goto loc_004476B0; /* jle: less or equal (signed <=) */

loc_00447595: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x10C));
    PUSH32(esp, eax);
    eax = SX16(LO16(edi));
    eax++;
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, ecx);
    eax = esi + 0x158;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x198));
    PUSH32(esp, eax);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044473F(); /* call 0x0044473F */

loc_004475C9: ;
    SET_LO16(eax, MEM16(esi + 0x10C));
    esp = esp + 0x14;
    if (CMP_A(LO16(eax), 0x10)) goto loc_004476B0; /* ja: above (unsigned >) */

loc_004475DD: ;
    if (CMP_BE(LO16(eax), 1)) goto loc_004476B0; /* jbe: below or equal (unsigned <=) */

loc_004475E7: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    eax = ebp + -128;
    PUSH32(esp, eax);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_004475F8: ;
    esp = esp + 8;
    fp_push(MEMF(esi + 0xEBC)); /* fld float */
    eax = esi + 0x298;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x284));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xF78));
    eax = 0; /* xor self */
    PUSH32(esp, MEM32(esi + 0xF74));
    SET_LO8(eax, MEM8(esi + 0xEC0));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xEC4));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x288));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1A4));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1A8));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1E0));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x10C));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x29A));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x292));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1B6));
    PUSH32(esp, eax);
    eax = esi + 0x2A0;
    PUSH32(esp, eax);
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0044E28F(); /* call 0x0044E28F */

loc_00447690: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x292);
    eax = eax << 2;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    esp = esp + 0x4C;
    ebx = ebx + eax;
    edi++;
    if (CMP_L(LO16(edi), MEM16(esi + 0x290))) goto loc_00447595; /* jl: less (signed <) */

loc_004476B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004476B5
 * Original: 0x004476B5 - 0x004476FC (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004476B5(void)
{
    int _flags = 0; /* fallback flag var */

loc_004476B5: ;
    eax = MEM32(esp + 4);
    ecx = ZX16(MEM16(eax + 0xC));
    edx = MEM32(esp + 8);
    edx = edx - MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0xA));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    MEM16(eax + 0xF58) = LO16(edx);
    edx = ZX16(LO16(edx));
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_GE(edx, ecx)) goto loc_004476DE; /* jge: greater or equal (signed >=) */

loc_004476DC: ;
    ecx = edx;

loc_004476DE: ;
    edx = MEM32(eax + 0x274);
    MEM16(eax + 0xF58) = LO16(ecx);
    ecx = ZX16(MEM16(esp + 0xC));
    ecx = edx + ecx * 2;
    MEM32(eax + 0xF54) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_004476FC
 * Original: 0x004476FC - 0x0044775E (98 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004476FC(void)
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

loc_004476FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0xF54);
    ecx = MEM32(eax + 0x260);
    SET_LO16(eax, MEM16(eax + 0xF58));
    PUSH32(esp, esi);
    esi = SX16(LO16(eax));
    esi++;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fld st(0) */
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_00447757; /* jle: less or equal (signed <=) */

loc_0044772D: ;
    eax = ZX16(LO16(eax));

loc_00447730: ;
    esi = (uint32_t)(int32_t)SMEM16(edx);
    /* fld st(1) */
    /* FPU: fsubr qword ptr [0x648d08] */
    MEM32(ebp + 8) = esi;
    /* FPU: fimul dword ptr [ebp + 8] */
    edx++;
    edx++;
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    eax--;
    /* fld st(1) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fstp st(2) */
    if ((eax != 0)) goto loc_00447730; /* jne: not equal / not zero */

loc_00447757: ;
    /* fstp st(0) */
    POP32(esp, esi);
    /* fstp st(0) */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044775E
 * Original: 0x0044775E - 0x0044784F (241 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044775E(void)
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

loc_0044775E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(ebx + 0x10C));
    if (CMP_BE(LO16(ecx), 1)) goto loc_0044784C; /* jbe: below or equal (unsigned <=) */

loc_0044777C: ;
    if (CMP_A(LO16(ecx), 0x10)) goto loc_0044784C; /* ja: above (unsigned >) */

loc_00447786: ;
    edx = MEM32(ebx + 0x1E0);
    eax = MEM32(ebx + 0x260);
    edx = edx << 2;
    eax = eax - edx;
    edx = MEM32(ebx + 0x1DC);
    ecx = ZX16(LO16(ecx));
    MEM32(ebp + -4) = edx;
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_004477BD; /* jle: less or equal (signed <=) */

loc_004477AC: ;
    eax = eax + 0xFFFFFFFCu;

loc_004477AF: ;
    fp_push(MEMF(eax)); /* fld float */
    edx++;
    MEMF(ebp + edx * 4 + -72) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax - 4;
    if (CMP_L(edx, ecx)) goto loc_004477AF; /* jl: less (signed <) */

loc_004477BD: ;
    eax = MEM32(ebx + 0x114);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = ebx + 0x158;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = ZX16(MEM16(ebx + 0x10C));
    PUSH32(esp, eax);
    eax = ebp + -132;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x114);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_004477EB: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x10C));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x1E0));
    PUSH32(esp, eax);
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_00447815: ;
    edx = 0; /* xor self */
    esp = esp + 0x24;
    if (CMP_BE(MEM16(ebx + 0x10C), LO16(edx))) goto loc_0044784A; /* jbe: below or equal (unsigned <=) */

loc_00447823: ;
    ecx = 0; /* xor self */
    eax = ebx + 0x21C;

loc_0044782B: ;
    esi = MEM32(ebx + 0x260);
    esi = esi - ecx;
    esi = MEM32(esi + -4);
    MEM32(eax) = esi;
    esi = ZX16(MEM16(ebx + 0x10C));
    edx++;
    ecx = ecx + 4;
    eax = eax + 4;
    if (CMP_L(edx, esi)) goto loc_0044782B; /* jl: less (signed <) */

loc_0044784A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0044784C: ;
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
 * sub_0044784F
 * Original: 0x0044784F - 0x004479C3 (372 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044784F(void)
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

loc_0044784F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(esi + 0x10C));
    (void)0; /* cmp LO16(ecx), 1 - flags set for next jcc */
    eax = esi + 0xC24;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x260);
    MEM32(ebp + -8) = eax;
    if (CMP_BE(LO16(ecx), 1)) goto loc_004479BF; /* jbe: below or equal (unsigned <=) */

loc_0044787D: ;
    if (CMP_A(LO16(ecx), 0x10)) goto loc_004479BF; /* ja: above (unsigned >) */

loc_00447887: ;
    eax = MEM32(esi + 0x1E0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax, 0x50)) goto loc_004478A2; /* jle: less or equal (signed <=) */

loc_00447895: ;
    ebx = ebx + 0x50;
    edx = ZX16(LO16(ebx));
    edx = edx + 0x50;
    if (CMP_L(edx, eax)) goto loc_00447895; /* jl: less (signed <) */

loc_004478A2: ;
    eax = ZX16(MEM16(esi + 0x1E6));
    eax = eax - 0;
    if ((eax == 0)) goto loc_004478C3; /* je: equal / zero */

loc_004478AE: ;
    eax--;
    if ((eax == 0)) goto loc_004478BA; /* je: equal / zero */

loc_004478B1: ;
    MEM32(ebp + 8) = 2;
    goto loc_004478C7;

loc_004478BA: ;
    MEM32(ebp + 8) = 1;
    goto loc_004478C7;

loc_004478C3: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;

loc_004478C7: ;
    SET_LO16(eax, MEM16(esi + 0x1B6));
    MEM16(ebp + -12) = LO16(eax);
    eax = ZX16(LO16(ecx));
    PUSH32(esp, eax);
    eax = ebp + -76;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x114);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_004478E7: ;
    ebx = ZX16(LO16(ebx));
    eax = ebx;
    eax = eax << 2;
    edi = edi - eax;
    MEM32(ebp + -4) = edi;
    edi = esi + 0x2A0;
    PUSH32(esp, 0x307);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00447905: ;
    esp = esp + 0x14;
    if (CMP_LE(ebx & ebx, 0)) goto loc_004479B4; /* jle: less or equal (signed <=) */

loc_00447910: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -4) = eax;
    eax = ebx + -1;
    PUSH32(esp, 0x50);
    edx = 0; /* xor self */
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    ebx++;

loc_00447923: ;
    fp_push(MEMF(esi + 0xEBC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x284));
    eax = esi + 0x298;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xF78));
    eax = 0; /* xor self */
    PUSH32(esp, MEM32(esi + 0xF74));
    SET_LO8(eax, MEM8(esi + 0xEC0));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xEC4));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x288));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1A4));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1A8));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1E0));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x10C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -76;
    PUSH32(esp, 0x50);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ebp + -396;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_0044E28F(); /* call 0x0044E28F */

loc_004479A3: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x140;
    esp = esp + 0x4C;
    ebx--;
    if ((ebx != 0)) goto loc_00447923; /* jne: not equal / not zero */

loc_004479B4: ;
    edi = MEM32(ebp + -8);
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, ebx);

loc_004479BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004479C3
 * Original: 0x004479C3 - 0x00447CF4 (817 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004479C3(void)
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

loc_004479C3: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    esp = esp - 0x318;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x70);
    ecx = MEM32(ebx + 0xEC8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0xED4;
    eax = edi + 0x40;
    MEM32(ebp + 0x5C) = eax;
    eax = ZX16(MEM16(ebp + 0x7C));
    ecx = ecx << 6;
    ecx = ecx + eax;
    if (CMP_AE(ecx, 0x1C0)) goto loc_004479FF; /* jae: above or equal (unsigned >=) */

loc_004479F7: ;
    if (TEST_NZ(LO8(eax), 0x3F)) goto loc_00447CE7; /* jne: not equal / not zero */

loc_004479FF: ;
    SET_LO16(eax, MEM16(ebx + 0x10C));
    if (CMP_A(LO16(eax), 0x10)) goto loc_00447CE7; /* ja: above (unsigned >) */

loc_00447A10: ;
    if (CMP_BE(LO16(eax), 1)) goto loc_00447CE7; /* jbe: below or equal (unsigned <=) */

loc_00447A1A: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebx + 0x158;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_00447A2E: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x10C));
    fp_push(MEMF(0x648E68)); /* fld float */
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebp + -48;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443EAA(); /* call 0x00443EAA */

loc_00447A52: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x29C));
    esp = esp + 0x10;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(ebp + 0x58) = eax;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00447A6D; /* je: equal / zero */

loc_00447A66: ;
    MEM32(ebp + 0x58) = 3;

loc_00447A6D: ;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) & 0;
    if (CMP_NE(MEM32(ebx + 0xEC8), 0)) goto loc_00447ABF; /* jne: not equal / not zero */

loc_00447A7A: ;
    ecx = ZX16(MEM16(ebx + 0x10C));
    fp_push(MEMF(0x575BA8)); /* fld float */
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = ebx + 0x21C;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = ZX16(MEM16(ebx + 0x10C));
    edi = MEM32(ebp + 0x5C);
    ecx = ecx << 2;
    esi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    goto loc_00447AC5;

loc_00447ABF: ;
    fp_push(MEMF(ebx + 0xECC)); /* fld float */

loc_00447AC5: ;
    (void)0; /* cmp MEM32(ebx + 0xEC8), 7 - flags set for next jcc */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    if (CMP_AE(MEM32(ebx + 0xEC8), 7)) goto loc_00447CCD; /* jae: above or equal (unsigned >=) */

loc_00447AD5: ;
    ecx = MEM32(ebp + 0x78);
    eax = MEM32(ebp + 0x74);
    eax = eax - ecx;
    MEM32(ebp + 0x64) = ecx;
    MEM32(ebp + 0x54) = eax;
    goto loc_00447AE8;

loc_00447AE5: ;
    eax = MEM32(ebp + 0x54);

loc_00447AE8: ;
    ecx = ZX16(MEM16(ebp + 0x7C));
    if (CMP_GE(MEM32(ebp + 0x60), ecx)) goto loc_00447CCD; /* jge: greater or equal (signed >=) */

loc_00447AF5: ;
    edx = MEM32(ebp + 0x64);
    /* fstp st(0) */
    ecx = 0; /* xor self */
    eax = eax + edx;

loc_00447AFE: ;
    edx = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + 0x50) = edx;
    ecx++;
    eax++;
    fp_push((double)SMEM32(ebp + 0x50)); /* fild */
    eax++;
    (void)0; /* cmp ecx, 0x40 - flags set for next jcc */
    MEMF(ebp + ecx * 4 + -628) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(ecx, 0x40)) goto loc_00447AFE; /* jl: less (signed <) */

loc_00447B16: ;
    if (CMP_AE(MEM32(ebx + 0xEC8), 4)) goto loc_00447BD6; /* jae: above or equal (unsigned >=) */

loc_00447B23: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x10C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    POP32(esp, esi);
    PUSH32(esp, esi);
    eax = ebx + 0xED4;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -624;
    PUSH32(esp, eax);
    eax = ebp + -304;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_00447B4F: ;
    ecx = 0; /* xor self */
    esp = esp + 0x18;
    if (CMP_NE(MEM32(ebx + 0xEC8), ecx)) goto loc_00447BA0; /* jne: not equal / not zero */

loc_00447B5C: ;
    eax = MEM32(ebx + 0x1E0);
    fp_push(MEMF(0x575BA4)); /* fld float */
    edx = MEM32(ebx + 0x1DC);
    fp_push(MEMF(edx + eax * 4 + -4)); /* fld float */

loc_00447B72: ;
    /* fld st(1) */
    eax = ebp + ecx * 4 + -304;
    /* FPU: fsubr qword ptr [0x648d08] */
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fst */
    /* fld st(1) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fstp st(2) */
    if (CMP_L(ecx, esi)) goto loc_00447B72; /* jl: less (signed <) */

loc_00447B9C: ;
    /* fstp st(0) */
    /* fstp st(0) */

loc_00447BA0: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x10C));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x5C));
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -304;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_00447BC3: ;
    ecx = esi;
    esi = ebp + -304;
    edi = ebp + -624;
    esp = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00447BD6: ;
    fp_push(MEMF(ebx + 0xEBC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebx + 0x284));
    eax = ebx + 0x298;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xF78));
    eax = 0; /* xor self */
    PUSH32(esp, MEM32(ebx + 0xF74));
    SET_LO8(eax, MEM8(ebx + 0xEC0));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xEC4));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x288));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x1A4));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x1A8));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x1A4));
    SET_LO16(eax, LO16(eax) + 8);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x10C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x58));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x1AE));
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = ebx + 0x2A0;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -304;
    PUSH32(esp, eax);
    eax = ebp + -624;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044E28F(); /* call 0x0044E28F */

loc_00447C6B: ;
    esp = esp + 0x4C;
    if (TEST_NZ(eax, eax)) goto loc_00447CEC; /* jne: not equal / not zero */

loc_00447C72: ;
    esi = MEM32(ebp + 0x64);
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    edi = 0; /* xor self */

loc_00447C7A: ;
    fp_push(MEMD(0x648D08)); /* fld double */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00447C9F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM16(esi) = LO16(eax);
    edi++;
    esi++;
    esi++;
    if (CMP_L(edi, 0x40)) goto loc_00447C7A; /* jl: less (signed <) */

loc_00447CB0: ;
    MEM32(ebx + 0xEC8) = MEM32(ebx + 0xEC8) + 1;
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) + 0x40;
    (void)0; /* cmp MEM32(ebx + 0xEC8), 7 - flags set for next jcc */
    MEM32(ebp + 0x64) = esi;
    if (CMP_B(MEM32(ebx + 0xEC8), 7)) goto loc_00447AE5; /* jb: below (unsigned <) */

loc_00447CCD: ;
    (void)0; /* cmp MEM32(ebx + 0xEC8), 7 - flags set for next jcc */
    MEMF(ebx + 0xECC) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(MEM32(ebx + 0xEC8), 7)) goto loc_00447CE3; /* jne: not equal / not zero */

loc_00447CDC: ;
    MEM32(ebx + 0xED0) = MEM32(ebx + 0xED0) & 0;

loc_00447CE3: ;
    eax = 0; /* xor self */
    goto loc_00447CEC;

loc_00447CE7: ;
    eax = 0x80004005u;

loc_00447CEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x68;
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
 * sub_00447CF4
 * Original: 0x00447CF4 - 0x00447DA1 (173 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447CF4(void)
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

loc_00447CF4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(ecx + 0x1E0));
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x10C));
    ecx = MEM32(ecx + 0x260);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(LO16(eax));
    edx = esi;
    edx = edx << 2;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    ecx = ecx - edx;
    edx = 0; /* xor self */
    if (CMP_BE(LO16(edi), LO16(eax))) goto loc_00447D4C; /* jbe: below or equal (unsigned <=) */

loc_00447D25: ;
    edi = edi - eax;
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_00447D9A; /* jbe: below or equal (unsigned <=) */

loc_00447D2C: ;
    ebx = MEM32(ebp + 0xC);
    esi = edi + edx;
    esi = ZX16(LO16(esi));
    esi = (uint32_t)(int32_t)SMEM16(ebx + esi * 2);
    MEM32(ebp + 8) = esi;
    edx++;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    if (CMP_B(LO16(edx), LO16(eax))) goto loc_00447D2C; /* jb: below (unsigned <) */

loc_00447D4A: ;
    goto loc_00447D9A;

loc_00447D4C: ;
    ebx = ZX16(LO16(edi));
    esi = esi - ebx;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (CMP_LE(esi & esi, 0)) goto loc_00447D6F; /* jle: less or equal (signed <=) */

loc_00447D58: ;
    esi = 0; /* xor self */

loc_00447D5A: ;
    ebx = edx + edi;
    ebx = ZX16(LO16(ebx));
    edx++;
    fp_push(MEMF(ecx + ebx * 4)); /* fld float */
    MEMF(ecx + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    esi = ZX16(LO16(edx));
    if (CMP_L(esi, MEM32(ebp + 8))) goto loc_00447D5A; /* jl: less (signed <) */

loc_00447D6F: ;
    esi = 0; /* xor self */
    if (CMP_AE(LO16(edx), LO16(eax))) goto loc_00447D9A; /* jae: above or equal (unsigned >=) */

loc_00447D76: ;
    edi = ZX16(LO16(edx));
    eax = eax - edx;
    ecx = ecx + edi * 4;
    eax = ZX16(LO16(eax));

loc_00447D81: ;
    edi = MEM32(ebp + 0xC);
    edx = ZX16(LO16(esi));
    edx = (uint32_t)(int32_t)SMEM16(edi + edx * 2);
    MEM32(ebp + 8) = edx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    esi++;
    eax--;
    if ((eax != 0)) goto loc_00447D81; /* jne: not equal / not zero */

loc_00447D9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
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
 * sub_00447DA1
 * Original: 0x00447DA1 - 0x00447E03 (98 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447DA1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00447DA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -4;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x580B6C);
    PUSH32(esp, 0); sub_00448E7A(); /* call 0x00448E7A */

loc_00447DC1: ;
    edi = 0x80040004u;
    esp = esp + 0x18;
    if (CMP_EQ(eax, edi)) { sub_00447E03(); return; } /* je: equal / zero */

loc_00447DCD: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0xDA);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00446B46(); /* call 0x00446B46 */

loc_00447DE3: ;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_00447DF1; /* jge: greater or equal (signed >=) */

loc_00447DEA: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00447E05(); return; /* tail jmp 0x00447E05 */

loc_00447DF1: ;
    ecx = MEM32(esi);
    eax = SX16(LO16(eax));
    eax = eax + ecx;
    if (CMP_L(MEM32(ebp + 0x14), eax)) { sub_00447E03(); return; } /* jl: less (signed <) */

loc_00447DFD: ;
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00447E05(); return; /* tail jmp 0x00447E05 */

}

/**
 * sub_00447E09
 * Original: 0x00447E09 - 0x0044888F (2694 bytes, 806 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447E09(void)
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

loc_00447E09: ;
    PUSH32(esp, ebp);
    eax = 0x1418;
    ebp = esp + -116;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00447E18: ;
    fp_push(0.0); /* fldz */
    PUSH32(esp, ebx);
    MEMF(ebp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0; /* xor self */
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    MEMF(ebp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(ebp + 0x7C);
    fp_push(0.0); /* fldz */
    SET_LO16(eax, MEM16(esi + 0xD8));
    ecx = MEM32(esi + 0x260);
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    edi = SX16(LO16(eax));
    ebx = 0; /* xor self */
    MEM32(ebp + 0x20) = eax;
    eax = ZX16(MEM16(esi + 0xA));
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    (void)0; /* cmp MEM32(esi + 0xB4), ebx - flags set for next jcc */
    eax = ecx + eax * 4;
    MEM32(ebp + 0x64) = ebx;
    MEM32(ebp + 0x24) = eax;
    if (CMP_NE(MEM32(esi + 0xB4), ebx)) goto loc_00447E6B; /* jne: not equal / not zero */

loc_00447E5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00446BD1(); /* call 0x00446BD1 */

loc_00447E62: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) { sub_0044888F(); return; } /* jne: not equal / not zero */

loc_00447E6B: ;
    eax = MEM32(esi + 0x114);
    eax = MEM32(eax + edi * 4);
    PUSH32(esp, esi);
    MEM32(esi + 0x198) = eax;
    PUSH32(esp, 0); sub_00446EDB(); /* call 0x00446EDB */

loc_00447E80: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_00447E89: ;
    ecx = ZX16(MEM16(esi + 0xD0));
    PUSH32(esp, 8);
    POP32(esp, eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = 0; /* xor self */
    edi++;
    (void)0; /* cmp MEM16(esi + 0x1E4), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 0x34) = eax;
    if (CMP_NE(MEM16(esi + 0x1E4), LO16(edi))) goto loc_00447EF5; /* jne: not equal / not zero */

loc_00447EA5: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1A4));
    SET_LO16(eax, LO16(eax) - 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1A8));
    PUSH32(esp, eax);
    eax = esi + 0x1AC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    eax = esi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_00447EDB: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_00447EE6: ;
    eax = ebp + -2020;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0044727A(); /* call 0x0044727A */

loc_00447EF3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00447EF5: ;
    if (CMP_NE(MEM16(esi + 0x1E4), LO16(ebx))) goto loc_00447F1E; /* jne: not equal / not zero */

loc_00447EFE: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0xD0), LO16(ebx))) goto loc_00447F1E; /* jbe: below or equal (unsigned <=) */

loc_00447F09: ;
    ecx = ZX16(LO16(eax));
    eax++;
    MEM16(esi + ecx * 2 + 0x1B6) = LO16(ebx);
    if (CMP_B(LO16(eax), MEM16(esi + 0xD0))) goto loc_00447F09; /* jb: below (unsigned <) */

loc_00447F1E: ;
    if (CMP_NE(MEM16(esi + 0x1E6), LO16(ebx))) goto loc_00447F63; /* jne: not equal / not zero */

loc_00447F27: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    eax = ebp + 0x7E;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    eax = esi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_00447F4A: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_00447F55: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x7E);
    fp_push(MEMF(eax * 4 + 0x57AD00)); /* fld float */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */

loc_00447F63: ;
    if (CMP_NE(MEM16(esi + 0x1E6), 2)) goto loc_00447F7C; /* jne: not equal / not zero */

loc_00447F6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00446F9C(); /* call 0x00446F9C */

loc_00447F73: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_00447F7C: ;
    eax = ZX16(MEM16(esi + 0x1E6));
    eax = eax - ebx;
    if ((eax == 0)) goto loc_00447F9E; /* je: equal / zero */

loc_00447F87: ;
    eax--;
    if ((eax == 0)) goto loc_00447F95; /* je: equal / zero */

loc_00447F8A: ;
    MEM16(esi + 0x29A) = 2;
    goto loc_00447FA5;

loc_00447F95: ;
    MEM16(esi + 0x29A) = LO16(edi);
    goto loc_00447FA5;

loc_00447F9E: ;
    MEM16(esi + 0x29A) = LO16(ebx);

loc_00447FA5: ;
    if (CMP_G(MEM32(esi + 0x1E0), 0x1A0)) goto loc_00447FD0; /* jg: greater (signed >) */

loc_00447FB1: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1E0));
    PUSH32(esp, eax);
    eax = ebp + -5028;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1DC));
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00447FCD: ;
    esp = esp + 0xC;

loc_00447FD0: ;
    (void)0; /* cmp MEM16(esi + 0xD0), LO16(ebx) - flags set for next jcc */
    eax = MEM32(esi + 0x1E0);
    eax = ebp + eax * 4 + -5028;
    MEM32(ebp + 0x5C) = eax;
    SET_LO16(eax, MEM16(esi + 0xD2));
    MEM32(ebp + 0x60) = ebx;
    MEM16(ebp + 0x70) = LO16(eax);
    MEM32(ebp + 0x6C) = ebx;
    if (CMP_BE(MEM16(esi + 0xD0), LO16(ebx))) goto loc_00448834; /* jbe: below or equal (unsigned <=) */

loc_00447FFE: ;
    if (CMP_NE(MEM16(esi + 0x1E4), 2)) goto loc_004480F3; /* jne: not equal / not zero */

loc_0044800C: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x6C), LO16(ebx) - flags set for next jcc */
    PUSH32(esp, 1);
    if (CMP_NE(MEM16(ebp + 0x6C), LO16(ebx))) goto loc_0044804A; /* jne: not equal / not zero */

loc_00448016: ;
    SET_LO16(eax, MEM16(esi + 0x1D2));
    SET_LO16(eax, LO16(eax) - 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    eax = esi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_0044803D: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_00448048: ;
    goto loc_00448089;

loc_0044804A: ;
    SET_LO16(eax, MEM16(esi + 0x1D8));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1D6));
    PUSH32(esp, eax);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    eax = esi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_00448078: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_00448083: ;
    eax = MEM32(ebp + 0x64);
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) + eax;

loc_00448089: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1D6);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    eax = (uint32_t)(-(int32_t)eax);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + 0x64) = ecx;
    if (CMP_G(ecx, eax)) goto loc_004480A0; /* jg: greater (signed >) */

loc_0044809D: ;
    MEM32(ebp + 0x64) = eax;

loc_004480A0: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1D8);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x1D2);
    edi = edi - edx;
    edx = edi + -1;
    if (CMP_GE(MEM32(ebp + 0x64), edx)) goto loc_004480C6; /* jge: greater or equal (signed >=) */

loc_004480B8: ;
    if (CMP_LE(ecx, eax)) goto loc_004480C1; /* jle: less or equal (signed <=) */

loc_004480BC: ;
    MEM32(ebp + 0x64) = ecx;
    goto loc_004480C9;

loc_004480C1: ;
    MEM32(ebp + 0x64) = eax;
    goto loc_004480C9;

loc_004480C6: ;
    MEM32(ebp + 0x64) = edx;

loc_004480C9: ;
    eax = ebp + 0x30;
    PUSH32(esp, eax);
    eax = esi + 0x1CA;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x4C));
    PUSH32(esp, 0); sub_004537E2(); /* call 0x004537E2 */

loc_004480DC: ;
    fp_push(MEMF(ebp + 0x30)); /* fld float */
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_004480E7: ;
    ecx = ZX16(MEM16(ebp + 0x6C));
    MEM16(esi + ecx * 2 + 0x1B6) = LO16(eax);

loc_004480F3: ;
    eax = ZX16(MEM16(esi + 0x1E6));
    eax = eax - ebx;
    if ((eax == 0)) goto loc_00448400; /* je: equal / zero */

loc_00448102: ;
    eax--;
    if ((eax == 0)) goto loc_0044838D; /* je: equal / zero */

loc_00448109: ;
    eax--;
    if ((eax == 0)) goto loc_0044829A; /* je: equal / zero */

loc_00448110: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00448227; /* je: equal / zero */

loc_0044811B: ;
    eax--;
    if ((eax == 0)) goto loc_004481CE; /* je: equal / zero */

loc_00448122: ;
    eax--;
    if ((eax != 0)) { sub_0044888F(); return; } /* jne: not equal / not zero */

loc_00448129: ;
    eax = ZX16(MEM16(esi + 0x1E8));
    eax = eax - 5;
    if ((eax == 0)) goto loc_004481C5; /* je: equal / zero */

loc_00448139: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00448190; /* je: equal / zero */

loc_0044813D: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_0044816E; /* jne: not equal / not zero */

loc_00448142: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x1F);

loc_00448146: ;
    PUSH32(esp, ebx);
    eax = ebp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    eax = esi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x8C));

loc_0044815E: ;
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_00448163: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_0044816E: ;
    eax = ebp + 0x38;
    PUSH32(esp, eax);
    eax = ebp + -740;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1E8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004533AA(); /* call 0x004533AA */

loc_0044818B: ;
    goto loc_0044843D;

loc_00448190: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1F);
    PUSH32(esp, ebx);
    eax = ebp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    edi = esi + 0x98;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_004481B1: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_004481BC: ;
    PUSH32(esp, 3);
    PUSH32(esp, 7);
    goto loc_00448283;

loc_004481C5: ;
    PUSH32(esp, 5);
    PUSH32(esp, 7);
    goto loc_00448146;

loc_004481CE: ;
    eax = ZX16(MEM16(esi + 0x1E8));
    eax = eax - 5;
    if ((eax == 0)) goto loc_0044821E; /* je: equal / zero */

loc_004481DA: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_004481EC; /* je: equal / zero */

loc_004481DE: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_0044816E; /* jne: not equal / not zero */

loc_004481E3: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x7F);
    goto loc_00448146;

loc_004481EC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x7F);
    PUSH32(esp, ebx);
    eax = ebp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    edi = esi + 0x98;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_0044820D: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_00448218: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xF);
    goto loc_00448283;

loc_0044821E: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xF);
    goto loc_00448146;

loc_00448227: ;
    eax = ZX16(MEM16(esi + 0x1E8));
    eax = eax - 5;
    if ((eax == 0)) goto loc_00448142; /* je: equal / zero */

loc_00448237: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00448250; /* je: equal / zero */

loc_0044823B: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_0044816E; /* jne: not equal / not zero */

loc_00448244: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x1FF);
    goto loc_00448146;

loc_00448250: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1FF);
    PUSH32(esp, ebx);
    eax = ebp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    edi = esi + 0x98;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_00448274: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_0044827F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x1F);

loc_00448283: ;
    PUSH32(esp, ebx);
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    goto loc_0044815E;

loc_0044829A: ;
    if (CMP_NE(MEM16(esi + 0x1EC), 1)) goto loc_004482B3; /* jne: not equal / not zero */

loc_004482A4: ;
    if (CMP_NE(MEM16(ebp + 0x6C), LO16(ebx))) goto loc_004482B3; /* jne: not equal / not zero */

loc_004482AA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3FF);
    goto loc_004482BA;

loc_004482B3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFF);

loc_004482BA: ;
    PUSH32(esp, ebx);
    eax = ebp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    edi = esi + 0x98;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_004482D7: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_004482E2: ;
    SET_LO16(eax, MEM16(esi + 0x1F8));
    if (CMP_NE(LO16(eax), LO16(ebx))) goto loc_0044830C; /* jne: not equal / not zero */

loc_004482EE: ;
    if (CMP_NE(MEM16(ebp + 0x6C), LO16(ebx))) goto loc_004482FA; /* jne: not equal / not zero */

loc_004482F4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    goto loc_00448310;

loc_004482FA: ;
    if (CMP_NE(LO16(eax), LO16(ebx))) goto loc_0044830C; /* jne: not equal / not zero */

loc_004482FF: ;
    if (CMP_NE(MEM16(ebp + 0x6C), 1)) goto loc_0044830C; /* jne: not equal / not zero */

loc_00448306: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xF);
    goto loc_00448310;

loc_0044830C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1F);

loc_00448310: ;
    PUSH32(esp, ebx);
    eax = ebp + 0x3A;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_00448327: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_00448332: ;
    eax = ZX16(MEM16(ebp + 0x6C));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x1F8));
    PUSH32(esp, ecx);
    ecx = ebp + 0x1C;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + eax * 2 + 0x1C6));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + eax * 2 + 0x1F4));
    eax = (uint32_t)(int32_t)SMEM16(esi + eax * 2 + 0x1F0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = ebp + 0x38;
    PUSH32(esp, ecx);
    ecx = ebp + -740;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x1EE));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0); sub_004534EB(); /* call 0x004534EB */

loc_00448385: ;
    esp = esp + 0x2C;
    goto loc_00448440;

loc_0044838D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    eax = ebp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    edi = esi + 0x98;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_004483B1: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_004483BC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    PUSH32(esp, ebx);
    eax = ebp + 0x7E;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_004483D7: ;
    esp = esp + 0x1C;
    if (CMP_NE(eax, ebx)) goto loc_00448887; /* jne: not equal / not zero */

loc_004483E2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x7E);
    PUSH32(esp, MEM32(ebp + 0x70));
    fp_push(MEMF(eax * 4 + 0x57A7F8)); /* fld float */
    eax = ebp + -740;
    PUSH32(esp, eax);
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x38);
    goto loc_00448429;

loc_00448400: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1FA));
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045349C(); /* call 0x0045349C */

loc_00448415: ;
    esp = esp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = ebp + -740;
    MEM16(ebp + 0x38) = LO16(eax);
    PUSH32(esp, ecx);
    eax = SX16(LO16(eax));

loc_00448429: ;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    PUSH32(esp, ecx);
    eax = eax * 4 + 0x579798;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D87(); /* call 0x00448D87 */

loc_0044843D: ;
    esp = esp + 0x10;

loc_00448440: ;
    eax = ZX16(MEM16(esi + 0x1E6));
    fp_push(1.0); /* fld1 */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEMF(ebp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_EQ(eax, 2)) goto loc_00448463; /* je: equal / zero */

loc_00448451: ;
    if (CMP_LE(eax, 3)) goto loc_00448598; /* jle: less or equal (signed <=) */

loc_0044845A: ;
    if (CMP_G(eax, 6)) goto loc_00448598; /* jg: greater (signed >) */

loc_00448463: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = ebp + -740;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448C97(); /* call 0x00448C97 */

loc_00448473: ;
    eax = ZX16(MEM16(ebp + 0x70));
    MEM32(ebp + 0x54) = eax;
    esp = esp + 0xC;
    fp_push((double)SMEM32(ebp + 0x54)); /* fild */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00448493; /* jp: parity */

loc_0044848B: ;
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    goto loc_0044849B;

loc_00448493: ;
    /* fld st(1) */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    /* fstp st(2) */
    /* fstp st(0) */

loc_0044849B: ;
    fp_push(MEMF(0x57ACF8)); /* fld float */
    PUSH32(esp, ecx);
    MEMD(ebp + 0x50) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0044CDC8(); /* call 0x0044CDC8 */

loc_004484AE: ;
    /* FPU: fdivr qword ptr [ebp + 0x50] */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = 0x57B100;
    edi = esi + 0x1FC;
    MEM32(ebp + 0x54) = 6;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */

loc_004484C8: ;
    fp_push(MEMF(ebx)); /* fld float */
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0044CDBA(); /* call 0x0044CDBA */

loc_004484DB: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x10;
    ebx = ebx + 4;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi + 4;
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) - 1;
    if ((MEM32(ebp + 0x54) != 0)) goto loc_004484C8; /* jne: not equal / not zero */

loc_004484EF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    eax = ebp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x94));
    eax = esi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, 0); sub_00448EF0(); /* call 0x00448EF0 */

loc_00448511: ;
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_00448887; /* jne: not equal / not zero */

loc_0044851C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x2C);
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    eax = eax << 2;
    ecx = MEM32(eax + 0x57AAF8);
    eax = MEM32(eax + 0x57A8F8);
    MEM32(ebp + 0x58) = eax;
    MEM32(ebp + 0x28) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x64909C)); /* fld float */
    fp_push(MEMF(ebp + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom st(1) */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00448554; /* jne: not equal / not zero */

loc_00448550: ;
    /* fld st(0) */
    goto loc_00448556;

loc_00448554: ;
    /* fld st(1) */

loc_00448556: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d1c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00448571; /* jp: parity */

loc_00448563: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0044857A; /* je: equal / zero */

loc_0044856C: ;
    MEMF(ebp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0044857C;

loc_00448571: ;
    /* fstp st(0) */
    MEM32(ebp + 0x58) = 0x40A00000;

loc_0044857A: ;
    /* fstp st(0) */

loc_0044857C: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    eax = ebp + -740;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D87(); /* call 0x00448D87 */

loc_00448593: ;
    esp = esp + 0x10;
    ebx = 0; /* xor self */

loc_00448598: ;
    if (CMP_G(MEM16(ebp + 0x34), 7)) goto loc_004485C9; /* jg: greater (signed >) */

loc_0044859F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x34);
    edx = 0x86;
    edx = edx - eax;
    eax = esi + edx * 4;
    PUSH32(esp, 8);
    POP32(esp, edx);
    edx = edx - MEM32(ebp + 0x34);
    ecx = esi + 0x218;
    edx = ZX16(LO16(edx));

loc_004485BC: ;
    edi = MEM32(eax);
    MEM32(ecx) = edi;
    eax = eax - 4;
    ecx = ecx - 4;
    edx--;
    if ((edx != 0)) goto loc_004485BC; /* jne: not equal / not zero */

loc_004485C9: ;
    PUSH32(esp, MEM32(ebp + 0x34));
    fp_push(MEMF(ebp + 0x58)); /* fld float */
    eax = esi + 0x1FC;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443B0D(); /* call 0x00443B0D */

loc_004485DF: ;
    eax = ZX16(MEM16(esi + 0x1E4));
    esp = esp + 0xC;
    eax = eax - ebx;
    if ((eax == 0)) goto loc_0044866C; /* je: equal / zero */

loc_004485ED: ;
    eax--;
    if ((eax == 0)) goto loc_00448637; /* je: equal / zero */

loc_004485F0: ;
    eax--;
    if ((eax != 0)) goto loc_0044867D; /* jne: not equal / not zero */

loc_004485F7: ;
    fp_push(MEMF(ebp + 0x30)); /* fld float */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x5C);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebp + -1380;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = ecx + eax * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00453613(); /* call 0x00453613 */

loc_00448618: ;
    esp = esp + 0x10;
    PUSH32(esp, MEM32(ebp + 0x70));
    fp_push(MEMF(ebp + 0x28)); /* fld float */
    eax = ebp + -1380;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);

loc_0044862D: ;
    PUSH32(esp, 0); sub_00448D87(); /* call 0x00448D87 */

loc_00448632: ;
    esp = esp + 0x10;
    goto loc_0044867D;

loc_00448637: ;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = MEM32(ebp + 0x5C);
    eax = eax << 2;
    edi = eax + ecx;
    eax = ebp + eax + -2020;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00444AEA(); /* call 0x00444AEA */

loc_00448655: ;
    fp_push(MEMF(ebp + 0x28)); /* fld float */
    esp = esp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = ebp + -1380;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    goto loc_0044862D;

loc_0044866C: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = ebp + -1380;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044867B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0044867D: ;
    edi = ZX16(MEM16(ebp + 0x60));
    eax = MEM32(ebp + 0x5C);
    PUSH32(esp, MEM32(ebp + 0x70));
    edi = edi << 2;
    eax = eax + edi;
    (void)0; /* cmp MEM16(esi + 0x1E4), LO16(ebx) - flags set for next jcc */
    PUSH32(esp, eax);
    if (CMP_NE(MEM16(esi + 0x1E4), LO16(ebx))) goto loc_004486A7; /* jne: not equal / not zero */

loc_00448696: ;
    eax = ebp + -740;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_004486A2: ;
    esp = esp + 0xC;
    goto loc_004486BD;

loc_004486A7: ;
    eax = ebp + -1380;
    PUSH32(esp, eax);
    eax = ebp + -740;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D5A(); /* call 0x00448D5A */

loc_004486BA: ;
    esp = esp + 0x10;

loc_004486BD: ;
    ebx = esi + 0xC0;
    if (CMP_NE(MEM32(ebx), 0)) goto loc_004486CF; /* jne: not equal / not zero */

loc_004486C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0044784F(); /* call 0x0044784F */

loc_004486CE: ;
    POP32(esp, ecx);

loc_004486CF: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x10C));
    MEM32(ebx) = 1;
    ebx = ZX16(MEM16(ebp + 0x6C));
    PUSH32(esp, eax);
    eax = ebx + ebx + 1;
    MEM32(ebp + 0x54) = eax;
    eax = ZX16(MEM16(esi + 0xD0));
    fp_push((double)SMEM32(ebp + 0x54)); /* fild */
    eax = eax << 1;
    MEM32(ebp + 0x54) = eax;
    PUSH32(esp, ecx);
    eax = esi + 0x158;
    /* FPU: fidiv dword ptr [ebp + 0x54] */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x198));
    PUSH32(esp, eax);
    eax = ebp + -100;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044473F(); /* call 0x0044473F */

loc_00448716: ;
    SET_LO16(eax, MEM16(esi + 0x10C));
    esp = esp + 0x14;
    if (CMP_A(LO16(eax), 0x10)) goto loc_0044873A; /* ja: above (unsigned >) */

loc_00448726: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -100;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_00448737: ;
    esp = esp + 0xC;

loc_0044873A: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x10C));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = ebp + edi + -2660;
    MEM32(ebp + 0x54) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x70));
    ecx = esi + 0x21C;
    PUSH32(esp, ecx);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x5C);
    ecx = ecx + edi;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_0044876C: ;
    esp = esp + 0x20;
    if (CMP_EQ(MEM32(esi + 0x28C), 0)) goto loc_00448818; /* je: equal / zero */

loc_0044877C: ;
    fp_push(MEMF(esi + 0xEBC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x284));
    eax = esi + 0x298;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xF78));
    eax = 0; /* xor self */
    PUSH32(esp, MEM32(esi + 0xF74));
    SET_LO8(eax, MEM8(esi + 0xEC0));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xEC4));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x288));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1A4));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1A8));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1E0));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x10C));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x29A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + ebx * 2 + 0x1B6));
    PUSH32(esp, eax);
    eax = esi + 0x2A0;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x24);
    edi = edi + eax;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, 0); sub_0044E28F(); /* call 0x0044E28F */

loc_00448811: ;
    esp = esp + 0x4C;
    if (TEST_NZ(eax, eax)) goto loc_00448887; /* jne: not equal / not zero */

loc_00448818: ;
    eax = MEM32(ebp + 0x70);
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) + eax;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) + 1;
    SET_LO16(eax, MEM16(ebp + 0x6C));
    ebx = 0; /* xor self */
    if (CMP_B(LO16(eax), MEM16(esi + 0xD0))) goto loc_00447FFE; /* jb: below (unsigned <) */

loc_00448834: ;
    if (CMP_NE(MEM32(esi + 0x28C), ebx)) goto loc_0044884F; /* jne: not equal / not zero */

loc_0044883C: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + -2660;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00447563(); /* call 0x00447563 */

loc_0044884C: ;
    esp = esp + 0xC;

loc_0044884F: ;
    ecx = MEM32(ebp + 0x5C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1E0));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0xA));
    eax = eax - MEM32(esi + 0x1E0);
    PUSH32(esp, MEM32(esi + 0x1DC));
    eax = ecx + eax * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00448875: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004474CC(); /* call 0x004474CC */

loc_0044887B: ;
    esp = esp + 0x10;
    MEM16(esi + 0xD8) = MEM16(esi + 0xD8) + 1;
    eax = 0; /* xor self */

loc_00448887: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x74;
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
 * sub_00448896
 * Original: 0x00448896 - 0x004489E9 (339 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448896(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00448896: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    MEM32(esi) = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ZX16(MEM16(edi + 0xA));
    eax = ZX16(MEM16(edi + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    eax = MEM32(esi);
    if (CMP_L(ebx, eax)) goto loc_004489DD; /* jl: less (signed <) */

loc_004488C6: ;
    PUSH32(esp, 1);
    eax--;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00448E25(); /* call 0x00448E25 */

loc_004488D2: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00448915; /* je: equal / zero */

loc_004488D9: ;
    MEM32(esi) = MEM32(esi) + 0xC;
    eax = MEM32(esi);
    if (CMP_L(ebx, eax)) goto loc_004489DD; /* jl: less (signed <) */

loc_004488E6: ;
    PUSH32(esp, 0xC);
    eax = eax + 0xFFFFFFF4u;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00448E25(); /* call 0x00448E25 */

loc_004488F4: ;
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = eax;
    ecx = ZX16(MEM16(edi + 0xC));
    edx = ZX16(MEM16(edi + 0xA));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    esp = esp + 0xC;
    if (CMP_BE(eax, ecx)) goto loc_00448915; /* jbe: below or equal (unsigned <=) */

loc_0044890B: ;
    eax = 0x80004005u;
    goto loc_004489E4;

loc_00448915: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 0xB4), 0 - flags set for next jcc */
    SET_LO16(eax, MEM16(edi + 0xC));
    MEM32(ebp + 0x10) = eax;
    if (CMP_EQ(MEM32(edi + 0xB4), 0)) goto loc_00448930; /* je: equal / zero */

loc_00448927: ;
    ecx = ZX16(MEM16(edi + 0x19C));
    MEM32(esi) = MEM32(esi) + ecx;

loc_00448930: ;
    (void)0; /* cmp ebx, MEM32(esi) - flags set for next jcc */
    ecx = MEM32(edi);
    MEM32(ebp + 0x18) = ecx;
    if (CMP_L(ebx, MEM32(esi))) goto loc_004489DD; /* jl: less (signed <) */

loc_0044893D: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0;
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_0044897A; /* jle: less or equal (signed <=) */

loc_00448946: ;
    if (CMP_NE(MEM32(edi + 0xB4), 0)) goto loc_00448958; /* jne: not equal / not zero */

loc_0044894F: ;
    eax = ZX16(MEM16(edi + 0x19E));
    MEM32(esi) = MEM32(esi) + eax;

loc_00448958: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00447DA1(); /* call 0x00447DA1 */

loc_00448966: ;
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_004489E2; /* jne: not equal / not zero */

loc_0044896D: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1;
    SET_LO16(eax, MEM16(ebp + 0x20));
    if (CMP_L(LO16(eax), MEM16(ebp + 0x10))) goto loc_00448946; /* jl: less (signed <) */

loc_0044897A: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx) = eax;
    eax = MEM32(esi);
    ecx = eax + 1;
    if (CMP_L(ebx, ecx)) goto loc_004489DD; /* jl: less (signed <) */

loc_0044898A: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00448E25(); /* call 0x00448E25 */

loc_00448995: ;
    esp = esp + 0xC;
    MEM32(esi) = MEM32(esi) + 1;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    ecx = MEM32(esi);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_004489CE; /* je: equal / zero */

loc_004489A1: ;
    eax = ecx + 4;
    if (CMP_L(ebx, eax)) goto loc_004489DD; /* jl: less (signed <) */

loc_004489A8: ;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00448E25(); /* call 0x00448E25 */

loc_004489B3: ;
    MEM32(esi) = MEM32(esi) + 4;
    ecx = MEM32(esi);
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x57B400);
    eax = eax + ecx;
    esp = esp + 0xC;
    if (CMP_L(ebx, eax)) goto loc_004489DD; /* jl: less (signed <) */

loc_004489CC: ;
    MEM32(esi) = eax;

loc_004489CE: ;
    if (CMP_GE(ebx, MEM32(esi))) goto loc_004489D9; /* jge: greater or equal (signed >=) */

loc_004489D2: ;
    eax = 0x80040004u;
    goto loc_004489E4;

loc_004489D9: ;
    eax = 0; /* xor self */
    goto loc_004489E4;

loc_004489DD: ;
    eax = 0x80040004u;

loc_004489E2: ;
    MEM32(esi) = ebx;

loc_004489E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004489E9
 * Original: 0x004489E9 - 0x00448A08 (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004489E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004489E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    (void)0; /* cmp MEM32(esi + 0x268), 1 - flags set for next jcc */
    ebx = MEM32(esi + 0x8C);
    if (CMP_EQ(MEM32(esi + 0x268), 1)) { sub_00448A08(); return; } /* je: equal / zero */

loc_004489FE: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00448B41(); return; /* tail jmp 0x00448B41 */

}

/**
 * sub_00448B44
 * Original: 0x00448B44 - 0x00448BDC (152 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448B44(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00448B44: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = eax << 3;
    edi = edi - ecx;
    eax = eax - edx;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(ebp + 8) = edx;
    if (CMP_L(edi, eax)) goto loc_00448B72; /* jl: less (signed <) */

loc_00448B70: ;
    edi = eax;

loc_00448B72: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00443C7D(); /* call 0x00443C7D */

loc_00448B88: ;
    MEM32(esi + 0x94) = MEM32(esi + 0x94) + edi;
    edi = MEM32(ebp + 0x18);
    eax = MEM32(esi + 0x94);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x8C));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00448896(); /* call 0x00448896 */

loc_00448BAF: ;
    ecx = esi + 0x268;
    MEM32(ecx) = MEM32(ecx) & 0;
    edx = eax;
    esp = esp + 0x30;
    if (TEST_NZ(edx, edx)) { sub_00448BDC(); return; } /* jne: not equal / not zero */

loc_00448BC1: ;
    eax = MEM32(ebp + 0x10);
    eax = eax - MEM32(ebp + 8);
    MEM32(ebx) = MEM32(ebx) + eax;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x94) = eax;
    MEM32(ecx) = 1;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00448BF4(); return; /* tail jmp 0x00448BF4 */

}

/**
 * sub_00448BF9
 * Original: 0x00448BF9 - 0x00448C6D (116 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448BF9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00448BF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, ebx)) { sub_00448C6D(); return; } /* je: equal / zero */

loc_00448C08: ;
    if (CMP_EQ(MEM32(ebp + 0xC), ebx)) { sub_00448C6D(); return; } /* je: equal / zero */

loc_00448C0D: ;
    edi = MEM32(ebp + 0x14);
    if (CMP_EQ(edi, ebx)) { sub_00448C6D(); return; } /* je: equal / zero */

loc_00448C14: ;
    MEM32(edi) = ebx;
    if (CMP_NE(MEM32(esi + 0x26C), ebx)) goto loc_00448C4A; /* jne: not equal / not zero */

loc_00448C1E: ;
    if (CMP_NE(MEM32(esi + 0x268), 1)) goto loc_00448C44; /* jne: not equal / not zero */

loc_00448C27: ;
    PUSH32(esp, esi);
    MEM32(esi + 0x98) = ebx;
    PUSH32(esp, 0); sub_004489E9(); /* call 0x004489E9 */

loc_00448C33: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) { sub_00448C6D(); return; } /* jne: not equal / not zero */

loc_00448C38: ;
    eax = MEM32(esi + 0x98);
    MEM32(esi + 0x94) = MEM32(esi + 0x94) - eax;

loc_00448C44: ;
    (void)0; /* cmp MEM32(esi + 0x26C), ebx - flags set for next jcc */

loc_00448C4A: ;
    if (CMP_BE(MEM32(esi + 0x26C), ebx)) goto loc_00448C69; /* jbe: below or equal (unsigned <=) */

loc_00448C4C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004473D8(); /* call 0x004473D8 */

loc_00448C59: ;
    ecx = 0x80004005u;
    esp = esp + 0x10;
    if (CMP_NE(eax, ecx)) goto loc_00448C69; /* jne: not equal / not zero */

loc_00448C65: ;
    eax = ecx;
    g_seh_ebp = ebp; sub_00448C72(); return; /* tail jmp 0x00448C72 */

loc_00448C69: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00448C72(); return; /* tail jmp 0x00448C72 */

}

/**
 * sub_00448C77
 * Original: 0x00448C77 - 0x00448C97 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448C77(void)
{

loc_00448C77: ;
    eax = MEM32(esp + 4);
    ecx = ZX16(MEM16(eax + 8));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448BF9(); /* call 0x00448BF9 */

loc_00448C93: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00448C97
 * Original: 0x00448C97 - 0x00448CAF (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448C97(void)
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

loc_00448C97: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    if (CMP_G(ecx, 4)) { sub_00448CAF(); return; } /* jg: greater (signed >) */

loc_00448CAB: ;
    fp_push(0.0); /* fldz */
    g_seh_ebp = ebp; sub_00448D1D(); return; /* tail jmp 0x00448D1D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00448D37
 * Original: 0x00448D37 - 0x00448D5A (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448D37(void)
{

loc_00448D37: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    ecx = ecx << 2;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448D5A
 * Original: 0x00448D5A - 0x00448D87 (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448D5A(void)
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

loc_00448D5A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_EQ(MEM16(ebp + 0x14), 0)) goto loc_00448D85; /* je: equal / zero */

loc_00448D64: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ebp + 0x14));

loc_00448D72: ;
    fp_push(MEMF(edx)); /* fld float */
    edx = edx + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = ecx + 4;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_00448D72; /* jne: not equal / not zero */

loc_00448D84: ;
    POP32(esp, esi);

loc_00448D85: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00448D87
 * Original: 0x00448D87 - 0x00448DAD (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448D87(void)
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

loc_00448D87: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_EQ(MEM16(ebp + 0x14), 0)) goto loc_00448DAB; /* je: equal / zero */

loc_00448D91: ;
    edx = ZX16(MEM16(ebp + 0x14));
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);

loc_00448D9B: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_00448D9B; /* jne: not equal / not zero */

loc_00448DAB: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00448DAD
 * Original: 0x00448DAD - 0x00448DC5 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448DAD(void)
{
    int _flags = 0; /* fallback flag var */

loc_00448DAD: ;
    if (CMP_EQ(MEM16(esp + 8), 0)) goto loc_00448DC4; /* je: equal / zero */

loc_00448DB5: ;
    ecx = ZX16(MEM16(esp + 8));
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00448DC4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448DC5
 * Original: 0x00448DC5 - 0x00448DF1 (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448DC5(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00448DC5: ;
    if (CMP_EQ(MEM16(esp + 0xC), 0)) goto loc_00448DF0; /* je: equal / zero */

loc_00448DCD: ;
    eax = MEM32(esp + 8);
    ecx = ZX16(MEM16(esp + 0xC));
    SET_LO16(edx, LO16(eax));
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    edx = edx << 0x10;
    SET_LO16(edx, LO16(eax));
    ecx = ecx >> 1;
    eax = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ecx + ecx + _cf; /* adc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */
    POP32(esp, edi);

loc_00448DF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448DF1
 * Original: 0x00448DF1 - 0x00448DFE (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448DF1(void)
{
    int _flags = 0; /* fallback flag var */

loc_00448DF1: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_A(MEM32(esp + 4), eax)) { sub_00448DFE(); return; } /* ja: above (unsigned >) */

loc_00448DFA: ;
    SET_LO16(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00448E10
 * Original: 0x00448E10 - 0x00448E25 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E10(void)
{

loc_00448E10: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_00448C97(); /* call 0x00448C97 */

loc_00448E21: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00448E25
 * Original: 0x00448E25 - 0x00448E7A (85 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E25(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00448E25: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0x10);
    if (CMP_LE(ecx, 0x20)) goto loc_00448E33; /* jle: less or equal (signed <=) */

loc_00448E30: ;
    PUSH32(esp, 0x20);
    POP32(esp, ecx);

loc_00448E33: ;
    eax = MEM32(ebp + 0xC);
    edx = eax;
    eax = (uint32_t)((int32_t)eax >> 3);
    eax = eax + MEM32(ebp + 8);
    PUSH32(esp, esi);
    edx = edx & 7;
    esi = 0; /* xor self */
    ecx--;
    if (((int32_t)ecx < 0)) goto loc_00448E75; /* js: sign (negative) */

loc_00448E47: ;
    ecx++;
    PUSH32(esp, ebx);
    MEM32(ebp + 0x10) = ecx;
    PUSH32(esp, edi);

loc_00448E4D: ;
    ebx = ZX8(MEM8(eax));
    edi = 0; /* xor self */
    edi++;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    ecx = ecx - edx;
    edi = edi << LO8(ecx);
    edi = edi & ebx;
    edi = (uint32_t)((int32_t)edi >> LO8(ecx));
    ecx = esi + esi;
    edi = edi | ecx;
    edx++;
    (void)0; /* cmp edx, 8 - flags set for next jcc */
    esi = edi;
    if (CMP_L(edx, 8)) goto loc_00448E6E; /* jl: less (signed <) */

loc_00448E6B: ;
    edx = 0; /* xor self */
    eax++;

loc_00448E6E: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_00448E4D; /* jne: not equal / not zero */

loc_00448E73: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00448E75: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00448E7A
 * Original: 0x00448E7A - 0x00448EE6 (108 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E7A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00448E7A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 2);
    POP32(esp, edx);
    MEM32(ebp + 8) = eax;

loc_00448E8F: ;
    ecx = MEM32(ebx);
    eax = SX16(LO16(edx));
    esi = ecx + eax;
    if (CMP_L(MEM32(ebp + 0x1C), esi)) { sub_00448EE6(); return; } /* jl: less (signed <) */

loc_00448E9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_00448E25(); /* call 0x00448E25 */

loc_00448EA6: ;
    eax = SX16(LO16(eax));
    eax = edi + eax * 2;
    ecx = 0; /* xor self */
    MEM32(ebx) = esi;
    SET_LO16(ecx, MEM16(eax));
    esp = esp + 0xC;
    if (TEST_S(HI8(ecx), HI8(ecx))) goto loc_00448ED7; /* js: sign (negative) */

loc_00448EBA: ;
    edx = ecx;
    edx = edx >> 0xC;
    esi = ecx;
    esi = esi & 0xFFF;
    edx = edx & 7;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    (void)0; /* cmp MEM16(ebp + 8), 0 - flags set for next jcc */
    edi = eax + esi * 2;
    if (CMP_G(MEM16(ebp + 8), 0)) goto loc_00448E8F; /* jg: greater (signed >) */

loc_00448ED7: ;
    eax = MEM32(ebp + 0x10);
    SET_LO16(ecx, LO16(ecx) & 0xFFF);
    MEM16(eax) = LO16(ecx);
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00448EEB(); return; /* tail jmp 0x00448EEB */

}

/**
 * sub_00448EF0
 * Original: 0x00448EF0 - 0x00448F29 (57 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00448EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x1C);
    eax = eax - MEM32(ebp + 0x18);
    ecx = 0; /* xor self */
    eax++;
    ecx++;
    edx = 0; /* xor self */
    if (CMP_LE(LO16(eax), LO16(ecx))) goto loc_00448F0C; /* jle: less or equal (signed <=) */

loc_00448F04: ;
    ecx = ecx + ecx;
    edx++;
    if (CMP_L(LO16(ecx), LO16(eax))) goto loc_00448F04; /* jl: less (signed <) */

loc_00448F0C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = SX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax + MEM32(esi);
    if (CMP_LE(eax, MEM32(ebp + 0x10))) { sub_00448F29(); return; } /* jle: less or equal (signed <=) */

loc_00448F22: ;
    eax = 0x80040004u;
    g_seh_ebp = ebp; sub_00448F5B(); return; /* tail jmp 0x00448F5B */

}

/**
 * sub_00448F60
 * Original: 0x00448F60 - 0x00448F8E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448F60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax));
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(ebp + 4));
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    esi = esi + ecx;
    SET_LO8(ecx, MEM8(edi));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00448F8E(); return; } /* jne: not equal / not zero */

loc_00448F86: ;
    edx = MEM32(esp + 0x18);
    MEM8(esi) = LO8(edx);
    g_seh_ebp = ebp; sub_00448FA2(); return; /* tail jmp 0x00448FA2 */

}

/**
 * sub_00449000
 * Original: 0x00449000 - 0x00449098 (152 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00449000: ;
    esp = esp - 8;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(edx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO16(ecx, MEM16(edx + 4));
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(esi));
    MEM16(esp + 0x14) = LO16(ecx);
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(ecx));
    edi = edi + ebx;
    ebx = ZX8(LO8(ecx));
    ebx = ebx + ebp;
    eax--;
    (void)0; /* test ebx, 0xFFFFFFF8u - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(ebx, 0xFFFFFFF8u)) { sub_00449098(); return; } /* je: equal / zero */

loc_00449048: ;
    ebx = ZX8(LO8(ecx));
    ebp = 8;
    ebp = ebp - ebx;
    SET_LO8(ebx, MEM8(edi));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    edi++;
    SET_LO8(ecx, LO8(ebx));
    ebx = MEM32(esp + 0x20);
    MEM8(ebx) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM16(esi) = MEM16(esi) + 1;
    if (CMP_B(MEM16(esi), LO16(ecx))) goto loc_00449073; /* jb: below (unsigned <) */

loc_0044906C: ;
    MEM16(esi) = 0;
    edi = MEM32(edx);

loc_00449073: ;
    SET_LO8(edx, MEM8(ebx));
    ecx = ebp;
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    SET_LO8(eax, LO8(eax) & MEM8(edi));
    ecx = ebp;
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(edx, LO8(edx) | LO8(eax));
    eax = MEM32(esp + 0x10);
    MEM8(ebx) = LO8(edx);
    eax = eax - 8;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_004490E0
 * Original: 0x004490E0 - 0x004491B7 (215 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004490E0(void)
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

loc_004490E0: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0x14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 8) = 0;
    if (CMP_LE(ecx & ecx, 0)) goto loc_004491B2; /* jle: less or equal (signed <=) */

loc_004490FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax - ebp;
    MEM32(esp + 0xC) = eax;
    goto loc_00449110;

    /* nop */
    /* nop */

loc_00449110: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    esi = 0; /* xor self */
    if (CMP_L(ebx, 4)) goto loc_00449163; /* jl: less (signed <) */

loc_0044911D: ;
    edx = ebx + -4;
    edx = edx >> 2;
    edx++;
    ecx = edi + 0xC;
    eax = ebp + 4;
    esi = edx * 4;

loc_00449131: ;
    fp_push(MEMF(eax + -4)); /* fld float */
    ebp = MEM32(esp + 0xC);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    edx--;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(eax + ebp + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(eax + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(eax + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((edx != 0)) goto loc_00449131; /* jne: not equal / not zero */

loc_0044915F: ;
    ebp = MEM32(esp + 0x18);

loc_00449163: ;
    if (CMP_GE(esi, ebx)) goto loc_00449181; /* jge: greater or equal (signed >=) */

loc_00449167: ;
    edx = edi;
    ecx = ebx;
    edx = edx - ebp;
    eax = ebp + esi * 4;
    ecx = ecx - esi;

loc_00449173: ;
    fp_push(MEMF(eax + edx)); /* fld float */
    eax = eax + 4;
    ecx--;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((ecx != 0)) goto loc_00449173; /* jne: not equal / not zero */

loc_00449181: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0xC);
    MEMF(eax + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebx * 4;
    edx = edx + eax;
    edi = edi + eax;
    eax = MEM32(esp + 0x20);
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_L(ecx, eax)) goto loc_00449110; /* jl: less (signed <) */

loc_004491B0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004491B2: ;
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
 * sub_004491C0
 * Original: 0x004491C0 - 0x004491F1 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004491C0(void)
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

loc_004491C0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp - 0x50;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e68] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_004491F1(); return; } /* jne: not equal / not zero */

loc_004491D6: ;
    esi = 0x575BB0;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = 0x6545BC;
    MEM32(esp + 0x18) = 0x57621C;
    g_seh_ebp = ebp; sub_0044920D(); return; /* tail jmp 0x0044920D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00449480
 * Original: 0x00449480 - 0x004494AA (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449480(void)
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

loc_00449480: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp - 0x50;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e68] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_004494AA(); return; } /* jne: not equal / not zero */

loc_00449494: ;
    MEM32(esp) = 0x575BB0;
    eax = 0x6545BC;
    MEM32(esp + 0x10) = 0x57621C;
    g_seh_ebp = ebp; sub_004494BE(); return; /* tail jmp 0x004494BE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00449660
 * Original: 0x00449660 - 0x0044967C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449660(void)
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

loc_00449660: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cdc] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) { sub_0044967C(); return; } /* je: equal / zero */

loc_00449672: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648CDC)); /* fld float */
    g_seh_ebp = ebp; sub_00449691(); return; /* tail jmp 0x00449691 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004496C0
 * Original: 0x004496C0 - 0x004496E7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004496C0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004496C0: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x577170] */
    /* FPU: fldl2e  */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(0) */
    /* FPU: frndint  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: f2xm1  */
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* FPU: fscale  */
    /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004496F0
 * Original: 0x004496F0 - 0x004496F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004496F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004496F0: ;
    g_seh_ebp = ebp; sub_0044B690(); return; /* tail jmp 0x0044B690 */

}

/**
 * sub_00449700
 * Original: 0x00449700 - 0x0044974B (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449700(void)
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

loc_00449700: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x577178);
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0044CC90(); /* call 0x0044CC90 */

loc_00449714: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = eax;
    fp_push(MEMF(ecx * 4 + 0x577178)); /* fld float */
    esp = esp + 0xC;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    (void)0; /* test HI8(eax), 0x41 - flags set for next jcc */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0044974B(); return; } /* jne: not equal / not zero */

loc_00449741: ;
    eax = 1;
    eax = ecx + eax * 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00449750
 * Original: 0x00449750 - 0x00449786 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449750(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00449750: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi & 8;
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x577178);
    PUSH32(esp, 0); sub_0044CD90(); /* call 0x0044CD90 */

loc_00449769: ;
    /* fld st(0) */
    eax = MEM32(esp + 0x20);
    esp = esp + 0xC;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(esi, esi)) { sub_00449786(); return; } /* jne: not equal / not zero */

loc_00449779: ;
    ecx = MEM32(esp + 0xC);
    /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00449790
 * Original: 0x00449790 - 0x004497DE (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00449790: ;
    eax = 0x1008;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0044979A: ;
    eax = MEM32(esp + 0x1010);
    (void)0; /* cmp eax, 9 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(eax, 9)) { sub_004497DE(); return; } /* jne: not equal / not zero */

loc_004497A7: ;
    eax = MEM32(0x75F694);
    ecx = MEM32(0x75F674);
    esi = MEM32(esp + 0x1010);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00456CD8(); /* call 0x00456CD8 */

loc_004497C6: ;
    PUSH32(esp, 0x202);
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00453F68(); /* call 0x00453F68 */

loc_004497D6: ;
    POP32(esp, esi);
    esp = esp + 0x1008;
    esp += 4; return; /* ret */

}

/**
 * sub_00449890
 * Original: 0x00449890 - 0x00449A91 (513 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00449890: ;
    eax = 0x1008;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0044989A: ;
    (void)0; /* cmp MEM32(esp + 0x1014), 2 - flags set for next jcc */
    eax = MEM32(esp + 0x1010);
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(esp + 0x1014), 2)) goto loc_004499A2; /* jne: not equal / not zero */

loc_004498B0: ;
    if (CMP_NE(eax, 9)) goto loc_004498EC; /* jne: not equal / not zero */

loc_004498B5: ;
    eax = MEM32(0x75F694);
    ecx = MEM32(0x75F674);
    esi = MEM32(esp + 0x1010);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00456FC8(); /* call 0x00456FC8 */

loc_004498D4: ;
    PUSH32(esp, 0x202);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00453F68(); /* call 0x00453F68 */

loc_004498E4: ;
    POP32(esp, esi);
    esp = esp + 0x1008;
    esp += 4; return; /* ret */

loc_004498EC: ;
    if (CMP_NE(eax, 8)) goto loc_00449929; /* jne: not equal / not zero */

loc_004498F1: ;
    ecx = MEM32(0x75F694);
    edx = MEM32(0x75F678);
    esi = MEM32(esp + 0x1010);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00456FC8(); /* call 0x00456FC8 */

loc_00449911: ;
    PUSH32(esp, 0x102);
    ecx = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00453F68(); /* call 0x00453F68 */

loc_00449921: ;
    POP32(esp, esi);
    esp = esp + 0x1008;
    esp += 4; return; /* ret */

loc_00449929: ;
    if (CMP_NE(eax, 7)) goto loc_00449965; /* jne: not equal / not zero */

loc_0044992E: ;
    edx = MEM32(0x75F694);
    eax = MEM32(0x75F67C);
    esi = MEM32(esp + 0x1010);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00456FC8(); /* call 0x00456FC8 */

loc_0044994D: ;
    PUSH32(esp, 0x82);
    PUSH32(esp, esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00453F68(); /* call 0x00453F68 */

loc_0044995D: ;
    POP32(esp, esi);
    esp = esp + 0x1008;
    esp += 4; return; /* ret */

loc_00449965: ;
    if (CMP_NE(eax, 6)) goto loc_00449A89; /* jne: not equal / not zero */

loc_0044996E: ;
    eax = MEM32(0x75F694);
    ecx = MEM32(0x75F680);
    esi = MEM32(esp + 0x1010);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00456FC8(); /* call 0x00456FC8 */

loc_0044998D: ;
    PUSH32(esp, 0x42);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00453F68(); /* call 0x00453F68 */

loc_0044999A: ;
    POP32(esp, esi);
    esp = esp + 0x1008;
    esp += 4; return; /* ret */

loc_004499A2: ;
    if (CMP_NE(eax, 9)) goto loc_004499DF; /* jne: not equal / not zero */

loc_004499A7: ;
    ecx = MEM32(0x75F694);
    edx = MEM32(0x75F684);
    esi = MEM32(esp + 0x1010);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00456FC8(); /* call 0x00456FC8 */

loc_004499C7: ;
    PUSH32(esp, 0x202);
    ecx = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00453F68(); /* call 0x00453F68 */

loc_004499D7: ;
    POP32(esp, esi);
    esp = esp + 0x1008;
    esp += 4; return; /* ret */

loc_004499DF: ;
    if (CMP_NE(eax, 8)) goto loc_00449A1B; /* jne: not equal / not zero */

loc_004499E4: ;
    edx = MEM32(0x75F694);
    eax = MEM32(0x75F688);
    esi = MEM32(esp + 0x1010);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00456FC8(); /* call 0x00456FC8 */

loc_00449A03: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00453F68(); /* call 0x00453F68 */

loc_00449A13: ;
    POP32(esp, esi);
    esp = esp + 0x1008;
    esp += 4; return; /* ret */

loc_00449A1B: ;
    if (CMP_NE(eax, 7)) goto loc_00449A57; /* jne: not equal / not zero */

loc_00449A20: ;
    eax = MEM32(0x75F694);
    ecx = MEM32(0x75F68C);
    esi = MEM32(esp + 0x1010);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00456FC8(); /* call 0x00456FC8 */

loc_00449A3F: ;
    PUSH32(esp, 0x82);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00453F68(); /* call 0x00453F68 */

loc_00449A4F: ;
    POP32(esp, esi);
    esp = esp + 0x1008;
    esp += 4; return; /* ret */

loc_00449A57: ;
    if (CMP_NE(eax, 6)) goto loc_00449A89; /* jne: not equal / not zero */

loc_00449A5C: ;
    ecx = MEM32(0x75F694);
    edx = MEM32(0x75F690);
    esi = MEM32(esp + 0x1010);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00456FC8(); /* call 0x00456FC8 */

loc_00449A7C: ;
    PUSH32(esp, 0x42);
    ecx = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00453F68(); /* call 0x00453F68 */

loc_00449A89: ;
    POP32(esp, esi);
    esp = esp + 0x1008;
    esp += 4; return; /* ret */

}

/**
 * sub_00449AA0
 * Original: 0x00449AA0 - 0x00449CD8 (568 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00449AA0: ;
    ecx = MEM32(0x75F698);
    esp = esp - 8;
    if (CMP_GE(ecx & ecx, 0)) goto loc_00449AB5; /* jge: greater or equal (signed >=) */

loc_00449AAD: ;
    ecx = 0; /* xor self */
    MEM32(0x75F698) = ecx;

loc_00449AB5: ;
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_00449B0F; /* je: equal / zero */

loc_00449ABB: ;
    edx = MEM32(0x75F674);
    if (TEST_Z(edx, edx)) goto loc_00449B0F; /* je: equal / zero */

loc_00449AC5: ;
    edx = MEM32(0x75F678);
    if (TEST_Z(edx, edx)) goto loc_00449B0F; /* je: equal / zero */

loc_00449ACF: ;
    edx = MEM32(0x75F67C);
    if (TEST_Z(edx, edx)) goto loc_00449B0F; /* je: equal / zero */

loc_00449AD9: ;
    edx = MEM32(0x75F680);
    if (TEST_Z(edx, edx)) goto loc_00449B0F; /* je: equal / zero */

loc_00449AE3: ;
    edx = MEM32(0x75F684);
    if (TEST_Z(edx, edx)) goto loc_00449B0F; /* je: equal / zero */

loc_00449AED: ;
    edx = MEM32(0x75F688);
    if (TEST_Z(edx, edx)) goto loc_00449B0F; /* je: equal / zero */

loc_00449AF7: ;
    edx = MEM32(0x75F68C);
    if (TEST_Z(edx, edx)) goto loc_00449B0F; /* je: equal / zero */

loc_00449B01: ;
    edx = MEM32(0x75F690);
    if (TEST_NZ(edx, edx)) { sub_00449CD8(); return; } /* jne: not equal / not zero */

loc_00449B0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 9);
    PUSH32(esp, 0x75F674);
    PUSH32(esp, 0); sub_00456A88(); /* call 0x00456A88 */

loc_00449B20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 8);
    PUSH32(esp, 0x75F678);
    esi = eax;
    PUSH32(esp, 0); sub_00456A88(); /* call 0x00456A88 */

loc_00449B32: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, 0x75F67C);
    esi = esi + eax;
    PUSH32(esp, 0); sub_00456A88(); /* call 0x00456A88 */

loc_00449B44: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    PUSH32(esp, 0x75F680);
    esi = esi + eax;
    PUSH32(esp, 0); sub_00456A88(); /* call 0x00456A88 */

loc_00449B56: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, 9);
    PUSH32(esp, 0x75F684);
    esi = esi + eax;
    PUSH32(esp, 0); sub_00456A88(); /* call 0x00456A88 */

loc_00449B68: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x75F688);
    esi = esi + eax;
    PUSH32(esp, 0); sub_00456A88(); /* call 0x00456A88 */

loc_00449B7A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, 7);
    PUSH32(esp, 0x75F68C);
    esi = esi + eax;
    PUSH32(esp, 0); sub_00456A88(); /* call 0x00456A88 */

loc_00449B8C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, 6);
    PUSH32(esp, 0x75F690);
    esi = esi + eax;
    PUSH32(esp, 0); sub_00456A88(); /* call 0x00456A88 */

loc_00449B9E: ;
    ecx = MEM32(0x75F674);
    esi = esi + eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_004572C8(); /* call 0x004572C8 */

loc_00449BB9: ;
    edx = esp + 8;
    esi = esi + eax;
    eax = MEM32(0x75F678);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004572C8(); /* call 0x004572C8 */

loc_00449BCB: ;
    ecx = MEM32(esp + 4);
    esi = esi + eax;
    eax = MEM32(esp + 8);
    if (CMP_LE(eax, ecx)) goto loc_00449BDD; /* jle: less or equal (signed <=) */

loc_00449BD9: ;
    MEM32(esp + 4) = eax;

loc_00449BDD: ;
    edx = MEM32(0x75F67C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004572C8(); /* call 0x004572C8 */

loc_00449BEE: ;
    ecx = MEM32(esp + 4);
    esi = esi + eax;
    eax = MEM32(esp + 8);
    if (CMP_LE(eax, ecx)) goto loc_00449C00; /* jle: less or equal (signed <=) */

loc_00449BFC: ;
    MEM32(esp + 4) = eax;

loc_00449C00: ;
    ecx = MEM32(0x75F680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004572C8(); /* call 0x004572C8 */

loc_00449C11: ;
    ecx = MEM32(esp + 4);
    esi = esi + eax;
    eax = MEM32(esp + 8);
    if (CMP_LE(eax, ecx)) goto loc_00449C23; /* jle: less or equal (signed <=) */

loc_00449C1F: ;
    MEM32(esp + 4) = eax;

loc_00449C23: ;
    eax = MEM32(0x75F684);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004572C8(); /* call 0x004572C8 */

loc_00449C33: ;
    ecx = MEM32(esp + 4);
    esi = esi + eax;
    eax = MEM32(esp + 8);
    if (CMP_LE(eax, ecx)) goto loc_00449C45; /* jle: less or equal (signed <=) */

loc_00449C41: ;
    MEM32(esp + 4) = eax;

loc_00449C45: ;
    edx = MEM32(0x75F688);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004572C8(); /* call 0x004572C8 */

loc_00449C56: ;
    ecx = MEM32(esp + 4);
    esi = esi + eax;
    eax = MEM32(esp + 8);
    if (CMP_LE(eax, ecx)) goto loc_00449C68; /* jle: less or equal (signed <=) */

loc_00449C64: ;
    MEM32(esp + 4) = eax;

loc_00449C68: ;
    ecx = MEM32(0x75F68C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004572C8(); /* call 0x004572C8 */

loc_00449C79: ;
    ecx = MEM32(esp + 4);
    esi = esi + eax;
    eax = MEM32(esp + 8);
    if (CMP_LE(eax, ecx)) goto loc_00449C8B; /* jle: less or equal (signed <=) */

loc_00449C87: ;
    MEM32(esp + 4) = eax;

loc_00449C8B: ;
    eax = MEM32(0x75F690);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004572C8(); /* call 0x004572C8 */

loc_00449C9B: ;
    ecx = MEM32(esp + 8);
    esi = esi + eax;
    eax = MEM32(esp + 4);
    if (CMP_LE(ecx, eax)) goto loc_00449CAF; /* jle: less or equal (signed <=) */

loc_00449CA9: ;
    eax = ecx;
    MEM32(esp + 4) = eax;

loc_00449CAF: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_00449CB7: ;
    esp = esp + 8;
    MEM32(0x75F694) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x75F698);
    if (TEST_NZ(eax, eax)) goto loc_00449CCB; /* jne: not equal / not zero */

loc_00449CC8: ;
    esi = esi - 9;

loc_00449CCB: ;
    eax++;
    MEM32(0x75F698) = eax;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00449CF0
 * Original: 0x00449CF0 - 0x00449D08 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00449CF0: ;
    eax = MEM32(0x75F698);
    eax--;
    PUSH32(esp, esi);
    MEM32(0x75F698) = eax;
    if (((int32_t)eax >= 0)) { sub_00449D08(); return; } /* jns: not sign (positive) */

loc_00449CFE: ;
    esi = 0; /* xor self */
    MEM32(0x75F698) = esi;
    g_seh_ebp = ebp; sub_00449D17(); return; /* tail jmp 0x00449D17 */

}

/**
 * sub_00449DC0
 * Original: 0x00449DC0 - 0x00449DDE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449DC0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00449DC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00457388(); /* call 0x00457388 */

loc_00449DD9: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00449DE0
 * Original: 0x00449DE0 - 0x00449E5C (124 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00449DE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 1;
    /* TODO: cpuid  */
    esi = MEM32(esp + 0x24);
    ecx = eax;
    eax = eax & 0xF;
    MEM32(esi + 4) = eax;
    eax = ecx;
    eax = eax >> 4;
    eax = eax & 0xF;
    MEM32(esi + 8) = eax;
    eax = ecx;
    eax = eax >> 8;
    eax = eax & 0xF;
    MEM32(esi) = eax;
    eax = eax >> 0xB;
    eax = eax & 3;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = edx;
    eax = 0; /* xor self */
    (void)0; /* test edx, 0x800000 - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, 0x800000)) ? 1 : 0); /* setne */
    MEM32(esi + 0x1C) = eax;
    eax = 0; /* xor self */
    (void)0; /* test edx, 0x2000000 - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, 0x2000000)) ? 1 : 0); /* setne */
    MEM32(esi + 0x24) = eax;
    eax = 0; /* xor self */
    (void)0; /* test edx, 0x4000000 - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, 0x4000000)) ? 1 : 0); /* setne */
    MEM32(esi + 0x28) = eax;
    eax = 2;
    /* TODO: cpuid  */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00449E60
 * Original: 0x00449E60 - 0x00449E87 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00449E60: ;
    eax = esp + -44;
    esp = esp - 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00449DE0(); /* call 0x00449DE0 */

loc_00449E6D: ;
    eax = MEM32(esp + 4);
    esp = esp + 4;
    if (CMP_NE(eax, 6)) { sub_00449E87(); return; } /* jne: not equal / not zero */

loc_00449E79: ;
    eax = MEM32(esp + 0x24);
    if (TEST_Z(eax, eax)) { sub_00449E87(); return; } /* je: equal / zero */

loc_00449E81: ;
    eax = 0; /* xor self */
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00449E90
 * Original: 0x00449E90 - 0x00449F9F (271 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449E90(void)
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

loc_00449E90: ;
    esp = esp - 0x18;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    ebx = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    ebp = MEM32(esi + 0x2C);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + ebx * 4 + 0x10)); /* fld float */
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA1);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 0;
    ebp = ebp - 0x96;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x20) = 0x3E23D70A;
    PUSH32(esp, 0); sub_0044AD20(); /* call 0x0044AD20 */

loc_00449EF5: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    esp = esp + 0x10;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = 0; /* xor self */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    /* nop */
    ebx++;
    ebx = ebx & 0x80000003u;
    if (((int32_t)ebx >= 0)) goto loc_00449F1E; /* jns: not sign (positive) */

loc_00449F19: ;
    ebx--;
    ebx = ebx | 0xFFFFFFFCu;
    ebx++;

loc_00449F1E: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(4) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* fld st(3) */
    MEMF(esi + ebx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(2) */
    MEMF(esi + ebx * 4 + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(eax, ebp)) { sub_00449F9F(); return; } /* jl: less (signed <) */

loc_00449F73: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x24);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ecx, MEM32(esp + 0x20))) { sub_00449F9F(); return; } /* jle: less or equal (signed <=) */

loc_00449F91: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_00449FA3(); return; /* tail jmp 0x00449FA3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044A050
 * Original: 0x0044A050 - 0x0044A070 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A050(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044A050: ;
    PUSH32(esp, 0x800A);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0044A05C: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    ecx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(eax, ecx)) { sub_0044A070(); return; } /* jne: not equal / not zero */

loc_0044A06B: ;
    SET_LO16(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0044A0A0
 * Original: 0x0044A0A0 - 0x0044A0BC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A0A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044A0A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0044A0B8; /* je: equal / zero */

loc_0044A0AA: ;
    PUSH32(esp, 0x800A);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0044A0B5: ;
    esp = esp + 8;

loc_0044A0B8: ;
    SET_LO16(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0044A0C0
 * Original: 0x0044A0C0 - 0x0044A114 (84 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A0C0(void)
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

loc_0044A0C0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(edx);
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_push(MEMF(0x648E68)); /* fld float */
    MEM32(esp + 8) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_0044A114(); return; } /* jp: parity */

loc_0044A0E4: ;
    fp_push(MEMF(0x6493AC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0044A114(); return; } /* jne: not equal / not zero */

loc_0044A0F7: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    g_seh_ebp = ebp; sub_0044A137(); return; /* tail jmp 0x0044A137 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044A170
 * Original: 0x0044A170 - 0x0044A1EA (122 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A170(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0044A170: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0xD);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00457400(); /* call 0x00457400 */

loc_0044A18B: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = MEM32(esp + 0x6C);
    ebp = 0x5771A4;
    ebp = ebp - edi;
    MEM32(esp + 0x20) = ebp;
    fp_top() = fabs(fp_top()); /* fabs */
    ebp = esp + 0x38;
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = ebp - edi;
    MEM32(esp + 0x24) = ebp;
    ebx = 0x5771A0;
    ebx = ebx - edi;
    ebp = 0x5771A8;
    ebp = ebp - edi;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x28) = ebp;
    edx = esp + 0x30;
    ebx = esp + 0x34;
    ebp = esp + 0x3C;
    esp = esp + 0x14;
    ecx = 0; /* xor self */
    edx = edx - edi;
    ebx = ebx - edi;
    ebp = ebp - edi;
    MEM32(esi) = 0;
    eax = edi + 0xC;
    MEM32(esp + 0x18) = ebp;
    g_seh_ebp = ebp; sub_0044A1F0(); return; /* tail jmp 0x0044A1F0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044A420
 * Original: 0x0044A420 - 0x0044A442 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A420(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044A420: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0044A42D: ;
    esi = eax;
    eax = MEM32(esp + 0x10);
    esp = esp + 8;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(eax) = esi;
    if (TEST_NZ(esi, esi)) { sub_0044A442(); return; } /* jne: not equal / not zero */

loc_0044A43C: ;
    SET_LO16(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044A480
 * Original: 0x0044A480 - 0x0044A4AC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A480(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044A480: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_0044A4A7; /* je: equal / zero */

loc_0044A48B: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x8007);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0044A499: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0044A4A4: ;
    esp = esp + 0x10;

loc_0044A4A7: ;
    SET_LO16(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044A4B0
 * Original: 0x0044A4B0 - 0x0044A5D7 (295 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A4B0(void)
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

loc_0044A4B0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 8) = edx;
    edx = MEM32(edi + 0x50);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    esi = esp + 0x1C;
    PUSH32(esp, 0); sub_0044A170(); /* call 0x0044A170 */

loc_0044A4E7: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edi + 0x28] */
    esp = esp + 8;
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044A5CF; /* jp: parity */

loc_0044A4FC: ;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e64] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0044A5CF; /* jne: not equal / not zero */

loc_0044A510: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x64A180)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x18] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044A5CD; /* jp: parity */

loc_0044A530: ;
    fp_push(MEMF(0x6496F8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (1 /* jp after test - parity */) goto loc_0044A5CF; /* jp: parity */

loc_0044A54B: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ce0] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044A5CF; /* jp: parity */

loc_0044A55C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044A57E; /* jp: parity */

loc_0044A56D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x6492e4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_0044A5C2; /* je: equal / zero */

loc_0044A57E: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044A5A0; /* jp: parity */

loc_0044A58F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_0044A5C2; /* je: equal / zero */

loc_0044A5A0: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x649818] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044A5CF; /* jp: parity */

loc_0044A5B1: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0044A5CF; /* jne: not equal / not zero */

loc_0044A5C2: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0044A5CD: ;
    /* fstp st(0) */

loc_0044A5CF: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
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
 * sub_0044A5E0
 * Original: 0x0044A5E0 - 0x0044A5F5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A5E0(void)
{

loc_0044A5E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x5771D0;
    MEM32(ecx) = 0x59;
    esp += 4; return; /* ret */

}

/**
 * sub_0044A600
 * Original: 0x0044A600 - 0x0044A61E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A600(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044A600: ;
    PUSH32(esp, 0x800E);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0044A60C: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx) = eax;
    if (TEST_NZ(eax, eax)) { sub_0044A61E(); return; } /* jne: not equal / not zero */

loc_0044A619: ;
    SET_LO16(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0044A640
 * Original: 0x0044A640 - 0x0044A65C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A640(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044A640: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0044A658; /* je: equal / zero */

loc_0044A64A: ;
    PUSH32(esp, 0x800E);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0044A655: ;
    esp = esp + 8;

loc_0044A658: ;
    SET_LO16(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0044A660
 * Original: 0x0044A660 - 0x0044A740 (224 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A660(void)
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

loc_0044A660: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x648CF8)); /* fld float */
    ecx--;
    PUSH32(esp, edi);
    edi = ecx + 1;
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    edx = ecx;
    if (CMP_L(edi, 4)) goto loc_0044A6A4; /* jl: less (signed <) */

loc_0044A673: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edi;
    esi = esi >> 2;
    edx = esi * 4;
    ebp = edx;
    edx = ecx;
    eax = ebx + ecx * 4 + -8;
    edx = edx - ebp;
    goto loc_0044A690;

    /* nop */

loc_0044A690: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax - 0x10;
    esi--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if ((esi != 0)) goto loc_0044A690; /* jne: not equal / not zero */

loc_0044A6A2: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0044A6A4: ;
    if (TEST_S(edx, edx)) goto loc_0044A6AF; /* jl: less (signed <) */

loc_0044A6A8: ;
    edx--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if (((int32_t)edx >= 0)) goto loc_0044A6A8; /* jns: not sign (positive) */

loc_0044A6AF: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    POP32(esp, edi);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    if (CMP_L(edi, 4)) goto loc_0044A706; /* jl: less (signed <) */

loc_0044A6C4: ;
    edx = ebx + ecx * 4 + -8;

loc_0044A6C8: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_0044A72D; /* je: equal / zero */

loc_0044A6D5: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_0044A722; /* je: equal / zero */

loc_0044A6E2: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_0044A725; /* je: equal / zero */

loc_0044A6EE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_0044A72A; /* je: equal / zero */

loc_0044A6FB: ;
    ecx = ecx - 4;
    edx = edx - 0x10;
    if (CMP_GE(ecx, 3)) goto loc_0044A6C8; /* jge: greater or equal (signed >=) */

loc_0044A706: ;
    if (TEST_S(ecx, ecx)) goto loc_0044A72D; /* jl: less (signed <) */

loc_0044A70A: ;
    /* nop */

loc_0044A710: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_0044A72D; /* je: equal / zero */

loc_0044A71D: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_0044A710; /* jns: not sign (positive) */

loc_0044A720: ;
    goto loc_0044A72D;

loc_0044A722: ;
    ecx--;
    goto loc_0044A72D;

loc_0044A725: ;
    ecx = ecx - 2;
    goto loc_0044A72D;

loc_0044A72A: ;
    ecx = ecx - 3;

loc_0044A72D: ;
    ecx = ecx + 2;
    /* fstp st(0) */
    (void)0; /* cmp ecx, 0x4C - flags set for next jcc */
    eax = 0x4C;
    if (CMP_L(ecx, 0x4C)) goto loc_0044A73E; /* jl: less (signed <) */

loc_0044A73C: ;
    eax = ecx;

loc_0044A73E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044A740
 * Original: 0x0044A740 - 0x0044A8D9 (409 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A740(void)
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

loc_0044A740: ;
    esp = esp - 0x29C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2A8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x66);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_004586F0(); /* call 0x004586F0 */

loc_0044A75E: ;
    esp = esp + 0xC;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x66);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004583F4(); /* call 0x004583F4 */

loc_0044A777: ;
    ecx = 0x60;
    ebx = esp + 0x48;
    PUSH32(esp, 0); sub_0044A660(); /* call 0x0044A660 */

loc_0044A785: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edi = eax;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x1E8;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004582A0(); /* call 0x004582A0 */

loc_0044A7A2: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    esp = esp + 0x14;
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044A7C4; /* jne: not equal / not zero */

loc_0044A7B6: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044A7C4: ;
    eax = edi + -1;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_S(eax, eax)) goto loc_0044A7FC; /* jl: less (signed <) */

loc_0044A7CF: ;
    /* nop */

loc_0044A7D0: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = esp + eax * 4 + 0x48;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fst */
    edx = MEM32(esp + 0x28);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00457DE0(); /* call 0x00457DE0 */

loc_0044A7EA: ;
    eax = MEM32(esp + 0x14);
    MEMF(esp + eax * 4 + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    esp = esp + 4;
    eax--;
    MEM32(esp + 0x10) = eax;
    if (((int32_t)eax >= 0)) goto loc_0044A7D0; /* jns: not sign (positive) */

loc_0044A7FC: ;
    ebx = MEM32(esp + 0x2B4);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x1F8;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00457C20(); /* call 0x00457C20 */

loc_0044A831: ;
    esi = eax;
    edx = MEM32(esp + esi * 4 + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004577B0(); /* call 0x004577B0 */

loc_0044A83E: ;
    esp = esp + 0x2C;
    esi--;
    edi = eax;
    eax = esi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_S(eax, eax)) goto loc_0044A86E; /* jl: less (signed <) */

loc_0044A84E: ;
    edi = edi;

loc_0044A850: ;
    eax = MEM32(esp + eax * 4 + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00457610(); /* call 0x00457610 */

loc_0044A85C: ;
    eax = MEM32(esp + 0x1C);
    MEMF(esp + eax * 4 + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    esp = esp + 0xC;
    eax--;
    MEM32(esp + 0x10) = eax;
    if (((int32_t)eax >= 0)) goto loc_0044A850; /* jns: not sign (positive) */

loc_0044A86E: ;
    edx = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    if (CMP_GE(edx, esi)) goto loc_0044A8AA; /* jge: greater or equal (signed >=) */

loc_0044A878: ;
    if (TEST_Z(edx, edx)) goto loc_0044A891; /* je: equal / zero */

loc_0044A87C: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + edx*4 + 0x18] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044A8C1; /* jp: parity */

loc_0044A891: ;
    fp_push(MEMF(esp + edx * 4 + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + esi*4 + 0x18] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044A8BF; /* jnp: not parity */

loc_0044A8A6: ;
    ecx = edx;
    goto loc_0044A8C1;

loc_0044A8AA: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + esi*4 + 0x18] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044A8C1; /* jp: parity */

loc_0044A8BF: ;
    ecx = esi;

loc_0044A8C1: ;
    fp_push(MEMF(esp + ecx * 4 + 0x30)); /* fld float */
    ecx = MEM32(esp + ecx * 4 + 0x3C);
    POP32(esp, edi);
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fst */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 4) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x29C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044A8E0
 * Original: 0x0044A8E0 - 0x0044AB79 (665 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044A8E0(void)
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

loc_0044A8E0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    fp_push(MEMF(edi + 4)); /* fld float */
    eax = MEM32(edi + 8);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    ecx = MEM32(edi);
    MEM32(esp + 0x10) = eax;
    /* fld st(0) */
    MEM32(esp + 0xC) = ecx;
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0044A90B; /* je: equal / zero */

loc_0044A909: ;
    fp_top() = -fp_top(); /* fchs */

loc_0044A90B: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x577340] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044A920; /* jp: parity */

loc_0044A918: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648CF8)); /* fld float */

loc_0044A920: ;
    eax = MEM32(esp + 0x28);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0044AA60; /* je: equal / zero */

loc_0044A934: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    ecx = MEM32(esp + 0x1C);
    if (CMP_L(esi, 4)) goto loc_0044AA15; /* jl: less (signed <) */

loc_0044A941: ;
    edx = esi + -4;
    edx = edx >> 2;
    edx++;
    eax = edx;
    eax = (uint32_t)(-(int32_t)eax);
    esi = esi + eax * 4;
    eax = MEM32(esp + 0x18);

loc_0044A953: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax);
    ebx = ebx << 1;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    MEM32(esp + 0x24) = ebx;
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ebx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEM32(esp + 0xC) = ebx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    MEMF(ecx + -16) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = (uint32_t)(int32_t)SMEM16(eax + -12);
    ebx = ebx << 1;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    MEM32(esp + 0x24) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsubr st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x28);
    MEM32(ecx + -12) = ebx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = (uint32_t)(int32_t)SMEM16(eax + -8);
    ebx = ebx << 1;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    MEM32(esp + 0x24) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsubr st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x28);
    MEM32(ecx + -8) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(eax + -4);
    ebx = ebx << 1;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    edx--;
    MEM32(esp + 0x24) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fst */
    /* FPU: fsubrp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    /* fld st(1) */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_0044A953; /* jne: not equal / not zero */

loc_0044AA13: ;
    goto loc_0044AA19;

loc_0044AA15: ;
    eax = MEM32(esp + 0x18);

loc_0044AA19: ;
    if (CMP_LE(esi & esi, 0)) goto loc_0044AB6D; /* jle: less or equal (signed <=) */

loc_0044AA21: ;
    edx = esi;

loc_0044AA23: ;
    esi = (uint32_t)(int32_t)SMEM16(eax);
    esi = esi << 1;
    esi = (uint32_t)((int32_t)esi >> 1);
    MEM32(esp + 0x24) = esi;
    eax = eax + 4;
    ecx = ecx + 4;
    edx--;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    /* fld st(1) */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_0044AA23; /* jne: not equal / not zero */

loc_0044AA54: ;
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0044AA60: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    eax = MEM32(esp + 0x18);
    if (CMP_L(esi, 4)) goto loc_0044AB32; /* jl: less (signed <) */

loc_0044AA6D: ;
    edx = esi + -4;
    edx = edx >> 2;
    edx++;
    ecx = edx;
    ecx = (uint32_t)(-(int32_t)ecx);
    esi = esi + ecx * 4;
    ecx = MEM32(esp + 0x1C);
    /* nop */

loc_0044AA80: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp + 0x24) = ebx;
    eax = eax + 8;
    ecx = ecx + 0x10;
    edx--;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ebx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEM32(esp + 0xC) = ebx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    MEMF(ecx + -16) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = (uint32_t)(int32_t)SMEM16(eax + -6);
    MEM32(esp + 0x24) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsubr st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x28);
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ecx + -12) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(eax + -4);
    MEM32(esp + 0x24) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsubr st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x28);
    MEM32(ecx + -8) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(eax + -2);
    MEM32(esp + 0x24) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fst */
    /* FPU: fsubrp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    /* fld st(1) */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_0044AA80; /* jne: not equal / not zero */

loc_0044AB30: ;
    goto loc_0044AB36;

loc_0044AB32: ;
    ecx = MEM32(esp + 0x1C);

loc_0044AB36: ;
    if (CMP_LE(esi & esi, 0)) goto loc_0044AB6D; /* jle: less or equal (signed <=) */

loc_0044AB3A: ;
    edx = esi;
    /* nop */

loc_0044AB40: ;
    esi = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp + 0x24) = esi;
    eax = eax + 2;
    ecx = ecx + 4;
    edx--;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    /* fld st(1) */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_0044AB40; /* jne: not equal / not zero */

loc_0044AB6D: ;
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0044AB80
 * Original: 0x0044AB80 - 0x0044ABA0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044AB80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044AB80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0xC);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0044AB8C: ;
    ecx = MEM32(esp + 0x10);
    esp = esp + 8;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ecx) = eax;
    if (CMP_NE(eax, esi)) { sub_0044ABA0(); return; } /* jne: not equal / not zero */

loc_0044AB99: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044ABC0
 * Original: 0x0044ABC0 - 0x0044ABDA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044ABC0(void)
{

loc_0044ABC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0044ABCF: ;
    esp = esp + 8;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044ABE0
 * Original: 0x0044ABE0 - 0x0044AC08 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044ABE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044ABE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0xC);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0044ABEE: ;
    edi = MEM32(esp + 0x1C);
    esi = eax;
    esp = esp + 8;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(edi) = esi;
    if (CMP_NE(esi, ebx)) { sub_0044AC08(); return; } /* jne: not equal / not zero */

loc_0044ABFD: ;
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0044AC50
 * Original: 0x0044AC50 - 0x0044AC75 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044AC50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044AC50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0044AC73; /* je: equal / zero */

loc_0044AC5B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0044AC66: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0044AC70: ;
    esp = esp + 0x10;

loc_0044AC73: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044AC80
 * Original: 0x0044AC80 - 0x0044ACC1 (65 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044AC80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0044AC80: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    eax = MEM32(esp + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    eax = edx;
    eax = eax + ecx;
    eax = eax + ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = ebx;
    edi = edx;
    edx = MEM32(esp + 0x20);
    eax = eax - edi;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    edi = ebp + edi * 4;
    if (CMP_L(eax, edx)) { sub_0044ACC1(); return; } /* jl: less (signed <) */

loc_0044ACBB: ;
    ecx = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    g_seh_ebp = ebp; sub_0044ACFF(); return; /* tail jmp 0x0044ACFF */

}

/**
 * sub_0044AD20
 * Original: 0x0044AD20 - 0x0044AD63 (67 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044AD20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0044AD20: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ebp + 1;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = eax + edx;
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edx;
    eax = eax + MEM32(esi + 4);
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = ecx - edx;
    eax = ecx;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    esi = ebx + edx * 4;
    if (CMP_L(eax, ebp)) { sub_0044AD63(); return; } /* jl: less (signed <) */

loc_0044AD5A: ;
    ecx = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0044ADB0
 * Original: 0x0044ADB0 - 0x0044AE46 (150 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044ADB0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0044ADB0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    eax = (uint32_t)((int32_t)eax >> 1);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = eax * 4;
    MEM32(esp + 0x10) = ecx;
    edx = ebx;
    edx = edx - eax;
    edi = ebp + edx * 4;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(esp + 0x1C);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x18);
    edx = edx - eax;
    eax = MEM32(esp + 0x10);
    esi = esi + eax;
    edx = edx << 2;
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x1C);
    ecx = ebx;
    ecx = ecx - esi;
    ecx = ecx << 2;
    edi = edx + ebp;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00449790(); /* call 0x00449790 */

loc_0044AE3D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0044AE50
 * Original: 0x0044AE50 - 0x0044AEEE (158 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044AE50(void)
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

loc_0044AE50: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp >> 1);
    (void)0; /* cmp ebp, 4 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = ebp;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    edx = ecx + ebx * 4 + -4;
    edi = esi + ebx * 4 + -4;
    if (CMP_L(ebp, 4)) { sub_0044AEEE(); return; } /* jl: less (signed <) */

loc_0044AE78: ;
    ebp = eax + -4;
    ebp = ebp >> 2;
    ebp++;
    ebx = ebp;
    ebx = (uint32_t)(-(int32_t)ebx);
    eax = eax + ebx * 4;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x1C);
    edi = edi;

loc_0044AE90: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 0x10;
    esi = esi + 0x10;
    edx = edx - 0x10;
    MEMF(esi + -16) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi - 0x10;
    ebp--;
    fp_push(MEMF(edx + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ebp != 0)) goto loc_0044AE90; /* jne: not equal / not zero */

loc_0044AEE8: ;
    ebx = MEM32(esp + 0x24);
    g_seh_ebp = ebp; sub_0044AEF2(); return; /* tail jmp 0x0044AEF2 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044AF40
 * Original: 0x0044AF40 - 0x0044AFB5 (117 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044AF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0044AF40: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_L(edi, 4)) { sub_0044AFB5(); return; } /* jl: less (signed <) */

loc_0044AF53: ;
    esi = edi + -4;
    esi = esi >> 2;
    esi++;
    eax = esi;
    eax = (uint32_t)(-(int32_t)eax);
    edi = edi + eax * 4;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);

loc_0044AF66: ;
    ebx = MEM32(eax);
    MEM32(ecx) = ebx;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    MEM32(edx) = ebx;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    MEM32(edx + 4) = ebx;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    eax = eax + 4;
    MEM32(edx + 8) = ebx;
    ebx = MEM32(eax);
    eax = eax + 4;
    MEM32(ecx + 0xC) = ebx;
    ebx = MEM32(eax);
    MEM32(edx + 0xC) = ebx;
    eax = eax + 4;
    ecx = ecx + 0x10;
    edx = edx + 0x10;
    esi--;
    if ((esi != 0)) goto loc_0044AF66; /* jne: not equal / not zero */

loc_0044AFB2: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0044AFB9(); return; /* tail jmp 0x0044AFB9 */

}

/**
 * sub_0044AFE0
 * Original: 0x0044AFE0 - 0x0044B144 (356 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044AFE0(void)
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

loc_0044AFE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    edx = ebx + -1;
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    ecx = eax + ebx * 4 + -4;
    eax = eax + 4;
    ecx = ecx - 4;
    /* FPU: fdivr dword ptr [0x648d30] */
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi >> 1);
    eax = eax + 4;
    ecx = ecx - 4;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 2;
    /* FPU: fcos  */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(esi, 4)) goto loc_0044B0FA; /* jle: less or equal (signed <=) */

loc_0044B061: ;
    edx = 4;
    goto loc_0044B070;

    /* nop */
    /* nop */

loc_0044B070: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = eax + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx - 4;
    eax = eax + 4;
    ecx = ecx - 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = edx + 3;
    eax = eax + 4;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx - 4;
    edi = edi + 3;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(edx, esi)) goto loc_0044B070; /* jl: less (signed <) */

loc_0044B0FA: ;
    if (CMP_GE(edi, esi)) { sub_0044B144(); return; } /* jge: greater or equal (signed >=) */

loc_0044B0FE: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = eax + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx - 4;
    edi++;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    /* FPU: fsubrp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_GE(edi, esi)) { sub_0044B144(); return; } /* jge: greater or equal (signed >=) */

loc_0044B127: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsubr dword ptr [esp + 0x1c] */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_0044B146(); return; /* tail jmp 0x0044B146 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B160
 * Original: 0x0044B160 - 0x0044B195 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B160(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044B160: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    esp = esp - 8;
    /* FPU: fdivr dword ptr [0x648ce0] */
    fp_push(MEMF(0x64B200)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044AFE0(); /* call 0x0044AFE0 */

loc_0044B191: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B1A0
 * Original: 0x0044B1A0 - 0x0044B1F3 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B1A0(void)
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

loc_0044B1A0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_L(esi, 4)) { sub_0044B1F3(); return; } /* jl: less (signed <) */

loc_0044B1AE: ;
    edx = esi + -4;
    edx = edx >> 2;
    edx++;
    eax = edx;
    eax = (uint32_t)(-(int32_t)eax);
    esi = esi + eax * 4;
    eax = MEM32(esp + 8);

loc_0044B1C0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = eax + 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 0x10;
    edx--;
    MEMF(ecx + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_0044B1C0; /* jne: not equal / not zero */

loc_0044B1F1: ;
    g_seh_ebp = ebp; sub_0044B1F7(); return; /* tail jmp 0x0044B1F7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B220
 * Original: 0x0044B220 - 0x0044B237 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B220(void)
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

loc_0044B220: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649548] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0044B237(); return; } /* jne: not equal / not zero */

loc_0044B231: ;
    eax = 0x105;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B2D0
 * Original: 0x0044B2D0 - 0x0044B2EB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B2D0(void)
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

loc_0044B2D0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_0044B2EB(); return; } /* jp: parity */

loc_0044B2E1: ;
    /* fstp st(0) */
    fp_push(MEMF(0x649284)); /* fld float */
    g_seh_ebp = ebp; sub_0044B300(); return; /* tail jmp 0x0044B300 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B360
 * Original: 0x0044B360 - 0x0044B379 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B360(void)
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

loc_0044B360: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e54] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_0044B379(); return; } /* jp: parity */

loc_0044B371: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    g_seh_ebp = ebp; sub_0044B37D(); return; /* tail jmp 0x0044B37D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B440
 * Original: 0x0044B440 - 0x0044B632 (498 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B440(void)
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

loc_0044B440: ;
    esp = esp - 0x748;
    eax = MEM32(esp + 0x754);
    fp_push(MEMF(0x6496EC)); /* fld float */
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_0044B47A; /* je: equal / zero */

loc_0044B474: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */

loc_0044B47A: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044B47F: ;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(eax, 5)) goto loc_0044B490; /* jge: greater or equal (signed >=) */

loc_0044B488: ;
    MEM32(esp + 0x10) = 5;

loc_0044B490: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x577344] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044B4B5; /* jne: not equal / not zero */

loc_0044B4AD: ;
    MEM32(esp + 0x10) = 0x43200000;

loc_0044B4B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x2C) = (int32_t)fp_top(); /* fistp */
    ebp = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x76C);
    ecx = 0; /* xor self */
    ebp++;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(edx & edx, 0)) goto loc_0044B4FE; /* jle: less or equal (signed <=) */

loc_0044B4D5: ;
    goto loc_0044B4E0;

    /* nop */
    edi = edi;

loc_0044B4E0: ;
    eax = MEM32(esp + 0x768);
    fp_push(MEMF(eax + ecx * 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x18] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0044B4FE; /* je: equal / zero */

loc_0044B4F5: ;
    ecx++;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, edx)) goto loc_0044B4E0; /* jl: less (signed <) */

loc_0044B4FE: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = ecx;
    if (CMP_LE(ecx & ecx, 0)) { sub_0044B632(); return; } /* jle: less or equal (signed <=) */

loc_0044B508: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x768);
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004583F4(); /* call 0x004583F4 */

loc_0044B522: ;
    edi = MEM32(esp + 0x760);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004583F4(); /* call 0x004583F4 */

loc_0044B53A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x10] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0044B551; /* je: equal / zero */

loc_0044B549: ;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;

loc_0044B551: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00458F30(); /* call 0x00458F30 */

loc_0044B55E: ;
    eax = MEM32(esp + 0x24);
    edx = esp + 0x368;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00458F30(); /* call 0x00458F30 */

loc_0044B572: ;
    esp = esp + 0x20;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0044B5DA; /* jle: less or equal (signed <=) */

loc_0044B579: ;
    edi = MEM32(esp + 0x770);
    ecx = esi;
    edi = edi - esi;
    ebp = ebx;
    goto loc_0044B590;

    /* nop */
    /* nop */

loc_0044B590: ;
    fp_push(MEMF(edi + ecx)); /* fld float */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x34) = (int32_t)fp_top(); /* fistp */
    edx = MEM32(esp + 0x34);
    fp_push(MEMF(ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + edx*4 + 0x358] */
    edx = esp + edx * 4 + 0x358;
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044B5D4; /* jp: parity */

loc_0044B5BA: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044B5D4: ;
    ecx = ecx + 4;
    ebp--;
    if ((ebp != 0)) goto loc_0044B590; /* jne: not equal / not zero */

loc_0044B5DA: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x774);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x1D0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4259999A);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00458A10(); /* call 0x00458A10 */

loc_0044B600: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x5C);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x1F8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004587B0(); /* call 0x004587B0 */

loc_0044B62B: ;
    esp = esp + 0x38;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0044B642(); return; /* tail jmp 0x0044B642 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B690
 * Original: 0x0044B690 - 0x0044B6C9 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B690(void)
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

loc_0044B690: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) { sub_0044B6C9(); return; } /* jne: not equal / not zero */

loc_0044B6A5: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_0044B6C9(); return; } /* jp: parity */

loc_0044B6BA: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B730
 * Original: 0x0044B730 - 0x0044B7FC (204 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B730(void)
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

loc_0044B730: ;
    esp = esp - 0x14;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM32(esp) = (int32_t)fp_top(); /* fistp */
    ecx = MEM32(esp);
    eax = 4;
    if (CMP_LE(ecx, eax)) goto loc_0044B755; /* jle: less or equal (signed <=) */

loc_0044B752: ;
    MEM32(esp) = eax;

loc_0044B755: ;
    fp_push((double)SMEM32(esp)); /* fild */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0x14) = (int32_t)fp_top(); /* fistp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0x30) = (int32_t)fp_top(); /* fistp */
    ebx = MEM32(esp + 0x14);
    if (CMP_GE(ebx, 8)) goto loc_0044B796; /* jge: greater or equal (signed >=) */

loc_0044B791: ;
    ebx = 8;

loc_0044B796: ;
    ecx = MEM32(esp + 0x30);
    eax = 0xA0;
    if (CMP_LE(ecx, eax)) goto loc_0044B7A7; /* jle: less or equal (signed <=) */

loc_0044B7A3: ;
    MEM32(esp + 0x30) = eax;

loc_0044B7A7: ;
    eax = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x2C);
    edi = 0; /* xor self */
    MEM32(esp + 0x38) = 0xFF7FFFFFu;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = edi;
    ebp = eax + ebx * 4;
    esi = esi - ebx;
    edi = edi;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00449DC0(); /* call 0x00449DC0 */

loc_0044B7DC: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp + 0x44] */
    esp = esp + 0xC;
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0044B7FC(); return; } /* jne: not equal / not zero */

loc_0044B7EA: ;
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = edx;
    g_seh_ebp = ebp; sub_0044B80B(); return; /* tail jmp 0x0044B80B */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B8B0
 * Original: 0x0044B8B0 - 0x0044B8D9 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B8B0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044B8B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_Z(ebx, ebx)) goto loc_0044B8D7; /* je: equal / zero */

loc_0044B8B9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_0044B8C3: ;
    fp_push(MEMF(edi)); /* fld float */
    PUSH32(esp, 0); sub_00471A18(); /* call 0x00471A18 */

loc_0044B8CA: ;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esi + 4;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_0044B8C3; /* jne: not equal / not zero */

loc_0044B8D5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0044B8D7: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B8E0
 * Original: 0x0044B8E0 - 0x0044B901 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B8E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044B8E0: ;
    edx = MEM32(esp + 4);
    if (TEST_Z(edx, edx)) goto loc_0044B900; /* je: equal / zero */

loc_0044B8E8: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);

loc_0044B8F0: ;
    fp_push(MEMF(eax)); /* fld float */
    eax = eax + 4;
    /* FPU: fsin  */
    ecx = ecx + 4;
    edx--;
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_0044B8F0; /* jne: not equal / not zero */

loc_0044B900: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B910
 * Original: 0x0044B910 - 0x0044B9DF (207 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B910(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044B910: ;
    esp = esp - 0x20C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x214);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004592B0(); /* call 0x004592B0 */

loc_0044B927: ;
    esp = esp + 8;
    esi = 0; /* xor self */
    edi = esp + 0x14;

loc_0044B930: ;
    eax = MEM32(ebx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00459030(); /* call 0x00459030 */

loc_0044B939: ;
    MEMF(edi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = 0;
    esi = esi + 4;
    esp = esp + 4;
    edi = edi + 8;
    if (CMP_L(esi, 0x100)) goto loc_0044B930; /* jl: less (signed <) */

loc_0044B953: ;
    ecx = MEM32(ebx + 0x3FC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00459030(); /* call 0x00459030 */

loc_0044B95F: ;
    MEMF(esp + 0x214) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 2);
    edx = esp + 0x18;
    PUSH32(esp, 7);
    PUSH32(esp, edx);
    MEM32(esp + 0x224) = 0;
    PUSH32(esp, 0); sub_00449890(); /* call 0x00449890 */

loc_0044B97F: ;
    esi = MEM32(esp + 0x230);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F7FFFEF);
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044B1A0(); /* call 0x0044B1A0 */

loc_0044B999: ;
    eax = MEM32(esp + 0x24C);
    ecx = MEM32(esp + 0x248);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00459080(); /* call 0x00459080 */

loc_0044B9B9: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00459020(); /* call 0x00459020 */

loc_0044B9C3: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x25C);
    esp = esp + 0x38;
    POP32(esp, edi);
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x20C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044B9E0
 * Original: 0x0044B9E0 - 0x0044BB47 (359 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044B9E0(void)
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

loc_0044B9E0: ;
    esp = esp - 0x538;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x550);
    eax = esi + -1;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044BA0C: ;
    edi = eax;
    edi++;
    if (CMP_LE(edi, 0x50)) goto loc_0044BA19; /* jle: less or equal (signed <=) */

loc_0044BA14: ;
    edi = 0x50;

loc_0044BA19: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = esp + edi * 4 + 0x38;
    ebp = esp + edi * 8 + 0x48;
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(edi & edi, 0)) goto loc_0044BAAB; /* jle: less or equal (signed <=) */

loc_0044BA2D: ;
    eax = esp + 0x28;
    eax = eax - ebp;
    MEM32(esp + 0x24) = eax;
    eax = ebx;
    eax = eax - ebp;
    esi = ebp;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = edi;
    goto loc_0044BA50;

    /* nop */
    edi = edi;

loc_0044BA50: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x1C) = (int32_t)fp_top(); /* fistp */
    ecx = MEM32(esp + 0x550);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00459020(); /* call 0x00459020 */

loc_0044BA6C: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    MEMF(ecx + esi) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x1C);
    MEM32(esi) = edx;
    MEMF(eax + esi) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x24);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp + 4;
    esi = esi + 4;
    eax--;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_0044BA50; /* jne: not equal / not zero */

loc_0044BAA4: ;
    esi = MEM32(esp + 0x554);

loc_0044BAAB: ;
    ecx = MEM32(esp + 0x550);
    edx = MEM32(ecx + esi * 4 + -4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00459020(); /* call 0x00459020 */

loc_0044BABC: ;
    MEMF(esp + edi * 4 + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(ebp + edi * 4) = esi;
    esp = esp + 4;
    MEMF(ebx + edi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    edi++;
    if (CMP_LE(edi, 1)) goto loc_0044BB3C; /* jle: less or equal (signed <=) */

loc_0044BAD4: ;
    ecx = esp + 0x2C;
    esi = esp + 0x28;
    ecx = ecx - ebx;
    edx = ebp + 4;
    ebp = ebp - ebx;
    esi = esi - ebx;
    eax = ebx;
    MEM32(esp + 0x18) = ecx;
    edi--;
    goto loc_0044BAF2;

loc_0044BAEE: ;
    ecx = MEM32(esp + 0x18);

loc_0044BAF2: ;
    fp_push(MEMF(ecx + eax)); /* fld float */
    ecx = MEM32(eax + ebp);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ebx = MEM32(edx);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x10) = ecx;
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    if (CMP_GE(ecx, ebx)) goto loc_0044BB31; /* jge: greater or equal (signed >=) */

loc_0044BB0C: ;
    /* nop */

loc_0044BB10: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ebx = MEM32(esp + 0x550);
    ecx++;
    MEM32(esp + 0x10) = ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx + ecx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(edx);
    if (CMP_L(ecx, ebx)) goto loc_0044BB10; /* jl: less (signed <) */

loc_0044BB31: ;
    eax = eax + 4;
    /* fstp st(0) */
    edx = edx + 4;
    edi--;
    if ((edi != 0)) goto loc_0044BAEE; /* jne: not equal / not zero */

loc_0044BB3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x538;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044BB50
 * Original: 0x0044BB50 - 0x0044BD10 (448 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044BB50(void)
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

loc_0044BB50: ;
    esp = esp - 0x1C;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x1C) = esi;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 8);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044BBAA; /* jp: parity */

loc_0044BB8C: ;
    /* nop */

loc_0044BB90: ;
    edi = MEM32(esp + 0x30);
    if (CMP_GE(ecx, edi)) goto loc_0044BBAE; /* jge: greater or equal (signed >=) */

loc_0044BB98: ;
    fp_push(MEMF(ebx + ecx * 4 + 4)); /* fld float */
    ecx++;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044BB90; /* jnp: not parity */

loc_0044BBA8: ;
    goto loc_0044BBAE;

loc_0044BBAA: ;
    edi = MEM32(esp + 0x30);

loc_0044BBAE: ;
    fp_push(MEMF(0x648E8C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x20] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044BD08; /* jp: parity */

loc_0044BBCF: ;
    eax = MEM32(esp + 0x38);
    eax = eax - edx;
    PUSH32(esp, ebp);
    ebp = edx;
    MEM32(esp + 0x1C) = eax;
    /* nop */

loc_0044BBE0: ;
    if (CMP_GE(esi, 0x64)) goto loc_0044BD07; /* jge: greater or equal (signed >=) */

loc_0044BBE9: ;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    fp_push(MEMF(0x648CF8)); /* fld float */
    if (CMP_GE(ecx, edi)) goto loc_0044BC5E; /* jge: greater or equal (signed >=) */

loc_0044BBF3: ;
    fp_push(MEMF(ebx + ecx * 4)); /* fld float */
    esi = ecx;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x18] */
    MEM32(esp + 0x14) = esi;
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044BC5E; /* jp: parity */

loc_0044BC07: ;
    eax = MEM32(esp + 0x30);
    edi = ebx;
    edx = eax + ecx * 4;
    edi = edi - eax;

loc_0044BC12: ;
    if (CMP_GE(esi, MEM32(esp + 0x34))) goto loc_0044BC3A; /* jge: greater or equal (signed >=) */

loc_0044BC18: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [edx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044BC27; /* jp: parity */

loc_0044BC21: ;
    /* fstp st(0) */
    ecx = esi;
    fp_push(MEMF(edx)); /* fld float */

loc_0044BC27: ;
    fp_push(MEMF(edi + edx + 4)); /* fld float */
    edx = edx + 4;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x18] */
    esi++;
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044BC12; /* jnp: not parity */

loc_0044BC3A: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    edi = MEM32(esp + 0x34);
    MEM32(esp + 0x14) = esi;
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044BC5E; /* jne: not equal / not zero */

loc_0044BC4F: ;
    edx = MEM32(esp + 0x1C);
    MEMF(edx + ebp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx + ecx * 4);
    MEM32(ebp) = eax;
    goto loc_0044BC99;

loc_0044BC5E: ;
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x14) = (int32_t)fp_top(); /* fistp */
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x2C);
    fp_push(MEMF(eax + edx * 4)); /* fld float */
    edx = MEM32(esp + 0x1C);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edx + ebp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(ebp) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044BC99: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e8c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044BCC1; /* jne: not equal / not zero */

loc_0044BCB9: ;
    MEM32(esp + 0x18) = 0x43800000;

loc_0044BCC1: ;
    fp_push(MEMF(ebx + ecx * 4)); /* fld float */
    esi = MEM32(esp + 0x20);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x10] */
    esi++;
    ebp = ebp + 4;
    MEM32(esp + 0x20) = esi;
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044BCF4; /* jp: parity */

loc_0044BCDB: ;
    goto loc_0044BCE0;

    /* nop */

loc_0044BCE0: ;
    if (CMP_GE(ecx, edi)) goto loc_0044BCF4; /* jge: greater or equal (signed >=) */

loc_0044BCE4: ;
    fp_push(MEMF(ebx + ecx * 4 + 4)); /* fld float */
    ecx++;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044BCE0; /* jnp: not parity */

loc_0044BCF4: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x24] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044BBE0; /* jnp: not parity */

loc_0044BD07: ;
    POP32(esp, ebp);

loc_0044BD08: ;
    POP32(esp, edi);
    eax = esi;
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
 * sub_0044BD10
 * Original: 0x0044BD10 - 0x0044BEC2 (434 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044BD10(void)
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

loc_0044BD10: ;
    esp = esp - 0x5A4;
    edx = MEM32(esp + 0x5B4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x5B4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x64;
    edi = esp + 0x24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x64;
    edi = esp + 0x1B4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x5CC);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x5C0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x1C8;
    PUSH32(esp, 0); sub_0044BB50(); /* call 0x0044BB50 */

loc_0044BD6D: ;
    edx = MEM32(esp + 0x38);
    edi = eax;
    esi = 0; /* xor self */
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = edi;
    ebx = 0; /* xor self */
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_00459020(); /* call 0x00459020 */

loc_0044BD85: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00459030(); /* call 0x00459030 */

loc_0044BD99: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    esp = esp + 0x1C;
    ebp = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0044BE0C; /* jle: less or equal (signed <=) */

loc_0044BDAC: ;
    /* nop */

loc_0044BDB0: ;
    fp_push(MEMF(esp + ebp * 4 + 0x1B4)); /* fld float */
    ebx = esi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x14) = (int32_t)fp_top(); /* fistp */
    esi = MEM32(esp + 0x14);
    if (CMP_GE(ebx, esi)) goto loc_0044BDFB; /* jge: greater or equal (signed >=) */

loc_0044BDDF: ;
    ecx = MEM32(esp + 0x5C8);
    eax = MEM32(esp + 0x10);
    edx = esi;
    edi = ecx + ebx * 4;
    edx = edx - ebx;
    ecx = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x20);
    ebx = ebx + edx;

loc_0044BDFB: ;
    fp_push(MEMF(esp + ebp * 4 + 0x24)); /* fld float */
    ebp++;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    if (CMP_L(ebp, edi)) goto loc_0044BDB0; /* jl: less (signed <) */

loc_0044BE0C: ;
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x5CC)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044BE1A: ;
    esi = esi + eax;
    if (CMP_LE(esi, 0x100)) goto loc_0044BE29; /* jle: less or equal (signed <=) */

loc_0044BE24: ;
    esi = 0x100;

loc_0044BE29: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    ebp = MEM32(esp + 0x5C8);
    if (CMP_GE(ebx, esi)) goto loc_0044BE42; /* jge: greater or equal (signed >=) */

loc_0044BE34: ;
    eax = MEM32(esp + 0x10);
    ecx = esi;
    edi = ebp + ebx * 4;
    ecx = ecx - ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0044BE42: ;
    eax = 0x100;
    eax = eax - esi;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    edx = esi;
    if (CMP_L(eax, 4)) goto loc_0044BE8F; /* jl: less (signed <) */

loc_0044BE50: ;
    ecx = 0xFC;
    ecx = ecx - esi;
    ecx = ecx >> 2;
    ecx++;
    eax = ebp + esi * 4 + 4;
    edx = esi + ecx * 4;

loc_0044BE62: ;
    fp_push(MEMF(eax + -8)); /* fld float */
    eax = eax + 0x10;
    ecx--;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -16) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -12) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_0044BE62; /* jne: not equal / not zero */

loc_0044BE8F: ;
    if (CMP_GE(edx, 0x100)) goto loc_0044BEB7; /* jge: greater or equal (signed >=) */

loc_0044BE97: ;
    goto loc_0044BEA0;

    /* nop */

loc_0044BEA0: ;
    fp_push(MEMF(ebp + edx * 4 + -4)); /* fld float */
    edx++;
    (void)0; /* cmp edx, 0x100 - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + edx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(edx, 0x100)) goto loc_0044BEA0; /* jl: less (signed <) */

loc_0044BEB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x5A4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044BED0
 * Original: 0x0044BED0 - 0x0044C06E (414 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044BED0(void)
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

loc_0044BED0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    esp = esp - 0x198;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1B0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00458630(); /* call 0x00458630 */

loc_0044BEF6: ;
    ebp = MEM32(esp + 0x1D0);
    PUSH32(esp, ebp);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00459360(); /* call 0x00459360 */

loc_0044BF12: ;
    eax = MEM32(ebp);
    esp = esp + 0x28;
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0044BF7D; /* jle: less or equal (signed <=) */

loc_0044BF1E: ;
    edi = MEM32(esp + 0x1B8);
    eax = MEM32(esp + 0x1BC);
    ebp = esp + 0x18;
    ebp = ebp - edi;
    eax = eax - edi;
    MEM32(esp + 0x10) = eax;
    goto loc_0044BF40;

    /* nop */

loc_0044BF40: ;
    eax = MEM32(edi + ebp);
    ecx = MEM32(esi + eax * 4 + 4);
    edx = MEM32(esi + eax * 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + eax * 4 + -4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00458FA0(); /* call 0x00458FA0 */

loc_0044BF5B: ;
    /* FPU: fiadd dword ptr [esp + 0x24] */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1D0);
    esp = esp + 0x10;
    ebx++;
    edi = edi + 4;
    MEMF(ecx + edi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(edx);
    if (CMP_L(ebx, eax)) goto loc_0044BF40; /* jl: less (signed <) */

loc_0044BF7B: ;
    ebp = edx;

loc_0044BF7D: ;
    if (CMP_G(MEM32(ebp), 3)) goto loc_0044C063; /* jg: greater (signed >) */

loc_0044BF87: ;
    edi = MEM32(esp + 0x1BC);
    fp_push(MEMF(0x648F98)); /* fld float */
    ebx = MEM32(esp + 0x1B8);
    ecx = esi + 0x54;
    esi = edi;
    edx = edi + 0xC;
    eax = ebx + 4;
    esi = esi - ebx;
    edi = 4;
    /* nop */

loc_0044BFB0: ;
    MEMF(edx + -12) = (float)fp_top(); fp_pop(); /* fst */
    ebx = MEM32(ecx + -56);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(eax + -4) = ebx;
    eax = eax + 0x24;
    edx = edx + 0x24;
    MEMF(esi + eax + -36) = (float)fp_top(); fp_pop(); /* fst */
    ebx = MEM32(ecx + -28);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(eax + -36) = ebx;
    ecx = ecx + 0xFC;
    edi--;
    MEMF(edx + -40) = (float)fp_top(); fp_pop(); /* fst */
    ebx = MEM32(ecx + -252);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(eax + -32) = ebx;
    MEMF(edx + -36) = (float)fp_top(); fp_pop(); /* fst */
    ebx = MEM32(ecx + -224);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(eax + -28) = ebx;
    MEMF(edx + -32) = (float)fp_top(); fp_pop(); /* fst */
    ebx = MEM32(ecx + -196);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(eax + -24) = ebx;
    MEMF(edx + -28) = (float)fp_top(); fp_pop(); /* fst */
    ebx = MEM32(ecx + -168);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(eax + -20) = ebx;
    MEMF(edx + -24) = (float)fp_top(); fp_pop(); /* fst */
    ebx = MEM32(ecx + -140);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(eax + -16) = ebx;
    MEMF(edx + -20) = (float)fp_top(); fp_pop(); /* fst */
    ebx = MEM32(ecx + -112);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(eax + -12) = ebx;
    MEMF(edx + -16) = (float)fp_top(); fp_pop(); /* fst */
    ebx = MEM32(ecx + -84);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(eax + -8) = ebx;
    if ((edi != 0)) goto loc_0044BFB0; /* jne: not equal / not zero */

loc_0044C05A: ;
    /* fstp st(0) */
    MEM32(ebp) = 0x24;

loc_0044C063: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x198;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044C070
 * Original: 0x0044C070 - 0x0044C0C5 (85 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C070(void)
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

loc_0044C070: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d80] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044C085; /* jp: parity */

loc_0044C07F: ;
    MEM32(ecx) = 0x3DCCCCCD;

loc_0044C085: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d80] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044C09E; /* jp: parity */

loc_0044C096: ;
    MEM32(esp + 0xC) = 0x3DCCCCCD;

loc_0044C09E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x577358] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_0044C0C5(); return; } /* jp: parity */

loc_0044C0B5: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    g_seh_ebp = ebp; sub_0044C108(); return; /* tail jmp 0x0044C108 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044C140
 * Original: 0x0044C140 - 0x0044C1EE (174 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C140(void)
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

loc_0044C140: ;
    esp = esp - 0x41C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x424);
    ecx = MEM32(ebx + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x42C);
    eax = MEM32(edi + 0x2C);
    edx = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044B690(); /* call 0x0044B690 */

loc_0044C16B: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x44C);
    esp = esp + 0x10;
    if (CMP_NE(eax, 1)) goto loc_0044C188; /* jne: not equal / not zero */

loc_0044C17E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044C188: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044B220(); /* call 0x0044B220 */

loc_0044C196: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    esi = eax;
    eax = MEM32(esp + 0x440);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0044AD20(); /* call 0x0044AD20 */

loc_0044C1AC: ;
    ecx = esp + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044B160(); /* call 0x0044B160 */

loc_0044C1B7: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x3DCCCCCD);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044B730(); /* call 0x0044B730 */

loc_0044C1D1: ;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fst */
    eax = MEM32(esp + 0x474);
    esp = esp + 0x30;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_NE(eax, 1)) { sub_0044C1EE(); return; } /* jne: not equal / not zero */

loc_0044C1E4: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_0044C1F0(); return; /* tail jmp 0x0044C1F0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044C220
 * Original: 0x0044C220 - 0x0044C243 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C220(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044C220: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x800D);
    PUSH32(esp, 0x14);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0044C22F: ;
    ecx = MEM32(esp + 0x10);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx) = eax;
    if (TEST_NZ(eax, eax)) { sub_0044C243(); return; } /* jne: not equal / not zero */

loc_0044C23C: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044C250
 * Original: 0x0044C250 - 0x0044C269 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C250(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044C250: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0044C268; /* je: equal / zero */

loc_0044C25A: ;
    PUSH32(esp, 0x800D);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0044C265: ;
    esp = esp + 8;

loc_0044C268: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0044C270
 * Original: 0x0044C270 - 0x0044C4CB (603 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C270(void)
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

loc_0044C270: ;
    esp = esp - 0x54;
    ecx = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    eax = 0; /* xor self */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x58);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    MEM32(esp + 0x54) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0044C470; /* jle: less or equal (signed <=) */

loc_0044C2C8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x68);
    edx = ecx + -1;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, esi);
    edx = ebp;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 1;
    eax = ebx;
    edx = edx - ebx;
    MEM32(esp + 0x1C) = ecx;
    goto loc_0044C2F0;

    /* nop */

loc_0044C2F0: ;
    (void)0; /* cmp MEM32(esp + 0x18), 4 - flags set for next jcc */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = ecx;
    esi = 1;
    if (CMP_L(MEM32(esp + 0x18), 4)) goto loc_0044C3F8; /* jl: less (signed <) */

loc_0044C308: ;
    ebx = ebx - ebp;
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x68);
    ebx = ebx - ebp;
    ebx = ebx - 4;
    ebx = ebx >> 2;
    ebx++;
    ebp = ebp + ebx * 4;
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(esp + 0x20);
    edi = eax + 0x10;
    ecx = edx + eax + 8;

loc_0044C332: ;
    fp_push(MEMF(edi + -12)); /* fld float */
    esi = esi + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 0x10;
    fp_push(MEMF(ecx + -20)); /* fld float */
    edi = edi + 0x10;
    ebx--;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi * 4 + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + -28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi * 4 + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + ebp + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi * 4 + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + ebp + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi * 4 + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi * 4 + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi * 4 + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi * 4 + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi * 4 + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ebx != 0)) goto loc_0044C332; /* jne: not equal / not zero */

loc_0044C3EC: ;
    ebp = MEM32(esp + 0x6C);
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x70);

loc_0044C3F8: ;
    if (CMP_GE(ecx, MEM32(esp + 0x68))) goto loc_0044C449; /* jge: greater or equal (signed >=) */

loc_0044C3FE: ;
    edi = ebx;
    ebx = MEM32(esp + 0x68);
    esi = esi << 2;
    edi = edi - ebp;
    ebx = ebx - MEM32(esp + 0x14);
    ecx = ebp + ecx * 4;

loc_0044C411: ;
    fp_push(MEMF(ecx)); /* fld float */
    esi = esi + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    ebx--;
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + esi + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ebx != 0)) goto loc_0044C411; /* jne: not equal / not zero */

loc_0044C445: ;
    ebx = MEM32(esp + 0x70);

loc_0044C449: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    ecx--;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    edi++;
    eax = eax + 4;
    ecx--;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = ecx;
    if ((ecx != 0)) goto loc_0044C2F0; /* jne: not equal / not zero */

loc_0044C46D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0044C470: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    /* FPU: fpatan  */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0xC) = (int32_t)fp_top(); /* fistp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    POP32(esp, ebp);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x54;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044C4D0
 * Original: 0x0044C4D0 - 0x0044C570 (160 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C4D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044C4D0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    if (CMP_LE(esi & esi, 0)) goto loc_0044C561; /* jle: less or equal (signed <=) */

loc_0044C4F2: ;
    edx = edx - eax;
    PUSH32(esp, edi);
    goto loc_0044C500;

    /* nop */
    edi = edi;

loc_0044C500: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + eax)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x14) = (int32_t)fp_top(); /* fistp */
    ecx = MEM32(esp + 0x14);
    edi = MEM32(0x655444);
    ecx = ecx & 0xFF;
    fp_push(MEMF(edi + ecx * 4)); /* fld float */
    edi = MEM32(0x655440);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 4;
    esi--;
    MEM32(esp + 0x14) = ecx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + ecx * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if ((esi != 0)) goto loc_0044C500; /* jne: not equal / not zero */

loc_0044C560: ;
    POP32(esp, edi);

loc_0044C561: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, esi);
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fpatan  */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044C570
 * Original: 0x0044C570 - 0x0044C584 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0044C570: ;
    esp = esp - 0x84;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_GE(edi, 8)) { sub_0044C584(); return; } /* jge: greater or equal (signed >=) */

loc_0044C57E: ;
    MEM32(esp + 8) = edi;
    g_seh_ebp = ebp; sub_0044C590(); return; /* tail jmp 0x0044C590 */

}

/**
 * sub_0044C890
 * Original: 0x0044C890 - 0x0044C8C1 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C890(void)
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

loc_0044C890: ;
    eax = MEM32(esp + 0x24);
    esp = esp - 8;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (CMP_NE(eax, 1)) { sub_0044C8C1(); return; } /* jne: not equal / not zero */

loc_0044C8A1: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esi + 4);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(esp + 0x30) = eax;
    /* FPU: fimul dword ptr [esp + 0x34] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_0044C8F7(); return; /* tail jmp 0x0044C8F7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044C940
 * Original: 0x0044C940 - 0x0044C976 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C940(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044C940: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0044C974; /* jle: less or equal (signed <=) */

loc_0044C94B: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);

loc_0044C955: ;
    fp_push(MEMF(esi + eax * 4)); /* fld float */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 8) = (int32_t)fp_top(); /* fistp */
    SET_LO16(edi, MEM16(esp + 8));
    MEM16(edx + eax * 2) = LO16(edi);
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0044C955; /* jl: less (signed <) */

loc_0044C972: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0044C974: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044C980
 * Original: 0x0044C980 - 0x0044CAA3 (291 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044C980(void)
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

loc_0044C980: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = esi + ebp;
    (void)0; /* cmp ecx, 0xA0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_GE(ecx, 0xA0)) goto loc_0044CA46; /* jge: greater or equal (signed >=) */

loc_0044C99D: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    MEM16(edx) = 0;
    if (CMP_L(esi, 4)) goto loc_0044CA21; /* jl: less (signed <) */

loc_0044C9B6: ;
    edx = esi + -4;
    edx = edx >> 2;
    ecx = ecx + 8;
    edx++;
    eax = ebx + 4;
    edi = edx * 4;
    /* nop */

loc_0044C9D0: ;
    ebp = (uint32_t)(int32_t)SMEM16(eax + -4);
    MEM32(esp + 0x10) = ebp;
    eax = eax + 8;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = ecx + 0x10;
    edx--;
    MEMF(ecx + -24) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = (uint32_t)(int32_t)SMEM16(eax + -10);
    MEM32(esp + 0x10) = ebp;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(ecx + -20) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = (uint32_t)(int32_t)SMEM16(eax + -8);
    MEM32(esp + 0x10) = ebp;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(ecx + -16) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = (uint32_t)(int32_t)SMEM16(eax + -6);
    MEM32(esp + 0x10) = ebp;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(ecx + -12) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_0044C9D0; /* jne: not equal / not zero */

loc_0044CA15: ;
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);

loc_0044CA21: ;
    if (CMP_GE(edi, esi)) goto loc_0044CA3A; /* jge: greater or equal (signed >=) */

loc_0044CA25: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + edi * 2);
    MEM32(esp + 0x1C) = edx;
    edi++;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMF(ecx + edi * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(edi, esi)) goto loc_0044CA25; /* jl: less (signed <) */

loc_0044CA3A: ;
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_LE(ebp, esi)) { sub_0044CAA3(); return; } /* jle: less or equal (signed <=) */

loc_0044CA3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0044CA46: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x14);
    MEM16(eax) = 0xA0;
    eax = 0xA0;
    edx = ecx + esi * 2;
    eax = eax - esi;
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0044CA8D; /* jle: less or equal (signed <=) */

loc_0044CA67: ;
    goto loc_0044CA70;

    /* nop */

loc_0044CA70: ;
    fp_push(MEMF(edi + ecx * 4)); /* fld float */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0xC) = (int32_t)fp_top(); /* fistp */
    SET_LO16(esi, MEM16(esp + 0xC));
    MEM16(edx + ecx * 2) = LO16(esi);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0044CA70; /* jl: less (signed <) */

loc_0044CA8D: ;
    ebp = ebp - eax;
    edx = ebp;
    esi = edi + eax * 4;
    eax = MEM32(esp + 0x18);
    ecx = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044CAB0
 * Original: 0x0044CAB0 - 0x0044CBE6 (310 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CAB0(void)
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

loc_0044CAB0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = MEM32(esp + 0x44);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 2;
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044CAE4: ;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    edx = 0; /* xor self */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x44] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CBB5; /* jp: parity */

loc_0044CAF8: ;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e14] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CB1B; /* jp: parity */

loc_0044CB10: ;
    eax = esi + 0x28;
    ecx = esi + 0x84;
    goto loc_0044CB4A;

loc_0044CB1B: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648f58] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CB36; /* jp: parity */

loc_0044CB2C: ;
    eax = ebp;
    ecx = esi + 0x88;
    goto loc_0044CB3F;

loc_0044CB36: ;
    eax = ebp + 0x28;
    ecx = esi + 0x8C;

loc_0044CB3F: ;
    ebp = MEM32(esi + 0x7C);
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(esp + 0x40);

loc_0044CB4A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    ecx = MEM32(esp + 0x10);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0044CB61; /* jle: less or equal (signed <=) */

loc_0044CB55: ;
    edx = 1;
    MEM32(esi + 0x7C) = 0;

loc_0044CB61: ;
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004593D0(); /* call 0x004593D0 */

loc_0044CB99: ;
    eax = MEM32(ebx);
    esp = esp + 0x38;
    edi = edi + 0x140;
    eax = eax + 0x50;
    MEM32(ebx) = eax;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x64) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044CBB5: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    if ((MEM32(esp + 0x14) != 0)) goto loc_0044CAE4; /* jne: not equal / not zero */

loc_0044CBBF: ;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x44] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044CBDE; /* jne: not equal / not zero */

loc_0044CBCD: ;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    MEM32(esi + 0x60) = 1;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esi + 0x64) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044CBDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044CBF0
 * Original: 0x0044CBF0 - 0x0044CC81 (145 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CBF0(void)
{

loc_0044CBF0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x2B8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2D4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_0044B8E0(); /* call 0x0044B8E0 */

loc_0044CC0D: ;
    edi = MEM32(esp + 0x2E8);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00459FF0(); /* call 0x00459FF0 */

loc_0044CC1D: ;
    PUSH32(esp, 0x2C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00457400(); /* call 0x00457400 */

loc_0044CC34: ;
    edx = esp + 0xE8;
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    eax = esp + 0x40;
    PUSH32(esp, 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00459E90(); /* call 0x00459E90 */

loc_0044CC4A: ;
    ecx = MEM32(esp + 0x310);
    ebx = MEM32(esp + 0x30C);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    edx = esp + 0x100;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0044AF40(); /* call 0x0044AF40 */

loc_0044CC69: ;
    esp = esp + 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00459870(); /* call 0x00459870 */

loc_0044CC74: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x2B8;
    esp += 4; return; /* ret */

}

/**
 * sub_0044CC90
 * Original: 0x0044CC90 - 0x0044CD83 (243 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CC90(void)
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

loc_0044CC90: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, esi);
    eax = ebx + -1;
    esi = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    ecx = 1;
    if (CMP_L(eax, 4)) goto loc_0044CD51; /* jl: less (signed <) */

loc_0044CCB9: ;
    PUSH32(esp, edi);
    edi = ebx + -3;
    edx = ebp + 0xC;

loc_0044CCC0: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CCE0; /* jp: parity */

loc_0044CCD8: ;
    /* fstp st(0) */
    esi = ecx;
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_0044CCE0: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CD01; /* jp: parity */

loc_0044CCF8: ;
    /* fstp st(0) */
    esi = ecx + 1;
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_0044CD01: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CD21; /* jp: parity */

loc_0044CD18: ;
    /* fstp st(0) */
    esi = ecx + 2;
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_0044CD21: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CD42; /* jp: parity */

loc_0044CD39: ;
    /* fstp st(0) */
    esi = ecx + 3;
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_0044CD42: ;
    ecx = ecx + 4;
    edx = edx + 0x10;
    if (CMP_L(ecx, edi)) goto loc_0044CCC0; /* jl: less (signed <) */

loc_0044CD50: ;
    POP32(esp, edi);

loc_0044CD51: ;
    if (CMP_GE(ecx, ebx)) goto loc_0044CD7B; /* jge: greater or equal (signed >=) */

loc_0044CD55: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CD76; /* jp: parity */

loc_0044CD6E: ;
    /* fstp st(0) */
    esi = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_0044CD76: ;
    ecx++;
    if (CMP_L(ecx, ebx)) goto loc_0044CD55; /* jl: less (signed <) */

loc_0044CD7B: ;
    eax = esi;
    /* fstp st(0) */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044CD90
 * Original: 0x0044CD90 - 0x0044CDA4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CD90(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044CD90: ;
    eax = MEM32(esp + 0xC);
    if (CMP_L(eax, MEM32(esp + 8))) { sub_0044CDA4(); return; } /* jl: less (signed <) */

loc_0044CD9A: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044CDAC
 * Original: 0x0044CDAC - 0x0044CDB3 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CDAC(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044CDAC: ;
    fp_push(MEMD(esp + 4)); /* fld double */
    fp_top() = fabs(fp_top()); /* fabs */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044CDB3
 * Original: 0x0044CDB3 - 0x0044CDBA (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CDB3(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044CDB3: ;
    fp_push(MEMD(esp + 4)); /* fld double */
    /* FPU: fcos  */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044CDBA
 * Original: 0x0044CDBA - 0x0044CDC8 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CDBA(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044CDBA: ;
    fp_push(MEMD(esp + 4)); /* fld double */
    fp_push(MEMD(esp + 0xC)); /* fld double */
    PUSH32(esp, 0); sub_004716B4(); /* call 0x004716B4 */

loc_0044CDC7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044CDC8
 * Original: 0x0044CDC8 - 0x0044CDCF (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CDC8(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044CDC8: ;
    fp_push(MEMD(esp + 4)); /* fld double */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044CDCF
 * Original: 0x0044CDCF - 0x0044CE41 (114 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CDCF(void)
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

loc_0044CDCF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044CDE0: ;
    edi = MEM32(ebp + 0x14);
    SET_LO16(ebx, MEM16(edi + 6));
    eax = ZX16(MEM16(ebp + 0x10));
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = ZX16(LO16(ebx));
    esi = SX16(LO16(ebx));
    MEM32(ebp + 0x10) = eax;
    eax = eax - ecx;
    if (CMP_GE(esi, eax)) goto loc_0044CE3C; /* jge: greater or equal (signed >=) */

loc_0044CDFC: ;
    if (CMP_GE(LO16(ebx), 0x140)) goto loc_0044CE2B; /* jge: greater or equal (signed >=) */

loc_0044CE03: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 6));
    ecx = ZX16(LO16(eax));
    edx = esi;
    edx = edx - ecx;
    ecx = MEM32(ebp + 8);
    eax = eax + eax + 1;
    ecx = ecx + edx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00448C97(); /* call 0x00448C97 */

loc_0044CE22: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0xC;
    MEMF(eax + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044CE2B: ;
    eax = ZX16(MEM16(edi + 6));
    ecx = MEM32(ebp + 0x10);
    ebx++;
    esi = SX16(LO16(ebx));
    ecx = ecx - eax;
    if (CMP_L(esi, ecx)) goto loc_0044CDFC; /* jl: less (signed <) */

loc_0044CE3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0044CE41
 * Original: 0x0044CE41 - 0x0044CE8F (78 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CE41(void)
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

loc_0044CE41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = ZX16(MEM16(ebp + 0x14));
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(ebp + 0x14) = edx;
    ecx = MEM32(ebp + 0x18);
    /* FPU: fidiv dword ptr [ebp + 0x14] */
    eax = ZX16(MEM16(ecx + 2));
    PUSH32(esp, esi);
    eax = eax + edx;
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0044CE8A; /* jle: less or equal (signed <=) */

loc_0044CE64: ;
    eax = 0; /* xor self */
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, edi);

loc_0044CE6A: ;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    edi = MEM32(ebp + 8);
    esi++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    edi = ZX16(MEM16(ecx + 2));
    eax = SX16(LO16(esi));
    edi = edi + edx;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(eax, edi)) goto loc_0044CE6A; /* jl: less (signed <) */

loc_0044CE89: ;
    POP32(esp, edi);

loc_0044CE8A: ;
    /* fstp st(0) */
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
 * sub_0044CE8F
 * Original: 0x0044CE8F - 0x0044CFA2 (275 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CE8F(void)
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

loc_0044CE8F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 8), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (CMP_EQ(MEM16(ebp + 8), 1)) goto loc_0044CF7B; /* je: equal / zero */

loc_0044CEA8: ;
    if (CMP_EQ(MEM16(ebp + 8), LO16(ebx))) goto loc_0044CF7B; /* je: equal / zero */

loc_0044CEB2: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d80] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044CF7B; /* jnp: not parity */

loc_0044CEC6: ;
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0044CDAC(); /* call 0x0044CDAC */

loc_0044CED2: ;
    edx = MEM32(ebp + 0x28);
    eax = ZX16(MEM16(edx + 0x10));
    MEM32(ebp + 8) = eax;
    POP32(esp, ecx);
    POP32(esp, ecx);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044CF7B; /* jnp: not parity */

loc_0044CEEE: ;
    eax = ZX16(MEM16(edx + 0x14));
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CF08; /* jp: parity */

loc_0044CF04: ;
    MEM16(ecx) = MEM16(ecx) | 0xFFFF;

loc_0044CF08: ;
    eax = ZX16(MEM16(edx + 0x14));
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_top() = -fp_top(); /* fchs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044CF22; /* jne: not equal / not zero */

loc_0044CF1D: ;
    MEM16(ecx) = 1;

loc_0044CF22: ;
    eax = ZX16(MEM16(edx + 0x12));
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0044CF3E; /* jne: not equal / not zero */

loc_0044CF35: ;
    if (CMP_NE(MEM16(ecx), 0xFFFFFFFFu)) goto loc_0044CF3E; /* jne: not equal / not zero */

loc_0044CF3B: ;
    MEM16(ecx) = LO16(ebx);

loc_0044CF3E: ;
    eax = ZX16(MEM16(edx + 0x12));
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_top() = -fp_top(); /* fchs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CF5C; /* jp: parity */

loc_0044CF53: ;
    if (CMP_NE(MEM16(ecx), 1)) goto loc_0044CF5C; /* jne: not equal / not zero */

loc_0044CF59: ;
    MEM16(ecx) = LO16(ebx);

loc_0044CF5C: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044CF8B; /* jp: parity */

loc_0044CF6C: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0044CF8B;

loc_0044CF7B: ;
    eax = MEM32(ebp + 0x1C);
    fp_push(0.0); /* fldz */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(eax) = LO16(ebx);
    eax = MEM32(ebp + 0x18);
    MEM16(eax) = LO16(ebx);

loc_0044CF8B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x20);
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [edi] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_0044CFA2(); return; } /* jp: parity */

loc_0044CF9E: ;
    fp_push(MEMF(edi)); /* fld float */
    g_seh_ebp = ebp; sub_0044CFA4(); return; /* tail jmp 0x0044CFA4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044CFD6
 * Original: 0x0044CFD6 - 0x0044D099 (195 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044CFD6(void)
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

loc_0044CFD6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (CMP_LE(LO16(edi), 4)) goto loc_0044D015; /* jle: less or equal (signed <=) */

loc_0044CFE8: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = SX16(LO16(edi));
    ebx = 0; /* xor self */
    ebx++;
    esi = eax + -4;
    if (CMP_LE(esi, ebx)) goto loc_0044D017; /* jle: less or equal (signed <=) */

loc_0044CFF8: ;
    eax = ebx;

loc_0044CFFA: ;
    edx = ecx + eax * 4 + 8;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [edx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044D00B; /* jp: parity */

loc_0044D007: ;
    /* fstp st(0) */
    fp_push(MEMF(edx)); /* fld float */

loc_0044D00B: ;
    ebx++;
    eax = SX16(LO16(ebx));
    if (CMP_L(eax, esi)) goto loc_0044CFFA; /* jl: less (signed <) */

loc_0044D013: ;
    goto loc_0044D017;

loc_0044D015: ;
    fp_push(0.0); /* fldz */

loc_0044D017: ;
    (void)0; /* cmp LO16(edi), 5 - flags set for next jcc */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if (CMP_LE(LO16(edi), 5)) goto loc_0044D06F; /* jle: less or equal (signed <=) */

loc_0044D02C: ;
    ecx = MEM32(ebp + 0xC);
    eax = edi + -5;
    ecx = ecx + 0x14;
    edx = ZX16(LO16(eax));

loc_0044D038: ;
    fp_push(MEMF(ecx)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fstp st(1) */
    /* fld st(0) */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044D067; /* jne: not equal / not zero */

loc_0044D053: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(1) */
    goto loc_0044D069;

loc_0044D067: ;
    /* fstp st(0) */

loc_0044D069: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_0044D038; /* jne: not equal / not zero */

loc_0044D06F: ;
    eax = SX16(LO16(edi));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 0x18);
    POP32(esp, edi);
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    POP32(esp, esi);
    POP32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fdivr st(2) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [eax + 0x18] */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    (void)0; /* test HI8(eax), 5 - flags set for next jcc */
    /* fstp st(0) */
    if (1 /* jp after test - parity */) goto loc_0044D097; /* jp: parity */

loc_0044D090: ;
    eax = MEM32(ebp + 8);
    MEM16(eax) = MEM16(eax) & 0;

loc_0044D097: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044D099
 * Original: 0x0044D099 - 0x0044D0B1 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044D099(void)
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

loc_0044D099: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0044D0B1(); return; } /* jne: not equal / not zero */

loc_0044D0AD: ;
    fp_push(1.0); /* fld1 */
    g_seh_ebp = ebp; sub_0044D0B7(); return; /* tail jmp 0x0044D0B7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044D13B
 * Original: 0x0044D13B - 0x0044D184 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044D13B(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044D13B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = ZX16(MEM16(esi));
    ecx = ZX16(MEM16(esi + 2));
    PUSH32(esp, edi);
    eax = eax + ecx;
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0044D181; /* jle: less or equal (signed <=) */

loc_0044D150: ;
    eax = 0; /* xor self */

loc_0044D152: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = eax << 2;
    fp_push(MEMF(eax + edx)); /* fld float */
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044D099(); /* call 0x0044D099 */

loc_0044D16D: ;
    ecx = ZX16(MEM16(esi));
    edx = ZX16(MEM16(esi + 2));
    esp = esp + 0xC;
    edi++;
    eax = SX16(LO16(edi));
    ecx = ecx + edx;
    if (CMP_L(eax, ecx)) goto loc_0044D152; /* jl: less (signed <) */

loc_0044D181: ;
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
 * sub_0044D184
 * Original: 0x0044D184 - 0x0044D420 (668 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044D184(void)
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

loc_0044D184: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = MEM32(ebp + 0x30);
    ebx = ebx - MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x38);
    SET_LO16(eax, MEM16(esi));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ebp + 0x34)));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 4));
    SET_LO16(edi, LO16(edi) - LO16(eax));
    SET_LO16(edi, LO16(edi) - MEM16(esi + 6));
    edi = edi + 0x50;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D1BA: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ebx;
    ecx = ecx - eax;
    MEM32(ebp + 0x34) = ecx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D1CF: ;
    MEM16(ebp + -4) = LO16(eax);
    eax = eax + ebx;
    if (CMP_L(LO16(eax), LO16(edi))) goto loc_0044D1DC; /* jl: less (signed <) */

loc_0044D1DA: ;
    eax = edi;

loc_0044D1DC: ;
    ebx = MEM32(ebp + 0x34);
    ecx = ebp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x28);
    eax = eax - ebx;
    PUSH32(esp, eax);
    eax = SX16(LO16(ebx));
    eax = ecx + eax * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004439E3(); /* call 0x004439E3 */

loc_0044D1F5: ;
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x34);
    /* fstp st(0) */
    ebx = ebx + edx;
    ecx = ecx + ebx;
    eax = SX16(LO16(ecx));
    MEM32(ebp + 0x38) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x30);
    fp_push((double)SMEM32(ebp + 0x38)); /* fild */
    MEM32(ebp + 0x38) = eax;
    esp = esp + 0xC;
    MEM32(ebp + 0x34) = ecx;
    fp_push((double)SMEM32(ebp + 0x38)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044D274; /* jp: parity */

loc_0044D226: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = ecx - edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = ecx;
    ebx = ebx - MEM32(ebp + -4);
    MEM32(ebp + 0x38) = ecx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D23E: ;
    ecx = MEM32(ebp + 0x38);
    ecx = ecx - eax;
    (void)0; /* cmp LO16(ecx), LO16(edi) - flags set for next jcc */
    eax = ecx;
    if (CMP_L(LO16(ecx), LO16(edi))) goto loc_0044D24C; /* jl: less (signed <) */

loc_0044D24A: ;
    eax = edi;

loc_0044D24C: ;
    ecx = ebp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x28);
    eax = eax - ebx;
    PUSH32(esp, eax);
    eax = SX16(LO16(ebx));
    eax = ecx + eax * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004439E3(); /* call 0x004439E3 */

loc_0044D262: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x34);
    /* fstp st(0) */
    ebx = ebx + eax;
    esp = esp + 0xC;
    ecx = ecx + ebx;
    MEM32(ebp + 0x34) = ecx;

loc_0044D274: ;
    if (CMP_GE(LO16(ecx), MEM16(ebp + 0x30))) goto loc_0044D2CC; /* jge: greater or equal (signed >=) */

loc_0044D27A: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = ecx - MEM32(ebp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 0x38) = ecx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D28E: ;
    ecx = MEM32(ebp + -4);
    ebx = 0; /* xor self */
    SET_LO16(ebx, LO16(eax));
    eax = MEM32(ebp + 0x38);
    ebx = ebx + eax;
    eax = eax + ecx;
    if (CMP_GE(LO16(eax), LO16(edi))) goto loc_0044D2A4; /* jge: greater or equal (signed >=) */

loc_0044D2A2: ;
    edi = eax;

loc_0044D2A4: ;
    ecx = MEM32(ebp + 0x28);
    eax = ebp + 0x34;
    PUSH32(esp, eax);
    eax = SX16(LO16(ebx));
    edi = edi - ebx;
    eax = ecx + eax * 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004439E3(); /* call 0x004439E3 */

loc_0044D2BA: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x34);
    /* fstp st(0) */
    ebx = ebx + eax;
    esp = esp + 0xC;
    ecx = ecx + ebx;
    MEM32(ebp + 0x34) = ecx;

loc_0044D2CC: ;
    SET_LO16(eax, MEM16(ebp + 0x30));
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    MEM16(ebx) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 2));
    SET_LO16(eax, LO16(eax) + LO16(ecx));
    MEM16(edx) = LO16(eax);
    edi = ZX16(MEM16(esi));
    eax = SX16(LO16(eax));
    MEM32(ebp + 0x1C) = eax;
    eax = ZX16(MEM16(esi + 2));
    eax = eax + edi;
    edi = eax;
    eax = MEM32(ebp + 0x1C);
    if (CMP_L(eax, edi)) goto loc_0044D304; /* jl: less (signed <) */

loc_0044D2FB: ;
    eax = ZX16(MEM16(esi + 2));
    edi = ZX16(MEM16(esi));
    eax = eax + edi;

loc_0044D304: ;
    edi = MEM32(ebp + 0x2C);
    MEM16(edx) = LO16(eax);
    MEM16(edi) = 1;
    if (CMP_GE(LO16(ecx), MEM16(edx))) goto loc_0044D319; /* jge: greater or equal (signed >=) */

loc_0044D314: ;
    if (CMP_GE(LO16(ecx), MEM16(ebx))) goto loc_0044D32C; /* jge: greater or equal (signed >=) */

loc_0044D319: ;
    MEM16(edi) = MEM16(edi) & 0;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    ecx = ZX16(MEM16(esi));
    if (CMP_L(eax, ecx)) goto loc_0044D329; /* jl: less (signed <) */

loc_0044D327: ;
    eax = ecx;

loc_0044D329: ;
    MEM16(edx) = LO16(eax);

loc_0044D32C: ;
    SET_LO16(ecx, MEM16(ebx));
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    edx = (uint32_t)(int32_t)SMEM16(edx);
    eax = SX16(LO16(ecx));
    eax = eax - ebx;
    SET_LO16(edx, LO16(edx) - LO16(ecx));
    ecx = MEM32(ebp + 0x24);
    MEM32(ebp + 0x1C) = ebx;
    ebx = MEM32(ebp + 0x28);
    eax = eax << 2;
    PUSH32(esp, esi);
    ebx = ebx + eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0044CFD6(); /* call 0x0044CFD6 */

loc_0044D358: ;
    esp = esp + 0x14;
    if (CMP_EQ(MEM16(edi), 0)) goto loc_0044D41B; /* je: equal / zero */

loc_0044D365: ;
    ebx = MEM32(ebp + 0x18);
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    edi = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    if (CMP_GE(LO16(ebx) & LO16(ebx), 0)) goto loc_0044D381; /* jge: greater or equal (signed >=) */

loc_0044D373: ;
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(ecx) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(edi) = LO16(eax);

loc_0044D381: ;
    if (CMP_LE(LO16(ebx) & LO16(ebx), 0)) goto loc_0044D391; /* jle: less or equal (signed <=) */

loc_0044D383: ;
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(ecx) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(edi) = LO16(eax);

loc_0044D391: ;
    if (TEST_NZ(LO16(ebx), LO16(ebx))) goto loc_0044D3A0; /* jne: not equal / not zero */

loc_0044D396: ;
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(edi) = LO16(eax);
    MEM16(ecx) = LO16(eax);

loc_0044D3A0: ;
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d3c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044D3C0; /* jp: parity */

loc_0044D3B0: ;
    eax = MEM32(ebp + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    edx = ZX16(MEM16(esi + 0xE));
    if (CMP_G(eax, edx)) goto loc_0044D3E0; /* jg: greater (signed >) */

loc_0044D3C0: ;
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044D3F1; /* jp: parity */

loc_0044D3D0: ;
    eax = MEM32(ebp + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    edx = ZX16(MEM16(esi + 0x10));
    if (CMP_LE(eax, edx)) goto loc_0044D3F1; /* jle: less or equal (signed <=) */

loc_0044D3E0: ;
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    SET_LO16(eax, MEM16(esi + 0xC));
    if (CMP_GE(LO16(ebx) & LO16(ebx), 0)) goto loc_0044D3EE; /* jge: greater or equal (signed >=) */

loc_0044D3E9: ;
    MEM16(edi) = LO16(eax);
    goto loc_0044D3F1;

loc_0044D3EE: ;
    MEM16(ecx) = LO16(eax);

loc_0044D3F1: ;
    eax = ZX16(MEM16(esi));
    ebx = MEM32(ebp + 0x1C);
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    eax = eax - ebx;
    eax = eax + 0xFFFFFFF8u;
    if (CMP_GE(edx, eax)) goto loc_0044D405; /* jge: greater or equal (signed >=) */

loc_0044D403: ;
    eax = edx;

loc_0044D405: ;
    MEM16(ecx) = LO16(eax);
    eax = ZX16(MEM16(esi));
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    eax = eax + ebx + -8;
    if (CMP_GE(ecx, eax)) goto loc_0044D418; /* jge: greater or equal (signed >=) */

loc_0044D416: ;
    eax = ecx;

loc_0044D418: ;
    MEM16(edi) = LO16(eax);

loc_0044D41B: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0044D420
 * Original: 0x0044D420 - 0x0044D707 (743 bytes, 253 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044D420(void)
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

loc_0044D420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2D4;
    eax = MEM32(ebp + 0x10);
    fp_push(0.0); /* fldz */
    PUSH32(esp, ebx);
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, esi);
    fp_push(0.0); /* fldz */
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x20);
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    fp_push(0.0); /* fldz */
    edi = MEM32(ebp + 0x24);
    edi = edi - MEM32(ebp + 0x20);
    MEMF(ebp + -16) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esi << 2;
    fp_push(0.0); /* fldz */
    eax = eax + esi;
    PUSH32(esp, edi);
    MEMF(ebp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + -48) = eax;
    PUSH32(esp, 0); sub_00448E10(); /* call 0x00448E10 */

loc_0044D45D: ;
    esp = esp + 0xC;
    MEMF(ebp + -36) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(ebp + -36)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044D479; /* jp: parity */

loc_0044D475: ;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;

loc_0044D479: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM16(ebp + 0x1C), LO16(ecx))) goto loc_0044D693; /* je: equal / zero */

loc_0044D485: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x28);
    fp_push(0.0); /* fldz */
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x2C);
    MEMF(ebp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + edx;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -24) = 0xF149F2CAu;
    MEM32(ebp + 0x1C) = ecx;
    MEM32(ebp + -52) = eax;
    if (CMP_L(eax, ecx)) goto loc_0044D64F; /* jl: less (signed <) */

loc_0044D4A9: ;
    eax = SX16(LO16(edi));
    MEM32(ebp + 0x10) = eax;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEMF(ebp + -20) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044D4B5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x28);
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ecx;
    (void)0; /* test LO16(edi), LO16(edi) - flags set for next jcc */
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(ebp + -56) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(LO16(edi) & LO16(edi), 0)) goto loc_0044D510; /* jle: less or equal (signed <=) */

loc_0044D4CD: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    eax = ebp + -724;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0xC);
    ebx = esi + eax;
    eax = ZX16(LO16(edi));
    MEM32(ebp + -44) = eax;

loc_0044D4E6: ;
    fp_push((double)SMEM32(ebp + -28)); /* fild */
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0); sub_0044D099(); /* call 0x0044D099 */

loc_0044D4FE: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 4;
    esp = esp + 0xC;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    ebx = ebx + 4;
    MEM32(ebp + -44) = MEM32(ebp + -44) - 1;
    if ((MEM32(ebp + -44) != 0)) goto loc_0044D4E6; /* jne: not equal / not zero */

loc_0044D510: ;
    SET_LO16(eax, MEM16(ebp + 0x28));
    if (CMP_NE(MEM16(ebp + 0x1C), LO16(eax))) goto loc_0044D544; /* jne: not equal / not zero */

loc_0044D51A: ;
    eax = ebp + -724;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448E10(); /* call 0x00448E10 */

loc_0044D528: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    esp = esp + 0xC;
    fp_push(MEMF(ebp + -12)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044D64F; /* jnp: not parity */

loc_0044D544: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -16);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -48));
    MEM32(ebp + -4) = eax;
    eax = ebp + -724;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448E10(); /* call 0x00448E10 */

loc_0044D560: ;
    MEMF(ebp + -16) = (float)fp_top(); fp_popp(); /* fstp */
    esp = esp + 0xC;
    if (CMP_LE(MEM16(ebp + 0x1C), 1)) goto loc_0044D63F; /* jle: less or equal (signed <=) */

loc_0044D571: ;
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0044D5CF; /* jne: not equal / not zero */

loc_0044D59D: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044D5CF; /* jp: parity */

loc_0044D5AA: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fstp st(1) */
    goto loc_0044D61E;

loc_0044D5CF: ;
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044D5FC; /* jne: not equal / not zero */

loc_0044D5DE: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -8) = 0x3F000000;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fstp st(1) */
    goto loc_0044D61E;

loc_0044D5FC: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEM32(ebp + -8) = 0xBF000000u;
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(2) */
    /* fstp st(0) */

loc_0044D61E: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebp - 0x18] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044D63D; /* jne: not equal / not zero */

loc_0044D628: ;
    eax = MEM32(ebp + 0x10);
    MEMF(ebp + -24) = (float)fp_top(); fp_popp(); /* fstp */
    eax++;
    MEM32(ebp + 0x24) = eax;
    fp_push((double)SMEM32(ebp + 0x24)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0044D63F;

loc_0044D63D: ;
    /* fstp st(0) */

loc_0044D63F: ;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 1;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    if (CMP_LE(ecx, MEM32(ebp + -52))) goto loc_0044D4B5; /* jle: less or equal (signed <=) */

loc_0044D64F: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(ebp + -36)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044D682; /* jnp: not parity */

loc_0044D661: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(ebp + -12)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0044D682; /* jnp: not parity */

loc_0044D673: ;
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    goto loc_0044D684;

loc_0044D682: ;
    fp_push(0.0); /* fldz */

loc_0044D684: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp + 0x30] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044D693; /* jp: parity */

loc_0044D68E: ;
    fp_push(0.0); /* fldz */
    MEMF(ebp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044D693: ;
    (void)0; /* test LO16(edi), LO16(edi) - flags set for next jcc */
    eax = SX16(LO16(edi));
    MEM32(ebp + 0x1C) = eax;
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    MEMF(ebp + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(LO16(edi) & LO16(edi), 0)) goto loc_0044D6EA; /* jle: less or equal (signed <=) */

loc_0044D6AF: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    esi = esi + eax;
    ebx = ebx - eax;
    eax = ZX16(LO16(edi));
    MEM32(ebp + 0x10) = eax;

loc_0044D6C3: ;
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = ebx + esi;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0044481D(); /* call 0x0044481D */

loc_0044D6DC: ;
    esp = esp + 0xC;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 1;
    esi = esi + 4;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_0044D6C3; /* jne: not equal / not zero */

loc_0044D6EA: ;
    fp_push(MEMF(ebp + -20)); /* fld float */
    eax = MEM32(ebp + 0x14);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 0x20);
    edi = edi + eax;
    eax = MEM32(ebp + 0x18);
    MEM16(eax) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0044D707
 * Original: 0x0044D707 - 0x0044D7AE (167 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044D707(void)
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

loc_0044D707: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    (void)0; /* cmp MEM32(ebp + 0x2C), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0x2C), 0)) { sub_0044D7AE(); return; } /* je: equal / zero */

loc_0044D719: ;
    esi = MEM32(ebp + 0x20);
    edi = MEM32(ebp + 0x30);
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = ZX16(MEM16(edi));
    if (CMP_GE(eax, ecx)) goto loc_0044D7A6; /* jge: greater or equal (signed >=) */

loc_0044D729: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);

loc_0044D72D: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D757: ;
    PUSH32(esp, eax);
    eax = ebp + 0x2C;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044D184(); /* call 0x0044D184 */

loc_0044D76D: ;
    fp_push(MEMF(0x648D40)); /* fld float */
    esp = esp + 0x30;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0044D420(); /* call 0x0044D420 */

loc_0044D798: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = ZX16(MEM16(edi));
    esp = esp + 0x2C;
    if (CMP_L(eax, ecx)) goto loc_0044D72D; /* jl: less (signed <) */

loc_0044D7A5: ;
    POP32(esp, ebx);

loc_0044D7A6: ;
    SET_LO16(eax, MEM16(edi));
    MEM16(esi) = MEM16(esi) - LO16(eax);
    g_seh_ebp = ebp; sub_0044D7F2(); return; /* tail jmp 0x0044D7F2 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044D7F6
 * Original: 0x0044D7F6 - 0x0044DB4B (853 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044D7F6(void)
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

loc_0044D7F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xBBC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -404;
    PUSH32(esp, 0x5A);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044D810: ;
    esi = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(esi + 8));
    SET_LO16(ebx, LO16(eax));
    SET_LO16(ecx, LO16(eax));
    MEM16(ebp + -36) = LO16(eax);
    eax = ZX16(LO16(eax));
    MEM32(ebp + 8) = eax;
    SET_LO16(ecx, LO16(ecx) >> 4);
    SET_LO16(ebx, LO16(ebx) >> 1);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM16(ebp + -40) = LO16(ebx);
    MEM16(ebp + -38) = LO16(ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D848: ;
    fp_push(MEMF(0x648D18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(ebp + -34) = LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D859: ;
    fp_push(MEMF(0x648D20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(ebp + -32) = LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D86A: ;
    /* fld st(0) */
    MEM16(ebp + -30) = LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D875: ;
    fp_push(MEMF(0x648F38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(ebp + -28) = LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D886: ;
    fp_push(MEMF(0x648E5C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(ebp + -26) = LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D897: ;
    fp_push(MEMF(0x648CE4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(ebp + -24) = LO16(eax);
    MEM32(ebp + -16) = 0x3E97B4A2;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D8AF: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(ebp + -22) = LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D8BE: ;
    MEM16(ebp + -20) = LO16(eax);
    PUSH32(esp, 0xA0);
    eax = ebp + -1724;
    PUSH32(esp, eax);
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044D8DA: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    ecx = MEM32(esi + 0x1C);
    esp = esp + 0x14;
    edx = ebp + -40;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x10));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x34));
    MEM32(ebp + 8) = ecx;
    ecx = esi + 0xA6;
    edi = esi + 0x30;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x14));
    MEM32(ebp + -4) = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi + 0xA4;
    PUSH32(esp, ecx);
    ecx = esi + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044CE8F(); /* call 0x0044CE8F */

loc_0044D924: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esp = esp + 0x1C;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0044CDAC(); /* call 0x0044CDAC */

loc_0044D934: ;
    SET_LO16(eax, MEM16(esi + 0x18));
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* cmp LO16(eax), 1 - flags set for next jcc */
    fp_push(MEMF(0x648D10)); /* fld float */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(LO16(eax), 1)) goto loc_0044D965; /* je: equal / zero */

loc_0044D949: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0044D965; /* je: equal / zero */

loc_0044D94E: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fdivr dword ptr [ebp - 0xc] */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d80] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044D96A; /* jne: not equal / not zero */

loc_0044D965: ;
    eax = MEM32(edi);
    MEM32(ebp + 8) = eax;

loc_0044D96A: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D984: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(esi + 0x144C) = LO16(eax);
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044D9A5: ;
    /* fstp st(0) */
    (void)0; /* cmp MEM16(ebp + -4), 0 - flags set for next jcc */
    MEM16(esi + 0x144E) = LO16(eax);
    if (CMP_EQ(MEM16(ebp + -4), 0)) { sub_0044DB4B(); return; } /* je: equal / zero */

loc_0044D9B9: ;
    if (CMP_EQ(MEM16(ebp + -4), 1)) { sub_0044DB4B(); return; } /* je: equal / zero */

loc_0044D9C4: ;
    fp_push(MEMF(edi)); /* fld float */
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 8));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = esi + 0x2D3C;
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044CE41(); /* call 0x0044CE41 */

loc_0044D9E9: ;
    edi = 0; /* xor self */
    esp = esp + 0x14;
    if (CMP_EQ(MEM32(esi + 0x1988), edi)) goto loc_0044DA2D; /* je: equal / zero */

loc_0044D9F6: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 8));
    ecx = ZX16(LO16(eax));
    ecx = ecx + 0xA0;
    if (CMP_G(ecx, 0x140)) goto loc_0044DA2D; /* jg: greater (signed >) */

loc_0044DA0D: ;
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    eax = eax + 0xA0;
    PUSH32(esp, eax);
    eax = ebp + -3004;
    PUSH32(esp, eax);
    eax = esi + 0x1478;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044CDCF(); /* call 0x0044CDCF */

loc_0044DA2A: ;
    esp = esp + 0x10;

loc_0044DA2D: ;
    eax = ZX16(LO16(ebx));
    MEM32(ebp + -12) = eax;
    eax = esi + 0x144C;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -4) = eax;

loc_0044DA42: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xA6));
    if (CMP_G(LO16(eax), 0x5A)) goto loc_0044DA65; /* jg: greater (signed >) */

loc_0044DA51: ;
    PUSH32(esp, eax);
    eax = ebp + -404;
    PUSH32(esp, eax);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044DA62: ;
    esp = esp + 0xC;

loc_0044DA65: ;
    if (CMP_EQ(MEM32(esi + 0x1988), 0)) goto loc_0044DA8E; /* je: equal / zero */

loc_0044DA6E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -8);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    ecx = esi + eax * 4 + 0x2D3C;
    PUSH32(esp, ecx);
    eax = ebp + eax * 4 + -1084;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044D13B(); /* call 0x0044D13B */

loc_0044DA8B: ;
    esp = esp + 0xC;

loc_0044DA8E: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + -8);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1988));
    eax = ebp + edi * 4 + -2684;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(ebp + -44) = eax;
    PUSH32(esp, ecx);
    eax = esi + 0xA6;
    fp_push((double)SMEM32(ebp + -44)); /* fild */
    ebx = ebp + edi * 4 + -1084;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    eax = esi + edi * 4 + 0x15B8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esi + 0xA0;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + -404;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044D707(); /* call 0x0044D707 */

loc_0044DAE8: ;
    eax = MEM32(ebp + -12);
    eax = eax + edi;
    esp = esp + 0x2C;
    if (CMP_G(eax, 0xAA)) goto loc_0044DB0A; /* jg: greater (signed >) */

loc_0044DAF7: ;
    PUSH32(esp, MEM32(ebp + -40));
    eax = ebp + -404;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044DB07: ;
    esp = esp + 0xC;

loc_0044DB0A: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xA6));
    if (CMP_G(LO16(eax), 0xA)) goto loc_0044DB31; /* jg: greater (signed >) */

loc_0044DB19: ;
    PUSH32(esp, eax);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    eax = ebp + eax * 4 + -404;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044DB2E: ;
    esp = esp + 0xC;

loc_0044DB31: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    if (CMP_L(MEM16(ebp + 8), 2)) goto loc_0044DA42; /* jl: less (signed <) */

loc_0044DB49: ;
    g_seh_ebp = ebp; sub_0044DB83(); return; /* tail jmp 0x0044DB83 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044DC1A
 * Original: 0x0044DC1A - 0x0044DC2D (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044DC1A(void)
{

loc_0044DC1A: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x138C) = MEM32(eax + 0x138C) & 0;
    MEM32(eax + 0x1388) = MEM32(eax + 0x1388) & 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0044DC2D
 * Original: 0x0044DC2D - 0x0044DC93 (102 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044DC2D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0044DC2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x14);
    eax = eax - MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    eax++;
    ecx++;
    edx = 0; /* xor self */
    if (CMP_LE(LO16(eax), LO16(ecx))) goto loc_0044DC49; /* jle: less or equal (signed <=) */

loc_0044DC41: ;
    ecx = ecx + ecx;
    edx++;
    if (CMP_L(LO16(ecx), LO16(eax))) goto loc_0044DC41; /* jl: less (signed <) */

loc_0044DC49: ;
    if (CMP_LE(MEM16(ebp + 0x18), 0)) goto loc_0044DC91; /* jle: less or equal (signed <=) */

loc_0044DC50: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x10) = eax;
    eax = ZX16(MEM16(ebp + 0x18));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = SX16(LO16(edx));
    MEM32(ebp + 0x18) = eax;

loc_0044DC6A: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    eax = eax - MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x138C));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00443235(); /* call 0x00443235 */

loc_0044DC7E: ;
    MEM32(esi + 0x138C) = MEM32(esi + 0x138C) + ebx;
    esp = esp + 0x10;
    edi++;
    edi++;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    if ((MEM32(ebp + 0x18) != 0)) goto loc_0044DC6A; /* jne: not equal / not zero */

loc_0044DC8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0044DC91: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0044DC93
 * Original: 0x0044DC93 - 0x0044DCDC (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044DC93(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044DC93: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = esi + 0x138C;
    ecx = MEM32(eax);
    MEM32(edi + 0x138C) = ecx;
    ecx = MEM32(esi + 0x1388);
    MEM32(edi + 0x1388) = ecx;
    eax = MEM32(eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0x1388;
    eax++;
    if (CMP_LE(eax, ecx)) goto loc_0044DCCB; /* jle: less or equal (signed <=) */

loc_0044DCC9: ;
    eax = ecx;

loc_0044DCCB: ;
    ecx = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0044DCDC
 * Original: 0x0044DCDC - 0x0044DDD2 (246 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044DCDC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0044DCDC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    MEM32(edi + 0x1388) = MEM32(edi + 0x1388) & 0;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0044DC93(); /* call 0x0044DC93 */

loc_0044DCF8: ;
    eax = MEM32(edi + 0x138C);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 7);
    POP32(esp, ebx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, 7);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x1388);
    ebx = ebx - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = ebx + 1;
    MEM32(ebp + 0xC) = eax;
    POP32(esp, eax);
    eax = eax - edx;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(ebp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    SET_LO16(eax, ZX8(MEM8(eax + esi)));
    MEM16(ebp + -12) = LO16(eax);
    eax = MEM32(esi + 0x138C);
    MEM32(ebp + -16) = eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    edx = edx + edi;
    MEM8(edx) = MEM8(edx) & LO8(eax);
    if (CMP_LE(MEM32(ebp + -16), 0)) goto loc_0044DDC7; /* jle: less or equal (signed <=) */

loc_0044DD54: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12);
    eax = eax & ecx;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0044DD76; /* je: equal / zero */

loc_0044DD6E: ;
    SET_LO8(eax, 1);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(edx) = MEM8(edx) | LO8(eax);

loc_0044DD76: ;
    ebx--;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if (CMP_NE(LO16(ebx), 0xFFFFFFFFu)) goto loc_0044DD97; /* jne: not equal / not zero */

loc_0044DD80: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    (void)0; /* cmp MEM16(ebp + -4), 0x1388 - flags set for next jcc */
    PUSH32(esp, 7);
    POP32(esp, ebx);
    if (CMP_EQ(MEM16(ebp + -4), 0x1388)) goto loc_0044DDC7; /* je: equal / zero */

loc_0044DD8E: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    edx = edx + edi;
    MEM8(edx) = 0;

loc_0044DD97: ;
    if (CMP_NE(MEM16(ebp + 0x10), 0xFFFFFFFFu)) goto loc_0044DDB5; /* jne: not equal / not zero */

loc_0044DD9E: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    SET_LO16(eax, ZX8(MEM8(eax + esi)));
    MEM32(ebp + 0x10) = 7;
    MEM16(ebp + -12) = LO16(eax);

loc_0044DDB5: ;
    MEM32(edi + 0x138C) = MEM32(edi + 0x138C) + 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -8);
    if (CMP_L(eax, MEM32(ebp + -16))) goto loc_0044DD54; /* jl: less (signed <) */

loc_0044DDC7: ;
    eax = MEM32(edi + 0x138C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0044DDD2
 * Original: 0x0044DDD2 - 0x0044DE20 (78 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044DDD2(void)
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

loc_0044DDD2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = 0x40;
    ecx--;
    edi = edi + 8;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esi + 8;

loc_0044DDEF: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 8;
    edi = edi + 8;
    ecx--;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esi + -8) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_0044DDEF; /* jne: not equal / not zero */

loc_0044DE16: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_0044DE20
 * Original: 0x0044DE20 - 0x0044DE96 (118 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044DE20(void)
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

loc_0044DE20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, esi);
    /* fld st(0) */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = ZX16(LO16(edx));
    edi = 0; /* xor self */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi++;
    esi = edx + -1;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    /* fstp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    if (CMP_LE(esi, edi)) goto loc_0044DE5F; /* jle: less or equal (signed <=) */

loc_0044DE46: ;
    ecx = eax + edi * 4;
    fp_push(MEMF(ecx)); /* fld float */
    edi++;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    fp_push(MEMF(eax + edi * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (CMP_L(edi, esi)) goto loc_0044DE46; /* jl: less (signed <) */

loc_0044DE5F: ;
    fp_push(MEMF(eax + edx * 4 + -4)); /* fld float */
    POP32(esp, edi);
    /* fld st(0) */
    POP32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fstp st(1) */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(ebp + -4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = MEM32(ebp + 8);
    if (1 /* jp after test - parity */) { sub_0044DE96(); return; } /* jp: parity */

loc_0044DE89: ;
    /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0x80004005u;
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
 * sub_0044DE9F
 * Original: 0x0044DE9F - 0x0044DFAC (269 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044DE9F(void)
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

loc_0044DE9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x200;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x14), _icall_esp); /* indirect call */
    }

loc_0044DEB0: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = 0x82;
    ecx = ecx - MEM32(ebp + 8);
    edi = esi;
    edi = edi << 2;
    eax = edi + ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044DECB: ;
    esp = esp + 0x10;
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_0044DF4A; /* je: equal / zero */

loc_0044DED4: ;
    edx = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    eax = ebp + 0x14;
    MEMF(edi + ebx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0044DE20(); /* call 0x0044DE20 */

loc_0044DEE8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0044DFA8; /* jne: not equal / not zero */

loc_0044DEF1: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = 0; /* xor self */
    edx++;
    ecx = esi + -1;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebp + -512) = eax;
    if (CMP_LE(ecx, edx)) goto loc_0044DF2A; /* jle: less or equal (signed <=) */

loc_0044DF0C: ;
    eax = 0; /* xor self */
    eax++;

loc_0044DF0F: ;
    eax = eax << 2;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx++;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + eax + -512) = (float)fp_top(); fp_popp(); /* fstp */
    eax = SX16(LO16(edx));
    if (CMP_L(eax, ecx)) goto loc_0044DF0F; /* jl: less (signed <) */

loc_0044DF2A: ;
    (void)0; /* cmp MEM16(ebp + 8), 0 - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + edi + -516) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(MEM16(ebp + 8), 0)) goto loc_0044DF4A; /* jle: less or equal (signed <=) */

loc_0044DF3C: ;
    ecx = ZX16(MEM16(ebp + 8));
    esi = ebp + -512;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0044DF4A: ;
    edx = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    if (CMP_LE(LO16(edx) & LO16(edx), 0)) goto loc_0044DF7A; /* jle: less or equal (signed <=) */

loc_0044DF54: ;
    eax = ebx;
    ecx = ZX16(LO16(edx));

loc_0044DF59: ;
    fp_push(MEMF(eax)); /* fld float */
    eax = eax + 4;
    ecx--;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    if ((ecx != 0)) goto loc_0044DF59; /* jne: not equal / not zero */

loc_0044DF69: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044DF80; /* jp: parity */

loc_0044DF7A: ;
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    goto loc_0044DF88;

loc_0044DF80: ;
    fp_push(1.0); /* fld1 */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(1) */

loc_0044DF88: ;
    if (CMP_LE(LO16(edx) & LO16(edx), 0)) goto loc_0044DF9E; /* jle: less or equal (signed <=) */

loc_0044DF8D: ;
    eax = ebx;
    ecx = ZX16(LO16(edx));

loc_0044DF92: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_0044DF92; /* jne: not equal / not zero */

loc_0044DF9E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    /* fstp st(0) */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x10), _icall_esp); /* indirect call */
    }

loc_0044DFA6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0044DFA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0044DFAC
 * Original: 0x0044DFAC - 0x0044E28F (739 bytes, 255 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044DFAC(void)
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

loc_0044DFAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x420;
    (void)0; /* cmp MEM16(ebp + 0x14), 0xC - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    MEM32(ebp + -4) = 0x3FBC28F6;
    MEM32(ebp + -16) = 0x3E800000;
    if (CMP_AE(MEM16(ebp + 0x14), 0xC)) goto loc_0044DFED; /* jae: above or equal (unsigned >=) */

loc_0044DFCE: ;
    eax = ZX16(MEM16(ebp + 0x14));
    ecx = SX16(LO16(ecx));
    eax = ecx + eax * 4;
    eax = eax << 2;
    ecx = MEM32(eax + 0x57B538);
    eax = MEM32(eax + 0x57B478);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -16) = eax;

loc_0044DFED: ;
    ecx = ZX16(LO16(esi));
    fp_push(1.0); /* fld1 */
    edx = 0; /* xor self */
    MEMF(ebp + -1056) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0044E018; /* jle: less or equal (signed <=) */

loc_0044DFFE: ;
    eax = 0; /* xor self */

loc_0044E000: ;
    edi = MEM32(ebp + 8);
    eax = eax << 2;
    fp_push(MEMF(eax + edi)); /* fld float */
    edx++;
    MEMF(ebp + eax + -1052) = (float)fp_top(); fp_popp(); /* fstp */
    eax = SX16(LO16(edx));
    if (CMP_L(eax, ecx)) goto loc_0044E000; /* jl: less (signed <) */

loc_0044E018: ;
    eax = esi + 1;
    if (CMP_GE(LO16(eax), 0x82)) goto loc_0044E039; /* jge: greater or equal (signed >=) */

loc_0044E021: ;
    ecx = 0x82;
    ecx = ecx - eax;
    edi = SX16(LO16(eax));
    ecx = ZX16(LO16(ecx));
    edi = ebp + edi * 4 + -1056;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0044E039: ;
    eax = ebp + -1056;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x1C), _icall_esp); /* indirect call */
    }

loc_0044E045: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0044E28B; /* jne: not equal / not zero */

loc_0044E04F: ;
    esi = ebp + -1056;
    edi = esi;
    fp_push(MEMF(0x57B468)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 8;
    ecx = 0x3F;
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */

loc_0044E073: ;
    fp_push(MEMF(0x57B468)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* FPU: fyl2x  */
    esi = esi + 8;
    edi = edi + 4;
    ecx--;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_0044E073; /* jne: not equal / not zero */

loc_0044E098: ;
    fp_push(MEMF(0x57B468)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x57B608)); /* fld float */
    PUSH32(esp, 0x41);
    POP32(esp, edx);
    PUSH32(esp, 4);
    MEM32(ebp + 0x14) = 0x41700000;
    ecx = ebp + -1056;
    POP32(esp, edi);

loc_0044E0C6: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044E0D3; /* jp: parity */

loc_0044E0CF: ;
    /* fstp st(0) */
    fp_push(MEMF(ecx)); /* fld float */

loc_0044E0D3: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044E0E4; /* jne: not equal / not zero */

loc_0044E0DF: ;
    eax = MEM32(ecx);
    MEM32(ebp + 0x14) = eax;

loc_0044E0E4: ;
    ecx = ecx + edi;
    edx--;
    if ((edx != 0)) goto loc_0044E0C6; /* jne: not equal / not zero */

loc_0044E0E9: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    /* FPU: fsubr st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (1 /* jp after test - parity */) goto loc_0044E111; /* jp: parity */

loc_0044E107: ;
    eax = 0x80004005u;
    goto loc_0044E28B;

loc_0044E111: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    /* FPU: fdivr qword ptr [0x648d08] */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(0x648D60)); /* fld double */
    /* FPU: fldln2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    esi = ebp + -1056;
    ecx = 0x41;

loc_0044E14C: ;
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fyl2x  */
    /* fld st(0) */
    /* FPU: frndint  */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: f2xm1  */
    esi = esi + 4;
    ecx--;
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* FPU: fscale  */
    /* fstp st(1) */
    MEMF(esi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_0044E14C; /* jne: not equal / not zero */

loc_0044E17A: ;
    PUSH32(esp, 0x41);
    eax = 0; /* xor self */
    POP32(esp, ecx);

loc_0044E17F: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + eax + -536) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + edi;
    ecx--;
    if ((ecx != 0)) goto loc_0044E17F; /* jne: not equal / not zero */

loc_0044E195: ;
    esi = ebp + -1056;
    ecx = 0x41;

loc_0044E1A0: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x57B464)); /* fld float */
    /* FPU: fyl2x  */
    /* fld st(0) */
    /* FPU: frndint  */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: f2xm1  */
    esi = esi + 4;
    ecx--;
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* FPU: fscale  */
    /* fstp st(1) */
    MEMF(esi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_0044E1A0; /* jne: not equal / not zero */

loc_0044E1C8: ;
    PUSH32(esp, 0x40);
    eax = ebp + -536;
    ecx = ebp + -24;
    POP32(esp, edx);

loc_0044E1D4: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    eax = eax + edi;
    ecx = ecx - edi;
    edx--;
    if ((edx != 0)) goto loc_0044E1D4; /* jne: not equal / not zero */

loc_0044E1DF: ;
    eax = ebp + -536;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x1C), _icall_esp); /* indirect call */
    }

loc_0044E1EB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0044E28B; /* jne: not equal / not zero */

loc_0044E1F5: ;
    PUSH32(esp, 0x3F);
    eax = ebp + -524;
    POP32(esp, ecx);

loc_0044E1FE: ;
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 8;
    ecx--;
    if ((ecx != 0)) goto loc_0044E1FE; /* jne: not equal / not zero */

loc_0044E210: ;
    fp_push(0.0); /* fldz */
    eax = ebp + -536;
    MEMF(ebp + -536) = (float)fp_top(); fp_popp(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    fp_push(0.0); /* fldz */
    PUSH32(esp, eax);
    MEMF(ebp + -532) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x20), _icall_esp); /* indirect call */
    }

loc_0044E22C: ;
    eax = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0044E28B; /* jne: not equal / not zero */

loc_0044E234: ;
    eax = ebp + -536;
    MEM32(ebp + 0x14) = eax;
    eax = ebp + -1056;
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = eax;
    ecx = 0x41;
    esi = MEM32(ebp + -12);
    edi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x14);

loc_0044E255: ;
    fp_push(MEMF(ebx)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebx)); /* fld float */
    /* FPU: fsin  */
    ebx = ebx + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 4;
    edi = edi + 8;
    ecx--;
    MEMF(edi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + -8) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_0044E255; /* jne: not equal / not zero */

loc_0044E273: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0044DE9F(); /* call 0x0044DE9F */

loc_0044E287: ;
    esp = esp + 0x10;
    POP32(esp, ebx);

loc_0044E28B: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0044E28F
 * Original: 0x0044E28F - 0x0044E2B9 (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044E28F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0044E28F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xBA4;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x4C), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0x4C), ebx)) { sub_0044E2B9(); return; } /* jne: not equal / not zero */

loc_0044E2A1: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044E2AF: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0044EAAD(); return; /* tail jmp 0x0044EAAD */

}

/**
 * sub_0044EAB1
 * Original: 0x0044EAB1 - 0x0044EBDE (301 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044EAB1(void)
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

loc_0044EAB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    esi = ZX16(MEM16(edi));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_LE(esi, edx)) goto loc_0044EAE3; /* jle: less or equal (signed <=) */

loc_0044EACD: ;
    eax = 0; /* xor self */

loc_0044EACF: ;
    if (CMP_EQ(MEM32(edi + eax * 4 + 8), 0)) goto loc_0044EADB; /* je: equal / zero */

loc_0044EAD6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ecx = edx;

loc_0044EADB: ;
    edx++;
    eax = SX16(LO16(edx));
    if (CMP_L(eax, esi)) goto loc_0044EACF; /* jl: less (signed <) */

loc_0044EAE3: ;
    (void)0; /* cmp MEM32(ebx), 0x1F40 - flags set for next jcc */
    eax = ecx;
    if (CMP_NE(MEM32(ebx), 0x1F40)) goto loc_0044EBD9; /* jne: not equal / not zero */

loc_0044EAF1: ;
    edx = MEM32(ebx + 4);
    if (CMP_NE(edx, 0x3E8)) goto loc_0044EB0B; /* jne: not equal / not zero */

loc_0044EAFC: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) - 1);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & ecx;

loc_0044EB0B: ;
    if (CMP_EQ(edx, 0x1F4)) goto loc_0044EB1F; /* je: equal / zero */

loc_0044EB13: ;
    if (CMP_NE(edx, 0x271)) goto loc_0044EBD9; /* jne: not equal / not zero */

loc_0044EB1F: ;
    if (CMP_NE(MEM16(ebp + -4), 1)) goto loc_0044EB2D; /* jne: not equal / not zero */

loc_0044EB26: ;
    eax = ecx;
    goto loc_0044EBD9;

loc_0044EB2D: ;
    esi = MEM32(ebp + 0xC);
    eax = SX16(LO16(ecx));
    eax = MEM32(esi + eax * 4);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = ecx;
    fp_push(MEMF(eax + 0x198C)); /* fld float */
    eax = ZX16(MEM16(edi));
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ebx = 0x7FFF;
    MEM32(ebp + 0x10) = ecx;
    if (CMP_LE(eax, ecx)) goto loc_0044EBB4; /* jle: less or equal (signed <=) */

loc_0044EB53: ;
    if (CMP_EQ(MEM32(edi + ecx * 4 + 8), 0)) goto loc_0044EBA6; /* je: equal / zero */

loc_0044EB5A: ;
    eax = MEM32(esi + ecx * 4);
    edx = eax + 0x198C;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [edx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044EB76; /* jp: parity */

loc_0044EB6C: ;
    eax = MEM32(ebp + 0x10);
    /* fstp st(0) */
    fp_push(MEMF(edx)); /* fld float */
    MEM32(ebp + -8) = eax;

loc_0044EB76: ;
    fp_push(MEMF(edx)); /* fld float */
    edx = MEM32(ebp + 8);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edx + 0x472c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044EBA6; /* jne: not equal / not zero */

loc_0044EB88: ;
    ecx = ZX16(MEM16(edi + ecx * 2 + 2));
    eax = MEM32(edx + 0x7154);
    eax = eax + ecx * 8;
    ecx = SX16(LO16(ebx));
    if (CMP_GE(MEM32(eax), ecx)) goto loc_0044EBA6; /* jge: greater or equal (signed >=) */

loc_0044EB9D: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO16(ebx, MEM16(eax));
    MEM32(ebp + -4) = ecx;

loc_0044EBA6: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    eax = ZX16(MEM16(edi));
    if (CMP_L(ecx, eax)) goto loc_0044EB53; /* jl: less (signed <) */

loc_0044EBB4: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    /* fstp st(0) */
    eax = MEM32(esi + eax * 4);
    fp_push(MEMF(eax + 0x198C)); /* fld float */
    eax = MEM32(ebp + 8);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [eax + 0x472c] */
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 0x41 - flags set for next jcc */
    eax = MEM32(ebp + -8);
    if (1 /* jnp after test - parity */) goto loc_0044EBD9; /* jnp: not parity */

loc_0044EBD6: ;
    eax = MEM32(ebp + -4);

loc_0044EBD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0044EBDE
 * Original: 0x0044EBDE - 0x0044EC3D (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044EBDE(void)
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

loc_0044EBDE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = ZX16(MEM16(ebp + 0xC));
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    MEM32(ecx + edx * 4 + 8) = 1;
    if (CMP_NE(MEM32(eax), 0x1F40)) goto loc_0044EC30; /* jne: not equal / not zero */

loc_0044EBFB: ;
    if (CMP_NE(MEM32(eax + 4), 0x3E8)) goto loc_0044EC30; /* jne: not equal / not zero */

loc_0044EC04: ;
    if (CMP_NE(MEM16(ebp + 0xC), 0)) goto loc_0044EC30; /* jne: not equal / not zero */

loc_0044EC0B: ;
    if (CMP_NE(MEM16(ecx), 2)) goto loc_0044EC30; /* jne: not equal / not zero */

loc_0044EC11: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    edi = MEM32(edi);
    fp_push(MEMF(edi + 0x198C)); /* fld float */
    POP32(esp, edi);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [eax + 0x472c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044EC30; /* jne: not equal / not zero */

loc_0044EC2B: ;
    MEM16(ecx) = 1;

loc_0044EC30: ;
    ecx = ZX16(MEM16(ecx));
    eax = 0; /* xor self */
    ecx--;
    if (CMP_EQ(edx, ecx)) goto loc_0044EC3B; /* je: equal / zero */

loc_0044EC3A: ;
    eax++;

loc_0044EC3B: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044EC3D
 * Original: 0x0044EC3D - 0x0044F1FE (1473 bytes, 434 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044EC3D(void)
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

loc_0044EC3D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x7154);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, edi);
    eax = ebx + ebx * 4;
    eax = esi + eax * 4;
    MEM32(ebp + -20) = eax;
    edi = eax + 0x46D0;
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    if (CMP_NE(MEM32(esi), 0x1F40)) goto loc_0044F1F9; /* jne: not equal / not zero */

loc_0044EC76: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, 0x1F4)) goto loc_0044EC8B; /* je: equal / zero */

loc_0044EC80: ;
    if (CMP_NE(eax, 0x271)) goto loc_0044F1F9; /* jne: not equal / not zero */

loc_0044EC8B: ;
    eax = MEM32(esi + 0x5970);
    ecx = ebx;
    ecx = ecx << 2;
    eax = MEM32(ecx + eax);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_0044F1F9; /* jl: less (signed <) */

loc_0044ECA7: ;
    if (CMP_LE(eax, 1)) goto loc_0044F1F9; /* jle: less or equal (signed <=) */

loc_0044ECB0: ;
    if (CMP_G(eax, 3)) goto loc_0044F1F9; /* jg: greater (signed >) */

loc_0044ECB9: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(esi + 0x4610);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = MEM32(edx + eax + 4);
    edi = ZX16(MEM16(esi + 0xE));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edx = ZX16(MEM16(esi + 0x14));
    eax = eax + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = MEM32(esi + 0x5930);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x138);
    edi = edx + eax;
    edx = edi + 0x184;
    MEM32(ebp + -40) = edi;
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044ED02; /* jne: not equal / not zero */

loc_0044ECFD: ;
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    goto loc_0044ED04;

loc_0044ED02: ;
    fp_push(MEMF(edx)); /* fld float */

loc_0044ED04: ;
    (void)0; /* cmp MEM32(esi + 4), 0x271 - flags set for next jcc */
    eax = esi + 0x5920;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x591C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(MEM32(esi + 4), 0x271)) goto loc_0044ED4C; /* jne: not equal / not zero */

loc_0044ED22: ;
    (void)0; /* cmp MEM32(ebp + 8), 2 - flags set for next jcc */
    MEM32(ebp + -12) = 0x57B640;
    if (CMP_EQ(MEM32(ebp + 8), 2)) goto loc_0044ED36; /* je: equal / zero */

loc_0044ED2F: ;
    MEM32(ebp + -12) = 0x57B6D0;

loc_0044ED36: ;
    fp_push(MEMF(0x648CE4)); /* fld float */
    MEM32(ebp + -32) = 0x41400000;
    MEM32(ebp + -24) = 1;
    goto loc_0044ED71;

loc_0044ED4C: ;
    (void)0; /* cmp MEM32(ebp + 8), 2 - flags set for next jcc */
    MEM32(ebp + -12) = 0x57B760;
    if (CMP_EQ(MEM32(ebp + 8), 2)) goto loc_0044ED60; /* je: equal / zero */

loc_0044ED59: ;
    MEM32(ebp + -12) = 0x57B7F0;

loc_0044ED60: ;
    fp_push(MEMF(0x648CDC)); /* fld float */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    MEM32(ebp + -32) = 0x41200000;

loc_0044ED71: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044EDDB; /* jp: parity */

loc_0044ED81: ;
    (void)0; /* cmp MEM32(ebp + 8), 2 - flags set for next jcc */
    /* fstp st(0) */
    eax = ebx + ebx * 4 + 0x11B2;
    ecx = esi + eax * 4;
    if (CMP_NE(MEM32(ebp + 8), 2)) goto loc_0044EDAC; /* jne: not equal / not zero */

loc_0044ED93: ;
    edx = MEM32(ebp + -20);
    PUSH32(esp, 3);
    POP32(esp, eax);
    edx = edx + 0x46CA;
    MEM16(ecx) = 1;
    MEM16(edx) = LO16(eax);
    MEM32(ebp + 8) = eax;
    goto loc_0044EDCC;

loc_0044EDAC: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, 5);
    POP32(esp, edi);
    edx = eax + 0x46CA;
    MEM16(ecx) = 2;
    MEM16(edx) = 3;
    MEM16(eax + 0x46CC) = LO16(edi);
    MEM32(ebp + 8) = edi;

loc_0044EDCC: ;
    MEM32(esi + 0x472C) = 0x40C00000;
    goto loc_0044F0DE;

loc_0044EDDB: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d40] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044EE7A; /* jp: parity */

loc_0044EDEF: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -12);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edx = edx - eax;

loc_0044EDFF: ;
    if (CMP_EQ(MEM16(edx + eax), 0)) goto loc_0044EE19; /* je: equal / zero */

loc_0044EE06: ;
    edi = MEM32(esi + 0x470C);
    edi = MEM32(ecx + edi);
    if (CMP_B(edi, MEM32(eax))) goto loc_0044EE25; /* jb: below (unsigned <) */

loc_0044EE13: ;
    edi = MEM32(ebp + -4);
    MEM32(ebp + 8) = edi;

loc_0044EE19: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = eax + 8;
    if (CMP_L(MEM32(ebp + -4), 0x12)) goto loc_0044EDFF; /* jl: less (signed <) */

loc_0044EE25: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    if (CMP_GE(MEM32(ebp + 8), eax)) goto loc_0044EE30; /* jge: greater or equal (signed >=) */

loc_0044EE2D: ;
    MEM32(ebp + 8) = eax;

loc_0044EE30: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    edi = MEM32(ebp + -20);
    eax = eax + ecx * 8;
    SET_LO16(edx, MEM16(eax));
    ecx = ebx + ebx * 4 + 0x11B2;
    ecx = esi + ecx * 4;
    MEM16(ecx) = LO16(edx);
    SET_LO16(ebx, MEM16(eax + 2));
    edx = edi + 0x46CA;
    MEM16(edx) = LO16(ebx);
    SET_LO16(ebx, MEM16(eax + 4));
    MEM16(edi + 0x46CC) = LO16(ebx);
    SET_LO16(eax, MEM16(eax + 6));
    MEM16(edi + 0x46CE) = LO16(eax);
    MEMF(esi + 0x472C) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0044F0DE;

loc_0044EE7A: ;
    eax = MEM32(esi + 0x470C);
    /* fstp st(0) */
    eax = eax + ecx;
    edx = MEM32(eax);
    MEM32(ebp + -4) = edx;
    edx = MEM32(esi + 0x4708);
    edi = MEM32(ecx + edx);
    edx = MEM32(ebp + -8);
    if (CMP_B(edi, MEM32(edx + 0x68))) goto loc_0044EE9F; /* jb: below (unsigned <) */

loc_0044EE9A: ;
    MEM32(ebp + -4) = edi;
    goto loc_0044EF06;

loc_0044EE9F: ;
    if (CMP_B(edi, MEM32(edx + 0x50))) goto loc_0044EEC8; /* jb: below (unsigned <) */

loc_0044EEA4: ;
    eax = MEM32(eax);
    ecx = edi;
    ecx = ecx - eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0044EEBA; /* jge: greater or equal (signed >=) */

loc_0044EEB4: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0044EEBA: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    goto loc_0044EEEF;

loc_0044EEC8: ;
    if (CMP_B(edi, MEM32(edx + 0x38))) goto loc_0044EF06; /* jb: below (unsigned <) */

loc_0044EECD: ;
    eax = MEM32(eax);
    ecx = edi;
    ecx = ecx - eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0044EEE3; /* jge: greater or equal (signed >=) */

loc_0044EEDD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0044EEE3: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */

loc_0044EEEF: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0044EEF9; /* jge: greater or equal (signed >=) */

loc_0044EEF3: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0044EEF9: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044EF00: ;
    ecx = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;

loc_0044EF06: ;
    eax = MEM32(esi + 0x5974);
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    if (CMP_EQ(eax, 2)) goto loc_0044EF1E; /* je: equal / zero */

loc_0044EF15: ;
    if (CMP_NE(eax, 3)) goto loc_0044EFE2; /* jne: not equal / not zero */

loc_0044EF1E: ;
    eax = MEM32(esi + 0x5960);
    fp_push(MEMF(esi + 0x595C)); /* fld float */
    edx = eax + ecx;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044EF3E; /* jne: not equal / not zero */

loc_0044EF36: ;
    fp_push(MEMF(esi + 0x595C)); /* fld float */
    goto loc_0044EF40;

loc_0044EF3E: ;
    fp_push(MEMF(edx)); /* fld float */

loc_0044EF40: ;
    fp_push(MEMF(esi + 0x595C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(1) */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x575b80] */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0044EFD2; /* je: equal / zero */

loc_0044EF5D: ;
    fp_push(MEMF(esi + 0x595C)); /* fld float */
    edx = MEM32(ebp + -40);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edx + 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044EF78; /* jne: not equal / not zero */

loc_0044EF70: ;
    fp_push(MEMF(esi + 0x595C)); /* fld float */
    goto loc_0044EF7B;

loc_0044EF78: ;
    fp_push(MEMF(edx + 4)); /* fld float */

loc_0044EF7B: ;
    fp_push(MEMF(esi + 0x595C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(1) */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x575b80] */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0044EFD2; /* je: equal / zero */

loc_0044EF99: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edx + 0x13c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044EFAE; /* jne: not equal / not zero */

loc_0044EFA9: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    goto loc_0044EFB4;

loc_0044EFAE: ;
    fp_push(MEMF(edx + 0x13C)); /* fld float */

loc_0044EFB4: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(1) */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x575b80] */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044EFE2; /* jne: not equal / not zero */

loc_0044EFD2: ;
    (void)0; /* cmp MEM32(ebp + -24), 0 - flags set for next jcc */
    MEM32(ebp + -28) = 1;
    if (CMP_NE(MEM32(ebp + -24), 0)) goto loc_0044EFE2; /* jne: not equal / not zero */

loc_0044EFDF: ;
    MEM32(ebp + -4) = edi;

loc_0044EFE2: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -12);
    edi = 0; /* xor self */
    MEM32(ebp + 8) = edi;
    edx = edx - eax;

loc_0044EFEF: ;
    if (CMP_EQ(MEM16(eax + edx), 0)) goto loc_0044F000; /* je: equal / zero */

loc_0044EFF6: ;
    ecx = MEM32(ebp + -4);
    if (CMP_L(ecx, MEM32(eax))) goto loc_0044F009; /* jl: less (signed <) */

loc_0044EFFD: ;
    MEM32(ebp + 8) = edi;

loc_0044F000: ;
    edi++;
    eax = eax + 8;
    if (CMP_L(edi, 0x12)) goto loc_0044EFEF; /* jl: less (signed <) */

loc_0044F009: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    if (CMP_GE(MEM32(ebp + 8), eax)) goto loc_0044F014; /* jge: greater or equal (signed >=) */

loc_0044F011: ;
    MEM32(ebp + 8) = eax;

loc_0044F014: ;
    if (CMP_NE(MEM32(ebp + -28), 1)) goto loc_0044F096; /* jne: not equal / not zero */

loc_0044F01A: ;
    if (CMP_EQ(MEM32(ebp + -24), 0)) goto loc_0044F096; /* je: equal / zero */

loc_0044F020: ;
    (void)0; /* cmp MEM32(ebp + 8), 0xA - flags set for next jcc */
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -8);
    if (CMP_GE(MEM32(ebp + 8), 0xA)) goto loc_0044F043; /* jge: greater or equal (signed >=) */

loc_0044F02C: ;
    edx = MEM32(esi + 0x4710);
    edi = MEM32(ecx + 0x50);
    if (CMP_AE(edi, MEM32(eax + edx))) goto loc_0044F043; /* jae: above or equal (unsigned >=) */

loc_0044F03A: ;
    MEM32(ebp + 8) = 0xA;
    goto loc_0044F096;

loc_0044F043: ;
    if (CMP_GE(MEM32(ebp + 8), 8)) goto loc_0044F060; /* jge: greater or equal (signed >=) */

loc_0044F049: ;
    edx = MEM32(esi + 0x4710);
    edi = MEM32(ecx + 0x40);
    if (CMP_AE(edi, MEM32(eax + edx))) goto loc_0044F060; /* jae: above or equal (unsigned >=) */

loc_0044F057: ;
    MEM32(ebp + 8) = 8;
    goto loc_0044F096;

loc_0044F060: ;
    if (CMP_GE(MEM32(ebp + 8), 7)) goto loc_0044F07D; /* jge: greater or equal (signed >=) */

loc_0044F066: ;
    edx = MEM32(esi + 0x4710);
    edi = MEM32(ecx + 0x38);
    if (CMP_AE(edi, MEM32(eax + edx))) goto loc_0044F07D; /* jae: above or equal (unsigned >=) */

loc_0044F074: ;
    MEM32(ebp + 8) = 7;
    goto loc_0044F096;

loc_0044F07D: ;
    PUSH32(esp, 5);
    POP32(esp, edi);
    if (CMP_GE(MEM32(ebp + 8), edi)) goto loc_0044F096; /* jge: greater or equal (signed >=) */

loc_0044F085: ;
    edx = MEM32(esi + 0x4710);
    ecx = MEM32(ecx + 0x28);
    if (CMP_AE(ecx, MEM32(eax + edx))) goto loc_0044F096; /* jae: above or equal (unsigned >=) */

loc_0044F093: ;
    MEM32(ebp + 8) = edi;

loc_0044F096: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    edi = MEM32(ebp + -20);
    eax = eax + ecx * 8;
    SET_LO16(edx, MEM16(eax));
    ecx = ebx + ebx * 4 + 0x11B2;
    ecx = esi + ecx * 4;
    MEM16(ecx) = LO16(edx);
    SET_LO16(ebx, MEM16(eax + 2));
    edx = edi + 0x46CA;
    MEM16(edx) = LO16(ebx);
    SET_LO16(ebx, MEM16(eax + 4));
    MEM16(edi + 0x46CC) = LO16(ebx);
    SET_LO16(eax, MEM16(eax + 6));
    MEM16(edi + 0x46CE) = LO16(eax);
    eax = MEM32(ebp + -32);
    MEM32(esi + 0x472C) = eax;

loc_0044F0DE: ;
    if (CMP_NE(MEM32(esi + 0x4730), 1)) goto loc_0044F1AC; /* jne: not equal / not zero */

loc_0044F0EB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    (void)0; /* cmp MEM16(ecx), 0 - flags set for next jcc */
    eax = 0x270F270F;
    edi = ebp + -40;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    if (CMP_BE(MEM16(ecx), 0)) goto loc_0044F146; /* jbe: below or equal (unsigned <=) */

loc_0044F100: ;
    edi = MEM32(ebp + -16);
    eax = MEM32(esi + 0x4710);
    eax = MEM32(edi + eax);
    edi = ZX16(MEM16(ecx));
    MEM32(ebp + 8) = edx;
    MEM32(ebp + -32) = edi;

loc_0044F115: ;
    edi = MEM32(ebp + 8);
    edi = ZX16(MEM16(edi));
    ebx = MEM32(ebp + -8);
    if (CMP_A(MEM32(ebx + edi * 8), eax)) goto loc_0044F135; /* ja: above (unsigned >) */

loc_0044F123: ;
    ebx = ZX16(MEM16(ebp + -4));
    edi = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(edi));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM16(ebp + ebx * 2 + -40) = LO16(edi);

loc_0044F135: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 2;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    if ((MEM32(ebp + -32) != 0)) goto loc_0044F115; /* jne: not equal / not zero */

loc_0044F13E: ;
    eax = MEM32(ebp + -4);
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_0044F187; /* jne: not equal / not zero */

loc_0044F146: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(ebp + -12);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = edi - eax;
    MEM32(ebp + -40) = edi;

loc_0044F159: ;
    if (CMP_EQ(MEM16(eax + edi), 0)) goto loc_0044F179; /* je: equal / zero */

loc_0044F160: ;
    edi = MEM32(esi + 0x4710);
    ebx = MEM32(ebp + -16);
    edi = MEM32(ebx + edi);
    if (CMP_B(edi, MEM32(eax))) goto loc_0044F1ED; /* jb: below (unsigned <) */

loc_0044F170: ;
    edi = MEM32(ebp + -4);
    MEM32(ebp + 8) = edi;
    edi = MEM32(ebp + -40);

loc_0044F179: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = eax + 8;
    if (CMP_L(MEM32(ebp + -4), 0x12)) goto loc_0044F159; /* jl: less (signed <) */

loc_0044F185: ;
    goto loc_0044F1ED;

loc_0044F187: ;
    MEM16(ecx) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + -40));
    SET_LO16(ecx, MEM16(ebp + -38));
    MEM16(edx) = LO16(eax);
    eax = MEM32(ebp + -20);
    MEM16(eax + 0x46CC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -36));
    MEM16(eax + 0x46CE) = LO16(ecx);
    goto loc_0044F1F9;

loc_0044F1AC: ;
    eax = MEM32(esi + 0x4710);
    esi = MEM32(ebp + -16);
    esi = MEM32(esi + eax);
    eax = MEM32(ebp + -8);
    edi = MEM32(ebp + 8);
    if (CMP_BE(MEM32(eax + edi * 8), esi)) goto loc_0044F1F9; /* jbe: below or equal (unsigned <=) */

loc_0044F1C3: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = edi - eax;

loc_0044F1D0: ;
    if (CMP_EQ(MEM16(eax + edi), 0)) goto loc_0044F1E1; /* je: equal / zero */

loc_0044F1D7: ;
    if (CMP_B(esi, MEM32(eax))) goto loc_0044F1ED; /* jb: below (unsigned <) */

loc_0044F1DB: ;
    ebx = MEM32(ebp + -4);
    MEM32(ebp + 8) = ebx;

loc_0044F1E1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = eax + 8;
    if (CMP_L(MEM32(ebp + -4), 0x12)) goto loc_0044F1D0; /* jl: less (signed <) */

loc_0044F1ED: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ecx) = 1;
    MEM16(edx) = LO16(eax);

loc_0044F1F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0044F1FE
 * Original: 0x0044F1FE - 0x0044F3C2 (452 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044F1FE(void)
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

loc_0044F1FE: ;
    PUSH32(esp, ebp);
    eax = 0x238C;
    ebp = esp + -116;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0044F20D: ;
    fp_push(0.0); /* fldz */
    MEMF(ebp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    fp_push(0.0); /* fldz */
    esi = MEM32(ebp + 0x7C);
    MEMF(ebp + 0x64) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(ecx, MEM8(esi + 0x3FA6));
    fp_push(0.0); /* fldz */
    edx = 0; /* xor self */
    edx++;
    MEMF(ebp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    fp_push(0.0); /* fldz */
    edx = edx << LO8(ecx);
    edi = 0; /* xor self */
    MEMF(ebp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 1);
    fp_push(0.0); /* fldz */
    ecx = esi + 0x3FA4;
    edx--;
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edx);
    fp_push(1.0); /* fld1 */
    PUSH32(esp, edi);
    eax = esi + 0x1998;
    MEMF(ebp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebp + 0x2C) = edi;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0x34) = edi;
    PUSH32(esp, 0); sub_0044DC2D(); /* call 0x0044DC2D */

loc_0044F25F: ;
    esp = esp + 0x14;
    if (CMP_NE(MEM16(esi + 0x1468), LO16(edi))) goto loc_0044F28D; /* jne: not equal / not zero */

loc_0044F26B: ;
    ecx = esi + 0x1474;
    edx = 0; /* xor self */
    if (CMP_BE(MEM16(ecx), LO16(edi))) goto loc_0044F28D; /* jbe: below or equal (unsigned <=) */

loc_0044F278: ;
    eax = 0; /* xor self */

loc_0044F27A: ;
    edx++;
    MEM16(esi + eax * 2 + 0x143C) = LO16(edi);
    ebx = ZX16(MEM16(ecx));
    eax = SX16(LO16(edx));
    if (CMP_L(eax, ebx)) goto loc_0044F27A; /* jl: less (signed <) */

loc_0044F28D: ;
    eax = MEM32(esi + 0xC);
    ecx = ZX16(MEM16(esi + 0x1474));
    eax = esi + eax * 4 + 0x4BC;
    MEM32(ebp + 0x6C) = eax;
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(ebp + -16) = LO16(eax);
    eax = ZX16(MEM16(esi));
    eax = esi + eax * 4 + 0x3564;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 8);
    POP32(esp, eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(esi + 0x10);
    ecx = edi;
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(esi + 0x14);
    ecx = ecx - eax;
    MEM32(ebp + 0x70) = ecx;
    fp_push((double)SMEM32(ebp + 0x70)); /* fild */
    MEM32(ebp + 0x58) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(ebp + 0x58)); /* fild */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648F08)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044F2EB: ;
    MEM32(ebp + 0x70) = eax;
    fp_push((double)SMEM32(ebp + 0x70)); /* fild */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x649E08)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044F301: ;
    MEM32(ebp + 0x70) = eax;
    fp_push((double)SMEM32(ebp + 0x70)); /* fild */
    edi--;
    MEM32(ebp + 0x70) = edi;
    MEMF(ebp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ebp + 0x70)); /* fild */
    MEMF(ebp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044F319: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edi = 0; /* xor self */
    SET_LO16(edi, LO16(eax));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = edi << 5;
    MEM32(ebp + -32) = edi;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044F335: ;
    fp_push(MEMF(ebp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ebx = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044F342: ;
    eax = eax << 1;
    eax = eax - ebx;
    MEM32(ebp + 0x70) = eax;
    fp_push((double)SMEM32(ebp + 0x70)); /* fild */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044F357: ;
    MEM32(ebp + 0x70) = eax;
    fp_push((double)SMEM32(ebp + 0x70)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044F36A: ;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, LO16(edi));
    SET_LO16(eax, LO16(eax) >> 1);
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    eax--;
    (void)0; /* cmp MEM16(esi + 0x1468), 1 - flags set for next jcc */
    MEM32(ebp + 0x30) = ecx;
    MEM32(ebp + 0x18) = eax;
    if (CMP_NE(MEM16(esi + 0x1468), 1)) { sub_0044F3C2(); return; } /* jne: not equal / not zero */

loc_0044F38A: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044F392: ;
    PUSH32(esp, 1);
    MEM32(ebp + -28) = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x10));
    SET_LO16(eax, LO16(eax) - 1);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x14));
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = esi + 0x1998;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044DC2D(); /* call 0x0044DC2D */

loc_0044F3B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00446964(); /* call 0x00446964 */

loc_0044F3BD: ;
    esp = esp + 0x18;
    g_seh_ebp = ebp; sub_0044F3C8(); return; /* tail jmp 0x0044F3C8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044FD87
 * Original: 0x0044FD87 - 0x0044FE94 (269 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044FD87(void)
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

loc_0044FD87: ;
    PUSH32(esp, ebp);
    ebp = esp + -80;
    esp = esp - 0xC4;
    fp_push(MEMF(ebp + 0x74)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x7C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = edi + 0x80;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x5C));
    MEM32(ebp + 0x70) = eax;
    eax = ebp + 0xC;
    ebx = edi + 0x40;
    PUSH32(esp, eax);
    MEM32(ebp + 0x4C) = ebx;
    PUSH32(esp, 0); sub_00443EAA(); /* call 0x00443EAA */

loc_0044FDBE: ;
    fp_push(MEMF(ebp + 0x78)); /* fld float */
    esp = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x5C));
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443EAA(); /* call 0x00443EAA */

loc_0044FDD5: ;
    esp = esp + 0x10;
    if (CMP_EQ(MEM32(ebp + 0x6C), 0)) goto loc_0044FE20; /* je: equal / zero */

loc_0044FDDE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x60));
    edi = MEM32(ebp + 0x58);
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_0044FDF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    eax = ebp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_0044FE06: ;
    esp = esp + 0x38;
    if (TEST_NZ(eax, eax)) goto loc_0044FE8C; /* jne: not equal / not zero */

loc_0044FE0D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    eax = ebp + -52;
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    goto loc_0044FE82;

loc_0044FE20: ;
    PUSH32(esp, MEM32(ebp + 0x68));
    ebx = MEM32(ebp + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044FE2C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_0044FE3F: ;
    esp = esp + 0x28;
    if (CMP_G(LO16(esi), 0x10)) goto loc_0044FE58; /* jg: greater (signed >) */

loc_0044FE48: ;
    PUSH32(esp, esi);
    eax = ebp + -116;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x4C));
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044FE55: ;
    esp = esp + 0xC;

loc_0044FE58: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    eax = ebp + -116;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_0044FE6B: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_0044FE8C; /* jne: not equal / not zero */

loc_0044FE72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    eax = ebp + -52;
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);

loc_0044FE82: ;
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_0044FE87: ;
    esp = esp + 0x20;
    eax = 0; /* xor self */

loc_0044FE8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x50;
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
 * sub_0044FE94
 * Original: 0x0044FE94 - 0x0044FF5A (198 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044FE94(void)
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

loc_0044FE94: ;
    PUSH32(esp, ebp);
    ebp = esp + -88;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x7C);
    eax = ebp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044FEAF: ;
    ebx = MEM32(ebp + 0x64);
    esi = MEM32(ebp + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_0044FEC7: ;
    esp = esp + 0x20;
    if (TEST_NZ(eax, eax)) goto loc_0044FF52; /* jne: not equal / not zero */

loc_0044FED2: ;
    eax = MEM32(ebx);
    fp_push(MEMF(ebp + 0x74)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x68));
    MEM32(esi) = eax;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443EAA(); /* call 0x00443EAA */

loc_0044FEEA: ;
    eax = ebp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044FEF4: ;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x54) = eax;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_0044FF10: ;
    fp_push(MEMF(ebp + 0x78)); /* fld float */
    eax = MEM32(ebp + 0x54);
    esp = esp + 0x38;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x68));
    MEM32(esi) = eax;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443EAA(); /* call 0x00443EAA */

loc_0044FF2C: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x54) = eax;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_0044FF44: ;
    esp = esp + 0x28;
    if (TEST_NZ(eax, eax)) goto loc_0044FF52; /* jne: not equal / not zero */

loc_0044FF4B: ;
    eax = MEM32(ebp + 0x54);
    MEM32(esi) = eax;
    eax = 0; /* xor self */

loc_0044FF52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x58;
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
 * sub_0044FF5A
 * Original: 0x0044FF5A - 0x00450014 (186 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044FF5A(void)
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

loc_0044FF5A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = SX16(LO16(esi));
    eax = eax << 2;
    MEM32(ebp + 0x20) = edi;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) - eax;
    eax = ebx + esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044FF87: ;
    fp_push(1.0); /* fld1 */
    PUSH32(esp, 0);
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_0044FF9F: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    esp = esp + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443EAA(); /* call 0x00443EAA */

loc_0044FFB6: ;
    eax = ebp + -64;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044FFC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_0044FFD1: ;
    esp = esp + 0x30;
    if (TEST_NZ(eax, eax)) goto loc_0045000F; /* jne: not equal / not zero */

loc_0044FFD8: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443EAA(); /* call 0x00443EAA */

loc_0044FFEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044FFF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_0045000A: ;
    esp = esp + 0x38;
    eax = 0; /* xor self */

loc_0045000F: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00450014
 * Original: 0x00450014 - 0x004501EF (475 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00450014(void)
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

loc_00450014: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0xAC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(esi + 0x3C8);
    MEM32(ebp + 0x5C) = eax;
    eax = MEM32(esi + 0x3C0);
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(esi + 0x3C4);
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(esi + 0x3BC);
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    MEM32(ebp + 0x6C) = eax;
    eax = MEM32(esi + 0x28);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi));
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(esi + 0x1474));
    MEM32(ebp + 0x50) = eax;
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(ebp + 0x58) = LO16(eax);
    eax = ebp + -56;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + 0x60) = ebx;
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00450078: ;
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_BE(LO16(ebx) & LO16(ebx), 0)) goto loc_0045010D; /* jbe: below or equal (unsigned <=) */

loc_00450083: ;
    eax = ZX16(LO16(ebx));
    ecx = eax + eax;
    MEM32(ebp + 0x7C) = ecx;
    ebx = esi + 0x123C;
    MEM32(ebp + 0x64) = eax;
    fp_push((double)SMEM32(ebp + 0x7C)); /* fild */
    MEM32(ebp + 0x7C) = 1;
    MEMF(ebp + 0x54) = (float)fp_top(); fp_popp(); /* fstp */

loc_004500A2: ;
    fp_push((double)SMEM32(ebp + 0x7C)); /* fild */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = ebp + 8;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044473F(); /* call 0x0044473F */

loc_004500C2: ;
    eax = ZX16(LO16(edi));
    PUSH32(esp, eax);
    eax = ebx + -512;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_004500D6: ;
    esp = esp + 0x20;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = ebp + 8;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x48));
    PUSH32(esp, MEM32(ebp + 0x4C));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044473F(); /* call 0x0044473F */

loc_004500F0: ;
    eax = ZX16(LO16(edi));
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_004500FE: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 2;
    esp = esp + 0x20;
    ebx = ebx + 0x40;
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) - 1;
    if ((MEM32(ebp + 0x64) != 0)) goto loc_004500A2; /* jne: not equal / not zero */

loc_0045010D: ;
    eax = MEM32(ebp + 0x6C);
    PUSH32(esp, 0x50);
    ebx = esi + 0x1478;
    eax = eax + 0xFFFFFEC0u;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00450124: ;
    ecx = MEM32(ebp + 0x58);
    ecx = ecx + 0x50;
    eax = ebx + 0x140;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x6C));
    MEM32(ebp + 0x7C) = eax;
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0045013D: ;
    esp = esp + 0x18;
    if (CMP_A(LO16(edi), 0x10)) goto loc_00450159; /* ja: above (unsigned >) */

loc_00450146: ;
    eax = ZX16(LO16(edi));
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_00450156: ;
    esp = esp + 0xC;

loc_00450159: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    eax = ebp + -56;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_0045016B: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_004501E7; /* jne: not equal / not zero */

loc_00450172: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* cmp MEM16(ebp + 0x60), 0 - flags set for next jcc */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_BE(MEM16(ebp + 0x60), 0)) goto loc_004501CF; /* jbe: below or equal (unsigned <=) */

loc_00450183: ;
    eax = ZX16(MEM16(ebp + 0x70));
    ebx = esi + eax * 2 + 0x1978;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx));
    PUSH32(esp, edi);
    eax = eax << 6;
    eax = eax + esi + 0x103C;
    PUSH32(esp, ecx);
    ecx = ebp + -56;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_004501AF: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_004501E7; /* jne: not equal / not zero */

loc_004501B6: ;
    eax = ZX16(MEM16(ebx));
    ecx = MEM32(ebp + 0x7C);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    eax = ecx + eax * 4;
    MEM32(ebp + 0x7C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x70));
    if (CMP_B(LO16(eax), MEM16(ebp + 0x60))) goto loc_00450183; /* jb: below (unsigned <) */

loc_004501CF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_004501E4: ;
    esp = esp + 0x18;

loc_004501E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x74;
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
 * sub_004501EF
 * Original: 0x004501EF - 0x004502FF (272 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004501EF(void)
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

loc_004501EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2D0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ZX16(MEM16(esi));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x1474), LO16(edi) - flags set for next jcc */
    ecx = esi + eax * 4 + 0x2FE4;
    eax = esi + eax * 4 + 0x3564;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_BE(MEM16(esi + 0x1474), LO16(edi))) goto loc_004502F8; /* jbe: below or equal (unsigned <=) */

loc_0045022A: ;
    fp_push(MEMF(esi + 0x146C)); /* fld float */
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    eax = edi;
    eax = eax << 6;
    eax = eax + esi + 0x103C;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443EAA(); /* call 0x00443EAA */

loc_00450253: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    ebx = esi + edi * 2 + 0x1978;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 8);
    edi = edi << 2;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = esi + 0x328;
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -16);
    eax = eax + edi;
    PUSH32(esp, eax);
    eax = ebp + -720;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_0045028A: ;
    esp = esp + 0x28;
    if (TEST_NZ(eax, eax)) goto loc_004502FA; /* jne: not equal / not zero */

loc_00450291: ;
    SET_LO16(eax, MEM16(esi));
    fp_push(MEMF(esi + 0x1470)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443EAA(); /* call 0x00443EAA */

loc_004502AB: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = esi + 0x368;
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    eax = ebp + -720;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    edi = edi + eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_004502D8: ;
    SET_LO16(eax, MEM16(ebx));
    MEM16(ebp + 8) = MEM16(ebp + 8) + LO16(eax);
    eax = ZX16(MEM16(esi + 0x1474));
    esp = esp + 0x30;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    edi = (uint32_t)(int32_t)SMEM16(ebp + -4);
    if (CMP_L(edi, eax)) goto loc_0045022A; /* jl: less (signed <) */

loc_004502F8: ;
    eax = 0; /* xor self */

loc_004502FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004502FF
 * Original: 0x004502FF - 0x0045032A (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004502FF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004502FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    SET_LO16(eax, MEM16(ebp + 0x1C));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO16(eax, LO16(eax) >> 1);
    ecx = SX16(LO16(esi));
    PUSH32(esp, edi);
    edi = SX16(LO16(eax));
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -8) = ecx;
    if (CMP_LE(eax & eax, 0)) { sub_0045032A(); return; } /* jle: less or equal (signed <=) */

loc_00450326: ;
    edx = eax;
    g_seh_ebp = ebp; sub_0045032C(); return; /* tail jmp 0x0045032C */

}

/**
 * sub_0045044D
 * Original: 0x0045044D - 0x00450478 (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045044D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0045044D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    SET_LO16(eax, MEM16(ebp + 0x24));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    SET_LO16(eax, LO16(eax) >> 1);
    ecx = SX16(LO16(esi));
    PUSH32(esp, edi);
    edi = SX16(LO16(eax));
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -8) = ecx;
    if (CMP_LE(eax & eax, 0)) { sub_00450478(); return; } /* jle: less or equal (signed <=) */

loc_00450474: ;
    edx = eax;
    g_seh_ebp = ebp; sub_0045047A(); return; /* tail jmp 0x0045047A */

}

/**
 * sub_004506E3
 * Original: 0x004506E3 - 0x00450907 (548 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004506E3(void)
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

loc_004506E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x510;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x24);
    SET_LO16(eax, LO16(edi));
    SET_LO16(eax, LO16(eax) >> 1);
    MEM32(ebp + -8) = eax;
    eax = edi + edi;
    PUSH32(esp, eax);
    eax = ebp + -1296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0045070D: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = SX16(LO16(eax));
    edx = ecx;
    ebx = ZX16(LO16(edi));
    edx = edx << 2;
    esi = ebp + -1296;
    esi = esi - edx;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + 0x24) = eax;
    MEM32(ebp + -4) = ebx;
    if (CMP_GE(ecx, ebx)) goto loc_00450796; /* jge: greater or equal (signed >=) */

loc_0045072F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -8);
    MEM32(ebp + 0xC) = eax;
    edi = ecx;

loc_00450738: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 0xC))); }
    if (CMP_LE(eax & eax, 0)) goto loc_00450746; /* jle: less or equal (signed <=) */

loc_00450742: ;
    edx = eax;
    goto loc_00450748;

loc_00450746: ;
    edx = 0; /* xor self */

loc_00450748: ;
    if (CMP_GE(edx, 1)) goto loc_00450755; /* jge: greater or equal (signed >=) */

loc_0045074D: ;
    if (CMP_G(eax & eax, 0)) goto loc_00450758; /* jg: greater (signed >) */

loc_00450751: ;
    eax = 0; /* xor self */
    goto loc_00450758;

loc_00450755: ;
    eax = 0; /* xor self */
    eax++;

loc_00450758: ;
    edx = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + -4);
    eax = SX16(LO16(eax));
    eax = ZX16(MEM16(edx + eax * 2));
    eax = eax + edi;
    edx = ebx + ecx;
    edi = edi << 2;
    if (CMP_GE(eax, edx)) goto loc_00450782; /* jge: greater or equal (signed >=) */

loc_00450771: ;
    edx = MEM32(ebp + 8);
    fp_push(MEMF(edx + eax * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00450788;

loc_00450782: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(edi + eax)); /* fld float */

loc_00450788: ;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 1;
    MEMF(edi + esi) = (float)fp_top(); fp_popp(); /* fstp */
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    if (CMP_L(edi, ebx)) goto loc_00450738; /* jl: less (signed <) */

loc_00450796: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x20);
    fp_push(0.0); /* fldz */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + 0x20) = eax;
    edi = ecx;
    if (CMP_G(ecx, eax)) goto loc_004507C6; /* jg: greater (signed >) */

loc_004507AE: ;
    edi = eax;
    goto loc_004507C6;

loc_004507B2: ;
    edx = esi + eax * 4;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [edx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004507C5; /* jp: parity */

loc_004507BE: ;
    /* fstp st(0) */
    MEM32(ebp + 0xC) = edi;
    fp_push(MEMF(edx)); /* fld float */

loc_004507C5: ;
    edi++;

loc_004507C6: ;
    eax = SX16(LO16(edi));
    if (CMP_L(eax, ebx)) goto loc_004507B2; /* jl: less (signed <) */

loc_004507CD: ;
    eax = MEM32(ebp + 0x18);
    /* fld st(0) */
    SET_LO16(edx, MEM16(ebp + 0xC));
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 0x14);
    ecx = ecx + 2;
    (void)0; /* cmp ecx, MEM32(ebp + 0x20) - flags set for next jcc */
    MEM16(eax) = LO16(edx);
    if (CMP_G(ecx, MEM32(ebp + 0x20))) goto loc_004507E9; /* jg: greater (signed >) */

loc_004507E6: ;
    ecx = MEM32(ebp + 0x20);

loc_004507E9: ;
    eax = SX16(LO16(ecx));
    edx = ebx + -2;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(ebp + -16) = edx;
    if (CMP_L(eax, edx)) goto loc_004507F8; /* jl: less (signed <) */

loc_004507F6: ;
    eax = edx;

loc_004507F8: ;
    ebx = SX16(LO16(eax));
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(ebp + 0x24) = eax;
    if (CMP_GE(ebx, edx)) goto loc_00450900; /* jge: greater or equal (signed >=) */

loc_00450806: ;
    MEM32(ebp + 0x20) = ebx;

loc_00450809: ;
    ecx = ebx;
    ecx = ecx << 2;
    MEM32(ebp + -12) = ecx;
    ecx = ecx + esi;
    fp_push(MEMF(ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx - 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004508EE; /* jne: not equal / not zero */

loc_00450823: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi + ebx*4 - 8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004508EE; /* jne: not equal / not zero */

loc_00450834: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx + 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004508EE; /* jne: not equal / not zero */

loc_00450844: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi + ebx*4 + 8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004508EE; /* jne: not equal / not zero */

loc_00450855: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + -8);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    if (CMP_LE(eax & eax, 0)) goto loc_00450866; /* jle: less or equal (signed <=) */

loc_00450862: ;
    edx = eax;
    goto loc_00450868;

loc_00450866: ;
    edx = 0; /* xor self */

loc_00450868: ;
    if (CMP_GE(edx, 1)) goto loc_00450875; /* jge: greater or equal (signed >=) */

loc_0045086D: ;
    if (CMP_G(eax & eax, 0)) goto loc_00450878; /* jg: greater (signed >) */

loc_00450871: ;
    eax = 0; /* xor self */
    goto loc_00450878;

loc_00450875: ;
    eax = 0; /* xor self */
    eax++;

loc_00450878: ;
    edx = MEM32(ebp + 0x10);
    eax = SX16(LO16(eax));
    edi = ZX16(MEM16(edx + eax * 2));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = eax - ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(ebp + -4) = edi;
    if (CMP_L(LO16(edx), 5)) goto loc_004508A3; /* jl: less (signed <) */

loc_00450899: ;
    eax = SX16(LO16(edx));
    edi = edi + 0xFFFFFFFBu;
    if (CMP_LE(eax, edi)) goto loc_004508EB; /* jle: less or equal (signed <=) */

loc_004508A3: ;
    fp_push((double)SMEM32(ebp + 0x20)); /* fild */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    MEM32(ebp + 0x20) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [ebp + 0x20] */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004508EB; /* jp: parity */

loc_004508C2: ;
    fp_push(MEMF(0x648D3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004508EB; /* jp: parity */

loc_004508D3: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(ebp + -12);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx + eax] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) { sub_00450907(); return; } /* jnp: not parity */

loc_004508EB: ;
    edx = MEM32(ebp + -16);

loc_004508EE: ;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 1;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(ebp + 0x20) = ebx;
    if (CMP_L(ebx, edx)) goto loc_00450809; /* jl: less (signed <) */

loc_00450900: ;
    /* fstp st(0) */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0045091F
 * Original: 0x0045091F - 0x00450A61 (322 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045091F(void)
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

loc_0045091F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x20);
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    SET_LO16(ecx, MEM16(ebx));
    SET_LO16(ecx, LO16(ecx) + MEM16(ebp + 0x1C));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ebp + 0x24));
    eax = (uint32_t)((int32_t)eax >> 1);
    SET_LO16(esi, LO16(esi) >> 1);
    ecx = ecx - 8;
    ecx = SX16(LO16(ecx));
    eax++;
    if (CMP_LE(ecx, eax)) goto loc_0045094F; /* jle: less or equal (signed <=) */

loc_0045094D: ;
    eax = ecx;

loc_0045094F: ;
    ecx = SX16(LO16(eax));
    eax = ZX16(MEM16(ebp + 0x24));
    if (CMP_L(ecx, eax)) goto loc_0045095C; /* jl: less (signed <) */

loc_0045095A: ;
    ecx = eax;

loc_0045095C: ;
    edx = ecx + 0x10;
    edx = SX16(LO16(edx));
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(ebp + 0x20) = edx;
    if (CMP_L(edx, eax)) goto loc_0045096C; /* jl: less (signed <) */

loc_00450969: ;
    MEM32(ebp + 0x20) = eax;

loc_0045096C: ;
    (void)0; /* cmp LO16(ecx), MEM16(ebp + 0x20) - flags set for next jcc */
    fp_push(MEMF(0x648D34)); /* fld float */
    edx = MEM32(ebp + 0x18);
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x24) = ecx;
    if (CMP_GE(LO16(ecx), MEM16(ebp + 0x20))) goto loc_00450A5D; /* jge: greater or equal (signed >=) */

loc_00450984: ;
    edx = SX16(LO16(esi));
    MEM32(ebp + -4) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    edx = edx + eax;
    eax = MEM32(ebp + 8);
    esi = SX16(LO16(ecx));
    PUSH32(esp, edi);
    MEM32(ebp + -8) = edx;
    edi = eax + esi * 4;

loc_0045099D: ;
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + 0x1C) = eax;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + -4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + -4))); }
    if (CMP_LE(eax & eax, 0)) goto loc_004509B1; /* jle: less or equal (signed <=) */

loc_004509AD: ;
    ecx = eax;
    goto loc_004509B3;

loc_004509B1: ;
    ecx = 0; /* xor self */

loc_004509B3: ;
    if (CMP_GE(ecx, 1)) goto loc_004509C0; /* jge: greater or equal (signed >=) */

loc_004509B8: ;
    if (CMP_G(eax & eax, 0)) goto loc_004509C3; /* jg: greater (signed >) */

loc_004509BC: ;
    eax = 0; /* xor self */
    goto loc_004509C3;

loc_004509C0: ;
    eax = 0; /* xor self */
    eax++;

loc_004509C3: ;
    fp_push(MEMF(edi)); /* fld float */
    eax = SX16(LO16(eax));
    eax = ZX16(MEM16(ebx + eax * 2));
    ecx = ZX16(LO16(eax));
    ecx = ecx + esi;
    if (CMP_GE(ecx, MEM32(ebp + -8))) goto loc_00450A28; /* jge: greater or equal (signed >=) */

loc_004509D6: ;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + eax;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + -4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + -4))); }
    if (CMP_LE(eax & eax, 0)) goto loc_004509EB; /* jle: less or equal (signed <=) */

loc_004509E7: ;
    edx = eax;
    goto loc_004509ED;

loc_004509EB: ;
    edx = 0; /* xor self */

loc_004509ED: ;
    if (CMP_GE(edx, 1)) goto loc_004509FE; /* jge: greater or equal (signed >=) */

loc_004509F2: ;
    if (CMP_LE(eax & eax, 0)) goto loc_004509FA; /* jle: less or equal (signed <=) */

loc_004509F6: ;
    edx = eax;
    goto loc_00450A01;

loc_004509FA: ;
    edx = 0; /* xor self */
    goto loc_00450A01;

loc_004509FE: ;
    edx = 0; /* xor self */
    edx++;

loc_00450A01: ;
    eax = MEM32(ebp + 8);
    ebx = eax + ecx * 4;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00450A14; /* je: equal / zero */

loc_00450A10: ;
    /* fstp st(0) */
    fp_push(MEMF(ebx)); /* fld float */

loc_00450A14: ;
    ebx = MEM32(ebp + 0x10);
    eax = SX16(LO16(edx));
    SET_LO16(eax, MEM16(ebx + eax * 2));
    edx = ZX16(LO16(eax));
    edx = edx + ecx;
    if (CMP_L(edx, MEM32(ebp + -8))) goto loc_004509D6; /* jl: less (signed <) */

loc_00450A28: ;
    ecx = MEM32(ebp + 0x18);
    /* fld st(0) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    eax = MEM32(ebp + 0x24);
    if (TEST_NZ(HI8(eax), 1)) goto loc_00450A48; /* jne: not equal / not zero */

loc_00450A39: ;
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_00450A48; /* jl: less (signed <) */

loc_00450A3E: ;
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(ebp + 0x14);
    MEM16(ecx) = LO16(eax);
    goto loc_00450A4A;

loc_00450A48: ;
    /* fstp st(0) */

loc_00450A4A: ;
    eax++;
    esi++;
    edi = edi + 4;
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x20) - flags set for next jcc */
    MEM32(ebp + 0x24) = eax;
    if (CMP_L(LO16(eax), MEM16(ebp + 0x20))) goto loc_0045099D; /* jl: less (signed <) */

loc_00450A5C: ;
    POP32(esp, edi);

loc_00450A5D: ;
    POP32(esp, esi);
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
 * sub_00450A61
 * Original: 0x00450A61 - 0x00450AEB (138 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00450A61(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00450A61: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x51C;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(esi + 8));
    ebx = SX16(LO16(eax));
    PUSH32(esp, edi);
    PUSH32(esp, 0x140);
    edi = esi + 0x144C;
    MEM32(ebp + -4) = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(ebp + -28) = eax;
    SET_LO16(eax, MEM16(esi + 0x18));
    MEM16(ebp + 0xC) = LO16(eax);
    eax = ebp + -1308;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00450AAD: ;
    SET_LO16(eax, MEM16(edi));
    SET_LO16(edi, MEM16(edi + 2));
    POP32(esp, ecx);
    (void)0; /* cmp LO16(eax), LO16(edi) - flags set for next jcc */
    POP32(esp, ecx);
    eax = ZX16(LO16(eax));
    if (CMP_B(LO16(eax), LO16(edi))) goto loc_00450AC1; /* jb: below (unsigned <) */

loc_00450ABE: ;
    eax = ZX16(LO16(edi));

loc_00450AC1: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0x20 - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(eax, 0x20)) ? 1 : 0); /* setg */
    (void)0; /* cmp MEM16(ebp + 0xC), 2 - flags set for next jcc */
    ecx = ecx * 8 + 0x10;
    MEM16(esi + 0x1994) = LO16(ecx);
    if (CMP_EQ(MEM16(ebp + 0xC), 2)) { sub_00450AEB(); return; } /* je: equal / zero */

loc_00450ADE: ;
    if (CMP_EQ(MEM16(ebp + 0xC), 3)) { sub_00450AEB(); return; } /* je: equal / zero */

loc_00450AE5: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    g_seh_ebp = ebp; sub_00450AF2(); return; /* tail jmp 0x00450AF2 */

}

/**
 * sub_00450CD6
 * Original: 0x00450CD6 - 0x00450D4C (118 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00450CD6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00450CD6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x500;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 8));
    if (CMP_A(LO16(eax), 0xA0)) goto loc_00450D24; /* ja: above (unsigned >) */

loc_00450CEF: ;
    PUSH32(esp, eax);
    eax = ebp + -1280;
    PUSH32(esp, eax);
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00450D03: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 8));
    PUSH32(esp, eax);
    eax = ZX16(LO16(eax));
    eax = ebp + eax * 4 + -1280;
    PUSH32(esp, eax);
    eax = esi + 0xDBC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00450D21: ;
    esp = esp + 0x18;

loc_00450D24: ;
    eax = ZX16(MEM16(esi + 0x34));
    if (TEST_S(eax, eax)) { sub_00450D4C(); return; } /* jl: less (signed <) */

loc_00450D2C: ;
    if (CMP_LE(eax, 1)) { sub_00450D4C(); return; } /* jle: less or equal (signed <=) */

loc_00450D31: ;
    if (CMP_G(eax, 3)) { sub_00450D4C(); return; } /* jg: greater (signed >) */

loc_00450D36: ;
    eax = ZX16(MEM16(esi + 8));
    eax = ebp + eax * 4 + -1280;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00450A61(); /* call 0x00450A61 */

loc_00450D48: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_00450D55(); return; /* tail jmp 0x00450D55 */

}

/**
 * sub_00450D58
 * Original: 0x00450D58 - 0x00450D92 (58 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00450D58(void)
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

loc_00450D58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ecx = MEM32(ebp + 0x10);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    ecx--;
    edx = MEM32(ebp + 0xC);
    ebx = edx + ecx * 4;
    fp_push(MEMF(ebx)); /* fld float */
    ebx = ebx - 4;
    fp_push(1.0); /* fld1 */
    fp_push(MEMF(ebp + 8)); /* fld float */

loc_00450D72: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = ebx - 4;
    ecx--;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_top() = -fp_top(); /* fchs */
    if ((ecx != 0)) goto loc_00450D72; /* jne: not equal / not zero */

loc_00450D8B: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
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
 * sub_00450D92
 * Original: 0x00450D92 - 0x00450DB0 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00450D92(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00450D92: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x74;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    if (CMP_EQ(edi, 0xA)) { sub_00450DB0(); return; } /* je: equal / zero */

loc_00450DA1: ;
    if (CMP_EQ(edi, 0x10)) { sub_00450DB0(); return; } /* je: equal / zero */

loc_00450DA6: ;
    eax = 0x80010004u;
    g_seh_ebp = ebp; sub_0045123E(); return; /* tail jmp 0x0045123E */

}

/**
 * sub_00451241
 * Original: 0x00451241 - 0x004512C4 (131 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00451241(void)
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

loc_00451241: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = 0x44000000;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    MEM32(ebp + -4) = ebx;
    edi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = edx + 4;
    fp_push(1.0); /* fld1 */
    fp_push(0.0); /* fldz */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    esi = MEM32(ebp + 0xC);
    ebx = 0x57F028;
    /* fld st(2) */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -12) = (int32_t)fp_top(); /* fist */
    /* FPU: fisub dword ptr [ebp - 0xc] */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = MEM32(ebp + -12);
    if (TEST_NZ(eax, 0x200)) { sub_004512C4(); return; } /* jne: not equal / not zero */

loc_00451291: ;
    eax = eax & 0x1FF;
    fp_push(MEMF(ebx + eax * 4 + 0x400)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebx + eax * 4 + 0x404)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebx + eax * 4 + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    g_seh_ebp = ebp; sub_004512F5(); return; /* tail jmp 0x004512F5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00451386
 * Original: 0x00451386 - 0x00451A60 (1754 bytes, 591 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00451386(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00451386: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x554;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_00451397: ;
    PUSH32(esp, 0x20);
    MEM32(ebp + -52) = eax;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -340;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edi = ebp + -212;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x100;
    edi = ebp + -1364;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + 0x2C);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x30);
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x18), edx - flags set for next jcc */
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = esi;
    if (CMP_LE(MEM32(ebp + 0x18), edx)) goto loc_004519E5; /* jle: less or equal (signed <=) */

loc_004513E8: ;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    eax = 0x7149F2CA;
    edi = ebp + -84;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_LE(esi, edx)) goto loc_0045140D; /* jle: less or equal (signed <=) */

loc_004513F9: ;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(eax + esi * 4 + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x24));
    ecx = MEM32(ebp + -40);
    eax = ecx + eax * 4;
    MEM32(ebp + -40) = eax;

loc_0045140D: ;
    (void)0; /* cmp MEM32(ebp + -16), edx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_LE(MEM32(ebp + -16), edx)) goto loc_004518F6; /* jle: less or equal (signed <=) */

loc_00451419: ;
    eax = MEM32(ebp + 0x1C);
    eax = eax + esi * 4;
    MEM32(ebp + -36) = eax;
    eax = MEM32(eax);

loc_00451424: ;
    ecx = MEM32(ebp + -40);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -4);
    ecx = ecx << 7;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    ecx = ebp + ecx + -1364;
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -8) = edx;
    if (CMP_LE(eax, edx)) goto loc_004518E7; /* jle: less or equal (signed <=) */

loc_00451445: ;
    eax = MEM32(ebp + 0x24);
    eax = eax << 2;
    MEM32(ebp + -20) = eax;

loc_0045144E: ;
    eax = MEM32(ebp + -52);
    if (CMP_EQ(eax, 0)) goto loc_00451710; /* je: equal / zero */

loc_0045145A: ;
    edi = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0x24);
    if (CMP_NE(ecx, 5)) goto loc_004514EA; /* jne: not equal / not zero */

loc_00451469: ;
    esi = MEM32(ebp + -44);
    xmm0 = MEMF(esi); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    /* shufps xmm0, xmm0, 0 */
    esi = MEM32(ebp + -32);
    xmm1 = MEMF(esi); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    /* shufps xmm1, xmm1, 0 */
    fp_push(0.0); /* fldz */
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebp + -28);
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm2 = MEMF(edx + 4); /* movups */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = MEMF(edi + 4); /* movups */
    /* mulps: xmm3 *= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = MEMF(ebx + 4); /* movups */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* mulps: xmm2 *= xmm2 (packed 4xfloat) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = MEMF(esi + 4); /* movups */
    /* mulps: xmm2 *= xmm4 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = xmm2; /* movaps */
    /* shufps xmm0, xmm0, 0xe */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    xmm0 = xmm2; /* movaps */
    /* shufps xmm0, xmm0, 1 */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    MEMF(ebp + -48) = xmm2; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    goto loc_00451755;

loc_004514EA: ;
    if (CMP_NE(ecx, 6)) goto loc_0045158A; /* jne: not equal / not zero */

loc_004514F3: ;
    esi = MEM32(ebp + -44);
    xmm0 = MEMF(esi); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    /* shufps xmm0, xmm0, 0 */
    esi = MEM32(ebp + -32);
    xmm1 = MEMF(esi); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    /* shufps xmm1, xmm1, 0 */
    fp_push(0.0); /* fldz */
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebp + -28);
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm2 = MEMF(edx + 8); /* movups */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = MEMF(edi + 8); /* movups */
    /* mulps: xmm3 *= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = MEMF(ebx + 8); /* movups */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* mulps: xmm2 *= xmm2 (packed 4xfloat) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = MEMF(esi + 8); /* movups */
    /* mulps: xmm2 *= xmm4 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm0 = xmm2; /* movaps */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* shufps xmm0, xmm0, 0xe */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = xmm2; /* movaps */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* shufps xmm0, xmm0, 1 */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -48) = xmm2; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    goto loc_00451755;

loc_0045158A: ;
    if (CMP_NE(ecx, 0xA)) goto loc_0045164F; /* jne: not equal / not zero */

loc_00451593: ;
    esi = MEM32(ebp + -44);
    xmm0 = MEMF(esi); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    /* shufps xmm0, xmm0, 0 */
    esi = MEM32(ebp + -32);
    xmm1 = MEMF(esi); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    /* shufps xmm1, xmm1, 0 */
    fp_push(0.0); /* fldz */
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebp + -28);
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm2 = MEMF(edx + 8); /* movups */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = MEMF(edi + 8); /* movups */
    /* mulps: xmm3 *= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = MEMF(ebx + 8); /* movups */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* mulps: xmm2 *= xmm2 (packed 4xfloat) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = MEMF(esi + 8); /* movups */
    /* mulps: xmm2 *= xmm4 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm3 = MEMF(edx + 0x18); /* movups */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = MEMF(edi + 0x18); /* movups */
    /* mulps: xmm4 *= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* addps: xmm3 += xmm4 (packed 4xfloat) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = MEMF(ebx + 0x18); /* movups */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    /* mulps: xmm3 *= xmm3 (packed 4xfloat) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = MEMF(esi + 0x18); /* movups */
    /* mulps: xmm3 *= xmm4 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    xmm0 = xmm2; /* movaps */
    /* shufps xmm0, xmm0, 0xe */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    xmm0 = xmm2; /* movaps */
    /* shufps xmm0, xmm0, 1 */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    MEMF(ebp + -48) = xmm2; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    goto loc_00451755;

loc_0045164F: ;
    eax = ecx;
    eax = eax >> 2;
    eax = eax << 2;
    if (CMP_NE(eax, ecx)) goto loc_004516CE; /* jne: not equal / not zero */

loc_0045165B: ;
    esi = MEM32(ebp + -44);
    xmm0 = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    esi = MEM32(ebp + -32);
    xmm1 = MEMF(esi); /* movss */
    /* shufps xmm1, xmm1, 0 */
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebp + -28);
    xmm7 = 0.0f; /* xorps self = zero */
    ecx = ecx >> 2;

loc_00451680: ;
    xmm2 = MEMF(edx); /* movups */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    edx = edx + 0x10;
    xmm3 = MEMF(edi); /* movups */
    /* mulps: xmm3 *= xmm0 (packed 4xfloat) */
    edi = edi + 0x10;
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    xmm4 = MEMF(ebx); /* movups */
    /* subps: xmm2 -= xmm4 (packed 4xfloat) */
    ebx = ebx + 0x10;
    /* mulps: xmm2 *= xmm2 (packed 4xfloat) */
    xmm4 = MEMF(esi); /* movups */
    /* mulps: xmm2 *= xmm4 (packed 4xfloat) */
    esi = esi + 0x10;
    ecx--;
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    if ((ecx != 0)) goto loc_00451680; /* jne: not equal / not zero */

loc_004516B0: ;
    xmm0 = xmm7; /* movaps */
    /* shufps xmm0, xmm0, 0xe */
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    xmm0 = xmm7; /* movaps */
    /* shufps xmm0, xmm0, 1 */
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    MEMF(ebp + -48) = xmm7; /* movss */
    goto loc_00451755;

loc_004516CE: ;
    esi = MEM32(ebp + -44);
    fp_push(MEMF(esi)); /* fld float */
    esi = MEM32(ebp + -32);
    fp_push(MEMF(esi)); /* fld float */
    fp_push(0.0); /* fldz */
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    ebx = MEM32(ebp + -12);
    edx = MEM32(ebp + -28);
    goto loc_004516EA;

loc_004516E8: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */

loc_004516EA: ;
    fp_push(MEMF(edx + ecx * 4 + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(ebx + ecx * 4 + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx--;
    if ((ecx != 0)) goto loc_004516E8; /* jne: not equal / not zero */

loc_00451705: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    goto loc_00451755;

loc_00451710: ;
    eax = 0; /* xor self */
    esi = MEM32(ebp + -44);
    fp_push(MEMF(esi)); /* fld float */
    esi = MEM32(ebp + -32);
    fp_push(MEMF(esi)); /* fld float */
    fp_push(0.0); /* fldz */
    ecx = MEM32(ebp + 0x24);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    ebx = MEM32(ebp + -12);
    edx = MEM32(ebp + -28);
    goto loc_00451731;

loc_0045172F: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */

loc_00451731: ;
    fp_push(MEMF(edx + ecx * 4 + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(ebx + ecx * 4 + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx--;
    if ((ecx != 0)) goto loc_0045172F; /* jne: not equal / not zero */

loc_0045174C: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */

loc_00451755: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    fp_push(MEMF(ebp + -48)); /* fld float */
    ecx = 7;
    esi = ebp + -84;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esi + ecx*4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_004518CF; /* je: equal / zero */

loc_00451774: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esi + ecx*4 - 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_00451782; /* je: equal / zero */

loc_0045177F: ;
    ecx--;
    if ((ecx != 0)) goto loc_00451774; /* jne: not equal / not zero */

loc_00451782: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx + 8;
    eax = MEM32(ebp + -24);
    if (CMP_EQ(eax, 0)) goto loc_004517FF; /* je: equal / zero */

loc_0045178F: ;
    if (CMP_EQ(eax, 1)) goto loc_0045182E; /* je: equal / zero */

loc_00451798: ;
    if (CMP_EQ(eax, 2)) goto loc_00451878; /* je: equal / zero */

loc_004517A1: ;
    edi = ebp + -84;
    ebx = ebp + -340;
    ecx--;
    if ((ecx == 0)) goto loc_004517CA; /* je: equal / zero */

loc_004517AD: ;
    fp_push(MEMF(edi + 0x18)); /* fld float */
    MEMF(edi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi - 4;
    edx = 4;

loc_004517BB: ;
    eax = MEM32(ebx + 0x6C);
    MEM32(ebx + 0x7C) = eax;
    ebx = ebx - 4;
    edx--;
    if ((edx != 0)) goto loc_004517BB; /* jne: not equal / not zero */

loc_004517C7: ;
    ecx--;
    if ((ecx != 0)) goto loc_004517AD; /* jne: not equal / not zero */

loc_004517CA: ;
    MEMF(edi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + -4);
    edx = 4;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = eax;
    esi = ebp + -212;
    ecx = MEM32(ebp + -24);
    ecx--;
    if (((int32_t)ecx < 0)) goto loc_004517F4; /* jl: less (signed <) */

loc_004517E5: ;
    eax = MEM32(esi + edx * 4);
    MEM32(ebx + 0x70) = eax;
    esi = esi + 4;
    ebx = ebx + 4;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_004517E5; /* jge: greater or equal (signed >=) */

loc_004517F4: ;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x70) = eax;
    goto loc_004518D1;

loc_004517FF: ;
    edi = ebp + -84;
    ebx = ebp + -340;
    ecx--;
    if ((ecx == 0)) goto loc_00451820; /* je: equal / zero */

loc_0045180B: ;
    fp_push(MEMF(edi + 0x18)); /* fld float */
    MEMF(edi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi - 4;
    eax = MEM32(ebx + 0x60);
    MEM32(ebx + 0x70) = eax;
    ebx = ebx - 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_0045180B; /* jne: not equal / not zero */

loc_00451820: ;
    MEMF(edi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x70) = eax;
    goto loc_004518D1;

loc_0045182E: ;
    edi = ebp + -84;
    ebx = ebp + -340;
    ecx--;
    if ((ecx == 0)) goto loc_00451855; /* je: equal / zero */

loc_0045183A: ;
    fp_push(MEMF(edi + 0x18)); /* fld float */
    MEMF(edi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi - 4;
    eax = MEM32(ebx + 0x60);
    MEM32(ebx + 0x70) = eax;
    eax = MEM32(ebx + 0x64);
    MEM32(ebx + 0x74) = eax;
    ebx = ebx - 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_0045183A; /* jne: not equal / not zero */

loc_00451855: ;
    MEMF(edi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + -4);
    edx = 4;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = eax;
    esi = ebp + -212;
    eax = MEM32(esi + edx * 4);
    MEM32(ebx + 0x70) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x74) = eax;
    goto loc_004518D1;

loc_00451878: ;
    edi = ebp + -84;
    ebx = ebp + -340;
    ecx--;
    if ((ecx == 0)) goto loc_004518A5; /* je: equal / zero */

loc_00451884: ;
    fp_push(MEMF(edi + 0x18)); /* fld float */
    MEMF(edi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi - 4;
    eax = MEM32(ebx + 0x60);
    MEM32(ebx + 0x70) = eax;
    eax = MEM32(ebx + 0x64);
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebx + 0x68);
    MEM32(ebx + 0x78) = eax;
    ebx = ebx - 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_00451884; /* jne: not equal / not zero */

loc_004518A5: ;
    MEMF(edi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + -4);
    edx = 4;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = eax;
    esi = ebp + -212;
    eax = MEM32(esi + edx * 4);
    MEM32(ebx + 0x70) = eax;
    eax = MEM32(esi + edx * 4 + 4);
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x78) = eax;
    goto loc_004518D1;

loc_004518CF: ;
    /* fstp st(0) */

loc_004518D1: ;
    eax = MEM32(ebp + -36);
    eax = MEM32(eax);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    if (CMP_L(MEM32(ebp + -8), eax)) goto loc_0045144E; /* jl: less (signed <) */

loc_004518E2: ;
    esi = MEM32(ebp + -24);
    edx = 0; /* xor self */

loc_004518E7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ecx = MEM32(ebp + -4);
    if (CMP_L(ecx, MEM32(ebp + -16))) goto loc_00451424; /* jl: less (signed <) */

loc_004518F6: ;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(eax + esi * 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -16));
    PUSH32(esp, 8);
    POP32(esp, ecx);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (CMP_L(eax, ecx)) goto loc_0045190D; /* jl: less (signed <) */

loc_0045190A: ;
    MEM32(ebp + -16) = ecx;

loc_0045190D: ;
    (void)0; /* cmp MEM32(ebp + -16), edx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_LE(MEM32(ebp + -16), edx)) goto loc_004519D0; /* jle: less or equal (signed <=) */

loc_00451919: ;
    eax = ebp + -1364;
    MEM32(ebp + -12) = eax;

loc_00451922: ;
    edi = MEM32(ebp + -12);
    PUSH32(esp, 0x20);
    eax = 0; /* xor self */
    (void)0; /* cmp esi, edx - flags set for next jcc */
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 0x14);
    MEM32(ebp + -8) = edx;
    if (CMP_L(esi, edx)) goto loc_004519BA; /* jl: less (signed <) */

loc_0045193A: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + 0x30);
    eax = eax + 0xFFFFFFFCu;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x2C);
    ecx = ecx << 4;
    eax = eax - edx;
    MEM32(ebp + -36) = eax;

loc_00451954: ;
    if (CMP_LE(MEM32(ebp + -8), 0)) goto loc_00451966; /* jle: less or equal (signed <=) */

loc_0045195A: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x24));
    edi = edi + eax * 4;

loc_00451966: ;
    (void)0; /* cmp MEM32(ebp + 0x24), 0 - flags set for next jcc */
    eax = MEM32(ebp + ecx + -340);
    MEM32(ebp + ecx + -212) = eax;
    if (CMP_LE(MEM32(ebp + 0x24), 0)) goto loc_004519A6; /* jle: less or equal (signed <=) */

loc_0045197A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x24));
    ebx = MEM32(ebp + 0x24);
    esi = MEM32(ebp + -12);
    eax = edi + eax * 4;
    MEM32(ebp + -28) = ebx;

loc_0045198A: ;
    ebx = MEM32(ebp + -36);
    fp_push(MEMF(edx + ebx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esi + 4;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if ((MEM32(ebp + -28) != 0)) goto loc_0045198A; /* jne: not equal / not zero */

loc_004519A3: ;
    esi = MEM32(ebp + -24);

loc_004519A6: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 4;
    ecx = ecx + 4;
    edx = edx + 4;
    if (CMP_LE(MEM32(ebp + -8), esi)) goto loc_00451954; /* jle: less or equal (signed <=) */

loc_004519B8: ;
    edx = 0; /* xor self */

loc_004519BA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x80;
    if (CMP_L(eax, MEM32(ebp + -16))) goto loc_00451922; /* jl: less (signed <) */

loc_004519D0: ;
    MEM32(ebp + -44) = MEM32(ebp + -44) + 4;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 4;
    esi++;
    (void)0; /* cmp esi, MEM32(ebp + 0x18) - flags set for next jcc */
    MEM32(ebp + -24) = esi;
    if (CMP_L(esi, MEM32(ebp + 0x18))) goto loc_004513E8; /* jl: less (signed <) */

loc_004519E5: ;
    eax = MEM32(ebp + 0x28);
    eax--;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFF9u;
    eax = eax + 8;
    if (CMP_LE(eax, edx)) goto loc_00451A59; /* jle: less or equal (signed <=) */

loc_004519F7: ;
    edx = MEM32(ebp + 0x20);
    ecx = ebp + -1364;
    MEM32(ebp + 0x30) = ecx;
    ecx = MEM32(ebp + 0x10);
    ebx = ebp + -212;
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + 0x2C) = eax;

loc_00451A12: ;
    edi = MEM32(ebp + 0x18);
    if (CMP_LE(edi & edi, 0)) goto loc_00451A2B; /* jle: less or equal (signed <=) */

loc_00451A19: ;
    esi = edx;
    ecx = ebx;

loc_00451A1D: ;
    SET_LO16(eax, MEM16(ecx));
    MEM16(esi) = LO16(eax);
    ecx = ecx + 4;
    esi++;
    esi++;
    edi--;
    if ((edi != 0)) goto loc_00451A1D; /* jne: not equal / not zero */

loc_00451A2B: ;
    ecx = MEM32(ebp + 0x24);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00451A3A; /* jle: less or equal (signed <=) */

loc_00451A32: ;
    esi = MEM32(ebp + 0x30);
    edi = MEM32(ebp + 0x14);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00451A3A: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) + 0x80;
    ecx = ecx + ecx;
    edx = edx + ecx;
    ecx = MEM32(ebp + 0x24);
    ecx = ecx << 2;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + ecx;
    ebx = ebx + 0x10;
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) - 1;
    if ((MEM32(ebp + 0x2C) != 0)) goto loc_00451A12; /* jne: not equal / not zero */

loc_00451A59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
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
 * sub_00451A60
 * Original: 0x00451A60 - 0x00452748 (3304 bytes, 932 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00451A60(void)
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

loc_00451A60: ;
    PUSH32(esp, ebp);
    ebp = esp + -80;
    esp = esp - 0x3F8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    ecx++;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x68), LO16(ecx) - flags set for next jcc */
    PUSH32(esp, 3);
    POP32(esp, edx);
    if (CMP_EQ(MEM16(ebp + 0x68), LO16(ecx))) goto loc_00451A86; /* je: equal / zero */

loc_00451A7C: ;
    if (CMP_NE(MEM16(ebp + 0x68), LO16(edx))) goto loc_0045273B; /* jne: not equal / not zero */

loc_00451A86: ;
    if (CMP_LE(MEM16(ebp + 0x5C), LO16(ecx))) goto loc_0045273B; /* jle: less or equal (signed <=) */

loc_00451A90: ;
    if (CMP_G(MEM16(ebp + 0x5C), 0x10)) goto loc_0045273B; /* jg: greater (signed >) */

loc_00451A9B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x58);
    (void)0; /* cmp eax, 0x1F40 - flags set for next jcc */
    MEM32(ebp + 0x1C) = eax;
    if (CMP_EQ(eax, 0x1F40)) goto loc_00451AD5; /* je: equal / zero */

loc_00451AA9: ;
    if (CMP_EQ(eax, 0x2B11)) goto loc_00451AD0; /* je: equal / zero */

loc_00451AB0: ;
    if (CMP_EQ(eax, 0x3E80)) goto loc_00451AC7; /* je: equal / zero */

loc_00451AB7: ;
    if (CMP_NE(eax, 0x5622)) goto loc_0045273B; /* jne: not equal / not zero */

loc_00451AC2: ;
    MEM32(ebp + 0x38) = edx;
    goto loc_00451AD8;

loc_00451AC7: ;
    MEM32(ebp + 0x38) = 2;
    goto loc_00451AD8;

loc_00451AD0: ;
    MEM32(ebp + 0x38) = ecx;
    goto loc_00451AD8;

loc_00451AD5: ;
    MEM32(ebp + 0x38) = ebx;

loc_00451AD8: ;
    edi = MEM32(ebp + 0x64);
    ecx = MEM32(ebp + 0x60);
    PUSH32(esp, 0xA);
    eax = edi;
    ecx = ecx - edi;
    POP32(esp, edx);

loc_00451AE5: ;
    MEM16(ecx + eax) = LO16(ebx);
    MEM16(eax) = LO16(ebx);
    eax++;
    eax++;
    edx--;
    if ((edx != 0)) goto loc_00451AE5; /* jne: not equal / not zero */

loc_00451AF1: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x68);
    if (CMP_LE(ecx, ebx)) goto loc_00451B71; /* jle: less or equal (signed <=) */

loc_00451AF9: ;
    esi = MEM32(ebp + 0x6C);
    eax = MEM32(ebp + 0x74);
    eax = eax - esi;
    MEM32(ebp + 0x48) = ebx;
    MEM32(ebp + 0x3C) = eax;
    MEM32(ebp + 0x30) = ecx;

loc_00451B0A: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x5C);
    if (CMP_LE(edx & edx, 0)) goto loc_00451B47; /* jle: less or equal (signed <=) */

loc_00451B12: ;
    eax = MEM32(ebp + 0x48);
    ecx = MEM32(esi);
    eax = ebp + eax + -680;
    MEM32(ebp + 0x44) = eax;
    eax = MEM32(ebp + 0x38);
    eax = eax << 6;
    eax = eax + 0x577C98;
    MEM32(ebp + 0x40) = edx;

loc_00451B2F: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(ebp + 0x44);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(ebp + 0x44) = MEM32(ebp + 0x44) + 4;
    ecx = ecx + 4;
    eax = eax + 4;
    MEM32(ebp + 0x40) = MEM32(ebp + 0x40) - 1;
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    if ((MEM32(ebp + 0x40) != 0)) goto loc_00451B2F; /* jne: not equal / not zero */

loc_00451B47: ;
    PUSH32(esp, MEM32(ebp + 0x5C));
    eax = MEM32(ebp + 0x48);
    eax = ebp + eax + -488;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, MEM32(eax + esi));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_00451241(); /* call 0x00451241 */

loc_00451B62: ;
    MEM32(ebp + 0x48) = MEM32(ebp + 0x48) + 0x40;
    esp = esp + 0x10;
    esi = esi + 4;
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) - 1;
    if ((MEM32(ebp + 0x30) != 0)) goto loc_00451B0A; /* jne: not equal / not zero */

loc_00451B71: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x68);
    esi--;
    if (CMP_NE(MEM16(ebp + 0x5C), 0xA)) goto loc_00451C99; /* jne: not equal / not zero */

loc_00451B81: ;
    if (CMP_NE(MEM16(ebp + 0x58), 0x1F40)) goto loc_00451C0D; /* jne: not equal / not zero */

loc_00451B8D: ;
    PUSH32(esp, MEM32(0x65468C));
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, MEM32(0x654690));
    eax = eax + esi * 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, edi);
    PUSH32(esp, 0x577BE8);
    PUSH32(esp, MEM32(0x577BF8));
    MEM32(ebp + 0x48) = eax;
    PUSH32(esp, MEM32(0x6546B0));
    esi = esi << 6;
    PUSH32(esp, MEM32(eax));
    eax = ebp + esi + -488;
    PUSH32(esp, eax);
    eax = ebp + esi + -680;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00451BD2: ;
    esp = esp + 0x2C;
    if (TEST_NZ(eax, eax)) goto loc_00452740; /* jne: not equal / not zero */

loc_00451BDD: ;
    edx = 0; /* xor self */
    if (CMP_LE(MEM32(0x577BF8), edx)) goto loc_00451FCD; /* jle: less or equal (signed <=) */

loc_00451BEB: ;
    eax = MEM32(ebp + 0x60);
    ecx = 0x577BE0;
    ecx = ecx - eax;

loc_00451BF5: ;
    SET_LO16(esi, MEM16(ecx + eax));
    MEM16(eax) = LO16(esi);
    ebx++;
    eax++;
    eax++;
    edx++;
    if (CMP_L(edx, MEM32(0x577BF8))) goto loc_00451BF5; /* jl: less (signed <) */

loc_00451C08: ;
    goto loc_00451FCD;

loc_00451C0D: ;
    if (CMP_NE(MEM16(ebp + 0x58), 0x2B11)) goto loc_0045273B; /* jne: not equal / not zero */

loc_00451C19: ;
    PUSH32(esp, MEM32(0x654684));
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, MEM32(0x654688));
    eax = eax + esi * 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, edi);
    PUSH32(esp, 0x577BE8);
    PUSH32(esp, MEM32(0x577BF8));
    MEM32(ebp + 0x48) = eax;
    PUSH32(esp, MEM32(0x6546AC));
    esi = esi << 6;
    PUSH32(esp, MEM32(eax));
    eax = ebp + esi + -488;
    PUSH32(esp, eax);
    eax = ebp + esi + -680;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00451C5E: ;
    esp = esp + 0x2C;
    if (TEST_NZ(eax, eax)) goto loc_00452740; /* jne: not equal / not zero */

loc_00451C69: ;
    edx = 0; /* xor self */
    if (CMP_LE(MEM32(0x577BF8), edx)) goto loc_00451FCD; /* jle: less or equal (signed <=) */

loc_00451C77: ;
    eax = MEM32(ebp + 0x60);
    ecx = 0x577BE0;
    ecx = ecx - eax;

loc_00451C81: ;
    SET_LO16(esi, MEM16(eax + ecx));
    MEM16(eax) = LO16(esi);
    ebx++;
    eax++;
    eax++;
    edx++;
    if (CMP_L(edx, MEM32(0x577BF8))) goto loc_00451C81; /* jl: less (signed <) */

loc_00451C94: ;
    goto loc_00451FCD;

loc_00451C99: ;
    if (CMP_NE(MEM16(ebp + 0x5C), 0x10)) goto loc_0045273B; /* jne: not equal / not zero */

loc_00451CA4: ;
    if (CMP_NE(MEM16(ebp + 0x58), 0x3E80)) goto loc_00451E3D; /* jne: not equal / not zero */

loc_00451CB0: ;
    PUSH32(esp, MEM32(0x65467C));
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, MEM32(0x654680));
    ecx = eax + esi * 4;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x577BBC));
    eax = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x577BB4);
    PUSH32(esp, MEM32(0x577BAC));
    eax = eax << 6;
    PUSH32(esp, MEM32(0x6546A8));
    MEM32(ebp + 0x48) = ecx;
    PUSH32(esp, MEM32(ecx));
    ecx = ebp + eax + -488;
    PUSH32(esp, ecx);
    eax = ebp + eax + -680;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00451CFB: ;
    esp = esp + 0x2C;
    if (TEST_NZ(eax, eax)) goto loc_00452740; /* jne: not equal / not zero */

loc_00451D06: ;
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) & eax;
    if (CMP_LE(MEM32(0x577BAC), eax)) goto loc_00451D33; /* jle: less or equal (signed <=) */

loc_00451D11: ;
    eax = MEM32(ebp + 0x60);
    ecx = 0x577BB0;
    ecx = ecx - eax;

loc_00451D1B: ;
    SET_LO16(edx, MEM16(ecx + eax));
    MEM16(eax) = LO16(edx);
    ebx++;
    eax++;
    eax++;
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) + 1;
    edx = MEM32(ebp + 0x4C);
    if (CMP_L(edx, MEM32(0x577BAC))) goto loc_00451D1B; /* jl: less (signed <) */

loc_00451D33: ;
    PUSH32(esp, MEM32(0x654674));
    ecx = MEM32(0x577B94);
    PUSH32(esp, MEM32(0x654678));
    edx = edi + ebx * 2;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x577BC0));
    esi = esi << 4;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x48);
    edx = MEM32(edx);
    PUSH32(esp, 0x577BA4);
    PUSH32(esp, MEM32(0x577BAC));
    eax = esi + ecx;
    PUSH32(esp, MEM32(0x6546A4));
    ecx = edx + ecx * 4;
    eax = eax << 2;
    PUSH32(esp, ecx);
    ecx = ebp + eax + -488;
    PUSH32(esp, ecx);
    eax = ebp + eax + -680;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00451D89: ;
    esp = esp + 0x2C;
    if (TEST_NZ(eax, eax)) goto loc_00452740; /* jne: not equal / not zero */

loc_00451D94: ;
    if (CMP_LE(MEM32(0x577BAC), eax)) goto loc_00451DB5; /* jle: less or equal (signed <=) */

loc_00451D9C: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577BA0));
    edx = MEM32(ebp + 0x60);
    MEM16(edx + ebx * 2) = LO16(ecx);
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577BAC))) goto loc_00451D9C; /* jl: less (signed <) */

loc_00451DB5: ;
    PUSH32(esp, MEM32(0x65466C));
    ecx = MEM32(0x577B98);
    PUSH32(esp, MEM32(0x654670));
    edx = edi + ebx * 2;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x577BC4));
    eax = esi + ecx;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x48);
    edx = MEM32(edx);
    PUSH32(esp, 0x577B80);
    PUSH32(esp, MEM32(0x577B84));
    ecx = edx + ecx * 4;
    PUSH32(esp, MEM32(0x6546A0));
    eax = eax << 2;
    PUSH32(esp, ecx);
    ecx = ebp + eax + -488;
    PUSH32(esp, ecx);
    eax = ebp + eax + -680;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00451E08: ;
    esp = esp + 0x2C;
    if (TEST_NZ(eax, eax)) goto loc_00452740; /* jne: not equal / not zero */

loc_00451E13: ;
    if (CMP_LE(MEM32(0x577B84), eax)) goto loc_00451FCD; /* jle: less or equal (signed <=) */

loc_00451E1F: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577B9C));
    edx = MEM32(ebp + 0x60);
    MEM16(edx + ebx * 2) = LO16(ecx);
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577B84))) goto loc_00451E1F; /* jl: less (signed <) */

loc_00451E38: ;
    goto loc_00451FCD;

loc_00451E3D: ;
    if (CMP_NE(MEM16(ebp + 0x58), 0x5622)) goto loc_0045273B; /* jne: not equal / not zero */

loc_00451E49: ;
    PUSH32(esp, MEM32(0x654664));
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, MEM32(0x654668));
    ecx = eax + esi * 4;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x577BBC));
    eax = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x577BB4);
    PUSH32(esp, MEM32(0x577BAC));
    eax = eax << 6;
    PUSH32(esp, MEM32(0x65469C));
    MEM32(ebp + 0x48) = ecx;
    PUSH32(esp, MEM32(ecx));
    ecx = ebp + eax + -488;
    PUSH32(esp, ecx);
    eax = ebp + eax + -680;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00451E94: ;
    esp = esp + 0x2C;
    if (TEST_NZ(eax, eax)) goto loc_00452740; /* jne: not equal / not zero */

loc_00451E9F: ;
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) & eax;
    if (CMP_LE(MEM32(0x577BAC), eax)) goto loc_00451ECC; /* jle: less or equal (signed <=) */

loc_00451EAA: ;
    eax = MEM32(ebp + 0x60);
    ecx = 0x577BB0;
    ecx = ecx - eax;

loc_00451EB4: ;
    SET_LO16(edx, MEM16(eax + ecx));
    MEM16(eax) = LO16(edx);
    ebx++;
    eax++;
    eax++;
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) + 1;
    edx = MEM32(ebp + 0x4C);
    if (CMP_L(edx, MEM32(0x577BAC))) goto loc_00451EB4; /* jl: less (signed <) */

loc_00451ECC: ;
    PUSH32(esp, MEM32(0x65465C));
    ecx = MEM32(0x577B94);
    PUSH32(esp, MEM32(0x654660));
    edx = edi + ebx * 2;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x577BC0));
    esi = esi << 4;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x48);
    edx = MEM32(edx);
    PUSH32(esp, 0x577BA4);
    PUSH32(esp, MEM32(0x577BAC));
    eax = esi + ecx;
    PUSH32(esp, MEM32(0x654698));
    ecx = edx + ecx * 4;
    eax = eax << 2;
    PUSH32(esp, ecx);
    ecx = ebp + eax + -488;
    PUSH32(esp, ecx);
    eax = ebp + eax + -680;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00451F22: ;
    esp = esp + 0x2C;
    if (TEST_NZ(eax, eax)) goto loc_00452740; /* jne: not equal / not zero */

loc_00451F2D: ;
    if (CMP_LE(MEM32(0x577BAC), eax)) goto loc_00451F4E; /* jle: less or equal (signed <=) */

loc_00451F35: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577BA0));
    edx = MEM32(ebp + 0x60);
    MEM16(edx + ebx * 2) = LO16(ecx);
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577BAC))) goto loc_00451F35; /* jl: less (signed <) */

loc_00451F4E: ;
    PUSH32(esp, MEM32(0x654654));
    ecx = MEM32(0x577B98);
    PUSH32(esp, MEM32(0x654658));
    edx = edi + ebx * 2;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x577BC4));
    eax = esi + ecx;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x48);
    edx = MEM32(edx);
    PUSH32(esp, 0x577B80);
    PUSH32(esp, MEM32(0x577B84));
    ecx = edx + ecx * 4;
    PUSH32(esp, MEM32(0x654694));
    eax = eax << 2;
    PUSH32(esp, ecx);
    ecx = ebp + eax + -488;
    PUSH32(esp, ecx);
    eax = ebp + eax + -680;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00451FA1: ;
    esp = esp + 0x2C;
    if (TEST_NZ(eax, eax)) goto loc_00452740; /* jne: not equal / not zero */

loc_00451FAC: ;
    if (CMP_LE(MEM32(0x577B84), eax)) goto loc_00451FCD; /* jle: less or equal (signed <=) */

loc_00451FB4: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577B9C));
    edx = MEM32(ebp + 0x60);
    MEM16(edx + ebx * 2) = LO16(ecx);
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577B84))) goto loc_00451FB4; /* jl: less (signed <) */

loc_00451FCD: ;
    if (CMP_NE(MEM16(ebp + 0x68), 3)) goto loc_004526AE; /* jne: not equal / not zero */

loc_00451FD8: ;
    eax = MEM32(ebp + 0x1C);
    if (CMP_EQ(eax, 0x1F40)) goto loc_00452036; /* je: equal / zero */

loc_00451FE2: ;
    if (CMP_EQ(eax, 0x2B11)) goto loc_00452021; /* je: equal / zero */

loc_00451FE9: ;
    if (CMP_EQ(eax, 0x3E80)) goto loc_0045200C; /* je: equal / zero */

loc_00451FF0: ;
    if (CMP_NE(eax, 0x5622)) goto loc_0045204B; /* jne: not equal / not zero */

loc_00451FF7: ;
    fp_push(MEMF(0x577C2C)); /* fld float */
    MEM32(ebp + 0x44) = 0x577D98;
    fp_push(MEMF(0x577C30)); /* fld float */
    goto loc_00452051;

loc_0045200C: ;
    fp_push(MEMF(0x577C34)); /* fld float */
    MEM32(ebp + 0x44) = 0x578598;
    fp_push(MEMF(0x577C38)); /* fld float */
    goto loc_00452051;

loc_00452021: ;
    fp_push(MEMF(0x577C3C)); /* fld float */
    MEM32(ebp + 0x44) = 0x578D98;
    fp_push(MEMF(0x577C40)); /* fld float */
    goto loc_00452051;

loc_00452036: ;
    fp_push(MEMF(0x577C44)); /* fld float */
    MEM32(ebp + 0x44) = 0x579298;
    fp_push(MEMF(0x577C48)); /* fld float */
    goto loc_00452051;

loc_0045204B: ;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x68)); /* fld float */

loc_00452051: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x5C);
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) & 0;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00452097; /* jle: less or equal (signed <=) */

loc_0045205D: ;
    eax = MEM32(ebp + 0x38);
    edx = MEM32(ebp + 0x7C);
    eax = eax << 6;
    esi = ebp + -168;
    eax = eax + 0x577C98;
    edx = edx - esi;

loc_00452073: ;
    esi = MEM32(ebp + 0x4C);
    esi = edx + esi * 4;
    fp_push(MEMF(ebp + esi + -168)); /* fld float */
    esi = MEM32(ebp + 0x4C);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) + 1;
    eax = eax + 4;
    (void)0; /* cmp MEM32(ebp + 0x4C), ecx - flags set for next jcc */
    MEMF(ebp + esi * 4 + -168) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(MEM32(ebp + 0x4C), ecx)) goto loc_00452073; /* jl: less (signed <) */

loc_00452097: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(0x577B74), eax - flags set for next jcc */
    MEM32(ebp + 0x20) = 0x7149F2CA;
    MEM32(ebp + 0x3C) = eax;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_LE(MEM32(0x577B74), eax)) goto loc_0045220D; /* jle: less or equal (signed <=) */

loc_004520B2: ;
    eax = ecx;
    eax = eax << 2;
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + 0x40) = eax;
    eax = eax + ecx * 2;
    MEM32(ebp + 0x30) = eax;

loc_004520C6: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x5C);
    fp_push(0.0); /* fldz */
    MEM32(ebp + 0x44) = MEM32(ebp + 0x44) & 0;
    if (CMP_LE(ecx & ecx, 0)) goto loc_004521A7; /* jle: less or equal (signed <=) */

loc_004520D8: ;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + 0x28) = eax;
    eax = MEM32(ebp + 0x40);
    MEM32(ebp + 0x2C) = eax;
    eax = MEM32(ebp + 0x70);
    edx = MEM32(eax + 8);
    eax = ebp + -168;
    edx = edx - eax;
    MEM32(ebp + 0x24) = edx;
    goto loc_004520FA;

loc_004520F7: ;
    edx = MEM32(ebp + 0x24);

loc_004520FA: ;
    eax = MEM32(ebp + 0x2C);
    eax = ZX16(MEM16(eax));
    MEM32(ebp + 0x34) = eax;
    eax = MEM32(ebp + 0x44);
    eax = eax << 2;
    fp_push((double)SMEM32(ebp + 0x34)); /* fild */
    ecx = ebp + eax + -168;
    esi = ebp + eax + -872;
    MEM32(ebp + 0x44) = MEM32(ebp + 0x44) + 1;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) + 2;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(ebp + 0x28);
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = ZX16(MEM16(edx));
    MEM32(ebp + 0x34) = edx;
    edx = MEM32(ebp + 0x24);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 2;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push((double)SMEM32(ebp + 0x34)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x5C);
    (void)0; /* cmp MEM32(ebp + 0x44), ecx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(1) */
    MEMF(ebp + eax + -936) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + eax + -680)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + eax + -616)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(2) */
    /* fstp st(0) */
    if (CMP_L(MEM32(ebp + 0x44), ecx)) goto loc_004520F7; /* jl: less (signed <) */

loc_004521A7: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebp + 0x20] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004521F0; /* jp: parity */

loc_004521B1: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(ebp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 0x4C);
    MEM32(ebp + 0x3C) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_004521F2; /* jle: less or equal (signed <=) */

loc_004521BE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x5C);
    eax = eax << 2;
    ecx = eax;
    ecx = ecx >> 2;
    esi = ebp + -936;
    edi = ebp + -808;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx >> 2;
    esi = ebp + -872;
    edi = ebp + -744;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 0x64);
    goto loc_004521F2;

loc_004521F0: ;
    /* fstp st(0) */

loc_004521F2: ;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + 0x4C) = MEM32(ebp + 0x4C) + 1;
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) + eax;
    MEM32(ebp + 0x40) = MEM32(ebp + 0x40) + eax;
    eax = MEM32(ebp + 0x4C);
    if (CMP_L(eax, MEM32(0x577B74))) goto loc_004520C6; /* jl: less (signed <) */

loc_0045220D: ;
    SET_LO16(eax, MEM16(ebp + 0x3C));
    /* fstp st(0) */
    ecx = MEM32(ebp + 0x60);
    /* fstp st(0) */
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x5C);
    MEM16(edi + ebx * 2) = LO16(eax);
    SET_LO16(eax, MEM16(0x577B70));
    MEM16(ecx + ebx * 2) = LO16(eax);
    ebx++;
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00452288; /* jle: less or equal (signed <=) */

loc_00452231: ;
    fp_push(MEMF(0x648D34)); /* fld float */

loc_00452237: ;
    eax = ecx;
    eax = eax << 2;
    fp_push(MEMF(ebp + eax + -680)); /* fld float */
    edx = ebp + ecx * 8 + -100;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + eax + -616)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + eax + -488)); /* fld float */
    MEMF(ebp + ecx * 8 + -304) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + eax + -424)); /* fld float */
    MEMF(ebp + ecx * 8 + -300) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(ecx, esi)) goto loc_00452237; /* jl: less (signed <) */

loc_00452286: ;
    /* fstp st(0) */

loc_00452288: ;
    if (CMP_NE(MEM16(ebp + 0x5C), 0xA)) goto loc_00452391; /* jne: not equal / not zero */

loc_00452293: ;
    if (CMP_NE(MEM16(ebp + 0x58), 0x1F40)) goto loc_00452310; /* jne: not equal / not zero */

loc_0045229B: ;
    PUSH32(esp, MEM32(0x65462C));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(0x654630));
    ebx = ebx + ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    eax = ebx + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x577BD0);
    PUSH32(esp, MEM32(0x577BDC));
    eax = ebp + -104;
    PUSH32(esp, MEM32(0x654650));
    PUSH32(esp, eax);
    eax = ebp + -296;
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_004522D7: ;
    esp = esp + 0x2C;
    if (CMP_NE(eax, esi)) goto loc_00452740; /* jne: not equal / not zero */

loc_004522E2: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(0x577BDC), esi)) goto loc_00452661; /* jle: less or equal (signed <=) */

loc_004522F0: ;
    ecx = MEM32(ebp + 0x60);
    ebx = ebx + ecx;

loc_004522F5: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577BC8));
    MEM16(ebx) = LO16(ecx);
    ebx++;
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577BDC))) goto loc_004522F5; /* jl: less (signed <) */

loc_0045230B: ;
    goto loc_00452661;

loc_00452310: ;
    if (CMP_NE(MEM16(ebp + 0x58), 0x2B11)) goto loc_0045273B; /* jne: not equal / not zero */

loc_0045231C: ;
    PUSH32(esp, MEM32(0x654624));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(0x654628));
    ebx = ebx + ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    eax = ebx + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x577BD0);
    PUSH32(esp, MEM32(0x577BDC));
    eax = ebp + -104;
    PUSH32(esp, MEM32(0x65464C));
    PUSH32(esp, eax);
    eax = ebp + -296;
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00452358: ;
    esp = esp + 0x2C;
    if (CMP_NE(eax, esi)) goto loc_00452740; /* jne: not equal / not zero */

loc_00452363: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(0x577BDC), esi)) goto loc_00452661; /* jle: less or equal (signed <=) */

loc_00452371: ;
    ecx = MEM32(ebp + 0x60);
    ebx = ebx + ecx;

loc_00452376: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577BC8));
    MEM16(ebx) = LO16(ecx);
    ebx++;
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577BDC))) goto loc_00452376; /* jl: less (signed <) */

loc_0045238C: ;
    goto loc_00452661;

loc_00452391: ;
    if (CMP_NE(MEM16(ebp + 0x5C), 0x10)) goto loc_0045273B; /* jne: not equal / not zero */

loc_0045239C: ;
    if (CMP_NE(MEM16(ebp + 0x58), 0x3E80)) goto loc_00452503; /* jne: not equal / not zero */

loc_004523A8: ;
    PUSH32(esp, MEM32(0x65461C));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(0x654620));
    eax = edi + ebx * 2;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x577B88));
    PUSH32(esp, eax);
    PUSH32(esp, 0x577B80);
    PUSH32(esp, MEM32(0x577B84));
    eax = ebp + -104;
    PUSH32(esp, MEM32(0x654648));
    PUSH32(esp, eax);
    eax = ebp + -296;
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_004523E6: ;
    esp = esp + 0x2C;
    if (CMP_NE(eax, esi)) goto loc_00452740; /* jne: not equal / not zero */

loc_004523F1: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(0x577B84), esi)) goto loc_00452414; /* jle: less or equal (signed <=) */

loc_004523FB: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577B9C));
    edx = MEM32(ebp + 0x60);
    MEM16(edx + ebx * 2) = LO16(ecx);
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577B84))) goto loc_004523FB; /* jl: less (signed <) */

loc_00452414: ;
    PUSH32(esp, MEM32(0x654614));
    eax = MEM32(0x577B78);
    PUSH32(esp, MEM32(0x654618));
    edx = edi + ebx * 2;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x577B8C));
    eax = eax << 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x577B80);
    PUSH32(esp, MEM32(0x577B84));
    ecx = ebp + eax + -104;
    PUSH32(esp, MEM32(0x654644));
    eax = ebp + eax + -296;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00452457: ;
    esp = esp + 0x2C;
    if (CMP_NE(eax, esi)) goto loc_00452740; /* jne: not equal / not zero */

loc_00452462: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(0x577B84), esi)) goto loc_00452485; /* jle: less or equal (signed <=) */

loc_0045246C: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577B9C));
    edx = MEM32(ebp + 0x60);
    MEM16(edx + ebx * 2) = LO16(ecx);
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577B84))) goto loc_0045246C; /* jl: less (signed <) */

loc_00452485: ;
    PUSH32(esp, MEM32(0x65460C));
    eax = MEM32(0x577B7C);
    PUSH32(esp, MEM32(0x654610));
    ebx = ebx + ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x577B90));
    edx = ebx + edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x577B80);
    PUSH32(esp, MEM32(0x577B84));
    eax = eax << 2;
    PUSH32(esp, MEM32(0x654640));
    ecx = ebp + eax + -104;
    PUSH32(esp, ecx);
    eax = ebp + eax + -296;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_004524CA: ;
    esp = esp + 0x2C;
    if (CMP_NE(eax, esi)) goto loc_00452740; /* jne: not equal / not zero */

loc_004524D5: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(0x577B84), esi)) goto loc_00452661; /* jle: less or equal (signed <=) */

loc_004524E3: ;
    ecx = MEM32(ebp + 0x60);
    ebx = ebx + ecx;

loc_004524E8: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577B9C));
    MEM16(ebx) = LO16(ecx);
    ebx++;
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577B84))) goto loc_004524E8; /* jl: less (signed <) */

loc_004524FE: ;
    goto loc_00452661;

loc_00452503: ;
    if (CMP_NE(MEM16(ebp + 0x58), 0x5622)) goto loc_0045273B; /* jne: not equal / not zero */

loc_0045250F: ;
    PUSH32(esp, MEM32(0x654604));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(0x654608));
    eax = edi + ebx * 2;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x577B88));
    PUSH32(esp, eax);
    PUSH32(esp, 0x577B80);
    PUSH32(esp, MEM32(0x577B84));
    eax = ebp + -104;
    PUSH32(esp, MEM32(0x65463C));
    PUSH32(esp, eax);
    eax = ebp + -296;
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_0045254D: ;
    esp = esp + 0x2C;
    if (CMP_NE(eax, esi)) goto loc_00452740; /* jne: not equal / not zero */

loc_00452558: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(0x577B84), esi)) goto loc_0045257B; /* jle: less or equal (signed <=) */

loc_00452562: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577B9C));
    edx = MEM32(ebp + 0x60);
    MEM16(edx + ebx * 2) = LO16(ecx);
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577B84))) goto loc_00452562; /* jl: less (signed <) */

loc_0045257B: ;
    PUSH32(esp, MEM32(0x6545FC));
    eax = MEM32(0x577B78);
    PUSH32(esp, MEM32(0x654600));
    edx = edi + ebx * 2;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x577B8C));
    eax = eax << 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x577B80);
    PUSH32(esp, MEM32(0x577B84));
    ecx = ebp + eax + -104;
    PUSH32(esp, MEM32(0x654638));
    eax = ebp + eax + -296;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_004525BE: ;
    esp = esp + 0x2C;
    if (CMP_NE(eax, esi)) goto loc_00452740; /* jne: not equal / not zero */

loc_004525C9: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(0x577B84), esi)) goto loc_004525EC; /* jle: less or equal (signed <=) */

loc_004525D3: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577B9C));
    edx = MEM32(ebp + 0x60);
    MEM16(edx + ebx * 2) = LO16(ecx);
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577B84))) goto loc_004525D3; /* jl: less (signed <) */

loc_004525EC: ;
    PUSH32(esp, MEM32(0x6545F4));
    eax = MEM32(0x577B7C);
    PUSH32(esp, MEM32(0x6545F8));
    ebx = ebx + ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x577B90));
    edx = ebx + edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x577B80);
    PUSH32(esp, MEM32(0x577B84));
    eax = eax << 2;
    PUSH32(esp, MEM32(0x654634));
    ecx = ebp + eax + -104;
    PUSH32(esp, ecx);
    eax = ebp + eax + -296;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00451386(); /* call 0x00451386 */

loc_00452631: ;
    esp = esp + 0x2C;
    if (CMP_NE(eax, esi)) goto loc_00452740; /* jne: not equal / not zero */

loc_0045263C: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(0x577B84), esi)) goto loc_00452661; /* jle: less or equal (signed <=) */

loc_00452646: ;
    ecx = MEM32(ebp + 0x60);
    ebx = ebx + ecx;

loc_0045264B: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x577B9C));
    MEM16(ebx) = LO16(ecx);
    ebx++;
    ebx++;
    eax++;
    if (CMP_L(eax, MEM32(0x577B84))) goto loc_0045264B; /* jl: less (signed <) */

loc_00452661: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x5C);
    edx = 0; /* xor self */
    (void)0; /* cmp edi, esi - flags set for next jcc */
    esi = MEM32(ebp + 0x70);
    if (CMP_LE(edi, esi)) goto loc_004526B1; /* jle: less or equal (signed <=) */

loc_0045266E: ;
    ecx = MEM32(ebp + 0x38);
    ecx = ecx << 6;
    ecx = ecx + 0x577C98;

loc_0045267A: ;
    fp_push(MEMF(ecx)); /* fld float */
    ebx = MEM32(esi);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = edx;
    eax = eax << 2;
    edx++;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + ebx) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esi + 4);
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + ebx) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(edx, edi)) goto loc_0045267A; /* jl: less (signed <) */

loc_004526AC: ;
    goto loc_004526B1;

loc_004526AE: ;
    esi = MEM32(ebp + 0x70);

loc_004526B1: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x5C);
    ecx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + 0x40) = edi;
    if (CMP_LE(edi & edi, 0)) goto loc_004526E0; /* jle: less or equal (signed <=) */

loc_004526BE: ;
    edx = MEM32(ebp + 0x38);
    edx = edx << 6;
    edx = edx + 0x577C98;

loc_004526CA: ;
    eax = MEM32(ebp + 0x48);
    eax = MEM32(eax);
    eax = eax + ecx * 4;
    fp_push(MEMF(eax)); /* fld float */
    ecx++;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = edx + 4;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(ecx, edi)) goto loc_004526CA; /* jl: less (signed <) */

loc_004526E0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x68);
    if (CMP_LE(eax & eax, 0)) goto loc_00452717; /* jle: less or equal (signed <=) */

loc_004526E8: ;
    ebx = MEM32(ebp + 0x78);
    edi = esi;
    ebx = ebx - esi;
    MEM32(ebp + 0x3C) = eax;

loc_004526F2: ;
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_00444894(); /* call 0x00444894 */

loc_004526FF: ;
    PUSH32(esp, MEM32(ebp + 0x40));
    PUSH32(esp, MEM32(ebx + edi));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_0045270C: ;
    esp = esp + 0x18;
    edi = edi + 4;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) - 1;
    if ((MEM32(ebp + 0x3C) != 0)) goto loc_004526F2; /* jne: not equal / not zero */

loc_00452717: ;
    if (CMP_NE(MEM16(ebp + 0x68), 3)) goto loc_00452737; /* jne: not equal / not zero */

loc_0045271E: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(ebp + 0x40), eax)) goto loc_00452737; /* jle: less or equal (signed <=) */

loc_00452725: ;
    ecx = MEM32(esi + 8);
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    ecx = MEM32(ebp + 0x7C);
    MEMF(ecx + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax++;
    if (CMP_L(eax, MEM32(ebp + 0x40))) goto loc_00452725; /* jl: less (signed <) */

loc_00452737: ;
    eax = 0; /* xor self */
    goto loc_00452740;

loc_0045273B: ;
    eax = 0x80004005u;

loc_00452740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x50;
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
 * sub_00452748
 * Original: 0x00452748 - 0x004528AB (355 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00452748(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00452748: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0x1010;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00452755: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_0045275D: ;
    if (TEST_Z(eax, eax)) goto loc_004527A4; /* je: equal / zero */

loc_00452761: ;
    ecx = MEM32(ebp + 0x14);
    if (CMP_LE(ecx, 0)) goto loc_004528A6; /* jle: less or equal (signed <=) */

loc_0045276D: ;
    ecx = ecx >> 2;
    esi = MEM32(ebp + 8);
    edi = ebp + -4112;
    edx = MEM32(ebp + 0x1C);
    edi = edi - 0x10;

loc_0045277F: ;
    xmm0 = MEMF(esi); /* movups */
    xmm1 = MEMF(edx); /* movups */
    edi = edi + 0x10;
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    esi = esi + 0x10;
    edx = edx + 0x10;
    ecx--;
    MEMF(edi) = xmm0; /* movups */
    if ((ecx != 0)) goto loc_0045277F; /* jne: not equal / not zero */

loc_00452797: ;
    fp_push(0.0); /* fldz */
    MEMF(edi + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(edi + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(edi + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_004527F4;

loc_004527A4: ;
    ecx = MEM32(ebp + 0x14);
    if (CMP_LE(ecx, 0)) goto loc_004528A6; /* jle: less or equal (signed <=) */

loc_004527B0: ;
    ecx--;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x1C);
    edx = ebp + -4112;
    goto loc_004527C3;

loc_004527BF: ;
    MEMF(edx + ecx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_004527C3: ;
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_004527BF; /* jge: greater or equal (signed >=) */

loc_004527CC: ;
    MEMF(edx + ecx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 0x14);
    fp_push(0.0); /* fldz */
    MEMF(ebp + eax * 4 + -4112) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 0x14);
    fp_push(0.0); /* fldz */
    MEMF(ebp + eax * 4 + -4108) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 0x14);
    fp_push(0.0); /* fldz */
    MEMF(ebp + eax * 4 + -4104) = (float)fp_top(); fp_popp(); /* fstp */

loc_004527F4: ;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_004527F9: ;
    if (TEST_Z(eax, eax)) goto loc_0045284D; /* je: equal / zero */

loc_004527FD: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    ecx = ecx >> 2;
    if (TEST_Z(eax, 3)) goto loc_0045280F; /* je: equal / zero */

loc_0045280C: ;
    ecx = ecx + 1;

loc_0045280F: ;
    ebx = 0; /* xor self */
    edi = MEM32(ebp + 0xC);

loc_00452814: ;
    xmm7 = 0.0f; /* xorps self = zero */
    esi = ebp + -4112;
    edx = esi + ebx * 4;
    eax = MEM32(ebp + 0x14);
    eax = eax - ebx;

loc_00452825: ;
    xmm0 = MEMF(edx); /* movups */
    xmm1 = MEMF(esi); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    edx = edx + 4;
    esi = esi + 4;
    eax--;
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    if ((eax != 0)) goto loc_00452825; /* jne: not equal / not zero */

loc_0045283F: ;
    MEMF(edi) = xmm7; /* movups */
    edi = edi + 0x10;
    ebx = ebx + 4;
    ecx--;
    if ((ecx != 0)) goto loc_00452814; /* jne: not equal / not zero */

loc_0045284B: ;
    goto loc_00452884;

loc_0045284D: ;
    ecx = 0; /* xor self */
    ebx = MEM32(ebp + 0x14);
    ebx--;
    edx = MEM32(ebp + 0xC);
    esi = ebp + -4112;
    edi = ebp + -4112;

loc_00452862: ;
    if (CMP_GE(ecx, MEM32(ebp + 0x10))) goto loc_00452884; /* jge: greater or equal (signed >=) */

loc_00452867: ;
    eax = ebx;
    fp_push(0.0); /* fldz */
    goto loc_0045286F;

loc_0045286D: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */

loc_0045286F: ;
    fp_push(MEMF(esi + eax * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0045286D; /* jge: greater or equal (signed >=) */

loc_00452878: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    ebx--;
    edi = edi + 4;
    MEMF(edx + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    ecx++;
    goto loc_00452862;

loc_00452884: ;
    ecx = MEM32(ebp + 0x10);
    if (CMP_LE(ecx, 0)) goto loc_004528A6; /* jle: less or equal (signed <=) */

loc_0045288C: ;
    ecx--;
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x18);
    goto loc_00452899;

loc_00452895: ;
    MEMF(esi + ecx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_00452899: ;
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_00452895; /* jge: greater or equal (signed >=) */

loc_004528A2: ;
    MEMF(esi + ecx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_004528A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004528AB
 * Original: 0x004528AB - 0x00452AE4 (569 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004528AB(void)
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

loc_004528AB: ;
    PUSH32(esp, ebp);
    ebp = esp + -100;
    esp = esp - 0xE4;
    edx = MEM32(ebp + 0x7C);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x6C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x11);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -64;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx + 1;
    if (CMP_LE(ecx & ecx, 0)) goto loc_004528D7; /* jle: less or equal (signed <=) */

loc_004528D0: ;
    esi = ebx;
    edi = ebp + -64;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_004528D7: ;
    eax = MEM32(ebx);
    fp_push(MEMF(0x648D14)); /* fld float */
    MEM32(ebp + 4) = eax;
    fp_push(MEMF(ebp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0045291D; /* jp: parity */

loc_004528EE: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    /* fstp st(0) */
    if (CMP_LE(edx & edx, 0)) goto loc_00452ADC; /* jle: less or equal (signed <=) */

loc_004528F8: ;
    eax = MEM32(ebp + 0x70);
    ecx = MEM32(ebp + 0x78);
    edx = MEM32(ebp + 0x74);
    esi = MEM32(ebp + 0x7C);
    ecx = ecx - eax;
    edx = edx - eax;

loc_00452908: ;
    fp_push(MEMF(ecx + eax)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_00452908; /* jne: not equal / not zero */

loc_00452918: ;
    goto loc_00452ADC;

loc_0045291D: ;
    eax = ebx + 4;
    fp_push(MEMF(eax)); /* fld float */
    esi = MEM32(ebp + 0x74);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM32(ebp + 0x50) = eax;
    fp_top() = -fp_top(); /* fchs */
    /* fld st(0) */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648d08] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0045296D; /* jne: not equal / not zero */

loc_00452942: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_LE(edx & edx, 0)) goto loc_00452ADC; /* jle: less or equal (signed <=) */

loc_0045294E: ;
    eax = MEM32(ebp + 0x70);
    ecx = MEM32(ebp + 0x78);
    ecx = ecx - eax;
    esi = esi - eax;

loc_00452958: ;
    fp_push(MEMF(eax + ecx)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + esi) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_00452958; /* jne: not equal / not zero */

loc_00452968: ;
    goto loc_00452ADC;

loc_0045296D: ;
    edi = MEM32(ebp + 0x70);
    /* fld st(0) */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0; /* xor self */
    eax++;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    /* fstp st(0) */
    fp_push(MEMF(esi)); /* fld float */
    MEM32(ebp + 0x6C) = eax;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_LE(edx, eax)) goto loc_00452A74; /* jle: less or equal (signed <=) */

loc_00452994: ;
    ebx = ebx + 8;
    MEM32(ebp + 0x58) = ebx;
    ecx = esi + 4;
    ebx = ebp + 8;
    ebx = ebx - edi;
    esi = ebp + 0xC;
    esi = esi - edi;
    edx = edi;
    MEM32(ebp + 0x4C) = ebx;
    MEM32(ebp + 0x48) = esi;

loc_004529AF: ;
    (void)0; /* cmp MEM32(ebp + 0x6C), 0 - flags set for next jcc */
    eax = MEM32(ebp + 0x58);
    eax = MEM32(eax);
    MEM32(ecx) = eax;
    if (CMP_LE(MEM32(ebp + 0x6C), 0)) goto loc_004529E6; /* jle: less or equal (signed <=) */

loc_004529BC: ;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x5C) = eax;
    eax = MEM32(ebp + 0x6C);
    MEM32(ebp + 0x54) = edx;
    MEM32(ebp + 0x60) = eax;

loc_004529CB: ;
    eax = MEM32(ebp + 0x54);
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(ebp + 0x5C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) - 4;
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) + 4;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) - 1;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    if ((MEM32(ebp + 0x60) != 0)) goto loc_004529CB; /* jne: not equal / not zero */

loc_004529E6: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + 0x60) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x60)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648d08] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_00452AB7; /* je: equal / zero */

loc_00452A08: ;
    eax = MEM32(ebp + 0x60);
    MEM32(edx + 4) = eax;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(ebp + 0x6C), eax)) goto loc_00452A48; /* jle: less or equal (signed <=) */

loc_00452A15: ;
    esi = edx;

loc_00452A17: ;
    fp_push(MEMF(esi)); /* fld float */
    eax++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi - 4;
    (void)0; /* cmp eax, MEM32(ebp + 0x6C) - flags set for next jcc */
    MEMF(ebp + eax * 4 + -132) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(eax, MEM32(ebp + 0x6C))) goto loc_00452A17; /* jl: less (signed <) */

loc_00452A2B: ;
    ebx = MEM32(ebp + 0x6C);
    esi = ebp + -128;
    eax = edi;
    esi = esi - edi;

loc_00452A35: ;
    fp_push(MEMF(esi + eax)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    ebx--;
    if ((ebx != 0)) goto loc_00452A35; /* jne: not equal / not zero */

loc_00452A42: ;
    esi = MEM32(ebp + 0x48);
    ebx = MEM32(ebp + 0x4C);

loc_00452A48: ;
    fp_push(MEMF(ecx)); /* fld float */
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) + 1;
    eax = MEM32(ebp + 0x6C);
    /* fld st(0) */
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    /* FPU: fsubr st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + edx) = (float)fp_top(); fp_popp(); /* fstp */
    edx = edx + 4;
    (void)0; /* cmp eax, MEM32(ebp + 0x7C) - flags set for next jcc */
    /* fstp st(0) */
    if (CMP_L(eax, MEM32(ebp + 0x7C))) goto loc_004529AF; /* jl: less (signed <) */

loc_00452A71: ;
    edx = MEM32(ebp + 0x7C);

loc_00452A74: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    /* fstp st(0) */
    if (CMP_LE(edx & edx, 0)) goto loc_00452A8E; /* jle: less or equal (signed <=) */

loc_00452A7A: ;
    eax = MEM32(ebp + 0x78);
    ecx = edi;
    ecx = ecx - eax;
    esi = edx;

loc_00452A83: ;
    fp_push(MEMF(ecx + eax)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_00452A83; /* jne: not equal / not zero */

loc_00452A8E: ;
    fp_push(MEMF(ebp + -64)); /* fld float */
    eax = 0; /* xor self */
    eax++;
    if (CMP_L(edx, eax)) goto loc_00452AAF; /* jl: less (signed <) */

loc_00452A98: ;
    ecx = ebp + -60;
    edi = edi - ecx;

loc_00452A9D: ;
    ecx = edi + eax * 4;
    fp_push(MEMF(ebp + ecx + -64)); /* fld float */
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (CMP_LE(eax, edx)) goto loc_00452A9D; /* jle: less or equal (signed <=) */

loc_00452AAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x64;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00452AB7: ;
    esi = MEM32(ebp + 0x7C);
    /* fstp st(0) */
    if (CMP_LE(esi & esi, 0)) goto loc_00452ADC; /* jle: less or equal (signed <=) */

loc_00452AC0: ;
    ecx = MEM32(ebp + 0x78);
    edx = MEM32(ebp + 0x74);
    ecx = ecx - edi;
    eax = edi;
    edx = edx - edi;

loc_00452ACC: ;
    fp_push(MEMF(ecx + eax)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_00452ACC; /* jne: not equal / not zero */

loc_00452ADC: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    goto loc_00452AAF;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00452AE4
 * Original: 0x00452AE4 - 0x00452B00 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00452AE4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00452AE4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(0x577BF8), 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    if (CMP_EQ(MEM32(0x577BF8), 4)) { sub_00452B00(); return; } /* je: equal / zero */

loc_00452AF9: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00452B69(); return; /* tail jmp 0x00452B69 */

}

/**
 * sub_00452B6D
 * Original: 0x00452B6D - 0x00452B9D (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00452B6D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00452B6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(0x577B84);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = MEM32(0x577BAC);
    eax = eax + ecx;
    ecx = MEM32(0x577BAC);
    eax = eax + ecx;
    if (CMP_LE(eax, 5)) { sub_00452B9D(); return; } /* jle: less or equal (signed <=) */

loc_00452B93: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00452D2F(); return; /* tail jmp 0x00452D2F */

}

/**
 * sub_00452D32
 * Original: 0x00452D32 - 0x00452D4A (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00452D32(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00452D32: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(0x577BDC);
    eax++;
    if (CMP_EQ(eax, 4)) { sub_00452D4A(); return; } /* je: equal / zero */

loc_00452D43: ;
    eax = 0x80004005u;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00452EA8
 * Original: 0x00452EA8 - 0x00452ECD (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00452EA8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00452EA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(0x577B84);
    ecx = MEM32(0x577B84);
    ecx = ecx + eax;
    ecx = ecx + MEM32(0x577B84);
    if (CMP_LE(ecx, 4)) { sub_00452ECD(); return; } /* jle: less or equal (signed <=) */

loc_00452EC6: ;
    eax = 0x80004005u;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00453147
 * Original: 0x00453147 - 0x004532BE (375 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00453147(void)
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

loc_00453147: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    edi = 0xFFFFFF01u;
    if (CMP_EQ(LO16(esi), LO16(edi))) goto loc_00453174; /* je: equal / zero */

loc_00453160: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    goto loc_00453169;

loc_00453166: ;
    esi = esi + MEM32(ebp + 0x1C);

loc_00453169: ;
    ecx = SX16(LO16(esi));
    ecx = ecx + eax + -1;
    if (TEST_S(ecx, ecx)) goto loc_00453166; /* jl: less (signed <) */

loc_00453174: ;
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    eax++;
    if (CMP_NE(MEM16(ebp + 0x28), LO16(ebx))) goto loc_004531BA; /* jne: not equal / not zero */

loc_0045317F: ;
    if (CMP_NE(MEM16(ebp + 8), LO16(ebx))) goto loc_00453199; /* jne: not equal / not zero */

loc_00453185: ;
    (void)0; /* cmp LO16(esi), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 0x28) = 0x20;
    MEM32(ebp + 0x18) = ebx;
    if (CMP_EQ(LO16(esi), LO16(edi))) goto loc_004531CC; /* je: equal / zero */

loc_00453194: ;
    ebx = esi + -16;
    goto loc_004531CC;

loc_00453199: ;
    if (CMP_NE(MEM16(ebp + 8), LO16(eax))) goto loc_004531BA; /* jne: not equal / not zero */

loc_0045319F: ;
    (void)0; /* cmp LO16(esi), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 0x28) = 8;
    MEM32(ebp + 0x18) = eax;
    if (CMP_EQ(LO16(esi), LO16(edi))) goto loc_004531CC; /* je: equal / zero */

loc_004531AE: ;
    ecx = MEM32(ebp + 0x24);
    SET_LO16(ebx, MEM16(ecx));
    SET_LO16(ebx, LO16(ebx) - 4);
    goto loc_004531CC;

loc_004531BA: ;
    (void)0; /* cmp LO16(esi), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 0x28) = 0x10;
    MEM32(ebp + 0x18) = ebx;
    if (CMP_EQ(LO16(esi), LO16(edi))) goto loc_004531CC; /* je: equal / zero */

loc_004531C9: ;
    ebx = esi + -8;

loc_004531CC: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    eax = ebp + -228;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DC5(); /* call 0x00448DC5 */

loc_004531DC: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO16(esi), LO16(edi))) goto loc_00453221; /* je: equal / zero */

loc_004531E4: ;
    MEM32(ebp + -4) = 0xA;

loc_004531EB: ;
    if (CMP_LE(MEM16(ebp + 0xC), 0)) goto loc_00453219; /* jle: less or equal (signed <=) */

loc_004531F2: ;
    edx = ZX16(MEM16(ebp + 0xC));
    eax = SX16(LO16(esi));
    ecx = ebp + eax * 2 + -228;

loc_00453200: ;
    if (TEST_S(eax, eax)) goto loc_00453213; /* jl: less (signed <) */

loc_00453204: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x20);
    if (CMP_GE(eax, edi)) goto loc_00453213; /* jge: greater or equal (signed >=) */

loc_0045320C: ;
    SET_LO16(edi, MEM16(ebp + 0x18));
    MEM16(ecx) = LO16(edi);

loc_00453213: ;
    ecx++;
    ecx++;
    eax++;
    edx--;
    if ((edx != 0)) goto loc_00453200; /* jne: not equal / not zero */

loc_00453219: ;
    esi = esi + MEM32(ebp + 0x1C);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_004531EB; /* jne: not equal / not zero */

loc_00453221: ;
    PUSH32(esp, 0x10);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -68;
    esi = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x28), LO16(edx) - flags set for next jcc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebp + 0x18) = edx;
    if (CMP_LE(MEM16(ebp + 0x28), LO16(edx))) goto loc_0045329B; /* jle: less or equal (signed <=) */

loc_00453238: ;
    if (CMP_GE(MEM16(ebp + 0x18), 0x1F4)) goto loc_0045329B; /* jge: greater or equal (signed >=) */

loc_00453240: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    (void)0; /* cmp LO16(ebx), LO16(edx) - flags set for next jcc */
    ecx = ebx;
    if (CMP_GE(LO16(ebx), LO16(edx))) goto loc_00453252; /* jge: greater or equal (signed >=) */

loc_0045324A: ;
    ecx = ecx + MEM32(ebp + 0x1C);
    if (CMP_L(LO16(ecx), LO16(edx))) goto loc_0045324A; /* jl: less (signed <) */

loc_00453252: ;
    eax = MEM32(ebp + 0x20);
    if (CMP_L(LO16(ecx), LO16(eax))) goto loc_00453279; /* jl: less (signed <) */

loc_0045325A: ;
    ecx = 0; /* xor self */
    if (CMP_LE(LO16(eax), LO16(edx))) goto loc_00453274; /* jle: less or equal (signed <=) */

loc_00453261: ;
    edi = SX16(LO16(ecx));
    if (CMP_NE(MEM16(ebp + edi * 2 + -228), LO16(edx))) goto loc_00453274; /* jne: not equal / not zero */

loc_0045326E: ;
    ecx++;
    if (CMP_L(LO16(ecx), LO16(eax))) goto loc_00453261; /* jl: less (signed <) */

loc_00453274: ;
    if (CMP_GE(LO16(ecx), LO16(eax))) goto loc_00453294; /* jge: greater or equal (signed >=) */

loc_00453279: ;
    eax = SX16(LO16(ecx));
    eax = ebp + eax * 2 + -228;
    if (CMP_EQ(MEM16(eax), LO16(edx))) goto loc_00453294; /* je: equal / zero */

loc_00453288: ;
    edi = SX16(LO16(esi));
    MEM16(ebp + edi * 2 + -68) = LO16(ecx);
    MEM16(eax) = LO16(edx);
    esi++;

loc_00453294: ;
    ebx++;
    if (CMP_L(LO16(esi), MEM16(ebp + 0x28))) goto loc_00453238; /* jl: less (signed <) */

loc_0045329B: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    SET_LO16(ecx, MEM16(ebp + eax * 2 + -68));
    eax = esi;
    PUSH32(esp, 2);
    POP32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(edx, edx)) { sub_004532BE(); return; } /* jne: not equal / not zero */

loc_004532BA: ;
    fp_push(1.0); /* fld1 */
    g_seh_ebp = ebp; sub_004532C4(); return; /* tail jmp 0x004532C4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004532EB
 * Original: 0x004532EB - 0x004533AA (191 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004532EB(void)
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

loc_004532EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00453300: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    SET_LO16(ecx, LO16(ecx) & 0x200);
    SET_LO16(ecx, (uint32_t)(-(int32_t)LO16(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    ecx = ecx & 0xFFFFFFFEu;
    edi = 0; /* xor self */
    eax = eax & 0x1FF;
    edi++;
    ecx++;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + 0x10) = edi;
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_00453371; /* jle: less or equal (signed <=) */

loc_0045332C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ZX16(LO16(eax));
    MEM32(ebp + -8) = eax;

loc_00453336: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    if (TEST_NZ(edx, edx)) goto loc_0045336C; /* jne: not equal / not zero */

loc_00453346: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    edx = MEM32(ebp + 0xC);
    edi++;
    if (CMP_L(LO16(edi), LO16(edx))) goto loc_0045336C; /* jl: less (signed <) */

loc_00453352: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    PUSH32(esp, ebx);
    POP32(esp, eax);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    edi = MEM32(ebp + 0x10);
    if (CMP_L(LO16(edi), LO16(edx))) goto loc_0045336C; /* jl: less (signed <) */

loc_00453363: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    MEM32(ebp + 0x10) = eax;
    edi = eax;

loc_0045336C: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if ((MEM32(ebp + -8) != 0)) goto loc_00453336; /* jne: not equal / not zero */

loc_00453371: ;
    eax = SX16(LO16(ecx));
    MEM32(ebp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    PUSH32(esp, 2);
    POP32(esp, ebx);
    MEMF(esi + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -12);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0xFFFFFFFEu;
    edx++;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = SX16(LO16(edx));
    MEM32(ebp + 0x10) = eax;
    eax = SX16(LO16(edi));
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    POP32(esp, edi);
    MEMF(esi + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
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
 * sub_004533AA
 * Original: 0x004533AA - 0x0045349C (242 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004533AA(void)
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

loc_004533AA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = ZX16(MEM16(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, MEM32(ebp + 0xC));
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_004533CC: ;
    eax = ZX16(MEM16(ebp + 8));
    esi = 0; /* xor self */
    ebx = eax + -5;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -8) = esi;
    if (CMP_LE(ebx, esi)) goto loc_0045343A; /* jle: less or equal (signed <=) */

loc_004533DE: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(eax + esi * 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00453894(); /* call 0x00453894 */

loc_004533F8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = esi + eax * 4;
    ecx = ecx + eax;
    eax = edi + ecx * 4;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(ebp + -16) = ecx;
    esp = esp + 0x14;
    fp_push((double)SMEM32(ebp + -16)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xE);
    ecx = esi + eax * 4;
    ecx = ecx + eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    esi = (uint32_t)(int32_t)SMEM16(ebp + -8);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    eax = edi + ecx * 4;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(ebp + -16) = ecx;
    fp_push((double)SMEM32(ebp + -16)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(esi, ebx)) goto loc_004533DE; /* jl: less (signed <) */

loc_0045343A: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xFFFFFFFBu;
    if (CMP_GE(LO16(eax), 5)) goto loc_00453497; /* jge: greater or equal (signed >=) */

loc_00453446: ;
    ecx = MEM32(ebp + 0x14);
    esi = SX16(LO16(eax));
    ebx = ecx + esi * 2;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    ecx = ecx - eax;
    eax = ZX16(LO16(ecx));
    MEM32(ebp + 8) = eax;

loc_0045345A: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00453894(); /* call 0x00453894 */

loc_00453472: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = esi + eax * 4;
    ecx = ecx + eax;
    eax = edi + ecx * 4;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(ebp + -16) = ecx;
    esp = esp + 0x14;
    esi++;
    fp_push((double)SMEM32(ebp + -16)); /* fild */
    ebx++;
    ebx++;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    if ((MEM32(ebp + 8) != 0)) goto loc_0045345A; /* jne: not equal / not zero */

loc_00453497: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0045349C
 * Original: 0x0045349C - 0x004534EB (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045349C(void)
{

loc_0045349C: ;
    eax = ZX16(MEM16(esp + 8));
    ecx = ZX16(MEM16(esp + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x757);
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xFFFF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    POP32(esp, esi);
    ecx = ZX16(LO16(edx));
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = edx + edx * 4 + 6;
    esi = ZX16(LO16(eax));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC34B);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = ZX16(MEM16(esp + 0x10));
    esi = 0x3E8;
    esi = esi - ecx;
    eax = ZX16(LO16(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    SET_LO16(eax, LO16(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_004534EB
 * Original: 0x004534EB - 0x004535CF (228 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004534EB(void)
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

loc_004534EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_004534FC: ;
    esi = MEM32(ebp + 0x20);
    edi = MEM32(ebp + 0x18);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0xC), LO16(edx) - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(MEM16(ebp + 0xC), LO16(edx))) { sub_004535CF(); return; } /* je: equal / zero */

loc_00453510: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x10), 0x18 - flags set for next jcc */
    SET_LO16(eax, MEM16(edi));
    MEM32(ebp + 0xC) = eax;
    if (CMP_NE(MEM16(ebp + 0x10), 0x18)) goto loc_00453577; /* jne: not equal / not zero */

loc_0045351F: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM16(ebp + 0xC) = (uint32_t)((int32_t)MEM16(ebp + 0xC) >> 3);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM16(ebp + 0xC) = (uint32_t)((int32_t)MEM16(ebp + 0xC) >> 1);
    eax = eax & 7;
    eax = eax + eax * 2;
    eax = eax - edx;
    ecx = ecx & 1;
    (void)0; /* cmp LO16(ecx), 1 - flags set for next jcc */
    eax = eax + esi + 2;
    if (CMP_NE(LO16(ecx), 1)) goto loc_0045354F; /* jne: not equal / not zero */

loc_00453547: ;
    fp_push(MEMF(0x648D34)); /* fld float */
    goto loc_00453551;

loc_0045354F: ;
    fp_push(1.0); /* fld1 */

loc_00453551: ;
    if (CMP_GE(LO16(eax), MEM16(ebp + 0x24))) goto loc_0045356C; /* jge: greater or equal (signed >=) */

loc_00453557: ;
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_00453567; /* jl: less (signed <) */

loc_0045355C: ;
    ebx = MEM32(ebp + 0x14);
    /* fld st(0) */
    ecx = SX16(LO16(eax));
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_00453567: ;
    eax = eax + MEM32(ebp + 0x28);
    goto loc_00453551;

loc_0045356C: ;
    edx++;
    /* fstp st(0) */
    if (CMP_L(LO16(edx), 3)) goto loc_0045351F; /* jl: less (signed <) */

loc_00453575: ;
    g_seh_ebp = ebp; sub_004535E3(); return; /* tail jmp 0x004535E3 */

loc_00453577: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM16(ebp + 0xC) = (uint32_t)((int32_t)MEM16(ebp + 0xC) >> 2);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM16(ebp + 0xC) = (uint32_t)((int32_t)MEM16(ebp + 0xC) >> 1);
    eax = eax & 3;
    eax = eax << 2;
    eax = eax - edx;
    ecx = ecx & 1;
    (void)0; /* cmp LO16(ecx), 1 - flags set for next jcc */
    eax = eax + esi + 3;
    if (CMP_NE(LO16(ecx), 1)) goto loc_004535A7; /* jne: not equal / not zero */

loc_0045359F: ;
    fp_push(MEMF(0x648D34)); /* fld float */
    goto loc_004535A9;

loc_004535A7: ;
    fp_push(1.0); /* fld1 */

loc_004535A9: ;
    if (CMP_GE(LO16(eax), MEM16(ebp + 0x24))) goto loc_004535C4; /* jge: greater or equal (signed >=) */

loc_004535AF: ;
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_004535BF; /* jl: less (signed <) */

loc_004535B4: ;
    ebx = MEM32(ebp + 0x14);
    /* fld st(0) */
    ecx = SX16(LO16(eax));
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_004535BF: ;
    eax = eax + MEM32(ebp + 0x28);
    goto loc_004535A9;

loc_004535C4: ;
    edx++;
    /* fstp st(0) */
    if (CMP_L(LO16(edx), 4)) goto loc_00453577; /* jl: less (signed <) */

loc_004535CD: ;
    g_seh_ebp = ebp; sub_004535E3(); return; /* tail jmp 0x004535E3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00453613
 * Original: 0x00453613 - 0x00453787 (372 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00453613(void)
{
    uint32_t ebp;
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

loc_00453613: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, ebx);
    fp_push(MEMF(0x648E68)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045362B: ;
    ebx = SX16(LO16(eax));
    MEM32(ebp + -4) = ebx;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    fp_push(MEMF(0x649228)); /* fld float */
    MEM32(ebp + 0x14) = eax;
    /* FPU: fsubr st(1) */
    /* fld st(2) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004536F8; /* jp: parity */

loc_0045364E: ;
    /* fstp st(0) */
    eax = 0; /* xor self */
    /* fstp st(0) */
    eax++;

loc_00453655: ;
    edi = SX16(LO16(eax));
    edi = edi << 6;
    edi = edi + 0x57B340;
    MEM32(ebp + -8) = edi;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_00453669: ;
    if (TEST_Z(eax, eax)) { sub_00453787(); return; } /* je: equal / zero */

loc_00453671: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    edi = ebx + -4;
    edx = ecx + -4;
    esi = MEM32(ebp + -8);
    xmm0 = MEMF(esi); /* movups */
    xmm1 = MEMF(esi + 0x10); /* movups */
    xmm2 = MEMF(esi + 0x20); /* movups */
    xmm3 = MEMF(esi + 0x30); /* movups */
    eax = 0xFFFFFFF9u;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    eax = eax - ecx;
    esi = ebx + eax * 4;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);

loc_004536A1: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(esi); /* movups */
    /* mulps: xmm4 *= xmm0 (packed 4xfloat) */
    xmm5 = MEMF(esi + 0x10); /* movups */
    /* mulps: xmm5 *= xmm1 (packed 4xfloat) */
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x20); /* movups */
    /* mulps: xmm6 *= xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    edi = edi + 4;
    edx = edx + 4;
    xmm4 = MEMF(esi + 0x30); /* movups */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    esi = esi + 4;
    ecx--;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    xmm5 = xmm7; /* movaps */
    /* shufps xmm5, xmm5, 0xe */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm5 = xmm7; /* movaps */
    /* shufps xmm5, xmm5, 1 */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    MEMF(edi) = xmm7; /* movss */
    MEMF(edx) = xmm7; /* movss */
    if ((ecx != 0)) goto loc_004536A1; /* jne: not equal / not zero */

loc_004536F3: ;
    g_seh_ebp = ebp; sub_004537DD(); return; /* tail jmp 0x004537DD */

loc_004536F8: ;
    fp_push(MEMF(0x648EA8)); /* fld float */
    /* FPU: fsubr st(1) */
    /* fld st(2) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00453716; /* jp: parity */

loc_0045370B: ;
    /* fstp st(0) */
    eax = 0; /* xor self */
    /* fstp st(0) */
    goto loc_00453655;

loc_00453716: ;
    fp_push(MEMF(0x648E64)); /* fld float */
    /* FPU: fsubr st(1) */
    /* fld st(2) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    (void)0; /* test HI8(eax), 5 - flags set for next jcc */
    /* fstp st(0) */
    if (1 /* jp after test - parity */) goto loc_00453735; /* jp: parity */

loc_0045372D: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_00453655;

loc_00453735: ;
    edi = ZX16(MEM16(ebp + 0xC));
    if (CMP_GE(ebx, edi)) goto loc_0045373F; /* jge: greater or equal (signed >=) */

loc_0045373D: ;
    edi = ebx;

loc_0045373F: ;
    edx = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    if (CMP_LE(LO16(edi) & LO16(edi), 0)) goto loc_0045376D; /* jle: less or equal (signed <=) */

loc_00453749: ;
    eax = ebx;
    eax = eax << 2;
    ecx = eax;
    eax = MEM32(ebp + 8);
    eax = eax - ecx;
    ecx = ZX16(LO16(edi));
    esi = edx;
    MEM32(ebp + 0x14) = ecx;

loc_0045375D: ;
    edi = MEM32(eax);
    MEM32(esi) = edi;
    eax = eax + 4;
    esi = esi + 4;
    ecx--;
    if ((ecx != 0)) goto loc_0045375D; /* jne: not equal / not zero */

loc_0045376A: ;
    ecx = MEM32(ebp + 0x14);

loc_0045376D: ;
    esi = ZX16(MEM16(ebp + 0xC));
    goto loc_0045377E;

loc_00453773: ;
    edi = eax;
    edi = edi - ebx;
    fp_push(MEMF(edx + edi * 4)); /* fld float */
    ecx++;
    MEMF(edx + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045377E: ;
    eax = SX16(LO16(ecx));
    if (CMP_L(eax, esi)) goto loc_00453773; /* jl: less (signed <) */

loc_00453785: ;
    g_seh_ebp = ebp; sub_004537DD(); return; /* tail jmp 0x004537DD */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004537E2
 * Original: 0x004537E2 - 0x0045383F (93 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004537E2(void)
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

loc_004537E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(ecx + 4));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ecx + 2));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx));
    esi = ebx;
    MEM32(ebp + -4) = 1;
    esi = esi - edi;
    edx = edi;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ecx + 6));
    edx = edx - eax;
    edx = edx << 2;
    esi = esi << 1;
    MEM32(ebp + 0xC) = edi;
    edi = edi - ebx;
    ebx = MEM32(ebp + 8);
    edi++;
    if (CMP_GE(LO16(ebx), LO16(edx))) { sub_0045383F(); return; } /* jge: greater or equal (signed >=) */

loc_00453825: ;
    ecx = SX16(LO16(ebx));
    MEM32(ebp + 0xC) = ecx;
    eax = SX16(LO16(eax));
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    MEM32(ebp + 0xC) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [ebp + 0xc] */
    g_seh_ebp = ebp; sub_00453887(); return; /* tail jmp 0x00453887 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00453894
 * Original: 0x00453894 - 0x004538FE (106 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00453894(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00453894: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    eax++;
    (void)0; /* cmp LO16(ebx), LO16(eax) - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_LE(LO16(ebx), LO16(eax))) goto loc_004538B4; /* jle: less or equal (signed <=) */

loc_004538A9: ;
    eax = eax + eax;
    ecx++;
    if (CMP_L(LO16(eax), LO16(ebx))) goto loc_004538A9; /* jl: less (signed <) */

loc_004538B1: ;
    MEM32(ebp + -4) = ecx;

loc_004538B4: ;
    eax = MEM32(ebp + 8);
    ebx--;
    if (CMP_NE(MEM16(ebp + 0x10), 2)) { sub_004538FE(); return; } /* jne: not equal / not zero */

loc_004538BF: ;
    edx = eax;
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) >> LO8(ecx)));
    SET_LO8(ecx, MEM8(ebp + -4));
    PUSH32(esp, esi);
    SET_LO8(ecx, LO8(ecx) << 1);
    esi = ebx;
    esi = esi & eax;
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) >> LO8(ecx)));
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    edx = edx & ebx;
    SET_LO16(eax, LO16(eax) - 1);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    MEM16(edi + 2) = LO16(esi);
    MEM16(edi) = LO16(edx);
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFEu;
    eax++;
    (void)0; /* cmp LO16(edx), LO16(esi) - flags set for next jcc */
    POP32(esp, esi);
    MEM16(ecx) = LO16(eax);
    if (CMP_GE(LO16(edx), LO16(esi))) goto loc_004538F8; /* jge: greater or equal (signed >=) */

loc_004538F6: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_004538F8: ;
    MEM16(ecx + 2) = LO16(eax);
    g_seh_ebp = ebp; sub_0045391A(); return; /* tail jmp 0x0045391A */

}

/**
 * sub_0045391D
 * Original: 0x0045391D - 0x004539C8 (171 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045391D(void)
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

loc_0045391D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(MEM32(ebp + 0x1C), ebx)) goto loc_00453940; /* jle: less or equal (signed <=) */

loc_0045392D: ;
    eax = 0; /* xor self */

loc_0045392F: ;
    edx = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    ecx++;
    MEMF(edx + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = SX16(LO16(ecx));
    if (CMP_L(eax, MEM32(ebp + 0x1C))) goto loc_0045392F; /* jl: less (signed <) */

loc_00453940: ;
    (void)0; /* cmp MEM32(ebp + 0x10), ebx - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 0xC) = ebx;
    if (CMP_LE(MEM32(ebp + 0x10), ebx)) goto loc_004539C5; /* jle: less or equal (signed <=) */

loc_0045394E: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);

loc_00453952: ;
    if (CMP_LE(MEM16(ebp + 0xC), LO16(ebx))) goto loc_00453966; /* jle: less or equal (signed <=) */

loc_00453958: ;
    ecx = MEM32(ebp + 0x14);
    ecx = MEM32(ecx + eax * 4 + -4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x1C));
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;

loc_00453966: ;
    (void)0; /* cmp MEM32(ebp + 0x1C), ebx - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (CMP_LE(MEM32(ebp + 0x1C), ebx)) goto loc_004539B7; /* jle: less or equal (signed <=) */

loc_0045396E: ;
    ecx = MEM32(ebp + 0x18);
    edx = ecx + eax * 2;
    ecx = MEM32(ebp + 0x20);
    eax = eax << 2;
    esi = eax + ecx;
    ecx = MEM32(ebp + 0x24);
    edi = eax + ecx;
    eax = 0; /* xor self */

loc_00453985: ;
    ebx = ZX16(MEM16(edx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + 8);
    ecx = ecx + eax * 4;
    ebx = ebx + eax;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(ebx + eax));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    MEM32(ebp + -12) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -8);
    fp_push((double)SMEM32(ebp + -12)); /* fild */
    (void)0; /* cmp eax, MEM32(ebp + 0x1C) - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(eax, MEM32(ebp + 0x1C))) goto loc_00453985; /* jl: less (signed <) */

loc_004539B5: ;
    ebx = 0; /* xor self */

loc_004539B7: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    if (CMP_L(eax, MEM32(ebp + 0x10))) goto loc_00453952; /* jl: less (signed <) */

loc_004539C3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004539C5: ;
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
 * sub_004539D0
 * Original: 0x004539D0 - 0x00453B0D (317 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004539D0(void)
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

loc_004539D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = 0x7E967699;
    edx = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    if (CMP_L(ebp, 4)) goto loc_00453ACA; /* jl: less (signed <) */

loc_004539FA: ;
    ebp = ebp + 0xFFFFFFFDu;
    /* nop */

loc_00453A00: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + 4;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x10);
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_GE(ebx, edx)) goto loc_00453A2E; /* jge: greater or equal (signed >=) */

loc_00453A2A: ;
    edx = ebx;
    eax = edi;

loc_00453A2E: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + 4;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x10);
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_GE(ebx, edx)) goto loc_00453A5D; /* jge: greater or equal (signed >=) */

loc_00453A58: ;
    edx = ebx;
    eax = edi + 1;

loc_00453A5D: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + 4;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x10);
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_GE(ebx, edx)) goto loc_00453A8C; /* jge: greater or equal (signed >=) */

loc_00453A87: ;
    edx = ebx;
    eax = edi + 2;

loc_00453A8C: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + 4;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x10);
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_GE(ebx, edx)) goto loc_00453ABB; /* jge: greater or equal (signed >=) */

loc_00453AB6: ;
    edx = ebx;
    eax = edi + 3;

loc_00453ABB: ;
    edi = edi + 4;
    if (CMP_L(edi, ebp)) goto loc_00453A00; /* jl: less (signed <) */

loc_00453AC6: ;
    ebp = MEM32(esp + 0x20);

loc_00453ACA: ;
    if (CMP_GE(edi, ebp)) goto loc_00453B07; /* jge: greater or equal (signed >=) */

loc_00453ACE: ;
    edi = edi;

loc_00453AD0: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + 4;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x10);
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_GE(ebx, edx)) goto loc_00453AFE; /* jge: greater or equal (signed >=) */

loc_00453AFA: ;
    edx = ebx;
    eax = edi;

loc_00453AFE: ;
    ebx = MEM32(esp + 0x20);
    edi++;
    if (CMP_L(edi, ebx)) goto loc_00453AD0; /* jl: less (signed <) */

loc_00453B07: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00453B10
 * Original: 0x00453B10 - 0x00453B33 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00453B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00453B10: ;
    eax = MEM32(esp + 4);
    if (CMP_B(eax, MEM32(esp + 0xC))) goto loc_00453B1C; /* jb: below (unsigned <) */

loc_00453B1A: ;
    eax = 0; /* xor self */

loc_00453B1C: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 8);
    MEM32(edx) = esi;
    eax = MEM32(ecx + eax * 8 + 4);
    MEM32(edx + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00453B40
 * Original: 0x00453B40 - 0x00453BFD (189 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00453B40(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00453B40: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00453B10(); /* call 0x00453B10 */

loc_00453B61: ;
    edx = MEM32(esp + 0x48);
    esp = esp + 0x10;
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00453B82; /* jle: less or equal (signed <=) */

loc_00453B6E: ;
    ecx = MEM32(edi);
    ebx = MEM32(esp + 0x3C);

loc_00453B74: ;
    if (CMP_EQ(MEM32(ebx + eax * 4), ecx)) { sub_00453BFD(); return; } /* je: equal / zero */

loc_00453B7D: ;
    eax++;
    if (CMP_L(eax, edx)) goto loc_00453B74; /* jl: less (signed <) */

loc_00453B82: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00453B10(); /* call 0x00453B10 */

loc_00453B9A: ;
    ecx = MEM32(edi);
    edx = MEM32(esp + 0x38);
    fp_push(MEMF(edx + ecx * 8 + 4)); /* fld float */
    eax = edx + ecx * 8;
    fp_push(MEMF(eax)); /* fld float */
    esp = esp + 0x10;
    /* fld st(0) */
    POP32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
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
 * sub_00453C10
 * Original: 0x00453C10 - 0x00453DA2 (402 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00453C10(void)
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

loc_00453C10: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(esi & esi, 0)) goto loc_00453C44; /* jle: less or equal (signed <=) */

loc_00453C22: ;
    edx = esi * 4;
    ecx = edx;
    ecx = ecx >> 2;
    eax = 0x7F7FFFEE;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_00453C44: ;
    eax = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_00453D9B; /* jle: less or equal (signed <=) */

loc_00453C56: ;
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(eax)); /* fld float */
    ebp = ebp + 8;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp + esi*4 + 0xc] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00453D88; /* jp: parity */

loc_00453C83: ;
    edx = esi + -1;
    if (CMP_L(edx, 4)) goto loc_00453D11; /* jl: less (signed <) */

loc_00453C8F: ;
    edi = ebx;
    eax = esp + 0x10;
    esi = ebx + edx * 4 + -8;
    ecx = esp + edx * 4 + 0xC;
    edi = edi - eax;
    /* nop */

loc_00453CA0: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00453D77; /* jp: parity */

loc_00453CAD: ;
    eax = MEM32(ecx);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx - 4] */
    MEM32(ecx + 4) = eax;
    eax = MEM32(ecx + edi);
    MEM32(esi + 8) = eax;
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00453D4E; /* jp: parity */

loc_00453CC6: ;
    eax = MEM32(ecx + -4);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx - 8] */
    MEM32(ecx) = eax;
    eax = MEM32(esi);
    MEM32(ecx + edi) = eax;
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00453D60; /* jp: parity */

loc_00453CDE: ;
    eax = MEM32(ecx + -8);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx - 0xc] */
    MEM32(ecx + -4) = eax;
    eax = MEM32(esi + -4);
    MEM32(esi) = eax;
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00453D74; /* jp: parity */

loc_00453CF7: ;
    eax = MEM32(ecx + -12);
    MEM32(ecx + -8) = eax;
    eax = MEM32(esi + -8);
    MEM32(esi + -4) = eax;
    edx = edx - 4;
    ecx = ecx - 0x10;
    esi = esi - 0x10;
    if (CMP_G(edx, 3)) goto loc_00453CA0; /* jg: greater (signed >) */

loc_00453D11: ;
    if (CMP_LE(edx & edx, 0)) goto loc_00453D77; /* jle: less or equal (signed <=) */

loc_00453D15: ;
    esi = ebx;
    eax = esp + 0x10;
    ecx = esp + edx * 4 + 0xC;
    esi = esi - eax;

loc_00453D21: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00453D77; /* jp: parity */

loc_00453D2A: ;
    eax = MEM32(ecx);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + ecx);
    MEM32(ebx + edx * 4) = eax;
    edx--;
    ecx = ecx - 4;
    if (CMP_G(edx & edx, 0)) goto loc_00453D21; /* jg: greater (signed >) */

loc_00453D3D: ;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + edx * 4 + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(esp + 0x28);
    MEM32(ebx + edx * 4) = ecx;
    goto loc_00453D8A;

loc_00453D4E: ;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + edx * 4 + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(esp + 0x28);
    edx--;
    MEM32(ebx + edx * 4) = ecx;
    goto loc_00453D8A;

loc_00453D60: ;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + edx * 4 + 8) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(esp + 0x28);
    edx = edx - 2;
    MEM32(ebx + edx * 4) = ecx;
    goto loc_00453D8A;

loc_00453D74: ;
    edx = edx - 3;

loc_00453D77: ;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + edx * 4 + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(esp + 0x28);
    MEM32(ebx + edx * 4) = ecx;
    goto loc_00453D8A;

loc_00453D88: ;
    /* fstp st(0) */

loc_00453D8A: ;
    eax = MEM32(esp + 0x24);
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(ecx, eax)) goto loc_00453C56; /* jl: less (signed <) */

loc_00453D9B: ;
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
 * sub_00453DB0
 * Original: 0x00453DB0 - 0x00453F67 (439 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00453DB0(void)
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

loc_00453DB0: ;
    esp = esp - 0x30;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebx = esp + 0x3C;
    MEM32(esp + 0x1C) = 0x7F7FFFEE;
    PUSH32(esp, 0); sub_00453C10(); /* call 0x00453C10 */

loc_00453DDB: ;
    esp = esp + 0x10;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x44) = 0;
    if (CMP_LE(esi & esi, 0)) goto loc_00453F52; /* jle: less or equal (signed <=) */

loc_00453DEE: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x58);

loc_00453DF3: ;
    edx = MEM32(esp + 0x48);
    esi = MEM32(esp + edx * 4 + 0x30);
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00453B10(); /* call 0x00453B10 */

loc_00453E10: ;
    fp_push(MEMF(ebp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = MEM32(esp + 0x78);
    fp_push(MEMF(ebp + 4)); /* fld float */
    esp = esp + 0x10;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00453E62; /* jle: less or equal (signed <=) */

loc_00453E4B: ;
    goto loc_00453E50;

    /* nop */

loc_00453E50: ;
    edx = MEM32(esp + 0x6C);
    if (CMP_EQ(MEM32(edx + eax * 4), esi)) goto loc_00453F31; /* je: equal / zero */

loc_00453E5D: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_00453E50; /* jl: less (signed <) */

loc_00453E62: ;
    ebx = MEM32(esp + 0x60);

loc_00453E66: ;
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004539D0(); /* call 0x004539D0 */

loc_00453E76: ;
    ecx = MEM32(esp + 0x68);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0); sub_00453B10(); /* call 0x00453B10 */

loc_00453E8B: ;
    fp_push(MEMF(edi + esi * 8 + 4)); /* fld float */
    fp_push(MEMF(edi + esi * 8)); /* fld float */
    esp = esp + 0x1C;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp + 0x10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00453F3A; /* jp: parity */

loc_00453F0E: ;
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax) = esi;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    goto loc_00453F3C;

loc_00453F31: ;
    ebx = MEM32(esp + 0x64);
    goto loc_00453E66;

loc_00453F3A: ;
    /* fstp st(0) */

loc_00453F3C: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x48) = eax;
    if (CMP_L(eax, ecx)) goto loc_00453DF3; /* jl: less (signed <) */

loc_00453F51: ;
    POP32(esp, edi);

loc_00453F52: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    MEM32(ebp + 4) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00453F68
 * Original: 0x00453F68 - 0x00453FF8 (144 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00453F68(void)
{
    int _flags = 0; /* fallback flag var */

loc_00453F68: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    eax = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00453FED; /* je: equal / zero */

loc_00453F7E: ;
    if (TEST_Z(edx, edx)) goto loc_00453FED; /* je: equal / zero */

loc_00453F82: ;
    if (CMP_LE(ecx & ecx, 0)) { sub_00453FF8(); return; } /* jle: less or equal (signed <=) */

loc_00453F86: ;
    if (CMP_L(ecx, 0x800)) goto loc_00453FD0; /* jl: less (signed <) */

loc_00453F8E: ;
    if (CMP_GE(ecx, 0x1000)) goto loc_00453FB3; /* jge: greater or equal (signed >=) */

loc_00453F96: ;
    MEM32(esp) = eax;
    eax = ecx + ecx;
    eax = eax + eax;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_0045DB10(); /* call 0x0045DB10 */

loc_00453FAB: ;
    eax = 0; /* xor self */
    esp = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00453FB3: ;
    MEM32(esp) = eax;
    eax = ecx + ecx;
    eax = eax + eax;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_00454008(); /* call 0x00454008 */

loc_00453FC8: ;
    eax = 0; /* xor self */
    esp = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00453FD0: ;
    MEM32(esp) = eax;
    eax = ecx + ecx;
    eax = eax + eax;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_0045D120(); /* call 0x0045D120 */

loc_00453FE5: ;
    eax = 0; /* xor self */
    esp = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00453FED: ;
    eax = 0xFFFFFFF8u;
    esp = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00454008
 * Original: 0x00454008 - 0x00454135 (301 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00454008(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00454008: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x24;
    ebp = MEM32(ebx + 8);
    esi = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 0x10);
    if (CMP_LE(edi & edi, 0)) goto loc_00454109; /* jle: less or equal (signed <=) */

loc_00454025: ;
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(LO8(eax), 7)) goto loc_0045404E; /* je: equal / zero */

loc_0045402C: ;
    /* nop */
    /* nop */

loc_00454038: ;
    SET_LO8(eax, MEM8(ebp));
    ebp++;
    MEM8(esi) = LO8(eax);
    esi++;
    edi--;
    if ((edi == 0)) { sub_00454135(); return; } /* je: equal / zero */

loc_00454046: ;
    if (TEST_NZ(esi, 7)) goto loc_00454038; /* jne: not equal / not zero */

loc_0045404E: ;
    if (CMP_GE(edi, 0x5000)) goto loc_00454073; /* jge: greater or equal (signed >=) */

loc_00454056: ;
    MEM32(esp) = ebp;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_0045DB10(); /* call 0x0045DB10 */

loc_00454066: ;
    eax = MEM32(ebx + 0xC);
    esp = esp + 0x24;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00454073: ;
    eax = ebp;
    eax = eax & 0xFF8;
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax + 0x1000;
    eax = eax & 0xFFF;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00454116; /* jne: not equal / not zero */

loc_00454090: ;
    edx = edi;
    edx = edx & 0xFFF;
    edi = edi - edx;
    eax = edi;
    eax = (uint32_t)((int32_t)eax >> 0xB);
    eax = eax >> 0x14;
    eax = eax + edi;
    eax = (uint32_t)((int32_t)eax >> 0xC);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_004540F5; /* jle: less or equal (signed <=) */

loc_004540AD: ;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    /* nop */

loc_004540B8: ;
    MEM32(esp) = ebp;
    MEM32(esp + 4) = 0x1000;
    PUSH32(esp, 0); sub_0045DA70(); /* call 0x0045DA70 */

loc_004540C8: ;
    MEM32(esp) = ebp;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = 0x1000;
    PUSH32(esp, 0); sub_0045DB10(); /* call 0x0045DB10 */

loc_004540DC: ;
    ebp = ebp + 0x1000;
    esi = esi + 0x1000;
    edi++;
    eax = MEM32(esp + 0x14);
    if (CMP_L(edi, eax)) goto loc_004540B8; /* jl: less (signed <) */

loc_004540F1: ;
    edx = MEM32(esp + 0x18);

loc_004540F5: ;
    if (TEST_Z(edx, edx)) goto loc_00454109; /* je: equal / zero */

loc_004540F9: ;
    MEM32(esp) = ebp;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_0045DB10(); /* call 0x0045DB10 */

loc_00454109: ;
    eax = MEM32(ebx + 0xC);
    esp = esp + 0x24;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00454116: ;
    MEM32(esp) = ebp;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_0045DB10(); /* call 0x0045DB10 */

loc_00454126: ;
    eax = MEM32(esp + 0x18);
    ebp = ebp + eax;
    esi = esi + eax;
    edi = edi - eax;
    goto loc_00454090;

}

/**
 * sub_004568A8
 * Original: 0x004568A8 - 0x004568DC (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004568A8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004568A8: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x14;
    edx = MEM32(ebx + 8);
    esi = MEM32(ebx + 0xC);
    ebp = MEM32(ebx + 0x10);
    edi = MEM32(ebx + 0x14);
    (void)0; /* cmp esi, 9 - flags set for next jcc */
    MEM32(edx + 0x1C) = 0;
    if (CMP_G(esi, 9)) { sub_004568DC(); return; } /* jg: greater (signed >) */

loc_004568CC: ;
    MEM32(esp) = esi;
    PUSH32(esp, 0); sub_0045E494(); /* call 0x0045E494 */

loc_004568D4: ;
    edx = MEM32(ebx + 8);
    MEM32(edx + 0x1C) = eax;
    g_seh_ebp = ebp; sub_004568EA(); return; /* tail jmp 0x004568EA */

}

/**
 * sub_004569B8
 * Original: 0x004569B8 - 0x00456A7D (197 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004569B8(void)
{
    int _flags = 0; /* fallback flag var */

loc_004569B8: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    esp = esp - 0xC;
    edi = MEM32(ebx + 8);
    if (TEST_Z(edi, edi)) goto loc_00456A75; /* je: equal / zero */

loc_004569CD: ;
    eax = MEM32(edi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_004569DA; /* je: equal / zero */

loc_004569D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_004569DA: ;
    eax = MEM32(edi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_004569E7; /* je: equal / zero */

loc_004569E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_004569E7: ;
    eax = MEM32(edi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_004569F4; /* je: equal / zero */

loc_004569EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_004569F4: ;
    eax = MEM32(edi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_00456A01; /* je: equal / zero */

loc_004569FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A01: ;
    eax = MEM32(edi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00456A0E; /* je: equal / zero */

loc_00456A08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A0E: ;
    eax = MEM32(edi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_00456A1B; /* je: equal / zero */

loc_00456A15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A1B: ;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00456A28; /* je: equal / zero */

loc_00456A22: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A28: ;
    eax = MEM32(edi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_00456A35; /* je: equal / zero */

loc_00456A2F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A35: ;
    eax = MEM32(edi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_00456A42; /* je: equal / zero */

loc_00456A3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A42: ;
    eax = MEM32(edi + 0x40);
    if (TEST_Z(eax, eax)) goto loc_00456A4F; /* je: equal / zero */

loc_00456A49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A4F: ;
    eax = MEM32(edi + 0x44);
    if (TEST_Z(eax, eax)) goto loc_00456A5C; /* je: equal / zero */

loc_00456A56: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A5C: ;
    eax = MEM32(edi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_00456A69; /* je: equal / zero */

loc_00456A63: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A69: ;
    MEM32(edi) = 0;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456A75: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00456A88
 * Original: 0x00456A88 - 0x00456CC0 (568 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00456A88(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00456A88: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x24;
    eax = MEM32(ebx + 8);
    ebp = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00456CAF; /* je: equal / zero */

loc_00456AA5: ;
    if (TEST_S(ebp, ebp)) goto loc_00456AAE; /* jl: less (signed <) */

loc_00456AA9: ;
    if (CMP_LE(ebp, 0x1E)) goto loc_00456ABF; /* jle: less or equal (signed <=) */

loc_00456AAE: ;
    eax = 0xFFFFFFF1u;
    esp = esp + 0x24;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00456ABF: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_00456AC6: ;
    esi = eax;
    if (TEST_Z(esi, esi)) { sub_00456CC0(); return; } /* je: equal / zero */

loc_00456AD0: ;
    edx = 0; /* xor self */
    edx = edx & 0xFF;
    eax = edx;
    eax = eax << 8;
    edx = edx | eax;
    eax = edx;
    eax = eax << 0x10;
    edx = edx | eax;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x30) = edx;
    MEM32(esi + 0x34) = edx;
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x40) = edx;
    MEM32(esi + 0x44) = edx;
    MEM32(esi + 0x48) = edx;
    MEM32(esi) = 6;
    edx = MEM32(ebx + 0x14);
    ecx = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 0x14) = edx;
    edx = 1;
    edx = edx << LO8(ecx);
    if (CMP_EQ(edi, 8)) goto loc_00456CA2; /* je: equal / zero */

loc_00456B3F: ;
    if (CMP_EQ(edi, 4)) goto loc_00456C79; /* je: equal / zero */

loc_00456B48: ;
    if (CMP_EQ(edi, 1)) goto loc_00456C51; /* je: equal / zero */

loc_00456B51: ;
    if (CMP_EQ(edi, 2)) goto loc_00456B71; /* je: equal / zero */

loc_00456B56: ;
    edi = 0xFFFFFFF0u;

loc_00456B5B: ;
    MEM32(esp) = esi;
    PUSH32(esp, 0); sub_004569B8(); /* call 0x004569B8 */

loc_00456B63: ;
    eax = edi;
    esp = esp + 0x24;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00456B71: ;
    MEM32(esi + 8) = 0;
    xmm0 = MEMF(0x8831F8); /* movss */
    MEM32(esi + 0xC) = 1;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esi + 0x10) = xmm0; /* movss */

loc_00456B94: ;
    if (CMP_G(ebp, 3)) goto loc_00456BB3; /* jg: greater (signed >) */

loc_00456B99: ;
    MEM32(esi + 0x18) = 0;
    edx = MEM32(ebx + 8);
    eax = 0; /* xor self */
    MEM32(edx) = esi;
    esp = esp + 0x24;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00456BB3: ;
    MEM32(esp) = ebp;
    PUSH32(esp, 0); sub_0045E544(); /* call 0x0045E544 */

loc_00456BBB: ;
    MEM32(esp + 0x14) = eax;
    edx = eax;
    if (TEST_NZ(edx, edx)) goto loc_00456BCC; /* jne: not equal / not zero */

loc_00456BC5: ;
    edi = 0xFFFFFFF7u;
    goto loc_00456B5B;

loc_00456BCC: ;
    MEM32(esp) = esi;
    edx = ebp + -1;
    edi = eax;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = ebp;
    PUSH32(esp, 0); sub_004568A8(); /* call 0x004568A8 */

loc_00456BE5: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_00456C25; /* jne: not equal / not zero */

loc_00456BEB: ;
    MEM32(esp) = ebp;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = edx;
    PUSH32(esp, 0); sub_0045FD34(); /* call 0x0045FD34 */

loc_00456BFB: ;
    MEM32(esi + 0x2C) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00456C09; /* jne: not equal / not zero */

loc_00456C02: ;
    edi = 0xFFFFFFF7u;
    goto loc_00456C25;

loc_00456C09: ;
    MEM32(esp) = ebp;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = edx;
    PUSH32(esp, 0); sub_0045FF64(); /* call 0x0045FF64 */

loc_00456C19: ;
    MEM32(esi + 0x30) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00456C34; /* jne: not equal / not zero */

loc_00456C20: ;
    edi = 0xFFFFFFF7u;

loc_00456C25: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456C2F: ;
    goto loc_00456B5B;

loc_00456C34: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456C3E: ;
    edx = MEM32(ebx + 8);
    eax = 0; /* xor self */
    MEM32(edx) = esi;
    esp = esp + 0x24;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00456C51: ;
    MEM32(esi + 8) = 1;
    xmm0 = MEMF(0x8831F8); /* movss */
    MEM32(esi + 0xC) = 0;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    goto loc_00456B94;

loc_00456C79: ;
    edi = 1;
    xmm1 = MEMF(0x8831F8); /* movss */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = sqrtf(xmm0); /* sqrtss */
    xmm1 = xmm1 / xmm2; /* divss */
    MEMF(esi + 0x10) = xmm1; /* movss */
    goto loc_00456B94;

loc_00456CA2: ;
    edx = 0; /* xor self */
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    goto loc_00456B94;

loc_00456CAF: ;
    eax = 0xFFFFFFF8u;
    esp = esp + 0x24;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00456CD8
 * Original: 0x00456CD8 - 0x00456FB1 (729 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00456CD8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00456CD8: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x34;
    ebp = MEM32(ebx + 0x10);
    esi = 0; /* xor self */
    if (TEST_Z(ebp, ebp)) { sub_00456FB1(); return; } /* je: equal / zero */

loc_00456CF1: ;
    if (CMP_EQ(MEM32(ebp), 6)) goto loc_00456D08; /* je: equal / zero */

loc_00456CF7: ;
    eax = 0xFFFFFFEFu;
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00456D08: ;
    edx = MEM32(ebx + 8);
    if (TEST_Z(edx, edx)) { sub_00456FB1(); return; } /* je: equal / zero */

loc_00456D13: ;
    edx = MEM32(ebx + 0xC);
    if (TEST_Z(edx, edx)) { sub_00456FB1(); return; } /* je: equal / zero */

loc_00456D1E: ;
    edi = MEM32(ebp + 4);
    if (CMP_G(edi, 3)) goto loc_00456D96; /* jg: greater (signed >) */

loc_00456D26: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_00456D4A; /* je: equal / zero */

loc_00456D2D: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    ebp = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi * 4 + 0x655400), _icall_esp); /* indirect call */
    }

loc_00456D48: ;
    goto loc_00456D5E;

loc_00456D4A: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi * 4 + 0x655410), _icall_esp); /* indirect call */
    }

loc_00456D5E: ;
    eax = 1;
    ecx = edi;
    eax = eax << LO8(ecx);
    if (CMP_EQ(eax, 1)) goto loc_00456F56; /* je: equal / zero */

loc_00456D70: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx + 4);
    MEM32(ecx + eax * 4) = edx;
    MEM32(ecx + eax * 4 + 4) = 0;
    MEM32(ecx + 4) = 0;

loc_00456D88: ;
    eax = 0; /* xor self */
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00456D96: ;
    edx = MEM32(ebp + 0x18);
    if (CMP_LE(edx & edx, 0)) goto loc_00456DB7; /* jle: less or equal (signed <=) */

loc_00456D9D: ;
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00456F90; /* je: equal / zero */

loc_00456DA8: ;
    edx = MEM32(ebx + 0x14);
    esi = edx;
    esi = esi & 0xF;
    esi = (uint32_t)(-(int32_t)esi);
    esi = esi & 0xF;
    esi = esi + edx;

loc_00456DB7: ;
    ecx = edi + -1;
    edx = 1;
    MEM32(esp + 0x28) = ecx;
    edx = edx << LO8(ecx);
    (void)0; /* cmp ecx, 9 - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    if (CMP_LE(ecx, 9)) goto loc_00456E86; /* jle: less or equal (signed <=) */

loc_00456DD2: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(ebx + 0xC);
    if (CMP_EQ(edx, eax)) goto loc_00456F65; /* je: equal / zero */

loc_00456DE0: ;
    edx = MEM32(ebx + 8);
    MEM32(esp) = edx;
    edx = MEM32(ebx + 0xC);
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 8) = edx;
    edx = MEM32(ebp + 0x1C);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0); sub_00460D60(); /* call 0x00460D60 */

loc_00456E01: ;
    edx = MEM32(esp + 0x28);
    if (CMP_G(edx, 0xA)) goto loc_00456E5E; /* jg: greater (signed >) */

loc_00456E0A: ;
    edx = MEM32(ebx + 0xC);
    MEM32(esp) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 4) = edx;
    edx = MEM32(ebp + 0x20);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0); sub_00461CE0(); /* call 0x00461CE0 */

loc_00456E30: ;
    eax = 1;
    ecx = edi;
    edi = eax;
    edi = edi << LO8(ecx);
    edx = MEM32(ebp + 8);
    if (TEST_Z(edx, edx)) goto loc_00456EDA; /* je: equal / zero */

loc_00456E46: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebx + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_00456E5C: ;
    goto loc_00456EDA;

loc_00456E5E: ;
    MEM32(esp) = ebp;
    edx = MEM32(ebx + 0xC);
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_0045F3D4(); /* call 0x0045F3D4 */

loc_00456E79: ;
    eax = 1;
    ecx = edi;
    edi = eax;
    edi = edi << LO8(ecx);
    goto loc_00456EDA;

loc_00456E86: ;
    edx = MEM32(ebx + 8);
    MEM32(esp) = edx;
    edx = MEM32(ebx + 0xC);
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 8) = edx;
    edx = MEM32(ebp + 0x20);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ebp + 0x1C);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_00461170(); /* call 0x00461170 */

loc_00456EB2: ;
    eax = 1;
    ecx = edi;
    edi = eax;
    edi = edi << LO8(ecx);
    edx = MEM32(ebp + 8);
    if (TEST_Z(edx, edx)) goto loc_00456EDA; /* je: equal / zero */

loc_00456EC4: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebx + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_00456EDA: ;
    edx = MEM32(ebx + 0xC);
    xmm4 = MEMF(edx + 4); /* movss */
    xmm6 = MEMF(edx); /* movss */
    xmm5 = xmm4; /* movss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = xmm6 - xmm4; /* subss */
    MEMF(edx) = xmm5; /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(edx + 4) = xmm6; /* movss */
    ebp = MEM32(ebp + 0x2C);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 1;
    MEM32(esp + 0xC) = ebp;
    PUSH32(esp, 0); sub_00466F80(); /* call 0x00466F80 */

loc_00456F1A: ;
    if (CMP_EQ(edi, 1)) goto loc_00456F84; /* je: equal / zero */

loc_00456F1F: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx + 4);
    MEM32(ecx + edi * 4) = edx;
    MEM32(ecx + edi * 4 + 4) = 0;
    MEM32(ecx + 4) = 0;

loc_00456F37: ;
    if (TEST_Z(esi, esi)) goto loc_00456F48; /* je: equal / zero */

loc_00456F3B: ;
    edx = MEM32(ebx + 0x14);
    if (TEST_NZ(edx, edx)) goto loc_00456F48; /* jne: not equal / not zero */

loc_00456F42: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00456F48: ;
    eax = 0; /* xor self */
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00456F56: ;
    eax = MEM32(ebx + 0xC);
    MEM32(eax + 4) = 0;
    goto loc_00456D88;

loc_00456F65: ;
    edx = MEM32(ebx + 0xC);
    MEM32(esp) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 4) = edx;
    edx = MEM32(ebp + 0x1C);
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_00460530(); /* call 0x00460530 */

loc_00456F7F: ;
    goto loc_00456E01;

loc_00456F84: ;
    edx = MEM32(ebx + 0xC);
    MEM32(edx + 4) = 0;
    goto loc_00456F37;

loc_00456F90: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_00456F96: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_00456DB7; /* jne: not equal / not zero */

loc_00456FA0: ;
    eax = 0xFFFFFFF7u;
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00456FC8
 * Original: 0x00456FC8 - 0x004572B2 (746 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00456FC8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00456FC8: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x34;
    edi = MEM32(ebx + 0x10);
    esi = 0; /* xor self */
    if (TEST_Z(edi, edi)) { sub_004572B2(); return; } /* je: equal / zero */

loc_00456FE1: ;
    if (CMP_EQ(MEM32(edi), 6)) goto loc_00456FF7; /* je: equal / zero */

loc_00456FE6: ;
    eax = 0xFFFFFFEFu;
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00456FF7: ;
    edx = MEM32(ebx + 8);
    if (TEST_Z(edx, edx)) { sub_004572B2(); return; } /* je: equal / zero */

loc_00457002: ;
    edx = MEM32(ebx + 0xC);
    if (TEST_Z(edx, edx)) { sub_004572B2(); return; } /* je: equal / zero */

loc_0045700D: ;
    ebp = MEM32(edi + 4);
    if (CMP_G(ebp, 3)) goto loc_00457113; /* jg: greater (signed >) */

loc_00457019: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(eax);
    esi = MEM32(ebx + 0xC);
    MEM32(esi) = edx;
    esi = 1;
    ecx = ebp;
    esi = esi << LO8(ecx);
    if (CMP_LE(esi, 1)) goto loc_004570D3; /* jle: less or equal (signed <=) */

loc_00457035: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(eax + esi * 4);
    eax = MEM32(ebx + 0xC);
    MEM32(eax + 4) = edx;
    eax = 2;
    edx = esi + -2;
    if (CMP_L(edx, 2)) goto loc_004570D3; /* jl: less (signed <) */

loc_00457052: ;
    ecx = esi + -4;
    if (CMP_L(ecx, 0xA)) goto loc_004570B5; /* jl: less (signed <) */

loc_0045705A: ;
    esi = esi + 0xFFFFFFF4u;
    ecx = MEM32(ebx + 0xC);
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(ebx + 8);
    /* nop */

loc_00457068: ;
    edi = MEM32(ebp + eax * 4);
    MEM32(ecx + eax * 4) = edi;
    edi = MEM32(ebp + eax * 4 + 4);
    MEM32(ecx + eax * 4 + 4) = edi;
    edi = MEM32(ebp + eax * 4 + 8);
    MEM32(ecx + eax * 4 + 8) = edi;
    edi = MEM32(ebp + eax * 4 + 0xC);
    MEM32(ecx + eax * 4 + 0xC) = edi;
    edi = MEM32(ebp + eax * 4 + 0x10);
    MEM32(ecx + eax * 4 + 0x10) = edi;
    edi = MEM32(ebp + eax * 4 + 0x14);
    MEM32(ecx + eax * 4 + 0x14) = edi;
    edi = MEM32(ebp + eax * 4 + 0x18);
    MEM32(ecx + eax * 4 + 0x18) = edi;
    edi = MEM32(ebp + eax * 4 + 0x1C);
    MEM32(ecx + eax * 4 + 0x1C) = edi;
    eax = eax + 8;
    if (CMP_LE(eax, esi)) goto loc_00457068; /* jle: less or equal (signed <=) */

loc_004570AE: ;
    ebp = MEM32(esp + 0x24);
    edi = MEM32(ebx + 0x10);

loc_004570B5: ;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 8);

loc_004570BB: ;
    ecx = MEM32(edi + eax * 4);
    MEM32(esi + eax * 4) = ecx;
    ecx = MEM32(edi + eax * 4 + 4);
    MEM32(esi + eax * 4 + 4) = ecx;
    eax = eax + 2;
    if (CMP_LE(eax, edx)) goto loc_004570BB; /* jle: less or equal (signed <=) */

loc_004570D0: ;
    edi = MEM32(ebx + 0x10);

loc_004570D3: ;
    eax = MEM32(edi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004570F4; /* je: equal / zero */

loc_004570DA: ;
    eax = MEM32(ebx + 0xC);
    edx = MEM32(edi + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp * 4 + 0x655420), _icall_esp); /* indirect call */
    }

loc_004570F2: ;
    goto loc_00457105;

loc_004570F4: ;
    eax = MEM32(ebx + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp * 4 + 0x655430), _icall_esp); /* indirect call */
    }

loc_00457105: ;
    eax = 0; /* xor self */
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00457113: ;
    edx = MEM32(edi + 0x18);
    if (CMP_LE(edx & edx, 0)) goto loc_00457134; /* jle: less or equal (signed <=) */

loc_0045711A: ;
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00457291; /* je: equal / zero */

loc_00457125: ;
    edx = MEM32(ebx + 0x14);
    esi = edx;
    esi = esi & 0xF;
    esi = (uint32_t)(-(int32_t)esi);
    esi = esi & 0xF;
    esi = esi + edx;

loc_00457134: ;
    ecx = ebp + -1;
    edx = 1;
    MEM32(esp + 0x28) = ecx;
    eax = MEM32(ebx + 8);
    edx = edx << LO8(ecx);
    xmm5 = MEMF(eax); /* movss */
    eax = 1;
    MEM32(esp + 0x2C) = edx;
    ecx = ebp;
    ebp = eax;
    ebp = ebp << LO8(ecx);
    ecx = MEM32(ebx + 8);
    xmm3 = MEMF(ecx + ebp * 4); /* movss */
    xmm4 = xmm5; /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm5 = xmm5 - xmm3; /* subss */
    eax = MEM32(ebx + 0xC);
    MEMF(eax) = xmm4; /* movss */
    MEMF(eax + 4) = xmm5; /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    edx = MEM32(edi + 0x30);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_004671F0(); /* call 0x004671F0 */

loc_00457197: ;
    edx = MEM32(esp + 0x28);
    if (CMP_G(edx, 9)) goto loc_004571EF; /* jg: greater (signed >) */

loc_004571A0: ;
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp) = edx;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    edx = MEM32(edi + 0x20);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(edi + 0x1C);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_00462890(); /* call 0x00462890 */

loc_004571C9: ;
    edx = MEM32(edi + 0xC);
    if (TEST_Z(edx, edx)) goto loc_00457272; /* je: equal / zero */

loc_004571D4: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(ebx + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ebp;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_004571EA: ;
    goto loc_00457272;

loc_004571EF: ;
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp) = edx;
    edx = MEM32(edi + 0x1C);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_00460530(); /* call 0x00460530 */

loc_00457209: ;
    edx = MEM32(esp + 0x28);
    if (CMP_G(edx, 0xA)) goto loc_00457257; /* jg: greater (signed >) */

loc_00457212: ;
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp) = edx;
    edx = MEM32(edi + 0x20);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0); sub_00463400(); /* call 0x00463400 */

loc_00457238: ;
    edx = MEM32(edi + 0xC);
    if (TEST_Z(edx, edx)) goto loc_00457272; /* je: equal / zero */

loc_0045723F: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(ebx + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ebp;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_00457255: ;
    goto loc_00457272;

loc_00457257: ;
    MEM32(esp) = edi;
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_0045F734(); /* call 0x0045F734 */

loc_00457272: ;
    if (TEST_Z(esi, esi)) goto loc_00457283; /* je: equal / zero */

loc_00457276: ;
    edx = MEM32(ebx + 0x14);
    if (TEST_NZ(edx, edx)) goto loc_00457283; /* jne: not equal / not zero */

loc_0045727D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_00457283: ;
    eax = 0; /* xor self */
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00457291: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_00457297: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_00457134; /* jne: not equal / not zero */

loc_004572A1: ;
    eax = 0xFFFFFFF7u;
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004572C8
 * Original: 0x004572C8 - 0x004572F7 (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004572C8(void)
{
    int _flags = 0; /* fallback flag var */

loc_004572C8: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_004572EC; /* je: equal / zero */

loc_004572D8: ;
    if (TEST_Z(eax, eax)) goto loc_004572EC; /* je: equal / zero */

loc_004572DC: ;
    if (CMP_EQ(MEM32(eax), 6)) { sub_004572F7(); return; } /* je: equal / zero */

loc_004572E1: ;
    eax = 0xFFFFFFEFu;
    esp = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_004572EC: ;
    eax = 0xFFFFFFF8u;
    esp = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00457308
 * Original: 0x00457308 - 0x00457338 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457308(void)
{
    int _flags = 0; /* fallback flag var */

loc_00457308: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    eax = MEM32(ebx + 8);
    if (TEST_Z(eax, eax)) { sub_00457338(); return; } /* je: equal / zero */

loc_00457318: ;
    if (CMP_EQ(MEM32(eax), 6)) goto loc_00457328; /* je: equal / zero */

loc_0045731D: ;
    eax = 0xFFFFFFEFu;
    esp = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00457328: ;
    MEM32(esp) = eax;
    PUSH32(esp, 0); sub_004569B8(); /* call 0x004569B8 */

loc_00457330: ;
    eax = 0; /* xor self */
    esp = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00457388
 * Original: 0x00457388 - 0x004573DD (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457388(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00457388: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ebp);
    esp = esp - 0x1C;
    eax = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x10);
    ebp = MEM32(ebx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_004573CE; /* je: equal / zero */

loc_004573A2: ;
    if (TEST_Z(edx, edx)) goto loc_004573CE; /* je: equal / zero */

loc_004573A6: ;
    if (TEST_Z(ebp, ebp)) goto loc_004573CE; /* je: equal / zero */

loc_004573AA: ;
    if (CMP_LE(ecx & ecx, 0)) { sub_004573DD(); return; } /* jle: less or equal (signed <=) */

loc_004573AE: ;
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ebp;
    PUSH32(esp, 0); sub_004674B0(); /* call 0x004674B0 */

loc_004573C2: ;
    eax = 0; /* xor self */
    esp = esp + 0x1C;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_004573CE: ;
    eax = 0xFFFFFFF8u;
    esp = esp + 0x1C;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00457400
 * Original: 0x00457400 - 0x00457606 (518 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457400(void)
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

loc_00457400: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    eax--;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp) = eax;
    if (CMP_G(ecx, eax)) goto loc_0045741A; /* jg: greater (signed >) */

loc_00457417: ;
    MEM32(esp) = ecx;

loc_0045741A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(esp);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    edx = 1;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(ecx, edx)) goto loc_004574EB; /* jl: less (signed <) */

loc_0045743F: ;
    ecx = ebx;
    ecx = ecx - edi;
    PUSH32(esp, ebp);
    ebp = edi + 4;
    MEM32(esp + 0x14) = ecx;
    goto loc_00457450;

    /* nop */

loc_00457450: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    eax = edx + -1;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    esi = 1;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    if (CMP_L(eax, 4)) goto loc_004574B1; /* jl: less (signed <) */

loc_00457466: ;
    edi = edx + -5;
    edi = edi >> 2;
    edi++;
    eax = ebx + 0xC;
    ecx = ebp + -12;
    esi = edi * 4 + 1;
    /* nop */

loc_00457480: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = eax + 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx - 0x10;
    edi--;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    if ((edi != 0)) goto loc_00457480; /* jne: not equal / not zero */

loc_004574A9: ;
    edi = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x14);

loc_004574B1: ;
    if (CMP_GE(esi, edx)) goto loc_004574CF; /* jge: greater or equal (signed >=) */

loc_004574B5: ;
    eax = edx;
    eax = eax - esi;
    eax = edi + eax * 4;
    /* nop */

loc_004574C0: ;
    fp_push(MEMF(ebx + esi * 4)); /* fld float */
    esi++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax - 4;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    if (CMP_L(esi, edx)) goto loc_004574C0; /* jl: less (signed <) */

loc_004574CF: ;
    eax = MEM32(esp + 0x10);
    MEMF(ebp) = (float)fp_top(); fp_popp(); /* fstp */
    edx++;
    ebp = ebp + 4;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (CMP_LE(edx, eax)) goto loc_00457450; /* jle: less or equal (signed <=) */

loc_004574E6: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, ebp);

loc_004574EB: ;
    if (CMP_G(edx, eax)) goto loc_00457583; /* jg: greater (signed >) */

loc_004574F3: ;
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(0x648CF8)); /* fld float */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    esi = 1;
    if (CMP_L(eax, 4)) goto loc_0045754D; /* jl: less (signed <) */

loc_00457507: ;
    ecx = edi + edx * 4 + -12;
    edi = MEM32(esp + 0x20);
    edi = edi >> 2;
    eax = ebx + 0xC;
    esi = edi * 4 + 1;
    /* nop */

loc_00457520: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = eax + 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx - 0x10;
    edi--;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    if ((edi != 0)) goto loc_00457520; /* jne: not equal / not zero */

loc_00457549: ;
    edi = MEM32(esp + 0x24);

loc_0045754D: ;
    if (CMP_G(esi, MEM32(esp + 0x20))) goto loc_00457573; /* jg: greater (signed >) */

loc_00457553: ;
    ecx = edx;
    ecx = ecx - esi;
    eax = edi + ecx * 4;
    /* nop */

loc_00457560: ;
    fp_push(MEMF(ebx + esi * 4)); /* fld float */
    ecx = MEM32(esp + 0x20);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi++;
    eax = eax - 4;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    if (CMP_LE(esi, ecx)) goto loc_00457560; /* jle: less or equal (signed <=) */

loc_00457573: ;
    eax = MEM32(esp + 0x28);
    MEMF(edi + edx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx++;
    if (CMP_LE(edx, eax)) goto loc_004574F3; /* jle: less or equal (signed <=) */

loc_00457583: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    ecx = 1;
    if (CMP_L(eax, 4)) goto loc_004575D9; /* jl: less (signed <) */

loc_0045758D: ;
    edx = 0x584CB8;
    esi = 0x584CBC;
    ebx = eax + -3;
    edx = edx - edi;
    eax = edi + 0xC;
    esi = esi - edi;

loc_004575A1: ;
    fp_push(MEMF(ecx * 4 + 0x584CB8)); /* fld float */
    ecx = ecx + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 0x10;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEMF(eax + -24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx * 4 + 0x584CAC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + eax + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + eax + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ecx, ebx)) goto loc_004575A1; /* jle: less or equal (signed <=) */

loc_004575D9: ;
    if (CMP_G(ecx, MEM32(esp + 0x28))) goto loc_004575FF; /* jg: greater (signed >) */

loc_004575DF: ;
    esi = MEM32(esp + 0x28);
    edx = 0x584CB8;
    esi = esi - ecx;
    edx = edx - edi;
    eax = edi + ecx * 4;
    esi++;

loc_004575F0: ;
    fp_push(MEMF(eax + edx)); /* fld float */
    eax = eax + 4;
    esi--;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((esi != 0)) goto loc_004575F0; /* jne: not equal / not zero */

loc_004575FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00457610
 * Original: 0x00457610 - 0x004577A5 (405 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457610(void)
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

loc_00457610: ;
    esp = esp - 0x10;
    fp_push(MEMF(0x6496EC)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, ebp);
    MEM32(esp + 8) = 0;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00457632: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0x1C) = (int32_t)fp_top(); /* fistp */
    ebp = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 8)); /* fld float */
    ebp = (uint32_t)((int32_t)ebp >> 1);
    ebx = ebp + 0x4000;
    ebx = (uint32_t)((int32_t)ebx >> 0xF);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(esp + 0xC) = ebp;
    if (CMP_L(eax, 1)) goto loc_00457795; /* jl: less (signed <) */

loc_00457668: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    edi = 0x4000;
    MEM32(esp + 0x2C) = eax;
    goto loc_00457680;

    /* nop */

loc_00457680: ;
    ecx = MEM32(esp + 0x24);
    fp_push(MEMF(0x649A1C)); /* fld float */
    edi = edi + ecx;
    eax = edi;
    eax = (uint32_t)((int32_t)eax >> 0xF);
    ecx = MEM32(esi + eax * 8);
    eax = esi + eax * 8;
    eax = MEM32(eax + 4);
    edx = ebx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    eax = edi + -15872;
    eax = (uint32_t)((int32_t)eax >> 0xA);
    ecx = edx;
    ecx = ecx << 5;
    ebx = edi + ebp;
    ecx = ecx - eax;
    ebx = (uint32_t)((int32_t)ebx >> 0xF);
    (void)0; /* cmp ecx, 0xFFFFFF90u - flags set for next jcc */
    eax = esi + edx * 8;
    if (CMP_G(ecx, 0xFFFFFF90u)) goto loc_004576FA; /* jg: greater (signed >) */

loc_004576C2: ;
    esi = 0xFFFFFF90u;
    esi = esi - ecx;
    esi = esi >> 5;
    esi++;
    ebp = esi;
    ebp = ebp << 5;
    ecx = ecx + ebp;
    edx = edx + esi;

loc_004576D6: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = eax + 8;
    esi--;
    fp_push(MEMF(eax + -8)); /* fld float */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    /* fstp st(0) */
    if ((esi != 0)) goto loc_004576D6; /* jne: not equal / not zero */

loc_004576F2: ;
    esi = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x14);

loc_004576FA: ;
    (void)0; /* cmp ecx, 0x70 - flags set for next jcc */
    /* fld st(0) */
    if (CMP_GE(ecx, 0x70)) goto loc_00457757; /* jge: greater or equal (signed >=) */

loc_00457701: ;
    ecx = ecx * 4 + 0x584F28;

loc_00457708: ;
    if (CMP_GE(edx, ebx)) goto loc_0045777E; /* jge: greater or equal (signed >=) */

loc_0045770C: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = ecx + 0x80;
    fp_push(MEMF(eax)); /* fld float */
    edx++;
    /* fld st(1) */
    eax = eax + 8;
    (void)0; /* cmp ecx, 0x5850E8 - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [eax - 8] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [eax - 4] */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_L(ecx, 0x5850E8)) goto loc_00457708; /* jl: less (signed <) */

loc_00457757: ;
    if (CMP_GE(edx, ebx)) goto loc_0045777E; /* jge: greater or equal (signed >=) */

loc_0045775B: ;
    ecx = ebx;
    ecx = ecx - edx;
    /* nop */

loc_00457760: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = eax + 8;
    ecx--;
    fp_push(MEMF(eax + -8)); /* fld float */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((ecx != 0)) goto loc_00457760; /* jne: not equal / not zero */

loc_0045777E: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    eax = MEM32(esp + 0x2C);
    eax--;
    MEM32(esp + 0x2C) = eax;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    if ((eax != 0)) goto loc_00457680; /* jne: not equal / not zero */

loc_00457793: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00457795: ;
    /* FPU: fidiv dword ptr [esp + 0x14] */
    POP32(esp, ebp);
    POP32(esp, ebx);
    /* FPU: fsubr dword ptr [0x648d14] */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004577B0
 * Original: 0x004577B0 - 0x004577DB (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004577B0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004577B0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x6496EC)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(esp);
    ecx = MEM32(esp + 8);
    if (CMP_LE(eax, ecx)) goto loc_004577D9; /* jle: less or equal (signed <=) */

loc_004577D7: ;
    eax = ecx;

loc_004577D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004577E0
 * Original: 0x004577E0 - 0x0045787D (157 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004577E0(void)
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

loc_004577E0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = 0; /* xor self */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x5771D0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00457823; /* jp: parity */

loc_0045780F: ;
    /* nop */

loc_00457810: ;
    fp_push(MEMF(ecx * 4 + 0x5771D4)); /* fld float */
    ecx++;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00457810; /* jnp: not parity */

loc_00457823: ;
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edx = esi + ecx * 4;
    edi = 0x5771D0;
    ebx = ecx;
    edi = edi - esi;

loc_00457834: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [edx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00457843; /* jp: parity */

loc_0045783D: ;
    /* fstp st(0) */
    ebx = ecx;
    fp_push(MEMF(edx)); /* fld float */

loc_00457843: ;
    ecx++;
    edx = edx + 4;
    if (CMP_GE(ecx, 0x59)) goto loc_0045785A; /* jge: greater or equal (signed >=) */

loc_0045784C: ;
    fp_push(MEMF(edi + edx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00457834; /* jnp: not parity */

loc_0045785A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00457871; /* jne: not equal / not zero */

loc_00457867: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */

loc_00457871: ;
    eax = MEM32(esp + 0x18);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    eax = ebx;
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
 * sub_00457880
 * Original: 0x00457880 - 0x0045789D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457880(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00457880: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    ecx = 0x58;
    MEM32(esp + 0x10) = 0xBF800000u;
    g_seh_ebp = ebp; sub_004578A0(); return; /* tail jmp 0x004578A0 */

}

/**
 * sub_00457980
 * Original: 0x00457980 - 0x00457A81 (257 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457980(void)
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

loc_00457980: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = MEM32(ebp + edi * 4 + -4);
    fp_push(MEMF(esi * 4 + 0x5771D0)); /* fld float */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e5c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00457A6F; /* jp: parity */

loc_004579B5: ;
    fp_push(MEMF(ecx + esi * 4)); /* fld float */
    edx = 0; /* xor self */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004579C6: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esi*4 + 0x5771d4] */
    esi++;
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_004579C6; /* je: equal / zero */

loc_004579D5: ;
    /* fstp st(0) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx + esi*4 - 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004579F1; /* jne: not equal / not zero */

loc_004579E2: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx + esi*4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004579F1; /* jne: not equal / not zero */

loc_004579EC: ;
    edx = 1;

loc_004579F1: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00457A00;

    /* nop */

loc_00457A00: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esi*4 + 0x5771d4] */
    esi++;
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00457A00; /* je: equal / zero */

loc_00457A0F: ;
    /* fstp st(0) */
    ecx = ecx + esi * 4;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx - 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00457A29; /* jne: not equal / not zero */

loc_00457A1E: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00457A30; /* je: equal / zero */

loc_00457A27: ;
    goto loc_00457A2B;

loc_00457A29: ;
    /* fstp st(0) */

loc_00457A2B: ;
    if (CMP_NE(edx, 1)) goto loc_00457A6F; /* jne: not equal / not zero */

loc_00457A30: ;
    if (CMP_NE(edi, 1)) goto loc_00457A68; /* jne: not equal / not zero */

loc_00457A35: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = 0x59;
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004583F4(); /* call 0x004583F4 */

loc_00457A4D: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ecx = ecx + esi;
    MEM32(ebp) = ecx;
    MEM32(edx) = ebx;
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00457A68: ;
    edi--;
    if (CMP_NE(ebx, edi)) goto loc_00457A6F; /* jne: not equal / not zero */

loc_00457A6D: ;
    ebx = 0; /* xor self */

loc_00457A6F: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    MEM32(edx) = ebx;
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00457A90
 * Original: 0x00457A90 - 0x00457B55 (197 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457A90(void)
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

loc_00457A90: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00457AC3; /* jle: less or equal (signed <=) */

loc_00457AAC: ;
    /* nop */

loc_00457AB0: ;
    eax = MEM32(esi + edx * 4);
    if (CMP_NE(ebx, eax)) goto loc_00457ABC; /* jne: not equal / not zero */

loc_00457AB7: ;
    ebp = 1;

loc_00457ABC: ;
    if (CMP_G(ebx, eax)) goto loc_00457AC3; /* jg: greater (signed >) */

loc_00457ABE: ;
    edx++;
    if (CMP_L(edx, ecx)) goto loc_00457AB0; /* jl: less (signed <) */

loc_00457AC3: ;
    if (TEST_NZ(ebp, ebp)) goto loc_00457B44; /* jne: not equal / not zero */

loc_00457AC7: ;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(eax + ebx * 4)); /* fld float */
    ebx = MEM32(esi + edi * 4);
    fp_push(MEMF(eax + ebx * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(edx, ecx)) goto loc_00457AF8; /* jne: not equal / not zero */

loc_00457AE2: ;
    ebx = MEM32(esi);
    fp_push(MEMF(eax + ebx * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_00457B07; /* je: equal / zero */

loc_00457AF8: ;
    if (CMP_LE(edx, edi)) goto loc_00457B42; /* jle: less or equal (signed <=) */

loc_00457AFC: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp + 0xc] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_00457B42; /* jne: not equal / not zero */

loc_00457B07: ;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = ecx;
    if (CMP_LE(ecx, edx)) goto loc_00457B1C; /* jle: less or equal (signed <=) */

loc_00457B0D: ;
    /* nop */

loc_00457B10: ;
    ebx = MEM32(esi + eax * 4 + -4);
    MEM32(esi + eax * 4) = ebx;
    eax--;
    if (CMP_G(eax, edx)) goto loc_00457B10; /* jg: greater (signed >) */

loc_00457B1C: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x18);
    MEM32(esi + edx * 4) = eax;
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_00457B30; /* jne: not equal / not zero */

loc_00457B2E: ;
    edi = edx;

loc_00457B30: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    MEM32(edx) = edi;
    POP32(esp, edi);
    ecx++;
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00457B42: ;
    /* fstp st(0) */

loc_00457B44: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
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
 * sub_00457B60
 * Original: 0x00457B60 - 0x00457C14 (180 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457B60(void)
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

loc_00457B60: ;
    esp = esp - 0x10;
    fp_push(MEMF(eax * 4 + 0x5771D0)); /* fld float */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00457B95; /* jle: less or equal (signed <=) */

loc_00457B7B: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edi = 1;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */

loc_00457B95: ;
    eax++;
    if (CMP_GE(eax, 0x59)) goto loc_00457BB1; /* jge: greater or equal (signed >=) */

loc_00457B9B: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edi++;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + edi * 4 + 0x10) = (float)fp_top(); fp_popp(); /* fstp */

loc_00457BB1: ;
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00457C09; /* jle: less or equal (signed <=) */

loc_00457BB7: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    /* nop */

loc_00457BC0: ;
    eax = MEM32(esp + 0x30);
    fp_push(MEMF(esp + esi * 4 + 0x18)); /* fld float */
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00467E60(); /* call 0x00467E60 */

loc_00457BE7: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebp] */
    esp = esp + 0x18;
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00457C01; /* jne: not equal / not zero */

loc_00457BF4: ;
    edx = MEM32(esp + 0x14);
    MEMF(ebp) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0x10) = edx;
    goto loc_00457C03;

loc_00457C01: ;
    /* fstp st(0) */

loc_00457C03: ;
    esi++;
    if (CMP_L(esi, edi)) goto loc_00457BC0; /* jl: less (signed <) */

loc_00457C08: ;
    POP32(esp, ebx);

loc_00457C09: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
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
 * sub_00457C20
 * Original: 0x00457C20 - 0x00457DDB (443 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457C20(void)
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

loc_00457C20: ;
    esp = esp - 0x198;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1A0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1AC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00449DC0(); /* call 0x00449DC0 */

loc_00457C40: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = MEM32(esp + 0x1C4);
    edx = MEM32(esp + 0x1C0);
    /* FPU: fdivr dword ptr [0x648ce4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00467F70(); /* call 0x00467F70 */

loc_00457C71: ;
    edx = MEM32(esp + 0x1EC);
    eax = MEM32(esp + 0x1E8);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esp + 0x74;
    PUSH32(esp, 0); sub_004577E0(); /* call 0x004577E0 */

loc_00457C8F: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    ebp = eax;
    ecx = MEM32(esp + ebp * 4 + 0x74);
    MEMF(esp + ebp * 4 + 0x74) = (float)fp_top(); fp_popp(); /* fstp */
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    edi = esi;
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0); sub_00457880(); /* call 0x00457880 */

loc_00457CB2: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00457980(); /* call 0x00457980 */

loc_00457CCC: ;
    esp = esp + 0x44;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    esi = esp + 0x3C;
    PUSH32(esp, 0); sub_00457A90(); /* call 0x00457A90 */

loc_00457CE6: ;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + ebp * 4 + 0x54) = ecx;
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    esp = esp + 0x10;
    edi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00457DD0; /* jle: less or equal (signed <=) */

loc_00457D05: ;
    edx = MEM32(esp + 0x1C0);
    esi = MEM32(esp + 0x1BC);
    esi = esi - edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = esi;
    /* nop */

loc_00457D20: ;
    if (TEST_Z(edi, edi)) goto loc_00457D37; /* je: equal / zero */

loc_00457D24: ;
    edx = ecx + -1;
    if (CMP_EQ(edi, edx)) goto loc_00457D37; /* je: equal / zero */

loc_00457D2B: ;
    if (CMP_NE(edi, MEM32(esp + 0x18))) goto loc_00457DC7; /* jne: not equal / not zero */

loc_00457D35: ;
    goto loc_00457D3D;

loc_00457D37: ;
    if (CMP_NE(edi, MEM32(esp + 0x18))) goto loc_00457D46; /* jne: not equal / not zero */

loc_00457D3D: ;
    edx = MEM32(esp + 0x1CC);
    MEM32(edx) = eax;

loc_00457D46: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1B0);
    esi = MEM32(esp + edi * 4 + 0x2C);
    fp_push(MEMF(esp + esi * 4 + 0x44)); /* fld float */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x1BC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1BC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_00457B60(); /* call 0x00457B60 */

loc_00457D7C: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    esp = esp + 0x18;
    MEMF(edx + ecx) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    if (CMP_NE(esi, ebp)) goto loc_00457DAF; /* jne: not equal / not zero */

loc_00457D92: ;
    fp_push(MEMF(esp + 0x1C8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00457DAF; /* jne: not equal / not zero */

loc_00457DA2: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */

loc_00457DAF: ;
    edx = MEM32(esp + 0x1C);
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    edx++;
    ecx = ecx + 4;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = edx;
    eax = edx;

loc_00457DC7: ;
    edi++;
    if (CMP_L(edi, ecx)) goto loc_00457D20; /* jl: less (signed <) */

loc_00457DD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x198;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00457DE0
 * Original: 0x00457DE0 - 0x00457DFE (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00457DE0: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp eax, 0x358637BD - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_G(eax, 0x358637BD)) { sub_00457DFE(); return; } /* jg: greater (signed >) */

loc_00457DEF: ;
    MEM32(esp + 4) = 0x358637BD;
    ecx = 5;
    g_seh_ebp = ebp; sub_00457E40(); return; /* tail jmp 0x00457E40 */

}

/**
 * sub_00457E80
 * Original: 0x00457E80 - 0x00458069 (489 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00457E80(void)
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

loc_00457E80: ;
    esp = esp - 0x124;
    fp_push((double)SMEM32(esp + 0x128)); /* fild */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x10) = (int32_t)fp_top(); /* fistp */
    ecx = MEM32(esp + 0x10);
    edi = ecx + 0x4000;
    MEM32(esp + 0x14) = edi;
    edi = ecx * 8 + 0x4000;
    MEM32(esp + 0x10) = edi;
    edi = ecx;
    ebx = ecx + ecx * 2;
    edi = (uint32_t)((int32_t)edi * (int32_t)7);
    ebx = ebx + ebx + 0x4000;
    MEM32(esp + 0x28) = ebx;
    ebx = ecx + ecx * 4 + 0x4000;
    MEM32(esp + 0x1C) = ebx;
    ebx = ecx * 4 + 0x4000;
    MEM32(esp + 0x20) = ebx;
    ebx = ecx + ecx * 2 + 0x4000;
    edi = edi + 0x4000;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    eax = 2;
    esi = ecx * 8;
    MEM32(esp + 0x18) = 3;
    ebx = 0; /* xor self */

loc_00457F22: ;
    ebp = MEM32(esp + 0x14);
    ebp = (uint32_t)((int32_t)ebp >> 0xF);
    ebp = MEM32(edx + ebp * 4);
    MEM32(esp + eax * 4 + 0x2C) = ebp;
    ebp = MEM32(esp + 0x14);
    ebp = ebp + ecx;
    ebp = (uint32_t)((int32_t)ebp >> 0xF);
    MEM32(esp + eax * 4 + 0x30) = ebx;
    ebp = MEM32(edx + ebp * 4);
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebp;
    ebp = MEM32(esp + 0x24);
    ebp = (uint32_t)((int32_t)ebp >> 0xF);
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebx;
    ebp = MEM32(edx + ebp * 4);
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = (uint32_t)((int32_t)ebp >> 0xF);
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebx;
    ebp = MEM32(edx + ebp * 4);
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebp;
    ebp = MEM32(esp + 0x1C);
    ebp = (uint32_t)((int32_t)ebp >> 0xF);
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebx;
    ebp = MEM32(edx + ebp * 4);
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebp;
    ebp = MEM32(esp + 0x28);
    ebp = (uint32_t)((int32_t)ebp >> 0xF);
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebx;
    ebp = MEM32(edx + ebp * 4);
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebp;
    eax++;
    MEM32(esp + eax * 4 + 0x30) = ebx;
    eax++;
    eax++;
    ebp = edi;
    ebp = (uint32_t)((int32_t)ebp >> 0xF);
    ebp = MEM32(edx + ebp * 4);
    MEM32(esp + eax * 4 + 0x2C) = ebp;
    ebp = MEM32(esp + 0x10);
    ebp = (uint32_t)((int32_t)ebp >> 0xF);
    eax++;
    MEM32(esp + eax * 4 + 0x2C) = ebx;
    ebp = MEM32(edx + ebp * 4);
    MEM32(esp + eax * 4 + 0x30) = ebp;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + esi;
    ebp = MEM32(esp + 0x24);
    eax++;
    ebp = ebp + esi;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + esi;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + esi;
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + esi;
    ebp = MEM32(esp + 0x10);
    ebp = ebp + esi;
    eax++;
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(esp + 0x18);
    MEM32(esp + eax * 4 + 0x2C) = ebx;
    eax++;
    edi = edi + esi;
    ebp--;
    MEM32(esp + 0x18) = ebp;
    if ((ebp != 0)) goto loc_00457F22; /* jne: not equal / not zero */

loc_00457FF7: ;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x19);
    esi = esi + 0x4000;
    edi = 7;

loc_00458007: ;
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp >> 0xF);
    ebp = MEM32(edx + ebp * 4);
    MEM32(esp + eax * 4 + 0x2C) = ebp;
    eax++;
    MEM32(esp + eax * 4 + 0x2C) = ebx;
    eax++;
    esi = esi + ecx;
    edi--;
    if ((edi != 0)) goto loc_00458007; /* jne: not equal / not zero */

loc_0045801E: ;
    MEM32(esp + eax * 4 + 0x2C) = ebx;
    PUSH32(esp, 2);
    MEM32(esp + eax * 4 + 0x34) = ebx;
    eax = esp + 0x30;
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00449890(); /* call 0x00449890 */

loc_00458034: ;
    ecx = MEM32(esp + 0x14C);
    edi = MEM32(esp + 0x148);
    ecx = ecx * 4 + 4;
    edx = ecx;
    ecx = ecx >> 2;
    esi = esp + 0x38;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esp = esp + 0xC;
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00458070
 * Original: 0x00458070 - 0x00458270 (512 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458070(void)
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

loc_00458070: ;
    esp = esp - 0x114;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax * 4 + 4;
    esi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    edi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edx = eax + 1;
    ecx = 0x42;
    ecx = ecx - edx;
    ecx = ecx << 2;
    edi = esp + edx * 4 + 0x18;
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
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00449790(); /* call 0x00449790 */

loc_004580C1: ;
    esp = esp + 8;
    fp_push((double)SMEM32(esp + 0x128)); /* fild */
    /* FPU: fdivr dword ptr [0x5851c0] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x10) = (int32_t)fp_top(); /* fistp */
    ebp = MEM32(esp + 0x128);
    edx = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    ebp--;
    (void)0; /* cmp ebp, 4 - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(ebp, 4)) goto loc_004581FA; /* jl: less (signed <) */

loc_004580FE: ;
    eax = MEM32(esp + 0x124);
    ebp = ebp + 0xFFFFFFFCu;
    ecx = edx + edx * 2 + 0x4000;
    ebp = ebp >> 2;
    MEM32(esp + 0xC) = ecx;
    eax = eax + 8;
    ecx = edx + edx + 0x4000;
    ebp++;
    PUSH32(esp, ebx);
    ebx = edx * 4;
    edi = 0x4000;
    MEM32(esp + 0x14) = ecx;
    esi = ebp * 4;
    /* nop */

loc_00458140: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx >> 0xF);
    ecx = ecx << 1;
    fp_push(MEMF(esp + ecx * 4 + 0x1C)); /* fld float */
    eax = eax + 0x10;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -24) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + ecx * 4 + 0x20)); /* fld float */
    ecx = edi + edx;
    /* fld st(0) */
    ecx = (uint32_t)((int32_t)ecx >> 0xF);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx << 1;
    edi = edi + ebx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -24) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + ecx * 4 + 0x1C)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -20) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + ecx * 4 + 0x20)); /* fld float */
    ecx = MEM32(esp + 0x14);
    /* fld st(0) */
    ecx = (uint32_t)((int32_t)ecx >> 0xF);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx << 1;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -20) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + ecx * 4 + 0x1C)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -16) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + ecx * 4 + 0x20)); /* fld float */
    ecx = MEM32(esp + 0x10);
    /* fld st(0) */
    ecx = (uint32_t)((int32_t)ecx >> 0xF);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx << 1;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -16) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + ecx * 4 + 0x1C)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + ecx * 4 + 0x20)); /* fld float */
    ecx = MEM32(esp + 0x14);
    /* fld st(0) */
    ecx = ecx + ebx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + ebx;
    ebp--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(esp + 0x10) = ecx;
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if ((ebp != 0)) goto loc_00458140; /* jne: not equal / not zero */

loc_004581F5: ;
    ebp = MEM32(esp + 0x18);
    POP32(esp, ebx);

loc_004581FA: ;
    if (CMP_GE(esi, ebp)) goto loc_00458245; /* jge: greater or equal (signed >=) */

loc_004581FE: ;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    ecx = ecx + 0x4000;
    /* nop */

loc_00458210: ;
    edi = MEM32(esp + 0x124);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 0xF);
    eax = eax << 1;
    fp_push(MEMF(esp + eax * 4 + 0x18)); /* fld float */
    esi++;
    /* fld st(0) */
    ecx = ecx + edx;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + esi * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + eax * 4 + 0x1C)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + esi * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_L(esi, ebp)) goto loc_00458210; /* jl: less (signed <) */

loc_00458245: ;
    eax = MEM32(esp + 0x124);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = edx + 0x4000;
    edx = (uint32_t)((int32_t)edx >> 0xF);
    edx = edx << 1;
    if (CMP_L(edx, 0x40)) { sub_00458270(); return; } /* jl: less (signed <) */

loc_0045825F: ;
    edx = MEM32(eax + esi * 4 + -4);
    POP32(esp, edi);
    MEM32(eax + esi * 4) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004582A0
 * Original: 0x004582A0 - 0x004583F3 (339 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004582A0(void)
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

loc_004582A0: ;
    eax = MEM32(esp + 0x10);
    esp = esp - 0x1E4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x200);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00459360(); /* call 0x00459360 */

loc_004582CA: ;
    fp_push((double)SMEM32(esp + 0x214)); /* fild */
    esp = esp + 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004712FD(); /* call 0x004712FD */

loc_004582E2: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_004582EA: ;
    esi = eax;
    if (CMP_LE(esi, 7)) goto loc_004582F6; /* jle: less or equal (signed <=) */

loc_004582F1: ;
    esi = 7;

loc_004582F6: ;
    ebx = MEM32(esp + 0x1FC);
    PUSH32(esp, esi);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = ebp;
    PUSH32(esp, 0); sub_00457E80(); /* call 0x00457E80 */

loc_0045830B: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00459080(); /* call 0x00459080 */

loc_00458333: ;
    PUSH32(esp, 0x3F7AE148);
    eax = esp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00468090(); /* call 0x00468090 */

loc_00458346: ;
    edx = esp + 0xA0;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esi;
    edx = esp + 0x50;
    PUSH32(esp, 0); sub_00458070(); /* call 0x00458070 */

loc_0045835A: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x23C);
    ecx = MEM32(eax);
    esp = esp + 0x38;
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    edx = 0; /* xor self */
    fp_push(MEMF(esp + 0x208)); /* fld float */
    esi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ecx & ecx, 0)) goto loc_004583CB; /* jle: less or equal (signed <=) */

loc_0045838D: ;
    /* nop */

loc_00458390: ;
    ecx = MEM32(edi + esi * 4);
    if (CMP_GE(ecx, ebx)) goto loc_004583BD; /* jge: greater or equal (signed >=) */

loc_00458397: ;
    fp_push(MEMF(esp + ecx * 4 + 0x70)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x10] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_004583BD; /* jne: not equal / not zero */

loc_004583AA: ;
    fp_push(MEMF(ebp + ecx * 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x14] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004583BD; /* jne: not equal / not zero */

loc_004583B9: ;
    MEM32(edi + edx * 4) = ecx;
    edx++;

loc_004583BD: ;
    ecx = MEM32(esp + 0x204);
    eax = MEM32(ecx);
    esi++;
    if (CMP_L(esi, eax)) goto loc_00458390; /* jl: less (signed <) */

loc_004583CB: ;
    eax = 0x7FFF;
    MEM32(edi + edx * 4) = eax;
    MEM32(edi + edx * 4 + 4) = eax;
    MEM32(edi + edx * 4 + 8) = eax;
    MEM32(edi + edx * 4 + 0xC) = eax;
    eax = MEM32(esp + 0x204);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 0x1E4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004583F4
 * Original: 0x004583F4 - 0x00458481 (141 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004583F4(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004583F4: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    esi = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_00458472; /* je: equal / zero */

loc_0045840E: ;
    if (TEST_Z(esi, esi)) goto loc_00458472; /* je: equal / zero */

loc_00458412: ;
    if (CMP_LE(edx & edx, 0)) { sub_00458481(); return; } /* jle: less or equal (signed <=) */

loc_00458416: ;
    if (TEST_Z(eax, eax)) goto loc_00458460; /* je: equal / zero */

loc_0045841A: ;
    if (TEST_NZ(LO8(ecx), 3)) goto loc_00458424; /* jne: not equal / not zero */

loc_0045841F: ;
    if (CMP_GE(edx, 0x22)) goto loc_00458442; /* jge: greater or equal (signed >=) */

loc_00458424: ;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_004684CD(); /* call 0x004684CD */

loc_00458434: ;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0; /* xor self */
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00458442: ;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_00458494(); /* call 0x00458494 */

loc_00458452: ;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0; /* xor self */
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00458460: ;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046811C(); /* call 0x0046811C */

loc_00458468: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00458472: ;
    eax = 0xFFFFFFF8u;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00458494
 * Original: 0x00458494 - 0x0045860A (374 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458494(void)
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

loc_00458494: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x44;
    edx = MEM32(ebx + 8);
    ebp = MEM32(ebx + 0xC);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    fp_push(MEMF(edx)); /* fld float */
    (void)0; /* test LO8(edx), 0xC - flags set for next jcc */
    MEMD(esp + 0x28) = fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(edx), 0xC)) goto loc_004584EE; /* je: equal / zero */

loc_004584B5: ;
    ecx = MEM32(ebx + 8);
    fp_push(MEMD(esp + 0x28)); /* fld double */
    /* nop */
    /* nop */

loc_004584C4: ;
    fp_push(MEMF(ecx + edi * 4)); /* fld float */
    /* fld st(1) */
    edx = edx + 4;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomi */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcmovnbe st(0), st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) esi = edi; /* cmova */
    edi++;
    ebp--;
    if ((ebp == 0)) { sub_0045860A(); return; } /* je: equal / zero */

loc_004584E5: ;
    if (TEST_NZ(LO8(edx), 0xC)) goto loc_004584C4; /* jne: not equal / not zero */

loc_004584EA: ;
    MEMD(esp + 0x28) = fp_top(); fp_popp(); /* fstp */

loc_004584EE: ;
    edx = ebp;
    edx = edx & 7;
    ebp = ebp - edx;
    MEM32(esp + 0x34) = edx;
    eax = ebp + -2048;
    if (CMP_LE(eax & eax, 0)) goto loc_00458572; /* jle: less or equal (signed <=) */

loc_00458503: ;
    edx = MEM32(ebx + 8);
    edx = edx + edi * 4;
    ebp = eax;
    MEM32(esp + 0x30) = esi;
    esi = edx;
    /* nop */

loc_00458514: ;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0x800;
    PUSH32(esp, 0); sub_00468371(); /* call 0x00468371 */

loc_00458528: ;
    fp_push(MEMD(esp + 0x28)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_00458534; /* jb: below (unsigned <) */

loc_00458530: ;
    /* fstp st(0) */
    goto loc_00458554;

loc_00458534: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMD(esp + 0x28) = fp_top(); fp_popp(); /* fstp */
    MEM32(esp) = esi;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004683D3(); /* call 0x004683D3 */

loc_0045854C: ;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + edi;

loc_00458554: ;
    esi = esi + 0x2000;
    edi = edi + 0x800;
    ebp = ebp + 0xFFFFF800u;
    if (CMP_G(ebp & ebp, 0)) goto loc_00458514; /* jg: greater (signed >) */

loc_0045856A: ;
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x30);

loc_00458572: ;
    edx = MEM32(ebx + 8);
    ecx = edx + edi * 4;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = ebp;
    PUSH32(esp, 0); sub_00468371(); /* call 0x00468371 */

loc_00458588: ;
    fp_push(MEMD(esp + 0x28)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_00458594; /* jb: below (unsigned <) */

loc_00458590: ;
    /* fstp st(0) */
    goto loc_004585B4;

loc_00458594: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    eax = MEM32(esp + 0x38);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMD(esp + 0x28) = fp_top(); fp_popp(); /* fstp */
    MEM32(esp) = eax;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004683D3(); /* call 0x004683D3 */

loc_004585B0: ;
    esi = eax;
    esi = esi + edi;

loc_004585B4: ;
    ebp = ebp + edi;
    edx = MEM32(esp + 0x34);
    if (TEST_Z(edx, edx)) goto loc_004585F7; /* je: equal / zero */

loc_004585BE: ;
    ecx = edx;
    edx = MEM32(ebx + 8);
    fp_push(MEMD(esp + 0x28)); /* fld double */

loc_004585C7: ;
    fp_push(MEMF(edx + ebp * 4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomi */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcmovnbe st(0), st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) esi = ebp; /* cmova */
    ebp++;
    ecx--;
    if ((ecx != 0)) goto loc_004585C7; /* jne: not equal / not zero */

loc_004585F3: ;
    MEMD(esp + 0x28) = fp_top(); fp_popp(); /* fstp */

loc_004585F7: ;
    edx = MEM32(ebx + 0x10);
    MEM32(edx) = esi;
    fp_push(MEMD(esp + 0x28)); /* fld double */
    esp = esp + 0x44;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00458630
 * Original: 0x00458630 - 0x004586BD (141 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458630(void)
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

loc_00458630: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_L(edi, 4)) { sub_004586BD(); return; } /* jl: less (signed <) */

loc_00458643: ;
    esi = edi + -4;
    esi = esi >> 2;
    esi++;
    eax = esi;
    eax = (uint32_t)(-(int32_t)eax);
    edi = edi + eax * 4;
    eax = MEM32(esp + 0xC);

loc_00458655: ;
    fp_push(MEMF(eax)); /* fld float */
    eax = eax + 0x10;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 0x10;
    /* fld st(0) */
    edx = edx + 0x10;
    esi--;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edx + -16) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(eax + -12)); /* fld float */
    fp_push(MEMF(ecx + -12)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edx + -12) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(eax + -8)); /* fld float */
    fp_push(MEMF(ecx + -8)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edx + -8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_push(MEMF(ecx + -4)); /* fld float */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    if ((esi != 0)) goto loc_00458655; /* jne: not equal / not zero */

loc_004586BB: ;
    g_seh_ebp = ebp; sub_004586C1(); return; /* tail jmp 0x004586C1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004586F0
 * Original: 0x004586F0 - 0x00458777 (135 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004586F0(void)
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

loc_004586F0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_L(esi, 4)) { sub_00458777(); return; } /* jl: less (signed <) */

loc_004586FE: ;
    edx = esi + -4;
    edx = edx >> 2;
    edx++;
    eax = edx;
    eax = (uint32_t)(-(int32_t)eax);
    esi = esi + eax * 4;
    eax = MEM32(esp + 8);

loc_00458710: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = eax + 0x20;
    fp_push(MEMF(eax + -32)); /* fld float */
    ecx = ecx + 0x10;
    edx--;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ecx + -16) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(eax + -20)); /* fld float */
    fp_push(MEMF(eax + -24)); /* fld float */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ecx + -12) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(eax + -12)); /* fld float */
    fp_push(MEMF(eax + -16)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ecx + -8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_push(MEMF(eax + -8)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    if ((edx != 0)) goto loc_00458710; /* jne: not equal / not zero */

loc_00458775: ;
    g_seh_ebp = ebp; sub_0045877B(); return; /* tail jmp 0x0045877B */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004587B0
 * Original: 0x004587B0 - 0x004588BE (270 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004587B0(void)
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

loc_004587B0: ;
    esp = esp - 0x1B4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1CC);
    eax = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(esi & esi, 0)) goto loc_004587FF; /* jle: less or equal (signed <=) */

loc_004587C6: ;
    ecx = MEM32(esp + 0x1CC);
    edx = esp + 0x30;
    ecx = ecx - edx;

loc_004587D3: ;
    edx = ecx + eax * 4;
    fp_push(MEMF(esp + edx + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0x10) = (int32_t)fp_top(); /* fistp */
    edx = MEM32(esp + 0x10);
    MEM32(esp + eax * 4 + 0x30) = edx;
    eax++;
    if (CMP_L(eax, esi)) goto loc_004587D3; /* jl: less (signed <) */

loc_004587FF: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044A5E0(); /* call 0x0044A5E0 */

loc_0045880E: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1CC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_0044CC90(); /* call 0x0044CC90 */

loc_00458829: ;
    ecx = MEM32(esp + 0x34);
    esp = esp + 0x14;
    if (CMP_B(eax, 1)) goto loc_0045885B; /* jb: below (unsigned <) */

loc_00458835: ;
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    edi = MEM32(esp + 0x2C);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edx = ecx + eax * 4 + -4;
    edi--;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_AE(eax, edi)) goto loc_00458866; /* jae: above or equal (unsigned >=) */

loc_0045884D: ;
    fp_push(MEMF(ecx + eax * 4 + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00458862;

loc_0045885B: ;
    fp_push(MEMF(ecx + eax * 4 + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */

loc_00458862: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */

loc_00458866: ;
    fp_push(MEMF(0x64A838)); /* fld float */
    edi = MEM32(esp + 0x1C8);
    edx = 0; /* xor self */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    if (CMP_L(esi, 4)) goto loc_004588A6; /* jl: less (signed <) */

loc_0045887E: ;
    ecx = esi + -4;
    ecx = ecx >> 2;
    ecx++;
    eax = edi + 8;
    edx = ecx * 4;
    /* nop */

loc_00458890: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax + 0x10;
    ecx--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if ((ecx != 0)) goto loc_00458890; /* jne: not equal / not zero */

loc_004588A2: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */

loc_004588A6: ;
    if (CMP_GE(edx, esi)) { sub_004588BE(); return; } /* jge: greater or equal (signed >=) */

loc_004588AA: ;
    /* nop */

loc_004588B0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx++;
    if (CMP_L(edx, esi)) goto loc_004588B0; /* jl: less (signed <) */

loc_004588B8: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_004588C0(); return; /* tail jmp 0x004588C0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00458A10
 * Original: 0x00458A10 - 0x00458F26 (1302 bytes, 425 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458A10(void)
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

loc_00458A10: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0x28;
    ecx = 0; /* xor self */
    if (CMP_LE(eax, 0x64)) goto loc_00458A23; /* jle: less or equal (signed <=) */

loc_00458A1E: ;
    eax = 0x64;

loc_00458A23: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    edx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(eax, 4)) goto loc_00458B20; /* jl: less (signed <) */

loc_00458A48: ;
    ecx = ebx;
    ecx = ecx - esi;
    MEM32(esp + 0x28) = ecx;
    ecx = ebp;
    ecx = ecx - esi;
    MEM32(esp + 0x2C) = ecx;
    ecx = edx;
    ecx = ecx - esi;
    MEM32(esp + 0x1C) = ecx;
    ecx = ebx;
    ecx = ecx - ebp;
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    ecx = ecx - ebp;
    MEM32(esp + 0x30) = ecx;
    eax = eax + 0xFFFFFFFDu;
    ecx = ebx;
    ecx = ecx - edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x24);
    ecx--;
    eax = edx + 0xC;
    ecx = ecx >> 2;
    MEM32(esp + 0x20) = eax;
    edi = ebp + 8;
    eax = esi + 4;
    ecx = ecx * 4 + 4;
    goto loc_00458AA0;

    /* nop */

loc_00458AA0: ;
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(ebx + ebp * 4);
    ebp = MEM32(esp + 0x20);
    MEM32(eax + -4) = ebx;
    ebx = MEM32(edi + -8);
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(esp + 0x28);
    ebx = MEM32(ebx + eax);
    ebp = MEM32(esp + 0x1C);
    MEM32(eax) = ebx;
    ebx = MEM32(esp + 0x2C);
    ebx = MEM32(ebx + eax);
    MEM32(eax + ebp) = ebx;
    ebx = MEM32(esp + 0x18);
    ebx = MEM32(ebx + edi);
    ebp = MEM32(esp + 0x30);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edi);
    MEM32(edi + ebp) = ebx;
    ebx = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x34);
    ebp = MEM32(ebx + ebp);
    MEM32(eax + 8) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx) = ebp;
    ebp = MEM32(esp + 0x10);
    ebx = ebx + 0x10;
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x14);
    ebp = ebp + 4;
    ebx = ebx + 0xFFFFFFFDu;
    eax = eax + 0x10;
    edi = edi + 0x10;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    ebx = MEM32(esp + 0x3C);
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(ebp, ebx)) goto loc_00458AA0; /* jl: less (signed <) */

loc_00458B18: ;
    ebp = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x14);

loc_00458B20: ;
    if (CMP_GE(MEM32(esp + 0x10), eax)) goto loc_00458B8C; /* jge: greater or equal (signed >=) */

loc_00458B26: ;
    eax = eax - MEM32(esp + 0x10);
    edi = edx + ecx * 4;
    MEM32(esp + 0x20) = edi;
    edi = MEM32(esp + 0x10);
    edi = ebp + edi * 4;
    MEM32(esp + 0x1C) = edi;
    edi = ebx;
    edi = edi - ebp;
    ebp = esi;
    ebp = ebp - edx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = eax;
    ecx = ecx + eax;
    goto loc_00458B55;

loc_00458B51: ;
    edi = MEM32(esp + 0x18);

loc_00458B55: ;
    eax = MEM32(esp + 0x1C);
    edi = MEM32(eax + edi);
    eax = MEM32(esp + 0x20);
    MEM32(eax + ebp) = edi;
    edi = MEM32(esp + 0x1C);
    edi = MEM32(edi);
    MEM32(eax) = edi;
    edi = MEM32(esp + 0x1C);
    eax = eax + 4;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x14);
    edi = edi + 4;
    eax--;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00458B51; /* jne: not equal / not zero */

loc_00458B88: ;
    ebp = MEM32(esp + 0x40);

loc_00458B8C: ;
    edi = MEM32(esp + 0x44);
    eax = 0x64;
    eax = eax - ecx;
    edi--;
    if (CMP_LE(edi, eax)) goto loc_00458B9E; /* jle: less or equal (signed <=) */

loc_00458B9C: ;
    edi = eax;

loc_00458B9E: ;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(edi, 4)) goto loc_00458C55; /* jl: less (signed <) */

loc_00458BB1: ;
    edi = ebx;
    edi = edi - ebp;
    MEM32(esp + 0x18) = edi;
    edi = MEM32(esp + 0x14);
    edi = edi + 0xFFFFFFFCu;
    edi = edi >> 2;
    edi++;
    eax = ebx + 8;
    MEM32(esp + 0x20) = edi;
    edi = edi << 2;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x10) = edi;
    edi = MEM32(esp + 0x34);
    eax = ebp + 4;
    /* nop */

loc_00458BE0: ;
    fp_push(MEMF(edi + -8)); /* fld float */
    ebp = MEM32(esp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx++;
    ecx++;
    ecx++;
    MEMF(esi + ecx * 4 + -12) = (float)fp_top(); fp_popp(); /* fstp */
    ecx++;
    fp_push(MEMF(eax)); /* fld float */
    eax = eax + 0x10;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edi = edi + 0x10;
    MEMF(edx + ecx * 4 + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + ebp + -16)); /* fld float */
    ebp = MEM32(esp + 0x20);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp--;
    MEM32(esp + 0x20) = ebp;
    MEMF(esi + ecx * 4 + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -12)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edx + ecx * 4 + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + ecx * 4 + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edx + ecx * 4 + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + ecx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edx + ecx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ebp != 0)) goto loc_00458BE0; /* jne: not equal / not zero */

loc_00458C49: ;
    edi = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x10);

loc_00458C55: ;
    if (CMP_GE(eax, edi)) goto loc_00458CC5; /* jge: greater or equal (signed >=) */

loc_00458C59: ;
    edi = edx + ecx * 4;
    MEM32(esp + 0x24) = edi;
    edi = ebp + eax * 4 + 4;
    MEM32(esp + 0x20) = edi;
    edi = ebx;
    edi = edi - ebp;
    MEM32(esp + 0x18) = edi;
    edi = esi;
    edi = edi - edx;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esp + 0x14);
    edi = edi - eax;
    ecx = ecx + edi;

loc_00458C80: ;
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    edi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x1C);
    eax = eax + 4;
    MEMF(edi + eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 0x20);
    fp_push(MEMF(edi)); /* fld float */
    edi = edi + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = edi;
    edi = MEM32(esp + 0x14);
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x10);
    eax++;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edi)) goto loc_00458C80; /* jl: less (signed <) */

loc_00458CC5: ;
    edi = MEM32(esp + 0x44);
    eax = 0x64;
    eax = eax - ecx;
    edi = edi + 0xFFFFFFFEu;
    if (CMP_LE(edi, eax)) goto loc_00458CD9; /* jle: less or equal (signed <=) */

loc_00458CD7: ;
    edi = eax;

loc_00458CD9: ;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(edi, 4)) goto loc_00458D84; /* jl: less (signed <) */

loc_00458CE8: ;
    eax = ebp + 4;
    ebp = ebx;
    ebp = ebp - MEM32(esp + 0x40);
    edi = ebx + 8;
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(esp + 0x14);
    ebp = ebp + 0xFFFFFFFCu;
    ebp = ebp >> 2;
    ebp++;
    MEM32(esp + 0x44) = ebp;
    ebp = ebp << 2;
    MEM32(esp + 0x10) = ebp;
    edi = edi;

loc_00458D10: ;
    fp_push(MEMF(edi + -8)); /* fld float */
    ebp = MEM32(esp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx++;
    ecx++;
    ecx++;
    MEMF(esi + ecx * 4 + -12) = (float)fp_top(); fp_popp(); /* fstp */
    ecx++;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = eax + 0x10;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edi = edi + 0x10;
    MEMF(edx + ecx * 4 + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + ebp + -16)); /* fld float */
    ebp = MEM32(esp + 0x44);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp--;
    MEM32(esp + 0x44) = ebp;
    MEMF(esi + ecx * 4 + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edx + ecx * 4 + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + ecx * 4 + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edx + ecx * 4 + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + ecx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edx + ecx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ebp != 0)) goto loc_00458D10; /* jne: not equal / not zero */

loc_00458D78: ;
    ebp = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_00458D84: ;
    if (CMP_GE(eax, edi)) goto loc_00458DF6; /* jge: greater or equal (signed >=) */

loc_00458D88: ;
    edi = edx + ecx * 4;
    MEM32(esp + 0x24) = edi;
    edi = ebp + eax * 4 + 8;
    MEM32(esp + 0x44) = edi;
    edi = ebx;
    edi = edi - ebp;
    ebp = esi;
    ebp = ebp - edx;
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(esp + 0x14);
    ebp = ebp - eax;
    ecx = ecx + ebp;
    ebp = MEM32(esp + 0x44);
    MEM32(esp + 0x18) = edi;
    goto loc_00458DC0;

loc_00458DB5: ;
    edi = MEM32(esp + 0x18);
    /* nop */

loc_00458DC0: ;
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x1C);
    edi = edi + 4;
    MEMF(edi + ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = MEM32(esp + 0x44);
    fp_push(MEMF(ebp)); /* fld float */
    MEM32(esp + 0x24) = edi;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax++;
    ebp = ebp + 4;
    MEM32(esp + 0x44) = ebp;
    MEMF(edi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 0x14);
    if (CMP_L(eax, edi)) goto loc_00458DB5; /* jl: less (signed <) */

loc_00458DF6: ;
    (void)0; /* cmp ecx, 0xA - flags set for next jcc */
    eax = MEM32(esp + 0x54);
    MEM32(eax) = ecx;
    if (CMP_L(ecx, 0xA)) goto loc_00458F1E; /* jl: less (signed <) */

loc_00458E05: ;
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(ecx, 4)) goto loc_00458ECF; /* jl: less (signed <) */

loc_00458E16: ;
    eax = edx;
    eax = eax - esi;
    MEM32(esp + 0x1C) = eax;
    eax = ecx + -4;
    eax = eax >> 2;
    eax++;
    MEM32(esp + 0x44) = eax;
    eax = eax << 2;
    ebp = edx + 0xC;
    ebx = esi + 4;
    MEM32(esp + 0x10) = eax;
    goto loc_00458E40;

    /* nop */
    /* nop */

loc_00458E40: ;
    fp_push(MEMF(ebx + -4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64909c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00458E5D; /* jne: not equal / not zero */

loc_00458E50: ;
    eax = MEM32(ebx + -4);
    MEM32(esi + edi * 4) = eax;
    eax = MEM32(ebp + -12);
    MEM32(edx + edi * 4) = eax;
    edi++;

loc_00458E5D: ;
    fp_push(MEMF(ebx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64909c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00458E7C; /* jne: not equal / not zero */

loc_00458E6C: ;
    eax = MEM32(ebx);
    MEM32(esi + edi * 4) = eax;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(ebx + eax);
    MEM32(edx + edi * 4) = eax;
    edi++;

loc_00458E7C: ;
    fp_push(MEMF(ebx + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64909c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00458E99; /* jne: not equal / not zero */

loc_00458E8C: ;
    eax = MEM32(ebx + 4);
    MEM32(esi + edi * 4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(edx + edi * 4) = eax;
    edi++;

loc_00458E99: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64909c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00458EB6; /* jne: not equal / not zero */

loc_00458EA9: ;
    eax = MEM32(ebx + 8);
    MEM32(esi + edi * 4) = eax;
    eax = MEM32(ebp);
    MEM32(edx + edi * 4) = eax;
    edi++;

loc_00458EB6: ;
    eax = MEM32(esp + 0x44);
    ebx = ebx + 0x10;
    ebp = ebp + 0x10;
    eax--;
    MEM32(esp + 0x44) = eax;
    if ((eax != 0)) goto loc_00458E40; /* jne: not equal / not zero */

loc_00458ECB: ;
    eax = MEM32(esp + 0x10);

loc_00458ECF: ;
    if (CMP_GE(eax, ecx)) goto loc_00458F18; /* jge: greater or equal (signed >=) */

loc_00458ED3: ;
    ebx = esi + eax * 4;
    eax = edx;
    eax = eax - esi;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x10);
    esi = esi - edx;
    ebp = edx + edi * 4;
    ecx = ecx - eax;
    /* nop */

loc_00458EF0: ;
    fp_push(MEMF(ebx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64909c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00458F12; /* jne: not equal / not zero */

loc_00458EFF: ;
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x1C);
    MEM32(esi + ebp) = edx;
    edx = MEM32(eax + ebx);
    MEM32(ebp) = edx;
    edi++;
    ebp = ebp + 4;

loc_00458F12: ;
    ebx = ebx + 4;
    ecx--;
    if ((ecx != 0)) goto loc_00458EF0; /* jne: not equal / not zero */

loc_00458F18: ;
    eax = MEM32(esp + 0x54);
    MEM32(eax) = edi;

loc_00458F1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00458F30
 * Original: 0x00458F30 - 0x00458F4D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458F30(void)
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

loc_00458F30: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_00458F4D(); return; } /* jp: parity */

loc_00458F43: ;
    MEM32(esp + 0xC) = 0x3F800000;
    g_seh_ebp = ebp; sub_00458F5B(); return; /* tail jmp 0x00458F5B */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00458FA0
 * Original: 0x00458FA0 - 0x00458FF6 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458FA0(void)
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

loc_00458FA0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) { sub_00458FF6(); return; } /* jnp: not parity */

loc_00458FD5: ;
    /* fld st(0) */
    eax = MEM32(esp + 0x10);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fdivr dword ptr [esp + 0xc] */
    fp_top() = -fp_top(); /* fchs */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00459020
 * Original: 0x00459020 - 0x0045902D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459020(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00459020: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fxtract  */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00459030
 * Original: 0x00459030 - 0x00459076 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459030(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00459030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    xmm0 = MEMF(esp + 0x10); /* movss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 8) = eax;
    eax = eax + 0x7F;
    eax = eax << 0x17;
    eax = eax & 0x7F800000;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 8);
    ebx = ebx & 0x7FFFFF;
    eax = eax | ebx;
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, eax);
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
 * sub_00459080
 * Original: 0x00459080 - 0x004590B9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459080(void)
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

loc_00459080: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    esp = esp - 0x68;
    fp_push(MEMF(0x648CF8)); /* fld float */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004590A2; /* jp: parity */

loc_0045909A: ;
    /* fstp st(0) */
    fp_push(MEMF(0x5851D8)); /* fld float */

loc_004590A2: ;
    eax = MEM32(esp + 0x70);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 1)) { sub_004590B9(); return; } /* je: equal / zero */

loc_004590AB: ;
    ecx = MEM32(esp + 0x78);
    esi = esp + 0x20;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_004590C5(); return; /* tail jmp 0x004590C5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004592B0
 * Original: 0x004592B0 - 0x0045931C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004592B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004592B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = eax + 0x3FC;
    edx = 0xA280;
    ecx = 0xFF;
    /* nop */

loc_004592D0: ;
    edx = edx - 0xA2;
    edi = edx;
    edi = edi >> 8;
    edi = edi + 0x41;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    edi = edi + 0xD1;
    edi = edi >> 8;
    edi = MEM32(esi + edi * 4 + 0x74);
    MEM32(eax) = edi;
    eax = eax - 4;
    ecx--;
    if (CMP_A(ecx, 0x56)) goto loc_004592D0; /* ja: above (unsigned >) */

loc_004592F9: ;
    ecx = 0x457D;
    edx = 0x57;

loc_00459303: ;
    ecx = ecx - 0xCB;
    edi = ecx;
    edi = edi >> 8;
    edi = MEM32(esi + edi * 4);
    MEM32(eax) = edi;
    eax = eax - 4;
    edx--;
    if ((edx != 0)) goto loc_00459303; /* jne: not equal / not zero */

loc_00459319: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00459320
 * Original: 0x00459320 - 0x0045934C (44 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459320(void)
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

loc_00459320: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64954c] */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0045934C(); return; } /* jne: not equal / not zero */

loc_00459335: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x5851e4] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00459360
 * Original: 0x00459360 - 0x004593C2 (98 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459360(void)
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

loc_00459360: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    ecx++;
    ebp--;
    if (CMP_GE(ecx, ebp)) { sub_004593C2(); return; } /* jge: greater or equal (signed >=) */

loc_00459371: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_00459380: ;
    fp_push(MEMF(edi + ecx * 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edi + ecx*4 - 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_004593A7; /* jne: not equal / not zero */

loc_0045938E: ;
    fp_push(MEMF(edi + ecx * 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edi + ecx*4 + 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004593A7; /* jne: not equal / not zero */

loc_0045939C: ;
    MEM32(esi) = ecx;
    esi = esi + 4;
    ecx++;
    edx++;
    if (CMP_EQ(edx, ebx)) goto loc_004593B7; /* je: equal / zero */

loc_004593A7: ;
    ecx++;
    if (CMP_L(ecx, ebp)) goto loc_00459380; /* jl: less (signed <) */

loc_004593AC: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004593B7: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004593D0
 * Original: 0x004593D0 - 0x00459457 (135 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004593D0(void)
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

loc_004593D0: ;
    esp = esp - 0x33C;
    fp_push(MEMF(0x6496EC)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x364)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_004593FD: ;
    esi = eax;
    MEM32(esp + 0x18) = esi;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x10) = (int32_t)fp_top(); /* fistp */
    if (CMP_L(MEM32(esp + 0x10), 0x100)) goto loc_00459422; /* jl: less (signed <) */

loc_00459421: ;
    esi--;

loc_00459422: ;
    if (CMP_LE(esi, 0x64)) goto loc_0045942C; /* jle: less or equal (signed <=) */

loc_00459427: ;
    esi = 0x64;

loc_0045942C: ;
    fp_push(MEMF(esp + 0x368)); /* fld float */
    eax = MEM32(esp + 0x354);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = 1;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(eax, ecx)) { sub_00459457(); return; } /* jne: not equal / not zero */

loc_0045944D: ;
    MEM32(esp + 0x14) = 0;
    g_seh_ebp = ebp; sub_00459483(); return; /* tail jmp 0x00459483 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00459660
 * Original: 0x00459660 - 0x004596A2 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459660(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00459660: ;
    esp = esp - 8;
    if (CMP_LE(edx & edx, 0)) goto loc_0045969E; /* jle: less or equal (signed <=) */

loc_00459667: ;
    ecx = ecx - eax;
    PUSH32(esp, esi);
    /* nop */

loc_00459670: ;
    fp_push(MEMF(ecx + eax)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(esp + 8) = (int32_t)fp_top(); /* fistp */
    esi = MEM32(esp + 8);
    esi = esi & 0xFF;
    MEM32(eax) = esi;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_00459670; /* jne: not equal / not zero */

loc_0045969D: ;
    POP32(esp, esi);

loc_0045969E: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004596B0
 * Original: 0x004596B0 - 0x00459722 (114 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004596B0(void)
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

loc_004596B0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x648CF8)); /* fld float */
    edx = 0; /* xor self */
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    MEM32(esp) = 0x3F800000;
    if (CMP_L(esi, 4)) goto loc_004596E8; /* jl: less (signed <) */

loc_004596C5: ;
    ecx = esi + -4;
    ecx = ecx >> 2;
    ecx++;
    eax = edi + 8;
    edx = ecx * 4;

loc_004596D6: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax + 0x10;
    ecx--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if ((ecx != 0)) goto loc_004596D6; /* jne: not equal / not zero */

loc_004596E8: ;
    if (CMP_GE(edx, esi)) goto loc_004596F8; /* jge: greater or equal (signed >=) */

loc_004596EC: ;
    /* nop */

loc_004596F0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx++;
    if (CMP_L(edx, esi)) goto loc_004596F0; /* jl: less (signed <) */

loc_004596F8: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x649724] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00459710; /* jne: not equal / not zero */

loc_00459705: ;
    fp_push(MEMF(0x649724)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */

loc_00459710: ;
    eax = MEM32(esp);
    /* fstp st(0) */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0044B1A0(); /* call 0x0044B1A0 */

loc_0045971E: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00459730
 * Original: 0x00459730 - 0x004597BE (142 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459730(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00459730: ;
    esp = esp - 0x5A4;
    edx = edi;
    eax = esp + 4;
    PUSH32(esp, 0); sub_00459660(); /* call 0x00459660 */

loc_00459741: ;
    eax = MEM32(0x655444);
    ecx = MEM32(0x655440);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5B4);
    PUSH32(esp, 0x585700);
    PUSH32(esp, 8);
    edx = esp + 0x1A8;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00469130(); /* call 0x00469130 */

loc_00459770: ;
    fp_push(MEMF(esp + 0x5C8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x5D0);
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 1);
    edx = (uint32_t)(-(int32_t)edx);
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esp = esp + 0x18;
    eax = esp + 0x1A0;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00468EF0(); /* call 0x00468EF0 */

loc_004597B5: ;
    /* fstp st(0) */
    esp = esp + 0x5BC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004597C0
 * Original: 0x004597C0 - 0x00459870 (176 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004597C0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004597C0: ;
    esp = esp - 0x280;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x298);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x29C);
    PUSH32(esp, edi);
    ebp = ebx + ebx;
    eax = 0; /* xor self */
    ecx = ebp;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x294);
    PUSH32(esp, 0); sub_004596B0(); /* call 0x004596B0 */

loc_004597F1: ;
    ecx = MEM32(esp + 0x298);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2A8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2A8);
    esi = ebp;
    PUSH32(esp, 0); sub_00459730(); /* call 0x00459730 */

loc_00459814: ;
    edx = MEM32(esp + 0x2B4);
    esi = ebx * 4;
    ecx = esi;
    ebp = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x2B8);
    PUSH32(esp, edx);
    eax = SX16(LO16(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00468CC0(); /* call 0x00468CC0 */

loc_0045984E: ;
    ecx = esi;
    eax = ecx;
    ecx = ecx >> 2;
    esi = esp + esi + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esp = esp + 0x20;
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x280;
    esp += 4; return; /* ret */

}

/**
 * sub_00459870
 * Original: 0x00459870 - 0x00459A15 (421 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459870(void)
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

loc_00459870: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004583F4(); /* call 0x004583F4 */

loc_0045988C: ;
    esi = MEM32(esp + 0x44);
    fp_push(MEMF(esi + 4)); /* fld float */
    edx = MEM32(esi + 0x1C);
    fp_push(MEMF(esi + 8)); /* fld float */
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    MEM32(esp + 0x44) = edx;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    /* fld st(5) */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fsubr dword ptr [0x648d14] */
    /* fld st(4) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fld st(5) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fstp st(5) */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    eax = 9;

loc_00459927: ;
    fp_push(MEMF(esi + eax * 4)); /* fld float */
    eax++;
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fstp st(0) */
    if (CMP_L(eax, 0xC)) goto loc_00459927; /* jl: less (signed <) */

loc_0045993E: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00459020(); /* call 0x00459020 */

loc_0045994C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 4;
    /* FPU: fsubr dword ptr [esp + 0x40] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esi)); /* fld float */
    esi = 0; /* xor self */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = 0; /* xor self */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    /* nop */

loc_00459980: ;
    edx = MEM32(0x655444);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = edi + 0x80;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00459020(); /* call 0x00459020 */

loc_004599A5: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 4;
    esi++;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    /* FPU: fsubr dword ptr [esp + 0x10] */
    MEMF(esp + esi * 4 + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(esi, 4)) goto loc_00459980; /* jle: less or equal (signed <=) */

loc_004599BC: ;
    edx = 3;
    MEM32(esp + 0x44) = edx;
    ecx = ebx + 0xC;
    esi = edx + -2;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 4);
    fp_push(MEMF(esp + eax * 4 + 0x28)); /* fld float */
    edi = esp + eax * 4 + 0x24;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esi;
    eax = eax & 0xF;
    MEM32(esp + 0x40) = eax;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    MEM32(esp + 0x10) = esi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fsubr dword ptr [ecx - 8] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x585900] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_00459A15(); return; } /* jne: not equal / not zero */

loc_00459A0B: ;
    /* fstp st(0) */
    fp_push(MEMF(0x585900)); /* fld float */
    g_seh_ebp = ebp; sub_00459A2A(); return; /* tail jmp 0x00459A2A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00459E90
 * Original: 0x00459E90 - 0x00459FE7 (343 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459E90(void)
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

loc_00459E90: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0x14);
    edx = 1;
    edx = edx << LO8(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edx * 4 + 8;
    esi = ecx;
    ecx = ecx >> 2;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    ebp = edx + -1;
    edx = MEM32(esp + 0x20);
    ecx = edx + -1;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    MEM32(ebx) = eax;
    esi = 1;
    MEM32(esp + 0x28) = ebp;
    if (CMP_L(ecx, 4)) goto loc_00459F99; /* jl: less (signed <) */

loc_00459EE3: ;
    ecx = ebx + ebp * 4 + -8;
    ebp = MEM32(esp + 0x1C);
    eax = edi + 8;
    edx = edx + 0xFFFFFFFBu;
    edi = ebx;
    edi = edi - ebp;
    edx = edx >> 2;
    edx++;
    MEM32(esp + 0x10) = edi;
    edi = edx * 4;
    ebp = edi + 1;
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(esp + 0x28);
    ebp = ebp - edi;
    edi = MEM32(esp + 0x10);
    esi = ebx + 0x10;
    goto loc_00459F20;

    /* nop */

loc_00459F20: ;
    fp_push(MEMF(eax + -4)); /* fld float */
    ecx = ecx - 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 0x10;
    esi = esi + 0x10;
    edx--;
    MEMF(esi + -28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + eax + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_00459F20; /* jne: not equal / not zero */

loc_00459F8D: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);

loc_00459F99: ;
    if (CMP_GE(esi, edx)) goto loc_00459FD1; /* jge: greater or equal (signed >=) */

loc_00459F9D: ;
    ecx = ebx + ebp * 4;
    ebp = ebx;
    ebp = ebp - edi;
    eax = edi + esi * 4;
    edx = edx - esi;
    /* nop */

loc_00459FB0: ;
    fp_push(MEMF(eax)); /* fld float */
    ecx = ecx - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 4;
    edx--;
    MEMF(eax + ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_00459FB0; /* jne: not equal / not zero */

loc_00459FD1: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00449790(); /* call 0x00449790 */

loc_00459FDC: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00459FF0
 * Original: 0x00459FF0 - 0x0045A010 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00459FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00459FF0: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0x60;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x6C);
    MEM32(ebx) = 0x3F800000;
    if (TEST_Z(LO8(eax), 1)) { sub_0045A010(); return; } /* je: equal / zero */

loc_0045A006: ;
    MEM32(esp + 8) = ebx;
    ebx = esp + 0x18;
    g_seh_ebp = ebp; sub_0045A018(); return; /* tail jmp 0x0045A018 */

}

/**
 * sub_0045A112
 * Original: 0x0045A112 - 0x0045A169 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045A112(void)
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

loc_0045A112: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    MEM16(esi) = MEM16(esi) & 0;
    if (CMP_L(LO16(ecx), 2)) goto loc_0045A15A; /* jl: less (signed <) */

loc_0045A12A: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_0045A12E: ;
    fp_push(MEMF(ebx)); /* fld float */
    eax = SX16(LO16(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx = eax;
    eax = ecx + -1;
    eax = SX16(LO16(eax));
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edi + eax*4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0045A153; /* jne: not equal / not zero */

loc_0045A14A: ;
    MEM16(esi) = MEM16(esi) + LO16(ecx);
    eax = SX16(LO16(ecx));
    edi = edi + eax * 4;

loc_0045A153: ;
    if (CMP_GE(LO16(ecx), 2)) goto loc_0045A12E; /* jge: greater or equal (signed >=) */

loc_0045A159: ;
    POP32(esp, edi);

loc_0045A15A: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = MEM32(ebp + 8);
    POP32(esp, esi);
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    MEMF(ebx) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_0045A169
 * Original: 0x0045A169 - 0x0045A1AB (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045A169(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0045A169: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    /* FPU: fldlg2  */
    edi = MEM32(ebp + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    /* FPU: fyl2x  */
    PUSH32(esp, 0x574D40);
    PUSH32(esp, 0x575140);
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0045A112(); /* call 0x0045A112 */

loc_0045A198: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    esp = esp + 0x14;
    POP32(esp, edi);
    fp_push(MEMF(eax * 4 + 0x57AD00)); /* fld float */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_0045A1AB
 * Original: 0x0045A1AB - 0x0045A1C8 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045A1AB(void)
{

loc_0045A1AB: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x574C40);
    PUSH32(esp, 0x57A7F8);
    PUSH32(esp, 0); sub_0045A112(); /* call 0x0045A112 */

loc_0045A1C4: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0045A1C8
 * Original: 0x0045A1C8 - 0x0045A2CF (263 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045A1C8(void)
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

loc_0045A1C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x294;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -660;
    PUSH32(esp, MEM32(ebp + 0x10));
    edi = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443C20(); /* call 0x00443C20 */

loc_0045A1EB: ;
    eax = ebp + -660;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045A1F9: ;
    MEMF(ebp + -20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045A208: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, esi);
    eax = ebp + -660;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045A21D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, esi);
    eax = ebp + -660;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045A232: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp + 0x40;
    edx = 0; /* xor self */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x649200)); /* fld float */
    ecx = 0; /* xor self */

loc_0045A244: ;
    fp_push(MEMF(ecx + 0x57AAF8)); /* fld float */
    fp_push(MEMF(ebp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [ebp - 0xc] */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [ebp - 8] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(2) */
    /* fstp st(0) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0045A287; /* jne: not equal / not zero */

loc_0045A280: ;
    /* fstp st(0) */
    edi = edx;
    fp_push(MEMF(ebp + -16)); /* fld float */

loc_0045A287: ;
    edx++;
    ecx = ecx + 4;
    if (CMP_L(LO16(edx), 0x80)) goto loc_0045A244; /* jl: less (signed <) */

loc_0045A292: ;
    ecx = MEM32(ebp + 0x20);
    eax = SX16(LO16(edi));
    eax = eax << 2;
    fp_push(MEMF(eax + 0x57AAF8)); /* fld float */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(ebp + 0x24);
    fp_push(MEMF(ebp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(ebp + 0x28);
    MEM16(ecx) = LO16(edi);
    /* fld st(0) */
    ecx = MEM32(ebp + 0x2C);
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    /* fstp st(0) */
    fp_push(MEMF(eax + 0x57A8F8)); /* fld float */
    eax = MEM32(ebp + 0x34);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_0045A2CF
 * Original: 0x0045A2CF - 0x0045A36F (160 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045A2CF(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0045A2CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    ecx = ZX16(MEM16(ebp + 8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x757);
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xFFFF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = SX16(LO16(esi));
    PUSH32(esp, 9);
    POP32(esp, ebx);
    MEM32(ebp + 0x1C) = ecx;
    edi = edx;
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC34B);
    edi = 0x3E8;
    edi = edi - ecx;
    ebx = edx + edx * 4 + 6;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    eax = ZX16(LO16(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = SX16(LO16(edx));
    eax = eax * 4 + 0x579798;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0045A337: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_00443B4C(); /* call 0x00443B4C */

loc_0045A344: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045A350: ;
    /* FPU: fidiv dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x18);
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045A36F
 * Original: 0x0045A36F - 0x0045A402 (147 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045A36F(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0045A36F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x538;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00448E10(); /* call 0x00448E10 */

loc_0045A389: ;
    MEMF(ebp + -48) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(0.0); /* fldz */
    PUSH32(esp, MEM32(ebp + 0xC));
    MEMF(ebp + -1336) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebp + -688;
    fp_push(0.0); /* fldz */
    PUSH32(esp, 0x579B94);
    MEMF(ebp + -692) = (float)fp_top(); fp_popp(); /* fstp */
    esi = ebp + -1332;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0); sub_00443986(); /* call 0x00443986 */

loc_0045A3BD: ;
    PUSH32(esp, ebx);
    eax = ebp + -688;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045A3CB: ;
    MEMF(ebp + -24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebp + -688;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045A3DC: ;
    MEMF(ebp + -36) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    esp = esp + 0x34;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -32) = 0xFF;
    MEM32(ebp + -12) = 0x579B90;
    MEM32(ebp + -28) = 0xFE;
    MEMF(ebp + -44) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_0045A405(); return; /* tail jmp 0x0045A405 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045A5BA
 * Original: 0x0045A5BA - 0x0045A74D (403 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045A5BA(void)
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

loc_0045A5BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x760;
    PUSH32(esp, ebx);
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    MEMF(ebp + -60) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = 0; /* xor self */
    fp_push(1.0); /* fld1 */
    PUSH32(esp, edi);
    MEMF(ebp + -64) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(ebp + 0x34);
    esi = 0xFFFFFF01u;
    (void)0; /* cmp LO16(edi), LO16(esi) - flags set for next jcc */
    MEM32(ebp + -56) = ebx;
    MEM32(ebp + -48) = ebx;
    MEM32(ebp + -44) = ebx;
    if (CMP_EQ(LO16(edi), LO16(esi))) goto loc_0045A5FC; /* je: equal / zero */

loc_0045A5E8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x38);
    goto loc_0045A5F1;

loc_0045A5EE: ;
    edi = edi + MEM32(ebp + 0x20);

loc_0045A5F1: ;
    ecx = SX16(LO16(edi));
    ecx = ecx + eax + -1;
    if (TEST_S(ecx, ecx)) goto loc_0045A5EE; /* jl: less (signed <) */

loc_0045A5FC: ;
    ecx = MEM32(ebp + 0x30);
    eax = 0; /* xor self */
    eax++;
    (void)0; /* cmp MEM16(ecx), LO16(ebx) - flags set for next jcc */
    ecx = MEM32(ebp + 0x50);
    if (CMP_NE(MEM16(ecx), LO16(ebx))) goto loc_0045A6FD; /* jne: not equal / not zero */

loc_0045A60E: ;
    MEM16(ecx) = LO16(eax);

loc_0045A611: ;
    (void)0; /* cmp LO16(edi), LO16(esi) - flags set for next jcc */
    MEM32(ebp + 0x50) = 0x10;
    MEM32(ebp + 0x34) = ebx;
    if (CMP_EQ(LO16(edi), LO16(esi))) goto loc_0045A623; /* je: equal / zero */

loc_0045A620: ;
    ebx = edi + -8;

loc_0045A623: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    eax = ebp + -288;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DC5(); /* call 0x00448DC5 */

loc_0045A633: ;
    esp = esp + 0xC;
    if (CMP_EQ(LO16(edi), LO16(esi))) goto loc_0045A678; /* je: equal / zero */

loc_0045A63B: ;
    MEM32(ebp + 0x30) = 0xA;

loc_0045A642: ;
    if (CMP_LE(MEM16(ebp + 0x38), 0)) goto loc_0045A670; /* jle: less or equal (signed <=) */

loc_0045A649: ;
    edx = ZX16(MEM16(ebp + 0x38));
    eax = SX16(LO16(edi));
    ecx = ebp + eax * 2 + -288;

loc_0045A657: ;
    if (TEST_S(eax, eax)) goto loc_0045A66A; /* jl: less (signed <) */

loc_0045A65B: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    if (CMP_GE(eax, esi)) goto loc_0045A66A; /* jge: greater or equal (signed >=) */

loc_0045A663: ;
    SET_LO16(esi, MEM16(ebp + 0x34));
    MEM16(ecx) = LO16(esi);

loc_0045A66A: ;
    ecx++;
    ecx++;
    eax++;
    edx--;
    if ((edx != 0)) goto loc_0045A657; /* jne: not equal / not zero */

loc_0045A670: ;
    edi = edi + MEM32(ebp + 0x20);
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) - 1;
    if ((MEM32(ebp + 0x30) != 0)) goto loc_0045A642; /* jne: not equal / not zero */

loc_0045A678: ;
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -128;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x50), LO16(esi) - flags set for next jcc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_LE(MEM16(ebp + 0x50), LO16(esi))) goto loc_0045A6EF; /* jle: less or equal (signed <=) */

loc_0045A68C: ;
    if (CMP_GE(LO16(esi), 0x1F4)) goto loc_0045A6EF; /* jge: greater or equal (signed >=) */

loc_0045A693: ;
    esi++;
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    ecx = ebx;
    if (CMP_GE(LO16(ebx) & LO16(ebx), 0)) goto loc_0045A6A3; /* jge: greater or equal (signed >=) */

loc_0045A69B: ;
    ecx = ecx + MEM32(ebp + 0x20);
    if (TEST_S(LO16(ecx), LO16(ecx))) goto loc_0045A69B; /* jl: less (signed <) */

loc_0045A6A3: ;
    eax = MEM32(ebp + 0x10);
    if (CMP_L(LO16(ecx), LO16(eax))) goto loc_0045A6CB; /* jl: less (signed <) */

loc_0045A6AB: ;
    ecx = 0; /* xor self */
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_0045A6C6; /* jle: less or equal (signed <=) */

loc_0045A6B2: ;
    edi = SX16(LO16(ecx));
    if (CMP_NE(MEM16(ebp + edi * 2 + -288), 0)) goto loc_0045A6C6; /* jne: not equal / not zero */

loc_0045A6C0: ;
    ecx++;
    if (CMP_L(LO16(ecx), LO16(eax))) goto loc_0045A6B2; /* jl: less (signed <) */

loc_0045A6C6: ;
    if (CMP_GE(LO16(ecx), LO16(eax))) goto loc_0045A6E8; /* jge: greater or equal (signed >=) */

loc_0045A6CB: ;
    eax = SX16(LO16(ecx));
    eax = ebp + eax * 2 + -288;
    if (CMP_EQ(MEM16(eax), 0)) goto loc_0045A6E8; /* je: equal / zero */

loc_0045A6DB: ;
    MEM16(eax) = MEM16(eax) & 0;
    edi = SX16(LO16(edx));
    MEM16(ebp + edi * 2 + -128) = LO16(ecx);
    edx++;

loc_0045A6E8: ;
    ebx++;
    if (CMP_L(LO16(edx), MEM16(ebp + 0x50))) goto loc_0045A68C; /* jl: less (signed <) */

loc_0045A6EF: ;
    if (CMP_GE(MEM16(ebp + 0x50), LO16(edx))) { sub_0045A74D(); return; } /* jge: greater or equal (signed >=) */

loc_0045A6F5: ;
    eax = MEM32(ebp + 0x50);
    MEM32(ebp + 0x50) = eax;
    g_seh_ebp = ebp; sub_0045A750(); return; /* tail jmp 0x0045A750 */

loc_0045A6FD: ;
    (void)0; /* cmp MEM16(ebp + 0x2C), LO16(ebx) - flags set for next jcc */
    MEM16(ecx) = LO16(ebx);
    if (CMP_NE(MEM16(ebp + 0x2C), LO16(ebx))) goto loc_0045A721; /* jne: not equal / not zero */

loc_0045A706: ;
    (void)0; /* cmp LO16(edi), LO16(esi) - flags set for next jcc */
    MEM32(ebp + 0x50) = 0x20;
    MEM32(ebp + 0x34) = ebx;
    if (CMP_EQ(LO16(edi), LO16(esi))) goto loc_0045A623; /* je: equal / zero */

loc_0045A719: ;
    ebx = edi + -16;
    goto loc_0045A623;

loc_0045A721: ;
    if (CMP_NE(MEM16(ebp + 0x2C), LO16(eax))) goto loc_0045A611; /* jne: not equal / not zero */

loc_0045A72B: ;
    (void)0; /* cmp LO16(edi), LO16(esi) - flags set for next jcc */
    MEM32(ebp + 0x50) = 8;
    MEM32(ebp + 0x34) = eax;
    if (CMP_EQ(LO16(edi), LO16(esi))) goto loc_0045A623; /* je: equal / zero */

loc_0045A73E: ;
    ecx = MEM32(ebp + 0x4C);
    SET_LO16(ebx, MEM16(ecx));
    SET_LO16(ebx, LO16(ebx) - 4);
    goto loc_0045A623;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045AB6D
 * Original: 0x0045AB6D - 0x0045ABF9 (140 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045AB6D(void)
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

loc_0045AB6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM16(esi) = MEM16(esi) & 0;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    PUSH32(esp, edi);

loc_0045AB7F: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x1C);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0x14));
    ecx = ecx & 7;
    eax = eax + ecx * 2;
    eax = eax + ecx;
    eax = SX16(LO16(eax));
    eax = eax << 1;
    SET_LO16(edx, MEM16(eax + edx));
    SET_LO16(eax, MEM16(eax + edi));
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_0045ABCC; /* jl: less (signed <) */

loc_0045ABA7: ;
    if (CMP_GE(LO16(eax), MEM16(ebp + 0x18))) goto loc_0045ABCC; /* jge: greater or equal (signed >=) */

loc_0045ABAD: ;
    edi = SX16(LO16(edx));
    MEM32(ebp + -4) = edi;
    fp_push((double)SMEM32(ebp + -4)); /* fild */

loc_0045ABB6: ;
    ebx = MEM32(ebp + 8);
    /* fld st(0) */
    edi = SX16(LO16(eax));
    eax = eax + MEM32(ebp + 0x20);
    MEMF(ebx + edi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(LO16(eax), MEM16(ebp + 0x18))) goto loc_0045ABB6; /* jl: less (signed <) */

loc_0045ABCA: ;
    /* fstp st(0) */

loc_0045ABCC: ;
    MEM16(ebp + 0x14) = (uint32_t)((int32_t)MEM16(ebp + 0x14) >> 3);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    SET_LO16(eax, LO16(eax) << 4);
    eax = eax | ecx;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM16(esi) = LO16(eax);
    if (CMP_GE(LO16(edx) & LO16(edx), 0)) goto loc_0045ABEA; /* jge: greater or equal (signed >=) */

loc_0045ABE4: ;
    eax = eax | 8;
    MEM16(esi) = LO16(eax);

loc_0045ABEA: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    if (CMP_L(MEM16(ebp + 0xC), 3)) goto loc_0045AB7F; /* jl: less (signed <) */

loc_0045ABF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0045ABF9
 * Original: 0x0045ABF9 - 0x0045AC83 (138 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045ABF9(void)
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

loc_0045ABF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM16(esi) = MEM16(esi) & 0;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    PUSH32(esp, edi);

loc_0045AC0B: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x1C);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0x14));
    ecx = ecx & 3;
    eax = eax + ecx * 4;
    eax = SX16(LO16(eax));
    eax = eax << 1;
    SET_LO16(edx, MEM16(eax + edx));
    SET_LO16(eax, MEM16(eax + edi));
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_0045AC56; /* jl: less (signed <) */

loc_0045AC31: ;
    if (CMP_GE(LO16(eax), MEM16(ebp + 0x18))) goto loc_0045AC56; /* jge: greater or equal (signed >=) */

loc_0045AC37: ;
    edi = SX16(LO16(edx));
    MEM32(ebp + -4) = edi;
    fp_push((double)SMEM32(ebp + -4)); /* fild */

loc_0045AC40: ;
    ebx = MEM32(ebp + 8);
    /* fld st(0) */
    edi = SX16(LO16(eax));
    eax = eax + MEM32(ebp + 0x20);
    MEMF(ebx + edi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(LO16(eax), MEM16(ebp + 0x18))) goto loc_0045AC40; /* jl: less (signed <) */

loc_0045AC54: ;
    /* fstp st(0) */

loc_0045AC56: ;
    MEM16(ebp + 0x14) = (uint32_t)((int32_t)MEM16(ebp + 0x14) >> 2);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    SET_LO16(eax, LO16(eax) << 3);
    eax = eax | ecx;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM16(esi) = LO16(eax);
    if (CMP_GE(LO16(edx) & LO16(edx), 0)) goto loc_0045AC74; /* jge: greater or equal (signed >=) */

loc_0045AC6E: ;
    eax = eax | 4;
    MEM16(esi) = LO16(eax);

loc_0045AC74: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    if (CMP_L(MEM16(ebp + 0xC), 4)) goto loc_0045AC0B; /* jl: less (signed <) */

loc_0045AC7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0045AC83
 * Original: 0x0045AC83 - 0x0045ACBA (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045AC83(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0045AC83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_GE(MEM16(ebp + 0xC), 0)) goto loc_0045AC91; /* jge: greater or equal (signed >=) */

loc_0045AC8D: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;

loc_0045AC91: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 2);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    esi = eax;
    edx++;
    ecx = ecx + ecx + -1;
    MEM16(ebp + 0xE) = LO16(ecx);
    ecx = MEM32(ebp + 0x10);
    eax = ecx + -1;
    g_seh_ebp = ebp; sub_0045ACC0(); return; /* tail jmp 0x0045ACC0 */

}

/**
 * sub_0045ACF1
 * Original: 0x0045ACF1 - 0x0045AD32 (65 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045ACF1(void)
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

loc_0045ACF1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00448C97(); /* call 0x00448C97 */

loc_0045AD05: ;
    MEMF(ebp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00448C97(); /* call 0x00448C97 */

loc_0045AD13: ;
    fp_push(MEMF(0x648E90)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x18;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp + 0x14] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0045AD32(); return; } /* jne: not equal / not zero */

loc_0045AD28: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648D50)); /* fld float */
    g_seh_ebp = ebp; sub_0045AD37(); return; /* tail jmp 0x0045AD37 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045AD78
 * Original: 0x0045AD78 - 0x0045ADCC (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045AD78(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0045AD78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM16(ecx) = LO16(esi);
    MEM32(ebp + 0xC) = 0x64;
    edx = 0x57A738;

loc_0045AD95: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi));
    SET_LO16(eax, LO16(eax) - MEM16(edx));
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = SX16(LO16(ebx));
    if (CMP_GE(eax, MEM32(ebp + 0xC))) goto loc_0045ADB0; /* jge: greater or equal (signed >=) */

loc_0045ADAA: ;
    MEM32(ebp + 0xC) = eax;
    MEM16(ecx) = LO16(esi);

loc_0045ADB0: ;
    esi++;
    edx++;
    edx++;
    if (CMP_L(LO16(esi), 0x5E)) goto loc_0045AD95; /* jl: less (signed <) */

loc_0045ADB9: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    SET_LO16(eax, MEM16(eax * 2 + 0x57A738));
    MEM16(edi) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0045ADCC
 * Original: 0x0045ADCC - 0x0045ADFB (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045ADCC(void)
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

loc_0045ADCC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) { sub_0045ADFB(); return; } /* jnp: not parity */

loc_0045ADE1: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) { sub_0045ADFB(); return; } /* jnp: not parity */

loc_0045ADF3: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    g_seh_ebp = ebp; sub_0045ADFD(); return; /* tail jmp 0x0045ADFD */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045AE43
 * Original: 0x0045AE43 - 0x0045AEA7 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045AE43(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0045AE43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xCA8;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    eax--;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    MEM16(ebp + -44) = 3;
    MEM16(ebp + -42) = 3;
    MEM16(ebp + -40) = 3;
    POP32(esp, ebx);
    if ((eax == 0)) { sub_0045AEA7(); return; } /* je: equal / zero */

loc_0045AE6B: ;
    eax--;
    if ((eax == 0)) goto loc_0045AE92; /* je: equal / zero */

loc_0045AE6E: ;
    eax--;
    if ((eax == 0)) goto loc_0045AE79; /* je: equal / zero */

loc_0045AE71: ;
    eax--;
    eax = 0x30003;
    g_seh_ebp = ebp; sub_0045AEAC(); return; /* tail jmp 0x0045AEAC */

loc_0045AE79: ;
    eax = 0x30003;
    edi = ebp + -44;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM16(ebp + -36) = 2;
    MEM16(ebp + -38) = 2;
    g_seh_ebp = ebp; sub_0045AEB3(); return; /* tail jmp 0x0045AEB3 */

loc_0045AE92: ;
    eax = 0x20002;
    edi = ebp + -44;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM16(ebp + -36) = LO16(ebx);
    MEM16(ebp + -38) = LO16(ebx);
    g_seh_ebp = ebp; sub_0045AEB3(); return; /* tail jmp 0x0045AEB3 */

}

/**
 * sub_0045B3D4
 * Original: 0x0045B3D4 - 0x0045B585 (433 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045B3D4(void)
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

loc_0045B3D4: ;
    PUSH32(esp, ebp);
    ebp = esp + -56;
    esp = esp - 0xD28;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0;
    (void)0; /* cmp MEM16(ebp + 0x50), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM16(ebp + 0x50), 0)) goto loc_0045B3FC; /* je: equal / zero */

loc_0045B3ED: ;
    ecx = ZX16(MEM16(ebp + 0x50));
    esi = MEM32(ebp + 0x4C);
    edi = ebp + -688;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0045B3FC: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x50);
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x74);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(ebp + 0x2C) = 1;
    MEM32(ebp + 0x30) = eax;
    if (CMP_GE(ebx, eax)) goto loc_0045B46A; /* jge: greater or equal (signed >=) */

loc_0045B412: ;
    eax = MEM32(ebp + 0x74);
    edx = MEM32(ebp + 0x50);
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    MEM32(ebp + 0x34) = eax;
    edx = edx - eax;

loc_0045B421: ;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x34);
    ecx = ebp + eax * 4 + -688;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0045B453; /* je: equal / zero */

loc_0045B431: ;
    eax = eax << 2;
    edi = eax;
    eax = MEM32(ebp + 0x4C);
    eax = eax - edi;
    edi = ebp + -688;
    eax = eax - edi;
    edi = ZX16(LO16(edx));

loc_0045B446: ;
    fp_push(MEMF(eax + ecx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    edi--;
    if ((edi != 0)) goto loc_0045B446; /* jne: not equal / not zero */

loc_0045B453: ;
    eax = MEM32(ebp + 0x74);
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) + 1;
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) + eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    edx = edx + esi;
    if (CMP_L(eax, MEM32(ebp + 0x30))) goto loc_0045B421; /* jl: less (signed <) */

loc_0045B46A: ;
    if (CMP_LE(MEM16(ebp + 0x64), 0)) goto loc_0045B4AE; /* jle: less or equal (signed <=) */

loc_0045B471: ;
    edx = MEM32(ebp + 0x60);
    esi = ZX16(MEM16(ebp + 0x64));
    edi = MEM32(ebp + 0x74);
    ecx = ebp + -64;

loc_0045B47E: ;
    (void)0; /* cmp MEM16(ebp + 0x78), 0 - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(MEM16(ebp + 0x78), 0)) goto loc_0045B497; /* je: equal / zero */

loc_0045B487: ;
    if (CMP_L(LO16(edx), LO16(edi))) goto loc_0045B497; /* jl: less (signed <) */

loc_0045B48C: ;
    eax = eax - edi;
    if (CMP_GE(LO16(eax), LO16(edi))) goto loc_0045B48C; /* jge: greater or equal (signed >=) */

loc_0045B493: ;
    goto loc_0045B497;

loc_0045B495: ;
    eax = eax + edi;

loc_0045B497: ;
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_0045B495; /* jl: less (signed <) */

loc_0045B49C: ;
    if (CMP_L(LO16(eax), MEM16(ebp + 0x50))) goto loc_0045B4A5; /* jl: less (signed <) */

loc_0045B4A2: ;
    eax = eax | 0xFFFFFFFFu;

loc_0045B4A5: ;
    MEM16(ecx) = LO16(eax);
    edx++;
    ecx++;
    ecx++;
    esi--;
    if ((esi != 0)) goto loc_0045B47E; /* jne: not equal / not zero */

loc_0045B4AE: ;
    ecx = MEM32(ebp + 0x50);
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    ebx = ebp + -1008;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0045B514; /* je: equal / zero */

loc_0045B4BC: ;
    eax = MEM32(ebp + 0x30);
    edi = MEM32(ebp + 0x48);
    MEM32(ebp + 0x34) = eax;
    eax = ecx + 1;
    ecx = ZX16(LO16(ecx));
    edi = edi + 0xFFFFFFFCu;
    MEM32(ebp + 0x1C) = ecx;

loc_0045B4D1: ;
    eax--;
    fp_push(0.0); /* fldz */
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) - 1;
    MEMF(ebx) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi + 4;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    edx = edi;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0045B50C; /* je: equal / zero */

loc_0045B4E3: ;
    ecx = MEM32(ebp + 0x34);
    fp_push(0.0); /* fldz */
    ecx = ecx - MEM32(ebp + 0x30);
    esi = MEM32(ebp + 0x4C);
    ecx = ecx * 4 + 4;
    ecx = ecx - MEM32(ebp + 0x48);
    ecx = ecx + esi;
    esi = ZX16(LO16(eax));

loc_0045B4FD: ;
    fp_push(MEMF(ecx + edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + 4;
    esi--;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((esi != 0)) goto loc_0045B4FD; /* jne: not equal / not zero */

loc_0045B50A: ;
    MEMF(ebx) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045B50C: ;
    ebx = ebx + 4;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    if ((MEM32(ebp + 0x1C) != 0)) goto loc_0045B4D1; /* jne: not equal / not zero */

loc_0045B514: ;
    PUSH32(esp, MEM32(ebp + 0x50));
    eax = ebp + -1008;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x44));
    eax = ebp + -272;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045ACF1(); /* call 0x0045ACF1 */

loc_0045B52D: ;
    esp = esp + 0x10;
    if (CMP_LE(MEM16(ebp + 0x64), 0)) goto loc_0045B565; /* jle: less or equal (signed <=) */

loc_0045B537: ;
    edx = ZX16(MEM16(ebp + 0x64));
    eax = 0; /* xor self */

loc_0045B53D: ;
    SET_LO16(ecx, MEM16(ebp + eax + -64));
    if (TEST_S(LO16(ecx), LO16(ecx))) goto loc_0045B559; /* jl: less (signed <) */

loc_0045B547: ;
    ecx = SX16(LO16(ecx));
    SET_LO16(ecx, MEM16(ebp + ecx * 2 + -272));
    MEM16(ebp + eax + -112) = LO16(ecx);
    goto loc_0045B560;

loc_0045B559: ;
    MEM16(ebp + eax + -112) = 1;

loc_0045B560: ;
    eax++;
    eax++;
    edx--;
    if ((edx != 0)) goto loc_0045B53D; /* jne: not equal / not zero */

loc_0045B565: ;
    if (CMP_NE(MEM16(ebp + 0x64), 0x18)) { sub_0045B585(); return; } /* jne: not equal / not zero */

loc_0045B56C: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    MEM32(ebp + 0x10) = 7;
    MEM32(ebp + 0x2C) = eax;
    MEM32(ebp + 0x14) = eax;
    MEM32(ebp + 0x1C) = 0x200;
    g_seh_ebp = ebp; sub_0045B5A1(); return; /* tail jmp 0x0045B5A1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045BA78
 * Original: 0x0045BA78 - 0x0045BB28 (176 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045BA78(void)
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

loc_0045BA78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2CC;
    fp_push(MEMF(0x649200)); /* fld float */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    eax = ebp + -68;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443B0D(); /* call 0x00443B0D */

loc_0045BA9D: ;
    eax = ebp + -396;
    PUSH32(esp, 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0045BAAB: ;
    fp_push(0.0); /* fldz */
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 0xC);
    /* fld st(0) */
    ebx = SX16(LO16(eax));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = eax + -1;
    eax = ebp + ebx * 4 + -720;
    esp = esp + 0x14;
    /* fstp st(1) */
    ecx = ecx + 4;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fst */
    eax = eax - 4;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(ebp + -52) = ebx;
    esi = ebp + ebx * 4 + -404;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0045BB08; /* je: equal / zero */

loc_0045BAE2: ;
    edi = ZX16(LO16(edx));

loc_0045BAE5: ;
    fp_push(MEMF(ecx)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(1) */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esi - 4;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fst */
    eax = eax - 4;
    edi--;
    if ((edi != 0)) goto loc_0045BAE5; /* jne: not equal / not zero */

loc_0045BB08: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) | 0xFFFFFFFFu;
    /* fstp st(0) */
    MEM32(ebp + -16) = MEM32(ebp + -16) | 0xFFFFFFFFu;
    /* fstp st(0) */
    edi = 0; /* xor self */
    MEM32(ebp + -20) = 1;
    MEM32(ebp + -44) = edx;
    MEM32(ebp + -48) = edi;
    MEM32(ebp + -28) = edx;
    g_seh_ebp = ebp; sub_0045BB2A(); return; /* tail jmp 0x0045BB2A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045BDA0
 * Original: 0x0045BDA0 - 0x0045BE3F (159 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045BDA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0045BDA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(esi + 0x18));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 8));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x1994));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x1996));
    SET_LO16(edi, LO16(edi) >> 1);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO16(eax), 2 - flags set for next jcc */
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edi;
    if (CMP_EQ(LO16(eax), 2)) goto loc_0045BDE5; /* je: equal / zero */

loc_0045BDDF: ;
    if (CMP_NE(LO16(eax), 3)) goto loc_0045BDEC; /* jne: not equal / not zero */

loc_0045BDE5: ;
    MEM32(ebp + -12) = 1;

loc_0045BDEC: ;
    if (CMP_NE(MEM32(esi + 0x1990), ebx)) { sub_0045BE3F(); return; } /* jne: not equal / not zero */

loc_0045BDF4: ;
    if (CMP_EQ(MEM32(ebp + -12), ebx)) { sub_0045BE3F(); return; } /* je: equal / zero */

loc_0045BDF9: ;
    MEM16(ebp + 8) = LO16(edx);
    MEM16(ebp + 8) = MEM16(ebp + 8) >> 1;

loc_0045BE01: ;
    eax = SX16(LO16(ecx));
    ebx = ZX16(LO16(edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_0045BE14; /* jle: less or equal (signed <=) */

loc_0045BE10: ;
    edx = eax;
    goto loc_0045BE16;

loc_0045BE14: ;
    edx = 0; /* xor self */

loc_0045BE16: ;
    if (CMP_GE(edx, 1)) goto loc_0045BE23; /* jge: greater or equal (signed >=) */

loc_0045BE1B: ;
    if (CMP_G(eax, ebx)) goto loc_0045BE26; /* jg: greater (signed >) */

loc_0045BE1F: ;
    eax = 0; /* xor self */
    goto loc_0045BE26;

loc_0045BE23: ;
    eax = 0; /* xor self */
    eax++;

loc_0045BE26: ;
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + eax * 2 + 0x144C));
    eax = MEM32(ebp + 8);
    eax = eax + ecx + -1;
    if (CMP_L(LO16(eax), LO16(ebx))) { sub_0045BE3F(); return; } /* jl: less (signed <) */

loc_0045BE3A: ;
    MEM32(ebp + -4) = ecx;
    goto loc_0045BE01;

}

/**
 * sub_0045C0A0
 * Original: 0x0045C0A0 - 0x0045C1DD (317 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045C0A0(void)
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

loc_0045C0A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x7FC;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    (void)0; /* cmp MEM16(ebp + 0x48), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    eax = 0x80008000u;
    POP32(esp, ecx);
    edi = ebp + -124;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x10);
    if (CMP_NE(MEM16(ebp + 0x48), 0)) goto loc_0045C0CA; /* jne: not equal / not zero */

loc_0045C0C7: ;
    eax = MEM32(ebp + 8);

loc_0045C0CA: ;
    MEM32(ebp + -4) = eax;
    eax = ebp + -92;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0045C0D8: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x30);
    eax = MEM32(ebp + 0x2C);
    ebx = MEM32(ebp + 0x18);
    esi = esi << 1;
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    SET_LO16(eax, MEM16(esi + eax));
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM16(ebp + -20) = LO16(eax);
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_0045C189; /* je: equal / zero */

loc_0045C0F7: ;
    eax = SX16(LO16(ebx));
    MEM32(ebp + -12) = eax;
    eax = ebx + 1;
    MEM32(ebp + -8) = eax;
    eax = ZX16(LO16(ebx));
    ecx = 0; /* xor self */
    MEM32(ebp + -28) = eax;

loc_0045C10B: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    fp_push(0.0); /* fldz */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    (void)0; /* cmp MEM16(ebp + -8), 0 - flags set for next jcc */
    eax = MEM32(ebp + 0x14);
    edx = ebp + ecx + -444;
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    edi = ebp + ecx + -764;
    fp_push(0.0); /* fldz */
    MEM32(ebp + -24) = eax;
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_EQ(MEM16(ebp + -8), 0)) goto loc_0045C181; /* je: equal / zero */

loc_0045C134: ;
    eax = SX16(LO16(ebx));
    fp_push(0.0); /* fldz */
    eax = eax - MEM32(ebp + -12);
    fp_push(0.0); /* fldz */
    ebx = MEM32(ebp + 0x38);
    eax = ebx + eax * 4 + -4;
    ebx = MEM32(ebp + -4);
    ebx = ebx - MEM32(ebp + 0x38);
    MEM32(ebp + -36) = ebx;
    ebx = ZX16(MEM16(ebp + -8));
    MEM32(ebp + -32) = ebx;

loc_0045C155: ;
    ebx = MEM32(ebp + -36);
    fp_push(MEMF(ebx + eax)); /* fld float */
    ebx = MEM32(ebp + -24);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(eax)); /* fld float */
    eax = eax + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = ebx + 4;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    MEM32(ebp + -24) = ebx;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((MEM32(ebp + -32) != 0)) goto loc_0045C155; /* jne: not equal / not zero */

loc_0045C176: ;
    ebx = MEM32(ebp + 0x18);
    /* fld st(1) */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_0045C181: ;
    ecx = ecx + 4;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if ((MEM32(ebp + -28) != 0)) goto loc_0045C10B; /* jne: not equal / not zero */

loc_0045C189: ;
    (void)0; /* cmp MEM16(ebp + -20), 0 - flags set for next jcc */
    fp_push(MEMF(ebp + 0x40)); /* fld float */
    edi = MEM32(ebp + 0x20);
    PUSH32(esp, MEM32(ebp + 0x48));
    if (CMP_LE(MEM16(ebp + -20), 0)) { sub_0045C1DD(); return; } /* jle: less or equal (signed <=) */

loc_0045C199: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + edi));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x3C)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x38));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    eax = ebp + -124;
    PUSH32(esp, eax);
    eax = ebp + -2044;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_0045B3D4(); /* call 0x0045B3D4 */

loc_0045C1D8: ;
    esp = esp + 0x40;
    g_seh_ebp = ebp; sub_0045C212(); return; /* tail jmp 0x0045C212 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045C369
 * Original: 0x0045C369 - 0x0045C399 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045C369(void)
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

loc_0045C369: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(ebp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx + 8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) { sub_0045C399(); return; } /* jne: not equal / not zero */

loc_0045C37C: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    g_seh_ebp = ebp; sub_0045C3B9(); return; /* tail jmp 0x0045C3B9 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045C3D4
 * Original: 0x0045C3D4 - 0x0045C58C (440 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045C3D4(void)
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

loc_0045C3D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045C3EB: ;
    edx = eax;
    eax = MEM32(ebp + 0x1C);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_NE(eax, 3)) goto loc_0045C446; /* jne: not equal / not zero */

loc_0045C3F8: ;
    edi = MEM32(ebp + 0x18);
    if (CMP_GE(edx, edi)) goto loc_0045C401; /* jge: greater or equal (signed >=) */

loc_0045C3FF: ;
    edi = edx;

loc_0045C401: ;
    esi = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0045C423; /* jle: less or equal (signed <=) */

loc_0045C40A: ;
    ecx = edx;
    ecx = ecx << 2;
    ebx = ecx;
    ecx = MEM32(ebp + 8);
    ecx = ecx - ebx;

loc_0045C416: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    MEMF(esi + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax++;
    if (CMP_L(eax, edi)) goto loc_0045C416; /* jl: less (signed <) */

loc_0045C423: ;
    if (CMP_GE(eax, MEM32(ebp + 0x18))) goto loc_0045C587; /* jge: greater or equal (signed >=) */

loc_0045C42C: ;
    ecx = eax;
    ecx = ecx - edx;
    ecx = esi + ecx * 4;

loc_0045C433: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    MEMF(esi + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax++;
    if (CMP_L(eax, MEM32(ebp + 0x18))) goto loc_0045C433; /* jl: less (signed <) */

loc_0045C441: ;
    goto loc_0045C587;

loc_0045C446: ;
    ebx = MEM32(ebp + 0x18);
    eax = eax << 6;
    eax = eax + 0x57B340;
    MEM32(ebp + -8) = eax;
    eax = edx + -8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(eax, ebx)) goto loc_0045C461; /* jl: less (signed <) */

loc_0045C45E: ;
    MEM32(ebp + 0x14) = ebx;

loc_0045C461: ;
    esi = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x14), edi - flags set for next jcc */
    MEM32(ebp + 0x1C) = edi;
    if (CMP_LE(MEM32(ebp + 0x14), edi)) goto loc_0045C4A4; /* jle: less or equal (signed <=) */

loc_0045C46E: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x14);
    eax = edx;
    eax = eax << 2;
    edx = eax;
    eax = MEM32(ebp + 8);
    eax = eax - edx;
    edx = esi;
    edx = edx - ecx;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + 0x14) = edi;
    MEM32(ebp + 0x1C) = edi;
    goto loc_0045C492;

loc_0045C48F: ;
    edx = MEM32(ebp + -12);

loc_0045C492: ;
    fp_push(MEMF(eax)); /* fld float */
    eax = eax + 4;
    MEMF(edx + ecx) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    if ((MEM32(ebp + 0x14) != 0)) goto loc_0045C48F; /* jne: not equal / not zero */

loc_0045C4A4: ;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_0045C4A9: ;
    if (TEST_Z(eax, eax)) goto loc_0045C540; /* je: equal / zero */

loc_0045C4B1: ;
    ecx = MEM32(ebp + 0x18);
    ecx = ecx - MEM32(ebp + 0x1C);
    if (CMP_LE((uint32_t)ecx + (uint32_t)MEM32(ebp + 0x1C), (uint32_t)MEM32(ebp + 0x1C))) goto loc_0045C53E; /* jle: less or equal (signed <=) */

loc_0045C4BD: ;
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x1C);
    edi = ebx + eax * 4 + -4;
    ebx = MEM32(ebp + 0xC);
    edx = ebx + eax * 4 + -4;
    esi = MEM32(ebp + -8);
    xmm0 = MEMF(esi); /* movups */
    xmm1 = MEMF(esi + 0x10); /* movups */
    xmm2 = MEMF(esi + 0x20); /* movups */
    xmm3 = MEMF(esi + 0x30); /* movups */
    eax = eax - 7;
    eax = eax - MEM32(ebp + -4);
    ebx = MEM32(ebp + 0x10);
    esi = ebx + eax * 4;

loc_0045C4EC: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(esi); /* movups */
    /* mulps: xmm4 *= xmm0 (packed 4xfloat) */
    xmm5 = MEMF(esi + 0x10); /* movups */
    /* mulps: xmm5 *= xmm1 (packed 4xfloat) */
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x20); /* movups */
    /* mulps: xmm6 *= xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    edi = edi + 4;
    edx = edx + 4;
    xmm4 = MEMF(esi + 0x30); /* movups */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    esi = esi + 4;
    ecx--;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    xmm5 = xmm7; /* movaps */
    /* shufps xmm5, xmm5, 0xe */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm5 = xmm7; /* movaps */
    /* shufps xmm5, xmm5, 1 */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    MEMF(edi) = xmm7; /* movss */
    MEMF(edx) = xmm7; /* movss */
    if ((ecx != 0)) goto loc_0045C4EC; /* jne: not equal / not zero */

loc_0045C53E: ;
    goto loc_0045C587;

loc_0045C540: ;
    if (CMP_GE(edi, ebx)) goto loc_0045C587; /* jge: greater or equal (signed >=) */

loc_0045C544: ;
    edx = MEM32(ebp + 0xC);
    ecx = edi;
    ecx = ecx - MEM32(ebp + -4);
    edx = edx - esi;
    ebx = ebx - edi;
    eax = esi + edi * 4;
    ecx = esi + ecx * 4 + -28;
    MEM32(ebp + 0x14) = ebx;

loc_0045C55A: ;
    edi = MEM32(ebp + -8);
    fp_push(0.0); /* fldz */
    PUSH32(esp, 0x10);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    esi = ecx;
    POP32(esp, ebx);

loc_0045C566: ;
    fp_push(MEMF(esi)); /* fld float */
    esi = esi + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = edi + 4;
    ebx--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ebx != 0)) goto loc_0045C566; /* jne: not equal / not zero */

loc_0045C577: ;
    fp_push(MEMF(eax)); /* fld float */
    ecx = ecx + 4;
    MEMF(edx + eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    if ((MEM32(ebp + 0x14) != 0)) goto loc_0045C55A; /* jne: not equal / not zero */

loc_0045C587: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0045C58C
 * Original: 0x0045C58C - 0x0045C630 (164 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045C58C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0045C58C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    esi = esi << 6;
    esi = esi + 0x57B340;
    PUSH32(esp, edi);
    MEM32(ebp + 0x1C) = esi;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_0045C5A7: ;
    if (TEST_Z(eax, eax)) { sub_0045C630(); return; } /* je: equal / zero */

loc_0045C5AF: ;
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x18);
    eax = (uint32_t)(-(int32_t)eax);
    edi = ebx + eax * 4 + -4;
    esi = MEM32(ebp + 0x1C);
    xmm0 = MEMF(esi); /* movups */
    xmm1 = MEMF(esi + 0x10); /* movups */
    xmm2 = MEMF(esi + 0x20); /* movups */
    xmm3 = MEMF(esi + 0x30); /* movups */
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x18);
    eax = 0xFFFFFFF9u;
    eax = eax - ecx;
    esi = ebx + eax * 4;
    ecx = ecx + MEM32(ebp + 0x10);
    ecx = ecx - MEM32(ebp + 0x14);

loc_0045C5E3: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(esi); /* movups */
    /* mulps: xmm4 *= xmm0 (packed 4xfloat) */
    xmm5 = MEMF(esi + 0x10); /* movups */
    /* mulps: xmm5 *= xmm1 (packed 4xfloat) */
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x20); /* movups */
    /* mulps: xmm6 *= xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x30); /* movups */
    /* mulps: xmm4 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    edi = edi + 4;
    esi = esi + 4;
    ecx--;
    /* addps: xmm7 += xmm4 (packed 4xfloat) */
    xmm5 = xmm7; /* movaps */
    /* shufps xmm5, xmm5, 0xe */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm5 = xmm7; /* movaps */
    /* shufps xmm5, xmm5, 1 */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    MEMF(edi) = xmm7; /* movss */
    if ((ecx != 0)) goto loc_0045C5E3; /* jne: not equal / not zero */

loc_0045C62E: ;
    g_seh_ebp = ebp; sub_0045C67A(); return; /* tail jmp 0x0045C67A */

}

/**
 * sub_0045C67F
 * Original: 0x0045C67F - 0x0045C86D (494 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045C67F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0045C67F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x524;
    ecx = MEM32(ebp + 0xC);
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    MEMF(ebp + -1316) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    fp_push(0.0); /* fldz */
    esi = MEM32(ebp + 0x18);
    MEMF(ebp + -672) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -1312;
    MEM32(ebp + -20) = eax;
    eax = ebp + -668;
    MEM32(ebp + -8) = eax;
    eax = esi;
    eax = eax << 2;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    eax = ebp + -668;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443986(); /* call 0x00443986 */

loc_0045C6CB: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -668;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045C6DD: ;
    MEMF(ebp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -668;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045C6F0: ;
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    eax = esi + 1;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    esp = esp + 0x28;
    (void)0; /* cmp eax, MEM32(ebp + 0x1C) - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -4) = eax;
    MEMF(ebp + -24) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_G(eax, MEM32(ebp + 0x1C))) goto loc_0045C854; /* jg: greater (signed >) */

loc_0045C714: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0045C716: ;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_0045C71B: ;
    if (TEST_Z(eax, eax)) goto loc_0045C7B5; /* je: equal / zero */

loc_0045C723: ;
    ecx = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + -4);
    ebx = (uint32_t)(-(int32_t)ebx);
    eax = ecx + ebx * 4;
    xmm0 = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    esi = MEM32(ebp + -8);
    esi = esi - 4;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx >> 2;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm7 = 0.0f; /* xorps self = zero */

loc_0045C751: ;
    xmm1 = MEMF(ebx); /* movups */
    /* mulps: xmm1 *= xmm0 (packed 4xfloat) */
    ebx = ebx + 0x10;
    xmm4 = MEMF(esi); /* movups */
    /* addps: xmm1 += xmm4 (packed 4xfloat) */
    MEMF(edi) = xmm1; /* movups */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm1 (packed 4xfloat) */
    esi = esi + 0x10;
    edi = edi + 0x10;
    xmm5 = MEMF(edx); /* movups */
    /* mulps: xmm2 *= xmm5 (packed 4xfloat) */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    edx = edx + 0x10;
    ecx--;
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    if ((ecx != 0)) goto loc_0045C751; /* jne: not equal / not zero */

loc_0045C781: ;
    xmm4 = xmm6; /* movaps */
    /* shufps xmm4, xmm4, 0xe */
    /* addps: xmm6 += xmm4 (packed 4xfloat) */
    xmm5 = xmm7; /* movaps */
    /* shufps xmm5, xmm5, 0xe */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm4 = xmm6; /* movaps */
    /* shufps xmm4, xmm4, 1 */
    /* addps: xmm6 += xmm4 (packed 4xfloat) */
    xmm5 = xmm7; /* movaps */
    /* shufps xmm5, xmm5, 1 */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    MEMF(ebp + -16) = xmm6; /* movss */
    MEMF(ebp + 0x18) = xmm7; /* movss */
    goto loc_0045C80A;

loc_0045C7B5: ;
    ecx = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + -4);
    ebx = (uint32_t)(-(int32_t)ebx);
    eax = ecx + ebx * 4;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(ebp + -8);
    ebx = ebx + 4;
    edi = edi + 4;
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + 4;
    ecx = MEM32(ebp + 0x14);
    ecx--;

loc_0045C7E3: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = ebx + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fst */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 4;
    edi = edi + 4;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + 4;
    ecx--;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((ecx != 0)) goto loc_0045C7E3; /* jne: not equal / not zero */

loc_0045C804: ;
    MEMF(ebp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebp + -16) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045C80A: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0045C835; /* jp: parity */

loc_0045C824: ;
    eax = MEM32(ebp + -4);
    MEMF(ebp + -24) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_0045C837;

loc_0045C835: ;
    /* fstp st(0) */

loc_0045C837: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    (void)0; /* cmp eax, MEM32(ebp + 0x1C) - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    if (CMP_LE(eax, MEM32(ebp + 0x1C))) goto loc_0045C716; /* jle: less or equal (signed <=) */

loc_0045C852: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0045C854: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    POP32(esp, esi);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0045C86D(); return; } /* jne: not equal / not zero */

loc_0045C865: ;
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    g_seh_ebp = ebp; sub_0045C86F(); return; /* tail jmp 0x0045C86F */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045C892
 * Original: 0x0045C892 - 0x0045C920 (142 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045C892(void)
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

loc_0045C892: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xD1C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -1308;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -20) = eax;
    eax = ebp + -668;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    esi = ebx;
    esi = esi << 2;
    eax = eax - esi;
    PUSH32(esp, eax);
    eax = ebp + -668;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = esi;
    PUSH32(esp, 0); sub_00443986(); /* call 0x00443986 */

loc_0045C8D3: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -668;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045C8E5: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -668;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443B9D(); /* call 0x00443B9D */

loc_0045C8F8: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    esp = esp + 0x28;
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 0x41 - flags set for next jcc */
    eax = ebp + esi + -3356;
    MEM32(ebp + -24) = eax;
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0045C920(); return; } /* jne: not equal / not zero */

loc_0045C915: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    g_seh_ebp = ebp; sub_0045C922(); return; /* tail jmp 0x0045C922 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045CABC
 * Original: 0x0045CABC - 0x0045D109 (1613 bytes, 550 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045CABC(void)
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

loc_0045CABC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0x1B28;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0045CAC9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    ebx = ebx + 0x680;
    (void)0; /* cmp MEM16(ebp + 0x14), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(MEM16(ebp + 0x14), 0)) goto loc_0045CD2C; /* jne: not equal / not zero */

loc_0045CAE6: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    edi = ZX16(MEM16(ebp + 0x18));
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CAFC: ;
    PUSH32(esp, eax);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CB04: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0045C892(); /* call 0x0045C892 */

loc_0045CB12: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    eax = MEM32(ebp + -40);
    esp = esp + 0x24;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CB23: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + 0x14) = eax;

loc_0045CB31: ;
    ebx = MEM32(ebp + -4);
    ebx = ebp + ebx * 4 + -40;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0045CB77; /* jne: not equal / not zero */

loc_0045CB41: ;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0045CB57; /* jne: not equal / not zero */

loc_0045CB4D: ;
    fp_push(MEMF(ebx)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CB54: ;
    MEM32(ebp + 0x14) = eax;

loc_0045CB57: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0045CB75; /* jp: parity */

loc_0045CB6B: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CB70: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_0045CB77;

loc_0045CB75: ;
    /* fstp st(0) */

loc_0045CB77: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    if (CMP_L(MEM32(ebp + -4), 4)) goto loc_0045CB31; /* jl: less (signed <) */

loc_0045CB80: ;
    eax = MEM32(ebp + 0xC);
    /* fstp st(0) */
    if (CMP_G(MEM32(ebp + 0x14), eax)) goto loc_0045CBEC; /* jg: greater (signed >) */

loc_0045CB8A: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -5288;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_0045C58C(); /* call 0x0045C58C */

loc_0045CBA1: ;
    esp = esp + 0x18;

loc_0045CBA4: ;
    fp_push(MEMF(ebp + ebx * 4 + -40)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0045CBE6; /* jp: parity */

loc_0045CBB2: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -5288;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0045C67F(); /* call 0x0045C67F */

loc_0045CBD3: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0045CBE6; /* je: equal / zero */

loc_0045CBDA: ;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045CBE6: ;
    ebx++;
    if (CMP_L(ebx, 4)) goto loc_0045CBA4; /* jl: less (signed <) */

loc_0045CBEC: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CBF4: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + 0x14) = eax;

loc_0045CC02: ;
    ebx = MEM32(ebp + -4);
    ebx = ebp + ebx * 4 + -40;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0045CC48; /* jne: not equal / not zero */

loc_0045CC12: ;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0045CC28; /* jne: not equal / not zero */

loc_0045CC1E: ;
    fp_push(MEMF(ebx)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CC25: ;
    MEM32(ebp + 0x14) = eax;

loc_0045CC28: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0045CC46; /* jp: parity */

loc_0045CC3C: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CC41: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_0045CC48;

loc_0045CC46: ;
    /* fstp st(0) */

loc_0045CC48: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    if (CMP_L(MEM32(ebp + -4), 4)) goto loc_0045CC02; /* jl: less (signed <) */

loc_0045CC51: ;
    eax = MEM32(ebp + 0xC);
    /* fstp st(0) */
    if (CMP_G(MEM32(ebp + 0x14), eax)) goto loc_0045D051; /* jg: greater (signed >) */

loc_0045CC5F: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -2984;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_0045C58C(); /* call 0x0045C58C */

loc_0045CC75: ;
    esp = esp + 0x18;
    ebx = 0; /* xor self */

loc_0045CC7A: ;
    fp_push(MEMF(ebp + ebx * 4 + -40)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0045CCBC; /* jp: parity */

loc_0045CC88: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -2984;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0045C67F(); /* call 0x0045C67F */

loc_0045CCA9: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0045CCBC; /* je: equal / zero */

loc_0045CCB0: ;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045CCBC: ;
    ebx++;
    if (CMP_L(ebx, 4)) goto loc_0045CC7A; /* jl: less (signed <) */

loc_0045CCC2: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -680;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_0045C58C(); /* call 0x0045C58C */

loc_0045CCDA: ;
    esp = esp + 0x18;
    ebx = 0; /* xor self */

loc_0045CCDF: ;
    fp_push(MEMF(ebp + ebx * 4 + -40)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0045CD21; /* jp: parity */

loc_0045CCED: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -680;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0045C67F(); /* call 0x0045C67F */

loc_0045CD0E: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0045CD21; /* je: equal / zero */

loc_0045CD15: ;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045CD21: ;
    ebx++;
    if (CMP_L(ebx, 4)) goto loc_0045CCDF; /* jl: less (signed <) */

loc_0045CD27: ;
    goto loc_0045D051;

loc_0045CD2C: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    edi = ZX16(MEM16(ebp + 0x2C));
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edi = edi >> 1;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CD42: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ebx = eax;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CD51: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CD5F: ;
    ecx = MEM32(ebp + 0x20);
    fp_push(MEMF(ecx)); /* fld float */
    MEM32(ebp + -20) = eax;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) { sub_0045D109(); return; } /* jnp: not parity */

loc_0045CD74: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi + 0xc] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) { sub_0045D109(); return; } /* je: equal / zero */

loc_0045CD84: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0045C369(); /* call 0x0045C369 */

loc_0045CD94: ;
    eax = MEM32(ebp + -8);
    eax = eax - edi;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_G(eax & eax, 0)) goto loc_0045CDA8; /* jg: greater (signed >) */

loc_0045CDA3: ;
    eax = 0; /* xor self */
    MEM32(ebp + 0x14) = eax;

loc_0045CDA8: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(ebp + 0xC);
    if (CMP_GE(eax, ebx)) goto loc_0045CDBC; /* jge: greater or equal (signed >=) */

loc_0045CDAF: ;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    goto loc_0045CDE3;

loc_0045CDBC: ;
    edx = ecx + ebx;
    if (CMP_GE(eax, edx)) goto loc_0045CDD6; /* jge: greater or equal (signed >=) */

loc_0045CDC3: ;
    eax = eax - ebx;
    MEM32(ebp + 0x14) = eax;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    goto loc_0045CDE3;

loc_0045CDD6: ;
    eax = eax - ecx;
    eax = eax - ebx;
    MEM32(ebp + 0x14) = eax;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0045CDE3: ;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + -8);
    edx = edx + ecx;
    eax = edi + eax + -1;
    edx = edx + ebx;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(eax, edx)) goto loc_0045CE00; /* jl: less (signed <) */

loc_0045CDFB: ;
    eax = edx;
    MEM32(ebp + 0xC) = eax;

loc_0045CE00: ;
    if (CMP_GE(eax, ebx)) goto loc_0045CE11; /* jge: greater or equal (signed >=) */

loc_0045CE04: ;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    goto loc_0045CE38;

loc_0045CE11: ;
    edx = ecx + ebx;
    if (CMP_GE(eax, edx)) goto loc_0045CE2B; /* jge: greater or equal (signed >=) */

loc_0045CE18: ;
    eax = eax - ebx;
    MEM32(ebp + 0x14) = eax;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    goto loc_0045CE38;

loc_0045CE2B: ;
    eax = eax - ecx;
    eax = eax - ebx;
    MEM32(ebp + 0x14) = eax;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0045CE38: ;
    MEMF(ebp + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CE49: ;
    fp_push(MEMF(ebp + -20)); /* fld float */
    edi = ZX16(MEM16(ebp + 0x18));
    ebx = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    MEM32(ebp + -24) = 0xBF800000u;
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CE69: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0045C67F(); /* call 0x0045C67F */

loc_0045CE7A: ;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    esp = esp + 0x20;
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp - 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0045D051; /* jne: not equal / not zero */

loc_0045CEA0: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CEAE: ;
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CEBF: ;
    MEM32(ebp + 0xC) = eax;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esi + 8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0045CED4; /* jnp: not parity */

loc_0045CECF: ;
    /* fstp st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */

loc_0045CED4: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CED9: ;
    PUSH32(esp, 0);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -5288;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_0045C58C(); /* call 0x0045C58C */

loc_0045CEF1: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -5288;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0045C67F(); /* call 0x0045C67F */

loc_0045CF10: ;
    esp = esp + 0x38;
    if (TEST_Z(eax, eax)) goto loc_0045CF23; /* je: equal / zero */

loc_0045CF17: ;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045CF23: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp - 4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0045CFBD; /* jne: not equal / not zero */

loc_0045CF3A: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CF48: ;
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CF59: ;
    MEM32(ebp + 0xC) = eax;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esi + 4] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0045CF6E; /* jnp: not parity */

loc_0045CF69: ;
    /* fstp st(0) */
    fp_push(MEMF(esi + 4)); /* fld float */

loc_0045CF6E: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CF73: ;
    PUSH32(esp, 1);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -2984;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_0045C58C(); /* call 0x0045C58C */

loc_0045CF8B: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -2984;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0045C67F(); /* call 0x0045C67F */

loc_0045CFAA: ;
    esp = esp + 0x38;
    if (TEST_Z(eax, eax)) goto loc_0045CFBD; /* je: equal / zero */

loc_0045CFB1: ;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045CFBD: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi + 4] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0045D051; /* jp: parity */

loc_0045CFCE: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CFDC: ;
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045CFED: ;
    MEM32(ebp + 0xC) = eax;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esi + 4] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0045D002; /* jnp: not parity */

loc_0045CFFD: ;
    /* fstp st(0) */
    fp_push(MEMF(esi + 4)); /* fld float */

loc_0045D002: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045D007: ;
    PUSH32(esp, 2);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -680;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_0045C58C(); /* call 0x0045C58C */

loc_0045D01F: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -680;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0045C67F(); /* call 0x0045C67F */

loc_0045D03E: ;
    esp = esp + 0x38;
    if (TEST_Z(eax, eax)) goto loc_0045D051; /* je: equal / zero */

loc_0045D045: ;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045D051: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0045D05F: ;
    MEM32(ebp + 0x14) = eax;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    fp_push(MEMF(0x649228)); /* fld float */
    /* FPU: fsubr st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp - 0xc] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0045D0CB; /* jne: not equal / not zero */

loc_0045D077: ;
    eax = 0; /* xor self */
    /* fstp st(0) */
    eax++;

loc_0045D07C: ;
    ecx = eax + eax * 8;
    ecx = ecx << 8;
    ecx = ebp + ecx + -5288;

loc_0045D089: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0045C3D4(); /* call 0x0045C3D4 */

loc_0045D09E: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(ebp + -12);
    esp = esp + 0x18;
    MEM32(ecx) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0045C369(); /* call 0x0045C369 */

loc_0045D0BA: ;
    eax = MEM32(ebp + 0x24);
    SET_LO16(ecx, MEM16(ebp + -8));
    esp = esp + 0xC;
    MEM16(eax) = LO16(ecx);
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0045D10E(); return; /* tail jmp 0x0045D10E */

loc_0045D0CB: ;
    fp_push(MEMF(0x648EA8)); /* fld float */
    /* FPU: fsubr st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp - 0xc] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0045D0E3; /* jne: not equal / not zero */

loc_0045D0DD: ;
    /* fstp st(0) */
    eax = 0; /* xor self */
    goto loc_0045D07C;

loc_0045D0E3: ;
    fp_push(MEMF(0x648E64)); /* fld float */
    /* FPU: fsubr st(1) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (1 /* jp after test - parity */) goto loc_0045D101; /* jp: parity */

loc_0045D0F9: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_0045D07C;

loc_0045D101: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 3);
    POP32(esp, eax);
    goto loc_0045D089;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045D120
 * Original: 0x0045D120 - 0x0045D32D (525 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045D120(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    uint64_t mm0, mm1;

loc_0045D120: ;
    PUSH32(esp, ebx);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    if (TEST_Z(ecx, 0xFFFFFFC0u)) goto loc_0045D2B3; /* je: equal / zero */

loc_0045D139: ;
    if (TEST_Z(edx, 0xF)) goto loc_0045D161; /* je: equal / zero */

loc_0045D141: ;
    xmm0 = MEMF(eax); /* movups */
    ebx = edx;
    ebx = ebx & 0xF;
    MEMF(edx) = xmm0; /* movups */
    ebx = ebx - 0x10;
    eax = eax - ebx;
    edx = edx - ebx;
    ecx = ecx + ebx;
    if (TEST_Z(ecx, 0xFFFFFFC0u)) goto loc_0045D2B3; /* je: equal / zero */

loc_0045D161: ;
    if (TEST_NZ(eax, 3)) goto loc_0045D1C3; /* jne: not equal / not zero */

loc_0045D168: ;
    if (TEST_NZ(eax, 4)) goto loc_0045D242; /* jne: not equal / not zero */

loc_0045D173: ;
    if (TEST_NZ(eax, 8)) goto loc_0045D1E3; /* jne: not equal / not zero */

loc_0045D17A: ;
    ecx = ecx - 0x40;
    /* nop */
    /* nop */
    /* nop */

loc_0045D182: ;
    eax = eax + 0x40;
    edx = edx + 0x40;
    xmm0 = MEMF(eax + -64); /* movaps */
    MEMF(edx + -64) = xmm0; /* movaps */
    xmm0 = MEMF(eax + -48); /* movaps */
    MEMF(edx + -48) = xmm0; /* movaps */
    xmm0 = MEMF(eax + -32); /* movaps */
    xmm1 = MEMF(eax + -16); /* movaps */
    MEMF(edx + -32) = xmm0; /* movaps */
    MEMF(edx + -16) = xmm1; /* movaps */
    ecx = ecx - 0x40;
    if (CMP_GE((uint32_t)ecx + (uint32_t)0x40, (uint32_t)0x40)) goto loc_0045D182; /* jge: greater or equal (signed >=) */

loc_0045D1AD: ;
    ecx = ecx + 0x40;
    if ((ecx == 0)) goto loc_0045D325; /* je: equal / zero */

loc_0045D1B6: ;
    goto loc_0045D2B3;

    eax = eax + 0;
    /* nop */
    /* nop */
    /* nop */

loc_0045D1C3: ;
    /* SSE: movq mm0, qword ptr [eax] */
    ebx = eax;
    ebx = ebx & 7;
    /* SSE: movq qword ptr [edx], mm0 */
    ebx = ebx - 8;
    eax = eax - ebx;
    edx = edx - ebx;
    ecx = ecx + ebx;
    if (TEST_Z(ecx, 0xFFFFFFC0u)) goto loc_0045D2B3; /* je: equal / zero */

loc_0045D1E3: ;
    ecx = ecx - 0x40;

loc_0045D1E6: ;
    /* SSE: movq mm0, qword ptr [eax] */
    /* SSE: movq qword ptr [edx], mm0 */
    eax = eax + 0x40;
    edx = edx + 0x40;
    /* SSE: movq mm0, qword ptr [eax - 0x38] */
    /* SSE: movq qword ptr [edx - 0x38], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x30] */
    /* SSE: movq qword ptr [edx - 0x30], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x28] */
    /* SSE: movq qword ptr [edx - 0x28], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x20] */
    /* SSE: movq qword ptr [edx - 0x20], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x18] */
    /* SSE: movq qword ptr [edx - 0x18], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x10] */
    /* SSE: movq qword ptr [edx - 0x10], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 8] */
    /* SSE: movq qword ptr [edx - 8], mm0 */
    ecx = ecx - 0x40;
    if (CMP_GE((uint32_t)ecx + (uint32_t)0x40, (uint32_t)0x40)) goto loc_0045D1E6; /* jge: greater or equal (signed >=) */

loc_0045D22F: ;
    ecx = ecx + 0x40;
    if ((ecx == 0)) goto loc_0045D325; /* je: equal / zero */

loc_0045D238: ;
    goto loc_0045D2B3;

    /* nop */
    /* nop */
    /* nop */

loc_0045D242: ;
    ecx = ecx - 0x40;

loc_0045D245: ;
    ebx = MEM32(eax);
    MEM32(edx) = ebx;
    /* SSE: movq mm0, qword ptr [eax + 4] */
    /* SSE: movq qword ptr [edx + 4], mm0 */
    ebx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ebx;
    ebx = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = ebx;
    /* SSE: movq mm0, qword ptr [eax + 0x14] */
    /* SSE: movq qword ptr [edx + 0x14], mm0 */
    ebx = MEM32(eax + 0x1C);
    MEM32(edx + 0x1C) = ebx;
    ebx = MEM32(eax + 0x20);
    MEM32(edx + 0x20) = ebx;
    /* SSE: movq mm0, qword ptr [eax + 0x24] */
    /* SSE: movq qword ptr [edx + 0x24], mm0 */
    ebx = MEM32(eax + 0x2C);
    MEM32(edx + 0x2C) = ebx;
    ebx = MEM32(eax + 0x30);
    MEM32(edx + 0x30) = ebx;
    /* SSE: movq mm0, qword ptr [eax + 0x34] */
    /* SSE: movq qword ptr [edx + 0x34], mm0 */
    ebx = MEM32(eax + 0x3C);
    MEM32(edx + 0x3C) = ebx;
    eax = eax + 0x40;
    edx = edx + 0x40;
    ecx = ecx - 0x40;
    if (CMP_GE((uint32_t)ecx + (uint32_t)0x40, (uint32_t)0x40)) goto loc_0045D245; /* jge: greater or equal (signed >=) */

loc_0045D29E: ;
    ecx = ecx + 0x40;
    if ((ecx == 0)) goto loc_0045D325; /* je: equal / zero */

loc_0045D2A7: ;
    /* nop */
    edi = edi;
    /* nop */
    /* nop */
    /* nop */

loc_0045D2B3: ;
    edx = edx - eax;
    ecx = ecx - 0x10;
    if (CMP_L((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0045D2D2; /* jl: less (signed <) */

loc_0045D2BA: ;
    /* SSE: movq mm0, qword ptr [eax] */
    /* SSE: movq qword ptr [edx + eax], mm0 */
    /* SSE: movq mm1, qword ptr [eax + 8] */
    /* SSE: movq qword ptr [edx + eax + 8], mm1 */
    eax = eax + 0x10;
    ecx = ecx - 0x10;
    if (CMP_GE((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0045D2BA; /* jge: greater or equal (signed >=) */

loc_0045D2D2: ;
    ecx = ecx + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0045D325; /* je: equal / zero */

loc_0045D2D9: ;
    if (TEST_Z(ecx, 8)) goto loc_0045D2EE; /* je: equal / zero */

loc_0045D2E1: ;
    /* SSE: movq mm0, qword ptr [eax] */
    ecx = ecx - 8;
    /* SSE: movq qword ptr [edx + eax], mm0 */
    eax = eax + 8;

loc_0045D2EE: ;
    if (TEST_Z(ecx, 4)) goto loc_0045D303; /* je: equal / zero */

loc_0045D2F6: ;
    mm0 = MEM32(eax); /* movd */
    ecx = ecx - 4;
    MEM32(edx + eax) = mm0; /* movd */
    eax = eax + 4;

loc_0045D303: ;
    if (TEST_Z(ecx, ecx)) goto loc_0045D325; /* je: equal / zero */

loc_0045D307: ;
    if (TEST_Z(ecx, 2)) goto loc_0045D31C; /* je: equal / zero */

loc_0045D30F: ;
    SET_LO16(ebx, MEM16(eax));
    ecx = ecx - 2;
    MEM16(edx + eax) = LO16(ebx);
    eax = eax + 2;

loc_0045D31C: ;
    if (TEST_Z(ecx, ecx)) goto loc_0045D325; /* je: equal / zero */

loc_0045D320: ;
    SET_LO8(ebx, MEM8(eax));
    MEM8(edx + eax) = LO8(ebx);

loc_0045D325: ;
    /* emms - empty MMX state */
    POP32(esp, ebx);
    eax = MEM32(esp + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0045DA70
 * Original: 0x0045DA70 - 0x0045DAB4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045DA70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0045DA70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0045DAB3; /* je: equal / zero */

loc_0045DA7C: ;
    ecx = ecx - 0x1000;
    if (CMP_LE((uint32_t)ecx + (uint32_t)0x1000, (uint32_t)0x1000)) goto loc_0045DA9C; /* jle: less or equal (signed <=) */

loc_0045DA84: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 0xFFF));
    edx = 0x80;

loc_0045DA91: ;
    /* TODO: prefetchnta byte ptr [eax] */
    eax = eax + 0x20;
    edx--;
    if ((edx != 0)) goto loc_0045DA91; /* jne: not equal / not zero */

loc_0045DA9A: ;
    goto loc_0045DA7C;

loc_0045DA9C: ;
    ecx = ecx + 0x1000;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax + -1));

loc_0045DAA8: ;
    /* TODO: prefetchnta byte ptr [eax] */
    eax = eax + 0x20;
    ecx = ecx - 0x20;
    if (CMP_G((uint32_t)ecx + (uint32_t)0x20, (uint32_t)0x20)) goto loc_0045DAA8; /* jg: greater (signed >) */

loc_0045DAB3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0045DB10
 * Original: 0x0045DB10 - 0x0045DC4D (317 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045DB10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;
    uint64_t mm0, mm1;

loc_0045DB10: ;
    PUSH32(esp, ebx);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    if (TEST_Z(ecx, 0xFFFFFFC0u)) goto loc_0045DBD0; /* je: equal / zero */

loc_0045DB29: ;
    if (TEST_Z(edx, 0xF)) goto loc_0045DB51; /* je: equal / zero */

loc_0045DB31: ;
    xmm0 = MEMF(eax); /* movups */
    ebx = edx;
    ebx = ebx & 0xF;
    MEMF(edx) = xmm0; /* movups */
    ebx = ebx - 0x10;
    eax = eax - ebx;
    edx = edx - ebx;
    ecx = ecx + ebx;
    if (TEST_Z(ecx, 0xFFFFFFC0u)) goto loc_0045DBD0; /* je: equal / zero */

loc_0045DB51: ;
    if (TEST_Z(eax, 7)) goto loc_0045DB7F; /* je: equal / zero */

loc_0045DB58: ;
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    xmm0 = MEMF(eax); /* movups */
    ebx = eax;
    ebx = ebx & 0xF;
    MEMF(edx) = xmm0; /* movups */
    ebx = ebx - 0x10;
    eax = eax - ebx;
    edx = edx - ebx;
    ecx = ecx + ebx;
    if (TEST_Z(ecx, 0xFFFFFFC0u)) goto loc_0045DBD0; /* je: equal / zero */

loc_0045DB7F: ;
    ecx = ecx - 0x40;

loc_0045DB82: ;
    /* SSE: movq mm0, qword ptr [eax] */
    /* TODO: movntq qword ptr [edx], mm0 */
    eax = eax + 0x40;
    edx = edx + 0x40;
    /* SSE: movq mm0, qword ptr [eax - 0x38] */
    /* TODO: movntq qword ptr [edx - 0x38], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x30] */
    /* TODO: movntq qword ptr [edx - 0x30], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x28] */
    /* TODO: movntq qword ptr [edx - 0x28], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x20] */
    /* TODO: movntq qword ptr [edx - 0x20], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x18] */
    /* TODO: movntq qword ptr [edx - 0x18], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 0x10] */
    /* TODO: movntq qword ptr [edx - 0x10], mm0 */
    /* SSE: movq mm0, qword ptr [eax - 8] */
    /* TODO: movntq qword ptr [edx - 8], mm0 */
    ecx = ecx - 0x40;
    if (CMP_GE((uint32_t)ecx + (uint32_t)0x40, (uint32_t)0x40)) goto loc_0045DB82; /* jge: greater or equal (signed >=) */

loc_0045DBCB: ;
    ecx = ecx + 0x40;
    if ((ecx == 0)) goto loc_0045DC42; /* je: equal / zero */

loc_0045DBD0: ;
    edx = edx - eax;
    ecx = ecx - 0x10;
    if (CMP_L((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0045DBEF; /* jl: less (signed <) */

loc_0045DBD7: ;
    /* SSE: movq mm0, qword ptr [eax] */
    /* SSE: movq qword ptr [edx + eax], mm0 */
    /* SSE: movq mm1, qword ptr [eax + 8] */
    /* SSE: movq qword ptr [edx + eax + 8], mm1 */
    eax = eax + 0x10;
    ecx = ecx - 0x10;
    if (CMP_GE((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0045DBD7; /* jge: greater or equal (signed >=) */

loc_0045DBEF: ;
    ecx = ecx + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0045DC42; /* je: equal / zero */

loc_0045DBF6: ;
    if (TEST_Z(ecx, 8)) goto loc_0045DC0B; /* je: equal / zero */

loc_0045DBFE: ;
    /* SSE: movq mm0, qword ptr [eax] */
    ecx = ecx - 8;
    /* SSE: movq qword ptr [edx + eax], mm0 */
    eax = eax + 8;

loc_0045DC0B: ;
    if (TEST_Z(ecx, 4)) goto loc_0045DC20; /* je: equal / zero */

loc_0045DC13: ;
    mm0 = MEM32(eax); /* movd */
    ecx = ecx - 4;
    MEM32(edx + eax) = mm0; /* movd */
    eax = eax + 4;

loc_0045DC20: ;
    if (TEST_Z(ecx, ecx)) goto loc_0045DC42; /* je: equal / zero */

loc_0045DC24: ;
    if (TEST_Z(ecx, 2)) goto loc_0045DC39; /* je: equal / zero */

loc_0045DC2C: ;
    SET_LO16(ebx, MEM16(eax));
    ecx = ecx - 2;
    MEM16(edx + eax) = LO16(ebx);
    eax = eax + 2;

loc_0045DC39: ;
    if (TEST_Z(ecx, ecx)) goto loc_0045DC42; /* je: equal / zero */

loc_0045DC3D: ;
    SET_LO8(ebx, MEM8(eax));
    MEM8(edx + eax) = LO8(ebx);

loc_0045DC42: ;
    /* TODO: sfence  */
    /* emms - empty MMX state */
    POP32(esp, ebx);
    eax = MEM32(esp + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0045E394
 * Original: 0x0045E394 - 0x0045E486 (242 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045E394(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045E394: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x14;
    esi = MEM32(ebx + 8);
    ecx = esi + -2;
    ebp = 1;
    eax = 1;
    ebp = ebp << LO8(ecx);
    edx = ebp + 1;
    (void)0; /* cmp esi, 1 - flags set for next jcc */
    if (CMP_G(esi, 1)) eax = edx; /* cmovg */
    eax = eax + eax;
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FCC4(); /* call 0x0045FCC4 */

loc_0045E3C5: ;
    if (TEST_Z(eax, eax)) { sub_0045E486(); return; } /* je: equal / zero */

loc_0045E3CD: ;
    if (CMP_L(esi, 2)) goto loc_0045E47C; /* jl: less (signed <) */

loc_0045E3D6: ;
    ecx = 0; /* xor self */
    edx = ebp;
    edx = (uint32_t)((int32_t)edx >> 1);
    MEM32(esp + 0x10) = edx;
    edx = 0; /* xor self */
    esi = ebp + -1;
    MEM32(esp + 0xC) = esi;
    edi = 1;
    if (CMP_LE(ebp, 1)) goto loc_0045E46A; /* jle: less or equal (signed <=) */

loc_0045E3F3: ;
    esi = edi + edi;
    esi = esi + esi;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ebp;

loc_0045E400: ;
    eax = MEM32(esp + 0x10);
    if (CMP_G(eax, ecx)) goto loc_0045E41C; /* jg: greater (signed >) */

loc_0045E408: ;
    /* nop */
    /* nop */

loc_0045E414: ;
    ecx = ecx - eax;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_LE(eax, ecx)) goto loc_0045E414; /* jle: less or equal (signed <=) */

loc_0045E41C: ;
    ecx = ecx + eax;
    if (CMP_GE(edi, ecx)) goto loc_0045E444; /* jge: greater or equal (signed >=) */

loc_0045E422: ;
    ebp = MEM32(esp + 4);
    eax = ecx + ecx;
    eax = eax + eax;
    MEM32(ebp + edx * 4) = esi;
    MEM32(ebp + edx * 4 + 4) = eax;
    edx = edx + 2;
    goto loc_0045E456;

    /* nop */
    /* nop */

loc_0045E444: ;
    if ((edx != 0)) goto loc_0045E456; /* jne: not equal / not zero */

loc_0045E446: ;
    ebp = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    MEM32(eax + ebp * 4) = esi;
    ebp--;
    MEM32(esp + 0xC) = ebp;

loc_0045E456: ;
    esi = esi + 4;
    edi++;
    eax = MEM32(esp + 8);
    if (CMP_L(edi, eax)) goto loc_0045E400; /* jl: less (signed <) */

loc_0045E462: ;
    eax = MEM32(esp + 4);
    ebp = MEM32(esp + 8);

loc_0045E46A: ;
    ecx = 0; /* xor self */
    MEM32(eax + edx * 4) = ecx;
    MEM32(eax + ebp * 4) = ecx;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045E47C: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045E494
 * Original: 0x0045E494 - 0x0045E529 (149 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045E494(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045E494: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x14;
    esi = MEM32(ebx + 8);
    ecx = esi + -2;
    ebp = 1;
    eax = 1;
    ebp = ebp << LO8(ecx);
    edx = ebp + 1;
    (void)0; /* cmp esi, 1 - flags set for next jcc */
    if (CMP_G(esi, 1)) eax = edx; /* cmovg */
    eax = eax + eax;
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FCC4(); /* call 0x0045FCC4 */

loc_0045E4C5: ;
    if (TEST_Z(eax, eax)) { sub_0045E529(); return; } /* je: equal / zero */

loc_0045E4C9: ;
    if (CMP_L(esi, 2)) goto loc_0045E51F; /* jl: less (signed <) */

loc_0045E4CE: ;
    ecx = 0; /* xor self */
    edi = ebp;
    edi = (uint32_t)((int32_t)edi >> 1);
    if (CMP_LE(ebp, 1)) goto loc_0045E50E; /* jle: less or equal (signed <=) */

loc_0045E4D9: ;
    edx = eax + 4;
    esi = eax + ebp * 4;
    MEM32(esp + 4) = ebp;

loc_0045E4E3: ;
    ebp = edi;
    if (CMP_G(edi, ecx)) goto loc_0045E4FC; /* jg: greater (signed >) */

loc_0045E4E9: ;
    /* nop */
    /* nop */

loc_0045E4F4: ;
    ecx = ecx - ebp;
    ebp = (uint32_t)((int32_t)ebp >> 1);
    if (CMP_LE(ebp, ecx)) goto loc_0045E4F4; /* jle: less or equal (signed <=) */

loc_0045E4FC: ;
    ecx = ecx + ebp;
    ebp = ecx + ecx;
    MEM32(edx) = ebp;
    edx = edx + 4;
    if (CMP_L(edx, esi)) goto loc_0045E4E3; /* jl: less (signed <) */

loc_0045E50A: ;
    ebp = MEM32(esp + 4);

loc_0045E50E: ;
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    MEM32(eax + ebp * 4) = edx;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045E51F: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045E544
 * Original: 0x0045E544 - 0x0045E5F7 (179 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045E544(void)
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

loc_0045E544: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x18;
    ecx = MEM32(ebx + 8);
    ebp = 1;
    ebp = ebp << LO8(ecx);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi >> 1);
    esi = esi >> 0x1E;
    esi = esi + ebp;
    esi = (uint32_t)((int32_t)esi >> 2);
    eax = esi * 4 + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_0045E572: ;
    if (TEST_Z(eax, eax)) goto loc_0045E5EC; /* je: equal / zero */

loc_0045E57A: ;
    fp_push(MEMD(0x883220)); /* fld double */
    edx = 0; /* xor self */
    ecx = ebp;
    MEM32(esp + 8) = ebp;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    ecx = ecx >> 0x1D;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    ebp = ebp + ecx;
    ebp = (uint32_t)((int32_t)ebp >> 3);
    if (TEST_S(ebp, ebp)) goto loc_0045E5BD; /* jl: less (signed <) */

loc_0045E59D: ;
    goto loc_0045E5A8;

    /* nop */
    /* nop */

loc_0045E5A4: ;
    MEMF(eax + edx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045E5A8: ;
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    edx++;
    if (CMP_LE(edx, ebp)) goto loc_0045E5A4; /* jle: less or equal (signed <=) */

loc_0045E5B9: ;
    MEMF(eax + edx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045E5BD: ;
    ebp++;
    if (CMP_G(ebp, esi)) { sub_0045E5F7(); return; } /* jg: greater (signed >) */

loc_0045E5C2: ;
    goto loc_0045E5C8;

loc_0045E5C4: ;
    MEMF(eax + ebp * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */

loc_0045E5C8: ;
    edx = esi;
    edx = edx - ebp;
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    ebp++;
    if (CMP_LE(ebp, esi)) goto loc_0045E5C4; /* jle: less or equal (signed <=) */

loc_0045E5DD: ;
    MEMF(eax + ebp * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    esp = esp + 0x18;
    POP32(esp, ebp);
    POP32(esp, esi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045E5EC: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    POP32(esp, esi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0045E604
 * Original: 0x0045E604 - 0x0045E824 (544 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045E604(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045E604: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x34;
    ebp = MEM32(ebx + 8);
    edi = MEM32(ebx + 0xC);
    esi = MEM32(ebx + 0x10);
    eax = 1;
    ecx = ebp;
    eax = eax << LO8(ecx);
    eax = eax + 0x80000000u;
    eax = eax + 0x80000000u + _cf; /* adc */
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = eax + eax;
    eax = eax + eax;
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_0045E63A: ;
    if (TEST_Z(eax, eax)) { sub_0045E824(); return; } /* je: equal / zero */

loc_0045E642: ;
    edx = eax;
    if (CMP_LE(ebp, 0xA)) goto loc_0045E810; /* jle: less or equal (signed <=) */

loc_0045E64D: ;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x24) = eax;

loc_0045E659: ;
    ebp = 1;
    edx = MEM32(esp + 0x28);
    ecx = edx;
    eax = 1;
    ebp = ebp << LO8(ecx);
    ecx = MEM32(ebx + 0x10);
    ecx = ecx - edx;
    edx = ebp;
    eax = eax << LO8(ecx);
    ecx = 0; /* xor self */
    edx = (uint32_t)((int32_t)edx >> 1);
    edx = edx >> 0x1E;
    edx = edx + ebp;
    edx = (uint32_t)((int32_t)edx >> 2);
    if (CMP_LE(edx & edx, 0)) goto loc_0045E7AA; /* jle: less or equal (signed <=) */

loc_0045E688: ;
    if (CMP_L(edx, 4)) goto loc_0045E81A; /* jl: less (signed <) */

loc_0045E691: ;
    ebp = edx + -4;
    edi = eax + eax;
    edi = edi + edi;
    MEM32(esp + 0x18) = ebp;
    ebp = eax + eax;
    ebp = ebp + ebp;
    ebp = (uint32_t)(-(int32_t)ebp);
    esi = MEM32(ebx + 0xC);
    ebp = ebp + esi;
    esi = esi + eax * 4;
    MEM32(esp + 0x10) = esi;
    esi = eax + eax;
    esi = esi + esi;
    esi = esi + esi;
    esi = (uint32_t)(-(int32_t)esi);
    esi = esi + MEM32(ebx + 0xC);
    MEM32(esp + 8) = esi;
    esi = MEM32(ebx + 0xC);
    esi = esi + eax * 8;
    MEM32(esp + 0x14) = esi;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    MEM32(esp + 0xC) = esi;
    eax = edi + eax * 8;
    esi = MEM32(ebx + 0xC);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ebp;
    ebp = MEM32(esp + 0x1C);
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0xC);
    /* nop */

loc_0045E6F4: ;
    eax = MEM32(esp + 4);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x20));
    edi = MEM32(eax + esi);
    MEM32(ebp + ecx * 8) = edi;
    edi = MEM32(esp + 0x30);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(edx + esi); /* subss */
    MEMF(ebp + ecx * 8 + 4) = xmm1; /* movss */
    edi = MEM32(edi + eax);
    MEM32(ebp + ecx * 8 + 8) = edi;
    edi = MEM32(esp + 0x10);
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - MEMF(edi + edx); /* subss */
    MEMF(ebp + ecx * 8 + 0xC) = xmm2; /* movss */
    edi = MEM32(esp + 8);
    eax = MEM32(edi + eax);
    MEM32(ebp + ecx * 8 + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    xmm3 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 - MEMF(eax + edx); /* subss */
    MEMF(ebp + ecx * 8 + 0x14) = xmm3; /* movss */
    ecx = ecx + 3;
    eax = MEM32(esp + 0x18);
    edx = edx + MEM32(esp + 0x2C);
    if (CMP_LE(ecx, eax)) goto loc_0045E6F4; /* jle: less or equal (signed <=) */

loc_0045E75D: ;
    MEM32(esp + 0x1C) = ebp;
    edi = MEM32(esp + 0x20);
    edx = MEM32(esp + 4);

loc_0045E769: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = edi;
    ebp = MEM32(ebx + 0xC);
    /* nop */
    /* nop */

loc_0045E784: ;
    edi = edx;
    edi = edi - ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x20));
    edi = MEM32(edi + ebp);
    MEM32(eax + ecx * 8) = edi;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi + ebp); /* subss */
    MEMF(eax + ecx * 8 + 4) = xmm0; /* movss */
    ecx++;
    esi = esi + MEM32(esp + 0x20);
    if (CMP_L(ecx, edx)) goto loc_0045E784; /* jl: less (signed <) */

loc_0045E7AA: ;
    esi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0045E7FA; /* jle: less or equal (signed <=) */

loc_0045E7B0: ;
    MEM32(esp + 4) = edx;
    ebp = MEM32(esp + 0x1C);
    /* nop */
    /* nop */

loc_0045E7C4: ;
    eax = MEM32(ebp + 4);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 8);
    esi = esi + 4;
    MEM32(ebp + 4) = edi;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + 8) = edi;
    edi = MEM32(ebp + 0x18);
    MEM32(ebp + 0xC) = edi;
    edi = MEM32(esp + 4);
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0x14) = edx;
    MEM32(ebp + 0x18) = ecx;
    ebp = ebp + 0x20;
    if (CMP_L(esi, edi)) goto loc_0045E7C4; /* jl: less (signed <) */

loc_0045E7F6: ;
    MEM32(esp + 0x1C) = ebp;

loc_0045E7FA: ;
    eax = MEM32(esp + 0x28);
    eax--;
    (void)0; /* cmp eax, 0xA - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (CMP_G(eax, 0xA)) goto loc_0045E659; /* jg: greater (signed >) */

loc_0045E80C: ;
    eax = MEM32(esp + 0x24);

loc_0045E810: ;
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045E81A: ;
    eax = eax + eax;
    edi = eax + eax;
    goto loc_0045E769;

}

/**
 * sub_0045E834
 * Original: 0x0045E834 - 0x0045E966 (306 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045E834(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045E834: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x34;
    edi = MEM32(ebx + 8);
    esi = MEM32(ebx + 0xC);
    ebp = MEM32(ebx + 0x10);
    ebp = (uint32_t)((int32_t)ebp >> 1);
    if (CMP_NE(ebp, 0x400)) goto loc_0045E8E2; /* jne: not equal / not zero */

loc_0045E857: ;
    MEM32(esp) = esi;
    eax = MEM32(edi + 0x20);
    edx = MEM32(ebx + 0x18);
    MEM32(esp + 4) = ebp;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00461CE0(); /* call 0x00461CE0 */

loc_0045E879: ;
    eax = MEM32(edi + 8);
    if (TEST_Z(eax, eax)) goto loc_0045E896; /* je: equal / zero */

loc_0045E880: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(ebx + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_0045E896: ;
    eax = esi + ebp * 8;
    edx = MEM32(edi + 0x20);
    ecx = MEM32(ebx + 0x18);
    MEM32(esp + 0x24) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ebp;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00461CE0(); /* call 0x00461CE0 */

loc_0045E8BF: ;
    eax = MEM32(edi + 8);
    if (TEST_Z(eax, eax)) goto loc_0045E93F; /* je: equal / zero */

loc_0045E8C6: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_0045E8E0: ;
    goto loc_0045E93F;

loc_0045E8E2: ;
    eax = MEM32(ebx + 0x10);
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = MEM32(ebx + 0x14);
    ecx = edx + eax * 8;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = ebp;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0045E834(); /* call 0x0045E834 */

loc_0045E915: ;
    eax = esi + ebp * 8;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 0x18);
    MEM32(esp) = edi;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ebp;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0045E834(); /* call 0x0045E834 */

loc_0045E93F: ;
    MEM32(esp) = esi;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x14);
    MEM32(esp + 4) = eax;
    ecx = MEM32(ebx + 0x1C);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0); sub_0046C560(); /* call 0x0046C560 */

loc_0045E95C: ;
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045E974
 * Original: 0x0045E974 - 0x0045EAA6 (306 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045E974(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045E974: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x34;
    edi = MEM32(ebx + 8);
    esi = MEM32(ebx + 0xC);
    ebp = MEM32(ebx + 0x10);
    ebp = (uint32_t)((int32_t)ebp >> 1);
    if (CMP_NE(ebp, 0x400)) goto loc_0045EA22; /* jne: not equal / not zero */

loc_0045E997: ;
    MEM32(esp) = esi;
    eax = MEM32(edi + 0x20);
    edx = MEM32(ebx + 0x18);
    MEM32(esp + 4) = ebp;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00463400(); /* call 0x00463400 */

loc_0045E9B9: ;
    eax = MEM32(edi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0045E9D6; /* je: equal / zero */

loc_0045E9C0: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(ebx + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_0045E9D6: ;
    eax = esi + ebp * 8;
    edx = MEM32(edi + 0x20);
    ecx = MEM32(ebx + 0x18);
    MEM32(esp + 0x24) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ebp;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00463400(); /* call 0x00463400 */

loc_0045E9FF: ;
    eax = MEM32(edi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0045EA7F; /* je: equal / zero */

loc_0045EA06: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 0x10);
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_0045EA20: ;
    goto loc_0045EA7F;

loc_0045EA22: ;
    eax = MEM32(ebx + 0x10);
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = MEM32(ebx + 0x14);
    ecx = edx + eax * 8;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = ebp;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0045E974(); /* call 0x0045E974 */

loc_0045EA55: ;
    eax = esi + ebp * 8;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 0x18);
    MEM32(esp) = edi;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ebp;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0045E974(); /* call 0x0045E974 */

loc_0045EA7F: ;
    MEM32(esp) = esi;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x14);
    MEM32(esp + 4) = eax;
    ecx = MEM32(ebx + 0x1C);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0); sub_0046C9A0(); /* call 0x0046C9A0 */

loc_0045EA9C: ;
    esp = esp + 0x34;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045EAB4
 * Original: 0x0045EAB4 - 0x0045EAF5 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045EAB4(void)
{

loc_0045EAB4: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    esi = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0x14);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0); sub_0045E834(); /* call 0x0045E834 */

loc_0045EAED: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045EB04
 * Original: 0x0045EB04 - 0x0045EB45 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045EB04(void)
{

loc_0045EB04: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    esi = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0x14);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0); sub_0045E974(); /* call 0x0045E974 */

loc_0045EB3D: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045EB54
 * Original: 0x0045EB54 - 0x0045F03D (1257 bytes, 381 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045EB54(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045EB54: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x74;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(esi * 4 + 0x65543C);
    esi = esi - edi;
    if (CMP_LE(esi, 0xA)) goto loc_0045EC03; /* jle: less or equal (signed <=) */

loc_0045EB75: ;
    eax = MEM32(esi * 4 + 0x65543C);
    if (TEST_NZ(eax, eax)) goto loc_0045EBCE; /* jne: not equal / not zero */

loc_0045EB80: ;
    MEM32(esp) = esi;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_0045E604(); /* call 0x0045E604 */

loc_0045EB96: ;
    edx = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + 0x24) = eax;
    if (TEST_Z(eax, eax)) goto loc_0045F02E; /* je: equal / zero */

loc_0045EBA4: ;
    MEM32(esp) = 0xA;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_0045F7A4(); /* call 0x0045F7A4 */

loc_0045EBBE: ;
    edx = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + 0x20) = eax;
    if (TEST_Z(eax, eax)) goto loc_0045F02E; /* je: equal / zero */

loc_0045EBCC: ;
    goto loc_0045EC27;

loc_0045EBCE: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x10);
    ebp = MEM32(ebx + 0x14);
    MEM32(esp) = eax;
    eax = MEM32(ebx + 0x18);
    eax = eax + 1;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_0045EB54(); /* call 0x0045EB54 */

loc_0045EBF5: ;
    if (TEST_Z(eax, eax)) goto loc_0045EC27; /* je: equal / zero */

loc_0045EBF9: ;
    esp = esp + 0x74;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045EC03: ;
    MEM32(esp) = esi;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_0045F7A4(); /* call 0x0045F7A4 */

loc_0045EC19: ;
    edx = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + 0x20) = eax;
    if (TEST_Z(eax, eax)) goto loc_0045F02E; /* je: equal / zero */

loc_0045EC27: ;
    MEM32(esp) = edi;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_0045F7A4(); /* call 0x0045F7A4 */

loc_0045EC3D: ;
    ebp = MEM32(ebx + 0x18);
    edx = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + ebp * 4 + 0x34) = eax;
    if (TEST_Z(eax, eax)) goto loc_0045F02E; /* je: equal / zero */

loc_0045EC4F: ;
    ebp = 1;
    ecx = MEM32(ebx + 0xC);
    eax = 1;
    ebp = ebp << LO8(ecx);
    ecx = esi;
    edx = 1;
    eax = eax << LO8(ecx);
    ecx = edi;
    MEM32(esp + 0x3C) = eax;
    esi = ebp + ebp;
    esi = esi + esi;
    edx = edx << LO8(ecx);
    esi = esi + esi;
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_0045EC81: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0045F02E; /* je: equal / zero */

loc_0045EC8B: ;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(ebx + 8);
    MEM32(edx + eax * 4 + 0x40) = esi;
    edx = MEM32(esp + 0x40);
    edx = edx << 5;
    MEM32(esp + 0x4C) = edx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_0045ECA6: ;
    MEM32(esp + 0x50) = eax;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_0045F02E; /* je: equal / zero */

loc_0045ECB4: ;
    MEM32(esp) = edi;
    PUSH32(esp, 0); sub_0045E394(); /* call 0x0045E394 */

loc_0045ECBC: ;
    MEM32(esp + 0x54) = eax;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_0045F024; /* je: equal / zero */

loc_0045ECCA: ;
    edi = 1;
    ecx = MEM32(ebx + 0x14);
    ecx = ecx - MEM32(ebx + 0xC);
    edi = edi << LO8(ecx);
    edx = 0; /* xor self */
    ecx = MEM32(esp + 0x3C);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0045EF9A; /* jle: less or equal (signed <=) */

loc_0045ECE5: ;
    ecx = MEM32(esp + 0x40);
    eax = ecx + ecx;
    eax = eax + eax;
    eax = eax + eax;
    edi = edi + edi;
    edi = edi + edi;
    MEM32(esp + 0x30) = eax;
    eax = ecx + ecx;
    ecx = ecx + ecx * 2;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = ecx;
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    ecx = ecx >> 0x1E;
    ecx = ecx + ebp;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    MEM32(esp + 0x44) = ecx;
    ecx = ebp;
    ecx = ecx + 0x80000000u;
    ecx = ecx + 0x80000000u + _cf; /* adc */
    ecx = (uint32_t)((int32_t)ecx >> 1);
    MEM32(esp + 0x34) = ecx;
    ecx = ebp + ebp * 2;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = eax >> 0x1E;
    eax = eax + ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x64) = edi;
    MEM32(esp + 0x24) = ebp;

loc_0045ED4A: ;
    esi = 0; /* xor self */
    ebp = 0; /* xor self */
    MEM32(esp + 0x48) = edx;

loc_0045ED52: ;
    ecx = 0; /* xor self */
    eax = MEM32(esp + 0x40);
    if (CMP_LE(eax & eax, 0)) goto loc_0045F018; /* jle: less or equal (signed <=) */

loc_0045ED60: ;
    eax = MEM32(esp + 0x50);
    edi = eax + ebp;
    edx = MEM32(esp + 0x48);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esp + 0x6C) = edi;
    MEM32(esp + 0x58) = ebp;
    MEM32(esp + 0x60) = esi;
    /* nop */
    /* nop */

loc_0045ED84: ;
    ebp = edx + eax;
    esi = MEM32(esp + 0x44);
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    MEM32(esp + 0x70) = ebp;
    if (CMP_GE(ebp, esi)) goto loc_0045EDD4; /* jge: greater or equal (signed >=) */

loc_0045ED93: ;
    edi = esi;
    esi = ebp;
    edi = edi - esi;
    ebp = MEM32(ebx + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x64));
    edi = MEM32(edi + ebp);
    ebp = MEM32(esp + 0x6C);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x64));
    MEM32(ebp + ecx * 8) = edi;
    xmm0 = 0.0f; /* xorps self = zero */
    edi = MEM32(ebx + 0x10);
    xmm0 = xmm0 - MEMF(esi + edi); /* subss */
    MEMF(ebp + ecx * 8 + 4) = xmm0; /* movss */
    goto loc_0045EEB4;

    /* nop */
    /* nop */

loc_0045EDD4: ;
    esi = MEM32(esp + 0x34);
    if (CMP_GE(ebp, esi)) goto loc_0045EE24; /* jge: greater or equal (signed >=) */

loc_0045EDDC: ;
    esi = ebp;
    edi = MEM32(ebx + 0x10);
    esi = esi - MEM32(esp + 0x44);
    ebp = (uint32_t)(-(int32_t)ebp);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x64));
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi + edi); /* subss */
    edi = MEM32(esp + 0x6C);
    MEMF(edi + ecx * 8) = xmm0; /* movss */
    esi = MEM32(ebx + 0x10);
    ebp = ebp + MEM32(esp + 0x34);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x64));
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(ebp + esi); /* subss */
    MEMF(edi + ecx * 8 + 4) = xmm1; /* movss */
    goto loc_0045EEB4;

    /* nop */

loc_0045EE24: ;
    ebp = ecx + ecx;
    edi = MEM32(esp + 0x38);
    esi = MEM32(esp + 0x70);
    MEM32(esp + 0x68) = ebp;
    if (CMP_GE(esi, edi)) goto loc_0045EE74; /* jge: greater or equal (signed >=) */

loc_0045EE37: ;
    edi = edi - esi;
    ebp = MEM32(ebx + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x64));
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(edi + ebp); /* subss */
    ebp = MEM32(esp + 0x68);
    edi = MEM32(esp + 0x6C);
    MEMF(edi + ebp * 4) = xmm0; /* movss */
    esi = esi - MEM32(esp + 0x34);
    edi = MEM32(ebx + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x64));
    esi = MEM32(esi + edi);
    edi = MEM32(esp + 0x6C);
    MEM32(edi + ebp * 4 + 4) = esi;
    goto loc_0045EEB4;

    /* nop */
    /* nop */

loc_0045EE74: ;
    ebp = esi;
    esi = MEM32(ebx + 0x10);
    ebp = ebp - MEM32(esp + 0x38);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x64));
    edi = MEM32(ebp + esi);
    esi = MEM32(esp + 0x68);
    ebp = MEM32(esp + 0x6C);
    MEM32(ebp + esi * 4) = edi;
    ebp = MEM32(esp + 0x70);
    ebp = (uint32_t)(-(int32_t)ebp);
    ebp = ebp + MEM32(esp + 0x24);
    esi = MEM32(ebx + 0x10);
    edi = MEM32(esp + 0x68);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x64));
    ebp = MEM32(ebp + esi);
    esi = MEM32(esp + 0x6C);
    MEM32(esi + edi * 4 + 4) = ebp;

loc_0045EEB4: ;
    edx = edx + MEM32(esp + 0x48);
    ecx++;
    ebp = MEM32(esp + 0x40);
    eax = eax + MEM32(esp + 0x60);
    if (CMP_L(ecx, ebp)) goto loc_0045ED84; /* jl: less (signed <) */

loc_0045EEC9: ;
    edi = MEM32(esp + 0x6C);
    ebp = MEM32(esp + 0x58);
    esi = MEM32(esp + 0x60);

loc_0045EED5: ;
    MEM32(esp) = edi;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x54);
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_00460530(); /* call 0x00460530 */

loc_0045EEED: ;
    ebp = ebp + MEM32(esp + 0x30);
    esi++;
    if (CMP_L(esi, 4)) goto loc_0045ED52; /* jl: less (signed <) */

loc_0045EEFB: ;
    edx = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    eax = MEM32(esp + 0x40);
    if (CMP_LE(eax & eax, 0)) goto loc_0045EF87; /* jle: less or equal (signed <=) */

loc_0045EF0D: ;
    eax = ecx + eax;
    ebp = MEM32(esp + 0x2C);
    edi = ecx + ebp;
    ebp = MEM32(esp + 0x28);
    ebp = ecx + ebp;
    esi = MEM32(esp + 0x50);
    eax = esi + eax * 8;
    edi = esi + edi * 8;
    ebp = esi + ebp * 8;
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x5C);
    /* nop */

loc_0045EF34: ;
    esi = MEM32(esp + 0x50);
    esi = MEM32(esi + ecx * 8);
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x50);
    esi = MEM32(esi + ecx * 8 + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax);
    ecx++;
    MEM32(edx + 8) = esi;
    esi = MEM32(eax + 4);
    eax = eax + 8;
    MEM32(edx + 0xC) = esi;
    esi = MEM32(edi);
    MEM32(edx + 0x10) = esi;
    esi = MEM32(edi + 4);
    edi = edi + 8;
    MEM32(edx + 0x14) = esi;
    esi = MEM32(ebp);
    MEM32(edx + 0x18) = esi;
    esi = MEM32(ebp + 4);
    ebp = ebp + 8;
    MEM32(edx + 0x1C) = esi;
    edx = edx + 0x20;
    esi = MEM32(esp + 0x40);
    if (CMP_L(ecx, esi)) goto loc_0045EF34; /* jl: less (signed <) */

loc_0045EF7F: ;
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0x48);

loc_0045EF87: ;
    edx = edx + 4;
    eax = MEM32(esp + 0x3C);
    if (CMP_L(edx, eax)) goto loc_0045ED4A; /* jl: less (signed <) */

loc_0045EF96: ;
    ebp = MEM32(esp + 0x24);

loc_0045EF9A: ;
    edx = MEM32(ebx + 0x18);
    eax = MEM32(ebx + 8);
    edi = MEM32(eax + edx * 4 + 0x40);
    esi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0045EFE6; /* jle: less or equal (signed <=) */

loc_0045EFAA: ;
    MEM32(esp + 0x24) = ebp;
    /* nop */

loc_0045EFB4: ;
    eax = MEM32(edi + 4);
    edx = MEM32(edi + 0xC);
    ecx = MEM32(edi + 0x14);
    ebp = MEM32(edi + 8);
    esi = esi + 4;
    MEM32(edi + 4) = ebp;
    ebp = MEM32(edi + 0x10);
    MEM32(edi + 8) = ebp;
    ebp = MEM32(edi + 0x18);
    MEM32(edi + 0xC) = ebp;
    ebp = MEM32(esp + 0x24);
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = ecx;
    edi = edi + 0x20;
    if (CMP_L(esi, ebp)) goto loc_0045EFB4; /* jl: less (signed <) */

loc_0045EFE6: ;
    eax = MEM32(esp + 0x4C);
    edx = MEM32(ebx + 8);
    if (CMP_BE(eax, MEM32(edx + 0x18))) goto loc_0045EFF8; /* jbe: below or equal (unsigned <=) */

loc_0045EFF2: ;
    edx = MEM32(ebx + 8);
    MEM32(edx + 0x18) = eax;

loc_0045EFF8: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_0045F002: ;
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_0045F00C: ;
    eax = 0; /* xor self */
    esp = esp + 0x74;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045F018: ;
    eax = MEM32(esp + 0x50);
    edi = eax + ebp;
    goto loc_0045EED5;

loc_0045F024: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FD04(); /* call 0x0045FD04 */

loc_0045F02E: ;
    eax = 0xFFFFFFF7u;
    esp = esp + 0x74;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045F044
 * Original: 0x0045F044 - 0x0045F0CB (135 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045F044(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045F044: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x24;
    edi = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    esi = MEM32(ebx + 0x10);
    ebp = MEM32(ebx + 0x14);
    eax = MEM32(edx * 4 + 0x65543C);
    if (TEST_NZ(eax, eax)) goto loc_0045F0A5; /* jne: not equal / not zero */

loc_0045F067: ;
    MEM32(esp) = edx;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = ebp;
    PUSH32(esp, 0); sub_0045E604(); /* call 0x0045E604 */

loc_0045F077: ;
    MEM32(edi + 0x24) = eax;
    if (TEST_Z(eax, eax)) { sub_0045F0CB(); return; } /* je: equal / zero */

loc_0045F07E: ;
    MEM32(esp) = 0xA;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = ebp;
    PUSH32(esp, 0); sub_0045F7A4(); /* call 0x0045F7A4 */

loc_0045F092: ;
    MEM32(edi + 0x20) = eax;
    if (TEST_Z(eax, eax)) { sub_0045F0CB(); return; } /* je: equal / zero */

loc_0045F099: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045F0A5: ;
    MEM32(esp) = edi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_0045EB54(); /* call 0x0045EB54 */

loc_0045F0C1: ;
    esp = esp + 0x24;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045F0E4
 * Original: 0x0045F0E4 - 0x0045F3C5 (737 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045F0E4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045F0E4: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x54;
    ebp = MEM32(ebx + 0xC);
    eax = MEM32(ebx + 0x10);
    edx = MEM32(eax * 4 + 0x65543C);
    eax = eax - edx;
    esi = 1;
    ecx = eax;
    edi = 1;
    esi = esi << LO8(ecx);
    ecx = edx;
    edx = ebp;
    edi = edi << LO8(ecx);
    ebp = 0; /* xor self */
    if (CMP_G(eax, 0xA)) goto loc_0045F18F; /* jg: greater (signed >) */

loc_0045F11A: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0045F239; /* jle: less or equal (signed <=) */

loc_0045F122: ;
    MEM32(esp + 0x24) = edi;
    edi = edx;
    /* nop */
    /* nop */

loc_0045F134: ;
    MEM32(esp) = edi;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 4) = esi;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00461CE0(); /* call 0x00461CE0 */

loc_0045F159: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0045F17C; /* je: equal / zero */

loc_0045F163: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x10);
    eax = esi + esi;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_0045F17C: ;
    edi = edi + esi * 8;
    ebp++;
    eax = MEM32(esp + 0x24);
    if (CMP_L(ebp, eax)) goto loc_0045F134; /* jl: less (signed <) */

loc_0045F188: ;
    edi = eax;
    goto loc_0045F239;

loc_0045F18F: ;
    ecx = MEM32(eax * 4 + 0x65543C);
    if (TEST_NZ(ecx, ecx)) goto loc_0045F1ED; /* jne: not equal / not zero */

loc_0045F19A: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0045F239; /* jle: less or equal (signed <=) */

loc_0045F1A2: ;
    MEM32(esp + 0x24) = edi;
    edi = edx;
    /* nop */
    /* nop */

loc_0045F1B4: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x24);
    MEM32(esp) = eax;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0045E834(); /* call 0x0045E834 */

loc_0045F1DD: ;
    edi = edi + esi * 8;
    ebp++;
    eax = MEM32(esp + 0x24);
    if (CMP_L(ebp, eax)) goto loc_0045F1B4; /* jl: less (signed <) */

loc_0045F1E9: ;
    edi = eax;
    goto loc_0045F239;

loc_0045F1ED: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0045F239; /* jle: less or equal (signed <=) */

loc_0045F1F1: ;
    ecx = MEM32(ebx + 0x14);
    ecx = ecx + 1;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = eax;
    edi = edx;

loc_0045F205: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_0045F0E4(); /* call 0x0045F0E4 */

loc_0045F22B: ;
    edi = edi + esi * 8;
    ebp++;
    eax = MEM32(esp + 0x24);
    if (CMP_L(ebp, eax)) goto loc_0045F205; /* jl: less (signed <) */

loc_0045F237: ;
    edi = eax;

loc_0045F239: ;
    ecx = MEM32(ebx + 8);
    ebp = MEM32(ebx + 0x14);
    eax = MEM32(ecx + ebp * 4 + 0x40);
    MEM32(esp + 0x3C) = eax;
    edx = MEM32(ebx + 0x18);
    ebp = edx + edi * 8;
    ecx = ebp + edi * 8;
    eax = ecx + edi * 8;
    edx = 0; /* xor self */
    MEM32(esp + 0x40) = eax;
    if (CMP_LE(esi & esi, 0)) goto loc_0045F3BB; /* jle: less or equal (signed <=) */

loc_0045F262: ;
    MEM32(esp + 0x34) = ecx;
    eax = MEM32(ebx + 0x14);
    (void)0; /* cmp eax, 0 - flags set for next jcc */
    ecx = 0;
    eax = 1;
    if (CMP_EQ(eax, 0)) ecx = eax; /* cmove */
    eax = edi;
    eax = eax << 5;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx + edx * 8;
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x30) = esi;
    ebp = MEM32(esp + 0x44);
    esi = MEM32(ebx + 8);
    esi = esi;
    /* nop */

loc_0045F2B4: ;
    MEM32(esp) = ebp;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 4) = ecx;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_0046B750(); /* call 0x0046B750 */

loc_0045F2DF: ;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esi + ecx * 4 + 0x34);
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_00461CE0(); /* call 0x00461CE0 */

loc_0045F303: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esi + ecx * 4 + 0x34);
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_00461CE0(); /* call 0x00461CE0 */

loc_0045F328: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esi + ecx * 4 + 0x34);
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_00461CE0(); /* call 0x00461CE0 */

loc_0045F34D: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esi + ecx * 4 + 0x34);
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_00461CE0(); /* call 0x00461CE0 */

loc_0045F372: ;
    MEM32(esp) = ebp;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(esp + 0x30);
    MEM32(esp + 4) = ecx;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_0046C2C0(); /* call 0x0046C2C0 */

loc_0045F395: ;
    ecx = MEM32(esp + 0x3C);
    ebp = ebp + 0x20;
    edx = MEM32(esp + 0x2C);
    ecx = ecx + MEM32(esp + 0x38);
    edx = edx + 4;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x3C) = ecx;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = edx;
    if (CMP_L(edx, eax)) goto loc_0045F2B4; /* jl: less (signed <) */

loc_0045F3BB: ;
    esp = esp + 0x54;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045F3D4
 * Original: 0x0045F3D4 - 0x0045F41A (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045F3D4(void)
{
    int _flags = 0; /* fallback flag var */

loc_0045F3D4: ;
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
    if (TEST_NZ(edx, edx)) { sub_0045F41A(); return; } /* jne: not equal / not zero */

loc_0045F3F6: ;
    MEM32(esp) = esi;
    edx = 1;
    MEM32(esp + 4) = edi;
    edx = edx << LO8(ecx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_0045EAB4(); /* call 0x0045EAB4 */

loc_0045F411: ;
    esp = esp + 0x28;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045F444
 * Original: 0x0045F444 - 0x0045F725 (737 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045F444(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045F444: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x54;
    ebp = MEM32(ebx + 0xC);
    eax = MEM32(ebx + 0x10);
    edx = MEM32(eax * 4 + 0x65543C);
    eax = eax - edx;
    esi = 1;
    ecx = eax;
    edi = 1;
    esi = esi << LO8(ecx);
    ecx = edx;
    edx = ebp;
    edi = edi << LO8(ecx);
    ebp = 0; /* xor self */
    if (CMP_G(eax, 0xA)) goto loc_0045F4EF; /* jg: greater (signed >) */

loc_0045F47A: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0045F599; /* jle: less or equal (signed <=) */

loc_0045F482: ;
    MEM32(esp + 0x24) = edi;
    edi = edx;
    /* nop */
    /* nop */

loc_0045F494: ;
    MEM32(esp) = edi;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 4) = esi;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00463400(); /* call 0x00463400 */

loc_0045F4B9: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_0045F4DC; /* je: equal / zero */

loc_0045F4C3: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x10);
    eax = esi + esi;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_00466CD0(); /* call 0x00466CD0 */

loc_0045F4DC: ;
    edi = edi + esi * 8;
    ebp++;
    eax = MEM32(esp + 0x24);
    if (CMP_L(ebp, eax)) goto loc_0045F494; /* jl: less (signed <) */

loc_0045F4E8: ;
    edi = eax;
    goto loc_0045F599;

loc_0045F4EF: ;
    ecx = MEM32(eax * 4 + 0x65543C);
    if (TEST_NZ(ecx, ecx)) goto loc_0045F54D; /* jne: not equal / not zero */

loc_0045F4FA: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0045F599; /* jle: less or equal (signed <=) */

loc_0045F502: ;
    MEM32(esp + 0x24) = edi;
    edi = edx;
    /* nop */
    /* nop */

loc_0045F514: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x24);
    MEM32(esp) = eax;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0045E974(); /* call 0x0045E974 */

loc_0045F53D: ;
    edi = edi + esi * 8;
    ebp++;
    eax = MEM32(esp + 0x24);
    if (CMP_L(ebp, eax)) goto loc_0045F514; /* jl: less (signed <) */

loc_0045F549: ;
    edi = eax;
    goto loc_0045F599;

loc_0045F54D: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0045F599; /* jle: less or equal (signed <=) */

loc_0045F551: ;
    ecx = MEM32(ebx + 0x14);
    ecx = ecx + 1;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = eax;
    edi = edx;

loc_0045F565: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_0045F444(); /* call 0x0045F444 */

loc_0045F58B: ;
    edi = edi + esi * 8;
    ebp++;
    eax = MEM32(esp + 0x24);
    if (CMP_L(ebp, eax)) goto loc_0045F565; /* jl: less (signed <) */

loc_0045F597: ;
    edi = eax;

loc_0045F599: ;
    ecx = MEM32(ebx + 8);
    ebp = MEM32(ebx + 0x14);
    eax = MEM32(ecx + ebp * 4 + 0x40);
    MEM32(esp + 0x3C) = eax;
    edx = MEM32(ebx + 0x18);
    ebp = edx + edi * 8;
    ecx = ebp + edi * 8;
    eax = ecx + edi * 8;
    edx = 0; /* xor self */
    MEM32(esp + 0x40) = eax;
    if (CMP_LE(esi & esi, 0)) goto loc_0045F71B; /* jle: less or equal (signed <=) */

loc_0045F5C2: ;
    MEM32(esp + 0x34) = ecx;
    eax = MEM32(ebx + 0x14);
    (void)0; /* cmp eax, 0 - flags set for next jcc */
    ecx = 0;
    eax = 1;
    if (CMP_EQ(eax, 0)) ecx = eax; /* cmove */
    eax = edi;
    eax = eax << 5;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx + edx * 8;
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x30) = esi;
    ebp = MEM32(esp + 0x44);
    esi = MEM32(ebx + 8);
    esi = esi;
    /* nop */

loc_0045F614: ;
    MEM32(esp) = ebp;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 4) = ecx;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_0046B750(); /* call 0x0046B750 */

loc_0045F63F: ;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esi + ecx * 4 + 0x34);
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_00463400(); /* call 0x00463400 */

loc_0045F663: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esi + ecx * 4 + 0x34);
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_00463400(); /* call 0x00463400 */

loc_0045F688: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esi + ecx * 4 + 0x34);
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_00463400(); /* call 0x00463400 */

loc_0045F6AD: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esi + ecx * 4 + 0x34);
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_00463400(); /* call 0x00463400 */

loc_0045F6D2: ;
    MEM32(esp) = ebp;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(esp + 0x30);
    MEM32(esp + 4) = ecx;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_0046C2C0(); /* call 0x0046C2C0 */

loc_0045F6F5: ;
    ecx = MEM32(esp + 0x3C);
    ebp = ebp + 0x20;
    edx = MEM32(esp + 0x2C);
    ecx = ecx + MEM32(esp + 0x38);
    edx = edx + 4;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x3C) = ecx;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = edx;
    if (CMP_L(edx, eax)) goto loc_0045F614; /* jl: less (signed <) */

loc_0045F71B: ;
    esp = esp + 0x54;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
