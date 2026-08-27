/**
 * Burnout 3 - Recompiled code chunk 54
 * Functions: 250 (0x0047C0B9 - 0x004833A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0047C0B9
 * Original: 0x0047C0B9 - 0x0047C0CB (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C0B9(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047C0B9: ;
    PUSH32(esp, 0); sub_0047C0CB(); /* call 0x0047C0CB */

loc_0047C0BE: ;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    if ((HI8(ebx) != 0)) goto loc_0047C0CA; /* jne: not equal / not zero */

loc_0047C0C4: ;
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* faddp */

loc_0047C0CA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047C0CB
 * Original: 0x0047C0CB - 0x0047C0DC (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C0CB(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0047C0CB: ;
    /* fld st(0) */
    fp_push(1.0); /* fld1 */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    if ((HI8(ebx) != 0)) goto loc_0047C0D9; /* jne: not equal / not zero */

loc_0047C0D3: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */

loc_0047C0D9: ;
    /* FPU: fdivrp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047C0DC
 * Original: 0x0047C0DC - 0x0047C118 (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C0DC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047C0DC: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x5874F8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047C0E8: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_0047C0ED: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0)) goto loc_0047C10C; /* je: equal / zero */

loc_0047C0F3: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_0047C0FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x68), _icall_esp); /* indirect call */
    }

loc_0047C0FF: ;
    goto loc_0047C108;

    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

loc_0047C108: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_0047C10C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC0000144u);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561214), _icall_esp); /* indirect call */
    }

loc_0047C117: ;
    __debugbreak(); /* int3 */

}

/**
 * sub_0047C118
 * Original: 0x0047C118 - 0x0047C145 (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C118(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047C118: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x587508);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047C124: ;
    eax = MEM32(0x655E98);
    if (TEST_Z(eax, eax)) goto loc_0047C140; /* je: equal / zero */

loc_0047C12D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0047C133: ;
    goto loc_0047C13C;

    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

loc_0047C13C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_0047C140: ;
    g_seh_ebp = ebp; sub_0047C0DC(); return; /* tail jmp 0x0047C0DC */

}

/**
 * sub_0047C150
 * Original: 0x0047C150 - 0x0047C19C (76 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047C150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 4;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xC;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + 0x10);
    ebp = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_00470C45(); /* call 0x00470C45 */

loc_0047C173: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0047C177: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ebx = ebp;
    POP32(esp, ebp);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebp);
    ebp = ebx;
    if (CMP_NE(ecx, 0x100)) goto loc_0047C18F; /* jne: not equal / not zero */

loc_0047C18A: ;
    ecx = 2;

loc_0047C18F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470C45(); /* call 0x00470C45 */

loc_0047C195: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0047C1E2
 * Original: 0x0047C1E2 - 0x0047C1F4 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C1E2(void)
{

loc_0047C1E2: ;
    PUSH32(esp, 0x47C19C);
    PUSH32(esp, 0); sub_0042DEAB(); /* call 0x0042DEAB */

loc_0047C1EC: ;
    MEM32(0x75FA10) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0047C200
 * Original: 0x0047C200 - 0x0047C21B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C200(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C200: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(esp + 0xC));
    esi++;
    PUSH32(esp, 0); sub_0042C843(); /* call 0x0042C843 */

loc_0047C211: ;
    if (TEST_Z(eax, eax)) goto loc_0047C217; /* je: equal / zero */

loc_0047C215: ;
    esi = 0; /* xor self */

loc_0047C217: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047C21B
 * Original: 0x0047C21B - 0x0047C236 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C21B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C21B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(esp + 0xC));
    esi++;
    PUSH32(esp, 0); sub_0042C8A8(); /* call 0x0042C8A8 */

loc_0047C22C: ;
    if (TEST_Z(eax, eax)) goto loc_0047C232; /* je: equal / zero */

loc_0047C230: ;
    esi = 0; /* xor self */

loc_0047C232: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047C236
 * Original: 0x0047C236 - 0x0047C24D (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C236(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C236: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = 0; /* xor self */
    esi++;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0047C243: ;
    if (TEST_Z(eax, eax)) goto loc_0047C249; /* je: equal / zero */

loc_0047C247: ;
    esi = 0; /* xor self */

loc_0047C249: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047C24D
 * Original: 0x0047C24D - 0x0047C279 (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C24D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C24D: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */

loc_0047C253: ;
    if (CMP_EQ(ecx, MEM32(eax * 8 + 0x655F98))) goto loc_0047C262; /* je: equal / zero */

loc_0047C25C: ;
    eax++;
    if (CMP_B(eax, 0x13)) goto loc_0047C253; /* jb: below (unsigned <) */

loc_0047C262: ;
    eax = eax << 3;
    if (CMP_NE(ecx, MEM32(eax + 0x655F98))) goto loc_0047C278; /* jne: not equal / not zero */

loc_0047C26D: ;
    PUSH32(esp, MEM32(eax + 0x655F9C));
    PUSH32(esp, 0); sub_0042C811(); /* call 0x0042C811 */

loc_0047C278: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047C279
 * Original: 0x0047C279 - 0x0047C29B (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C279(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C279: ;
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_0047C24D(); /* call 0x0047C24D */

loc_0047C283: ;
    eax = MEM32(0x75FA18);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047C28F; /* je: equal / zero */

loc_0047C28D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0047C28F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_0047C24D(); /* call 0x0047C24D */

loc_0047C299: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047C2AB
 * Original: 0x0047C2AB - 0x0047C2DF (52 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C2AB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047C2AB: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x5879B8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047C2B7: ;
    if (CMP_NE(MEM32(0x75FA1C), 0)) goto loc_0047C2CA; /* jne: not equal / not zero */

loc_0047C2C0: ;
    MEM32(0x75FA1C) = 0x47C29B;

loc_0047C2CA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x75FA1C), _icall_esp); /* indirect call */
    }

loc_0047C2DA: ;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp;
    esp += 4; return; /* ret */

}

/**
 * sub_0047C30C
 * Original: 0x0047C30C - 0x0047C31B (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C30C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C30C: ;
    eax = MEM32(esp + 4);
    if (CMP_B(eax, MEM32(0x881340))) { sub_0047C31B(); return; } /* jb: below (unsigned <) */

loc_0047C318: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0047C336
 * Original: 0x0047C336 - 0x0047C341 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C336(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C336: ;
    ecx = MEM32(esp + 4);
    if (TEST_NZ(ecx, ecx)) { sub_0047C341(); return; } /* jne: not equal / not zero */

loc_0047C33E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0047C370
 * Original: 0x0047C370 - 0x0047C3A1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047C370: ;
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x14);
    eax = eax | eax;
    if ((eax != 0)) { sub_0047C3A1(); return; } /* jne: not equal / not zero */

loc_0047C379: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 8);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    eax = ebx;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = esi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    goto loc_0047C3E8; /* jmp 0x0047C3E8 */

loc_0047C3E8: ;
    {
        uint32_t _sub = MEM32(esp + 8);
        uint32_t _borrow = eax < _sub;
        uint32_t _neg_carry;
        eax = eax - _sub;
        edx = edx - MEM32(esp + 0xC) - _borrow;
        edx = (uint32_t)(-(int32_t)edx);
        _neg_carry = eax != 0;
        eax = (uint32_t)(-(int32_t)eax);
        edx = edx - _neg_carry;
    }
    ecx = edx;
    edx = ebx;
    ebx = ecx;
    ecx = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 0x14; return; /* ret 0x10 */

}

/**
 * sub_0047C405
 * Original: 0x0047C405 - 0x0047C4A5 (160 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C405(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047C405: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    (void)0; /* test MEM8(esi + 0xC), 0x40 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(MEM8(esi + 0xC), 0x40)) { sub_0047C4A5(); return; } /* jne: not equal / not zero */

loc_0047C41A: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0047C439; /* je: equal / zero */

loc_0047C422: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x881360);
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    goto loc_0047C43E;

loc_0047C439: ;
    eax = 0x655E00;

loc_0047C43E: ;
    if (TEST_Z(MEM8(eax + 4), 0x80)) { sub_0047C4A5(); return; } /* je: equal / zero */

loc_0047C444: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047C336(); /* call 0x0047C336 */

loc_0047C450: ;
    ebx = eax;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_0047C46A; /* jne: not equal / not zero */

loc_0047C459: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0047C45E: ;
    MEM32(eax) = 0x2A;

loc_0047C464: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    g_seh_ebp = ebp; sub_0047C4C5(); return; /* tail jmp 0x0047C4C5 */

loc_0047C46A: ;
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0047C49F; /* jle: less or equal (signed <=) */

loc_0047C470: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    if (((int32_t)MEM32(esi + 4) < 0)) goto loc_0047C487; /* js: sign (negative) */

loc_0047C475: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(ebp + edi + -8));
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esi);
    eax = ZX8(MEM8(ecx));
    ecx++;
    MEM32(esi) = ecx;
    goto loc_0047C495;

loc_0047C487: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + edi + -8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472B52(); /* call 0x00472B52 */

loc_0047C493: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0047C495: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0047C464; /* je: equal / zero */

loc_0047C49A: ;
    edi++;
    if (CMP_L(edi, ebx)) goto loc_0047C470; /* jl: less (signed <) */

loc_0047C49F: ;
    SET_LO16(eax, MEM16(ebp + 8));
    g_seh_ebp = ebp; sub_0047C4C5(); return; /* tail jmp 0x0047C4C5 */

}

/**
 * sub_0047C4CA
 * Original: 0x0047C4CA - 0x0047C4EE (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C4CA(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C4CA: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0047C4EB; /* je: equal / zero */

loc_0047C4D2: ;
    if (CMP_EQ(MEM32(esp + 0xC), 0)) goto loc_0047C4EB; /* je: equal / zero */

loc_0047C4D9: ;
    SET_LO8(eax, MEM8(eax));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0047C4EE(); return; } /* jne: not equal / not zero */

loc_0047C4DF: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0047C4EB; /* je: equal / zero */

loc_0047C4E7: ;
    MEM16(eax) = MEM16(eax) & 0;

loc_0047C4EB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0047C501
 * Original: 0x0047C501 - 0x0047C59B (154 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C501(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047C501: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    edx = MEM32(ebp + 0x14);
    eax = 0x8000;
    (void)0; /* test eax, edx - flags set for next jcc */
    MEM8(ebp + -1) = 0;
    if (TEST_NZ(eax, edx)) goto loc_0047C528; /* jne: not equal / not zero */

loc_0047C517: ;
    if (TEST_NZ(HI8(edx), 0x40)) goto loc_0047C524; /* jne: not equal / not zero */

loc_0047C51C: ;
    if (CMP_EQ(MEM32(0x75FAE0), eax)) goto loc_0047C528; /* je: equal / zero */

loc_0047C524: ;
    MEM8(ebp + -1) = 0x80;

loc_0047C528: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    eax = edx;
    POP32(esp, esi);
    eax = eax & esi;
    ebx = 0; /* xor self */
    eax = eax - ebx;
    if ((eax == 0)) goto loc_0047C54F; /* je: equal / zero */

loc_0047C537: ;
    eax--;
    if ((eax == 0)) goto loc_0047C546; /* je: equal / zero */

loc_0047C53A: ;
    eax--;
    if ((eax != 0)) goto loc_0047C56A; /* jne: not equal / not zero */

loc_0047C53D: ;
    MEM32(ebp + -16) = 0xC0000000u;
    goto loc_0047C556;

loc_0047C546: ;
    MEM32(ebp + -16) = 0x40000000;
    goto loc_0047C556;

loc_0047C54F: ;
    MEM32(ebp + -16) = 0x80000000u;

loc_0047C556: ;
    if (CMP_EQ(ecx, 0x10)) { sub_0047C59B(); return; } /* je: equal / zero */

loc_0047C55B: ;
    if (CMP_EQ(ecx, 0x20)) goto loc_0047C592; /* je: equal / zero */

loc_0047C560: ;
    if (CMP_EQ(ecx, 0x30)) goto loc_0047C589; /* je: equal / zero */

loc_0047C565: ;
    if (CMP_EQ(ecx, 0x40)) goto loc_0047C584; /* je: equal / zero */

loc_0047C56A: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0047C56F: ;
    MEM32(eax) = 0x16;
    PUSH32(esp, 0); sub_00471B1D(); /* call 0x00471B1D */

loc_0047C57A: ;
    MEM32(eax) = ebx;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0047C748(); return; /* tail jmp 0x0047C748 */

loc_0047C584: ;
    MEM32(ebp + -8) = esi;
    g_seh_ebp = ebp; sub_0047C59E(); return; /* tail jmp 0x0047C59E */

loc_0047C589: ;
    MEM32(ebp + -8) = 2;
    g_seh_ebp = ebp; sub_0047C59E(); return; /* tail jmp 0x0047C59E */

loc_0047C592: ;
    MEM32(ebp + -8) = 1;
    g_seh_ebp = ebp; sub_0047C59E(); return; /* tail jmp 0x0047C59E */

}

/**
 * sub_0047C797
 * Original: 0x0047C797 - 0x0047C7DC (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C797(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047C797: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x5879C8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047C7A3: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0); sub_0047C501(); /* call 0x0047C501 */

loc_0047C7C4: ;
    esp = esp + 0x14;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0047C7DC(); /* call 0x0047C7DC */

loc_0047C7D3: ;
    eax = MEM32(ebp + -36);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047C7DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047C7DC
 * Original: 0x0047C7DC - 0x0047C7EC (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C7DC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047C7DC: ;
    if (CMP_EQ(MEM32(ebp + -28), 0)) goto loc_0047C7EB; /* je: equal / zero */

loc_0047C7E2: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0); sub_0047C95C(); /* call 0x0047C95C */

loc_0047C7EA: ;
    POP32(esp, ecx);

loc_0047C7EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047C7EC
 * Original: 0x0047C7EC - 0x0047C81B (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C7EC(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C7EC: ;
    eax = MEM32(esp + 4);
    if (CMP_AE(eax, MEM32(0x881340))) { sub_0047C81B(); return; } /* jae: above or equal (unsigned >=) */

loc_0047C7F8: ;
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x881360);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    if (CMP_NE(MEM32(eax), 0xFFFFFFFFu)) { sub_0047C81B(); return; } /* jne: not equal / not zero */

loc_0047C812: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0047C832
 * Original: 0x0047C832 - 0x0047C864 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C832(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C832: ;
    eax = MEM32(esp + 4);
    if (CMP_AE(eax, MEM32(0x881340))) { sub_0047C864(); return; } /* jae: above or equal (unsigned >=) */

loc_0047C83E: ;
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x881360);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    if (TEST_Z(MEM8(eax + 4), 1)) { sub_0047C864(); return; } /* je: equal / zero */

loc_0047C859: ;
    if (CMP_EQ(MEM32(eax), 0xFFFFFFFFu)) { sub_0047C864(); return; } /* je: equal / zero */

loc_0047C85E: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0047C87B
 * Original: 0x0047C87B - 0x0047C8A5 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C87B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047C87B: ;
    eax = MEM32(esp + 4);
    if (CMP_AE(eax, MEM32(0x881340))) { sub_0047C8A5(); return; } /* jae: above or equal (unsigned >=) */

loc_0047C887: ;
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x881360);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    if (TEST_Z(MEM8(eax + 4), 1)) { sub_0047C8A5(); return; } /* je: equal / zero */

loc_0047C8A2: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0047C8BC
 * Original: 0x0047C8BC - 0x0047C950 (148 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C8BC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047C8BC: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x5879D8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047C8C8: ;
    edi = MEM32(ebp + 8);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    eax = edi;
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    ecx = MEM32(ecx * 4 + 0x881360);
    esi = ecx + eax * 8;
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 8), ebx)) goto loc_0047C92A; /* jne: not equal / not zero */

loc_0047C8E9: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0047C8F0: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(MEM32(esi + 8), ebx)) goto loc_0047C921; /* jne: not equal / not zero */

loc_0047C8F9: ;
    PUSH32(esp, 0xFA0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047C2AB(); /* call 0x0047C2AB */

loc_0047C907: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0047C91E; /* jne: not equal / not zero */

loc_0047C90D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470BBA(); /* call 0x00470BBA */

loc_0047C918: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    goto loc_0047C94A;

loc_0047C91E: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;

loc_0047C921: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0047C953(); /* call 0x0047C953 */

loc_0047C92A: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = edi & 0x1F;
    ecx = edi + edi * 4;
    eax = MEM32(eax * 4 + 0x881360);
    eax = eax + ecx * 8 + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0047C947: ;
    eax = 0; /* xor self */
    eax++;

loc_0047C94A: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047C94F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047C953
 * Original: 0x0047C953 - 0x0047C95C (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C953(void)
{

loc_0047C953: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0047C95A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047C95C
 * Original: 0x0047C95C - 0x0047C97E (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C95C(void)
{

loc_0047C95C: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    ecx = MEM32(ecx * 4 + 0x881360);
    eax = eax + eax * 4;
    eax = ecx + eax * 8 + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0047C97D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047C97E
 * Original: 0x0047C97E - 0x0047CA51 (211 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047C97E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047C97E: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x5879E8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047C98A: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); sub_00472A84(); /* call 0x00472A84 */

loc_0047C995: ;
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0047CA1F; /* je: equal / zero */

loc_0047C99E: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0047C9A5: ;
    POP32(esp, ecx);
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -36) = edi;
    if (CMP_GE(edi, 0x40)) { sub_0047CADF(); return; } /* jge: greater or equal (signed >=) */

loc_0047C9B7: ;
    esi = MEM32(edi * 4 + 0x881360);
    if (TEST_Z(esi, esi)) { sub_0047CA88(); return; } /* je: equal / zero */

loc_0047C9C6: ;
    MEM32(ebp + -32) = esi;
    eax = MEM32(edi * 4 + 0x881360);
    eax = eax + 0x500;
    if (CMP_AE(esi, eax)) { sub_0047CA7C(); return; } /* jae: above or equal (unsigned >=) */

loc_0047C9DD: ;
    if (TEST_NZ(MEM8(esi + 4), 1)) goto loc_0047CA49; /* jne: not equal / not zero */

loc_0047C9E3: ;
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 8), ebx)) goto loc_0047CA32; /* jne: not equal / not zero */

loc_0047C9EA: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0047C9F1: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = 1;
    if (CMP_NE(MEM32(esi + 8), ebx)) goto loc_0047CA2A; /* jne: not equal / not zero */

loc_0047C9FE: ;
    PUSH32(esp, 0xFA0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047C2AB(); /* call 0x0047C2AB */

loc_0047CA0C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0047CA27; /* jne: not equal / not zero */

loc_0047CA12: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470BBA(); /* call 0x00470BBA */

loc_0047CA1D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0047CA1F: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0047CAEB(); return; /* tail jmp 0x0047CAEB */

loc_0047CA27: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;

loc_0047CA2A: ;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_0047CA57(); /* call 0x0047CA57 */

loc_0047CA32: ;
    ebx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0047CA3C: ;
    if (TEST_Z(MEM8(esi + 4), 1)) { sub_0047CA60(); return; } /* je: equal / zero */

loc_0047CA42: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0047CA49: ;
    esi = esi + 0x28;
    goto loc_0047C9C6;

}

/**
 * sub_0047CA57
 * Original: 0x0047CA57 - 0x0047CA60 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CA57(void)
{

loc_0047CA57: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0047CA5E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047CAF1
 * Original: 0x0047CAF1 - 0x0047CAFA (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CAF1(void)
{

loc_0047CAF1: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0047CAF8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047CAFA
 * Original: 0x0047CAFA - 0x0047CB2B (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CAFA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047CAFA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_0047C87B(); /* call 0x0047C87B */

loc_0047CB16: ;
    edi = edi | 0xFFFFFFFFu;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_NE(eax, edi)) { sub_0047CB2B(); return; } /* jne: not equal / not zero */

loc_0047CB1E: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0047CB23: ;
    MEM32(eax) = 9;
    g_seh_ebp = ebp; sub_0047CB52(); return; /* tail jmp 0x0047CB52 */

}

/**
 * sub_0047CB7B
 * Original: 0x0047CB7B - 0x0047CBE4 (105 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CB7B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047CB7B: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x587A00);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047CB87: ;
    ebx = MEM32(ebp + 8);
    if (CMP_AE(ebx, MEM32(0x881340))) { sub_0047CC1B(); return; } /* jae: above or equal (unsigned >=) */

loc_0047CB96: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = eax * 4 + 0x881360;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_0047CC1B(); return; } /* je: equal / zero */

loc_0047CBB6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C8BC(); /* call 0x0047C8BC */

loc_0047CBBC: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    if (TEST_Z(MEM8(eax + esi + 4), 1)) { sub_0047CBE4(); return; } /* je: equal / zero */

loc_0047CBCA: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047CAFA(); /* call 0x0047CAFA */

loc_0047CBD9: ;
    esp = esp + 0x10;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = edx;
    g_seh_ebp = ebp; sub_0047CBFF(); return; /* tail jmp 0x0047CBFF */

}

/**
 * sub_0047CC13
 * Original: 0x0047CC13 - 0x0047CC1B (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CC13(void)
{

loc_0047CC13: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047C95C(); /* call 0x0047C95C */

loc_0047CC19: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047CC39
 * Original: 0x0047CC39 - 0x0047CC64 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CC39(void)
{

loc_0047CC39: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = 0x881100;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    eax = 0; /* xor self */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = 0x881220;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x881204) = eax;
    MEM32(0x8810F0) = eax;
    MEM32(0x8810E8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047CC64
 * Original: 0x0047CC64 - 0x0047CD6E (266 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CC64(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047CC64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0047CC93; /* je: equal / zero */

loc_0047CC6F: ;
    edx = 0; /* xor self */
    eax = 0; /* xor self */

loc_0047CC73: ;
    if (CMP_EQ(MEM32(eax + 0x6560C8), ecx)) goto loc_0047CC9C; /* je: equal / zero */

loc_0047CC7B: ;
    eax = eax + 0x3C;
    edx++;
    if (CMP_B(eax, 0x12C)) goto loc_0047CC73; /* jb: below (unsigned <) */

loc_0047CC86: ;
    if (CMP_EQ(MEM32(0x75FA24), 0)) { sub_0047CD6E(); return; } /* je: equal / zero */

loc_0047CC93: ;
    PUSH32(esp, 0); sub_0047CC39(); /* call 0x0047CC39 */

loc_0047CC98: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0047CC9C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = 0x881100;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    edi = ecx + 0x6560E4;

loc_0047CCBB: ;
    SET_LO8(eax, MEM8(edi));
    ebx = edi;
    goto loc_0047CCEA;

loc_0047CCC1: ;
    SET_LO8(edx, MEM8(ebx + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0047CCEE; /* je: equal / zero */

loc_0047CCC8: ;
    eax = ZX8(LO8(eax));
    esi = ZX8(LO8(edx));
    if (CMP_A(eax, esi)) goto loc_0047CCE6; /* ja: above (unsigned >) */

loc_0047CCD2: ;
    edx = MEM32(ebp + -4);
    SET_LO8(edx, MEM8(edx + 0x6560C0));

loc_0047CCDB: ;
    MEM8(eax + 0x881101) = MEM8(eax + 0x881101) | LO8(edx);
    eax++;
    if (CMP_BE(eax, esi)) goto loc_0047CCDB; /* jbe: below or equal (unsigned <=) */

loc_0047CCE6: ;
    ebx++;
    ebx++;
    SET_LO8(eax, MEM8(ebx));

loc_0047CCEA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0047CCC1; /* jne: not equal / not zero */

loc_0047CCEE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    edi = edi + 8;
    if (CMP_B(MEM32(ebp + -4), 4)) goto loc_0047CCBB; /* jb: below (unsigned <) */

loc_0047CCFA: ;
    eax = MEM32(ebp + 8);
    MEM32(0x881204) = eax;
    eax = eax - 0x3A4;
    MEM32(0x8810F0) = 1;
    if ((eax == 0)) goto loc_0047CD4D; /* je: equal / zero */

loc_0047CD13: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0047CD41; /* je: equal / zero */

loc_0047CD18: ;
    eax = eax - 0xD;
    if ((eax == 0)) goto loc_0047CD35; /* je: equal / zero */

loc_0047CD1D: ;
    eax--;
    if ((eax == 0)) goto loc_0047CD29; /* je: equal / zero */

loc_0047CD20: ;
    MEM32(0x8810E8) = MEM32(0x8810E8) & 0;
    goto loc_0047CD57;

loc_0047CD29: ;
    MEM32(0x8810E8) = 0x404;
    goto loc_0047CD57;

loc_0047CD35: ;
    MEM32(0x8810E8) = 0x412;
    goto loc_0047CD57;

loc_0047CD41: ;
    MEM32(0x8810E8) = 0x804;
    goto loc_0047CD57;

loc_0047CD4D: ;
    MEM32(0x8810E8) = 0x411;

loc_0047CD57: ;
    PUSH32(esp, 6);
    esi = ecx + 0x6560CC;
    POP32(esp, ecx);
    edi = 0x881220;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047CD73
 * Original: 0x0047CD73 - 0x0047CE8B (280 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CD73(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047CD73: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x587A10);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047CD7F: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) | 0xFFFFFFFFu;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0047CD8A: ;
    POP32(esp, ecx);
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(0x75FA24) = ebx;
    edi = MEM32(ebp + 8);
    if (CMP_NE(edi, 0xFFFFFFFCu)) goto loc_0047CDAE; /* jne: not equal / not zero */

loc_0047CD9E: ;
    MEM32(0x75FA24) = 1;
    edi = MEM32(0x75F9D4);

loc_0047CDAE: ;
    MEM32(ebp + 8) = edi;
    if (CMP_EQ(edi, MEM32(0x881204))) goto loc_0047CE76; /* je: equal / zero */

loc_0047CDBD: ;
    esi = MEM32(0x8810EC);
    MEM32(ebp + -36) = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0047CDCE; /* je: equal / zero */

loc_0047CDCA: ;
    if (CMP_EQ(MEM32(esi), ebx)) goto loc_0047CDDE; /* je: equal / zero */

loc_0047CDCE: ;
    PUSH32(esp, 0x220);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0047CDD8: ;
    POP32(esp, ecx);
    esi = eax;
    MEM32(ebp + -36) = esi;

loc_0047CDDE: ;
    if (CMP_EQ(esi, ebx)) goto loc_0047CE5F; /* je: equal / zero */

loc_0047CDE2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047CC64(); /* call 0x0047CC64 */

loc_0047CDE8: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    if (CMP_NE(eax, ebx)) goto loc_0047CE5F; /* jne: not equal / not zero */

loc_0047CDF0: ;
    MEM32(esi) = ebx;
    eax = MEM32(0x881204);
    MEM32(esi + 4) = eax;
    eax = MEM32(0x8810F0);
    MEM32(esi + 8) = eax;
    eax = MEM32(0x8810E8);
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */

loc_0047CE0C: ;
    MEM32(ebp + -28) = eax;
    if (CMP_GE(eax, 5)) goto loc_0047CE24; /* jge: greater or equal (signed >=) */

loc_0047CE14: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x881220));
    MEM16(esi + eax * 2 + 0x10) = LO16(ecx);
    eax++;
    goto loc_0047CE0C;

loc_0047CE24: ;
    eax = 0; /* xor self */

loc_0047CE26: ;
    MEM32(ebp + -28) = eax;
    if (CMP_GE(eax, 0x101)) goto loc_0047CE3D; /* jge: greater or equal (signed >=) */

loc_0047CE30: ;
    SET_LO8(ecx, MEM8(eax + 0x881100));
    MEM8(eax + esi + 0x1C) = LO8(ecx);
    eax++;
    goto loc_0047CE26;

loc_0047CE3D: ;
    eax = 0; /* xor self */

loc_0047CE3F: ;
    MEM32(ebp + -28) = eax;
    if (CMP_GE(eax, 0x100)) goto loc_0047CE59; /* jge: greater or equal (signed >=) */

loc_0047CE49: ;
    SET_LO8(ecx, MEM8(eax + 0x881240));
    MEM8(eax + esi + 0x11D) = LO8(ecx);
    eax++;
    goto loc_0047CE3F;

loc_0047CE59: ;
    MEM32(0x8810EC) = esi;

loc_0047CE5F: ;
    if (CMP_NE(MEM32(ebp + -32), 0xFFFFFFFFu)) goto loc_0047CE79; /* jne: not equal / not zero */

loc_0047CE65: ;
    if (CMP_EQ(esi, MEM32(0x8810EC))) goto loc_0047CE79; /* je: equal / zero */

loc_0047CE6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0047CE73: ;
    POP32(esp, ecx);
    goto loc_0047CE79;

loc_0047CE76: ;
    MEM32(ebp + -32) = ebx;

loc_0047CE79: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0047CE8B(); /* call 0x0047CE8B */

loc_0047CE82: ;
    eax = MEM32(ebp + -32);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047CE8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047CE8B
 * Original: 0x0047CE8B - 0x0047CE94 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CE8B(void)
{

loc_0047CE8B: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0047CE92: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047CE94
 * Original: 0x0047CE94 - 0x0047CEBC (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CE94(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047CE94: ;
    if (CMP_NE(MEM32(0x881470), 0)) goto loc_0047CEB9; /* jne: not equal / not zero */

loc_0047CE9D: ;
    PUSH32(esp, 0);
    MEM32(0x881204) = 0xFFFFFFFDu;
    PUSH32(esp, 0); sub_0047CD73(); /* call 0x0047CD73 */

loc_0047CEAE: ;
    POP32(esp, ecx);
    MEM32(0x881470) = 1;

loc_0047CEB9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0047CEE6
 * Original: 0x0047CEE6 - 0x0047CF18 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CEE6(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047CEE6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    ecx = ecx - edx;
    edx = edx | 0xFFFFFFFFu;
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 4);
    edx = ~edx;
    if (TEST_Z(MEM32(ecx + eax * 4), edx)) goto loc_0047CF0E; /* je: equal / zero */

loc_0047CF05: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0047CF08: ;
    if (CMP_NE(MEM32(ecx + eax * 4), 0)) goto loc_0047CF05; /* jne: not equal / not zero */

loc_0047CF0E: ;
    eax++;
    if (CMP_L(eax, 3)) goto loc_0047CF08; /* jl: less (signed <) */

loc_0047CF14: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_0047CF18
 * Original: 0x0047CF18 - 0x0047CF65 (77 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CF18(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047CF18: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(esp + 0xC);
    esi = eax;
    eax = edi + esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    ecx = ecx - edx;
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_0047DD99(); /* call 0x0047DD99 */

loc_0047CF40: ;
    esp = esp + 0xC;
    esi--;
    if (((int32_t)esi < 0)) goto loc_0047CF62; /* js: sign (negative) */

loc_0047CF46: ;
    edi = edi + esi * 4;

loc_0047CF49: ;
    if (TEST_Z(eax, eax)) goto loc_0047CF62; /* je: equal / zero */

loc_0047CF4D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_0047DD99(); /* call 0x0047DD99 */

loc_0047CF57: ;
    esp = esp + 0xC;
    esi--;
    edi = edi - 4;
    if (CMP_GE(esi & esi, 0)) goto loc_0047CF49; /* jge: greater or equal (signed >=) */

loc_0047CF62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047CF65
 * Original: 0x0047CF65 - 0x0047CFD7 (114 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CF65(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047CF65: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edi--;
    PUSH32(esp, 0x20);
    eax = edi + 1;
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x1F);
    POP32(esp, esi);
    esi = esi - edx;
    edx = 0; /* xor self */
    edx++;
    ecx = esi;
    edx = edx << LO8(ecx);
    ebx = eax;
    eax = MEM32(ebp + 8);
    if (TEST_Z(MEM32(eax + ebx * 4), edx)) goto loc_0047CFB4; /* je: equal / zero */

loc_0047CF93: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047CEE6(); /* call 0x0047CEE6 */

loc_0047CF9D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0047CFB1; /* jne: not equal / not zero */

loc_0047CFA3: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047CF18(); /* call 0x0047CF18 */

loc_0047CFAC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;

loc_0047CFB1: ;
    eax = MEM32(ebp + 8);

loc_0047CFB4: ;
    edx = edx | 0xFFFFFFFFu;
    ecx = esi;
    edx = edx << LO8(ecx);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    MEM32(eax + ebx * 4) = MEM32(eax + ebx * 4) & edx;
    ebx++;
    if (CMP_GE(ebx, ecx)) goto loc_0047CFCF; /* jge: greater or equal (signed >=) */

loc_0047CFC6: ;
    edi = eax + ebx * 4;
    ecx = ecx - ebx;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0047CFCF: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047CFD7
 * Original: 0x0047CFD7 - 0x0047CFF2 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CFD7(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047CFD7: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 3);
    POP32(esp, edx);
    ecx = ecx - eax;
    PUSH32(esp, esi);

loc_0047CFE5: ;
    esi = MEM32(eax);
    MEM32(ecx + eax) = esi;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_0047CFE5; /* jne: not equal / not zero */

loc_0047CFF0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047CFF2
 * Original: 0x0047CFF2 - 0x0047D008 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047CFF2(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047CFF2: ;
    eax = 0; /* xor self */

loc_0047CFF4: ;
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(ecx + eax * 4), 0)) { sub_0047D008(); return; } /* jne: not equal / not zero */

loc_0047CFFE: ;
    eax++;
    if (CMP_L(eax, 3)) goto loc_0047CFF4; /* jl: less (signed <) */

loc_0047D004: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_0047D00B
 * Original: 0x0047D00B - 0x0047D075 (106 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D00B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047D00B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = esi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(ebp + 8);
    edi = edi | 0xFFFFFFFFu;
    MEM32(ebp + 0xC) = esi;
    ecx = edx;
    edi = edi << LO8(ecx);
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edx;
    edi = ~edi;
    MEM32(ebp + -4) = eax;

loc_0047D039: ;
    esi = MEM32(ebx + eax * 4);
    ecx = esi;
    ecx = ecx & edi;
    MEM32(ebp + -12) = ecx;
    ecx = edx;
    esi = esi >> LO8(ecx);
    ecx = MEM32(ebp + 0xC);
    esi = esi | MEM32(ebp + -4);
    MEM32(ebx + eax * 4) = esi;
    esi = MEM32(ebp + -12);
    esi = esi << LO8(ecx);
    eax++;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_L(eax, 3)) goto loc_0047D039; /* jl: less (signed <) */

loc_0047D05E: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    ecx = eax;
    ecx = ecx - MEM32(ebp + -8);
    ecx = ebx + ecx * 4;
    if (CMP_L(eax, MEM32(ebp + -8))) { sub_0047D075(); return; } /* jl: less (signed <) */

loc_0047D06E: ;
    edx = MEM32(ecx);
    MEM32(ebx + eax * 4) = edx;
    g_seh_ebp = ebp; sub_0047D079(); return; /* tail jmp 0x0047D079 */

}

/**
 * sub_0047D086
 * Original: 0x0047D086 - 0x0047D1CF (329 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D086(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0047D086: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ecx & 0x8000;
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(eax + 6);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(eax + 2);
    eax = ZX16(MEM16(eax));
    eax = eax << 0x10;
    edi = edi & 0x7FFF;
    edi = edi - 0x3FFF;
    (void)0; /* cmp edi, 0xFFFFC001u - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    eax = ebp + -12;
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, eax);
    if (CMP_NE(edi, 0xFFFFC001u)) goto loc_0047D0EF; /* jne: not equal / not zero */

loc_0047D0D1: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0047CFF2(); /* call 0x0047CFF2 */

loc_0047D0D8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0047D19E; /* jne: not equal / not zero */

loc_0047D0E1: ;
    edi = ebp + -12;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */

loc_0047D0E7: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_0047D1A0;

loc_0047D0EF: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047CFD7(); /* call 0x0047CFD7 */

loc_0047D0F8: ;
    PUSH32(esp, MEM32(esi + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047CF65(); /* call 0x0047CF65 */

loc_0047D104: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0047D10C; /* je: equal / zero */

loc_0047D10B: ;
    edi++;

loc_0047D10C: ;
    eax = MEM32(esi + 4);
    ecx = eax;
    ecx = ecx - MEM32(esi + 8);
    if (CMP_GE(edi, ecx)) goto loc_0047D122; /* jge: greater or equal (signed >=) */

loc_0047D118: ;
    eax = 0; /* xor self */
    edi = ebp + -12;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    goto loc_0047D15E;

loc_0047D122: ;
    if (CMP_G(edi, eax)) goto loc_0047D162; /* jg: greater (signed >) */

loc_0047D126: ;
    eax = eax - edi;
    edi = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047CFD7(); /* call 0x0047CFD7 */

loc_0047D137: ;
    eax = ebp + -12;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D00B(); /* call 0x0047D00B */

loc_0047D141: ;
    PUSH32(esp, MEM32(esi + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047CF65(); /* call 0x0047CF65 */

loc_0047D14D: ;
    eax = MEM32(esi + 0xC);
    eax++;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D00B(); /* call 0x0047D00B */

loc_0047D15B: ;
    esp = esp + 0x20;

loc_0047D15E: ;
    ebx = 0; /* xor self */
    goto loc_0047D0E7;

loc_0047D162: ;
    (void)0; /* cmp edi, MEM32(esi) - flags set for next jcc */
    PUSH32(esp, MEM32(esi + 0xC));
    if (CMP_L(edi, MEM32(esi))) goto loc_0047D18A; /* jl: less (signed <) */

loc_0047D169: ;
    eax = 0; /* xor self */
    edi = ebp + -12;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM8(ebp + -9) = MEM8(ebp + -9) | 0x80;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D00B(); /* call 0x0047D00B */

loc_0047D17E: ;
    ebx = MEM32(esi + 0x14);
    ebx = ebx + MEM32(esi);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    goto loc_0047D1A0;

loc_0047D18A: ;
    ebx = MEM32(esi + 0x14);
    MEM8(ebp + -9) = MEM8(ebp + -9) & 0x7F;
    eax = ebp + -12;
    PUSH32(esp, eax);
    ebx = ebx + edi;
    PUSH32(esp, 0); sub_0047D00B(); /* call 0x0047D00B */

loc_0047D19C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0047D19E: ;
    eax = 0; /* xor self */

loc_0047D1A0: ;
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    ecx = ecx - MEM32(esi + 0xC);
    esi = MEM32(esi + 0x10);
    ebx = ebx << LO8(ecx);
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x80000000u;
    ebx = ebx | ecx;
    ebx = ebx | MEM32(ebp + -12);
    if (CMP_NE(esi, 0x40)) { sub_0047D1CF(); return; } /* jne: not equal / not zero */

loc_0047D1C2: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -8);
    MEM32(ecx + 4) = ebx;
    MEM32(ecx) = edx;
    g_seh_ebp = ebp; sub_0047D1D9(); return; /* tail jmp 0x0047D1D9 */

}

/**
 * sub_0047D1DE
 * Original: 0x0047D1DE - 0x0047D1F4 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D1DE(void)
{

loc_0047D1DE: ;
    PUSH32(esp, 0x6561F4);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_0047D086(); /* call 0x0047D086 */

loc_0047D1F0: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0047D1F4
 * Original: 0x0047D1F4 - 0x0047D20A (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D1F4(void)
{

loc_0047D1F4: ;
    PUSH32(esp, 0x65620C);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_0047D086(); /* call 0x0047D086 */

loc_0047D206: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0047D20A
 * Original: 0x0047D20A - 0x0047D237 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D20A(void)
{
    uint32_t ebp;

loc_0047D20A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D264(); /* call 0x0047D264 */

loc_0047D226: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D1DE(); /* call 0x0047D1DE */

loc_0047D232: ;
    esp = esp + 0x24;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047D237
 * Original: 0x0047D237 - 0x0047D264 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D237(void)
{
    uint32_t ebp;

loc_0047D237: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D264(); /* call 0x0047D264 */

loc_0047D253: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D1F4(); /* call 0x0047D1F4 */

loc_0047D25F: ;
    esp = esp + 0x24;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047D264
 * Original: 0x0047D264 - 0x0047D2B2 (78 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D264(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047D264: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    eax = ebp + -84;
    PUSH32(esp, esi);
    MEM32(ebp + -12) = eax;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    edx++;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + 0x10) = edi;

loc_0047D299: ;
    SET_LO8(ecx, MEM8(edi));
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_0047D2AF; /* je: equal / zero */

loc_0047D2A0: ;
    if (CMP_EQ(LO8(ecx), 9)) goto loc_0047D2AF; /* je: equal / zero */

loc_0047D2A5: ;
    if (CMP_EQ(LO8(ecx), 0xA)) goto loc_0047D2AF; /* je: equal / zero */

loc_0047D2AA: ;
    if (CMP_NE(LO8(ecx), 0xD)) { sub_0047D2B2(); return; } /* jne: not equal / not zero */

loc_0047D2AF: ;
    edi++;
    goto loc_0047D299;

}

/**
 * sub_0047D7CF
 * Original: 0x0047D7CF - 0x0047D886 (183 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D7CF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047D7CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* cmp LO16(ebx), 0xFFFF - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO16(ebx), 0xFFFF)) goto loc_0047D84F; /* je: equal / zero */

loc_0047D7E1: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    if (TEST_NZ(LO8(eax), 1)) goto loc_0047D7F3; /* jne: not equal / not zero */

loc_0047D7EB: ;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0047D84F; /* jns: not sign (positive) */

loc_0047D7EF: ;
    if (TEST_NZ(LO8(eax), 2)) goto loc_0047D84F; /* jne: not equal / not zero */

loc_0047D7F3: ;
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 8), edi)) goto loc_0047D801; /* jne: not equal / not zero */

loc_0047D7FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004796E1(); /* call 0x004796E1 */

loc_0047D800: ;
    POP32(esp, ecx);

loc_0047D801: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx & 0x40;
    if ((ecx != 0)) { sub_0047D886(); return; } /* jne: not equal / not zero */

loc_0047D809: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0047D828; /* je: equal / zero */

loc_0047D811: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 5);
    edx = MEM32(edx * 4 + 0x881360);
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = edx + eax * 8;
    goto loc_0047D82D;

loc_0047D828: ;
    eax = 0x655E00;

loc_0047D82D: ;
    if (TEST_Z(MEM8(eax + 4), 0x80)) { sub_0047D886(); return; } /* je: equal / zero */

loc_0047D833: ;
    eax = ebp + -8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047C336(); /* call 0x0047C336 */

loc_0047D83D: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0047D858; /* jne: not equal / not zero */

loc_0047D844: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0047D849: ;
    MEM32(eax) = 0x2A;

loc_0047D84F: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0047D858: ;
    ecx = MEM32(esi + 8);
    ecx = ecx + eax;
    if (CMP_AE(MEM32(esi), ecx)) goto loc_0047D86D; /* jae: above or equal (unsigned >=) */

loc_0047D861: ;
    if (CMP_NE(MEM32(esi + 4), edi)) goto loc_0047D84F; /* jne: not equal / not zero */

loc_0047D866: ;
    if (CMP_G(eax, MEM32(esi + 0x18))) goto loc_0047D84F; /* jg: greater (signed >) */

loc_0047D86B: ;
    MEM32(esi) = ecx;

loc_0047D86D: ;
    ecx = eax + -1;
    if (CMP_L(ecx, edi)) goto loc_0047D881; /* jl: less (signed <) */

loc_0047D874: ;
    MEM32(esi) = MEM32(esi) - 1;
    ecx--;
    SET_LO8(edx, MEM8(ebp + ecx + -7));
    edi = MEM32(esi);
    MEM8(edi) = LO8(edx);
    if (((int32_t)ecx >= 0)) goto loc_0047D874; /* jns: not sign (positive) */

loc_0047D881: ;
    MEM32(esi + 4) = MEM32(esi + 4) + eax;
    g_seh_ebp = ebp; sub_0047D8B9(); return; /* tail jmp 0x0047D8B9 */

}

/**
 * sub_0047D8CA
 * Original: 0x0047D8CA - 0x0047D92A (96 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D8CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047D8CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 1;
    MEM8(esi) = 0x30;
    eax = edi;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0047D907; /* jle: less or equal (signed <=) */

loc_0047D8E8: ;
    MEM32(ebp + 8) = ebx;
    ebx = 0; /* xor self */

loc_0047D8ED: ;
    SET_LO8(edx, MEM8(ecx));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0047D8F9; /* je: equal / zero */

loc_0047D8F3: ;
    edx = SX8(LO8(edx));
    ecx++;
    goto loc_0047D8FC;

loc_0047D8F9: ;
    PUSH32(esp, 0x30);
    POP32(esp, edx);

loc_0047D8FC: ;
    MEM8(eax) = LO8(edx);
    eax++;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_0047D8ED; /* jne: not equal / not zero */

loc_0047D904: ;
    edx = MEM32(ebp + 0x10);

loc_0047D907: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM8(eax) = 0;
    if (TEST_S(ebx, ebx)) goto loc_0047D920; /* jl: less (signed <) */

loc_0047D90E: ;
    if (CMP_L(MEM8(ecx), 0x35)) goto loc_0047D920; /* jl: less (signed <) */

loc_0047D913: ;
    goto loc_0047D918;

loc_0047D915: ;
    MEM8(eax) = 0x30;

loc_0047D918: ;
    eax--;
    if (CMP_EQ(MEM8(eax), 0x39)) goto loc_0047D915; /* je: equal / zero */

loc_0047D91E: ;
    MEM8(eax) = MEM8(eax) + 1;

loc_0047D920: ;
    if (CMP_NE(MEM8(esi), 0x31)) { sub_0047D92A(); return; } /* jne: not equal / not zero */

loc_0047D925: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;
    g_seh_ebp = ebp; sub_0047D944(); return; /* tail jmp 0x0047D944 */

}

/**
 * sub_0047D949
 * Original: 0x0047D949 - 0x0047D999 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D949(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047D949: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 6));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x7FF;
    esi = 0x80000000u;
    MEM32(ebp + -4) = esi;
    ecx = eax;
    ecx = ecx >> 4;
    eax = eax & 0x8000;
    ecx = ecx & edi;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx);
    ebx = ZX16(LO16(ecx));
    eax = eax & 0xFFFFF;
    if (TEST_Z(ebx, ebx)) { sub_0047D999(); return; } /* je: equal / zero */

loc_0047D986: ;
    if (CMP_EQ(ebx, edi)) goto loc_0047D992; /* je: equal / zero */

loc_0047D98A: ;
    edi = ecx + 0x3C00;
    g_seh_ebp = ebp; sub_0047D9BA(); return; /* tail jmp 0x0047D9BA */

loc_0047D992: ;
    edi = 0x7FFF;
    g_seh_ebp = ebp; sub_0047D9BA(); return; /* tail jmp 0x0047D9BA */

}

/**
 * sub_0047DA03
 * Original: 0x0047DA03 - 0x0047DA68 (101 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DA03(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047DA03: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047D949(); /* call 0x0047D949 */

loc_0047DA18: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    esp = esp - 0xC;
    esi = ebp + -12;
    edi = esp;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    PUSH32(esp, 0); sub_0047E2C5(); /* call 0x0047E2C5 */

loc_0047DA33: ;
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    MEM32(ecx + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -38);
    MEM32(ecx) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -40);
    MEM32(ecx + 4) = eax;
    eax = ebp + -36;
    esi = edi;
    edx = eax;
    esp = esp + 0x18;
    esi = esi - edx;

loc_0047DA55: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(esi + eax) = LO8(edx);
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0047DA55; /* jne: not equal / not zero */

loc_0047DA5F: ;
    MEM32(ecx + 0xC) = edi;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047DA71
 * Original: 0x0047DA71 - 0x0047DB4E (221 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DA71(void)
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

loc_0047DA71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    eax = MEM32(ebp + 0x10);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    eax--;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    if ((eax == 0)) goto loc_0047DABA; /* je: equal / zero */

loc_0047DA8F: ;
    eax--;
    if ((eax == 0)) goto loc_0047DAB6; /* je: equal / zero */

loc_0047DA92: ;
    eax--;
    if ((eax == 0)) goto loc_0047DAB2; /* je: equal / zero */

loc_0047DA95: ;
    eax--;
    if ((eax == 0)) goto loc_0047DAAE; /* je: equal / zero */

loc_0047DA98: ;
    eax--;
    if ((eax == 0)) goto loc_0047DABA; /* je: equal / zero */

loc_0047DA9B: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0047DAA6; /* je: equal / zero */

loc_0047DA9F: ;
    eax--;
    if ((eax != 0)) goto loc_0047DB16; /* jne: not equal / not zero */

loc_0047DAA2: ;
    PUSH32(esp, 0x10);
    goto loc_0047DABC;

loc_0047DAA6: ;
    MEM32(esi) = 1;
    goto loc_0047DB16;

loc_0047DAAE: ;
    PUSH32(esp, 0x12);
    goto loc_0047DABC;

loc_0047DAB2: ;
    PUSH32(esp, 0x11);
    goto loc_0047DABC;

loc_0047DAB6: ;
    PUSH32(esp, 4);
    goto loc_0047DABC;

loc_0047DABA: ;
    PUSH32(esp, 8);

loc_0047DABC: ;
    POP32(esp, ebx);
    PUSH32(esp, ecx);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047802F(); /* call 0x0047802F */

loc_0047DAC8: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0047DB16; /* jne: not equal / not zero */

loc_0047DACF: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(eax, 0x10)) goto loc_0047DAE8; /* je: equal / zero */

loc_0047DAD7: ;
    if (CMP_EQ(eax, 0x16)) goto loc_0047DAE8; /* je: equal / zero */

loc_0047DADC: ;
    if (CMP_EQ(eax, 0x1D)) goto loc_0047DAE8; /* je: equal / zero */

loc_0047DAE1: ;
    MEM32(esp + 0x50) = MEM32(esp + 0x50) & 0xFFFFFFFEu;
    goto loc_0047DAFD;

loc_0047DAE8: ;
    ecx = MEM32(esp + 0x50);
    fp_push(MEMD(esi + 0x10)); /* fld double */
    ecx = ecx & 0xFFFFFFE3u;
    MEMD(esp + 0x40) = fp_top(); fp_popp(); /* fstp */
    ecx = ecx | 3;
    MEM32(esp + 0x50) = ecx;

loc_0047DAFD: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00477D8B(); /* call 0x00477D8B */

loc_0047DB13: ;
    esp = esp + 0x18;

loc_0047DB16: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_00478419(); /* call 0x00478419 */

loc_0047DB24: ;
    (void)0; /* cmp MEM32(esi), 8 - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(MEM32(esi), 8)) goto loc_0047DB3F; /* je: equal / zero */

loc_0047DB2B: ;
    if (CMP_NE(MEM32(0x656030), 0)) goto loc_0047DB3F; /* jne: not equal / not zero */

loc_0047DB34: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435BEF(); /* call 0x00435BEF */

loc_0047DB3A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0047DB47; /* jne: not equal / not zero */

loc_0047DB3F: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_0047821C(); /* call 0x0047821C */

loc_0047DB46: ;
    POP32(esp, ecx);

loc_0047DB47: ;
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
 * sub_0047DB4E
 * Original: 0x0047DB4E - 0x0047DC67 (281 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DB4E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047DB4E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    (void)0; /* test LO8(eax), 0x82 - flags set for next jcc */
    ecx = MEM32(esi + 0x10);
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(LO8(eax), 0x82)) { sub_0047DC67(); return; } /* je: equal / zero */

loc_0047DB68: ;
    if (TEST_NZ(LO8(eax), 0x40)) { sub_0047DC67(); return; } /* jne: not equal / not zero */

loc_0047DB70: ;
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_0047DB8C; /* je: equal / zero */

loc_0047DB76: ;
    (void)0; /* test LO8(eax), 0x10 - flags set for next jcc */
    MEM32(esi + 4) = ebx;
    if (TEST_Z(LO8(eax), 0x10)) { sub_0047DC67(); return; } /* je: equal / zero */

loc_0047DB81: ;
    edx = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi) = edx;
    MEM32(esi + 0xC) = eax;

loc_0047DB8C: ;
    eax = MEM32(esi + 0xC);
    eax = eax & 0xFFFFFFEFu;
    eax = eax | 2;
    (void)0; /* test LO16(eax), 0x10C - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(ebp + 0xC) = ebx;
    if (TEST_NZ(LO16(eax), 0x10C)) goto loc_0047DBC9; /* jne: not equal / not zero */

loc_0047DBA4: ;
    if (CMP_EQ(esi, 0x655698)) goto loc_0047DBB4; /* je: equal / zero */

loc_0047DBAC: ;
    if (CMP_NE(esi, 0x6556B8)) goto loc_0047DBBF; /* jne: not equal / not zero */

loc_0047DBB4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0047C30C(); /* call 0x0047C30C */

loc_0047DBBA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0047DBC6; /* jne: not equal / not zero */

loc_0047DBBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004796E1(); /* call 0x004796E1 */

loc_0047DBC5: ;
    POP32(esp, ecx);

loc_0047DBC6: ;
    ecx = MEM32(ebp + -4);

loc_0047DBC9: ;
    (void)0; /* test MEM16(esi + 0xC), 0x108 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(MEM16(esi + 0xC), 0x108)) goto loc_0047DC37; /* je: equal / zero */

loc_0047DBD2: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    edx = eax + 2;
    MEM32(esi) = edx;
    edx = MEM32(esi + 0x18);
    edi = edi - eax;
    edx--;
    edx--;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esi + 4) = edx;
    if (CMP_LE(edi, ebx)) goto loc_0047DBF7; /* jle: less or equal (signed <=) */

loc_0047DBEA: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00479636(); /* call 0x00479636 */

loc_0047DBF2: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_0047DC29;

loc_0047DBF7: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0047DC15; /* je: equal / zero */

loc_0047DBFC: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    edx = MEM32(edx * 4 + 0x881360);
    eax = ecx;
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = edx + eax * 8;
    goto loc_0047DC1A;

loc_0047DC15: ;
    eax = 0x655E00;

loc_0047DC1A: ;
    if (TEST_Z(MEM8(eax + 4), 0x20)) goto loc_0047DC2C; /* je: equal / zero */

loc_0047DC20: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00479400(); /* call 0x00479400 */

loc_0047DC29: ;
    esp = esp + 0xC;

loc_0047DC2C: ;
    eax = MEM32(esi + 8);
    ebx = MEM32(ebp + 8);
    MEM16(eax) = LO16(ebx);
    goto loc_0047DC52;

loc_0047DC37: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 2);
    POP32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(ebp + 0xC) = LO16(ebx);
    PUSH32(esp, 0); sub_00479636(); /* call 0x00479636 */

loc_0047DC4C: ;
    esp = esp + 0xC;
    MEM32(ebp + 0xC) = eax;

loc_0047DC52: ;
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0xC), edi)) goto loc_0047DC5E; /* je: equal / zero */

loc_0047DC58: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    g_seh_ebp = ebp; sub_0047DC6D(); return; /* tail jmp 0x0047DC6D */

loc_0047DC5E: ;
    eax = ebx;
    eax = eax & 0xFFFF;
    g_seh_ebp = ebp; sub_0047DC72(); return; /* tail jmp 0x0047DC72 */

}

/**
 * sub_0047DC76
 * Original: 0x0047DC76 - 0x0047DD93 (285 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DC76(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0047DC76: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0x1008;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0047DC83: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047938E(); /* call 0x0047938E */

loc_0047DC92: ;
    edi = edi | 0xFFFFFFFFu;
    esp = esp + 0xC;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(eax, edi)) { sub_0047DD93(); return; } /* je: equal / zero */

loc_0047DCA3: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047938E(); /* call 0x0047938E */

loc_0047DCAE: ;
    esp = esp + 0xC;
    if (CMP_EQ(eax, edi)) { sub_0047DD93(); return; } /* je: equal / zero */

loc_0047DCB9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ebx = ebx - eax;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0047DD38; /* jle: less or equal (signed <=) */

loc_0047DCC3: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, MEM32(ebp + 8));
    eax = 0; /* xor self */
    ecx = 0x400;
    edi = ebp + -4104;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0); sub_0047E53C(); /* call 0x0047E53C */

loc_0047DCDF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -8) = eax;
    edi = 0x1000;

loc_0047DCE9: ;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    eax = edi;
    if (CMP_GE(ebx, edi)) goto loc_0047DCF1; /* jge: greater or equal (signed >=) */

loc_0047DCEF: ;
    eax = ebx;

loc_0047DCF1: ;
    PUSH32(esp, eax);
    eax = ebp + -4104;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004794AB(); /* call 0x004794AB */

loc_0047DD01: ;
    esp = esp + 0xC;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0047DD11; /* je: equal / zero */

loc_0047DD09: ;
    ebx = ebx - eax;
    if (CMP_G(ebx & ebx, 0)) goto loc_0047DCE9; /* jg: greater (signed >) */

loc_0047DD0F: ;
    goto loc_0047DD29;

loc_0047DD11: ;
    PUSH32(esp, 0); sub_00471B1D(); /* call 0x00471B1D */

loc_0047DD16: ;
    if (CMP_NE(MEM32(eax), 5)) goto loc_0047DD26; /* jne: not equal / not zero */

loc_0047DD1B: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0047DD20: ;
    MEM32(eax) = 0xD;

loc_0047DD26: ;
    esi = esi | 0xFFFFFFFFu;

loc_0047DD29: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047E53C(); /* call 0x0047E53C */

loc_0047DD34: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0047DD7E;

loc_0047DD38: ;
    if (((int32_t)esi >= 0)) goto loc_0047DD7E; /* jge: greater or equal (signed >=) */

loc_0047DD3A: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047938E(); /* call 0x0047938E */

loc_0047DD47: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047C87B(); /* call 0x0047C87B */

loc_0047DD4F: ;
    esp = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042BE47(); /* call 0x0042BE47 */

loc_0047DD58: ;
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = (uint32_t)(-(int32_t)esi);
    esi--;
    if (CMP_NE(esi, edi)) goto loc_0047DD7E; /* jne: not equal / not zero */

loc_0047DD65: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0047DD6A: ;
    MEM32(eax) = 0xD;
    PUSH32(esp, 0); sub_00471B1D(); /* call 0x00471B1D */

loc_0047DD75: ;
    edi = eax;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0047DD7C: ;
    MEM32(edi) = eax;

loc_0047DD7E: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047938E(); /* call 0x0047938E */

loc_0047DD8B: ;
    esp = esp + 0xC;
    eax = esi;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0047DD95(); return; /* tail jmp 0x0047DD95 */

}

/**
 * sub_0047DD99
 * Original: 0x0047DD99 - 0x0047DDBA (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DD99(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047DD99: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = edx + esi;
    eax = 0; /* xor self */
    if (CMP_B(ecx, edx)) goto loc_0047DDAF; /* jb: below (unsigned <) */

loc_0047DDAB: ;
    if (CMP_AE(ecx, esi)) goto loc_0047DDB2; /* jae: above or equal (unsigned >=) */

loc_0047DDAF: ;
    eax = 0; /* xor self */
    eax++;

loc_0047DDB2: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047DDBA
 * Original: 0x0047DDBA - 0x0047DE18 (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DDBA(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047DDBA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_0047DD99(); /* call 0x0047DD99 */

loc_0047DDCE: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0047DDEC; /* je: equal / zero */

loc_0047DDD5: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_0047DD99(); /* call 0x0047DD99 */

loc_0047DDE2: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0047DDEC; /* je: equal / zero */

loc_0047DDE9: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;

loc_0047DDEC: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_0047DD99(); /* call 0x0047DD99 */

loc_0047DDFA: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0047DE04; /* je: equal / zero */

loc_0047DE01: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;

loc_0047DE04: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_0047DD99(); /* call 0x0047DD99 */

loc_0047DE12: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047DE18
 * Original: 0x0047DE18 - 0x0047DE46 (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DE18(void)
{

loc_0047DE18: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = esi;
    esi = esi + esi;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ecx = ecx >> 0x1F;
    MEM32(eax) = esi;
    esi = edi + edi;
    esi = esi | ecx;
    ecx = MEM32(eax + 8);
    edx = edi;
    edx = edx >> 0x1F;
    ecx = ecx << 1;
    ecx = ecx | edx;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047DE46
 * Original: 0x0047DE46 - 0x0047DE73 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DE46(void)
{

loc_0047DE46: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edx;
    ecx = ecx >> 1;
    esi = esi << 0x1F;
    ecx = ecx | esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    edi = edi << 0x1F;
    ecx = ecx >> 1;
    ecx = ecx | edi;
    edx = edx >> 1;
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047DE73
 * Original: 0x0047DE73 - 0x0047DF21 (174 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DE73(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047DE73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0x404E;
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = edx;
    if (CMP_BE(eax, edx)) goto loc_0047DEE6; /* jbe: below or equal (unsigned <=) */

loc_0047DE97: ;
    MEM32(ebp + 0x10) = eax;

loc_0047DE9A: ;
    esi = ebx;
    edi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, ebx);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_0047DE18(); /* call 0x0047DE18 */

loc_0047DEA8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047DE18(); /* call 0x0047DE18 */

loc_0047DEAE: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047DDBA(); /* call 0x0047DDBA */

loc_0047DEB8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047DE18(); /* call 0x0047DE18 */

loc_0047DEBE: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -16) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0047DDBA(); /* call 0x0047DDBA */

loc_0047DED9: ;
    esp = esp + 0x1C;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_0047DE9A; /* jne: not equal / not zero */

loc_0047DEE4: ;
    edx = 0; /* xor self */

loc_0047DEE6: ;
    if (CMP_NE(MEM32(ebx + 8), edx)) goto loc_0047DF1A; /* jne: not equal / not zero */

loc_0047DEEB: ;
    edi = MEM32(ebx + 8);

loc_0047DEEE: ;
    ecx = MEM32(ebx + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xFFF0;
    eax = ecx;
    eax = eax >> 0x10;
    edi = eax;
    eax = MEM32(ebx);
    esi = eax;
    esi = esi >> 0x10;
    ecx = ecx << 0x10;
    esi = esi | ecx;
    eax = eax << 0x10;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = eax;
    if (CMP_EQ(edi, edx)) goto loc_0047DEEE; /* je: equal / zero */

loc_0047DF17: ;
    MEM32(ebx + 8) = edi;

loc_0047DF1A: ;
    esi = 0x8000;
    g_seh_ebp = ebp; sub_0047DF2F(); return; /* tail jmp 0x0047DF2F */

}

/**
 * sub_0047DF41
 * Original: 0x0047DF41 - 0x0047E143 (514 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047DF41(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047DF41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx + 0xA));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    SET_LO16(eax, MEM16(esi + 0xA));
    PUSH32(esp, edi);
    edi = ecx;
    edx = 0x7FFF;
    ecx = ecx & edx;
    edi = edi ^ eax;
    eax = eax & edx;
    edi = edi & 0x8000;
    (void)0; /* cmp LO16(eax), 0x7FFF - flags set for next jcc */
    edx = ecx + eax;
    MEM32(ebp + 8) = edx;
    if (CMP_AE(LO16(eax), 0x7FFF)) { sub_0047E143(); return; } /* jae: above or equal (unsigned >=) */

loc_0047DF8B: ;
    if (CMP_AE(LO16(ecx), 0x7FFF)) { sub_0047E143(); return; } /* jae: above or equal (unsigned >=) */

loc_0047DF96: ;
    if (CMP_A(LO16(edx), 0xBFFD)) { sub_0047E143(); return; } /* ja: above (unsigned >) */

loc_0047DFA1: ;
    if (CMP_A(LO16(edx), 0x3FBF)) goto loc_0047DFAC; /* ja: above (unsigned >) */

loc_0047DFA8: ;
    eax = 0; /* xor self */
    goto loc_0047DFE6;

loc_0047DFAC: ;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    edx = 0x7FFFFFFF;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_0047DFCE; /* jne: not equal / not zero */

loc_0047DFB6: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    eax = 0; /* xor self */
    if (TEST_NZ(MEM32(esi + 8), edx)) goto loc_0047DFD0; /* jne: not equal / not zero */

loc_0047DFC0: ;
    if (CMP_NE(MEM32(esi + 4), eax)) goto loc_0047DFD0; /* jne: not equal / not zero */

loc_0047DFC5: ;
    if (CMP_NE(MEM32(esi), eax)) goto loc_0047DFD0; /* jne: not equal / not zero */

loc_0047DFC9: ;
    goto loc_0047E13D;

loc_0047DFCE: ;
    eax = 0; /* xor self */

loc_0047DFD0: ;
    if (CMP_NE(LO16(ecx), LO16(eax))) goto loc_0047DFF3; /* jne: not equal / not zero */

loc_0047DFD5: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    if (TEST_NZ(MEM32(ebx + 8), edx)) goto loc_0047DFF3; /* jne: not equal / not zero */

loc_0047DFDD: ;
    if (CMP_NE(MEM32(ebx + 4), eax)) goto loc_0047DFF3; /* jne: not equal / not zero */

loc_0047DFE2: ;
    if (CMP_NE(MEM32(ebx), eax)) goto loc_0047DFF3; /* jne: not equal / not zero */

loc_0047DFE6: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi) = eax;
    g_seh_ebp = ebp; sub_0047E15E(); return; /* tail jmp 0x0047E15E */

loc_0047DFF3: ;
    MEM32(ebp + -16) = eax;
    eax = ebp + -32;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 0xC) = 5;

loc_0047E003: ;
    eax = MEM32(ebp + -16);
    eax = eax + eax;
    if (CMP_LE(MEM32(ebp + 0xC), 0)) goto loc_0047E057; /* jle: less or equal (signed <=) */

loc_0047E00E: ;
    eax = eax + esi;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = ebx + 8;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -24) = eax;

loc_0047E01F: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx));
    eax = ZX16(MEM16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0xFFFFFFFCu;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0); sub_0047DD99(); /* call 0x0047DD99 */

loc_0047E03D: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0047E04A; /* je: equal / zero */

loc_0047E044: ;
    eax = MEM32(ebp + -4);
    MEM16(eax) = MEM16(eax) + 1;

loc_0047E04A: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 2;
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    if ((MEM32(ebp + -24) != 0)) goto loc_0047E01F; /* jne: not equal / not zero */

loc_0047E057: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if (CMP_G(MEM32(ebp + 0xC), 0)) goto loc_0047E003; /* jg: greater (signed >) */

loc_0047E067: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xC002;
    if (CMP_LE(MEM16(ebp + 8), 0)) goto loc_0047E09A; /* jle: less or equal (signed <=) */

loc_0047E075: ;
    if (TEST_NZ(MEM8(ebp + -25), 0x80)) goto loc_0047E093; /* jne: not equal / not zero */

loc_0047E07B: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047DE18(); /* call 0x0047DE18 */

loc_0047E084: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xFFFF;
    (void)0; /* cmp MEM16(ebp + 8), 0 - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_G(MEM16(ebp + 8), 0)) goto loc_0047E075; /* jg: greater (signed >) */

loc_0047E093: ;
    if (CMP_G(MEM16(ebp + 8), 0)) goto loc_0047E0D3; /* jg: greater (signed >) */

loc_0047E09A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xFFFF;
    if (CMP_GE(MEM16(ebp + 8), 0)) goto loc_0047E0D3; /* jge: greater or equal (signed >=) */

loc_0047E0A8: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(-(int32_t)eax);
    ebx = ZX16(LO16(eax));
    MEM32(ebp + 8) = MEM32(ebp + 8) + ebx;

loc_0047E0B3: ;
    if (TEST_Z(MEM8(ebp + -36), 1)) goto loc_0047E0BC; /* je: equal / zero */

loc_0047E0B9: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;

loc_0047E0BC: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047DE46(); /* call 0x0047DE46 */

loc_0047E0C5: ;
    ebx--;
    POP32(esp, ecx);
    if ((ebx != 0)) goto loc_0047E0B3; /* jne: not equal / not zero */

loc_0047E0C9: ;
    if (CMP_EQ(MEM32(ebp + -20), 0)) goto loc_0047E0D3; /* je: equal / zero */

loc_0047E0CF: ;
    MEM8(ebp + -36) = MEM8(ebp + -36) | 1;

loc_0047E0D3: ;
    if (CMP_A(MEM16(ebp + -36), 0x8000)) goto loc_0047E0EA; /* ja: above (unsigned >) */

loc_0047E0DB: ;
    eax = MEM32(ebp + -36);
    eax = eax & 0x1FFFF;
    if (CMP_NE(eax, 0x18000)) goto loc_0047E11F; /* jne: not equal / not zero */

loc_0047E0EA: ;
    if (CMP_NE(MEM32(ebp + -34), 0xFFFFFFFFu)) goto loc_0047E11C; /* jne: not equal / not zero */

loc_0047E0F0: ;
    MEM32(ebp + -34) = MEM32(ebp + -34) & 0;
    if (CMP_NE(MEM32(ebp + -30), 0xFFFFFFFFu)) goto loc_0047E117; /* jne: not equal / not zero */

loc_0047E0FA: ;
    MEM32(ebp + -30) = MEM32(ebp + -30) & 0;
    if (CMP_NE(MEM16(ebp + -26), 0xFFFF)) goto loc_0047E111; /* jne: not equal / not zero */

loc_0047E106: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM16(ebp + -26) = 0x8000;
    goto loc_0047E11F;

loc_0047E111: ;
    MEM16(ebp + -26) = MEM16(ebp + -26) + 1;
    goto loc_0047E11F;

loc_0047E117: ;
    MEM32(ebp + -30) = MEM32(ebp + -30) + 1;
    goto loc_0047E11F;

loc_0047E11C: ;
    MEM32(ebp + -34) = MEM32(ebp + -34) + 1;

loc_0047E11F: ;
    eax = MEM32(ebp + 8);
    if (CMP_AE(LO16(eax), 0x7FFF)) { sub_0047E143(); return; } /* jae: above or equal (unsigned >=) */

loc_0047E128: ;
    SET_LO16(ecx, MEM16(ebp + -34));
    MEM16(esi) = LO16(ecx);
    ecx = MEM32(ebp + -32);
    MEM32(esi + 2) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(esi + 6) = ecx;
    eax = eax | edi;

loc_0047E13D: ;
    MEM16(esi + 0xA) = LO16(eax);
    g_seh_ebp = ebp; sub_0047E15E(); return; /* tail jmp 0x0047E15E */

}

/**
 * sub_0047E163
 * Original: 0x0047E163 - 0x0047E1D9 (118 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E163(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047E163: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0x656340;
    ecx = 0; /* xor self */
    ebx = ebx - 0x60;
    if (CMP_EQ(MEM32(ebp + 0xC), ecx)) goto loc_0047E1D6; /* je: equal / zero */

loc_0047E179: ;
    if (CMP_GE(MEM32(ebp + 0xC), ecx)) goto loc_0047E186; /* jge: greater or equal (signed >=) */

loc_0047E17B: ;
    MEM32(ebp + 0xC) = (uint32_t)(-(int32_t)MEM32(ebp + 0xC));
    ebx = 0x6564A0;
    ebx = ebx - 0x60;

loc_0047E186: ;
    if (CMP_NE(MEM32(ebp + 0x10), ecx)) goto loc_0047E191; /* jne: not equal / not zero */

loc_0047E18B: ;
    eax = MEM32(ebp + 8);
    MEM16(eax) = LO16(ecx);

loc_0047E191: ;
    if (CMP_EQ(MEM32(ebp + 0xC), ecx)) goto loc_0047E1D6; /* je: equal / zero */

loc_0047E196: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0047E198: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = (uint32_t)((int32_t)MEM32(ebp + 0xC) >> 3);
    eax = eax & 7;
    ebx = ebx + 0x54;
    if (CMP_EQ(eax, ecx)) goto loc_0047E1CF; /* je: equal / zero */

loc_0047E1A9: ;
    eax = eax + eax * 2;
    esi = ebx + eax * 4;
    if (CMP_B(MEM16(esi), 0x8000)) goto loc_0047E1C2; /* jb: below (unsigned <) */

loc_0047E1B6: ;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(ebp + -10) = MEM32(ebp + -10) - 1;
    esi = ebp + -12;

loc_0047E1C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047DF41(); /* call 0x0047DF41 */

loc_0047E1CB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = 0; /* xor self */

loc_0047E1CF: ;
    if (CMP_NE(MEM32(ebp + 0xC), ecx)) goto loc_0047E198; /* jne: not equal / not zero */

loc_0047E1D4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0047E1D6: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047E1D9
 * Original: 0x0047E1D9 - 0x0047E2C5 (236 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E1D9(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0047E1D9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    if (TEST_Z(LO8(eax), 0x83)) goto loc_0047E2BE; /* je: equal / zero */

loc_0047E1E9: ;
    if (TEST_NZ(LO8(eax), 0x40)) goto loc_0047E2BE; /* jne: not equal / not zero */

loc_0047E1F1: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0047E200; /* je: equal / zero */

loc_0047E1F5: ;
    eax = eax | 0x20;
    MEM32(esi + 0xC) = eax;
    goto loc_0047E2BE;

loc_0047E200: ;
    eax = eax | 1;
    (void)0; /* test LO16(eax), 0x10C - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(LO16(eax), 0x10C)) goto loc_0047E215; /* jne: not equal / not zero */

loc_0047E20C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004796E1(); /* call 0x004796E1 */

loc_0047E212: ;
    POP32(esp, ecx);
    goto loc_0047E21A;

loc_0047E215: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = eax;

loc_0047E21A: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_0047BF33(); /* call 0x0047BF33 */

loc_0047E228: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0047E2AD; /* je: equal / zero */

loc_0047E232: ;
    if (CMP_EQ(eax, 1)) goto loc_0047E2AD; /* je: equal / zero */

loc_0047E237: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0047E2AD; /* je: equal / zero */

loc_0047E23C: ;
    edx = MEM32(esi + 0xC);
    if (TEST_NZ(LO8(edx), 0x82)) goto loc_0047E27E; /* jne: not equal / not zero */

loc_0047E244: ;
    ecx = MEM32(esi + 0x10);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0047E264; /* je: equal / zero */

loc_0047E24D: ;
    edi = ecx;
    edi = (uint32_t)((int32_t)edi >> 5);
    edi = MEM32(edi * 4 + 0x881360);
    ecx = ecx & 0x1F;
    ecx = ecx + ecx * 4;
    edi = edi + ecx * 8;
    goto loc_0047E269;

loc_0047E264: ;
    edi = 0x655E00;

loc_0047E269: ;
    SET_LO8(ecx, MEM8(edi + 4));
    SET_LO8(ecx, LO8(ecx) & 0x82);
    (void)0; /* cmp LO8(ecx), 0x82 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(LO8(ecx), 0x82)) goto loc_0047E27E; /* jne: not equal / not zero */

loc_0047E275: ;
    edx = edx | 0x2000;
    MEM32(esi + 0xC) = edx;

loc_0047E27E: ;
    if (CMP_NE(MEM32(esi + 0x18), 0x200)) goto loc_0047E29B; /* jne: not equal / not zero */

loc_0047E287: ;
    ecx = MEM32(esi + 0xC);
    if (TEST_Z(LO8(ecx), 8)) goto loc_0047E29B; /* je: equal / zero */

loc_0047E28F: ;
    if (TEST_NZ(HI8(ecx), 4)) goto loc_0047E29B; /* jne: not equal / not zero */

loc_0047E294: ;
    MEM32(esi + 0x18) = 0x1000;

loc_0047E29B: ;
    ecx = MEM32(esi);
    eax = eax + 0xFFFFFFFEu;
    MEM32(esi + 4) = eax;
    eax = ZX16(MEM16(ecx));
    ecx = ecx + 2;
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0047E2AD: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x10;
    eax = eax + 0x10;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | eax;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;

loc_0047E2BE: ;
    eax = 0xFFFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047E2C5
 * Original: 0x0047E2C5 - 0x0047E327 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E2C5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047E2C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    ecx = eax;
    esi = 0x7FFF;
    ecx = ecx & 0x8000;
    eax = eax & esi;
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(ebp + -32) = 0xCC;
    MEM8(ebp + -31) = 0xCC;
    MEM8(ebp + -30) = 0xCC;
    MEM8(ebp + -29) = 0xCC;
    MEM8(ebp + -28) = 0xCC;
    MEM8(ebp + -27) = 0xCC;
    MEM8(ebp + -26) = 0xCC;
    MEM8(ebp + -25) = 0xCC;
    MEM8(ebp + -24) = 0xCC;
    MEM8(ebp + -23) = 0xCC;
    MEM8(ebp + -22) = 0xFB;
    MEM8(ebp + -21) = 0x3F;
    MEM32(ebp + -4) = 1;
    edx = eax;
    if (TEST_Z(LO16(ecx), LO16(ecx))) { sub_0047E327(); return; } /* je: equal / zero */

loc_0047E321: ;
    MEM8(ebx + 2) = 0x2D;
    g_seh_ebp = ebp; sub_0047E32B(); return; /* tail jmp 0x0047E32B */

}

/**
 * sub_0047E53C
 * Original: 0x0047E53C - 0x0047E578 (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E53C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047E53C: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    eax = eax & 0x1F;
    edx = ecx * 4 + 0x881360;
    ecx = eax + eax * 4;
    eax = MEM32(edx);
    ecx = ecx << 3;
    eax = ZX8(MEM8(eax + ecx + 4));
    PUSH32(esp, esi);
    esi = 0x8000;
    eax = eax & 0x80;
    if (CMP_NE(MEM32(esp + 0xC), esi)) { sub_0047E578(); return; } /* jne: not equal / not zero */

loc_0047E56D: ;
    edx = MEM32(edx);
    ecx = edx + ecx + 4;
    MEM8(ecx) = MEM8(ecx) & 0x7F;
    g_seh_ebp = ebp; sub_0047E58B(); return; /* tail jmp 0x0047E58B */

}

/**
 * sub_0047E5B0
 * Original: 0x0047E5B0 - 0x0047E706 (342 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047E5B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    edi = ecx;
    if (CMP_NE(MEM32(ebp + 0xC), 0xFFFFFFFFu)) goto loc_0047E5DB; /* jne: not equal / not zero */

loc_0047E5CB: ;
    edx = ecx + 1;

loc_0047E5CE: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0047E5CE; /* jne: not equal / not zero */

loc_0047E5D5: ;
    ecx = ecx - edx;
    ecx++;
    MEM32(ebp + 0xC) = ecx;

loc_0047E5DB: ;
    if (CMP_LE(MEM32(ebp + 0xC), ebx)) goto loc_0047E6E8; /* jle: less or equal (signed <=) */

loc_0047E5E4: ;
    MEM32(ebp + 0x10) = ebx;

loc_0047E5E7: ;
    ecx = ZX8(MEM8(edi));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(ecx + 0x656618));
    eax = ZX16(LO16(eax));
    MEM32(ebp + -8) = eax;
    eax = eax - MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = eax + edi;
    if (CMP_G(eax, MEM32(ebp + 0xC))) goto loc_0047E6E8; /* jg: greater (signed >) */

loc_0047E608: ;
    ebx = MEM32(ebp + -8);
    eax = ebx;
    eax = eax - edx;
    if ((eax == 0)) goto loc_0047E659; /* je: equal / zero */

loc_0047E611: ;
    eax--;
    if ((eax == 0)) goto loc_0047E64D; /* je: equal / zero */

loc_0047E614: ;
    eax--;
    if ((eax == 0)) goto loc_0047E641; /* je: equal / zero */

loc_0047E617: ;
    eax--;
    if ((eax == 0)) goto loc_0047E635; /* je: equal / zero */

loc_0047E61A: ;
    eax--;
    if ((eax == 0)) goto loc_0047E629; /* je: equal / zero */

loc_0047E61D: ;
    eax--;
    if ((eax != 0)) goto loc_0047E662; /* jne: not equal / not zero */

loc_0047E620: ;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = ecx;
    edx = edx << 6;

loc_0047E629: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = edx << 6;

loc_0047E635: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = edx << 6;

loc_0047E641: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = edx << 6;

loc_0047E64D: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    edx = edx << 6;

loc_0047E659: ;
    eax = ZX8(MEM8(edi));
    edx = edx + eax;
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;

loc_0047E662: ;
    edx = edx - MEM32(ebx * 4 + 0x656600);
    if (CMP_A(edx, MEM32(0x65671C))) goto loc_0047E681; /* ja: above (unsigned >) */

loc_0047E671: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -4);
    if (CMP_G(eax, MEM32(ebp + 0x14))) goto loc_0047E6DC; /* jg: greater (signed >) */

loc_0047E67C: ;
    MEM16(esi) = LO16(edx);
    goto loc_0047E6DA;

loc_0047E681: ;
    if (CMP_BE(edx, MEM32(0x656720))) goto loc_0047E69C; /* jbe: below or equal (unsigned <=) */

loc_0047E689: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -4);
    if (CMP_G(eax, MEM32(ebp + 0x14))) goto loc_0047E6DC; /* jg: greater (signed >) */

loc_0047E694: ;
    SET_LO16(eax, MEM16(0x656718));
    goto loc_0047E6D7;

loc_0047E69C: ;
    edx = edx - MEM32(0x656728);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + 0x14);
    if (CMP_G(MEM32(ebp + -4), eax)) goto loc_0047E6C2; /* jg: greater (signed >) */

loc_0047E6AD: ;
    ecx = MEM32(0x656724);
    ebx = edx;
    ebx = ebx >> LO8(ecx);
    ebx = ebx + MEM32(0x656730);
    MEM16(esi) = LO16(ebx);
    esi++;
    esi++;

loc_0047E6C2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    if (CMP_G(MEM32(ebp + -4), eax)) goto loc_0047E6DC; /* jg: greater (signed >) */

loc_0047E6CA: ;
    eax = MEM32(0x65672C);
    eax = eax & edx;
    eax = eax + MEM32(0x656734);

loc_0047E6D7: ;
    MEM16(esi) = LO16(eax);

loc_0047E6DA: ;
    esi++;
    esi++;

loc_0047E6DC: ;
    eax = MEM32(ebp + 0x10);
    if (CMP_L(eax, MEM32(ebp + 0xC))) goto loc_0047E5E7; /* jl: less (signed <) */

loc_0047E6E8: ;
    (void)0; /* cmp MEM32(ebp + 0x14), 0 - flags set for next jcc */
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_0047E702; /* je: equal / zero */

loc_0047E6F4: ;
    if (CMP_GE(MEM32(ebp + 0x14), eax)) goto loc_0047E702; /* jge: greater or equal (signed >=) */

loc_0047E6F9: ;
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0047E700: ;
    eax = 0; /* xor self */

loc_0047E702: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0047E706
 * Original: 0x0047E706 - 0x0047E7B7 (177 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E706(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047E706: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0047E71F; /* jne: not equal / not zero */

loc_0047E717: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0047E71D: ;
    POP32(esp, ecx);
    eax++;

loc_0047E71F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0x18);
    if (CMP_LE(eax & eax, 0)) goto loc_0047E7A4; /* jle: less or equal (signed <=) */

loc_0047E727: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 0x18);

loc_0047E72E: ;
    SET_LO16(ecx, MEM16(esi));
    edi++;
    if (CMP_A(LO16(ecx), 0x7F)) goto loc_0047E742; /* ja: above (unsigned >) */

loc_0047E738: ;
    if (CMP_G(edi, edx)) goto loc_0047E79E; /* jg: greater (signed >) */

loc_0047E73C: ;
    if (TEST_Z(eax, eax)) goto loc_0047E79E; /* je: equal / zero */

loc_0047E740: ;
    goto loc_0047E79B;

loc_0047E742: ;
    if (CMP_A(LO16(ecx), 0x7FF)) goto loc_0047E75C; /* ja: above (unsigned >) */

loc_0047E749: ;
    if (CMP_G(edi, edx)) goto loc_0047E78A; /* jg: greater (signed >) */

loc_0047E74D: ;
    if (TEST_Z(eax, eax)) goto loc_0047E78A; /* je: equal / zero */

loc_0047E751: ;
    ecx = ecx >> 6;
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    SET_LO8(ecx, LO8(ecx) | 0xC0);
    goto loc_0047E787;

loc_0047E75C: ;
    if (CMP_G(edi, edx)) goto loc_0047E770; /* jg: greater (signed >) */

loc_0047E760: ;
    if (TEST_Z(eax, eax)) goto loc_0047E770; /* je: equal / zero */

loc_0047E764: ;
    ecx = ecx >> 0xC;
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(ecx, LO8(ecx) | 0xE0);
    MEM8(eax) = LO8(ecx);
    eax++;

loc_0047E770: ;
    edi++;
    if (CMP_G(edi, edx)) goto loc_0047E78A; /* jg: greater (signed >) */

loc_0047E775: ;
    if (TEST_Z(eax, eax)) goto loc_0047E78A; /* je: equal / zero */

loc_0047E779: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    ecx = ecx >> 6;
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    SET_LO8(ecx, LO8(ecx) | 0x80);

loc_0047E787: ;
    MEM8(eax) = LO8(ecx);
    eax++;

loc_0047E78A: ;
    edi++;
    if (CMP_G(edi, edx)) goto loc_0047E79E; /* jg: greater (signed >) */

loc_0047E78F: ;
    if (TEST_Z(eax, eax)) goto loc_0047E79E; /* je: equal / zero */

loc_0047E793: ;
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    SET_LO8(ecx, LO8(ecx) | 0x80);

loc_0047E79B: ;
    MEM8(eax) = LO8(ecx);
    eax++;

loc_0047E79E: ;
    esi++;
    esi++;
    ebx--;
    if ((ebx != 0)) goto loc_0047E72E; /* jne: not equal / not zero */

loc_0047E7A3: ;
    POP32(esp, ebx);

loc_0047E7A4: ;
    if (TEST_Z(edx, edx)) { sub_0047E7B7(); return; } /* je: equal / zero */

loc_0047E7A8: ;
    if (CMP_GE(edx, edi)) { sub_0047E7B7(); return; } /* jge: greater or equal (signed >=) */

loc_0047E7AC: ;
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0047E7B3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0047E7B9(); return; /* tail jmp 0x0047E7B9 */

}

/**
 * sub_0047E7BE
 * Original: 0x0047E7BE - 0x0047E7DB (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E7BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047E7BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    if (CMP_NE(MEM32(ebp + 8), 0xFDE8)) { sub_0047E7DB(); return; } /* jne: not equal / not zero */

loc_0047E7CD: ;
    PUSH32(esp, 0x57);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0047E7D4: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0047E875(); return; /* tail jmp 0x0047E875 */

}

/**
 * sub_0047E879
 * Original: 0x0047E879 - 0x0047E896 (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E879(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047E879: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    if (CMP_NE(MEM32(ebp + 8), 0xFDE8)) { sub_0047E896(); return; } /* jne: not equal / not zero */

loc_0047E888: ;
    PUSH32(esp, 0x57);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0047E88F: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0047E93D(); return; /* tail jmp 0x0047E93D */

}

/**
 * sub_0047E950
 * Original: 0x0047E950 - 0x0047EA58 (264 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E950(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0047E950: ;
    eax = MEM32(esp + 4);
    eax = eax | eax;
    if (((int32_t)eax < 0)) goto loc_0047E990; /* js: sign (negative) */

loc_0047E958: ;
    edx = MEM32(esp + 8);
    edx = edx | edx;
    if (((int32_t)edx < 0)) goto loc_0047EA16; /* js: sign (negative) */

loc_0047E964: ;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    ecx = ecx | ecx;
    if (((int32_t)ecx < 0)) { sub_0047EA58(); return; } /* js: sign (negative) */

loc_0047E972: ;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    eax = eax + ecx;
    edx = edx + 0 + _cf; /* adc */
    if (CMP_AE(edx, MEM32(esp + 0xC))) goto loc_0047E98A; /* jae: above or equal (unsigned >=) */

loc_0047E97F: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    eax = eax | eax;
    if (((int32_t)eax < 0)) goto loc_0047E98A; /* js: sign (negative) */

loc_0047E987: ;
    esp += 16; return; /* ret 12 */

loc_0047E98A: ;
    eax = 0; /* xor self */
    eax--;
    esp += 16; return; /* ret 12 */

loc_0047E990: ;
    eax = (uint32_t)(-(int32_t)eax);
    edx = MEM32(esp + 8);
    edx = edx | edx;
    if (((int32_t)edx < 0)) goto loc_0047E9BC; /* js: sign (negative) */

loc_0047E99A: ;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    ecx = ecx | ecx;
    if (((int32_t)ecx < 0)) goto loc_0047E9E6; /* js: sign (negative) */

loc_0047E9A4: ;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    eax = eax + ecx;
    edx = edx + 0 + _cf; /* adc */
    if (CMP_AE(edx, MEM32(esp + 0xC))) goto loc_0047E9E0; /* jae: above or equal (unsigned >=) */

loc_0047E9B1: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    eax = (uint32_t)(-(int32_t)eax);
    if (((int32_t)eax > 0)) goto loc_0047E9E0; /* jg: greater (signed >) */

loc_0047E9B9: ;
    esp += 16; return; /* ret 12 */

loc_0047E9BC: ;
    edx = (uint32_t)(-(int32_t)edx);
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    ecx = ecx | ecx;
    if (((int32_t)ecx < 0)) goto loc_0047E9FE; /* js: sign (negative) */

loc_0047E9C8: ;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    eax = eax + ecx;
    edx = edx + 0 + _cf; /* adc */
    if (CMP_AE(edx, MEM32(esp + 0xC))) goto loc_0047E9E0; /* jae: above or equal (unsigned >=) */

loc_0047E9D5: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    eax = eax | eax;
    if (((int32_t)eax < 0)) goto loc_0047E9E0; /* js: sign (negative) */

loc_0047E9DD: ;
    esp += 16; return; /* ret 12 */

loc_0047E9E0: ;
    eax = 0; /* xor self */
    eax--;
    esp += 16; return; /* ret 12 */

loc_0047E9E6: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    PUSH32(esp, ecx);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    eax = eax + ecx;
    edx = edx + 0 + _cf; /* adc */
    POP32(esp, ecx);
    if (CMP_AE(edx, ecx)) goto loc_0047E9E0; /* jae: above or equal (unsigned >=) */

loc_0047E9F5: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = eax | eax;
    if (((int32_t)eax < 0)) goto loc_0047E9E0; /* js: sign (negative) */

loc_0047E9FB: ;
    esp += 16; return; /* ret 12 */

loc_0047E9FE: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    PUSH32(esp, ecx);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    eax = eax + ecx;
    edx = edx + 0 + _cf; /* adc */
    POP32(esp, ecx);
    if (CMP_AE(edx, ecx)) goto loc_0047E9E0; /* jae: above or equal (unsigned >=) */

loc_0047EA0D: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = (uint32_t)(-(int32_t)eax);
    if (((int32_t)eax > 0)) goto loc_0047E9E0; /* jg: greater (signed >) */

loc_0047EA13: ;
    esp += 16; return; /* ret 12 */

loc_0047EA16: ;
    edx = (uint32_t)(-(int32_t)edx);
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    ecx = ecx | ecx;
    if (((int32_t)ecx < 0)) goto loc_0047EA40; /* js: sign (negative) */

loc_0047EA22: ;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    eax = eax + ecx;
    edx = edx + 0 + _cf; /* adc */
    if (CMP_AE(edx, MEM32(esp + 0xC))) goto loc_0047EA3A; /* jae: above or equal (unsigned >=) */

loc_0047EA2F: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    eax = (uint32_t)(-(int32_t)eax);
    if (((int32_t)eax > 0)) goto loc_0047EA3A; /* jg: greater (signed >) */

loc_0047EA37: ;
    esp += 16; return; /* ret 12 */

loc_0047EA3A: ;
    eax = 0; /* xor self */
    eax--;
    esp += 16; return; /* ret 12 */

loc_0047EA40: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    PUSH32(esp, ecx);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    eax = eax + ecx;
    edx = edx + 0 + _cf; /* adc */
    POP32(esp, ecx);
    if (CMP_AE(edx, ecx)) goto loc_0047EA3A; /* jae: above or equal (unsigned >=) */

loc_0047EA4F: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = eax | eax;
    if (((int32_t)eax < 0)) goto loc_0047E9E0; /* js: sign (negative) */

loc_0047EA55: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0047EA70
 * Original: 0x0047EA70 - 0x0047EAB2 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047EA70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047EA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_0047EA88: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0047EA90; /* jge: greater or equal (signed >=) */

loc_0047EA8C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_0047EA90: ;
    PUSH32(esp, 0); sub_00430655(); /* call 0x00430655 */

loc_0047EA95: ;
    if (CMP_EQ(eax, 3)) goto loc_0047EAA6; /* je: equal / zero */

loc_0047EA9A: ;
    if (CMP_NE(eax, 6)) goto loc_0047EAAD; /* jne: not equal / not zero */

loc_0047EA9F: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) & 0;
    goto loc_0047EAAD;

loc_0047EAA6: ;
    MEM32(ebp + -4) = 1;

loc_0047EAAD: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047EAB2
 * Original: 0x0047EAB2 - 0x0047EAF9 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047EAB2(void)
{

loc_0047EAB2: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7FFFFFED);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x7FFFFFC3;
    eax = eax + edi;
    ebx = 0x7FFFFFFF;
    edx = 0; /* xor self */
    esi = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    esi = edx;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7FFFFFED);
    eax = eax + edi;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    POP32(esp, edi);
    MEM32(ecx) = edx;
    edx = edx & 0x7F;
    ecx = edx * 4 + 0x656738;
    eax = MEM32(ecx);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0047EAF9
 * Original: 0x0047EAF9 - 0x0047EB72 (121 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047EAF9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047EAF9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x380);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x384);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_L(ecx, esi)) goto loc_0047EB12; /* jl: less (signed <) */

loc_0047EB10: ;
    ecx = esi;

loc_0047EB12: ;
    edx = ecx;
    edx = edx - 0x40;
    edi = 0x100;
    ebx = 0x200;
    if ((edx == 0)) { sub_0047EB72(); return; } /* je: equal / zero */

loc_0047EB23: ;
    edx = edx - 0x40;
    if ((edx == 0)) goto loc_0047EB6A; /* je: equal / zero */

loc_0047EB28: ;
    edx = edx - 0x80;
    if ((edx == 0)) goto loc_0047EB62; /* je: equal / zero */

loc_0047EB30: ;
    edx = edx - edi;
    if ((edx == 0)) goto loc_0047EB5A; /* je: equal / zero */

loc_0047EB34: ;
    edx = edx - ebx;
    if ((edx == 0)) goto loc_0047EB52; /* je: equal / zero */

loc_0047EB38: ;
    edx = edx - 0x400;
    if ((edx == 0)) goto loc_0047EB4A; /* je: equal / zero */

loc_0047EB40: ;
    eax = 0x80040002u;
    g_seh_ebp = ebp; sub_0047EC86(); return; /* tail jmp 0x0047EC86 */

loc_0047EB4A: ;
    edx = MEM32(eax + 0x410);
    g_seh_ebp = ebp; sub_0047EB78(); return; /* tail jmp 0x0047EB78 */

loc_0047EB52: ;
    edx = MEM32(eax + 0x414);
    g_seh_ebp = ebp; sub_0047EB78(); return; /* tail jmp 0x0047EB78 */

loc_0047EB5A: ;
    edx = MEM32(eax + 0x418);
    g_seh_ebp = ebp; sub_0047EB78(); return; /* tail jmp 0x0047EB78 */

loc_0047EB62: ;
    edx = MEM32(eax + 0x41C);
    g_seh_ebp = ebp; sub_0047EB78(); return; /* tail jmp 0x0047EB78 */

loc_0047EB6A: ;
    edx = MEM32(eax + 0x420);
    g_seh_ebp = ebp; sub_0047EB78(); return; /* tail jmp 0x0047EB78 */

}

/**
 * sub_0047EC8C
 * Original: 0x0047EC8C - 0x0047ED69 (221 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047EC8C(void)
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

loc_0047EC8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x344));
    PUSH32(esp, 0); sub_0050E7B4(); /* call 0x0050E7B4 */

loc_0047ECA3: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + 0xC);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    ecx = MEM32(eax);
    edx = MEM32(eax + 0x60);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x30), ebx - flags set for next jcc */
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -40) = eax;
    MEMF(ebp + -28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_NE(MEM32(esi + 0x30), ebx)) { sub_0047ED69(); return; } /* jne: not equal / not zero */

loc_0047ECE8: ;
    ecx = MEM32(esi + 0x324);
    ecx = ecx << 2;
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
    eax = MEM32(esi + 0x324);
    if (CMP_GE(eax, MEM32(esi + 0x328))) goto loc_0047ED43; /* jge: greater or equal (signed >=) */

loc_0047ED11: ;
    edi = MEM32(ebp + -24);
    MEM32(ebp + 8) = edi;
    edi = MEM32(ebp + 0x10);
    ecx = edx + eax * 4;
    edi = edi - edx;

loc_0047ED1F: ;
    ebx = MEM32(ebp + 8);
    ebx = (uint32_t)(int32_t)SMEM16(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 2;
    MEM32(ebp + 0x10) = ebx;
    eax++;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    if (CMP_L(eax, MEM32(esi + 0x328))) goto loc_0047ED1F; /* jl: less (signed <) */

loc_0047ED43: ;
    edi = MEM32(esi + 0x328);
    ecx = MEM32(esi + 0x60);
    ecx = ecx - edi;
    ecx = ecx << 2;
    edi = edx + edi * 4;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    g_seh_ebp = ebp; sub_0047F021(); return; /* tail jmp 0x0047F021 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047F02A
 * Original: 0x0047F02A - 0x0047F030 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F02A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F02A: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561210)); return; /* indirect tail jmp */

}

/**
 * sub_0047F030
 * Original: 0x0047F030 - 0x0047F04B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F030(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047F030: ;
    if (CMP_AE(LO8(ecx), 0x40)) { sub_0047F04B(); return; } /* jae: above or equal (unsigned >=) */

loc_0047F035: ;
    if (CMP_AE(LO8(ecx), 0x20)) goto loc_0047F040; /* jae: above or equal (unsigned >=) */

loc_0047F03A: ;
    eax = (eax >> LO8(ecx)) | (edx << (32 - LO8(ecx))); /* shrd */
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    esp += 4; return; /* ret */

loc_0047F040: ;
    eax = edx;
    edx = (uint32_t)((int32_t)edx >> 0x1F);
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0047F054
 * Original: 0x0047F054 - 0x0047F05E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F054(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F054: ;
    edx = 0x75EF98;
    g_seh_ebp = ebp; sub_0047B84F(); return; /* tail jmp 0x0047B84F */

}

/**
 * sub_0047F05E
 * Original: 0x0047F05E - 0x0047F068 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F05E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F05E: ;
    edx = 0x75EF98;
    g_seh_ebp = ebp; sub_0047B7D4(); return; /* tail jmp 0x0047B7D4 */

}

/**
 * sub_0047F080
 * Original: 0x0047F080 - 0x0047F088 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F080(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F080: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_00480100
 * Original: 0x00480100 - 0x00480111 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480100(void)
{
    float xmm0;

loc_00480100: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84D178) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480120
 * Original: 0x00480120 - 0x00480131 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480120(void)
{
    float xmm0;

loc_00480120: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84D17C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480140
 * Original: 0x00480140 - 0x0048014B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480140(void)
{

loc_00480140: ;
    MEM32(0x84D180) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480150
 * Original: 0x00480150 - 0x0048015B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480150(void)
{

loc_00480150: ;
    MEM32(0x84D184) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480160
 * Original: 0x00480160 - 0x00480171 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480160(void)
{
    float xmm0;

loc_00480160: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84D188) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480180
 * Original: 0x00480180 - 0x00480191 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480180(void)
{
    float xmm0;

loc_00480180: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84D18C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004801A0
 * Original: 0x004801A0 - 0x004801AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004801A0(void)
{

loc_004801A0: ;
    MEM32(0x84D190) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004801B0
 * Original: 0x004801B0 - 0x004801C1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004801B0(void)
{
    float xmm0;

loc_004801B0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84D194) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004801D0
 * Original: 0x004801D0 - 0x004801E1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004801D0(void)
{
    float xmm0;

loc_004801D0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84D198) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004801F0
 * Original: 0x004801F0 - 0x004801FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004801F0(void)
{

loc_004801F0: ;
    MEM32(0x84D19C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480200
 * Original: 0x00480200 - 0x00480211 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480200(void)
{
    float xmm0;

loc_00480200: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84D1A0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480220
 * Original: 0x00480220 - 0x00480231 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480220(void)
{
    float xmm0;

loc_00480220: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84D1A4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480240
 * Original: 0x00480240 - 0x00480783 (1347 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480240(void)
{

loc_00480240: ;
    eax = 0; /* xor self */
    edx = 0x5D6F9C;
    PUSH32(esp, ebx);
    MEM32(0x84D208) = edx;
    MEM32(0x84D210) = edx;
    edx = 0x5D6FD4;
    PUSH32(esp, esi);
    ebx = 0x5D6FA8;
    PUSH32(esp, edi);
    edi = 0x5D6F54;
    ecx = 0x5D6F8C;
    MEM32(0x84D238) = edx;
    MEM32(0x84D240) = edx;
    edx = 0x5D6FE4;
    esi = 0x5D6FDC;
    MEM32(0x84D1A8) = eax;
    MEM32(0x84D1AC) = eax;
    MEM32(0x84D1B0) = 0x587BE4;
    MEM32(0x84D1B4) = eax;
    MEM32(0x84D1B8) = eax;
    MEM32(0x84D1BC) = eax;
    MEM32(0x84D1C0) = 0x5D6F4C;
    MEM32(0x84D1C4) = edi;
    MEM32(0x84D1C8) = 0x5D6F5C;
    MEM32(0x84D1CC) = eax;
    MEM32(0x84D1D0) = eax;
    MEM32(0x84D1D4) = eax;
    MEM32(0x84D1D8) = 0x5D6F64;
    MEM32(0x84D1DC) = 0x5D6F6C;
    MEM32(0x84D1E0) = 0x5D6F74;
    MEM32(0x84D1E4) = 0xCF570;
    MEM32(0x84D1E8) = 0x3CFA00;
    MEM32(0x84D1EC) = eax;
    MEM32(0x84D1F0) = 0x5D6F80;
    MEM32(0x84D1F4) = ecx;
    MEM32(0x84D1F8) = 0x5D6F94;
    MEM32(0x84D1FC) = eax;
    MEM32(0x84D200) = 0xCF570;
    MEM32(0x84D204) = 0x9A050;
    MEM32(0x84D20C) = ebx;
    MEM32(0x84D214) = eax;
    MEM32(0x84D218) = eax;
    MEM32(0x84D21C) = eax;
    MEM32(0x84D220) = 0x5D6FB4;
    MEM32(0x84D224) = ebx;
    MEM32(0x84D228) = 0x5D6FC4;
    MEM32(0x84D22C) = 0x55680;
    MEM32(0x84D230) = 0x556C0;
    MEM32(0x84D234) = eax;
    MEM32(0x84D23C) = esi;
    MEM32(0x84D244) = 0xCF570;
    MEM32(0x84D248) = 0x3D49A0;
    MEM32(0x84D24C) = 0xCF570;
    MEM32(0x84D250) = edx;
    MEM32(0x84D254) = ecx;
    MEM32(0x84D258) = 0x5D6FEC;
    MEM32(0x84D25C) = eax;
    MEM32(0x84D260) = eax;
    MEM32(0x84D264) = 0x75050;
    MEM32(0x84D268) = edx;
    MEM32(0x84D26C) = 0x5D6FF8;
    MEM32(0x84D270) = 0x5D7004;
    MEM32(0x84D274) = 0x75190;
    MEM32(0x84D278) = eax;
    MEM32(0x84D27C) = eax;
    MEM32(0x84D280) = edx;
    MEM32(0x84D284) = 0x5D7010;
    MEM32(0x84D288) = 0x5D701C;
    MEM32(0x84D28C) = 0x3C9B40;
    MEM32(0x84D290) = eax;
    MEM32(0x84D294) = eax;
    MEM32(0x84D298) = 0x5D7028;
    MEM32(0x84D29C) = ebx;
    MEM32(0x84D2A0) = 0x5D7028;
    MEM32(0x84D2A4) = eax;
    MEM32(0x84D2A8) = eax;
    MEM32(0x84D2AC) = eax;
    MEM32(0x84D2B0) = 0x5D7034;
    MEM32(0x84D2B4) = edi;
    MEM32(0x84D2B8) = 0x5D703C;
    MEM32(0x84D2BC) = 0x34A250;
    MEM32(0x84D2CC) = esi;
    MEM32(0x84D314) = edi;
    MEM32(0x84D32C) = edi;
    MEM32(0x84D344) = esi;
    MEM32(0x84D374) = esi;
    edi = 0x5D70C0;
    esi = 0x5D70EC;
    MEM32(0x84D340) = edi;
    MEM32(0x84D348) = edi;
    edi = 0x5C520C;
    MEM32(0x84D388) = esi;
    MEM32(0x84D390) = esi;
    esi = 0x5D70F4;
    ebx = 0x5D704C;
    MEM32(0x84D370) = edi;
    MEM32(0x84D378) = edi;
    MEM32(0x84D3A0) = esi;
    MEM32(0x84D3A8) = esi;
    edi = 0x5EE60;
    esi = 0x5D7130;
    MEM32(0x84D2C0) = eax;
    MEM32(0x84D2C4) = eax;
    MEM32(0x84D2C8) = ebx;
    MEM32(0x84D2D0) = ebx;
    MEM32(0x84D2D4) = 0xCF570;
    MEM32(0x84D2D8) = 0x4096A0;
    MEM32(0x84D2DC) = 0x409730;
    MEM32(0x84D2E0) = 0x5D7058;
    MEM32(0x84D2E4) = ecx;
    MEM32(0x84D2E8) = 0x5D7064;
    MEM32(0x84D2EC) = eax;
    MEM32(0x84D2F0) = eax;
    MEM32(0x84D2F4) = eax;
    MEM32(0x84D2F8) = 0x5D7070;
    MEM32(0x84D2FC) = 0x5D7074;
    MEM32(0x84D300) = 0x5D7080;
    MEM32(0x84D304) = 0x75100;
    MEM32(0x84D308) = eax;
    MEM32(0x84D30C) = eax;
    MEM32(0x84D310) = 0x5D708C;
    MEM32(0x84D318) = 0x5D7098;
    MEM32(0x84D31C) = eax;
    MEM32(0x84D320) = 0xCF570;
    MEM32(0x84D324) = eax;
    MEM32(0x84D328) = 0x5D70A8;
    MEM32(0x84D330) = 0x5D70B0;
    MEM32(0x84D334) = eax;
    MEM32(0x84D338) = 0x359E00;
    MEM32(0x84D33C) = eax;
    MEM32(0x84D34C) = 0xCF570;
    MEM32(0x84D350) = eax;
    MEM32(0x84D354) = 0xCF570;
    MEM32(0x84D358) = 0x5D70C8;
    MEM32(0x84D35C) = 0x5D70D4;
    MEM32(0x84D360) = 0x5D70E4;
    MEM32(0x84D364) = eax;
    MEM32(0x84D368) = 0x34F050;
    MEM32(0x84D36C) = 0x34F260;
    MEM32(0x84D37C) = 0x3F9C60;
    MEM32(0x84D380) = 0xCF570;
    MEM32(0x84D384) = 0xCF570;
    MEM32(0x84D38C) = 0x5D6F6C;
    MEM32(0x84D394) = 0xCF570;
    MEM32(0x84D398) = 0x86790;
    MEM32(0x84D39C) = 0x3FA4F0;
    MEM32(0x84D3A4) = 0x5D7104;
    MEM32(0x84D3AC) = eax;
    MEM32(0x84D3B0) = edi;
    MEM32(0x84D3B4) = eax;
    MEM32(0x84D3B8) = 0x5D7110;
    MEM32(0x84D3BC) = ecx;
    MEM32(0x84D3C0) = 0x5D7120;
    MEM32(0x84D3C4) = eax;
    MEM32(0x84D3C8) = eax;
    MEM32(0x84D3CC) = eax;
    MEM32(0x84D3D0) = esi;
    MEM32(0x84D3D4) = 0x5D7138;
    MEM32(0x84D3D8) = esi;
    MEM32(0x84D3DC) = eax;
    MEM32(0x84D3E0) = edi;
    MEM32(0x84D3E4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x84D3E8) = 0x5D7148;
    MEM32(0x84D3EC) = ecx;
    MEM32(0x84D3F0) = 0x5D7154;
    MEM32(0x84D3F4) = eax;
    MEM32(0x84D3F8) = 0x34EDC0;
    MEM32(0x84D3FC) = 0x34EE10;
    MEM32(0x84D400) = eax;
    MEM32(0x84D404) = eax;
    MEM32(0x84D408) = 0x5D715C;
    MEM32(0x84D40C) = 0x3EDC00;
    MEM32(0x84D410) = 0x3EDC10;
    MEM32(0x84D414) = 0x3EDCB0;
    MEM32(0x84D418) = eax;
    MEM32(0x84D41C) = eax;
    MEM32(0x84D420) = 0x5D7168;
    MEM32(0x84D424) = eax;
    MEM32(0x84D428) = 0x3D69D0;
    MEM32(0x84D42C) = 0xCF570;
    MEM32(0x84D430) = edx;
    MEM32(0x84D434) = 0x5D7170;
    MEM32(0x84D438) = 0x5D717C;
    MEM32(0x84D43C) = eax;
    MEM32(0x84D440) = eax;
    MEM32(0x84D444) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00480790
 * Original: 0x00480790 - 0x0048079C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480790(void)
{

loc_00480790: ;
    PUSH32(esp, 0x48C420);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_0048079A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004807A0
 * Original: 0x004807A0 - 0x004807B6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004807A0(void)
{

loc_004807A0: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061BF0(); /* call 0x00061BF0 */

loc_004807AA: ;
    PUSH32(esp, 0x48C4A0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_004807B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004807C0
 * Original: 0x004807C0 - 0x004807CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004807C0(void)
{

loc_004807C0: ;
    MEM32(0x84DABC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004807D0
 * Original: 0x004807D0 - 0x004807DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004807D0(void)
{

loc_004807D0: ;
    MEM32(0x84DAC0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004807E0
 * Original: 0x004807E0 - 0x004807EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004807E0(void)
{

loc_004807E0: ;
    MEM32(0x84DAC4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004807F0
 * Original: 0x004807F0 - 0x00480801 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004807F0(void)
{
    float xmm0;

loc_004807F0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84DAC8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480810
 * Original: 0x00480810 - 0x00480821 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480810(void)
{
    float xmm0;

loc_00480810: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84DACC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480830
 * Original: 0x00480830 - 0x0048083B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480830(void)
{

loc_00480830: ;
    MEM32(0x84DAD0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480840
 * Original: 0x00480840 - 0x0048084B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480840(void)
{

loc_00480840: ;
    MEM32(0x84DAD4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480850
 * Original: 0x00480850 - 0x0048085B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480850(void)
{

loc_00480850: ;
    MEM32(0x84DAD8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480860
 * Original: 0x00480860 - 0x00480871 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480860(void)
{
    float xmm0;

loc_00480860: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84DADC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480880
 * Original: 0x00480880 - 0x00480891 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480880(void)
{
    float xmm0;

loc_00480880: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84DAE0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004808A0
 * Original: 0x004808A0 - 0x004808B1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004808A0(void)
{
    float xmm0;

loc_004808A0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84DAE4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004808C0
 * Original: 0x004808C0 - 0x004808D1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004808C0(void)
{
    float xmm0;

loc_004808C0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84DAE8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004808E0
 * Original: 0x004808E0 - 0x00480935 (85 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004808E0(void)
{

loc_004808E0: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(esp + 3));
    MEM8(0x84DAEC) = LO8(eax);
    PUSH32(esp, 0); sub_00287A70(); /* call 0x00287A70 */

loc_004808F1: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x84DAFC);
    ecx = 9;
    MEM32(0x84DAF4) = eax;
    MEM32(0x84DAF8) = 0;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002D1E60(); /* call 0x002D1E60 */

loc_00480918: ;
    eax = 1;
    PUSH32(esp, 0x48C4E0);
    MEM32(0x84DB0C) = eax;
    MEM32(0x84DB10) = eax;
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00480931: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00480940
 * Original: 0x00480940 - 0x0048094B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480940(void)
{

loc_00480940: ;
    MEM32(0x84DB14) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480950
 * Original: 0x00480950 - 0x00480961 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480950(void)
{
    float xmm0;

loc_00480950: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84DB18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480970
 * Original: 0x00480970 - 0x00480981 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480970(void)
{
    float xmm0;

loc_00480970: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84DB1C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480990
 * Original: 0x00480990 - 0x004809A1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480990(void)
{
    float xmm0;

loc_00480990: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84DB20) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004809B0
 * Original: 0x004809B0 - 0x004809C1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004809B0(void)
{
    float xmm0;

loc_004809B0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84DB24) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004809D0
 * Original: 0x004809D0 - 0x004809DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004809D0(void)
{

loc_004809D0: ;
    MEM32(0x84DB28) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004809E0
 * Original: 0x004809E0 - 0x004809EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004809E0(void)
{

loc_004809E0: ;
    MEM32(0x84DB2C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004809F0
 * Original: 0x004809F0 - 0x00480A01 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004809F0(void)
{
    float xmm0;

loc_004809F0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84DB30) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480A10
 * Original: 0x00480A10 - 0x00480A21 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480A10(void)
{
    float xmm0;

loc_00480A10: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84DB34) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480A30
 * Original: 0x00480A30 - 0x00480A3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480A30(void)
{

loc_00480A30: ;
    MEM32(0x84DB38) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480A40
 * Original: 0x00480A40 - 0x00480A51 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480A40(void)
{
    float xmm0;

loc_00480A40: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84DB3C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480A60
 * Original: 0x00480A60 - 0x00480A71 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480A60(void)
{
    float xmm0;

loc_00480A60: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84DB40) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00480A80
 * Original: 0x00480A80 - 0x00480A8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480A80(void)
{

loc_00480A80: ;
    MEM32(0x84DB44) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480A90
 * Original: 0x00480A90 - 0x00480A9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480A90(void)
{

loc_00480A90: ;
    MEM32(0x84DB48) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480AA0
 * Original: 0x00480AA0 - 0x00480AAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480AA0(void)
{

loc_00480AA0: ;
    MEM32(0x84DB4C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480AB0
 * Original: 0x00480AB0 - 0x00480ABB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480AB0(void)
{

loc_00480AB0: ;
    MEM32(0x84DB50) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480AC0
 * Original: 0x00480AC0 - 0x00480ACB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480AC0(void)
{

loc_00480AC0: ;
    MEM32(0x84DB54) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480AD0
 * Original: 0x00480AD0 - 0x00480ADB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480AD0(void)
{

loc_00480AD0: ;
    MEM32(0x84DB58) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480AE0
 * Original: 0x00480AE0 - 0x00480AEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480AE0(void)
{

loc_00480AE0: ;
    MEM32(0x84DB5C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00480AF0
 * Original: 0x00480AF0 - 0x0048294A (7770 bytes, 1039 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00480AF0(void)
{

loc_00480AF0: ;
    SET_LO8(eax, MEM8(0x6A2E90));
    SET_LO8(ecx, MEM8(0x6A3118));
    SET_LO8(edx, MEM8(0x6A33A0));
    MEM8(0x75BFCC) = LO8(eax);
    SET_LO8(eax, MEM8(0x6A34E8));
    MEM8(0x75BFE4) = LO8(eax);
    SET_LO8(eax, 1);
    MEM32(0x75BFD0) = 0x6A2E98;
    MEM8(0x75BFD4) = LO8(ecx);
    MEM32(0x75BFD8) = 0x6A3120;
    MEM8(0x75BFDC) = LO8(edx);
    MEM32(0x75BFE0) = 0x6A33A8;
    MEM32(0x75BFE8) = 0x6A02B8;
    MEM8(0x75BFEC) = LO8(eax);
    MEM32(0x75BFF0) = 0x6A02CC;
    MEM8(0x75BFF4) = LO8(eax);
    MEM32(0x75BFF8) = 0x6A02E0;
    MEM8(0x75BFFC) = LO8(eax);
    MEM32(0x75C000) = 0x6A02F4;
    MEM8(0x75C004) = LO8(eax);
    MEM32(0x75C008) = 0x6A0308;
    MEM8(0x75C00C) = LO8(eax);
    MEM32(0x75C010) = 0x6A031C;
    MEM8(0x75C014) = LO8(eax);
    MEM32(0x75C018) = 0x6A0330;
    MEM8(0x75C01C) = LO8(eax);
    MEM32(0x75C020) = 0x6A0344;
    MEM8(0x75C024) = LO8(eax);
    MEM32(0x75C028) = 0x6A0358;
    MEM8(0x75C02C) = LO8(eax);
    MEM32(0x75C030) = 0x6A036C;
    MEM8(0x75C034) = LO8(eax);
    MEM32(0x75C038) = 0x6A0380;
    MEM8(0x75C03C) = LO8(eax);
    MEM32(0x75C040) = 0x6A0394;
    MEM8(0x75C044) = LO8(eax);
    MEM32(0x75C048) = 0x6A03A8;
    MEM8(0x75C04C) = LO8(eax);
    MEM32(0x75C050) = 0x6A03BC;
    MEM8(0x75C054) = LO8(eax);
    MEM32(0x75C058) = 0x6A03D0;
    MEM8(0x75C05C) = LO8(eax);
    MEM32(0x75C060) = 0x6A03E4;
    MEM8(0x75C064) = LO8(eax);
    MEM32(0x75C068) = 0x6A03F8;
    MEM8(0x75C06C) = LO8(eax);
    MEM32(0x75C070) = 0x6A040C;
    MEM8(0x75C074) = LO8(eax);
    MEM32(0x75C078) = 0x6A0420;
    MEM8(0x75C07C) = LO8(eax);
    MEM32(0x75C080) = 0x6A0434;
    MEM8(0x75C084) = LO8(eax);
    MEM32(0x75C088) = 0x6A0448;
    MEM8(0x75C08C) = LO8(eax);
    MEM32(0x75C090) = 0x6A045C;
    MEM8(0x75C094) = LO8(eax);
    MEM32(0x75C098) = 0x6A0470;
    MEM8(0x75C09C) = LO8(eax);
    MEM32(0x75C0A0) = 0x6A0484;
    MEM8(0x75C0A4) = LO8(eax);
    MEM32(0x75C0A8) = 0x6A0498;
    MEM8(0x75C0AC) = LO8(eax);
    MEM32(0x75C0B0) = 0x6A04AC;
    MEM8(0x75C0B4) = LO8(eax);
    MEM32(0x75C0B8) = 0x6A04C0;
    MEM8(0x75C0BC) = LO8(eax);
    MEM32(0x75C0C0) = 0x6A04D4;
    MEM8(0x75C0C4) = LO8(eax);
    MEM32(0x75C0C8) = 0x6A04E8;
    MEM8(0x75C0CC) = LO8(eax);
    MEM32(0x75C0D0) = 0x6A04FC;
    MEM8(0x75C0D4) = LO8(eax);
    MEM32(0x75C0D8) = 0x6A0510;
    MEM8(0x75C0DC) = LO8(eax);
    MEM32(0x75C0E0) = 0x6A0524;
    MEM8(0x75C0E4) = LO8(eax);
    MEM32(0x75C0E8) = 0x6A0538;
    MEM8(0x75C0EC) = LO8(eax);
    MEM32(0x75C0F0) = 0x6A054C;
    MEM8(0x75C0F4) = LO8(eax);
    MEM32(0x75C0F8) = 0x6A0560;
    SET_LO8(ecx, MEM8(0x6A0820));
    MEM8(0x75C0FC) = LO8(eax);
    MEM32(0x75C100) = 0x6A0574;
    MEM8(0x75C104) = LO8(eax);
    MEM32(0x75C108) = 0x6A0588;
    MEM8(0x75C10C) = LO8(eax);
    MEM32(0x75C110) = 0x6A059C;
    MEM8(0x75C114) = LO8(eax);
    MEM32(0x75C118) = 0x6A05B0;
    MEM8(0x75C11C) = LO8(eax);
    MEM32(0x75C120) = 0x6A05C4;
    MEM8(0x75C124) = LO8(eax);
    MEM32(0x75C128) = 0x6A05D8;
    MEM8(0x75C12C) = LO8(eax);
    MEM32(0x75C130) = 0x6A05EC;
    MEM8(0x75C134) = LO8(eax);
    MEM32(0x75C138) = 0x6A0600;
    MEM8(0x75C13C) = LO8(eax);
    MEM32(0x75C140) = 0x6A0614;
    MEM8(0x75C144) = LO8(eax);
    MEM32(0x75C148) = 0x6A0628;
    MEM8(0x75C14C) = LO8(eax);
    MEM32(0x75C150) = 0x6A063C;
    MEM8(0x75C154) = LO8(eax);
    MEM32(0x75C158) = 0x6A0650;
    MEM8(0x75C15C) = LO8(eax);
    MEM32(0x75C160) = 0x6A0664;
    MEM8(0x75C164) = LO8(eax);
    MEM32(0x75C168) = 0x6A0678;
    MEM8(0x75C16C) = LO8(eax);
    MEM32(0x75C170) = 0x6A068C;
    MEM8(0x75C174) = LO8(eax);
    MEM32(0x75C178) = 0x6A06A0;
    MEM8(0x75C17C) = LO8(eax);
    MEM32(0x75C180) = 0x6A06B4;
    MEM8(0x75C184) = LO8(eax);
    MEM32(0x75C188) = 0x6A06C8;
    MEM8(0x75C18C) = LO8(eax);
    MEM32(0x75C190) = 0x6A06E0;
    MEM8(0x75C194) = LO8(ecx);
    MEM32(0x75C198) = 0x6A0824;
    MEM8(0x75C19C) = LO8(eax);
    MEM32(0x75C1A0) = 0x6A0838;
    MEM8(0x75C1A4) = LO8(eax);
    MEM32(0x75C1A8) = 0x6A084C;
    MEM8(0x75C1AC) = LO8(eax);
    MEM32(0x75C1B0) = 0x6A0860;
    MEM8(0x75C1B4) = LO8(eax);
    MEM32(0x75C1B8) = 0x6A0874;
    MEM8(0x75C1BC) = LO8(eax);
    MEM32(0x75C1C0) = 0x6A0888;
    MEM8(0x75C1C4) = LO8(eax);
    MEM32(0x75C1C8) = 0x6A089C;
    MEM8(0x75C1CC) = LO8(eax);
    MEM32(0x75C1D0) = 0x6A08B0;
    MEM8(0x75C1D4) = LO8(eax);
    MEM32(0x75C1D8) = 0x6A08C4;
    MEM8(0x75C1DC) = LO8(eax);
    MEM32(0x75C1E0) = 0x6A08D8;
    MEM8(0x75C1E4) = LO8(eax);
    MEM32(0x75C1E8) = 0x6A08EC;
    MEM8(0x75C1EC) = LO8(eax);
    MEM32(0x75C1F0) = 0x6A0900;
    MEM8(0x75C1F4) = LO8(eax);
    MEM32(0x75C1F8) = 0x6A0914;
    MEM8(0x75C1FC) = LO8(eax);
    MEM32(0x75C200) = 0x6A0928;
    MEM8(0x75C204) = LO8(eax);
    MEM32(0x75C208) = 0x6A093C;
    MEM8(0x75C20C) = LO8(eax);
    MEM32(0x75C210) = 0x6A0950;
    MEM8(0x75C214) = LO8(eax);
    MEM32(0x75C218) = 0x6A0964;
    MEM8(0x75C21C) = LO8(eax);
    MEM32(0x75C220) = 0x6A0978;
    MEM8(0x75C224) = LO8(eax);
    MEM32(0x75C228) = 0x6A098C;
    MEM8(0x75C22C) = LO8(eax);
    MEM32(0x75C230) = 0x6A09A0;
    MEM8(0x75C234) = LO8(eax);
    MEM32(0x75C238) = 0x6A09B4;
    SET_LO8(edx, MEM8(0x6A3630));
    MEM8(0x75C23C) = LO8(eax);
    MEM32(0x75C240) = 0x6A09C8;
    MEM8(0x75C244) = LO8(eax);
    MEM32(0x75C248) = 0x6A09DC;
    MEM8(0x75C24C) = LO8(eax);
    MEM32(0x75C250) = 0x6A09F0;
    MEM8(0x75C254) = LO8(eax);
    MEM32(0x75C258) = 0x6A0A04;
    MEM8(0x75C25C) = LO8(eax);
    MEM32(0x75C260) = 0x6A0A18;
    MEM8(0x75C264) = LO8(eax);
    MEM32(0x75C268) = 0x6A0A2C;
    MEM8(0x75C26C) = LO8(eax);
    MEM32(0x75C270) = 0x6A0A40;
    MEM8(0x75C274) = LO8(eax);
    MEM32(0x75C278) = 0x6A0A54;
    MEM8(0x75C27C) = LO8(eax);
    MEM32(0x75C280) = 0x6A0A68;
    MEM8(0x75C284) = LO8(eax);
    MEM32(0x75C288) = 0x6A0A7C;
    MEM8(0x75C28C) = LO8(eax);
    MEM32(0x75C290) = 0x6A0A90;
    MEM8(0x75C294) = LO8(eax);
    MEM32(0x75C298) = 0x6A0AA4;
    MEM8(0x75C29C) = LO8(eax);
    MEM32(0x75C2A0) = 0x6A0AB8;
    MEM8(0x75C2A4) = LO8(eax);
    MEM32(0x75C2A8) = 0x6A0ACC;
    MEM8(0x75C2AC) = LO8(eax);
    MEM32(0x75C2B0) = 0x6A0AE0;
    MEM8(0x75C2B4) = LO8(eax);
    MEM32(0x75C2B8) = 0x6A0AF4;
    MEM8(0x75C2BC) = LO8(eax);
    MEM32(0x75C2C0) = 0x6A0B08;
    MEM8(0x75C2C4) = LO8(eax);
    MEM32(0x75C2C8) = 0x6A0B1C;
    MEM8(0x75C2CC) = LO8(eax);
    MEM32(0x75C2D0) = 0x6A0B30;
    MEM8(0x75C2D4) = LO8(eax);
    MEM32(0x75C2D8) = 0x6A0B44;
    MEM8(0x75C2DC) = LO8(eax);
    MEM32(0x75C2E0) = 0x6A0BA8;
    MEM8(0x75C2E4) = LO8(eax);
    MEM32(0x75C2E8) = 0x6A0BF8;
    MEM8(0x75C2EC) = LO8(eax);
    MEM32(0x75C2F0) = 0x6A34F0;
    MEM8(0x75C2F4) = LO8(edx);
    MEM32(0x75C2F8) = 0x6A0C20;
    MEM8(0x75C2FC) = LO8(eax);
    MEM32(0x75C300) = 0x6A0C34;
    MEM8(0x75C304) = LO8(eax);
    MEM32(0x75C308) = 0x6A0C48;
    MEM8(0x75C30C) = LO8(eax);
    MEM32(0x75C310) = 0x6A0C5C;
    MEM8(0x75C314) = LO8(eax);
    MEM32(0x75C318) = 0x6A0C70;
    MEM8(0x75C31C) = LO8(eax);
    MEM32(0x75C320) = 0x6A0C84;
    MEM8(0x75C324) = LO8(eax);
    MEM32(0x75C328) = 0x6A0C98;
    MEM8(0x75C32C) = LO8(eax);
    MEM32(0x75C330) = 0x6A0CAC;
    MEM8(0x75C334) = LO8(eax);
    MEM32(0x75C338) = 0x6A0CC0;
    MEM8(0x75C33C) = LO8(eax);
    MEM32(0x75C340) = 0x6A0CD4;
    MEM8(0x75C344) = LO8(eax);
    MEM32(0x75C348) = 0x6A0CE8;
    MEM8(0x75C34C) = LO8(eax);
    MEM32(0x75C350) = 0x6A0CFC;
    MEM8(0x75C354) = LO8(eax);
    MEM32(0x75C358) = 0x6A0D10;
    MEM8(0x75C35C) = LO8(eax);
    MEM32(0x75C360) = 0x6A0D24;
    MEM8(0x75C364) = LO8(eax);
    MEM32(0x75C368) = 0x6A0D38;
    MEM8(0x75C36C) = LO8(eax);
    MEM32(0x75C370) = 0x6A0D4C;
    MEM8(0x75C374) = LO8(eax);
    MEM32(0x75C378) = 0x6A0D60;
    MEM8(0x75C37C) = LO8(eax);
    MEM32(0x75C380) = 0x6A0D74;
    MEM8(0x75C384) = LO8(eax);
    MEM32(0x75C388) = 0x6A0D88;
    MEM8(0x75C38C) = LO8(eax);
    MEM32(0x75C390) = 0x6A0D9C;
    MEM8(0x75C394) = LO8(eax);
    MEM32(0x75C398) = 0x6A0DB0;
    MEM8(0x75C39C) = LO8(eax);
    MEM32(0x75C3A0) = 0x6A0DC4;
    MEM8(0x75C3A4) = LO8(eax);
    MEM32(0x75C3A8) = 0x6A0DD8;
    MEM8(0x75C3AC) = LO8(eax);
    MEM32(0x75C3B0) = 0x6A0DEC;
    MEM8(0x75C3B4) = LO8(eax);
    MEM32(0x75C3B8) = 0x6A0E00;
    MEM8(0x75C3BC) = LO8(eax);
    MEM32(0x75C3C0) = 0x6A0E14;
    MEM8(0x75C3C4) = LO8(eax);
    MEM32(0x75C3C8) = 0x6A0E28;
    MEM8(0x75C3CC) = LO8(eax);
    MEM32(0x75C3D0) = 0x6A0E3C;
    MEM8(0x75C3D4) = LO8(eax);
    MEM32(0x75C3D8) = 0x6A0E50;
    MEM8(0x75C3DC) = LO8(eax);
    MEM32(0x75C3E0) = 0x6A0E64;
    MEM8(0x75C3E4) = LO8(eax);
    MEM32(0x75C3E8) = 0x6A0E78;
    MEM8(0x75C3EC) = LO8(eax);
    MEM32(0x75C3F0) = 0x6A0E8C;
    MEM8(0x75C3F4) = LO8(eax);
    MEM32(0x75C3F8) = 0x6A0EA0;
    MEM8(0x75C3FC) = LO8(eax);
    MEM32(0x75C400) = 0x6A0EB4;
    MEM8(0x75C404) = LO8(eax);
    MEM32(0x75C408) = 0x6A0EC8;
    MEM8(0x75C40C) = LO8(eax);
    MEM32(0x75C410) = 0x6A0EDC;
    MEM8(0x75C414) = LO8(eax);
    MEM32(0x75C418) = 0x6A0EF0;
    MEM8(0x75C41C) = LO8(eax);
    MEM32(0x75C420) = 0x6A0F04;
    MEM8(0x75C424) = LO8(eax);
    MEM32(0x75C428) = 0x6A0F18;
    MEM8(0x75C42C) = LO8(eax);
    MEM32(0x75C430) = 0x6A0F2C;
    MEM8(0x75C434) = LO8(eax);
    MEM32(0x75C438) = 0x6A0F40;
    MEM8(0x75C43C) = LO8(eax);
    MEM32(0x75C440) = 0x6A0F54;
    MEM8(0x75C444) = LO8(eax);
    MEM32(0x75C448) = 0x6A0F68;
    MEM8(0x75C44C) = LO8(eax);
    MEM32(0x75C450) = 0x6A0F7C;
    MEM8(0x75C454) = LO8(eax);
    MEM32(0x75C458) = 0x6A0F90;
    MEM8(0x75C45C) = LO8(eax);
    MEM32(0x75C460) = 0x6A0FA4;
    MEM8(0x75C464) = LO8(eax);
    MEM32(0x75C468) = 0x6A0FB8;
    MEM8(0x75C46C) = LO8(eax);
    MEM32(0x75C470) = 0x6A0FCC;
    MEM8(0x75C474) = LO8(eax);
    MEM32(0x75C478) = 0x6A0FE0;
    MEM8(0x75C47C) = LO8(eax);
    MEM32(0x75C480) = 0x6A0FF4;
    MEM8(0x75C484) = LO8(eax);
    MEM32(0x75C488) = 0x6A1008;
    MEM8(0x75C48C) = LO8(eax);
    MEM32(0x75C490) = 0x6A101C;
    MEM8(0x75C494) = LO8(eax);
    MEM32(0x75C498) = 0x6A1030;
    MEM8(0x75C49C) = LO8(eax);
    MEM32(0x75C4A0) = 0x6A1044;
    MEM8(0x75C4A4) = LO8(eax);
    MEM32(0x75C4A8) = 0x6A1058;
    MEM8(0x75C4AC) = LO8(eax);
    MEM32(0x75C4B0) = 0x6A106C;
    MEM8(0x75C4B4) = LO8(eax);
    MEM32(0x75C4B8) = 0x6A1080;
    MEM8(0x75C4BC) = LO8(eax);
    MEM32(0x75C4C0) = 0x6A1094;
    MEM8(0x75C4C4) = LO8(eax);
    MEM32(0x75C4C8) = 0x6A10A8;
    MEM8(0x75C4CC) = LO8(eax);
    MEM32(0x75C4D0) = 0x6A10BC;
    MEM8(0x75C4D4) = LO8(eax);
    MEM32(0x75C4D8) = 0x6A10D0;
    MEM8(0x75C4DC) = LO8(eax);
    MEM32(0x75C4E0) = 0x6A10E4;
    MEM8(0x75C4E4) = LO8(eax);
    MEM32(0x75C4E8) = 0x6A10F8;
    MEM8(0x75C4EC) = LO8(eax);
    MEM32(0x75C4F0) = 0x6A110C;
    MEM8(0x75C4F4) = LO8(eax);
    MEM32(0x75C4F8) = 0x6A1120;
    MEM8(0x75C4FC) = LO8(eax);
    MEM32(0x75C500) = 0x6A1134;
    MEM8(0x75C504) = LO8(eax);
    MEM32(0x75C508) = 0x6A1148;
    MEM8(0x75C50C) = LO8(eax);
    MEM32(0x75C510) = 0x6A115C;
    MEM8(0x75C514) = LO8(eax);
    MEM32(0x75C518) = 0x6A1170;
    MEM8(0x75C51C) = LO8(eax);
    MEM32(0x75C520) = 0x6A1184;
    MEM8(0x75C524) = LO8(eax);
    MEM32(0x75C528) = 0x6A1198;
    MEM8(0x75C52C) = LO8(eax);
    MEM32(0x75C530) = 0x6A11AC;
    MEM8(0x75C534) = LO8(eax);
    MEM32(0x75C538) = 0x6A11C0;
    MEM8(0x75C53C) = LO8(eax);
    MEM32(0x75C540) = 0x6A11D4;
    MEM8(0x75C544) = LO8(eax);
    MEM32(0x75C548) = 0x6A11E8;
    MEM8(0x75C54C) = LO8(eax);
    MEM32(0x75C550) = 0x6A11FC;
    MEM8(0x75C554) = LO8(eax);
    MEM32(0x75C558) = 0x6A1210;
    MEM8(0x75C55C) = LO8(eax);
    MEM32(0x75C560) = 0x6A1224;
    MEM8(0x75C564) = LO8(eax);
    MEM32(0x75C568) = 0x6A1238;
    MEM8(0x75C56C) = LO8(eax);
    MEM32(0x75C570) = 0x6A124C;
    MEM8(0x75C574) = LO8(eax);
    MEM32(0x75C578) = 0x6A1260;
    MEM8(0x75C57C) = LO8(eax);
    MEM32(0x75C580) = 0x6A1274;
    MEM8(0x75C584) = LO8(eax);
    MEM32(0x75C588) = 0x6A1288;
    MEM8(0x75C58C) = LO8(eax);
    MEM32(0x75C590) = 0x6A129C;
    MEM8(0x75C594) = LO8(eax);
    MEM32(0x75C598) = 0x6A12B0;
    MEM8(0x75C59C) = LO8(eax);
    MEM32(0x75C5A0) = 0x6A12C4;
    MEM8(0x75C5A4) = LO8(eax);
    MEM32(0x75C5A8) = 0x6A12D8;
    MEM8(0x75C5AC) = LO8(eax);
    MEM32(0x75C5B0) = 0x6A12EC;
    MEM8(0x75C5B4) = LO8(eax);
    MEM32(0x75C5B8) = 0x6A1300;
    MEM8(0x75C5BC) = LO8(eax);
    MEM32(0x75C5C0) = 0x6A1314;
    MEM8(0x75C5C4) = LO8(eax);
    MEM32(0x75C5C8) = 0x6A133C;
    MEM8(0x75C5CC) = LO8(eax);
    MEM32(0x75C5D0) = 0x6A1350;
    MEM8(0x75C5D4) = LO8(eax);
    MEM32(0x75C5D8) = 0x6A1364;
    MEM8(0x75C5DC) = LO8(eax);
    MEM32(0x75C5E0) = 0x6A1378;
    MEM8(0x75C5E4) = LO8(eax);
    MEM32(0x75C5E8) = 0x6A138C;
    MEM8(0x75C5EC) = LO8(eax);
    MEM32(0x75C5F0) = 0x6A13A0;
    MEM8(0x75C5F4) = LO8(eax);
    MEM32(0x75C5F8) = 0x6A13B4;
    MEM8(0x75C5FC) = LO8(eax);
    MEM32(0x75C600) = 0x6A13C8;
    SET_LO8(ecx, 2);
    MEM8(0x75C604) = LO8(eax);
    MEM32(0x75C608) = 0x6A13DC;
    MEM8(0x75C60C) = LO8(ecx);
    MEM32(0x75C610) = 0x6A1404;
    MEM8(0x75C614) = LO8(eax);
    MEM32(0x75C618) = 0x6A142C;
    MEM8(0x75C61C) = LO8(eax);
    MEM32(0x75C620) = 0x6A1440;
    MEM8(0x75C624) = LO8(eax);
    MEM32(0x75C628) = 0x6A1454;
    MEM8(0x75C62C) = LO8(eax);
    MEM32(0x75C630) = 0x6A1468;
    MEM8(0x75C634) = LO8(eax);
    MEM32(0x75C638) = 0x6A147C;
    MEM8(0x75C63C) = LO8(eax);
    MEM32(0x75C640) = 0x6A1490;
    MEM8(0x75C644) = LO8(eax);
    MEM32(0x75C648) = 0x6A14A4;
    MEM8(0x75C64C) = LO8(eax);
    MEM32(0x75C650) = 0x6A14B8;
    MEM8(0x75C654) = LO8(eax);
    MEM32(0x75C658) = 0x6A14CC;
    MEM8(0x75C65C) = LO8(eax);
    MEM32(0x75C660) = 0x6A14E0;
    MEM8(0x75C664) = LO8(eax);
    MEM32(0x75C668) = 0x6A14F4;
    MEM8(0x75C66C) = LO8(eax);
    MEM32(0x75C670) = 0x6A1508;
    MEM8(0x75C674) = LO8(eax);
    MEM32(0x75C678) = 0x6A151C;
    MEM8(0x75C67C) = LO8(eax);
    MEM32(0x75C680) = 0x6A1530;
    MEM8(0x75C684) = LO8(eax);
    MEM32(0x75C688) = 0x6A1544;
    MEM8(0x75C68C) = LO8(eax);
    MEM32(0x75C690) = 0x6A1558;
    MEM8(0x75C694) = LO8(eax);
    MEM32(0x75C698) = 0x6A156C;
    MEM8(0x75C69C) = LO8(eax);
    MEM32(0x75C6A0) = 0x6A1580;
    MEM8(0x75C6A4) = LO8(eax);
    MEM32(0x75C6A8) = 0x6A1594;
    MEM8(0x75C6AC) = LO8(eax);
    MEM32(0x75C6B0) = 0x6A15A8;
    MEM8(0x75C6B4) = LO8(eax);
    MEM32(0x75C6B8) = 0x6A15BC;
    MEM8(0x75C6BC) = LO8(eax);
    MEM32(0x75C6C0) = 0x6A15D0;
    MEM8(0x75C6C4) = LO8(eax);
    MEM32(0x75C6C8) = 0x6A15E4;
    MEM8(0x75C6CC) = LO8(eax);
    MEM32(0x75C6D0) = 0x6A15F8;
    MEM8(0x75C6D4) = LO8(eax);
    MEM32(0x75C6D8) = 0x6A160C;
    MEM8(0x75C6DC) = LO8(eax);
    MEM32(0x75C6E0) = 0x6A1620;
    MEM8(0x75C6E4) = LO8(eax);
    MEM32(0x75C6E8) = 0x6A1634;
    MEM8(0x75C6EC) = LO8(eax);
    MEM32(0x75C6F0) = 0x6A1648;
    MEM8(0x75C6F4) = LO8(eax);
    MEM32(0x75C6F8) = 0x6A165C;
    MEM8(0x75C6FC) = LO8(eax);
    MEM32(0x75C700) = 0x6A1670;
    MEM8(0x75C704) = LO8(eax);
    MEM32(0x75C708) = 0x6A1684;
    MEM8(0x75C70C) = LO8(eax);
    MEM32(0x75C710) = 0x6A1698;
    MEM8(0x75C714) = LO8(eax);
    MEM32(0x75C718) = 0x6A16AC;
    MEM8(0x75C71C) = LO8(eax);
    MEM32(0x75C720) = 0x6A16C0;
    MEM8(0x75C724) = LO8(eax);
    MEM32(0x75C728) = 0x6A16D4;
    MEM8(0x75C72C) = LO8(eax);
    MEM32(0x75C730) = 0x6A16E8;
    MEM8(0x75C734) = LO8(eax);
    MEM32(0x75C738) = 0x6A16FC;
    MEM8(0x75C73C) = LO8(eax);
    MEM32(0x75C740) = 0x6A1710;
    MEM8(0x75C744) = LO8(eax);
    MEM32(0x75C748) = 0x6A1724;
    MEM8(0x75C74C) = LO8(eax);
    MEM32(0x75C750) = 0x6A1738;
    MEM8(0x75C754) = LO8(eax);
    MEM32(0x75C758) = 0x6A174C;
    MEM8(0x75C75C) = LO8(eax);
    MEM32(0x75C760) = 0x6A1760;
    MEM8(0x75C764) = LO8(eax);
    MEM32(0x75C768) = 0x6A1774;
    MEM8(0x75C76C) = LO8(eax);
    MEM32(0x75C770) = 0x6A1788;
    MEM8(0x75C774) = LO8(eax);
    MEM32(0x75C778) = 0x6A179C;
    MEM8(0x75C77C) = LO8(eax);
    MEM32(0x75C780) = 0x6A17B0;
    MEM8(0x75C784) = LO8(eax);
    MEM32(0x75C788) = 0x6A17C4;
    MEM8(0x75C78C) = LO8(eax);
    MEM32(0x75C790) = 0x6A17D8;
    MEM8(0x75C794) = LO8(eax);
    MEM32(0x75C798) = 0x6A17EC;
    MEM8(0x75C79C) = LO8(eax);
    MEM32(0x75C7A0) = 0x6A1800;
    MEM8(0x75C7A4) = LO8(eax);
    MEM32(0x75C7A8) = 0x6A1814;
    MEM8(0x75C7AC) = LO8(eax);
    MEM32(0x75C7B0) = 0x6A1828;
    MEM8(0x75C7B4) = LO8(eax);
    MEM32(0x75C7B8) = 0x6A183C;
    MEM8(0x75C7BC) = LO8(eax);
    MEM32(0x75C7C0) = 0x6A1850;
    MEM8(0x75C7C4) = LO8(eax);
    MEM32(0x75C7C8) = 0x6A1864;
    MEM8(0x75C7CC) = LO8(eax);
    MEM32(0x75C7D0) = 0x6A1878;
    MEM8(0x75C7D4) = LO8(eax);
    MEM32(0x75C7D8) = 0x6A188C;
    MEM8(0x75C7DC) = LO8(eax);
    MEM32(0x75C7E0) = 0x6A18A0;
    MEM8(0x75C7E4) = LO8(eax);
    MEM32(0x75C7E8) = 0x6A18B4;
    MEM8(0x75C7EC) = LO8(eax);
    MEM32(0x75C7F0) = 0x6A18C8;
    MEM8(0x75C7F4) = LO8(eax);
    MEM32(0x75C7F8) = 0x6A18DC;
    MEM8(0x75C7FC) = LO8(eax);
    MEM32(0x75C800) = 0x6A18F0;
    MEM8(0x75C804) = LO8(eax);
    MEM32(0x75C808) = 0x6A1904;
    MEM8(0x75C80C) = LO8(eax);
    MEM32(0x75C810) = 0x6A1918;
    MEM8(0x75C814) = LO8(eax);
    MEM32(0x75C818) = 0x6A192C;
    MEM8(0x75C81C) = LO8(eax);
    MEM32(0x75C820) = 0x6A1940;
    MEM8(0x75C824) = LO8(eax);
    MEM32(0x75C828) = 0x6A1954;
    MEM8(0x75C82C) = LO8(eax);
    MEM32(0x75C830) = 0x6A1968;
    MEM8(0x75C834) = LO8(eax);
    MEM32(0x75C838) = 0x6A197C;
    MEM8(0x75C83C) = LO8(eax);
    MEM32(0x75C840) = 0x6A1A08;
    MEM8(0x75C844) = LO8(eax);
    MEM32(0x75C848) = 0x6A1A1C;
    MEM8(0x75C84C) = LO8(eax);
    MEM32(0x75C850) = 0x6A1A30;
    MEM8(0x75C854) = LO8(eax);
    MEM32(0x75C858) = 0x6A1A44;
    MEM8(0x75C85C) = LO8(eax);
    MEM32(0x75C860) = 0x6A1A6C;
    MEM8(0x75C864) = LO8(eax);
    MEM32(0x75C868) = 0x6A1990;
    MEM8(0x75C86C) = LO8(eax);
    MEM32(0x75C870) = 0x6A19A4;
    MEM8(0x75C874) = LO8(eax);
    MEM32(0x75C878) = 0x6A19B8;
    MEM8(0x75C87C) = LO8(eax);
    MEM32(0x75C880) = 0x6A19CC;
    MEM8(0x75C884) = LO8(eax);
    MEM32(0x75C888) = 0x6A19F4;
    MEM8(0x75C88C) = LO8(eax);
    MEM32(0x75C890) = 0x6A1A94;
    MEM8(0x75C894) = LO8(eax);
    MEM32(0x75C898) = 0x6A1AA8;
    MEM8(0x75C89C) = LO8(eax);
    MEM32(0x75C8A0) = 0x6A1ABC;
    MEM8(0x75C8A4) = LO8(eax);
    MEM32(0x75C8A8) = 0x6A1AD0;
    MEM8(0x75C8AC) = LO8(eax);
    MEM32(0x75C8B0) = 0x6A1AF8;
    MEM8(0x75C8B4) = LO8(eax);
    MEM32(0x75C8B8) = 0x6A1AE4;
    MEM8(0x75C8BC) = LO8(eax);
    MEM32(0x75C8C0) = 0x6A1B20;
    MEM8(0x75C8C4) = LO8(eax);
    MEM32(0x75C8C8) = 0x6A1B0C;
    MEM8(0x75C8CC) = LO8(eax);
    MEM32(0x75C8D0) = 0x6A1B34;
    MEM8(0x75C8D4) = LO8(eax);
    MEM32(0x75C8D8) = 0x6A1B48;
    MEM8(0x75C8DC) = LO8(eax);
    MEM32(0x75C8E0) = 0x6A1B5C;
    MEM8(0x75C8E4) = LO8(eax);
    MEM32(0x75C8E8) = 0x6A1B70;
    MEM8(0x75C8EC) = LO8(eax);
    MEM32(0x75C8F0) = 0x6A1B84;
    MEM8(0x75C8F4) = LO8(eax);
    MEM32(0x75C8F8) = 0x6A1B98;
    MEM8(0x75C8FC) = LO8(eax);
    MEM32(0x75C900) = 0x6A1BAC;
    MEM8(0x75C904) = LO8(eax);
    MEM32(0x75C908) = 0x6A1BC0;
    MEM8(0x75C90C) = LO8(eax);
    MEM32(0x75C910) = 0x6A1BD4;
    MEM8(0x75C914) = LO8(eax);
    MEM32(0x75C918) = 0x6A1BE8;
    MEM8(0x75C91C) = LO8(eax);
    MEM32(0x75C920) = 0x6A1BFC;
    MEM8(0x75C924) = LO8(eax);
    MEM32(0x75C928) = 0x6A1C10;
    MEM8(0x75C92C) = LO8(eax);
    MEM32(0x75C930) = 0x6A1C24;
    MEM8(0x75C934) = LO8(eax);
    MEM32(0x75C938) = 0x6A1C38;
    MEM8(0x75C93C) = LO8(eax);
    MEM32(0x75C940) = 0x6A1C4C;
    MEM8(0x75C944) = LO8(eax);
    MEM32(0x75C948) = 0x6A1C60;
    MEM8(0x75C94C) = LO8(eax);
    MEM32(0x75C950) = 0x6A1C74;
    MEM8(0x75C954) = LO8(eax);
    MEM32(0x75C958) = 0x6A1C88;
    MEM8(0x75C95C) = LO8(eax);
    MEM32(0x75C960) = 0x6A1C9C;
    MEM8(0x75C964) = LO8(eax);
    MEM32(0x75C968) = 0x6A1CB0;
    MEM8(0x75C96C) = LO8(eax);
    MEM32(0x75C970) = 0x6A1CC4;
    MEM8(0x75C974) = LO8(eax);
    MEM32(0x75C978) = 0x6A1CD8;
    MEM8(0x75C97C) = LO8(eax);
    MEM32(0x75C980) = 0x6A1CEC;
    MEM8(0x75C984) = LO8(eax);
    MEM32(0x75C988) = 0x6A1D00;
    MEM8(0x75C98C) = LO8(eax);
    MEM32(0x75C990) = 0x6A1D14;
    MEM8(0x75C994) = LO8(eax);
    MEM32(0x75C998) = 0x6A1D28;
    MEM8(0x75C99C) = LO8(eax);
    MEM32(0x75C9A0) = 0x6A1D3C;
    MEM8(0x75C9A4) = LO8(eax);
    MEM32(0x75C9A8) = 0x6A1D50;
    MEM8(0x75C9AC) = LO8(eax);
    MEM32(0x75C9B0) = 0x6A1D64;
    MEM8(0x75C9B4) = LO8(eax);
    MEM32(0x75C9B8) = 0x6A1D78;
    MEM8(0x75C9BC) = LO8(eax);
    MEM32(0x75C9C0) = 0x6A1D8C;
    MEM8(0x75C9C4) = LO8(eax);
    MEM32(0x75C9C8) = 0x6A1DA0;
    SET_LO8(edx, MEM8(0x6A22BC));
    MEM8(0x75C9CC) = LO8(eax);
    MEM32(0x75C9D0) = 0x6A1DB4;
    MEM8(0x75C9D4) = LO8(eax);
    MEM32(0x75C9D8) = 0x6A1DC8;
    MEM8(0x75C9DC) = LO8(eax);
    MEM32(0x75C9E0) = 0x6A1DDC;
    MEM8(0x75C9E4) = LO8(eax);
    MEM32(0x75C9E8) = 0x6A1DF0;
    MEM8(0x75C9EC) = LO8(eax);
    MEM32(0x75C9F0) = 0x6A1E04;
    MEM8(0x75C9F4) = LO8(eax);
    MEM32(0x75C9F8) = 0x6A1E18;
    MEM8(0x75C9FC) = LO8(eax);
    MEM32(0x75CA00) = 0x6A1E2C;
    MEM8(0x75CA04) = LO8(eax);
    MEM32(0x75CA08) = 0x6A1E40;
    MEM8(0x75CA0C) = LO8(eax);
    MEM32(0x75CA10) = 0x6A1E54;
    MEM8(0x75CA14) = LO8(eax);
    MEM32(0x75CA18) = 0x6A1E68;
    MEM8(0x75CA1C) = LO8(eax);
    MEM32(0x75CA20) = 0x6A1E7C;
    MEM8(0x75CA24) = LO8(eax);
    MEM32(0x75CA28) = 0x6A1E90;
    MEM8(0x75CA2C) = LO8(eax);
    MEM32(0x75CA30) = 0x6A1EA4;
    MEM8(0x75CA34) = LO8(eax);
    MEM32(0x75CA38) = 0x6A1EB8;
    MEM8(0x75CA3C) = LO8(eax);
    MEM32(0x75CA40) = 0x6A1ECC;
    MEM8(0x75CA44) = LO8(eax);
    MEM32(0x75CA48) = 0x6A1EE0;
    MEM8(0x75CA4C) = LO8(eax);
    MEM32(0x75CA50) = 0x6A1EF4;
    MEM8(0x75CA54) = LO8(eax);
    MEM32(0x75CA58) = 0x6A1F08;
    MEM8(0x75CA5C) = LO8(eax);
    MEM32(0x75CA60) = 0x6A1F1C;
    MEM8(0x75CA64) = LO8(eax);
    MEM32(0x75CA68) = 0x6A1F30;
    MEM8(0x75CA6C) = LO8(eax);
    MEM32(0x75CA70) = 0x6A1F44;
    MEM8(0x75CA74) = LO8(eax);
    MEM32(0x75CA78) = 0x69ECF0;
    MEM8(0x75CA7C) = LO8(eax);
    MEM32(0x75CA80) = 0x6A1F80;
    MEM8(0x75CA84) = LO8(eax);
    MEM32(0x75CA88) = 0x69ED04;
    MEM8(0x75CA8C) = LO8(eax);
    MEM32(0x75CA90) = 0x69ED18;
    MEM8(0x75CA94) = LO8(eax);
    MEM32(0x75CA98) = 0x6A1F94;
    MEM8(0x75CA9C) = LO8(eax);
    MEM32(0x75CAA0) = 0x6A1FA8;
    MEM8(0x75CAA4) = LO8(eax);
    MEM32(0x75CAA8) = 0x6A2010;
    MEM8(0x75CAAC) = 0xD;
    MEM32(0x75CAB0) = 0x6A2114;
    MEM8(0x75CAB4) = LO8(eax);
    MEM32(0x75CAB8) = 0x6A2128;
    MEM8(0x75CABC) = LO8(eax);
    MEM32(0x75CAC0) = 0x6A213C;
    MEM8(0x75CAC4) = LO8(eax);
    MEM32(0x75CAC8) = 0x6A2150;
    MEM8(0x75CACC) = LO8(eax);
    MEM32(0x75CAD0) = 0x6A2164;
    MEM8(0x75CAD4) = LO8(eax);
    MEM32(0x75CAD8) = 0x6A2178;
    MEM8(0x75CADC) = LO8(eax);
    MEM32(0x75CAE0) = 0x6A218C;
    MEM8(0x75CAE4) = LO8(eax);
    MEM32(0x75CAE8) = 0x6A21A0;
    MEM8(0x75CAEC) = LO8(eax);
    MEM32(0x75CAF0) = 0x6A21B4;
    MEM8(0x75CAF4) = LO8(eax);
    MEM32(0x75CAF8) = 0x6A21C8;
    MEM8(0x75CAFC) = LO8(eax);
    MEM32(0x75CB00) = 0x6A21E0;
    MEM8(0x75CB04) = LO8(edx);
    MEM32(0x75CB08) = 0x6A22C0;
    MEM8(0x75CB0C) = LO8(eax);
    MEM32(0x75CB10) = 0x6A22D4;
    MEM8(0x75CB14) = LO8(eax);
    MEM32(0x75CB18) = 0x69ED2C;
    MEM8(0x75CB1C) = LO8(eax);
    MEM32(0x75CB20) = 0x69ED40;
    MEM8(0x75CB24) = LO8(eax);
    MEM32(0x75CB28) = 0x69ED54;
    MEM8(0x75CB2C) = LO8(eax);
    MEM32(0x75CB30) = 0x69ED7C;
    MEM8(0x75CB34) = LO8(eax);
    MEM32(0x75CB38) = 0x69ED90;
    MEM8(0x75CB3C) = LO8(eax);
    MEM32(0x75CB40) = 0x69EDA4;
    MEM8(0x75CB44) = LO8(eax);
    MEM32(0x75CB48) = 0x69EDB8;
    MEM8(0x75CB4C) = LO8(eax);
    MEM32(0x75CB50) = 0x69EDCC;
    MEM8(0x75CB54) = LO8(eax);
    MEM32(0x75CB58) = 0x69EDE0;
    MEM8(0x75CB5C) = LO8(eax);
    MEM32(0x75CB60) = 0x69EE08;
    MEM8(0x75CB64) = LO8(eax);
    MEM32(0x75CB68) = 0x69EE1C;
    MEM8(0x75CB6C) = LO8(eax);
    MEM32(0x75CB70) = 0x69EE30;
    MEM8(0x75CB74) = LO8(eax);
    MEM32(0x75CB78) = 0x69EE44;
    MEM8(0x75CB7C) = LO8(eax);
    MEM32(0x75CB80) = 0x69EE58;
    MEM8(0x75CB84) = LO8(eax);
    MEM32(0x75CB88) = 0x69EE6C;
    MEM8(0x75CB8C) = LO8(eax);
    MEM32(0x75CB90) = 0x69EE80;
    MEM8(0x75CB94) = LO8(eax);
    MEM32(0x75CB98) = 0x69EE94;
    MEM8(0x75CB9C) = LO8(eax);
    MEM32(0x75CBA0) = 0x69EEA8;
    MEM8(0x75CBA4) = LO8(eax);
    MEM32(0x75CBA8) = 0x6A22E8;
    MEM8(0x75CBAC) = LO8(eax);
    MEM32(0x75CBB0) = 0x6A22FC;
    MEM8(0x75CBB4) = LO8(eax);
    MEM32(0x75CBB8) = 0x6A2310;
    MEM8(0x75CBBC) = LO8(eax);
    MEM32(0x75CBC0) = 0x6A0BE4;
    MEM8(0x75CBC4) = LO8(eax);
    MEM32(0x75CBC8) = 0x6A0BD0;
    MEM8(0x75CBCC) = LO8(eax);
    MEM32(0x75CBD0) = 0x6A1FBC;
    MEM8(0x75CBD4) = LO8(eax);
    MEM32(0x75CBD8) = 0x6A1FD0;
    MEM8(0x75CBDC) = LO8(eax);
    MEM32(0x75CBE0) = 0x6A1FE4;
    MEM8(0x75CBE4) = LO8(eax);
    MEM32(0x75CBE8) = 0x6A1FF8;
    MEM8(0x75CBEC) = LO8(eax);
    MEM32(0x75CBF0) = 0x6A0B6C;
    MEM8(0x75CBF4) = LO8(eax);
    MEM32(0x75CBF8) = 0x6A0B80;
    MEM8(0x75CBFC) = LO8(eax);
    MEM32(0x75CC00) = 0x6A0B94;
    MEM8(0x75CC04) = LO8(eax);
    MEM32(0x75CC08) = 0x6A0BBC;
    MEM8(0x75CC0C) = LO8(eax);
    MEM32(0x75CC10) = 0x6A0C0C;
    MEM8(0x75CC14) = LO8(eax);
    MEM32(0x75CC18) = 0x6A2324;
    MEM8(0x75CC1C) = LO8(eax);
    MEM32(0x75CC20) = 0x6A2338;
    MEM8(0x75CC24) = LO8(eax);
    MEM32(0x75CC28) = 0x6A234C;
    MEM8(0x75CC2C) = LO8(eax);
    MEM32(0x75CC30) = 0x6A2360;
    MEM8(0x75CC34) = LO8(eax);
    MEM32(0x75CC38) = 0x6A1418;
    MEM8(0x75CC3C) = LO8(eax);
    MEM32(0x75CC40) = 0x6A2374;
    MEM8(0x75CC44) = LO8(eax);
    MEM32(0x75CC48) = 0x6A2388;
    MEM8(0x75CC4C) = LO8(eax);
    MEM32(0x75CC50) = 0x6A239C;
    MEM8(0x75CC54) = LO8(eax);
    MEM32(0x75CC58) = 0x6A23B0;
    MEM8(0x75CC5C) = LO8(eax);
    MEM32(0x75CC60) = 0x6A23C4;
    MEM8(0x75CC64) = LO8(eax);
    MEM32(0x75CC68) = 0x6A0B58;
    MEM8(0x75CC6C) = LO8(eax);
    MEM32(0x75CC70) = 0x69EED0;
    MEM8(0x75CC74) = LO8(eax);
    MEM32(0x75CC78) = 0x69EEE4;
    MEM8(0x75CC7C) = LO8(eax);
    MEM32(0x75CC80) = 0x69EEF8;
    MEM8(0x75CC84) = LO8(eax);
    MEM32(0x75CC88) = 0x6A1A80;
    MEM8(0x75CC8C) = LO8(eax);
    MEM32(0x75CC90) = 0x6A23D8;
    MEM8(0x75CC94) = LO8(eax);
    MEM32(0x75CC98) = 0x6A23EC;
    MEM8(0x75CC9C) = LO8(eax);
    MEM32(0x75CCA0) = 0x6A2400;
    MEM8(0x75CCA4) = LO8(eax);
    MEM32(0x75CCA8) = 0x6A2414;
    MEM8(0x75CCAC) = LO8(eax);
    MEM32(0x75CCB0) = 0x6A2428;
    MEM8(0x75CCB4) = LO8(eax);
    MEM32(0x75CCB8) = 0x6A243C;
    MEM8(0x75CCBC) = LO8(eax);
    MEM32(0x75CCC0) = 0x6A2450;
    MEM8(0x75CCC4) = LO8(eax);
    MEM32(0x75CCC8) = 0x6A2464;
    MEM8(0x75CCCC) = LO8(eax);
    MEM32(0x75CCD0) = 0x6A2478;
    MEM8(0x75CCD4) = LO8(eax);
    MEM32(0x75CCD8) = 0x6A248C;
    MEM8(0x75CCDC) = LO8(eax);
    MEM32(0x75CCE0) = 0x6A24A0;
    MEM8(0x75CCE4) = LO8(eax);
    MEM32(0x75CCE8) = 0x6A24B4;
    MEM8(0x75CCEC) = LO8(eax);
    MEM32(0x75CCF0) = 0x6A24C8;
    MEM8(0x75CCF4) = LO8(eax);
    MEM32(0x75CCF8) = 0x6A24DC;
    MEM8(0x75CCFC) = LO8(eax);
    MEM32(0x75CD00) = 0x6A24F0;
    MEM8(0x75CD04) = LO8(eax);
    MEM32(0x75CD08) = 0x6A2504;
    MEM8(0x75CD0C) = LO8(eax);
    MEM32(0x75CD10) = 0x6A2518;
    MEM8(0x75CD14) = LO8(eax);
    MEM32(0x75CD18) = 0x6A252C;
    MEM8(0x75CD1C) = LO8(eax);
    MEM32(0x75CD20) = 0x6A2540;
    MEM8(0x75CD24) = LO8(eax);
    MEM32(0x75CD28) = 0x6A2554;
    MEM8(0x75CD2C) = LO8(eax);
    MEM32(0x75CD30) = 0x6A2568;
    MEM8(0x75CD34) = LO8(eax);
    MEM32(0x75CD38) = 0x6A257C;
    MEM8(0x75CD3C) = LO8(eax);
    MEM32(0x75CD40) = 0x6A2590;
    MEM8(0x75CD44) = LO8(eax);
    MEM32(0x75CD48) = 0x6A25A4;
    MEM8(0x75CD4C) = LO8(eax);
    MEM32(0x75CD50) = 0x6A25B8;
    MEM8(0x75CD54) = LO8(eax);
    MEM32(0x75CD58) = 0x6A25CC;
    MEM8(0x75CD5C) = LO8(eax);
    MEM32(0x75CD60) = 0x6A25E0;
    MEM8(0x75CD64) = LO8(eax);
    MEM32(0x75CD68) = 0x6A25F4;
    MEM8(0x75CD6C) = LO8(eax);
    MEM32(0x75CD70) = 0x6A2608;
    MEM8(0x75CD74) = LO8(eax);
    MEM32(0x75CD78) = 0x6A261C;
    MEM8(0x75CD7C) = LO8(eax);
    MEM32(0x75CD80) = 0x6A2630;
    MEM8(0x75CD84) = LO8(eax);
    MEM32(0x75CD88) = 0x6A2644;
    MEM8(0x75CD8C) = LO8(eax);
    MEM32(0x75CD90) = 0x6A2658;
    MEM8(0x75CD94) = LO8(eax);
    MEM32(0x75CD98) = 0x6A266C;
    MEM8(0x75CD9C) = LO8(eax);
    MEM32(0x75CDA0) = 0x6A2680;
    MEM8(0x75CDA4) = LO8(eax);
    MEM32(0x75CDA8) = 0x6A2694;
    MEM8(0x75CDAC) = LO8(eax);
    MEM32(0x75CDB0) = 0x6A26A8;
    MEM8(0x75CDB4) = LO8(eax);
    MEM32(0x75CDB8) = 0x6A26BC;
    MEM8(0x75CDBC) = LO8(eax);
    MEM32(0x75CDC0) = 0x69ED68;
    MEM8(0x75CDC4) = LO8(eax);
    MEM32(0x75CDC8) = 0x69EDF4;
    MEM8(0x75CDCC) = LO8(eax);
    MEM32(0x75CDD0) = 0x69EEBC;
    MEM8(0x75CDD4) = LO8(eax);
    MEM32(0x75CDD8) = 0x6A26D0;
    MEM8(0x75CDDC) = LO8(eax);
    MEM32(0x75CDE0) = 0x6A26E4;
    MEM8(0x75CDE4) = LO8(eax);
    MEM32(0x75CDE8) = 0x6A26F8;
    MEM8(0x75CDEC) = LO8(eax);
    MEM32(0x75CDF0) = 0x6A270C;
    MEM8(0x75CDF4) = LO8(eax);
    MEM32(0x75CDF8) = 0x6A2720;
    MEM8(0x75CDFC) = LO8(eax);
    MEM32(0x75CE00) = 0x6A2734;
    MEM8(0x75CE04) = LO8(eax);
    MEM32(0x75CE08) = 0x6A2748;
    MEM8(0x75CE0C) = LO8(eax);
    MEM32(0x75CE10) = 0x6A275C;
    MEM8(0x75CE14) = LO8(eax);
    MEM32(0x75CE18) = 0x6A2770;
    MEM8(0x75CE1C) = LO8(eax);
    MEM32(0x75CE20) = 0x6A2784;
    MEM8(0x75CE24) = LO8(eax);
    MEM32(0x75CE28) = 0x6A2798;
    MEM8(0x75CE2C) = LO8(eax);
    MEM32(0x75CE30) = 0x6A27AC;
    MEM8(0x75CE34) = LO8(eax);
    MEM32(0x75CE38) = 0x6A27C0;
    MEM8(0x75CE3C) = LO8(eax);
    MEM32(0x75CE40) = 0x6A27D4;
    MEM8(0x75CE44) = LO8(eax);
    MEM32(0x75CE48) = 0x6A27E8;
    MEM8(0x75CE4C) = LO8(eax);
    MEM32(0x75CE50) = 0x6A27FC;
    MEM8(0x75CE54) = LO8(eax);
    MEM32(0x75CE58) = 0x6A2810;
    MEM8(0x75CE5C) = LO8(eax);
    MEM32(0x75CE60) = 0x6A1A58;
    MEM8(0x75CE64) = LO8(eax);
    MEM32(0x75CE68) = 0x6A19E0;
    MEM8(0x75CE6C) = LO8(eax);
    MEM32(0x75CE70) = 0x6A2838;
    MEM8(0x75CE74) = LO8(ecx);
    MEM32(0x75CE78) = 0x6A2860;
    MEM8(0x75CE7C) = LO8(ecx);
    MEM32(0x75CE80) = 0x6A2888;
    MEM8(0x75CE84) = LO8(eax);
    MEM32(0x75CE88) = 0x6A28B0;
    MEM8(0x75CE8C) = LO8(eax);
    MEM32(0x75CE90) = 0x6A28C4;
    MEM8(0x75CE94) = LO8(eax);
    MEM32(0x75CE98) = 0x6A28D8;
    MEM8(0x75CE9C) = LO8(eax);
    MEM32(0x75CEA0) = 0x6A28EC;
    MEM8(0x75CEA4) = LO8(eax);
    MEM32(0x75CEA8) = 0x6A2900;
    MEM8(0x75CEAC) = LO8(eax);
    MEM32(0x75CEB0) = 0x6A2914;
    MEM8(0x75CEB4) = LO8(eax);
    MEM32(0x75CEB8) = 0x6A2950;
    MEM8(0x75CEBC) = LO8(eax);
    MEM32(0x75CEC0) = 0x6A2964;
    MEM8(0x75CEC4) = LO8(eax);
    MEM32(0x75CEC8) = 0x6A29F4;
    MEM8(0x75CECC) = LO8(eax);
    MEM32(0x75CED0) = 0x6A2A08;
    MEM8(0x75CED4) = LO8(eax);
    MEM32(0x75CED8) = 0x6A2A44;
    MEM8(0x75CEDC) = LO8(eax);
    MEM32(0x75CEE0) = 0x6A2A58;
    MEM8(0x75CEE4) = LO8(eax);
    MEM32(0x75CEE8) = 0x6A2A6C;
    MEM8(0x75CEEC) = LO8(eax);
    MEM32(0x75CEF0) = 0x6A289C;
    MEM8(0x75CEF4) = LO8(eax);
    MEM32(0x75CEF8) = 0x6A2A80;
    MEM8(0x75CEFC) = LO8(eax);
    MEM32(0x75CF00) = 0x6A2A94;
    MEM8(0x75CF04) = LO8(eax);
    MEM32(0x75CF08) = 0x6A2AF8;
    MEM8(0x75CF0C) = LO8(eax);
    MEM32(0x75CF10) = 0x6A2B0C;
    MEM8(0x75CF14) = LO8(eax);
    MEM32(0x75CF18) = 0x6A2B20;
    MEM8(0x75CF1C) = LO8(eax);
    MEM32(0x75CF20) = 0x6A1F58;
    MEM8(0x75CF24) = LO8(eax);
    MEM32(0x75CF28) = 0x6A1F6C;
    MEM8(0x75CF2C) = LO8(eax);
    MEM32(0x75CF30) = 0x6A2978;
    MEM8(0x75CF34) = LO8(eax);
    MEM32(0x75CF38) = 0x6A2928;
    MEM8(0x75CF3C) = LO8(eax);
    MEM32(0x75CF40) = 0x6A293C;
    MEM8(0x75CF44) = LO8(eax);
    MEM32(0x75CF48) = 0x6A2AA8;
    MEM8(0x75CF4C) = LO8(eax);
    MEM32(0x75CF50) = 0x6A2B34;
    MEM8(0x75CF54) = LO8(eax);
    MEM32(0x75CF58) = 0x6A2B48;
    MEM8(0x75CF5C) = LO8(eax);
    MEM32(0x75CF60) = 0x6A2B5C;
    MEM8(0x75CF64) = LO8(eax);
    MEM32(0x75CF68) = 0x6A2B70;
    MEM8(0x75CF6C) = LO8(eax);
    MEM32(0x75CF70) = 0x6A2ABC;
    MEM8(0x75CF74) = LO8(eax);
    MEM32(0x75CF78) = 0x6A2AD0;
    MEM8(0x75CF7C) = LO8(eax);
    MEM32(0x75CF80) = 0x6A2BFC;
    MEM8(0x75CF84) = LO8(eax);
    MEM32(0x75CF88) = 0x6A2824;
    MEM8(0x75CF8C) = LO8(eax);
    MEM32(0x75CF90) = 0x6A2AE4;
    MEM8(0x75CF94) = LO8(eax);
    MEM32(0x75CF98) = 0x6A2B84;
    MEM8(0x75CF9C) = LO8(eax);
    MEM32(0x75CFA0) = 0x6A2B98;
    MEM8(0x75CFA4) = LO8(eax);
    MEM32(0x75CFA8) = 0x6A2BAC;
    MEM8(0x75CFAC) = LO8(eax);
    MEM32(0x75CFB0) = 0x6A2BC0;
    MEM8(0x75CFB4) = LO8(eax);
    MEM32(0x75CFB8) = 0x6A2A1C;
    MEM8(0x75CFBC) = LO8(eax);
    MEM32(0x75CFC0) = 0x6A2A30;
    MEM8(0x75CFC4) = LO8(eax);
    MEM32(0x75CFC8) = 0x6A2BD4;
    MEM8(0x75CFCC) = LO8(eax);
    MEM32(0x75CFD0) = 0x6A2BE8;
    MEM8(0x75CFD4) = LO8(eax);
    MEM32(0x75CFD8) = 0x6A1328;
    MEM8(0x75CFDC) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00482950
 * Original: 0x00482950 - 0x0048295A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482950(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00482950: ;
    eax = 0x84DB60;
    g_seh_ebp = ebp; sub_000764C0(); return; /* tail jmp 0x000764C0 */

}

/**
 * sub_00482980
 * Original: 0x00482980 - 0x00482991 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482980(void)
{
    float xmm0;

loc_00482980: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84EB78) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004829A0
 * Original: 0x004829A0 - 0x004829AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004829A0(void)
{

loc_004829A0: ;
    MEM32(0x84EB7C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004829B0
 * Original: 0x004829B0 - 0x004829BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004829B0(void)
{

loc_004829B0: ;
    MEM32(0x84EB80) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004829C0
 * Original: 0x004829C0 - 0x004829CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004829C0(void)
{

loc_004829C0: ;
    MEM32(0x84EB84) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004829D0
 * Original: 0x004829D0 - 0x004829DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004829D0(void)
{

loc_004829D0: ;
    MEM32(0x84EB88) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004829E0
 * Original: 0x004829E0 - 0x004829EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004829E0(void)
{

loc_004829E0: ;
    MEM32(0x84EB8C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004829F0
 * Original: 0x004829F0 - 0x004829FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004829F0(void)
{

loc_004829F0: ;
    MEM32(0x84EB90) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482A00
 * Original: 0x00482A00 - 0x00482A11 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482A00(void)
{
    float xmm0;

loc_00482A00: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84EB94) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482A20
 * Original: 0x00482A20 - 0x00482A31 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482A20(void)
{
    float xmm0;

loc_00482A20: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84EB98) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482A40
 * Original: 0x00482A40 - 0x00482A4C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482A40(void)
{

loc_00482A40: ;
    PUSH32(esp, 0x48C500);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00482A4A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00482A50
 * Original: 0x00482A50 - 0x00482A5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482A50(void)
{

loc_00482A50: ;
    MEM32(0x84EBAC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482A60
 * Original: 0x00482A60 - 0x00482A6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482A60(void)
{

loc_00482A60: ;
    MEM32(0x84EBB0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482A70
 * Original: 0x00482A70 - 0x00482A7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482A70(void)
{

loc_00482A70: ;
    MEM32(0x84EBB4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482A80
 * Original: 0x00482A80 - 0x00482A8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482A80(void)
{

loc_00482A80: ;
    MEM32(0x84EBB8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482A90
 * Original: 0x00482A90 - 0x00482A9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482A90(void)
{

loc_00482A90: ;
    MEM32(0x84EBBC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482AA0
 * Original: 0x00482AA0 - 0x00482AAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482AA0(void)
{

loc_00482AA0: ;
    MEM32(0x84EBC0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482AB0
 * Original: 0x00482AB0 - 0x00482ABB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482AB0(void)
{

loc_00482AB0: ;
    MEM32(0x84EBC4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482AC0
 * Original: 0x00482AC0 - 0x00482ACB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482AC0(void)
{

loc_00482AC0: ;
    MEM32(0x84EBC8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482AD0
 * Original: 0x00482AD0 - 0x00482ADB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482AD0(void)
{

loc_00482AD0: ;
    MEM32(0x84EBCC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482AE0
 * Original: 0x00482AE0 - 0x00482AEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482AE0(void)
{

loc_00482AE0: ;
    MEM32(0x84EBD0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482AF0
 * Original: 0x00482AF0 - 0x00482AFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482AF0(void)
{

loc_00482AF0: ;
    MEM32(0x84EBD4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482B00
 * Original: 0x00482B00 - 0x00482B0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482B00(void)
{

loc_00482B00: ;
    MEM32(0x84EBD8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482B10
 * Original: 0x00482B10 - 0x00482B21 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482B10(void)
{
    float xmm0;

loc_00482B10: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84EBDC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482B30
 * Original: 0x00482B30 - 0x00482B41 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482B30(void)
{
    float xmm0;

loc_00482B30: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84EBE0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482B50
 * Original: 0x00482B50 - 0x00482B5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482B50(void)
{

loc_00482B50: ;
    MEM32(0x84EBE4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482B60
 * Original: 0x00482B60 - 0x00482B6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482B60(void)
{

loc_00482B60: ;
    MEM32(0x84EBE8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482B70
 * Original: 0x00482B70 - 0x00482B7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482B70(void)
{

loc_00482B70: ;
    MEM32(0x84EBEC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482B80
 * Original: 0x00482B80 - 0x00482B91 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482B80(void)
{
    float xmm0;

loc_00482B80: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84EBF0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482BA0
 * Original: 0x00482BA0 - 0x00482BB1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482BA0(void)
{
    float xmm0;

loc_00482BA0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84EBF4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482BC0
 * Original: 0x00482BC0 - 0x00482BCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482BC0(void)
{

loc_00482BC0: ;
    MEM32(0x84EBF8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482BD0
 * Original: 0x00482BD0 - 0x00482BDC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482BD0(void)
{

loc_00482BD0: ;
    PUSH32(esp, 0x48C520);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00482BDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00482BE0
 * Original: 0x00482BE0 - 0x00482BEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482BE0(void)
{

loc_00482BE0: ;
    MEM32(0x84EC0C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482BF0
 * Original: 0x00482BF0 - 0x00482BFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482BF0(void)
{

loc_00482BF0: ;
    MEM32(0x84EC10) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482C00
 * Original: 0x00482C00 - 0x00482C0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482C00(void)
{

loc_00482C00: ;
    MEM32(0x84EC14) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482C10
 * Original: 0x00482C10 - 0x00482C1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482C10(void)
{

loc_00482C10: ;
    MEM32(0x84EC18) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482C20
 * Original: 0x00482C20 - 0x00482C2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482C20(void)
{

loc_00482C20: ;
    MEM32(0x84EC1C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482C30
 * Original: 0x00482C30 - 0x00482C3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482C30(void)
{

loc_00482C30: ;
    MEM32(0x84EC20) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482C40
 * Original: 0x00482C40 - 0x00482C51 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482C40(void)
{
    float xmm0;

loc_00482C40: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84EC24) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482C60
 * Original: 0x00482C60 - 0x00482C71 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482C60(void)
{
    float xmm0;

loc_00482C60: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84EC28) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482C80
 * Original: 0x00482C80 - 0x00482C8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482C80(void)
{

loc_00482C80: ;
    MEM32(0x84EC2C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482C90
 * Original: 0x00482C90 - 0x00482C9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482C90(void)
{

loc_00482C90: ;
    MEM32(0x84EC30) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482CA0
 * Original: 0x00482CA0 - 0x00482CAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482CA0(void)
{

loc_00482CA0: ;
    MEM32(0x84EC34) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482CB0
 * Original: 0x00482CB0 - 0x00482CBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482CB0(void)
{

loc_00482CB0: ;
    MEM32(0x84EC38) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482CC0
 * Original: 0x00482CC0 - 0x00482CCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482CC0(void)
{

loc_00482CC0: ;
    MEM32(0x84EC3C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482CD0
 * Original: 0x00482CD0 - 0x00482CE1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482CD0(void)
{
    float xmm0;

loc_00482CD0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84EC40) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482CF0
 * Original: 0x00482CF0 - 0x00482D01 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482CF0(void)
{
    float xmm0;

loc_00482CF0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84EC44) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482D10
 * Original: 0x00482D10 - 0x00482D1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482D10(void)
{

loc_00482D10: ;
    MEM32(0x84EC48) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482D20
 * Original: 0x00482D20 - 0x00482D31 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482D20(void)
{
    float xmm0;

loc_00482D20: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84EC4C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482D40
 * Original: 0x00482D40 - 0x00482D51 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482D40(void)
{
    float xmm0;

loc_00482D40: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84EC50) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482D60
 * Original: 0x00482D60 - 0x00482D6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482D60(void)
{

loc_00482D60: ;
    MEM32(0x84EC54) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482D70
 * Original: 0x00482D70 - 0x00482D7C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482D70(void)
{

loc_00482D70: ;
    PUSH32(esp, 0x48C560);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00482D7A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00482D80
 * Original: 0x00482D80 - 0x00482D8C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482D80(void)
{

loc_00482D80: ;
    PUSH32(esp, 0x48C570);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00482D8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00482D90
 * Original: 0x00482D90 - 0x00482DA1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482D90(void)
{
    float xmm0;

loc_00482D90: ;
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(0x84EC68) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482DB0
 * Original: 0x00482DB0 - 0x00482DBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482DB0(void)
{

loc_00482DB0: ;
    MEM32(0x84EC6C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482DC0
 * Original: 0x00482DC0 - 0x00482DCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482DC0(void)
{

loc_00482DC0: ;
    MEM32(0x84EC70) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482DD0
 * Original: 0x00482DD0 - 0x00482DE1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482DD0(void)
{
    float xmm0;

loc_00482DD0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84EC74) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482DF0
 * Original: 0x00482DF0 - 0x00482E01 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482DF0(void)
{
    float xmm0;

loc_00482DF0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84EC78) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482E10
 * Original: 0x00482E10 - 0x00482E1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482E10(void)
{

loc_00482E10: ;
    MEM32(0x84EC7C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482E20
 * Original: 0x00482E20 - 0x00482E2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482E20(void)
{

loc_00482E20: ;
    MEM32(0x84EC80) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482E30
 * Original: 0x00482E30 - 0x00482E3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482E30(void)
{

loc_00482E30: ;
    MEM32(0x84EC84) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482E40
 * Original: 0x00482E40 - 0x00482E51 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482E40(void)
{
    float xmm0;

loc_00482E40: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84EC88) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482E60
 * Original: 0x00482E60 - 0x00482E71 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482E60(void)
{
    float xmm0;

loc_00482E60: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84EC8C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482E80
 * Original: 0x00482E80 - 0x00482E8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482E80(void)
{

loc_00482E80: ;
    MEM32(0x84EC90) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482E90
 * Original: 0x00482E90 - 0x00482E9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482E90(void)
{

loc_00482E90: ;
    MEM32(0x84EC94) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482EA0
 * Original: 0x00482EA0 - 0x00482EAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482EA0(void)
{

loc_00482EA0: ;
    MEM32(0x84EC98) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482EB0
 * Original: 0x00482EB0 - 0x00482EBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482EB0(void)
{

loc_00482EB0: ;
    MEM32(0x84EC9C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482EC0
 * Original: 0x00482EC0 - 0x00482ECB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482EC0(void)
{

loc_00482EC0: ;
    MEM32(0x84ECA0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482ED0
 * Original: 0x00482ED0 - 0x00482EDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482ED0(void)
{

loc_00482ED0: ;
    MEM32(0x84ECA4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482EE0
 * Original: 0x00482EE0 - 0x00482EEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482EE0(void)
{

loc_00482EE0: ;
    MEM32(0x84ECA8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482EF0
 * Original: 0x00482EF0 - 0x00482F01 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482EF0(void)
{
    float xmm0;

loc_00482EF0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ECAC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482F10
 * Original: 0x00482F10 - 0x00482F21 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482F10(void)
{
    float xmm0;

loc_00482F10: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ECB0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482F30
 * Original: 0x00482F30 - 0x00482F3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482F30(void)
{

loc_00482F30: ;
    MEM32(0x84ECB4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482F40
 * Original: 0x00482F40 - 0x00482F4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482F40(void)
{

loc_00482F40: ;
    MEM32(0x84ECB8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482F50
 * Original: 0x00482F50 - 0x00482F61 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482F50(void)
{
    float xmm0;

loc_00482F50: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ECBC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482F70
 * Original: 0x00482F70 - 0x00482F81 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482F70(void)
{
    float xmm0;

loc_00482F70: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ECC0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482F90
 * Original: 0x00482F90 - 0x00482F9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482F90(void)
{

loc_00482F90: ;
    MEM32(0x84ECC4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482FA0
 * Original: 0x00482FA0 - 0x00482FB1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482FA0(void)
{
    float xmm0;

loc_00482FA0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ECC8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482FC0
 * Original: 0x00482FC0 - 0x00482FD1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482FC0(void)
{
    float xmm0;

loc_00482FC0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ECCC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00482FE0
 * Original: 0x00482FE0 - 0x00482FEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482FE0(void)
{

loc_00482FE0: ;
    MEM32(0x84ECD0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00482FF0
 * Original: 0x00482FF0 - 0x00483001 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00482FF0(void)
{
    float xmm0;

loc_00482FF0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ECD4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483010
 * Original: 0x00483010 - 0x00483021 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483010(void)
{
    float xmm0;

loc_00483010: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ECD8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483030
 * Original: 0x00483030 - 0x0048303B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483030(void)
{

loc_00483030: ;
    MEM32(0x84ECDC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483040
 * Original: 0x00483040 - 0x0048304B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483040(void)
{

loc_00483040: ;
    MEM32(0x84ECE0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483050
 * Original: 0x00483050 - 0x0048305B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483050(void)
{

loc_00483050: ;
    MEM32(0x84ECE4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483060
 * Original: 0x00483060 - 0x0048306B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483060(void)
{

loc_00483060: ;
    MEM32(0x84ECE8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483070
 * Original: 0x00483070 - 0x0048307B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483070(void)
{

loc_00483070: ;
    MEM32(0x84ECEC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483080
 * Original: 0x00483080 - 0x0048308B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483080(void)
{

loc_00483080: ;
    MEM32(0x84ECF0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483090
 * Original: 0x00483090 - 0x0048309B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483090(void)
{

loc_00483090: ;
    MEM32(0x84ECF4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004830A0
 * Original: 0x004830A0 - 0x004830AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004830A0(void)
{

loc_004830A0: ;
    MEM32(0x84ECF8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004830B0
 * Original: 0x004830B0 - 0x004830C1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004830B0(void)
{
    float xmm0;

loc_004830B0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ECFC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004830D0
 * Original: 0x004830D0 - 0x004830E1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004830D0(void)
{
    float xmm0;

loc_004830D0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ED00) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004830F0
 * Original: 0x004830F0 - 0x004830FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004830F0(void)
{

loc_004830F0: ;
    MEM32(0x84ED04) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483100
 * Original: 0x00483100 - 0x00483111 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483100(void)
{
    float xmm0;

loc_00483100: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ED08) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483120
 * Original: 0x00483120 - 0x00483131 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483120(void)
{
    float xmm0;

loc_00483120: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ED0C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483140
 * Original: 0x00483140 - 0x0048314B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483140(void)
{

loc_00483140: ;
    MEM32(0x84ED10) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483150
 * Original: 0x00483150 - 0x00483161 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483150(void)
{
    float xmm0;

loc_00483150: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ED14) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483170
 * Original: 0x00483170 - 0x00483181 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483170(void)
{
    float xmm0;

loc_00483170: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ED18) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483190
 * Original: 0x00483190 - 0x0048319B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483190(void)
{

loc_00483190: ;
    MEM32(0x84ED1C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004831A0
 * Original: 0x004831A0 - 0x004831B1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004831A0(void)
{
    float xmm0;

loc_004831A0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ED20) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004831C0
 * Original: 0x004831C0 - 0x004831D1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004831C0(void)
{
    float xmm0;

loc_004831C0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ED24) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004831E0
 * Original: 0x004831E0 - 0x004831EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004831E0(void)
{

loc_004831E0: ;
    MEM32(0x84ED28) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004831F0
 * Original: 0x004831F0 - 0x004831FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004831F0(void)
{

loc_004831F0: ;
    MEM32(0x84ED2C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483200
 * Original: 0x00483200 - 0x0048320B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483200(void)
{

loc_00483200: ;
    MEM32(0x84ED30) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483210
 * Original: 0x00483210 - 0x0048321B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483210(void)
{

loc_00483210: ;
    MEM32(0x84ED34) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483220
 * Original: 0x00483220 - 0x0048322B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483220(void)
{

loc_00483220: ;
    MEM32(0x84ED38) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483230
 * Original: 0x00483230 - 0x00483241 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483230(void)
{
    float xmm0;

loc_00483230: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ED3C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483250
 * Original: 0x00483250 - 0x00483261 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483250(void)
{
    float xmm0;

loc_00483250: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ED40) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483270
 * Original: 0x00483270 - 0x0048327B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483270(void)
{

loc_00483270: ;
    MEM32(0x84ED44) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483280
 * Original: 0x00483280 - 0x00483291 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483280(void)
{
    float xmm0;

loc_00483280: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ED48) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004832A0
 * Original: 0x004832A0 - 0x004832B1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004832A0(void)
{
    float xmm0;

loc_004832A0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ED4C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004832C0
 * Original: 0x004832C0 - 0x004832CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004832C0(void)
{

loc_004832C0: ;
    MEM32(0x84ED50) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004832D0
 * Original: 0x004832D0 - 0x004832DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004832D0(void)
{

loc_004832D0: ;
    MEM32(0x84ED54) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004832E0
 * Original: 0x004832E0 - 0x004832EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004832E0(void)
{

loc_004832E0: ;
    MEM32(0x84ED58) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004832F0
 * Original: 0x004832F0 - 0x00483301 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004832F0(void)
{
    float xmm0;

loc_004832F0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ED5C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483310
 * Original: 0x00483310 - 0x00483321 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483310(void)
{
    float xmm0;

loc_00483310: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ED60) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483330
 * Original: 0x00483330 - 0x0048333B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483330(void)
{

loc_00483330: ;
    MEM32(0x84ED64) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483340
 * Original: 0x00483340 - 0x00483351 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483340(void)
{
    float xmm0;

loc_00483340: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ED68) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483360
 * Original: 0x00483360 - 0x00483371 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483360(void)
{
    float xmm0;

loc_00483360: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ED6C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483380
 * Original: 0x00483380 - 0x0048338B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483380(void)
{

loc_00483380: ;
    MEM32(0x84ED70) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483390
 * Original: 0x00483390 - 0x0048339B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483390(void)
{

loc_00483390: ;
    MEM32(0x84ED74) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004833A0
 * Original: 0x004833A0 - 0x004833B1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004833A0(void)
{
    float xmm0;

loc_004833A0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x84ED78) = xmm0; /* movss */
    esp += 4; return; /* ret */

}
