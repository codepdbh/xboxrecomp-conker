/**
 * Burnout 3 - Recompiled code chunk 25
 * Functions: 250 (0x0023EB10 - 0x00250240)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0023EB10
 * Original: 0x0023EB10 - 0x0023EB26 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EB10(void)
{

loc_0023EB10: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023EB17: ;
    MEM32(eax + 0x20) = 2;
    MEM8(0x849C24) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0023EB30
 * Original: 0x0023EB30 - 0x0023EB46 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EB30(void)
{

loc_0023EB30: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023EB37: ;
    MEM32(eax + 0x20) = 3;
    MEM8(0x849C24) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0023EB50
 * Original: 0x0023EB50 - 0x0023EB66 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EB50(void)
{

loc_0023EB50: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023EB57: ;
    MEM32(eax + 0x20) = 4;
    MEM8(0x849C24) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0023EB70
 * Original: 0x0023EB70 - 0x0023EB86 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EB70(void)
{

loc_0023EB70: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023EB77: ;
    MEM32(eax + 0x20) = 5;
    MEM8(0x849C24) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0023EB90
 * Original: 0x0023EB90 - 0x0023EBB4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EB90(void)
{
    int _cf = 0; /* carry flag */

loc_0023EB90: ;
    eax = (uint32_t)(int32_t)SMEM8(0x86298E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(0x862CD0);
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4 + 0x142C);
    ecx = 0; /* xor self */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023EBC0
 * Original: 0x0023EBC0 - 0x0023EBE7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EBC0(void)
{
    int _cf = 0; /* carry flag */

loc_0023EBC0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x86298E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(0x862CD0);
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4 + 0x142C);
    ecx = 1;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023EBF0
 * Original: 0x0023EBF0 - 0x0023EC17 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EBF0(void)
{
    int _cf = 0; /* carry flag */

loc_0023EBF0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x86298E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(0x862CD0);
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4 + 0x142C);
    ecx = 2;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023EC20
 * Original: 0x0023EC20 - 0x0023EC47 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EC20(void)
{
    int _cf = 0; /* carry flag */

loc_0023EC20: ;
    eax = (uint32_t)(int32_t)SMEM8(0x86298E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(0x862CD0);
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4 + 0x142C);
    ecx = 3;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023EC50
 * Original: 0x0023EC50 - 0x0023EC77 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EC50(void)
{
    int _cf = 0; /* carry flag */

loc_0023EC50: ;
    eax = (uint32_t)(int32_t)SMEM8(0x86298E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(0x862CD0);
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4 + 0x142C);
    ecx = 4;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023EC80
 * Original: 0x0023EC80 - 0x0023ECA7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EC80(void)
{
    int _cf = 0; /* carry flag */

loc_0023EC80: ;
    eax = (uint32_t)(int32_t)SMEM8(0x86298E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(0x862CD0);
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4 + 0x142C);
    ecx = 5;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023ECB0
 * Original: 0x0023ECB0 - 0x0023ED64 (180 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023ECB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023ECB0: ;
    esp = esp - 0x24;
    eax = (uint32_t)(int32_t)SMEM8(0x86298E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esp + 4) = eax;
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0023ECE1; /* jne: not equal / not zero */

loc_0023ECDC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0023ECE1: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    ebp = 0x10;
    if (CMP_EQ(esi, ebx)) goto loc_0023ED2D; /* je: equal / zero */

loc_0023ED0D: ;
    if (CMP_B(MEM32(esi + 0x80), ebp)) goto loc_0023ED2D; /* jb: below (unsigned <) */

loc_0023ED15: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023ED1F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023ED26: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0023ED4D; /* jne: not equal / not zero */

loc_0023ED2D: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023ED3F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023ED46: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0023ED64(); return; } /* je: equal / zero */

loc_0023ED4D: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x5FA188;
    MEM32(eax + 8) = 0x23EAD0;
    MEM8(eax + 0xC) = LO8(ebx);
    edi = eax;
    g_seh_ebp = ebp; sub_0023ED66(); return; /* tail jmp 0x0023ED66 */

}

/**
 * sub_0023F410
 * Original: 0x0023F410 - 0x0023F6CF (703 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F410(void)
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

loc_0023F410: ;
    PUSH32(esp, 0); sub_0023FF70(); /* call 0x0023FF70 */

loc_0023F415: ;
    eax--;
    if ((eax == 0)) goto loc_0023F584; /* je: equal / zero */

loc_0023F41C: ;
    eax--;
    if ((eax == 0)) goto loc_0023F4CC; /* je: equal / zero */

loc_0023F423: ;
    eax--;
    if ((eax != 0)) goto loc_0023F6CE; /* jne: not equal / not zero */

loc_0023F42A: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0023F431: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023F45C; /* jne: not equal / not zero */

loc_0023F440: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F450: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023F45C: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023F461: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023F6CE; /* je: equal / zero */

loc_0023F469: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F473: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023F49B; /* jae: above or equal (unsigned >=) */

loc_0023F481: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F48B: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023F6CE; /* jbe: below or equal (unsigned <=) */

loc_0023F49B: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F4A5: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F4BB: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x1D;
    esp += 4; return; /* ret */

loc_0023F4CC: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    eax = 0xAC;
    PUSH32(esp, edx);
    MEM32(0x87C8F4) = eax;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_0023F4E9: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023F514; /* jne: not equal / not zero */

loc_0023F4F8: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F508: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023F514: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023F519: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023F6CE; /* je: equal / zero */

loc_0023F521: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F52B: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023F553; /* jae: above or equal (unsigned >=) */

loc_0023F539: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F543: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023F6CE; /* jbe: below or equal (unsigned <=) */

loc_0023F553: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F55D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F573: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x1E;
    esp += 4; return; /* ret */

loc_0023F584: ;
    SET_LO8(eax, MEM8(0x849B80));
    SET_LO8(ecx, MEM8(0x87B388));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    eax = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023F63A; /* je: equal / zero */

loc_0023F59D: ;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023F5BD; /* jne: not equal / not zero */

loc_0023F5A1: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F5B1: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023F5BD: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023F5C2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023F6CD; /* je: equal / zero */

loc_0023F5CA: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F5D4: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023F5FC; /* jae: above or equal (unsigned >=) */

loc_0023F5E2: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F5EC: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023F6CD; /* jbe: below or equal (unsigned <=) */

loc_0023F5FC: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F606: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F61C: ;
    edi = 0; /* xor self */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x1B);
    MEM32(0x849B84) = 0x15;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023F635: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0023F63A: ;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023F65A; /* jne: not equal / not zero */

loc_0023F63E: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F64E: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023F65A: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023F65F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023F6CD; /* je: equal / zero */

loc_0023F663: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F66D: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023F691; /* jae: above or equal (unsigned >=) */

loc_0023F67B: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F685: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023F6CD; /* jbe: below or equal (unsigned <=) */

loc_0023F691: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F69B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F6B1: ;
    edi = 0; /* xor self */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x1B);
    MEM32(0x849B84) = 0x16;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023F6CA: ;
    esp = esp + 4;

loc_0023F6CD: ;
    POP32(esp, edi);

loc_0023F6CE: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023F6D0
 * Original: 0x0023F6D0 - 0x0023FA0C (828 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F6D0(void)
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

loc_0023F6D0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x849B89));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023F6E5; /* je: equal / zero */

loc_0023F6DA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x776220) = xmm0; /* movss */

loc_0023F6E5: ;
    eax = MEM32(0x863D08);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, 2)) goto loc_0023F8FE; /* jne: not equal / not zero */

loc_0023F6F5: ;
    PUSH32(esp, 0); sub_0028CAF0(); /* call 0x0028CAF0 */

loc_0023F6FA: ;
    eax = MEM32(0x863D08);
    if (CMP_NE(eax, 3)) goto loc_0023F70E; /* jne: not equal / not zero */

loc_0023F704: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_0023F709: ;
    eax = MEM32(0x863D08);

loc_0023F70E: ;
    if (TEST_Z(eax, eax)) goto loc_0023F71B; /* je: equal / zero */

loc_0023F712: ;
    if (CMP_NE(eax, 4)) goto loc_0023F9F8; /* jne: not equal / not zero */

loc_0023F71B: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023F722: ;
    esi = MEM32(eax + 0x20);
    if (TEST_S(esi, esi)) goto loc_0023F752; /* jl: less (signed <) */

loc_0023F729: ;
    edx = MEM32(eax + 4);
    if (TEST_NZ(edx, edx)) goto loc_0023F734; /* jne: not equal / not zero */

loc_0023F730: ;
    eax = 0; /* xor self */
    goto loc_0023F74A;

loc_0023F734: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0023F74A: ;
    if (CMP_B(esi, eax)) goto loc_0023F82C; /* jb: below (unsigned <) */

loc_0023F752: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023F759: ;
    esi = eax;
    PUSH32(esp, 0); sub_00233DC0(); /* call 0x00233DC0 */

loc_0023F760: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023F82C; /* jne: not equal / not zero */

loc_0023F768: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023F793; /* jne: not equal / not zero */

loc_0023F777: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F787: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023F793: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023F798: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023F9F8; /* je: equal / zero */

loc_0023F7A0: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F7AA: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023F7D2; /* jae: above or equal (unsigned >=) */

loc_0023F7B8: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F7C2: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023F9F8; /* jbe: below or equal (unsigned <=) */

loc_0023F7D2: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F7DC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F7F2: ;
    PUSH32(esp, 0x1A);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x17;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023F80B: ;
    esp = esp + 4;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_002966A0(); /* call 0x002966A0 */

loc_0023F818: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0023F82C: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023F857; /* jne: not equal / not zero */

loc_0023F83B: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F84B: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023F857: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023F85C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023F8BE; /* je: equal / zero */

loc_0023F860: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F86A: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023F88E; /* jae: above or equal (unsigned >=) */

loc_0023F878: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F882: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023F8BE; /* jbe: below or equal (unsigned <=) */

loc_0023F88E: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F898: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F8AE: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x16;

loc_0023F8BE: ;
    esi = MEM32(0x875670);
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0023F8E0; /* je: equal / zero */

loc_0023F8CA: ;
    PUSH32(esp, 0); sub_001C7480(); /* call 0x001C7480 */

loc_0023F8CF: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023F8DD: ;
    esp = esp + 4;

loc_0023F8E0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    MEM32(0x875670) = 0;
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0023F8FE: ;
    if (CMP_NE(eax, 5)) goto loc_0023F933; /* jne: not equal / not zero */

loc_0023F903: ;
    MEM8(0x75E9A1) = 0;
    MEM32(0x863D08) = 0;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F919: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0023F933: ;
    if (CMP_NE(eax, 3)) goto loc_0023F953; /* jne: not equal / not zero */

loc_0023F938: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    MEM8(0x862CA1) = 1;
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0023F953: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023F97E; /* jne: not equal / not zero */

loc_0023F962: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F972: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023F97E: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023F983: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023F9F8; /* je: equal / zero */

loc_0023F987: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F991: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023F9B5; /* jae: above or equal (unsigned >=) */

loc_0023F99F: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F9A9: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023F9F8; /* jbe: below or equal (unsigned <=) */

loc_0023F9B5: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F9BF: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023F9D5: ;
    eax = 0; /* xor self */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    esi = 0x862C40;
    MEM32(0x849B84) = 0x16;
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_0023F9F1: ;
    MEM8(0x862D91) = 0xFF;

loc_0023F9F8: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    MEMF(0x776220) = xmm0; /* movss */
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
 * sub_0023FA10
 * Original: 0x0023FA10 - 0x0023FAC7 (183 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023FA10(void)
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

loc_0023FA10: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0026AE10(); /* call 0x0026AE10 */

loc_0023FA17: ;
    SET_LO8(eax, MEM8(0x862D30));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023FAC6; /* jne: not equal / not zero */

loc_0023FA27: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023FAC6; /* jne: not equal / not zero */

loc_0023FA34: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023FA5F; /* jne: not equal / not zero */

loc_0023FA43: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023FA53: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023FA5F: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023FA64: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023FAC6; /* je: equal / zero */

loc_0023FA68: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023FA72: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023FA96; /* jae: above or equal (unsigned >=) */

loc_0023FA80: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023FA8A: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023FAC6; /* jbe: below or equal (unsigned <=) */

loc_0023FA96: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023FAA0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023FAB6: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x25;

loc_0023FAC6: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023FAD0
 * Original: 0x0023FAD0 - 0x0023FB11 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023FAD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0023FAD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    eax = 0x18CC;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0023FAE0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627B);
    ecx = MEM32(0x84B11C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00352A50(); /* call 0x00352A50 */

loc_0023FAF5: ;
    ebx = MEM32(0x777EC0);
    esi = eax;
    SET_LO8(eax, MEM8(ebp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023FB11(); return; } /* je: equal / zero */

loc_0023FB08: ;
    MEM8(0x849C25) = 0;
    g_seh_ebp = ebp; sub_0023FB1E(); return; /* tail jmp 0x0023FB1E */

}

/**
 * sub_0023FF70
 * Original: 0x0023FF70 - 0x002401ED (637 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023FF70(void)
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

loc_0023FF70: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x849B89));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023FF81; /* je: equal / zero */

loc_0023FF7A: ;
    MEM8(0x849C25) = 0;

loc_0023FF81: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FA6AC;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0023FF90: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = 1;
    if (TEST_Z(esi, esi)) goto loc_0023FFD7; /* je: equal / zero */

loc_0023FF9B: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0023FFA6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0023FFC7; /* je: equal / zero */

loc_0023FFAD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023FFBE: ;
    esp = esp + 0xC;
    MEM8(0x849930) = LO8(ebx);

loc_0023FFC7: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023FFD4: ;
    esp = esp + 0xC;

loc_0023FFD7: ;
    SET_LO8(eax, MEM8(0x849C25));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x776220) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002400F6; /* jne: not equal / not zero */

loc_0023FFF4: ;
    if (TEST_NZ(MEM8(0x776238), 0x20)) goto loc_00240054; /* jne: not equal / not zero */

loc_0023FFFD: ;
    eax = MEM32(0x863D04);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    esi = 2;
    if (CMP_EQ(eax, 3)) goto loc_0024004B; /* je: equal / zero */

loc_0024000C: ;
    if (CMP_EQ(eax, esi)) goto loc_0024004B; /* je: equal / zero */

loc_00240010: ;
    MEM8(0x849C0F) = 0;

loc_00240017: ;
    PUSH32(esp, 3);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FA614;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00240025: ;
    edi = eax;
    PUSH32(esp, 0); sub_00216280(); /* call 0x00216280 */

loc_0024002C: ;
    eax = MEM32(0x863D08);
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) goto loc_002401E6; /* je: equal / zero */

loc_0024003C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0023FAD0(); /* call 0x0023FAD0 */

loc_00240043: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024004B: ;
    SET_LO8(eax, MEM8(0x849C0F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00240017; /* je: equal / zero */

loc_00240054: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0024005D: ;
    SET_LO8(eax, MEM8(0x849B89));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00240075; /* jne: not equal / not zero */

loc_00240069: ;
    ecx = MEM32(0x84B11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00240075: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00240089; /* jne: not equal / not zero */

loc_00240081: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00240089: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_002400AF; /* jne: not equal / not zero */

loc_00240097: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_002400EF; /* ja: above (unsigned >) */

loc_002400AF: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002400EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002400F6: ;
    eax = MEM32(0x863D04);
    esi = 2;
    if (CMP_EQ(eax, esi)) goto loc_0024019E; /* je: equal / zero */

loc_00240108: ;
    if (CMP_EQ(eax, ebx)) goto loc_0024019E; /* je: equal / zero */

loc_00240110: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_00240115: ;
    if (CMP_EQ(eax, esi)) goto loc_0024019E; /* je: equal / zero */

loc_0024011D: ;
    if (TEST_Z(MEM8(0x776238), 0x20)) goto loc_00240017; /* je: equal / zero */

loc_0024012A: ;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_0024012F: ;
    eax = eax - MEM32(0x849C28);
    (void)0; /* cmp eax, 0x7D0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_A(eax, 0x7D0)) ? 1 : 0); /* seta */
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00240142: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00240017; /* je: equal / zero */

loc_0024014A: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00240017; /* je: equal / zero */

loc_00240152: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0024015B: ;
    eax = MEM32(0x863D04);
    esp = esp + 4;
    if (CMP_L(eax, esi)) goto loc_00240181; /* jl: less (signed <) */

loc_00240167: ;
    if (CMP_G(eax, 3)) goto loc_00240181; /* jg: greater (signed >) */

loc_0024016C: ;
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_0025D8F0(); /* call 0x0025D8F0 */

loc_00240173: ;
    eax = ebx;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0024017A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00240181: ;
    PUSH32(esp, 0); sub_00420C70(); /* call 0x00420C70 */

loc_00240186: ;
    eax = ebx;
    MEM32(0x6BED9C) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00240197: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024019E: ;
    (void)0; /* cmp MEM32(0x863D08), esi - flags set for next jcc */
    MEM8(0x862CA1) = LO8(ebx);
    if (CMP_NE(MEM32(0x863D08), esi)) goto loc_002401B5; /* jne: not equal / not zero */

loc_002401AC: ;
    SET_LO8(eax, MEM8(0x75E9A1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002401CD; /* je: equal / zero */

loc_002401B5: ;
    MEM8(0x75E9A1) = 0;
    MEM32(0x863D08) = esi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002401C7: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_002401CD: ;
    if (CMP_NE(MEM8(0x86E978), LO8(ebx))) goto loc_002401E6; /* jne: not equal / not zero */

loc_002401D5: ;
    eax = MEM32(0x86E990);
    MEM8(0x86E978) = 0;
    PUSH32(esp, 0); sub_00421FB0(); /* call 0x00421FB0 */

loc_002401E6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
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
 * sub_002401F0
 * Original: 0x002401F0 - 0x002403F1 (513 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002401F0(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002401F0: ;
    eax = 0x194C;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_002401FA: ;
    eax = MEM32(esp + 0x1950);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(ecx, ecx)) goto loc_00240220; /* je: equal / zero */

loc_00240211: ;
    ecx = MEM32(eax + 0xC);
    eax = eax + 0xC;
    ebx++;
    if (TEST_NZ(ecx, ecx)) goto loc_00240211; /* jne: not equal / not zero */

loc_0024021C: ;
    MEM32(esp + 0x18) = ebx;

loc_00240220: ;
    SET_LO8(eax, MEM8(0x776238));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(LO8(eax), 1)) goto loc_002402CC; /* je: equal / zero */

loc_00240232: ;
    ebp = MEM32(esp + 0x1964);
    SET_LO8(ecx, MEM8(ebp));
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, LO8(ecx) - 1);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp) = LO8(ecx);
    MEM8(esp + 0x13) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0024025A; /* jne: not equal / not zero */

loc_00240252: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0024025A: ;
    eax = MEM32(0x75E500);
    ecx = 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(eax, ecx)) goto loc_0024028A; /* jne: not equal / not zero */

loc_0024026E: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00240369; /* ja: above (unsigned >) */

loc_0024028A: ;
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    MEM32(0x75E500) = ecx;
    ecx = MEM32(eax + 0x44);
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD2;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002402C7: ;
    goto loc_00240369;

loc_002402CC: ;
    ecx = 2;
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_00240362; /* je: equal / zero */

loc_002402D9: ;
    eax = MEM32(esp + 0x1964);
    SET_LO8(edx, MEM8(eax));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(eax) = LO8(edx);
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002402FF; /* jne: not equal / not zero */

loc_002402F7: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002402FF: ;
    (void)0; /* cmp MEM32(0x75E500), ecx - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ecx)) goto loc_00240325; /* jne: not equal / not zero */

loc_0024030D: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00240362; /* ja: above (unsigned >) */

loc_00240325: ;
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    MEM32(0x75E500) = ecx;
    ecx = MEM32(eax + 0x44);
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD2;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00240362: ;
    ebp = MEM32(esp + 0x1964);

loc_00240369: ;
    SET_LO8(eax, MEM8(ebp));
    if (CMP_GE(LO8(eax) & LO8(eax), 0)) goto loc_00240377; /* jge: greater or equal (signed >=) */

loc_00240370: ;
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    if (((int32_t)LO8(eax) < 0)) goto loc_00240370; /* js: sign (negative) */

loc_00240374: ;
    MEM8(ebp) = LO8(eax);

loc_00240377: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp);
    if (CMP_L(eax, ebx)) goto loc_0024038E; /* jl: less (signed <) */

loc_0024037F: ;
    SET_LO8(eax, MEM8(ebp));

loc_00240382: ;
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    ecx = SX8(LO8(eax));
    if (CMP_GE(ecx, ebx)) goto loc_00240382; /* jge: greater or equal (signed >=) */

loc_0024038B: ;
    MEM8(ebp) = LO8(eax);

loc_0024038E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002403AC; /* je: equal / zero */

loc_00240396: ;
    edx = (uint32_t)(int32_t)SMEM8(ebp);
    PUSH32(esp, 3);
    edi = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002403A9: ;
    esp = esp + 4;

loc_002403AC: ;
    eax = MEM32(0x849800);
    ecx = MEM32(esp + 0x1968);
    esi = MEM32(eax + ecx * 4);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_002403C0: ;
    PUSH32(esp, 0x200500);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x18C);
    edx = esp + 0xA8;
    esi = 0; /* xor self */
    PUSH32(esp, edx);
    MEM32(0x8497AC) = esi;
    MEM32(0x849FC4) = esi;
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_002403E7: ;
    if (CMP_GE(ebx, esi)) { sub_002403F1(); return; } /* jge: greater or equal (signed >=) */

loc_002403EB: ;
    MEM32(esp + 0x18) = esi;
    g_seh_ebp = ebp; sub_002403FE(); return; /* tail jmp 0x002403FE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00240570
 * Original: 0x00240570 - 0x002405C8 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00240570: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00240592; /* je: equal / zero */

loc_00240587: ;
    ecx = MEM32(eax + 0xC);
    eax = eax + 0xC;
    ebx++;
    if (TEST_NZ(ecx, ecx)) goto loc_00240587; /* jne: not equal / not zero */

loc_00240592: ;
    SET_LO8(eax, MEM8(0x776238));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(esp + 0x5C) = 0;
    if (TEST_Z(LO8(eax), 1)) { sub_002405C8(); return; } /* je: equal / zero */

loc_002405A0: ;
    SET_LO8(ecx, MEM8(ebp));
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, LO8(ecx) - 1);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp) = LO8(ecx);
    MEM8(esp + 0x5C) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002405C1; /* jne: not equal / not zero */

loc_002405B9: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002405C1: ;
    ecx = 2;
    g_seh_ebp = ebp; sub_002405F6(); return; /* tail jmp 0x002405F6 */

}

/**
 * sub_002407B0
 * Original: 0x002407B0 - 0x00240803 (83 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002407B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002407B0: ;
    if (TEST_S(ecx, ecx)) { sub_00240803(); return; } /* jl: less (signed <) */

loc_002407B4: ;
    if (CMP_GE(ecx, 0x80)) { sub_00240803(); return; } /* jge: greater or equal (signed >=) */

loc_002407BC: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00240803(); return; } /* je: equal / zero */

loc_002407C5: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) { sub_00240803(); return; } /* je: equal / zero */

loc_002407CE: ;
    edx = MEM32(0x84A5F8);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + edx + 0x568);
    if (TEST_Z(eax, eax)) { sub_00240803(); return; } /* je: equal / zero */

loc_002407E7: ;
    edx = MEM32(eax + 0xBC);
    if (TEST_NZ(edx, edx)) { sub_00240803(); return; } /* jne: not equal / not zero */

loc_002407F1: ;
    ecx = MEM32(ecx * 4 + 0x862CD0);
    if (TEST_Z(ecx, ecx)) { sub_00240803(); return; } /* je: equal / zero */

loc_002407FC: ;
    eax = ecx + 0x628;
    esp += 4; return; /* ret */

}

/**
 * sub_00240810
 * Original: 0x00240810 - 0x002408BA (170 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240810(void)
{
    int _flags = 0; /* fallback flag var */

loc_00240810: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_002408B9; /* je: equal / zero */

loc_0024081D: ;
    SET_LO8(ecx, MEM8(eax + 0x6E));
    MEM8(0x862C88) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x6F));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    MEM8(0x862C97) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x70));
    MEM8(0x862C8C) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x71));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    MEM8(0x862C9B) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x72));
    MEM8(0x862C89) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x73));
    MEM8(0x862C8D) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x74));
    MEM8(0x862C8E) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x75));
    MEM8(0x862C8F) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x76));
    MEM8(0x862C90) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x77));
    MEM8(0x862C91) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x78));
    MEM8(0x862C92) = LO8(ecx);
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_002408AA; /* jne: not equal / not zero */

loc_00240893: ;
    SET_LO8(ecx, MEM8(eax + 0x79));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    MEM8(0x862C66) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x7A));
    MEM8(0x862C98) = LO8(eax);
    esp += 4; return; /* ret */

loc_002408AA: ;
    MEM8(0x862C66) = 0;
    SET_LO8(eax, MEM8(eax + 0x7A));
    MEM8(0x862C98) = LO8(eax);

loc_002408B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002408C0
 * Original: 0x002408C0 - 0x00240A8A (458 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002408C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002408C0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = eax + eax * 4;
    ebp = MEM32(eax * 8 + 0x776F28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x6BD92C) = ebp;
    PUSH32(esp, 0); sub_0035DF40(); /* call 0x0035DF40 */

loc_002408E3: ;
    ebx = 0; /* xor self */
    SET_LO8(eax, 0); /* xor self */
    MEM32(0x84B24C) = ebx;
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_002408F2: ;
    esi = MEM32(eax + 0x20);
    if (CMP_L(esi, ebx)) goto loc_00240955; /* jl: less (signed <) */

loc_002408F9: ;
    edx = MEM32(eax + 4);
    if (CMP_NE(edx, ebx)) goto loc_00240904; /* jne: not equal / not zero */

loc_00240900: ;
    eax = 0; /* xor self */
    goto loc_0024091A;

loc_00240904: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0024091A: ;
    if (CMP_AE(esi, eax)) goto loc_00240955; /* jae: above or equal (unsigned >=) */

loc_0024091E: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_00240925: ;
    esi = MEM32(eax + 0x20);
    if (CMP_L(esi, ebx)) goto loc_00240955; /* jl: less (signed <) */

loc_0024092C: ;
    edx = MEM32(eax + 4);
    if (CMP_NE(edx, ebx)) goto loc_00240937; /* jne: not equal / not zero */

loc_00240933: ;
    eax = 0; /* xor self */
    goto loc_0024094D;

loc_00240937: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0024094D: ;
    if (CMP_AE(esi, eax)) goto loc_00240955; /* jae: above or equal (unsigned >=) */

loc_00240951: ;
    if (CMP_NE(esi, ebx)) goto loc_0024098F; /* jne: not equal / not zero */

loc_00240955: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_0024096F; /* jne: not equal / not zero */

loc_0024095E: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0024096F: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0024098F; /* jne: not equal / not zero */

loc_00240978: ;
    if (CMP_NE(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_0024098F; /* jne: not equal / not zero */

loc_00240981: ;
    ecx = 0xB0;
    eax = 0; /* xor self */
    edi = 0x776280;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0024098F: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    SET_LO8(ecx, MEM8(ebp + 0x10));
    eax = eax + eax * 4;
    eax = eax << 3;
    edx = MEM32(eax + 0x776F20);
    eax = MEM32(eax + 0x776F28);
    SET_LO16(esi, MEM16(eax + 0x54));
    MEM8(0x776567) = LO8(ecx);
    SET_LO16(ecx, MEM16(eax + 0x50));
    SET_LO8(eax, MEM8(0x876758));
    SET_LO16(esi, LO16(esi) | 1);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(0x7FA274) = 0;
    MEM8(0x7FA275) = 0;
    MEM32(0x776574) = ebx;
    MEM32(esp + 0x14) = edx;
    MEM16(0x84981C) = LO16(ecx);
    MEM16(0x849818) = LO16(esi);
    if (TEST_NZ(LO8(eax), 1)) goto loc_002409FD; /* jne: not equal / not zero */

loc_002409EC: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_002409FD: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00240A1A; /* jne: not equal / not zero */

loc_00240A06: ;
    if (CMP_NE(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_00240A1A; /* jne: not equal / not zero */

loc_00240A0F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x849C30) = xmm0; /* movss */

loc_00240A1A: ;
    SET_LO8(ecx, MEM8(0x862C8B));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, MEM8(0x86298E));
    MEM8(0x776563) = LO8(edx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00240A43; /* je: equal / zero */

loc_00240A30: ;
    MEM8(0x84981C) = MEM8(0x84981C) | 2;
    SET_LO16(esi, LO16(esi) & 0xFFFE);
    MEM16(0x849818) = LO16(esi);

loc_00240A43: ;
    SET_LO8(eax, MEM8(0x84981C));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_00240A53; /* jns: not sign (positive) */

loc_00240A4C: ;
    MEM8(0x84981D) = MEM8(0x84981D) | 0x10;

loc_00240A53: ;
    SET_LO8(eax, MEM8(0x862C87));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00240A63; /* je: equal / zero */

loc_00240A5C: ;
    MEM8(0x84981C) = MEM8(0x84981C) | 0x20;

loc_00240A63: ;
    eax = MEM32(0x84981C);
    if (TEST_Z(HI8(eax), 1)) goto loc_00240A7D; /* je: equal / zero */

loc_00240A6D: ;
    eax = eax & 0xFEFF;
    eax = eax | 0x200;
    MEM16(0x84981C) = LO16(eax);

loc_00240A7D: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00240A8A(); return; } /* jne: not equal / not zero */

loc_00240A81: ;
    MEM8(0x74A4D8) = 0x63;
    g_seh_ebp = ebp; sub_00240A94(); return; /* tail jmp 0x00240A94 */

}

/**
 * sub_00240F70
 * Original: 0x00240F70 - 0x00240FF5 (133 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00240F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00240F70: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(MEM32(edi + 0x64), 0x35)) goto loc_00240FD6; /* jne: not equal / not zero */

loc_00240F79: ;
    eax = MEM32(edi + 0x570);
    if (TEST_Z(eax, eax)) goto loc_00240FAD; /* je: equal / zero */

loc_00240F83: ;
    SET_LO8(ecx, MEM8(0x863D11));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00240FA5; /* je: equal / zero */

loc_00240F8D: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    SET_LO16(eax, MEM16(eax + 0x32));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_00240F9A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00240FAD; /* je: equal / zero */

loc_00240F9F: ;
    eax = ZX16(MEM16(eax + 0x60));
    goto loc_00240FA8;

loc_00240FA5: ;
    eax = MEM32(eax + 0x34);

loc_00240FA8: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00240FC6; /* jne: not equal / not zero */

loc_00240FAD: ;
    edi = MEM32(edi + 0x570);
    eax = MEM32(edi + 0x1F0);
    if (TEST_Z(eax, eax)) goto loc_00240FF1; /* je: equal / zero */

loc_00240FBD: ;
    eax = ZX16(MEM16(eax + 0x60));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00240FF1; /* je: equal / zero */

loc_00240FC6: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    goto loc_00240FE7;

loc_00240FD6: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00240FE1: ;
    if (TEST_NZ(eax, eax)) goto loc_00240FEB; /* jne: not equal / not zero */

loc_00240FE5: ;
    eax = edi;

loc_00240FE7: ;
    if (TEST_Z(eax, eax)) goto loc_00240FF3; /* je: equal / zero */

loc_00240FEB: ;
    if (CMP_EQ(MEM32(eax + 0x64), 1)) goto loc_00240FF3; /* je: equal / zero */

loc_00240FF1: ;
    eax = 0; /* xor self */

loc_00240FF3: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00241000
 * Original: 0x00241000 - 0x00241632 (1586 bytes, 518 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00241000: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00240F70(); /* call 0x00240F70 */

loc_00241012: ;
    esi = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_00240F70(); /* call 0x00240F70 */

loc_0024101B: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebp = eax;
    if (TEST_Z(edi, edi)) goto loc_0024162A; /* je: equal / zero */

loc_00241025: ;
    if (TEST_Z(esi, esi)) goto loc_0024162A; /* je: equal / zero */

loc_0024102D: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7CA0(); /* call 0x002F7CA0 */

loc_0024103B: ;
    MEM8(esp + 0x24) = LO8(eax);
    eax = MEM32(ebx + 0x64);
    esp = esp + 8;
    if (CMP_NE(eax, 1)) goto loc_00241064; /* jne: not equal / not zero */

loc_0024104A: ;
    eax = MEM32(esp + 0x30);
    if (CMP_EQ(eax, 0x16)) goto loc_0024105F; /* je: equal / zero */

loc_00241053: ;
    if (CMP_EQ(eax, 0x2B)) goto loc_0024105F; /* je: equal / zero */

loc_00241058: ;
    if (CMP_NE(MEM32(esp + 0x2C), 0x2F)) goto loc_00241064; /* jne: not equal / not zero */

loc_0024105F: ;
    MEM8(esp + 0x1C) = 1;

loc_00241064: ;
    (void)0; /* cmp MEM16(esi + 0x3AE), 0 - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(MEM16(esi + 0x3AE), 0)) goto loc_00241078; /* jne: not equal / not zero */

loc_00241073: ;
    MEM8(esp + 0x13) = 1;

loc_00241078: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, 1)) goto loc_002410D9; /* je: equal / zero */

loc_00241080: ;
    if (CMP_NE(eax, 5)) goto loc_0024108F; /* jne: not equal / not zero */

loc_00241085: ;
    ecx = MEM32(esi + 0x568);
    if (TEST_NZ(ecx, ecx)) goto loc_002410D9; /* jne: not equal / not zero */

loc_0024108F: ;
    if (CMP_NE(eax, 0x35)) goto loc_0024162A; /* jne: not equal / not zero */

loc_00241098: ;
    eax = MEM32(esi + 0x570);
    if (TEST_Z(eax, eax)) goto loc_0024162A; /* je: equal / zero */

loc_002410A6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x60);
    MEM32(eax + 0xC54) = ecx;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024162A; /* je: equal / zero */

loc_002410BC: ;
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_002410CE: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_002410D9: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002C47B0(); /* call 0x002C47B0 */

loc_002410E4: ;
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_002410FB; /* je: equal / zero */

loc_002410EB: ;
    SET_LO8(ecx, MEM8(esi + 0x60));
    edx = ZX16(MEM16(ebp + 0x60));
    SET_LO8(ecx, LO8(ecx) | 0x80);
    MEM8(edx + 0x776548) = LO8(ecx);

loc_002410FB: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    if (CMP_NE(LO8(eax), 1)) goto loc_00241130; /* jne: not equal / not zero */

loc_00241103: ;
    eax = MEM32(ebx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00241138; /* je: equal / zero */

loc_0024110D: ;
    SET_LO8(eax, MEM8(esi + 0x60));
    ecx = MEM32(ebx + 0x568);
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ecx + 0x3A4) = LO8(eax);
    edx = MEM32(ebx + 0x568);
    eax = MEM32(esp + 0x38);
    MEM32(edx + 0x3A8) = eax;
    goto loc_00241138;

loc_00241130: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024142A; /* je: equal / zero */

loc_00241138: ;
    if (TEST_Z(ebp, ebp)) goto loc_0024142A; /* je: equal / zero */

loc_00241140: ;
    ecx = MEM32(ebp + 0x238);
    edx = MEM32(esi + 0x238);
    eax = MEM32(ecx);
    if (CMP_NE(eax, MEM32(edx))) goto loc_002411A6; /* jne: not equal / not zero */

loc_00241152: ;
    eax = MEM32(esp + 0x28);
    SET_LO16(edx, MEM16(esi + 0x60));
    (void)0; /* cmp LO16(edx), MEM16(eax + 0x60) - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(LO16(edx), MEM16(eax + 0x60))) goto loc_0024118A; /* jne: not equal / not zero */

loc_00241164: ;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00267330(); /* call 0x00267330 */

loc_0024116D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0024118A; /* jne: not equal / not zero */

loc_00241171: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ZX16(LO16(edx));
    PUSH32(esp, 0xA);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_00241182: ;
    esp = esp + 0x14;
    goto loc_0024142A;

loc_0024118A: ;
    eax = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = ZX16(LO16(edx));
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_0024119E: ;
    esp = esp + 0x14;
    goto loc_0024142A;

loc_002411A6: ;
    eax = MEM32(esp + 0x2C);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    ebx = MEM32(esp + 0x30);
    if (CMP_EQ(eax, 0x2D)) goto loc_002411DB; /* je: equal / zero */

loc_002411B3: ;
    if (CMP_EQ(ebx, 0x16)) goto loc_002411DB; /* je: equal / zero */

loc_002411B8: ;
    if (CMP_EQ(ebx, 0x2B)) goto loc_002411DB; /* je: equal / zero */

loc_002411BD: ;
    if (CMP_EQ(ebx, 0x32)) goto loc_002411DB; /* je: equal / zero */

loc_002411C2: ;
    if (CMP_EQ(ebx, 0x42)) goto loc_002411DB; /* je: equal / zero */

loc_002411C7: ;
    if (CMP_EQ(ebx, 0x47)) goto loc_002411DB; /* je: equal / zero */

loc_002411CC: ;
    if (CMP_EQ(ebx, 0x49)) goto loc_002411DB; /* je: equal / zero */

loc_002411D1: ;
    (void)0; /* cmp ebx, 0x52 - flags set for next jcc */
    MEM8(esp + 0x14) = 0;
    if (CMP_NE(ebx, 0x52)) goto loc_002411E0; /* jne: not equal / not zero */

loc_002411DB: ;
    MEM8(esp + 0x14) = 1;

loc_002411E0: ;
    if (CMP_EQ(eax, 0x51)) goto loc_002411F9; /* je: equal / zero */

loc_002411E5: ;
    if (CMP_EQ(eax, 0x52)) goto loc_002411F9; /* je: equal / zero */

loc_002411EA: ;
    if (CMP_EQ(eax, 0x53)) goto loc_002411F9; /* je: equal / zero */

loc_002411EF: ;
    (void)0; /* cmp eax, 0x54 - flags set for next jcc */
    MEM8(esp + 0x17) = 0;
    if (CMP_NE(eax, 0x54)) goto loc_002411FE; /* jne: not equal / not zero */

loc_002411F9: ;
    MEM8(esp + 0x17) = 1;

loc_002411FE: ;
    edx = MEM32(esp + 0x28);
    edi = MEM32(edx + 0x64);
    (void)0; /* cmp eax, 0x4F - flags set for next jcc */
    MEM8(esp + 0x19) = (CMP_EQ(eax, 0x4F)) ? 1 : 0; /* sete */
    if (CMP_NE(edi, 0x35)) goto loc_00241222; /* jne: not equal / not zero */

loc_00241212: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_002F6EB0(); /* call 0x002F6EB0 */

loc_00241219: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x15) = 1;
    if (TEST_Z(eax, eax)) goto loc_00241227; /* je: equal / zero */

loc_00241222: ;
    MEM8(esp + 0x15) = 0;

loc_00241227: ;
    if (CMP_NE(edi, 0x35)) goto loc_0024123C; /* jne: not equal / not zero */

loc_0024122C: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_002F6EB0(); /* call 0x002F6EB0 */

loc_00241233: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x18) = 1;
    if (TEST_NZ(eax, eax)) goto loc_00241241; /* jne: not equal / not zero */

loc_0024123C: ;
    MEM8(esp + 0x18) = 0;

loc_00241241: ;
    if (CMP_EQ(ebx, 0x5D)) goto loc_00241250; /* je: equal / zero */

loc_00241246: ;
    (void)0; /* cmp ebx, 0x21 - flags set for next jcc */
    MEM8(esp + 0x16) = 0;
    if (CMP_NE(ebx, 0x21)) goto loc_00241255; /* jne: not equal / not zero */

loc_00241250: ;
    MEM8(esp + 0x16) = 1;

loc_00241255: ;
    if (CMP_EQ(ebx, 0x6E)) goto loc_00241263; /* je: equal / zero */

loc_0024125A: ;
    if (CMP_EQ(ebx, 0x6F)) goto loc_00241263; /* je: equal / zero */

loc_0024125F: ;
    SET_LO8(edx, 0); /* xor self */
    goto loc_00241265;

loc_00241263: ;
    SET_LO8(edx, 1);

loc_00241265: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    (void)0; /* cmp ebx, 0x5B - flags set for next jcc */
    MEM8(esp + 0x1A) = (CMP_EQ(ebx, 0x5B)) ? 1 : 0; /* sete */
    (void)0; /* cmp ebx, 0x73 - flags set for next jcc */
    MEM8(esp + 0x1B) = (CMP_EQ(ebx, 0x73)) ? 1 : 0; /* sete */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0x38);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024128A; /* je: equal / zero */

loc_00241281: ;
    if (CMP_NE(eax, 0x28)) goto loc_0024128A; /* jne: not equal / not zero */

loc_00241286: ;
    SET_LO8(ecx, 1);
    goto loc_0024128C;

loc_0024128A: ;
    SET_LO8(ecx, 0); /* xor self */

loc_0024128C: ;
    if (CMP_EQ(MEM32(esp + 0x30), 0x2B)) goto loc_002412BF; /* je: equal / zero */

loc_00241293: ;
    if (CMP_EQ(eax, 0x10)) goto loc_002412BF; /* je: equal / zero */

loc_00241298: ;
    if (CMP_EQ(eax, 0x18)) goto loc_002412BF; /* je: equal / zero */

loc_0024129D: ;
    if (CMP_EQ(eax, 0x19)) goto loc_002412BF; /* je: equal / zero */

loc_002412A2: ;
    if (CMP_EQ(eax, 0x1A)) goto loc_002412BF; /* je: equal / zero */

loc_002412A7: ;
    if (CMP_EQ(eax, 0x1B)) goto loc_002412BF; /* je: equal / zero */

loc_002412AC: ;
    if (CMP_EQ(eax, 0x1C)) goto loc_002412BF; /* je: equal / zero */

loc_002412B1: ;
    if (CMP_EQ(eax, 0x1D)) goto loc_002412BF; /* je: equal / zero */

loc_002412B6: ;
    if (CMP_EQ(eax, 0x1E)) goto loc_002412BF; /* je: equal / zero */

loc_002412BB: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_002412C1;

loc_002412BF: ;
    SET_LO8(eax, 1);

loc_002412C1: ;
    if (CMP_NE(edi, 0x35)) goto loc_002412D1; /* jne: not equal / not zero */

loc_002412C6: ;
    if (CMP_EQ(MEM8(esp + 0x15), 1)) goto loc_0024142A; /* je: equal / zero */

loc_002412D1: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, 0);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002412EA; /* je: equal / zero */

loc_002412D7: ;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, ecx);
    goto loc_002413BF;

loc_002412EA: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002412FC; /* je: equal / zero */

loc_002412EE: ;
    edx = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 6);
    PUSH32(esp, edx);
    PUSH32(esp, 0x14);
    goto loc_002413BA;

loc_002412FC: ;
    SET_LO8(ecx, MEM8(esp + 0x1A));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00241317; /* je: equal / zero */

loc_00241304: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 7);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    goto loc_002413BF;

loc_00241317: ;
    SET_LO8(ecx, MEM8(esp + 0x1B));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00241332; /* je: equal / zero */

loc_0024131F: ;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    PUSH32(esp, ecx);
    goto loc_002413BF;

loc_00241332: ;
    SET_LO8(ecx, MEM8(esp + 0x1D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00241345; /* je: equal / zero */

loc_0024133A: ;
    edx = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    PUSH32(esp, 0x13);
    goto loc_002413BA;

loc_00241345: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0024135D; /* je: equal / zero */

loc_0024134D: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    goto loc_002413BF;

loc_0024135D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00241371; /* je: equal / zero */

loc_00241361: ;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    goto loc_002413BF;

loc_00241371: ;
    if (CMP_NE(MEM32(esp + 0x30), 0x2D)) goto loc_00241383; /* jne: not equal / not zero */

loc_00241378: ;
    edx = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    goto loc_002413BA;

loc_00241383: ;
    SET_LO8(eax, MEM8(esp + 0x1E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024139B; /* je: equal / zero */

loc_0024138B: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, edx);
    goto loc_002413BF;

loc_0024139B: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002413B3; /* je: equal / zero */

loc_002413A5: ;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    goto loc_002413BF;

loc_002413B3: ;
    edx = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, edx);
    PUSH32(esp, 0);

loc_002413BA: ;
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, eax);

loc_002413BF: ;
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_002413C4: ;
    esp = esp + 0x14;
    ecx = esi;
    PUSH32(esp, 0); sub_002F6EB0(); /* call 0x002F6EB0 */

loc_002413CE: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024142A; /* je: equal / zero */

loc_002413D4: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002413D9: ;
    eax = esi;
    PUSH32(esp, 0); sub_00344F30(); /* call 0x00344F30 */

loc_002413E0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002413F9; /* je: equal / zero */

loc_002413E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002413EB: ;
    edx = eax;
    eax = esi;
    ecx = 0x5F8574;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_002413F9: ;
    eax = edi;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_00241400: ;
    if (CMP_NE(eax, 7)) goto loc_0024142A; /* jne: not equal / not zero */

loc_00241405: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0024140A: ;
    eax = esi;
    PUSH32(esp, 0); sub_00344F30(); /* call 0x00344F30 */

loc_00241411: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024142A; /* je: equal / zero */

loc_00241415: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0024141C: ;
    edx = eax;
    eax = esi;
    ecx = 0x5FA600;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_0024142A: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024162A; /* je: equal / zero */

loc_00241437: ;
    edi = MEM32(esp + 0x28);
    if (CMP_EQ(esi, edi)) goto loc_0024154E; /* je: equal / zero */

loc_00241443: ;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0024154E; /* je: equal / zero */

loc_00241451: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0024154E; /* jne: not equal / not zero */

loc_0024145D: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0024154E; /* je: equal / zero */

loc_0024146B: ;
    (void)0; /* cmp MEM8(esp + 0x1C), 1 - flags set for next jcc */
    ebx = MEM32(esp + 0x30);
    if (CMP_NE(MEM8(esp + 0x1C), 1)) goto loc_00241536; /* jne: not equal / not zero */

loc_0024147A: ;
    eax = ebx + -22;
    if (CMP_A(eax, 0x59)) goto loc_00241523; /* ja: above (unsigned >) */

loc_00241486: ;
    ecx = ZX8(MEM8(eax + 0x241644));
    { uint32_t _jt = MEM32(ecx * 4 + 0x241634); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00241494u) goto loc_00241494;
    if (_jt == 0x002414FDu) goto loc_002414FD;
    if (_jt == 0x00241510u) goto loc_00241510;
    if (_jt == 0x00241523u) goto loc_00241523;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00241494: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00241559; /* je: equal / zero */

loc_002414A2: ;
    eax = MEM32(eax + 0x3F4);
    if (TEST_Z(eax, eax)) goto loc_00241559; /* je: equal / zero */

loc_002414B0: ;
    if (CMP_NE(MEM32(eax + 0x14), 4)) goto loc_00241559; /* jne: not equal / not zero */

loc_002414BA: ;
    ecx = MEM32(eax + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    if (TEST_NZ(ecx, ecx)) goto loc_002414E2; /* jne: not equal / not zero */

loc_002414C7: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xB2B);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002414E0: ;
    goto loc_00241559;

loc_002414E2: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xB2F);
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002414FB: ;
    goto loc_00241559;

loc_002414FD: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_0024150B: ;
    esp = esp + 8;
    goto loc_00241559;

loc_00241510: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xF);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_0024151E: ;
    esp = esp + 8;
    goto loc_00241559;

loc_00241523: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x15);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00241531: ;
    esp = esp + 8;
    goto loc_00241559;

loc_00241536: ;
    if (CMP_NE(ebx, 0x4E)) goto loc_00241552; /* jne: not equal / not zero */

loc_0024153B: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xF);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00241549: ;
    esp = esp + 8;
    goto loc_00241552;

loc_0024154E: ;
    ebx = MEM32(esp + 0x30);

loc_00241552: ;
    if (CMP_NE(MEM8(esp + 0x1C), 1)) goto loc_002415BD; /* jne: not equal / not zero */

loc_00241559: ;
    eax = ebx + -22;
    if (CMP_A(eax, 0x59)) goto loc_002415A4; /* ja: above (unsigned >) */

loc_00241561: ;
    eax = ZX8(MEM8(eax + 0x2416AC));
    { uint32_t _jt = MEM32(eax * 4 + 0x2416A0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0024156Fu) goto loc_0024156F;
    if (_jt == 0x002415A4u) goto loc_002415A4;
    if (_jt == 0x0024162Au) goto loc_0024162A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0024156F: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edi = edi + 0x78;
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB4E;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0024159C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_002415A4: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x14);
    eax = edi;
    PUSH32(esp, 0); sub_00021890(); /* call 0x00021890 */

loc_002415B2: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_002415BD: ;
    eax = ebx + -26;
    if (CMP_A(eax, 0x40)) goto loc_0024162A; /* ja: above (unsigned >) */

loc_002415C5: ;
    eax = ZX8(MEM8(eax + 0x241714));
    { uint32_t _jt = MEM32(eax * 4 + 0x241708); /* switch: 3 entries, 3 targets */
    if (_jt == 0x002415D3u) goto loc_002415D3;
    if (_jt == 0x002415ECu) goto loc_002415EC;
    if (_jt == 0x0024162Au) goto loc_0024162A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002415D3: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x1A);
    eax = edi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_002415E1: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_002415EC: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x17);
    eax = edi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_002415FA: ;
    ecx = MEM32(edi + 0x64);
    esp = esp + 8;
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    eax = 0xB48;
    if (CMP_EQ(ecx, 1)) goto loc_0024160F; /* je: equal / zero */

loc_0024160A: ;
    eax = 0xB4C;

loc_0024160F: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0024162A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00241760
 * Original: 0x00241760 - 0x00241773 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241760(void)
{
    int _flags = 0; /* fallback flag var */

loc_00241760: ;
    eax = MEM32(0x863D08);
    esp = esp - 0x24;
    if (CMP_EQ(eax, 3)) { sub_00241773(); return; } /* je: equal / zero */

loc_0024176D: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00241B90
 * Original: 0x00241B90 - 0x00241BFF (111 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241B90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00241B90: ;
    eax = MEM32(0x863D04);
    ecx = 1;
    if (CMP_NE(eax, ecx)) goto loc_00241BA7; /* jne: not equal / not zero */

loc_00241B9E: ;
    PUSH32(esp, 0); sub_00220200(); /* call 0x00220200 */

loc_00241BA3: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00241BFE; /* jne: not equal / not zero */

loc_00241BA7: ;
    SET_LO8(eax, MEM8(0x84A138));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00241BE6; /* je: equal / zero */

loc_00241BB0: ;
    if (TEST_NZ(MEM8(0x876758), LO8(ecx))) goto loc_00241BC8; /* jne: not equal / not zero */

loc_00241BB8: ;
    MEM32(0x876758) = MEM32(0x876758) | ecx;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_00241BC8: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00241BFE; /* jne: not equal / not zero */

loc_00241BD1: ;
    if (CMP_NE(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_00241BFE; /* jne: not equal / not zero */

loc_00241BDA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x849C30) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_00241BE6: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(0x849C30); /* addss */
    MEMF(0x849C30) = xmm0; /* movss */

loc_00241BFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00241C00
 * Original: 0x00241C00 - 0x00241CDE (222 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241C00(void)
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

loc_00241C00: ;
    SET_LO8(ecx, MEM8(0x864635));
    (void)0; /* cmp LO8(ecx), 0x20 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_GE(LO8(ecx), 0x20)) goto loc_00241CDC; /* jge: greater or equal (signed >=) */

loc_00241C14: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_S(esi, esi)) goto loc_00241CDB; /* jl: less (signed <) */

loc_00241C21: ;
    if (CMP_GE(esi, 2)) goto loc_00241CDB; /* jge: greater or equal (signed >=) */

loc_00241C2A: ;
    PUSH32(esp, edi);
    (void)0; /* cmp MEM32(ebp + esi * 4 + 0xA3C), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(ebp + esi * 4 + 0xA3C), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (CMP_NE(LO8(eax), 1)) goto loc_00241CDA; /* jne: not equal / not zero */

loc_00241C3E: ;
    PUSH32(esp, ebx);
    ebx = SX8(LO8(ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x44);
    eax = esi;
    ecx = ebp;
    ebx = ebx + 0x864638;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_00241C54: ;
    PUSH32(esp, 0x10);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_00241C5F: ;
    PUSH32(esp, eax);
    eax = ebx + 6;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00241C69: ;
    edx = MEM32(esp + 0x24);
    MEM8(ebx + 0x16) = 0;
    esi = MEM32(ebp + esi * 4 + 0xA3C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    esi = esi + 0x776280;
    edi = ebx + 0x18;
    ecx = 0xB;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    MEM32(ebx) = ecx;
    SET_LO8(eax, MEM8(edx + ebp + 0x76C));
    esp = esp + 0xC;
    MEM8(ebx + 4) = LO8(eax);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00241CA7: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_00241CCE; /* jb: below (unsigned <) */

loc_00241CB8: ;
    SET_LO8(eax, 1);
    MEM8(ebx + 5) = LO8(eax);
    SET_LO8(eax, MEM8(0x864635));
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, esi);
    MEM8(0x864635) = LO8(eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00241CCE: ;
    SET_LO8(eax, 0); /* xor self */
    MEM8(ebx + 5) = LO8(eax);
    MEM8(0x864635) = MEM8(0x864635) + 1;
    POP32(esp, ebx);

loc_00241CDA: ;
    POP32(esp, edi);

loc_00241CDB: ;
    POP32(esp, esi);

loc_00241CDC: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00241CE0
 * Original: 0x00241CE0 - 0x00241D1D (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241CE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00241CE0: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_S(ecx, ecx)) { sub_00241D1D(); return; } /* jl: less (signed <) */

loc_00241CE8: ;
    if (CMP_GE(ecx, MEM32(eax + 0xC))) { sub_00241D1D(); return; } /* jge: greater or equal (signed >=) */

loc_00241CED: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(eax + 8);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00241CFA; /* jle: less or equal (signed <=) */

loc_00241CF4: ;
    ecx--;
    eax = MEM32(eax + 4);
    if ((ecx != 0)) goto loc_00241CF4; /* jne: not equal / not zero */

loc_00241CFA: ;
    if (TEST_Z(edx, edx)) goto loc_00241D03; /* je: equal / zero */

loc_00241CFE: ;
    ecx = MEM32(eax + 8);
    MEM32(edx) = ecx;

loc_00241D03: ;
    if (TEST_Z(esi, esi)) goto loc_00241D0C; /* je: equal / zero */

loc_00241D07: ;
    edx = eax + 0xC;
    MEM32(esi) = edx;

loc_00241D0C: ;
    eax = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00241D30
 * Original: 0x00241D30 - 0x00241D77 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241D30(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00241D30: ;
    esp = esp - 0x118;
    eax = MEM32(esp + 0x120);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5FA5F0);
    PUSH32(esp, 0x14);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00241D50: ;
    edi = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 0xC;
    MEM32(esp + 0x11C) = 0x14;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00241D75: ;
    g_seh_ebp = ebp; sub_00241D80(); return; /* tail jmp 0x00241D80 */

}

/**
 * sub_00241F20
 * Original: 0x00241F20 - 0x00241F86 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00241F20: ;
    PUSH32(esp, esi);
    esi = 1;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00241F2B: ;
    edx = 0x5FA5DC;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00241F35: ;
    if (TEST_Z(eax, eax)) goto loc_00241F3E; /* je: equal / zero */

loc_00241F39: ;
    esi = 3;

loc_00241F3E: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00241F43: ;
    edx = 0x5FA5C8;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00241F4D: ;
    if (TEST_Z(eax, eax)) goto loc_00241F54; /* je: equal / zero */

loc_00241F51: ;
    esi = esi | 4;

loc_00241F54: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00241F59: ;
    edx = 0x5FA5B4;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00241F63: ;
    if (TEST_Z(eax, eax)) goto loc_00241F6A; /* je: equal / zero */

loc_00241F67: ;
    esi = esi | 8;

loc_00241F6A: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00241F6F: ;
    edx = 0x5FA5A0;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00241F79: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = edi;
    if (TEST_Z(eax, eax)) goto loc_00241F82; /* je: equal / zero */

loc_00241F7F: ;
    esi = esi | 0x10;

loc_00241F82: ;
    MEM32(edi) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00241F90
 * Original: 0x00241F90 - 0x00241FC9 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00241F90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ecx) = 0x5FA298;
    if (TEST_Z(ebx, ebx)) goto loc_00241FC7; /* je: equal / zero */

loc_00241F9E: ;
    PUSH32(esp, esi);
    /* nop */

loc_00241FA0: ;
    esi = MEM32(ebx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(ebx);
    MEM32(eax + 4) = esi;
    if (TEST_Z(esi, esi)) goto loc_00241FAE; /* je: equal / zero */

loc_00241FAC: ;
    MEM32(esi) = eax;

loc_00241FAE: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0); sub_00241FD0(); /* call 0x00241FD0 */

loc_00241FC0: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = esi;
    if (TEST_NZ(esi, esi)) goto loc_00241FA0; /* jne: not equal / not zero */

loc_00241FC6: ;
    POP32(esp, esi);

loc_00241FC7: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00241FD0
 * Original: 0x00241FD0 - 0x0024203C (108 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00241FD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00241FD0: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    PUSH32(esp, edi);
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_00241FE1: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024200C; /* je: equal / zero */

loc_00241FE7: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00241FF2; /* je: equal / zero */

loc_00241FEE: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00241FF2: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0024200C; /* jne: not equal / not zero */

loc_00241FF9: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00242002: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0024200C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00242012: ;
    if (TEST_NZ(eax, eax)) goto loc_00242039; /* jne: not equal / not zero */

loc_00242016: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00242036: ;
    esp = esp + 4;

loc_00242039: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00242040
 * Original: 0x00242040 - 0x00242070 (48 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242040: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_0024206B; /* je: equal / zero */

loc_0024204B: ;
    goto loc_00242050;

    /* nop */

loc_00242050: ;
    PUSH32(esp, 0x20);
    ecx = esi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470585(); /* call 0x00470585 */

loc_0024205C: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_00242070(); return; } /* je: equal / zero */

loc_00242063: ;
    esi = MEM32(esi + 4);
    edi++;
    if (TEST_NZ(esi, esi)) goto loc_00242050; /* jne: not equal / not zero */

loc_0024206B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00242080
 * Original: 0x00242080 - 0x00242155 (213 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242080: ;
    eax = MEM32(0x84A19C);
    esp = esp - 0x314;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00242099; /* jne: not equal / not zero */

loc_00242094: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00242099: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002420E1; /* je: equal / zero */

loc_002420BF: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_002420E1; /* jb: below (unsigned <) */

loc_002420C8: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002420D2: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002420DA: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00242102; /* jne: not equal / not zero */

loc_002420E1: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002420F3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002420FB: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00242145; /* je: equal / zero */

loc_00242102: ;
    MEM32(eax) = 0x5FA298;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(0x849C34) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = 0x5FBBC0;
    eax = 0x5FA590;
    PUSH32(esp, 0); sub_001F51A0(); /* call 0x001F51A0 */

loc_0024212F: ;
    edi = MEM32(esp + 0x18);
    esp = esp + 8;
    if (CMP_EQ(edi, ebx)) { sub_00242155(); return; } /* je: equal / zero */

loc_0024213A: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 4);
    MEM32(esp + 0x14) = eax;
    g_seh_ebp = ebp; sub_0024215D(); return; /* tail jmp 0x0024215D */

loc_00242145: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x849C34) = ebx;
    POP32(esp, ebx);
    esp = esp + 0x314;
    esp += 4; return; /* ret */

}

/**
 * sub_00242350
 * Original: 0x00242350 - 0x002423A9 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242350(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242350: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A5F8);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_002423A9(); return; } /* je: equal / zero */

loc_0024236B: ;
    ecx = MEM32(ecx + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_00242388; /* jne: not equal / not zero */

loc_00242375: ;
    eax = MEM32(edx * 4 + 0x862CD0);
    if (TEST_Z(eax, eax)) { sub_002423A9(); return; } /* je: equal / zero */

loc_00242380: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003521F0(); /* call 0x003521F0 */

loc_00242386: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00242388: ;
    if (CMP_NE(ecx, 2)) { sub_002423A9(); return; } /* jne: not equal / not zero */

loc_0024238D: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00289370(); /* call 0x00289370 */

loc_00242396: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_002423A9(); return; } /* je: equal / zero */

loc_0024239D: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00299500(); /* call 0x00299500 */

loc_002423A7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002423B0
 * Original: 0x002423B0 - 0x0024241E (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002423B0(void)
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

loc_002423B0: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_002423DC; /* jne: not equal / not zero */

loc_002423B9: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002423D0: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002423DC: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_002423E1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002423E9; /* jne: not equal / not zero */

loc_002423E5: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0024241B; /* je: equal / zero */

loc_002423E9: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002423F3: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) { sub_0024241E(); return; } /* jae: above or equal (unsigned >=) */

loc_00242401: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0024240B: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_0024241E(); return; } /* ja: above (unsigned >) */

loc_00242417: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_0024241E(); return; } /* jne: not equal / not zero */

loc_0024241B: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00242460
 * Original: 0x00242460 - 0x00242486 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242460: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84B10C);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x849C08);
    ebx = 0; /* xor self */
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0024247A: ;
    if (CMP_AE(eax, 3)) { sub_00242486(); return; } /* jae: above or equal (unsigned >=) */

loc_0024247F: ;
    esi = 0x70;
    g_seh_ebp = ebp; sub_002424C7(); return; /* tail jmp 0x002424C7 */

}

/**
 * sub_002426F0
 * Original: 0x002426F0 - 0x002427C9 (217 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002426F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002426F0: ;
    eax = MEM32(esi + 0x568);
    xmm1 = MEMF(eax + 0x2A4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x7FA21C); /* movss */
    if ((xmm1 <= xmm0)) goto loc_00242722; /* jbe: below or equal (unsigned <=) */

loc_0024270E: ;
    xmm2 = MEMF(eax + 0x2A4); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax + 0x2A4) = xmm2; /* movss */

loc_00242722: ;
    ecx = MEM32(esi + 0x568);
    xmm2 = MEMF(ecx + 0x2A0); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0024274B; /* jbe: below or equal (unsigned <=) */

loc_00242735: ;
    eax = ecx;
    xmm2 = MEMF(eax + 0x2A0); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax + 0x2A0) = xmm2; /* movss */

loc_0024274B: ;
    edx = MEM32(esi + 0x568);
    xmm2 = MEMF(edx + 0x2A8); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00242774; /* jbe: below or equal (unsigned <=) */

loc_0024275E: ;
    eax = edx;
    xmm2 = MEMF(eax + 0x2A8); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(eax + 0x2A8) = xmm2; /* movss */

loc_00242774: ;
    eax = MEM32(esi + 0x568);
    /* comiss xmm0, MEMF(eax + 0x2A8) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x2A8))) goto loc_002427C8; /* jb: below (unsigned <) */

loc_00242783: ;
    if (CMP_L(MEM8(eax + 0x2AC), 3)) goto loc_002427BB; /* jl: less (signed <) */

loc_0024278C: ;
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_002427BB; /* jne: not equal / not zero */

loc_00242796: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0024279B: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_002427A7; /* jns: not sign (positive) */

loc_002427A2: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_002427A7: ;
    ecx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, ecx);
    eax = eax + 0x264;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0027A4A0(); /* call 0x0027A4A0 */

loc_002427B8: ;
    esp = esp + 0xC;

loc_002427BB: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x2AC) = 0;

loc_002427C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002427D0
 * Original: 0x002427D0 - 0x002429F4 (548 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002427D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002427D0: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    eax = MEM32(esi + edx + 0x568);
    esi = esi + edx;
    if (TEST_Z(eax, eax)) goto loc_002429F2; /* je: equal / zero */

loc_002427F2: ;
    if (TEST_S(ebx, ebx)) goto loc_002429F2; /* jl: less (signed <) */

loc_002427FA: ;
    edx = MEM32(esp + 0xC);
    if (CMP_A(edx, 0x13)) goto loc_002429F2; /* ja: above (unsigned >) */

loc_00242807: ;
    ecx = ZX8(MEM8(edx + 0x2429FC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x2429F4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00242815u) goto loc_00242815;
    if (_jt == 0x002429F2u) goto loc_002429F2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00242815: ;
    (void)0; /* cmp edx, 0xB - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 1);
    if (CMP_EQ(edx, 0xB)) goto loc_00242826; /* je: equal / zero */

loc_0024281F: ;
    if (CMP_NE(MEM32(esp + 0xC), 0xC)) goto loc_00242863; /* jne: not equal / not zero */

loc_00242826: ;
    xmm1 = MEMF(eax + 0x2A8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00242841; /* jbe: below or equal (unsigned <=) */

loc_00242833: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x2AC) = MEM8(eax + 0x2AC) + 1;
    goto loc_00242863;

loc_00242841: ;
    edx = MEM32(esi + 0x568);
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(edx + 0x2A8) = xmm1; /* movss */
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x2AC) = LO8(ecx);

loc_00242863: ;
    eax = MEM32(esi + 0x568);
    xmm1 = MEMF(eax + 0x2A0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0024287E; /* jbe: below or equal (unsigned <=) */

loc_00242876: ;
    SET_LO8(ecx, MEM8(eax + 0x298));
    SET_LO8(ecx, LO8(ecx) + 1);

loc_0024287E: ;
    edx = MEM32(0x849C04);
    MEM8(eax + 0x298) = LO8(ecx);
    ecx = MEM32(esi + 0x568);
    eax = MEM32(edx);
    MEM32(ecx + 0x2A0) = eax;
    ecx = MEM32(esi + 0x568);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x298);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    /* nop */

loc_002428B0: ;
    if (CMP_EQ(ecx, MEM32(eax * 4 + 0x5FA570))) goto loc_002428C1; /* je: equal / zero */

loc_002428B9: ;
    eax++;
    if (CMP_L(eax, 3)) goto loc_002428B0; /* jl: less (signed <) */

loc_002428BF: ;
    goto loc_002428E8;

loc_002428C1: ;
    edx = edx + eax * 2 + 4;
    ecx = (uint32_t)(int32_t)SMEM8(eax + edx + 2);
    edx = MEM32(esi + 0x568);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + 0x2A4) = xmm0; /* movss */
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x299) = LO8(eax);

loc_002428E8: ;
    eax = MEM32(esp + 0x14);
    ecx = 0xD;
    if (CMP_NE(eax, ecx)) goto loc_0024291D; /* jne: not equal / not zero */

loc_002428F5: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(edx, MEM8(eax + 0x29B));
    if (CMP_NE(LO8(edx), MEM8(eax + 0x29A))) goto loc_0024291D; /* jne: not equal / not zero */

loc_00242909: ;
    if (CMP_NE(MEM8(eax + 0x29A), LO8(ecx))) goto loc_0024291D; /* jne: not equal / not zero */

loc_00242911: ;
    ebp = 0x261;
    edi = 0x263;
    goto loc_00242994;

loc_0024291D: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x29D));
    if (CMP_NE(LO8(ecx), MEM8(eax + 0x29C))) goto loc_0024294A; /* jne: not equal / not zero */

loc_00242931: ;
    edx = eax;
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x29C);
    if (CMP_NE(eax, ebx)) goto loc_0024294A; /* jne: not equal / not zero */

loc_0024293E: ;
    ebp = 0x268;
    edi = 0x26A;
    goto loc_00242994;

loc_0024294A: ;
    ecx = MEM32(esi + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x298));
    if (CMP_L(LO8(eax), 2)) goto loc_00242976; /* jl: less (signed <) */

loc_0024295A: ;
    eax = MEM32(esp + 0x10);
    ebp = 0x253;
    PUSH32(esp, 0); sub_00394720(); /* call 0x00394720 */

loc_00242968: ;
    edi = eax;
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi + 0x256;
    goto loc_00242994;

loc_00242976: ;
    if (CMP_L(LO8(eax), 3)) goto loc_00242986; /* jl: less (signed <) */

loc_0024297A: ;
    ebp = 0x257;
    edi = 0x25B;
    goto loc_00242994;

loc_00242986: ;
    if (CMP_L(LO8(eax), 4)) goto loc_002429B0; /* jl: less (signed <) */

loc_0024298A: ;
    ebp = 0x25C;
    edi = 0x260;

loc_00242994: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00242999: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = edi - ebp;
    edi++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = edx + ebp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0027A4A0(); /* call 0x0027A4A0 */

loc_002429AD: ;
    esp = esp + 0xC;

loc_002429B0: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x29A));
    MEM8(eax + 0x29B) = LO8(ecx);
    edx = MEM32(esi + 0x568);
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(edx + 0x29A) = LO8(eax);
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x29C));
    MEM8(eax + 0x29D) = LO8(ecx);
    edx = MEM32(esi + 0x568);
    POP32(esp, edi);
    MEM8(edx + 0x29C) = LO8(ebx);
    POP32(esp, ebp);

loc_002429F2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00242A10
 * Original: 0x00242A10 - 0x00242A75 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242A10: ;
    PUSH32(esp, ecx);
    if (CMP_LE(MEM8(0x6BCFEB), 1)) goto loc_00242A73; /* jle: less or equal (signed <=) */

loc_00242A1A: ;
    SET_LO8(eax, MEM8(0x862C98));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00242A73; /* jne: not equal / not zero */

loc_00242A23: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = eax + eax * 4;
    eax = MEM32(eax * 8 + 0x776F28);
    SET_LO8(ecx, MEM8(eax + 0x38));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00242A6B; /* jne: not equal / not zero */

loc_00242A3B: ;
    SET_LO8(ecx, MEM8(eax + 0x3A));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00242A6B; /* jne: not equal / not zero */

loc_00242A42: ;
    SET_LO8(eax, MEM8(esp + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00242A6B; /* jne: not equal / not zero */

loc_00242A4A: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242A53: ;
    edx = 0x5FA558;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00242A5D: ;
    SET_LO16(edx, MEM16(esp));
    MEM16(esi * 2 + 0x776B58) = MEM16(esi * 2 + 0x776B58) + LO16(edx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00242A6B: ;
    MEM16(esi * 2 + 0x776B58) = MEM16(esi * 2 + 0x776B58) + 1;

loc_00242A73: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242A80
 * Original: 0x00242A80 - 0x00242BBA (314 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A80: ;
    esp = esp - 0x15C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x164);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x170);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_00242AA3: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    esi = esp + 0x30;
    PUSH32(esp, 0); sub_002278E0(); /* call 0x002278E0 */

loc_00242AAF: ;
    edi = eax;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002278E0(); /* call 0x002278E0 */

loc_00242ABC: ;
    if (TEST_Z(eax, eax)) goto loc_00242BAF; /* je: equal / zero */

loc_00242AC4: ;
    if (TEST_Z(edi, edi)) goto loc_00242BAF; /* je: equal / zero */

loc_00242ACC: ;
    if (CMP_LE(MEM8(0x6BCFEB), 1)) goto loc_00242BAF; /* jle: less or equal (signed <=) */

loc_00242AD9: ;
    (void)0; /* cmp ebp, 0xFFFFFFFFu - flags set for next jcc */
    eax = MEM32(0x84A5F8);
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00242AFA; /* je: equal / zero */

loc_00242AE3: ;
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    edx = MEM32(ecx + eax + 0x568);
    if (TEST_Z(edx, edx)) goto loc_00242BAF; /* je: equal / zero */

loc_00242AFA: ;
    SET_LO8(ecx, MEM8(0x863D11));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00242B3F; /* je: equal / zero */

loc_00242B04: ;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00242B3F; /* je: equal / zero */

loc_00242B09: ;
    edx = MEM32(esp + 0x17C);
    ecx = MEM32(esp + 0x174);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    edx = MEM32(eax + ebp + 0x568);
    eax = ebx;
    ebx = MEM32(edx + 0x648);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00345AB0(); /* call 0x00345AB0 */

loc_00242B34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x15C;
    esp += 4; return; /* ret */

loc_00242B3F: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    edx = MEM32(eax + ecx + 0x568);
    eax = eax + ecx;
    ecx = MEM32(edx + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_00242B5F; /* jne: not equal / not zero */

loc_00242B5A: ;
    if (CMP_NE(ebp, 0xFFFFFFFFu)) goto loc_00242B69; /* jne: not equal / not zero */

loc_00242B5F: ;
    if (CMP_NE(MEM32(esp + 0x174), 0xA)) goto loc_00242B7E; /* jne: not equal / not zero */

loc_00242B69: ;
    edi = MEM32(esp + 0x17C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00345F90(); /* call 0x00345F90 */

loc_00242B7E: ;
    edx = MEM32(esp + 0x180);
    edi = MEM32(esp + 0x174);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00242BC0(); /* call 0x00242BC0 */

loc_00242B94: ;
    eax = MEM32(0x863D04);
    esp = esp + 0xC;
    if (CMP_NE(eax, 1)) goto loc_00242BAF; /* jne: not equal / not zero */

loc_00242BA1: ;
    ecx = MEM32(esp + 0x17C);
    eax = ebx;
    PUSH32(esp, 0); sub_0036D5B0(); /* call 0x0036D5B0 */

loc_00242BAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x15C;
    esp += 4; return; /* ret */

}

/**
 * sub_00242BC0
 * Original: 0x00242BC0 - 0x00242E24 (612 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242BC0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    if (TEST_S(ebx, ebx)) goto loc_00242E1F; /* jl: less (signed <) */

loc_00242BD0: ;
    if (CMP_GE(ebx, 0x10)) goto loc_00242E1F; /* jge: greater or equal (signed >=) */

loc_00242BD9: ;
    eax = MEM32(esp + 0x18);
    if (CMP_L(eax, 0xFFFFFFFFu)) goto loc_00242E1F; /* jl: less (signed <) */

loc_00242BE6: ;
    if (CMP_GE(eax, 0x10)) goto loc_00242E1F; /* jge: greater or equal (signed >=) */

loc_00242BEF: ;
    eax = MEM32(0x84A5F8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    PUSH32(esp, ebp);
    ecx = esp + 8;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, ecx);
    ebx = ebx + eax;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242C0C: ;
    esi = esp + 0x18;
    ecx = edi;
    PUSH32(esp, 0); sub_00344F50(); /* call 0x00344F50 */

loc_00242C17: ;
    (void)0; /* cmp edi, 9 - flags set for next jcc */
    ebp = eax;
    if (CMP_NE(edi, 9)) goto loc_00242C8D; /* jne: not equal / not zero */

loc_00242C1E: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242C23: ;
    eax = ebx;
    PUSH32(esp, 0); sub_003451D0(); /* call 0x003451D0 */

loc_00242C2A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00242E1D; /* je: equal / zero */

loc_00242C32: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00242C8D; /* jnp: not parity */

loc_00242C45: ;
    if (TEST_Z(ebx, ebx)) goto loc_00242C8D; /* je: equal / zero */

loc_00242C49: ;
    eax = MEM32(ebx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00242C8D; /* je: equal / zero */

loc_00242C53: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_00242C8D; /* je: equal / zero */

loc_00242C5D: ;
    PUSH32(esp, ebp);
    MEMF(eax + 0x66C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242C6B: ;
    edx = eax;
    eax = ebx;
    ecx = 0x5F7564;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00242C79: ;
    eax = MEM32(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    MEM16(eax + 0x776284) = MEM16(eax + 0x776284) + 1;
    eax = eax + 0x776284;

loc_00242C8D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242C93: ;
    edx = eax;
    eax = ebx;
    ecx = 0x5F7554;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00242CA1: ;
    if (CMP_EQ(edi, 2)) goto loc_00242CE4; /* je: equal / zero */

loc_00242CA6: ;
    if (CMP_EQ(edi, 3)) goto loc_00242CE4; /* je: equal / zero */

loc_00242CAB: ;
    if (CMP_NE(edi, 6)) goto loc_00242CBE; /* jne: not equal / not zero */

loc_00242CB0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242CB7: ;
    ecx = 0x5F8470;
    goto loc_00242CEF;

loc_00242CBE: ;
    if (CMP_NE(edi, 0x1D)) goto loc_00242CD1; /* jne: not equal / not zero */

loc_00242CC3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242CCA: ;
    ecx = 0x5F8424;
    goto loc_00242CEF;

loc_00242CD1: ;
    if (CMP_NE(edi, 8)) goto loc_00242CF8; /* jne: not equal / not zero */

loc_00242CD6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242CDD: ;
    ecx = 0x5F844C;
    goto loc_00242CEF;

loc_00242CE4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242CEA: ;
    ecx = 0x5F8620;

loc_00242CEF: ;
    edx = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00242CF8: ;
    edx = MEM32(0x84A5F8);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx + edx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00242E1D; /* je: equal / zero */

loc_00242D11: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00242E1D; /* je: equal / zero */

loc_00242D1E: ;
    esi = MEM32(esp + 0x1C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    MEM16(esi + 0x776282) = MEM16(esi + 0x776282) + LO16(ebp);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00242D31: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00242D40; /* je: equal / zero */

loc_00242D39: ;
    MEM16(esi + 0x776280) = MEM16(esi + 0x776280) + LO16(eax);

loc_00242D40: ;
    esi = MEM32(esp + 0x1C);
    ecx = esi;
    PUSH32(esp, 0); sub_002407B0(); /* call 0x002407B0 */

loc_00242D4B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x84A5F8);
    if (TEST_Z(eax, eax)) goto loc_00242D71; /* je: equal / zero */

loc_00242D55: ;
    MEM32(eax + edi * 4 + 8) = MEM32(eax + edi * 4 + 8) + 1;
    MEM32(eax + edi * 4 + 0x84) = MEM32(eax + edi * 4 + 0x84) + ebp;
    SET_LO8(edx, MEM8(ebx + ecx + 0x135));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00242D71; /* je: equal / zero */

loc_00242D6B: ;
    MEM32(eax + 0x80) = MEM32(eax + 0x80) + 1;

loc_00242D71: ;
    eax = MEM32(ecx + ebx + 0x568);
    edx = MEM32(eax + 0xBC);
    ecx = ecx + ebx;
    if (TEST_NZ(edx, edx)) goto loc_00242DA0; /* jne: not equal / not zero */

loc_00242D84: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0027A9D0(); /* call 0x0027A9D0 */

loc_00242D8B: ;
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002427D0(); /* call 0x002427D0 */

loc_00242D96: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00242DA0: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00242E1D; /* jne: not equal / not zero */

loc_00242DA8: ;
    if (CMP_EQ(edi, 2)) goto loc_00242DC6; /* je: equal / zero */

loc_00242DAD: ;
    if (CMP_EQ(edi, 3)) goto loc_00242DC6; /* je: equal / zero */

loc_00242DB2: ;
    if (CMP_EQ(edi, 6)) goto loc_00242DC6; /* je: equal / zero */

loc_00242DB7: ;
    if (CMP_EQ(edi, 0x1D)) goto loc_00242DC6; /* je: equal / zero */

loc_00242DBC: ;
    if (CMP_EQ(edi, 8)) goto loc_00242DC6; /* je: equal / zero */

loc_00242DC1: ;
    if (CMP_NE(edi, 4)) goto loc_00242E1D; /* jne: not equal / not zero */

loc_00242DC6: ;
    if (CMP_NE(MEM32(esp + 0x20), 0xFFFFFFFFu)) goto loc_00242E1D; /* jne: not equal / not zero */

loc_00242DCD: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, 0); sub_00289370(); /* call 0x00289370 */

loc_00242DD9: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) goto loc_00242E1D; /* je: equal / zero */

loc_00242DE2: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00242DE9: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00242E1D; /* je: equal / zero */

loc_00242DF0: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002337B0(); /* call 0x002337B0 */

loc_00242DFD: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00242E1D; /* je: equal / zero */

loc_00242E03: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00242E0F: ;
    eax = MEM32(ebx + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00242E1D: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00242E1F: ;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00242E30
 * Original: 0x00242E30 - 0x00242EE7 (183 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242E30: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00242E43; /* jne: not equal / not zero */

loc_00242E3E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00242E43: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00242E8B; /* je: equal / zero */

loc_00242E69: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_00242E8B; /* jb: below (unsigned <) */

loc_00242E72: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00242E7C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00242E84: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00242EAC; /* jne: not equal / not zero */

loc_00242E8B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00242E9D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00242EA5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00242EE7(); return; } /* je: equal / zero */

loc_00242EAC: ;
    POP32(esp, edi);
    ecx = ecx | 0xFFFFFFFFu;
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
    MEM8(eax + 0x34) = LO8(ebx);
    MEM8(eax + 0x36) = LO8(ebx);
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x5FA230;
    MEM8(eax + 0x35) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242EF0
 * Original: 0x00242EF0 - 0x00242F21 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242EF0(void)
{

loc_00242EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00242F03: ;
    eax = ZX8(MEM8(edi + 0x36));
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00242F0E: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x35);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00242F19: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00242F30
 * Original: 0x00242F30 - 0x00242F65 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242F30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00242F3F: ;
    PUSH32(esp, 5);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00242F49: ;
    PUSH32(esp, 3);
    MEM8(edi + 0x36) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00242F53: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), 4)) goto loc_00242F5D; /* je: equal / zero */

loc_00242F5A: ;
    eax = eax | 0xFFFFFFF8u;

loc_00242F5D: ;
    MEM8(edi + 0x35) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00242F70
 * Original: 0x00242F70 - 0x00242FCD (93 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242F70: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x34);
    if (TEST_S(eax, eax)) { sub_00242FCD(); return; } /* jl: less (signed <) */

loc_00242F78: ;
    if (CMP_GE(eax, 2)) { sub_00242FCD(); return; } /* jge: greater or equal (signed >=) */

loc_00242F7D: ;
    SET_LO8(eax, MEM8(eax + 0x862CCB));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_00242FCD(); return; } /* je: equal / zero */

loc_00242F87: ;
    eax = SX8(LO8(eax));
    if (TEST_S(eax, eax)) { sub_00242FCD(); return; } /* jl: less (signed <) */

loc_00242F8E: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    edx = MEM32(edx + esi + 0x568);
    if (TEST_Z(edx, edx)) goto loc_00242FC6; /* je: equal / zero */

loc_00242FA8: ;
    esi = MEM32(edx + 0xBC);
    if (TEST_NZ(esi, esi)) goto loc_00242FC6; /* jne: not equal / not zero */

loc_00242FB2: ;
    ecx = ZX8(MEM8(ecx + 0x36));
    PUSH32(esp, 1);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_00242FC3: ;
    esp = esp + 0x14;

loc_00242FC6: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00242FE0
 * Original: 0x00242FE0 - 0x00243193 (435 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FE0: ;
    if (CMP_A(eax, 5)) { sub_00243193(); return; } /* ja: above (unsigned >) */

loc_00242FE9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2431BC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00242FF0u) goto loc_00242FF0;
    if (_jt == 0x00243012u) goto loc_00243012;
    if (_jt == 0x00243035u) goto loc_00243035;
    if (_jt == 0x00243058u) goto loc_00243058;
    if (_jt == 0x0024314Au) goto loc_0024314A;
    if (_jt == 0x0024317Au) goto loc_0024317A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00242FF0: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = 0xAB;
    MEM32(0x87C8F4) = 0xAB;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_00243011: ;
    esp += 4; return; /* ret */

loc_00243012: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0xAC;
    MEM32(0x87C8F4) = 0xAC;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_00243034: ;
    esp += 4; return; /* ret */

loc_00243035: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = 0xAD;
    MEM32(0x87C8F4) = 0xAD;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_00243057: ;
    esp += 4; return; /* ret */

loc_00243058: ;
    eax = MEM32(0x87C8F4);
    (void)0; /* cmp eax, 0xAB - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0xAB)) goto loc_002430F7; /* je: equal / zero */

loc_0024306A: ;
    if (CMP_EQ(eax, 0xAC)) goto loc_002430F7; /* je: equal / zero */

loc_00243075: ;
    if (CMP_EQ(eax, 0xAD)) goto loc_002430F7; /* je: equal / zero */

loc_0024307C: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, eax);
    eax = 0xAB;
    PUSH32(esp, 0); sub_0001F910(); /* call 0x0001F910 */

loc_0024308F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024309F; /* je: equal / zero */

loc_00243093: ;
    MEM32(0x87C8F4) = 0xAB;
    goto loc_002430E5;

loc_0024309F: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, eax);
    eax = 0xAC;
    PUSH32(esp, 0); sub_0001F910(); /* call 0x0001F910 */

loc_002430B3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002430C3; /* je: equal / zero */

loc_002430B7: ;
    MEM32(0x87C8F4) = 0xAC;
    goto loc_002430E5;

loc_002430C3: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, eax);
    eax = 0xAD;
    PUSH32(esp, 0); sub_0001F910(); /* call 0x0001F910 */

loc_002430D7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002430E5; /* je: equal / zero */

loc_002430DB: ;
    MEM32(0x87C8F4) = 0xAD;

loc_002430E5: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(0x87C8F4);
    goto loc_00243103;

loc_002430F7: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);

loc_00243103: ;
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_00243108: ;
    if (TEST_Z(eax, eax)) goto loc_0024311C; /* je: equal / zero */

loc_0024310C: ;
    SET_LO8(ebx, 0); /* xor self */
    MEM8(eax + 0x21) = 1;
    edi = eax;
    MEM8(eax + 0x1E) = LO8(ebx);
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0024311C: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = 0xAA;
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_00243132: ;
    if (TEST_Z(eax, eax)) goto loc_00243147; /* je: equal / zero */

loc_00243136: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = eax;
    MEM8(eax + 0x1E) = 0;
    MEM8(eax + 0x21) = 1;
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_00243147: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0024314A: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(0x87C8F4);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_00243161: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0xAA;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_00243179: ;
    esp += 4; return; /* ret */

loc_0024317A: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = 0x117;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_00243192: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002431E0
 * Original: 0x002431E0 - 0x00243567 (903 bytes, 332 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431E0(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002431E0: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x7FA23C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002431F6; /* jne: not equal / not zero */

loc_002431EE: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002431F6: ;
    (void)0; /* cmp MEM32(0x75E500), eax - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), eax)) goto loc_0024321E; /* jne: not equal / not zero */

loc_00243203: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00243565; /* ja: above (unsigned >) */

loc_0024321E: ;
    (void)0; /* cmp eax, 0xE - flags set for next jcc */
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = eax;
    if (CMP_A(eax, 0xE)) goto loc_00243547; /* ja: above (unsigned >) */

loc_00243234: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x243568); /* switch: 15 entries, 15 targets */
    if (_jt == 0x0024323Bu) goto loc_0024323B;
    if (_jt == 0x0024326Fu) goto loc_0024326F;
    if (_jt == 0x002432A3u) goto loc_002432A3;
    if (_jt == 0x002432D7u) goto loc_002432D7;
    if (_jt == 0x0024330Bu) goto loc_0024330B;
    if (_jt == 0x0024333Fu) goto loc_0024333F;
    if (_jt == 0x00243373u) goto loc_00243373;
    if (_jt == 0x002433A7u) goto loc_002433A7;
    if (_jt == 0x002433DBu) goto loc_002433DB;
    if (_jt == 0x0024340Fu) goto loc_0024340F;
    if (_jt == 0x00243443u) goto loc_00243443;
    if (_jt == 0x00243477u) goto loc_00243477;
    if (_jt == 0x002434ABu) goto loc_002434AB;
    if (_jt == 0x002434DFu) goto loc_002434DF;
    if (_jt == 0x00243513u) goto loc_00243513;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0024323B: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD0;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0024326D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024326F: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD1;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002432A1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002432A3: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD2;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002432D5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002432D7: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD9;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00243309: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024330B: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD3;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0024333D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024333F: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD4;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00243371: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00243373: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD38;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002433A5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002433A7: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD39;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002433D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002433DB: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB58;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0024340D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024340F: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB56;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00243441: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00243443: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB57;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00243475: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00243477: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB55;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002434A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002434AB: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB59;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002434DD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002434DF: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB5A;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00243511: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00243513: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB5B;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00243545: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00243547: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243565; /* je: equal / zero */

loc_00243550: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5FA4C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00243561: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_00243565: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002435B0
 * Original: 0x002435B0 - 0x0024360D (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002435B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002435B0: ;
    SET_LO8(edx, MEM8(esp + 4));
    esp = esp - 0x80;
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = eax;
    SET_LO8(eax, MEM8(0x776BD8));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0024360D(); return; } /* je: equal / zero */

loc_002435CF: ;
    if (CMP_EQ(LO8(eax), 1)) { sub_0024360D(); return; } /* je: equal / zero */

loc_002435D3: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = 0x5FA4B8;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002435E1; /* je: equal / zero */

loc_002435DC: ;
    eax = 0x5FA4A4;

loc_002435E1: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_002435EE: ;
    edx = ebp;
    edx = edx << 7;
    edi = edx + 0x862A60;
    edx = esp + 0xC;
    eax = edi;
    edx = edx - edi;

loc_00243601: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00243601; /* jne: not equal / not zero */

loc_0024360B: ;
    g_seh_ebp = ebp; sub_0024368A(); return; /* tail jmp 0x0024368A */

}

/**
 * sub_002437F0
 * Original: 0x002437F0 - 0x00243826 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002437F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002437F0: ;
    eax = 0x862B60;
    edx = esp + -256;
    esp = esp - 0x100;
    edx = edx - eax;

loc_00243804: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00243804; /* jne: not equal / not zero */

loc_0024380E: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x587BE4);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00243822: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00243830(); return; /* tail jmp 0x00243830 */

}

/**
 * sub_00243870
 * Original: 0x00243870 - 0x002438C5 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00243870: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0024387B: ;
    esi = MEM32(eax + 0x20);
    if (TEST_S(esi, esi)) goto loc_002438C2; /* jl: less (signed <) */

loc_00243882: ;
    edx = MEM32(eax + 4);
    if (TEST_NZ(edx, edx)) goto loc_0024388D; /* jne: not equal / not zero */

loc_00243889: ;
    eax = 0; /* xor self */
    goto loc_002438A3;

loc_0024388D: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_002438A3: ;
    if (CMP_AE(esi, eax)) goto loc_002438C2; /* jae: above or equal (unsigned >=) */

loc_002438A7: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_002438AE: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx * 2 + 0x776B58);
    if (CMP_G(MEM32(eax + 0x3C), ecx)) goto loc_002438C2; /* jg: greater (signed >) */

loc_002438BB: ;
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_002438D0(); /* call 0x002438D0 */

loc_002438C2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002438D0
 * Original: 0x002438D0 - 0x00243937 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002438D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002438D0: ;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    MEM8(0x776BD8) = LO8(ebx);
    eax++;
    MEM32(0x777EC8) = eax;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    ecx = eax + eax * 4;
    eax = MEM32(ecx * 8 + 0x776F28);
    SET_LO8(ecx, MEM8(eax + 0x38));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00243935; /* jne: not equal / not zero */

loc_002438FC: ;
    SET_LO8(ecx, MEM8(eax + 0x3A));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00243935; /* jne: not equal / not zero */

loc_00243903: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0024390C: ;
    edx = 0x5FA434;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243916: ;
    SET_LO8(eax, MEM8(0x862C98));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243929; /* je: equal / zero */

loc_0024391F: ;
    MEM16(ebx * 2 + 0x776B58) = MEM16(ebx * 2 + 0x776B58) + 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00243929: ;
    SET_LO16(eax, MEM16(esp));
    MEM16(ebx * 2 + 0x776B58) = MEM16(ebx * 2 + 0x776B58) + LO16(eax);

loc_00243935: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00243940
 * Original: 0x00243940 - 0x00243B12 (466 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243940(void)
{

loc_00243940: ;
    eax = MEM32(0x849C00);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0024394B: ;
    edx = 0x5FA42C;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243955: ;
    ecx = MEM32(0x849C00);
    ecx = ecx + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243964: ;
    edx = 0x5FA424;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_0024396E: ;
    edx = MEM32(0x849C00);
    edx = edx + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0024397D: ;
    edx = 0x5FA41C;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243987: ;
    eax = MEM32(0x849C00);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243995: ;
    edx = 0x5FA40C;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_0024399F: ;
    ecx = MEM32(0x849C00);
    ecx = ecx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002439AE: ;
    edx = 0x5FA3FC;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_002439B8: ;
    edx = MEM32(0x849C00);
    edx = edx + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002439C7: ;
    edx = 0x5FA3EC;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_002439D1: ;
    eax = MEM32(0x849C00);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002439DF: ;
    edx = 0x5FA3E0;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_002439E9: ;
    ecx = MEM32(0x849C00);
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002439F8: ;
    edx = 0x5FA3D8;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243A02: ;
    edx = MEM32(0x849C00);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243A11: ;
    edx = 0x5FA3C8;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243A1B: ;
    eax = MEM32(0x849C00);
    eax = eax + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243A29: ;
    edx = 0x5FA3BC;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243A33: ;
    ecx = MEM32(0x849C00);
    ecx = ecx + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243A42: ;
    edx = 0x5FA3B0;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243A4C: ;
    edx = MEM32(0x849C00);
    edx = edx + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243A5B: ;
    edx = 0x5FA3A0;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243A65: ;
    eax = MEM32(0x849C00);
    eax = eax + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243A73: ;
    edx = 0x5FA394;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243A7D: ;
    ecx = MEM32(0x849C00);
    ecx = ecx + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243A8C: ;
    edx = 0x5FA388;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243A96: ;
    edx = MEM32(0x849C00);
    edx = edx + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243AA5: ;
    edx = 0x5FA378;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243AAF: ;
    eax = MEM32(0x849C00);
    eax = eax + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243ABD: ;
    edx = 0x5FA368;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243AC7: ;
    ecx = MEM32(0x849C00);
    ecx = ecx + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243AD6: ;
    edx = 0x5FA358;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243AE0: ;
    edx = MEM32(0x849C00);
    edx = edx + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243AEF: ;
    edx = 0x5FA34C;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243AF9: ;
    eax = MEM32(0x849C00);
    eax = eax + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00243B07: ;
    edx = 0x5FA33C;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00243B11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00243B20
 * Original: 0x00243B20 - 0x00243B62 (66 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243B20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243B20: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x777EC4);
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00243B5C; /* jle: less or equal (signed <=) */

loc_00243B32: ;
    ecx = 0x777ED8;

loc_00243B37: ;
    if (CMP_NE(MEM32(ecx + 0xC), ebp)) goto loc_00243B54; /* jne: not equal / not zero */

loc_00243B3C: ;
    if (CMP_NE(MEM32(ecx + 0x10), ebx)) goto loc_00243B54; /* jne: not equal / not zero */

loc_00243B41: ;
    edx = MEM32(ecx);
    if (TEST_NZ(edx, edx)) goto loc_00243B4B; /* jne: not equal / not zero */

loc_00243B47: ;
    if (TEST_Z(edi, edi)) goto loc_00243B5F; /* je: equal / zero */

loc_00243B4B: ;
    if (CMP_NE(edx, 1)) goto loc_00243B54; /* jne: not equal / not zero */

loc_00243B50: ;
    if (CMP_EQ(edi, edx)) goto loc_00243B5F; /* je: equal / zero */

loc_00243B54: ;
    eax++;
    ecx = ecx + 0x40;
    if (CMP_L(eax, esi)) goto loc_00243B37; /* jl: less (signed <) */

loc_00243B5C: ;
    eax = eax | 0xFFFFFFFFu;

loc_00243B5F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00243B70
 * Original: 0x00243B70 - 0x00243D22 (434 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243B70(void)
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

loc_00243B70: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F744C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00243B81: ;
    MEM32(esp + 8) = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F743C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00243B91: ;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00243B9A: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FA310;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00243BA8: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00243BEB; /* je: equal / zero */

loc_00243BAE: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_00243BB9: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00243BDB; /* je: equal / zero */

loc_00243BC0: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00243BD1: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_00243BDB: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00243BE8: ;
    esp = esp + 0xC;

loc_00243BEB: ;
    eax = MEM32(0x8757C8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    eax = 0x27;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_00243C04: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00243D0D; /* je: equal / zero */

loc_00243C0F: ;
    SET_LO8(ecx, MEM8(0x776238));
    if (TEST_NZ(LO8(ecx), 0x20)) goto loc_00243C65; /* jne: not equal / not zero */

loc_00243C1A: ;
    eax = MEM32(0x863D04);
    edx = 3;
    if (CMP_EQ(eax, edx)) goto loc_00243C36; /* je: equal / zero */

loc_00243C28: ;
    if (CMP_EQ(eax, 2)) goto loc_00243C36; /* je: equal / zero */

loc_00243C2D: ;
    MEM8(0x849C0F) = 0;
    goto loc_00243C3F;

loc_00243C36: ;
    SET_LO8(eax, MEM8(0x849C0F));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00243C65; /* jne: not equal / not zero */

loc_00243C3F: ;
    if (TEST_Z(LO8(ecx), 0x10)) { sub_00243D22(); return; } /* je: equal / zero */

loc_00243C48: ;
    eax = MEM32(0x8757C8);
    if (TEST_NZ(eax, eax)) goto loc_00243D13; /* jne: not equal / not zero */

loc_00243C55: ;
    PUSH32(esp, eax);

loc_00243C56: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004203A0(); /* call 0x004203A0 */

loc_00243C62: ;
    esp = esp + 4;

loc_00243C65: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00243C79; /* jne: not equal / not zero */

loc_00243C71: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00243C79: ;
    ecx = MEM32(0x75E500);
    eax = 1;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_00243CA6; /* jne: not equal / not zero */

loc_00243C8E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00243CE5; /* ja: above (unsigned >) */

loc_00243CA6: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    MEM32(0x75E500) = eax;
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00243CE5: ;
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    edi = 1;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_00243CF2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243D0C; /* je: equal / zero */

loc_00243CF6: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    MEM32(0x8757C8) = 0;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00243D09: ;
    esp = esp + 4;

loc_00243D0C: ;
    POP32(esp, edi);

loc_00243D0D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00243D13: ;
    if (CMP_NE(eax, 1)) goto loc_00243C65; /* jne: not equal / not zero */

loc_00243D1C: ;
    PUSH32(esp, eax);
    goto loc_00243C56;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00243DC0
 * Original: 0x00243DC0 - 0x00244019 (601 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243DC0(void)
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

loc_00243DC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x7FA1F8);
    eax = 0x46;
    if (CMP_EQ(ecx, eax)) goto loc_00244017; /* je: equal / zero */

loc_00243DD4: ;
    if (CMP_EQ(MEM32(0x7FA1F4), eax)) goto loc_00244017; /* je: equal / zero */

loc_00243DE0: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00243DF2; /* jne: not equal / not zero */

loc_00243DE9: ;
    SET_LO8(eax, MEM8(0x75E9A0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243E00; /* je: equal / zero */

loc_00243DF2: ;
    MEM8(0x75E9A0) = 0;
    MEM8(0x863D11) = 0;

loc_00243E00: ;
    eax = MEM32(0x863D08);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 2;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, esi)) goto loc_00243E1B; /* jne: not equal / not zero */

loc_00243E12: ;
    SET_LO8(eax, MEM8(0x75E9A1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243E33; /* je: equal / zero */

loc_00243E1B: ;
    MEM8(0x75E9A1) = 0;
    MEM32(0x863D08) = esi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00243E2D: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_00243E33: ;
    eax = MEM32(0x863D04);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM8(0x862C5F) = 0;
    if (CMP_EQ(eax, 3)) goto loc_00243E4C; /* je: equal / zero */

loc_00243E44: ;
    if (CMP_NE(eax, esi)) goto loc_00243F1F; /* jne: not equal / not zero */

loc_00243E4C: ;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_00243E56: ;
    if (TEST_Z(eax, eax)) goto loc_00243F0F; /* je: equal / zero */

loc_00243E5E: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00243E6C; /* jne: not equal / not zero */

loc_00243E67: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00243E6C: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00243EB4; /* je: equal / zero */

loc_00243E92: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_00243EB4; /* jb: below (unsigned <) */

loc_00243E9B: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00243EA5: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00243EAD: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00243ED5; /* jne: not equal / not zero */

loc_00243EB4: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00243EC6: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00243ECE: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00243F1F; /* je: equal / zero */

loc_00243ED5: ;
    PUSH32(esp, 0); sub_002336C0(); /* call 0x002336C0 */

loc_00243EDA: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00243F1F; /* je: equal / zero */

loc_00243EE0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x68), _icall_esp); /* indirect call */
    }

loc_00243EE9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00243EF5: ;
    edi = MEM32(esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_00243F01: ;
    ecx = MEM32(eax + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 4), _icall_esp); /* indirect call */
    }

loc_00243F0D: ;
    goto loc_00243F1F;

loc_00243F0F: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00243F1F; /* je: equal / zero */

loc_00243F18: ;
    MEM8(0x862E58) = 1;

loc_00243F1F: ;
    PUSH32(esp, 1);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00243F28: ;
    ebx = eax;
    PUSH32(esp, 7);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00243F33: ;
    ebp = eax;
    PUSH32(esp, 8);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00243F3E: ;
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_002435B0(); /* call 0x002435B0 */

loc_00243F49: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002435B0(); /* call 0x002435B0 */

loc_00243F50: ;
    esp = esp + 0x14;
    MEM8(0x7FA274) = 1;
    MEM32(0x84A170) = 0xA;
    PUSH32(esp, 0); sub_001FC830(); /* call 0x001FC830 */

loc_00243F69: ;
    edi = 0; /* xor self */
    MEM32(0x776574) = 0xE;
    eax = 0; /* xor self */

loc_00243F77: ;
    esi = eax + 1;
    edx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    MEM8(eax + 0x849895) = 0xFF;
    MEM8(eax + 0x7761F5) = 0;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x800489);
    PUSH32(esp, 0);
    MEM32(edi + 0x7761A4) = edx;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00243FA3: ;
    eax = MEM32(edi + 0x80044C);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00243FB0: ;
    eax = MEM32(edi + 0x80040C);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00243FBD: ;
    eax = esi;
    ecx = eax + 1;
    esp = esp + 0xC;
    edi = edi + 4;
    if (CMP_L(ecx, 0x10)) goto loc_00243F77; /* jl: less (signed <) */

loc_00243FCD: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = ebx;
    esi = 0; /* xor self */
    MEM8(0x800488) = LO8(ebx);
    MEM32(0x800448) = ebp;
    MEM32(0x800408) = edi;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00243FEE: ;
    PUSH32(esp, 1);
    eax = ebp;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00243FF7: ;
    PUSH32(esp, 0xD);
    eax = edi;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00244000: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    esi = 0x47;
    PUSH32(esp, 0); sub_002A94A0(); /* call 0x002A94A0 */

loc_00244010: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00244017: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00244020
 * Original: 0x00244020 - 0x00244051 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244020: ;
    eax = 0x1260;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0024402A: ;
    ecx = MEM32(0x84D44C);
    eax = MEM32(0x84D450);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x54) = esi;
    if (CMP_NE(ecx, esi)) { sub_00244051(); return; } /* jne: not equal / not zero */

loc_0024404B: ;
    MEM32(esp + 0x18) = esi;
    g_seh_ebp = ebp; sub_0024405C(); return; /* tail jmp 0x0024405C */

}

/**
 * sub_00244810
 * Original: 0x00244810 - 0x00244831 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244810(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244810: ;
    ecx = MEM32(edx + 0xC);
    eax = ecx;
    eax = eax >> 1;
    PUSH32(esp, esi);
    esi = eax + eax;
    ecx = ecx - esi;
    esi = MEM32(edx + 8);
    if (CMP_A(esi, eax)) goto loc_00244826; /* ja: above (unsigned >) */

loc_00244824: ;
    eax = eax - esi;

loc_00244826: ;
    edx = MEM32(edx + 4);
    eax = MEM32(edx + eax * 4);
    eax = eax + ecx * 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00244840
 * Original: 0x00244840 - 0x0024486E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244840(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244840: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0024486D; /* je: equal / zero */

loc_00244847: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edx++;
    edi = edi << 1;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(eax + 0xC) = edx;
    POP32(esp, edi);
    if (CMP_A(edi, edx)) goto loc_00244860; /* ja: above (unsigned >) */

loc_00244859: ;
    MEM32(eax + 0xC) = 0;

loc_00244860: ;
    ecx--;
    MEM32(eax + 0x10) = ecx;
    if ((ecx != 0)) goto loc_0024486D; /* jne: not equal / not zero */

loc_00244866: ;
    MEM32(eax + 0xC) = 0;

loc_0024486D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00244870
 * Original: 0x00244870 - 0x0024487D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244870: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_0024487D(); return; } /* jne: not equal / not zero */

loc_00244879: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00244885(); return; /* tail jmp 0x00244885 */

}

/**
 * sub_002448D0
 * Original: 0x002448D0 - 0x00244962 (146 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002448D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002448D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x480030);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    esi = MEM32(ebp + 8);
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_00244915; /* je: equal / zero */

loc_002448FD: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - eax;
    eax = 0xB30F6353u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 9);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_00244915: ;
    PUSH32(esp, 0); sub_00244F40(); /* call 0x00244F40 */

loc_0024491A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00244946; /* je: equal / zero */

loc_0024491E: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = eax;
    edi = MEM32(edi + 4);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -32) = edi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edx = MEM32(esi + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_00246350(); /* call 0x00246350 */

loc_00244943: ;
    MEM32(esi + 8) = eax;

loc_00244946: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00244980
 * Original: 0x00244980 - 0x00244B2E (430 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244980: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_00244B27; /* je: equal / zero */

loc_00244990: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_002449B9; /* je: equal / zero */

loc_0024499D: ;
    edi = MEM32(eax + 8);
    ecx = edi;
    ecx = ecx - ebx;
    eax = 0xB30F6353u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 9);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    if ((ecx != 0)) goto loc_002449C8; /* jne: not equal / not zero */

loc_002449B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00244FB0(); /* call 0x00244FB0 */

loc_002449BF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_002449C8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 4);
    if (TEST_NZ(ebp, ebp)) goto loc_002449D4; /* jne: not equal / not zero */

loc_002449D0: ;
    eax = 0; /* xor self */
    goto loc_002449F0;

loc_002449D4: ;
    ebx = MEM32(esi + 8);
    ebx = ebx - ebp;
    eax = 0xB30F6353u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    ebx = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx >> 9);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_002449F0: ;
    if (CMP_A(ecx, eax)) goto loc_00244A61; /* ja: above (unsigned >) */

loc_002449F4: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_00246AE0(); /* call 0x00246AE0 */

loc_00244A03: ;
    ebx = MEM32(esi + 8);
    esp = esp + 8;
    PUSH32(esp, 0); sub_00244F90(); /* call 0x00244F90 */

loc_00244A0E: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_00244A31; /* jne: not equal / not zero */

loc_00244A19: ;
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2DC);
    POP32(esp, ebp);
    eax = eax + ecx;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00244A31: ;
    ecx = MEM32(ecx + 8);
    ecx = ecx - eax;
    eax = 0xB30F6353u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx >> 9);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2DC);
    POP32(esp, ebp);
    eax = eax + ecx;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00244A61: ;
    if (TEST_NZ(ebp, ebp)) goto loc_00244A69; /* jne: not equal / not zero */

loc_00244A65: ;
    eax = 0; /* xor self */
    goto loc_00244A81;

loc_00244A69: ;
    ebx = MEM32(esi + 0xC);
    ebx = ebx - ebp;
    eax = 0xB30F6353u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 9);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_00244A81: ;
    if (CMP_A(ecx, eax)) goto loc_00244ACE; /* ja: above (unsigned >) */

loc_00244A85: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00244C60(); /* call 0x00244C60 */

loc_00244A8C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2DC);
    edi = edi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_00246AE0(); /* call 0x00246AE0 */

loc_00244AA7: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002471A0(); /* call 0x002471A0 */

loc_00244ABE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00244ACE: ;
    if (TEST_Z(ebp, ebp)) goto loc_00244AFB; /* je: equal / zero */

loc_00244AD2: ;
    ebx = MEM32(esi + 8);
    eax = ebp;
    PUSH32(esp, 0); sub_00244F90(); /* call 0x00244F90 */

loc_00244ADC: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC);
    ecx = ecx - edi;
    eax = 0xB30F6353u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 9);
    eax = edi;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_00244AFB: ;
    edi = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0); sub_00244C60(); /* call 0x00244C60 */

loc_00244B06: ;
    PUSH32(esp, 0); sub_00244F40(); /* call 0x00244F40 */

loc_00244B0B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00244B24; /* je: equal / zero */

loc_00244B0F: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00246370(); /* call 0x00246370 */

loc_00244B21: ;
    MEM32(esi + 8) = eax;

loc_00244B24: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00244B27: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00244B30
 * Original: 0x00244B30 - 0x00244B62 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00244B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x480020);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    esi = edx;
    if (CMP_BE(edi, 0x5987B1)) { sub_00244B62(); return; } /* jbe: below or equal (unsigned <=) */

loc_00244B5D: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_00244C60
 * Original: 0x00244C60 - 0x00244C68 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244C60: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_00244C68(); return; } /* jne: not equal / not zero */

loc_00244C67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00244C90
 * Original: 0x00244C90 - 0x00244CA2 (18 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebp = MEM32(edi + 4);
    if (TEST_NZ(ebp, ebp)) { sub_00244CA2(); return; } /* jne: not equal / not zero */

loc_00244C9E: ;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00244CBA(); return; /* tail jmp 0x00244CBA */

}

/**
 * sub_00244D20
 * Original: 0x00244D20 - 0x00244D2D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_00244D2D(); return; } /* jne: not equal / not zero */

loc_00244D29: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00244D35(); return; /* tail jmp 0x00244D35 */

}

/**
 * sub_00244D80
 * Original: 0x00244D80 - 0x00244D8D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_00244D8D(); return; } /* jne: not equal / not zero */

loc_00244D89: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00244D95(); return; /* tail jmp 0x00244D95 */

}

/**
 * sub_00244DD0
 * Original: 0x00244DD0 - 0x00244DE1 (17 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244DD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 4);
    if (TEST_NZ(ebx, ebx)) { sub_00244DE1(); return; } /* jne: not equal / not zero */

loc_00244DDD: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00244DF6(); return; /* tail jmp 0x00244DF6 */

}

/**
 * sub_00244E50
 * Original: 0x00244E50 - 0x00244E61 (17 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 4);
    if (TEST_NZ(ebx, ebx)) { sub_00244E61(); return; } /* jne: not equal / not zero */

loc_00244E5D: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00244E77(); return; /* tail jmp 0x00244E77 */

}

/**
 * sub_00244ED0
 * Original: 0x00244ED0 - 0x00244F04 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244ED0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_00244F00; /* je: equal / zero */

loc_00244EE2: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0xB30F6353u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 9);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_00244F04(); return; } /* jne: not equal / not zero */

loc_00244F00: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00244F1B(); return; /* tail jmp 0x00244F1B */

}

/**
 * sub_00244F40
 * Original: 0x00244F40 - 0x00244F56 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244F40: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(edi, eax)) { sub_00244F56(); return; } /* jne: not equal / not zero */

loc_00244F52: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00244F90
 * Original: 0x00244F90 - 0x00244FAD (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00244F90: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_00244FAB; /* je: equal / zero */

loc_00244F97: ;
    PUSH32(esp, esi);

loc_00244F98: ;
    esi = edi + 8;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_00244FA0: ;
    edi = edi + 0x2DC;
    if (CMP_NE(edi, ebx)) goto loc_00244F98; /* jne: not equal / not zero */

loc_00244FAA: ;
    POP32(esp, esi);

loc_00244FAB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00244FB0
 * Original: 0x00244FB0 - 0x00245004 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FB0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    esi = 0; /* xor self */
    if (CMP_EQ(edi, esi)) goto loc_00244FF5; /* je: equal / zero */

loc_00244FC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (CMP_EQ(edi, ebx)) goto loc_00244FDC; /* je: equal / zero */

loc_00244FC8: ;
    esi = edi + 8;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_00244FD0: ;
    edi = edi + 0x2DC;
    if (CMP_NE(edi, ebx)) goto loc_00244FC8; /* jne: not equal / not zero */

loc_00244FDA: ;
    esi = 0; /* xor self */

loc_00244FDC: ;
    eax = MEM32(ebp + 4);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    POP32(esp, ebx);
    if (CMP_EQ(eax, esi)) goto loc_00244FF5; /* je: equal / zero */

loc_00244FE8: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00244FF2: ;
    esp = esp + 4;

loc_00244FF5: ;
    POP32(esp, edi);
    MEM32(ebp + 4) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00245010
 * Original: 0x00245010 - 0x00245031 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245010(void)
{

loc_00245010: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00246B20(); /* call 0x00246B20 */

loc_00245021: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2DC);
    esp = esp + 0x10;
    eax = eax + edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00245040
 * Original: 0x00245040 - 0x00245059 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245040(void)
{

loc_00245040: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00246BB0(); /* call 0x00246BB0 */

loc_0024504C: ;
    eax = esi;
    eax = eax << 4;
    eax = eax + edi;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00245060
 * Original: 0x00245060 - 0x00245091 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245060: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0024508D; /* je: equal / zero */

loc_00245072: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_00245091(); return; } /* jne: not equal / not zero */

loc_0024508D: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002450A5(); return; /* tail jmp 0x002450A5 */

}

/**
 * sub_002450D0
 * Original: 0x002450D0 - 0x002450ED (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002450D0(void)
{

loc_002450D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00246C40(); /* call 0x00246C40 */

loc_002450E1: ;
    edx = esi + esi * 2;
    esp = esp + 0x10;
    eax = edi + edx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002450F0
 * Original: 0x002450F0 - 0x00245122 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002450F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002450F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0024511E; /* je: equal / zero */

loc_00245102: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_00245122(); return; } /* jne: not equal / not zero */

loc_0024511E: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00245137(); return; /* tail jmp 0x00245137 */

}

/**
 * sub_00245160
 * Original: 0x00245160 - 0x0024517D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245160(void)
{

loc_00245160: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00246CD0(); /* call 0x00246CD0 */

loc_00245171: ;
    edx = esi + esi * 4;
    esp = esp + 0x10;
    eax = edi + edx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00245180
 * Original: 0x00245180 - 0x00245205 (133 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00245180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F740);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002451B6: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_002451EB; /* je: equal / zero */

loc_002451CA: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 4) = edx;
    ecx = eax + 8;
    MEM32(ebp + -32) = ecx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    edx = MEM32(esi + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_002451EB: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00245230
 * Original: 0x00245230 - 0x00245285 (85 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00245230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x480010);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x304;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    MEM32(ebp + -784) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -780) = edx;
    eax = eax + 8;
    PUSH32(esp, eax);
    eax = ebp + -776;
    PUSH32(esp, 0); sub_0023B180(); /* call 0x0023B180 */

loc_00245277: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(edi + 4);
    if (TEST_NZ(ebx, ebx)) { sub_00245285(); return; } /* jne: not equal / not zero */

loc_00245281: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024529D(); return; /* tail jmp 0x0024529D */

}

/**
 * sub_00245580
 * Original: 0x00245580 - 0x002455BB (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00245580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FD30);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00227C70(); /* call 0x00227C70 */

loc_002455B0: ;
    ecx = MEM32(ebx + 4);
    if (TEST_NZ(ecx, ecx)) { sub_002455BB(); return; } /* jne: not equal / not zero */

loc_002455B7: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002455C3(); return; /* tail jmp 0x002455C3 */

}

/**
 * sub_00245800
 * Original: 0x00245800 - 0x00245849 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00245800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB90);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax + 4);
    MEM32(ebp + -72) = edx;
    ecx = MEM32(eax);
    MEM32(ebp + -76) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00245835; /* je: equal / zero */

loc_00245833: ;
    MEM32(edx) = MEM32(edx) + 1;

loc_00245835: ;
    eax = MEM32(eax + 8);
    MEM32(ebp + -68) = eax;
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_00245849(); return; } /* jne: not equal / not zero */

loc_00245845: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024585E(); return; /* tail jmp 0x0024585E */

}

/**
 * sub_00245B30
 * Original: 0x00245B30 - 0x00245B8D (93 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00245B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB80);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax + 4);
    MEM32(ebp + -80) = edx;
    ecx = MEM32(eax);
    MEM32(ebp + -84) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00245B65; /* je: equal / zero */

loc_00245B63: ;
    MEM32(edx) = MEM32(edx) + 1;

loc_00245B65: ;
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(ebp + -76) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(ebp + -72) = xmm0; /* movss */
    SET_LO8(eax, MEM8(eax + 0x10));
    MEM8(ebp + -68) = LO8(eax);
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_00245B8D(); return; } /* jne: not equal / not zero */

loc_00245B89: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00245BA3(); return; /* tail jmp 0x00245BA3 */

}

/**
 * sub_00245E80
 * Original: 0x00245E80 - 0x00245FED (365 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;

loc_00245E80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    eax = 0x631C;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00245E90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x128;
    ecx = 0x40;
    /* nop */

loc_00245EA0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0;
    MEM8(eax + 2) = 0;
    MEM8(eax + 3) = 0;
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = 0;
    MEM8(eax + 9) = 0;
    edx = 0; /* xor self */
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 0x89) = 0;
    MEM16(eax + -256) = LO16(edx);
    MEM16(eax + -128) = LO16(edx);
    eax = eax + 0x18C;
    ecx--;
    if ((ecx != 0)) goto loc_00245EA0; /* jne: not equal / not zero */

loc_00245EDF: ;
    edx = MEM32(0x847100);
    eax = 0; /* xor self */
    ecx = 0x18C0;
    edi = esp + 0x28;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(0x8470FC);
    ecx = MEM32(eax + 8);
    eax = MEM32(edx + 8);
    edi = 0; /* xor self */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x10) = edi;
    ebx = esp + 0x28;

loc_00245F0F: ;
    ecx = MEM32(ebp + 8);
    esi = MEM32(ecx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0xC) = edi;
    if (TEST_Z(esi, esi)) { sub_00245FED(); return; } /* je: equal / zero */

loc_00245F21: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0x10);
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 4);
    if (CMP_AE(edx, eax)) { sub_00245FED(); return; } /* jae: above or equal (unsigned >=) */

loc_00245F35: ;
    ecx = MEM32(ebp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + esi + 8), _icall_esp); /* indirect call */
    }

loc_00245F3D: ;
    esp = esp + 4;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ebx + 0x103) = LO8(eax);
    eax = MEM32(0x8755F4);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(edi + esi + 4);
    MEM32(esp + 0x14) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00245F8E; /* jne: not equal / not zero */

loc_00245F5D: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00043830(); /* call 0x00043830 */

loc_00245F64: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(eax, eax)) goto loc_00245F87; /* je: equal / zero */

loc_00245F6F: ;
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0x5D4FB4;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00245F7E: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 8;
    goto loc_00245F89;

loc_00245F87: ;
    eax = 0; /* xor self */

loc_00245F89: ;
    MEM32(0x8755F4) = eax;

loc_00245F8E: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(MEM16(ecx), 0)) goto loc_00245F9C; /* jne: not equal / not zero */

loc_00245F98: ;
    eax = 0; /* xor self */
    goto loc_00245FC2;

loc_00245F9C: ;
    edi = MEM32(eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00245FAD: ;
    edi = MEM32(esp + 0x18);
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00245FC2; /* je: equal / zero */

loc_00245FBE: ;
    eax = MEM32(esp + 0x24);

loc_00245FC2: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00245FCB: ;
    ecx = MEM32(edi + esi);
    edx = MEM32(ecx);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00245FD6: ;
    edx = MEM32(esp + 0x10);
    edx++;
    edi = edi + 0x10;
    MEM32(esp + 0x10) = edx;
    ebx = ebx + 0x18C;
    goto loc_00245F0F;

}

/**
 * sub_00246230
 * Original: 0x00246230 - 0x0024623F (15 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246230: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    if (TEST_NZ(eax, eax)) { sub_0024623F(); return; } /* jne: not equal / not zero */

loc_0024623B: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00246247(); return; /* tail jmp 0x00246247 */

}

/**
 * sub_00246290
 * Original: 0x00246290 - 0x002462BB (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246290(void)
{
    int _flags = 0; /* fallback flag var */

loc_00246290: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    if (CMP_EQ(ecx, edx)) { sub_002462BB(); return; } /* je: equal / zero */

loc_0024629C: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    PUSH32(esp, ebx);

loc_002462A0: ;
    if (CMP_NE(esi, MEM32(ecx))) goto loc_002462AC; /* jne: not equal / not zero */

loc_002462A4: ;
    ebx = MEM32(edi + 4);
    if (CMP_EQ(ebx, MEM32(ecx + 4))) goto loc_002462B6; /* je: equal / zero */

loc_002462AC: ;
    ecx = ecx + 0x2DC;
    if (CMP_NE(ecx, edx)) goto loc_002462A0; /* jne: not equal / not zero */

loc_002462B6: ;
    POP32(esp, ebx);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002462C0
 * Original: 0x002462C0 - 0x00246347 (135 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002462C0(void)
{

loc_002462C0: ;
    esp = esp - 0x5B0;
    PUSH32(esp, esi);
    eax = esp + 0x5C0;
    PUSH32(esp, eax);
    eax = esp + 0x2E4;
    PUSH32(esp, 0); sub_0023B180(); /* call 0x0023B180 */

loc_002462DB: ;
    ecx = MEM32(esp + 0x5B8);
    edx = MEM32(esp + 0x5BC);
    eax = esp + 0x2E0;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0); sub_0023B180(); /* call 0x0023B180 */

loc_00246302: ;
    esi = esp + 0x2E0;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0024630E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = edi + 8;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    PUSH32(esp, 0); sub_0023B180(); /* call 0x0023B180 */

loc_00246328: ;
    esi = esp + 0xC;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_00246331: ;
    esi = esp + 0x5C0;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0024633D: ;
    eax = edi;
    POP32(esp, esi);
    esp = esp + 0x5B0;
    esp += 4; return; /* ret */

}

/**
 * sub_00246350
 * Original: 0x00246350 - 0x0024636C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246350(void)
{

loc_00246350: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00247100(); /* call 0x00247100 */

loc_00246366: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00246370
 * Original: 0x00246370 - 0x0024638B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246370(void)
{

loc_00246370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002471A0(); /* call 0x002471A0 */

loc_00246385: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00246390
 * Original: 0x00246390 - 0x002463AB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246390(void)
{

loc_00246390: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00265020(); /* call 0x00265020 */

loc_002463A5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002463B0
 * Original: 0x002463B0 - 0x002463FB (75 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002463B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002463B0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_002463F9; /* je: equal / zero */

loc_002463B7: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, MEM32(esi))) goto loc_002463E0; /* je: equal / zero */

loc_002463BD: ;
    if (TEST_Z(eax, eax)) goto loc_002463C4; /* je: equal / zero */

loc_002463C1: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_002463C4: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_002463E0; /* je: equal / zero */

loc_002463CC: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_002463E0; /* jne: not equal / not zero */

loc_002463D9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_002463E0: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = eax;
    esi = esi + 0x10;
    if (CMP_NE(esi, ebx)) goto loc_002463B7; /* jne: not equal / not zero */

loc_002463F9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00246400
 * Original: 0x00246400 - 0x00246416 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246400(void)
{
    int _flags = 0; /* fallback flag var */

loc_00246400: ;
    if (CMP_EQ(edx, ecx)) goto loc_00246415; /* je: equal / zero */

loc_00246404: ;
    PUSH32(esp, esi);

loc_00246405: ;
    esi = MEM32(ecx + -4);
    ecx = ecx - 4;
    eax = eax - 4;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(eax) = esi;
    if (CMP_NE(ecx, edx)) goto loc_00246405; /* jne: not equal / not zero */

loc_00246414: ;
    POP32(esp, esi);

loc_00246415: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00246420
 * Original: 0x00246420 - 0x00246456 (54 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246420: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(edi, MEM32(esp + 8))) goto loc_00246454; /* je: equal / zero */

loc_00246429: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ebx + 8;
    edi = edi;

loc_00246430: ;
    eax = MEM32(ebx);
    MEM32(edi) = eax;
    ecx = MEM32(ebx + 4);
    esi = edi + 8;
    eax = ebp;
    MEM32(edi + 4) = ecx;
    PUSH32(esp, 0); sub_0023ADF0(); /* call 0x0023ADF0 */

loc_00246444: ;
    eax = MEM32(esp + 0x10);
    edi = edi + 0x2DC;
    if (CMP_NE(edi, eax)) goto loc_00246430; /* jne: not equal / not zero */

loc_00246452: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00246454: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00246460
 * Original: 0x00246460 - 0x00246476 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246460(void)
{

loc_00246460: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00247240(); /* call 0x00247240 */

loc_00246470: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00246480
 * Original: 0x00246480 - 0x00246498 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246480(void)
{
    int _flags = 0; /* fallback flag var */

loc_00246480: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, edi)) goto loc_00246496; /* je: equal / zero */

loc_00246487: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00246620(); /* call 0x00246620 */

loc_0024648F: ;
    esi = esi + 0x10;
    if (CMP_NE(esi, edi)) goto loc_00246487; /* jne: not equal / not zero */

loc_00246496: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002464A0
 * Original: 0x002464A0 - 0x002464C7 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002464A0: ;
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(ebx, esi)) goto loc_002464C2; /* je: equal / zero */

loc_002464AA: ;
    /* nop */

loc_002464B0: ;
    esi = esi - 0x10;
    edi = edi - 0x10;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_00246620(); /* call 0x00246620 */

loc_002464BE: ;
    if (CMP_NE(esi, ebx)) goto loc_002464B0; /* jne: not equal / not zero */

loc_002464C2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002464D0
 * Original: 0x002464D0 - 0x002464EB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464D0(void)
{

loc_002464D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002472D0(); /* call 0x002472D0 */

loc_002464E5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002464F0
 * Original: 0x002464F0 - 0x0024656F (127 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002464F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_0024656C; /* je: equal / zero */

loc_002464FC: ;
    /* nop */

loc_00246500: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_0024654D; /* je: equal / zero */

loc_00246505: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_0024654D; /* jne: not equal / not zero */

loc_00246512: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00246518: ;
    if (TEST_NZ(eax, eax)) goto loc_0024654D; /* jne: not equal / not zero */

loc_0024651C: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0024654D; /* je: equal / zero */

loc_00246523: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00246543: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_0024654D: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_0024655F; /* je: equal / zero */

loc_0024655B: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;

loc_0024655F: ;
    edx = MEM32(edi + 8);
    MEM32(esi + 8) = edx;
    esi = esi + 0xC;
    if (CMP_NE(esi, ebp)) goto loc_00246500; /* jne: not equal / not zero */

loc_0024656C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00246570
 * Original: 0x00246570 - 0x0024658B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246570(void)
{

loc_00246570: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00247360(); /* call 0x00247360 */

loc_00246585: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00246590
 * Original: 0x00246590 - 0x0024661B (139 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246590: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_00246618; /* je: equal / zero */

loc_0024659C: ;
    /* nop */

loc_002465A0: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_002465ED; /* je: equal / zero */

loc_002465A5: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_002465ED; /* jne: not equal / not zero */

loc_002465B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002465B8: ;
    if (TEST_NZ(eax, eax)) goto loc_002465ED; /* jne: not equal / not zero */

loc_002465BC: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_002465ED; /* je: equal / zero */

loc_002465C3: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002465E3: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_002465ED: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_002465FF; /* je: equal / zero */

loc_002465FB: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;

loc_002465FF: ;
    edx = MEM32(edi + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = eax;
    SET_LO8(ecx, MEM8(edi + 0x10));
    MEM8(esi + 0x10) = LO8(ecx);
    esi = esi + 0x14;
    if (CMP_NE(esi, ebp)) goto loc_002465A0; /* jne: not equal / not zero */

loc_00246618: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00246620
 * Original: 0x00246620 - 0x002467B2 (402 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246620: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_002467AB; /* je: equal / zero */

loc_00246630: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 4);
    if (TEST_Z(ebx, ebx)) goto loc_0024664F; /* je: equal / zero */

loc_00246638: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - ebx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    if ((ecx != 0)) goto loc_0024665C; /* jne: not equal / not zero */

loc_0024664F: ;
    PUSH32(esp, 0); sub_00227C20(); /* call 0x00227C20 */

loc_00246654: ;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0024665C: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) goto loc_00246668; /* jne: not equal / not zero */

loc_00246664: ;
    eax = 0; /* xor self */
    goto loc_0024667D;

loc_00246668: ;
    edx = MEM32(esi + 8);
    edx = edx - edi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0024667D: ;
    if (CMP_A(ecx, eax)) goto loc_002466E9; /* ja: above (unsigned >) */

loc_00246681: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_002473F0(); /* call 0x002473F0 */

loc_00246693: ;
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00227D70(); /* call 0x00227D70 */

loc_002466A0: ;
    eax = MEM32(ebp + 4);
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_002466BF; /* jne: not equal / not zero */

loc_002466AA: ;
    edx = eax + eax * 2;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    ecx = eax + edx * 4;
    POP32(esp, ebx);
    MEM32(esi + 8) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_002466BF: ;
    ebp = MEM32(ebp + 8);
    ebp = ebp - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebp;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = eax + eax * 2;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    ecx = eax + edx * 4;
    POP32(esp, ebx);
    MEM32(esi + 8) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_002466E9: ;
    if (TEST_NZ(edi, edi)) goto loc_002466F1; /* jne: not equal / not zero */

loc_002466ED: ;
    eax = 0; /* xor self */
    goto loc_00246706;

loc_002466F1: ;
    edx = MEM32(esi + 0xC);
    edx = edx - edi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_00246706: ;
    if (CMP_A(ecx, eax)) goto loc_00246752; /* ja: above (unsigned >) */

loc_0024670A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00227790(); /* call 0x00227790 */

loc_00246711: ;
    edx = eax + eax * 2;
    eax = ebx + edx * 4;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_002473F0(); /* call 0x002473F0 */

loc_0024672A: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 8);
    ebp = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_002472D0(); /* call 0x002472D0 */

loc_00246743: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00246752: ;
    if (TEST_Z(edi, edi)) goto loc_00246784; /* je: equal / zero */

loc_00246756: ;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_00227D70(); /* call 0x00227D70 */

loc_00246765: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC);
    ecx = ecx - edi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    esp = esp + 4;
    eax = edi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_00246784: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_00227790(); /* call 0x00227790 */

loc_0024678B: ;
    PUSH32(esp, 0); sub_00227D20(); /* call 0x00227D20 */

loc_00246790: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002467A9; /* je: equal / zero */

loc_00246794: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_002464D0(); /* call 0x002464D0 */

loc_002467A6: ;
    MEM32(esi + 8) = eax;

loc_002467A9: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002467AB: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002467C0
 * Original: 0x002467C0 - 0x0024685A (154 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002467C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002467C0: ;
    esp = esp - 0x204;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_002467DC: ;
    edx = MEM32(esp + 0x218);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_002467EE: ;
    ecx = MEM32(esi);
    esp = esp + 0x14;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001F4F70(); /* call 0x001F4F70 */

loc_002467FD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0024685A(); return; } /* je: equal / zero */

loc_00246801: ;
    (void)0; /* cmp MEM16(esp + 8), 0 - flags set for next jcc */
    esi = MEM32(esi);
    if (CMP_NE(MEM16(esp + 8), 0)) goto loc_0024680F; /* jne: not equal / not zero */

loc_0024680B: ;
    eax = 0; /* xor self */
    goto loc_00246837;

loc_0024680F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00246825: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00246837; /* je: equal / zero */

loc_00246833: ;
    eax = MEM32(esp + 4);

loc_00246837: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470155(); /* call 0x00470155 */

loc_0024683D: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00246845: ;
    edx = MEM32(esp + 0x210);
    MEM8(edx) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00246870
 * Original: 0x00246870 - 0x00246905 (149 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246870(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00246870: ;
    esp = esp - 0x204;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0024688C: ;
    edx = MEM32(esp + 0x218);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_0024689E: ;
    ecx = MEM32(esi);
    esp = esp + 0x14;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001F4F70(); /* call 0x001F4F70 */

loc_002468AD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00246905(); return; } /* je: equal / zero */

loc_002468B1: ;
    (void)0; /* cmp MEM16(esp + 8), 0 - flags set for next jcc */
    esi = MEM32(esi);
    if (CMP_NE(MEM16(esp + 8), 0)) goto loc_002468BF; /* jne: not equal / not zero */

loc_002468BB: ;
    eax = 0; /* xor self */
    goto loc_002468E7;

loc_002468BF: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_002468D5: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002468E7; /* je: equal / zero */

loc_002468E3: ;
    eax = MEM32(esp + 4);

loc_002468E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470155(); /* call 0x00470155 */

loc_002468ED: ;
    edx = MEM32(esp + 0x214);
    esp = esp + 4;
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00246920
 * Original: 0x00246920 - 0x00246960 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246920(void)
{
    int _flags = 0; /* fallback flag var */

loc_00246920: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    if (CMP_EQ(esi, eax)) goto loc_00246944; /* je: equal / zero */

loc_0024692B: ;
    (void)0; /* cmp eax, eax - flags set for next jcc */
    edx = eax;
    if (CMP_EQ(eax, eax)) goto loc_00246941; /* je: equal / zero */

loc_00246931: ;
    PUSH32(esp, edi);

loc_00246932: ;
    edi = MEM32(edx);
    MEM32(esi) = edi;
    edx = edx + 4;
    esi = esi + 4;
    if (CMP_NE(edx, eax)) goto loc_00246932; /* jne: not equal / not zero */

loc_00246940: ;
    POP32(esp, edi);

loc_00246941: ;
    MEM32(ecx + 8) = esi;

loc_00246944: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00247520(); /* call 0x00247520 */

loc_0024695C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00246960
 * Original: 0x00246960 - 0x002469A1 (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246960: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(esi, ebx)) goto loc_00246993; /* je: equal / zero */

loc_00246978: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_0024697C: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00246993; /* je: equal / zero */

loc_00246983: ;
    esi = esi + 0x2DC;
    edi = edi + 0x2DC;
    if (CMP_NE(esi, ebx)) goto loc_00246978; /* jne: not equal / not zero */

loc_00246993: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002469B0
 * Original: 0x002469B0 - 0x00246AB6 (262 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002469B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002469B0: ;
    esp = esp - 0x208;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x218);
    PUSH32(esp, esi);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5FA29C);
    esi = eax;
    eax = esp + 0x20;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002469DD: ;
    esp = esp + 0x14;
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x224);
    PUSH32(esp, 0); sub_00247040(); /* call 0x00247040 */

loc_002469FB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00246A99; /* je: equal / zero */

loc_00246A03: ;
    PUSH32(esp, edi);

loc_00246A04: ;
    edx = MEM32(esi + 4);
    if (TEST_NZ(edx, edx)) goto loc_00246A0F; /* jne: not equal / not zero */

loc_00246A0B: ;
    ecx = 0; /* xor self */
    goto loc_00246A17;

loc_00246A0F: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);

loc_00246A17: ;
    if (TEST_Z(edx, edx)) goto loc_00246A46; /* je: equal / zero */

loc_00246A1B: ;
    eax = MEM32(esi + 0xC);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(ecx, eax)) goto loc_00246A46; /* jae: above or equal (unsigned >=) */

loc_00246A27: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, 0); sub_0037C2F0(); /* call 0x0037C2F0 */

loc_00246A3B: ;
    esp = esp + 0xC;
    edi = edi + 4;
    MEM32(esi + 8) = edi;
    goto loc_00246A5B;

loc_00246A46: ;
    eax = MEM32(esi + 8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 1;
    edx = esi;
    PUSH32(esp, 0); sub_00068580(); /* call 0x00068580 */

loc_00246A5B: ;
    ebx++;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5FA29C);
    eax = esp + 0x24;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00246A72: ;
    esp = esp + 0x14;
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x228);
    PUSH32(esp, 0); sub_00247040(); /* call 0x00247040 */

loc_00246A90: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00246A04; /* jne: not equal / not zero */

loc_00246A98: ;
    POP32(esp, edi);

loc_00246A99: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) { sub_00246AB6(); return; } /* jne: not equal / not zero */

loc_00246AA0: ;
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, ebp);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ebx);
    esp = esp + 0x208;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00246AE0
 * Original: 0x00246AE0 - 0x00246B1C (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246AE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    ebx = eax;
    if (CMP_EQ(edi, ebp)) goto loc_00246B16; /* je: equal / zero */

loc_00246AEF: ;
    PUSH32(esp, esi);

loc_00246AF0: ;
    eax = MEM32(edi);
    MEM32(ebx) = eax;
    ecx = MEM32(edi + 4);
    eax = edi + 8;
    esi = ebx + 8;
    MEM32(ebx + 4) = ecx;
    PUSH32(esp, 0); sub_0023ADF0(); /* call 0x0023ADF0 */

loc_00246B05: ;
    edi = edi + 0x2DC;
    ebx = ebx + 0x2DC;
    if (CMP_NE(edi, ebp)) goto loc_00246AF0; /* jne: not equal / not zero */

loc_00246B15: ;
    POP32(esp, esi);

loc_00246B16: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246B20
 * Original: 0x00246B20 - 0x00246B6F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00246B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FF80);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00246B53: ;
    if (CMP_BE(edi & edi, 0)) { sub_00246B6F(); return; } /* jbe: below or equal (unsigned <=) */

loc_00246B57: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00246F70(); /* call 0x00246F70 */

loc_00246B60: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x2DC;
    MEM32(ebp + 8) = esi;
    goto loc_00246B53;

}

/**
 * sub_00246BB0
 * Original: 0x00246BB0 - 0x00246C02 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00246BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB70);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00246BE3: ;
    if (CMP_BE(edi & edi, 0)) { sub_00246C02(); return; } /* jbe: below or equal (unsigned <=) */

loc_00246BE7: ;
    MEM32(ebp + -24) = esi;
    if (TEST_Z(esi, esi)) goto loc_00246BF6; /* je: equal / zero */

loc_00246BEE: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00227C70(); /* call 0x00227C70 */

loc_00246BF6: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x10;
    MEM32(ebp + 8) = esi;
    goto loc_00246BE3;

}

/**
 * sub_00246C40
 * Original: 0x00246C40 - 0x00246C8C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00246C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F5F0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00246C73: ;
    if (CMP_BE(edi & edi, 0)) { sub_00246C8C(); return; } /* jbe: below or equal (unsigned <=) */

loc_00246C77: ;
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00227E80(); /* call 0x00227E80 */

loc_00246C80: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0xC;
    MEM32(ebp + 8) = esi;
    goto loc_00246C73;

}

/**
 * sub_00246CD0
 * Original: 0x00246CD0 - 0x00246D1C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00246CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F5E0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00246D03: ;
    if (CMP_BE(edi & edi, 0)) { sub_00246D1C(); return; } /* jbe: below or equal (unsigned <=) */

loc_00246D07: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00227BF0(); /* call 0x00227BF0 */

loc_00246D10: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x14;
    MEM32(ebp + 8) = esi;
    goto loc_00246D03;

}

/**
 * sub_00246D60
 * Original: 0x00246D60 - 0x00246D93 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00246D60: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, edi)) goto loc_00246D91; /* je: equal / zero */

loc_00246D67: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00246D84; /* je: equal / zero */

loc_00246D6D: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_00246D84; /* jne: not equal / not zero */

loc_00246D79: ;
    if (TEST_Z(ecx, ecx)) goto loc_00246D84; /* je: equal / zero */

loc_00246D7D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_00246D84: ;
    MEM32(esi) = 0;
    esi = esi + 0x10;
    if (CMP_NE(esi, edi)) goto loc_00246D67; /* jne: not equal / not zero */

loc_00246D91: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00246DA0
 * Original: 0x00246DA0 - 0x00246DE0 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    ebx = eax;
    if (CMP_EQ(ebp, edi)) goto loc_00246DDA; /* je: equal / zero */

loc_00246DAF: ;
    PUSH32(esp, esi);

loc_00246DB0: ;
    eax = MEM32(edi + -732);
    edi = edi - 0x2DC;
    ebx = ebx - 0x2DC;
    MEM32(ebx) = eax;
    ecx = MEM32(edi + 4);
    eax = edi + 8;
    esi = ebx + 8;
    MEM32(ebx + 4) = ecx;
    PUSH32(esp, 0); sub_0023ADF0(); /* call 0x0023ADF0 */

loc_00246DD5: ;
    if (CMP_NE(edi, ebp)) goto loc_00246DB0; /* jne: not equal / not zero */

loc_00246DD9: ;
    POP32(esp, esi);

loc_00246DDA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246DE0
 * Original: 0x00246DE0 - 0x00246E3E (94 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00246DE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ebx, edi)) goto loc_00246E39; /* je: equal / zero */

loc_00246DEA: ;
    /* nop */

loc_00246DF0: ;
    eax = MEM32(edi + -16);
    ecx = MEM32(esi + -16);
    edi = edi - 0x10;
    esi = esi - 0x10;
    if (CMP_EQ(eax, ecx)) goto loc_00246E23; /* je: equal / zero */

loc_00246E00: ;
    if (TEST_Z(eax, eax)) goto loc_00246E07; /* je: equal / zero */

loc_00246E04: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_00246E07: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00246E23; /* je: equal / zero */

loc_00246E0F: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00246E23; /* jne: not equal / not zero */

loc_00246E1C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_00246E23: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(edi, ebx)) goto loc_00246DF0; /* jne: not equal / not zero */

loc_00246E39: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00246E40
 * Original: 0x00246E40 - 0x00246EC7 (135 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ebp, edi)) goto loc_00246EC1; /* je: equal / zero */

loc_00246E4F: ;
    /* nop */

loc_00246E50: ;
    eax = MEM32(esi + -12);
    esi = esi - 0xC;
    edi = edi - 0xC;
    if (TEST_Z(eax, eax)) goto loc_00246EA5; /* je: equal / zero */

loc_00246E5D: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00246EA5; /* jne: not equal / not zero */

loc_00246E6A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00246E70: ;
    if (TEST_NZ(eax, eax)) goto loc_00246EA5; /* jne: not equal / not zero */

loc_00246E74: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00246EA5; /* je: equal / zero */

loc_00246E7B: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00246E9B: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_00246EA5: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_00246EB7; /* je: equal / zero */

loc_00246EB3: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;

loc_00246EB7: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    edx = MEM32(edi + 8);
    MEM32(esi + 8) = edx;
    if (CMP_NE(edi, ebp)) goto loc_00246E50; /* jne: not equal / not zero */

loc_00246EC1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00246ED0
 * Original: 0x00246ED0 - 0x00246F63 (147 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246ED0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ebp, edi)) goto loc_00246F5D; /* je: equal / zero */

loc_00246EDF: ;
    /* nop */

loc_00246EE0: ;
    eax = MEM32(esi + -20);
    esi = esi - 0x14;
    edi = edi - 0x14;
    if (TEST_Z(eax, eax)) goto loc_00246F35; /* je: equal / zero */

loc_00246EED: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00246F35; /* jne: not equal / not zero */

loc_00246EFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00246F00: ;
    if (TEST_NZ(eax, eax)) goto loc_00246F35; /* jne: not equal / not zero */

loc_00246F04: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00246F35; /* je: equal / zero */

loc_00246F0B: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00246F2B: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_00246F35: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_00246F47; /* je: equal / zero */

loc_00246F43: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;

loc_00246F47: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    edx = MEM32(edi + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = eax;
    SET_LO8(ecx, MEM8(edi + 0x10));
    MEM8(esi + 0x10) = LO8(ecx);
    if (CMP_NE(edi, ebp)) goto loc_00246EE0; /* jne: not equal / not zero */

loc_00246F5D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00246F70
 * Original: 0x00246F70 - 0x00246F8B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00246F70: ;
    if (TEST_Z(eax, eax)) goto loc_00246F8A; /* je: equal / zero */

loc_00246F74: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    ecx = ecx + 8;
    MEM32(eax + 4) = edx;
    PUSH32(esp, ecx);
    eax = eax + 8;
    PUSH32(esp, 0); sub_0023B180(); /* call 0x0023B180 */

loc_00246F8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00246F90
 * Original: 0x00246F90 - 0x00247025 (149 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00246F90: ;
    esp = esp - 0x204;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00246FAC: ;
    edx = MEM32(esp + 0x218);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_00246FBE: ;
    ecx = MEM32(esi);
    esp = esp + 0x14;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001F4F70(); /* call 0x001F4F70 */

loc_00246FCD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00247025(); return; } /* je: equal / zero */

loc_00246FD1: ;
    (void)0; /* cmp MEM16(esp + 8), 0 - flags set for next jcc */
    esi = MEM32(esi);
    if (CMP_NE(MEM16(esp + 8), 0)) goto loc_00246FDF; /* jne: not equal / not zero */

loc_00246FDB: ;
    eax = 0; /* xor self */
    goto loc_00247007;

loc_00246FDF: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00246FF5: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00247007; /* je: equal / zero */

loc_00247003: ;
    eax = MEM32(esp + 4);

loc_00247007: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047054A(); /* call 0x0047054A */

loc_0024700D: ;
    edx = MEM32(esp + 0x214);
    esp = esp + 4;
    MEM32(edx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00247040
 * Original: 0x00247040 - 0x002470E6 (166 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00247040: ;
    esp = esp - 0x204;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0024705C: ;
    edx = MEM32(esp + 0x218);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_0024706E: ;
    ecx = MEM32(esi);
    esp = esp + 0x14;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001F4F70(); /* call 0x001F4F70 */

loc_0024707D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002470E6(); return; } /* je: equal / zero */

loc_00247081: ;
    (void)0; /* cmp MEM16(esp + 8), 0 - flags set for next jcc */
    esi = MEM32(esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM16(esp + 8), 0)) goto loc_002470A7; /* jne: not equal / not zero */

loc_0024708C: ;
    edi = MEM32(esp + 0x214);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00247480(); /* call 0x00247480 */

loc_0024709A: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x204;
    esp += 16; return; /* ret 12 */

loc_002470A7: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_002470BC: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    esi = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002470CD; /* je: equal / zero */

loc_002470C9: ;
    esi = MEM32(esp + 8);

loc_002470CD: ;
    edi = MEM32(esp + 0x214);
    PUSH32(esp, 0); sub_00247480(); /* call 0x00247480 */

loc_002470D9: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x204;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00247100
 * Original: 0x00247100 - 0x00247155 (85 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00247100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x480000);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);

loc_00247134: ;
    if (CMP_EQ(esi, ebx)) { sub_00247155(); return; } /* je: equal / zero */

loc_00247138: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00246F70(); /* call 0x00246F70 */

loc_00247141: ;
    edi = edi + 0x2DC;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 0x2DC;
    MEM32(ebp + 8) = esi;
    goto loc_00247134;

}

/**
 * sub_002471A0
 * Original: 0x002471A0 - 0x002471F4 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002471A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002471A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FFF0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0xC);
    ebx = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;

loc_002471D3: ;
    if (CMP_EQ(esi, ebx)) { sub_002471F4(); return; } /* je: equal / zero */

loc_002471D7: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00246F70(); /* call 0x00246F70 */

loc_002471E0: ;
    edi = edi + 0x2DC;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x2DC;
    MEM32(ebp + 8) = esi;
    goto loc_002471D3;

}

/**
 * sub_00247240
 * Original: 0x00247240 - 0x00247294 (84 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00247240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB60);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = MEM32(ebp + 0xC);
    ebx = ecx;
    edi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00247273: ;
    if (CMP_EQ(edi, ebx)) { sub_00247294(); return; } /* je: equal / zero */

loc_00247277: ;
    MEM32(ebp + -24) = esi;
    if (TEST_Z(esi, esi)) goto loc_00247286; /* je: equal / zero */

loc_0024727E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_00227C70(); /* call 0x00227C70 */

loc_00247286: ;
    esi = esi + 0x10;
    MEM32(ebp + 0xC) = esi;
    edi = edi + 0x10;
    MEM32(ebp + 8) = edi;
    goto loc_00247273;

}

/**
 * sub_002472D0
 * Original: 0x002472D0 - 0x0024731E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002472D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002472D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F5D0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0xC);
    ebx = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;

loc_00247303: ;
    if (CMP_EQ(esi, ebx)) { sub_0024731E(); return; } /* je: equal / zero */

loc_00247307: ;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00227E80(); /* call 0x00227E80 */

loc_00247310: ;
    edi = edi + 0xC;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0xC;
    MEM32(ebp + 8) = esi;
    goto loc_00247303;

}

/**
 * sub_00247360
 * Original: 0x00247360 - 0x002473AE (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00247360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F5C0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0xC);
    ebx = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;

loc_00247393: ;
    if (CMP_EQ(esi, ebx)) { sub_002473AE(); return; } /* je: equal / zero */

loc_00247397: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00227BF0(); /* call 0x00227BF0 */

loc_002473A0: ;
    edi = edi + 0x14;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x14;
    MEM32(ebp + 8) = esi;
    goto loc_00247393;

}

/**
 * sub_002473F0
 * Original: 0x002473F0 - 0x00247475 (133 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002473F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002473F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(edi, ebp)) goto loc_0024746F; /* je: equal / zero */

loc_002473FF: ;
    /* nop */

loc_00247400: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_0024744D; /* je: equal / zero */

loc_00247405: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_0024744D; /* jne: not equal / not zero */

loc_00247412: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00247418: ;
    if (TEST_NZ(eax, eax)) goto loc_0024744D; /* jne: not equal / not zero */

loc_0024741C: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0024744D; /* je: equal / zero */

loc_00247423: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00247443: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_0024744D: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_0024745F; /* je: equal / zero */

loc_0024745B: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;

loc_0024745F: ;
    edx = MEM32(edi + 8);
    MEM32(esi + 8) = edx;
    edi = edi + 0xC;
    esi = esi + 0xC;
    if (CMP_NE(edi, ebp)) goto loc_00247400; /* jne: not equal / not zero */

loc_0024746F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00247480
 * Original: 0x00247480 - 0x00247499 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247480(void)
{
    int _flags = 0; /* fallback flag var */

loc_00247480: ;
    PUSH32(esp, 0x5F9B68);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0024748B: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00247499(); return; } /* jne: not equal / not zero */

loc_00247492: ;
    MEM32(edi) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00247520
 * Original: 0x00247520 - 0x0024755A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00247520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB50);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    eax = MEM32(ebp + 0x10);
    eax = eax - MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax >> 2);
    MEM32(ebp + -24) = eax;
    edx = MEM32(esi + 4);
    if (TEST_NZ(edx, edx)) { sub_0024755A(); return; } /* jne: not equal / not zero */

loc_00247556: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00247562(); return; /* tail jmp 0x00247562 */

}

/**
 * sub_00247750
 * Original: 0x00247750 - 0x00247771 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247750(void)
{
    int _flags = 0; /* fallback flag var */

loc_00247750: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00247756: ;
    ecx = edi + -1;
    edx = 1;
    edx = edx << LO8(ecx);
    esp = esp + 4;
    if (TEST_Z(eax, edx)) goto loc_00247770; /* je: equal / zero */

loc_00247767: ;
    edx = edx | 0xFFFFFFFFu;
    ecx = edi;
    edx = edx << LO8(ecx);
    eax = eax | edx;

loc_00247770: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00247780
 * Original: 0x00247780 - 0x002477D2 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247780(void)
{
    int _flags = 0; /* fallback flag var */

loc_00247780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x10);
    eax = MEM32(esi + 8);
    MEM32(edi + 4) = 0;
    MEM32(edi) = 0x5FBD40;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_002477A1: ;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi) = 0x5FBDE0;
    MEM32(edi + 0x14) = esi;
    edx = MEM32(esi + 4);
    edx++;
    ecx = edx;
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = edx;
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_002477CB; /* jne: not equal / not zero */

loc_002477C3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_002477CB: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002477E0
 * Original: 0x002477E0 - 0x002477E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002477E0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002477E0: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00247820
 * Original: 0x00247820 - 0x00247872 (82 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247820(void)
{
    int _flags = 0; /* fallback flag var */

loc_00247820: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 8) = edi;
    if (TEST_Z(edi, edi)) goto loc_00247830; /* je: equal / zero */

loc_0024782D: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_00247830: ;
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi + 4;
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_0024F260(); /* call 0x0024F260 */

loc_0024783F: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(edi, edi)) goto loc_0024786E; /* je: equal / zero */

loc_00247844: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00247859; /* jne: not equal / not zero */

loc_00247851: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00247859: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024786E; /* jne: not equal / not zero */

loc_00247866: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024786E: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00247880
 * Original: 0x00247880 - 0x00247898 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247880(void)
{

loc_00247880: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024EEA0(); /* call 0x0024EEA0 */

loc_00247891: ;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002478A0
 * Original: 0x002478A0 - 0x002478ED (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002478A0(void)
{
    float xmm0;

loc_002478A0: ;
    esp = esp - 0x10;
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    esp = esp - 0x10;
    edi = esp;
    eax = 0x2507B0;
    MEM32(edi) = eax;
    edx = 0; /* xor self */
    MEM32(edi + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x20) = xmm0; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(edi + 8) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(edi + 0xC) = edx;
    PUSH32(esp, 0); sub_0024FF50(); /* call 0x0024FF50 */

loc_002478E2: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002478F0
 * Original: 0x002478F0 - 0x0024792E (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002478F0(void)
{
    float xmm0;

loc_002478F0: ;
    esp = esp - 0x10;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx + 4;
    ebx = esp + 0xC;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0024EEE0(); /* call 0x0024EEE0 */

loc_00247926: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00247930
 * Original: 0x00247930 - 0x0024798A (90 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247930(void)
{
    float xmm0;

loc_00247930: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x5FBD40;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00247945: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0x5FBCF0;
    edx = MEM32(edi);
    ecx = esi + 0x14;
    MEM32(ecx) = edx;
    eax = MEM32(edi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 8);
    eax = MEM32(esp + 8);
    MEMF(esi + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(esi + 0x28) = eax;
    MEM32(ecx + 8) = edx;
    MEMF(esi + 0x24) = xmm0; /* movss */
    eax = esi;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00247990
 * Original: 0x00247990 - 0x002479DB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247990(void)
{
    int _flags = 0; /* fallback flag var */

loc_00247990: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    ecx = ebx;
    edi = 0x84D458;
    MEM32(esi) = 0x5FBCF0;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_002479A7: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002479D2; /* je: equal / zero */

loc_002479AD: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002479B8; /* je: equal / zero */

loc_002479B4: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_002479B8: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_002479D2; /* jne: not equal / not zero */

loc_002479BF: ;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_002479C8: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_002479D2: ;
    POP32(esp, edi);
    MEM32(esi) = 0x5FBD40;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002479E0
 * Original: 0x002479E0 - 0x00247A32 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002479E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002479E0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    xmm0 = MEMF(esi + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x70); /* subss */
    xmm1 = MEMF(eax + 0x68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x6C); /* movss */
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 4);
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm1; /* movss */
    if (CMP_A(ecx, 4)) { sub_00247A32(); return; } /* ja: above (unsigned >) */

loc_00247A1F: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x247B8C)); return; /* indirect tail jmp */

    ebx = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_00247A34(); return; /* tail jmp 0x00247A34 */

    eax = MEM32(eax + 0x1C);
    ebx = MEM32(eax);
    g_seh_ebp = ebp; sub_00247A34(); return; /* tail jmp 0x00247A34 */

}

/**
 * sub_00247BD0
 * Original: 0x00247BD0 - 0x00247D9C (460 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247BD0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00247BD0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_00247BE1: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00247BE6: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    esi = eax;
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_00247C08: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00247C10: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCB1);
    esi = esi + eax;
    eax = esi;
    ecx = eax;
    ecx = ecx << 0xD;
    eax = eax ^ ecx;
    ecx = esi + 1;
    edx = ecx;
    edx = edx << 0xD;
    ecx = ecx ^ edx;
    edx = esi + 0xCB1;
    edi = edx;
    edi = edi << 0xD;
    edx = edx ^ edi;
    esi = esi + 0xCB2;
    edi = esi;
    edi = edi << 0xD;
    esi = esi ^ edi;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3D73);
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm6 = MEMF(0x648CE0); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm2 = MEMF(0x648D20); /* movss */
    edi = edi + 0xC0AE5;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3D73);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm2; /* movaps */
    eax = eax + 0xC0AE5;
    xmm4 = xmm3; /* movaps */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm3 = MEMF(0x648F90); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    edi = edi - 0x2DF722F3;
    xmm2 = xmm2 * xmm1; /* mulss */
    edi = edi & 0x7FFFFFFF;
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm6 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm6; /* subss */
    eax = eax - 0x2DF722F3;
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 - xmm4; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    eax = eax & 0x7FFFFFFF;
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3D73);
    ecx = ecx + 0xC0AE5;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3D73);
    edx = edx + 0xC0AE5;
    xmm7 = xmm7 * xmm4; /* mulss */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm2; /* subss */
    ecx = ecx - 0x2DF722F3;
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    ecx = ecx & 0x7FFFFFFF;
    xmm6 = xmm1; /* movaps */
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm6 = xmm6 * xmm4; /* mulss */
    edx = edx - 0x2DF722F3;
    edx = edx & 0x7FFFFFFF;
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    POP32(esp, edi);
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00247DA0
 * Original: 0x00247DA0 - 0x00247E79 (217 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247DA0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00247DA0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_00247DAF: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00247DB7: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = eax + 0x3EE2D9BC;
    eax = ecx;
    edx = eax;
    edx = edx << 0xD;
    eax = eax ^ edx;
    ecx++;
    edx = ecx;
    edx = edx << 0xD;
    ecx = ecx ^ edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3D73);
    edx = edx + 0xC0AE5;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    xmm0 = MEMF(esp + 4); /* movss */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm3 = MEMF(0x648F90); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3D73);
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D20); /* movss */
    eax = eax + 0xC0AE5;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = edx - 0x2DF722F3;
    edx = edx & 0x7FFFFFFF;
    xmm0 = xmm2; /* movaps */
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - xmm1; /* subss */
    eax = eax - 0x2DF722F3;
    xmm0 = xmm0 * xmm4; /* mulss */
    eax = eax & 0x7FFFFFFF;
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00247E80
 * Original: 0x00247E80 - 0x00247EEF (111 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247E80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00247E80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = eax;
    eax = esp;
    MEM32(eax) = esi;
    if (TEST_Z(esi, esi)) goto loc_00247E94; /* je: equal / zero */

loc_00247E91: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_00247E94: ;
    PUSH32(esp, 0); sub_00247780(); /* call 0x00247780 */

loc_00247E99: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(edi + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi) = 0x5FBDA4;
    MEMF(edi + 0x20) = xmm0; /* movss */
    MEMF(edi + 0x24) = xmm1; /* movss */
    MEMF(edi + 0x28) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_00247EE8; /* je: equal / zero */

loc_00247ED3: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00247EE8; /* jne: not equal / not zero */

loc_00247EE0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00247EE8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00247EF0
 * Original: 0x00247EF0 - 0x00247FAA (186 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247EF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00247EF0: ;
    xmm0 = MEMF(eax + 0x28); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00247F3D; /* jbe: below or equal (unsigned <=) */

loc_00247EFD: ;
    xmm0 = MEMF(eax + 0x24); /* movss */
    /* comiss xmm0, MEMF(eax + 0x20) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x20))) goto loc_00247F3D; /* jb: below (unsigned <) */

loc_00247F08: ;
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 / MEMF(esp + 8); /* divss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    xmm0 = xmm0 * MEMF(eax + 0x28); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x20); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(eax + 0x20) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00247F7D; /* ja: above (unsigned >) */

loc_00247F38: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00247F7D;

loc_00247F3D: ;
    xmm0 = MEMF(eax + 0x20); /* movss */
    /* comiss xmm0, MEMF(eax + 0x24) - sets EFLAGS */
    xmm1 = xmm3; /* movaps */
    if ((xmm0 <= MEMF(eax + 0x24))) goto loc_00247F50; /* jbe: below or equal (unsigned <=) */

loc_00247F4B: ;
    xmm1 = MEMF(eax + 0x24); /* movss */

loc_00247F50: ;
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(eax + 0x20); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 / MEMF(esp + 0xC); /* divss */
    xmm4 = xmm4 * MEMF(esp + 4); /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(eax + 0x20) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00247F7D; /* jbe: below or equal (unsigned <=) */

loc_00247F7A: ;
    xmm0 = xmm1; /* movaps */

loc_00247F7D: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(eax + 0x20) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_00247F8C; /* jbe: below or equal (unsigned <=) */

loc_00247F87: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) { sub_00247FAA(); return; } /* jbe: below or equal (unsigned <=) */

loc_00247F8C: ;
    /* comiss xmm2, MEMF(eax + 0x20) - sets EFLAGS */
    if ((xmm2 <= MEMF(eax + 0x20))) goto loc_00247F9F; /* jbe: below or equal (unsigned <=) */

loc_00247F92: ;
    xmm0 = MEMF(eax + 0x20); /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    esp += 16; return; /* ret 12 */

loc_00247F9F: ;
    xmm0 = xmm2; /* movaps */
    MEMF(eax + 0x20) = xmm0; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00247FC0
 * Original: 0x00247FC0 - 0x00247FE6 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247FC0(void)
{

loc_00247FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00247EF0(); /* call 0x00247EF0 */

loc_00247FD8: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00247FE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00247FF0
 * Original: 0x00247FF0 - 0x00248010 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247FF0(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247FF0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ecx + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(ecx + 0x24) = xmm0; /* movss */
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00248010
 * Original: 0x00248010 - 0x00248067 (87 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248010(void)
{
    float xmm0;

loc_00248010: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm0 = MEMF(esi + 0x20); /* movss */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x10) = edx;
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    edx = esp + 4;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00248058: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x28) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00248070
 * Original: 0x00248070 - 0x00248090 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248070(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00248070: ;
    xmm0 = MEMF(ecx + 0x20); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) { sub_00248090(); return; } /* jbe: below or equal (unsigned <=) */

loc_0024807E: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_00248086: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00248090(); return; } /* je: equal / zero */

loc_0024808A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002480A0
 * Original: 0x002480A0 - 0x002480F4 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002480A0(void)
{
    float xmm0;

loc_002480A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(ebx + 4) = 0;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x5FBD40;
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_002480BC: ;
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(ebx + 0x10) = eax;
    edi = ebx + 0x20;
    MEM32(ebx) = 0x5FBD68;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x60) = ecx;
    MEMF(ebx + 0x64) = xmm0; /* movss */
    eax = ebx;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00248100
 * Original: 0x00248100 - 0x0024814B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248100(void)
{
    int _flags = 0; /* fallback flag var */

loc_00248100: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x60);
    PUSH32(esp, edi);
    ecx = ebx;
    edi = 0x84D458;
    MEM32(esi) = 0x5FBD68;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_00248117: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00248142; /* je: equal / zero */

loc_0024811D: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00248128; /* je: equal / zero */

loc_00248124: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00248128: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_00248142; /* jne: not equal / not zero */

loc_0024812F: ;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00248138: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00248142: ;
    POP32(esp, edi);
    MEM32(esi) = 0x5FBD40;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248150
 * Original: 0x00248150 - 0x0024817B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00248150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    edx = ecx;
    eax = MEM32(edx + 0x60);
    ecx = MEM32(eax + 4);
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(ecx, 4)) { sub_0024817B(); return; } /* ja: above (unsigned >) */

loc_00248168: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x2481D4)); return; /* indirect tail jmp */

    esi = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_0024817D(); return; /* tail jmp 0x0024817D */

    eax = MEM32(eax + 0x1C);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_0024817D(); return; /* tail jmp 0x0024817D */

}

/**
 * sub_00248220
 * Original: 0x00248220 - 0x002484F1 (721 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00248220: ;
    eax = 0x1014;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0024822A: ;
    eax = MEM32(esp + 0x101C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x101C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1034);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(ebx + 4) = esi;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x5FBD40;
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00248256: ;
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(esp + 0x1040);
    ecx = ebx + 0x14;
    MEM32(ebx + 0x10) = eax;
    MEM32(ebx) = 0x5FBD2C;
    edx = ebp;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = esi;
    PUSH32(esp, 0); sub_0024F150(); /* call 0x0024F150 */

loc_0024827C: ;
    ecx = MEM32(esp + 0x1044);
    esi = MEM32(esp + 0x1030);
    MEM32(ebx + 0x24) = ecx;
    edi = ebx + 0x30;
    ecx = 0x10;
    ebp++;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 0; /* xor self */
    ebp--;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(ebp & ebp, 0)) goto loc_002484E2; /* jle: less or equal (signed <=) */

loc_002482AB: ;
    eax = MEM32(esp + 0x1034);
    ebp = esp + 0x24;
    ebp = ebp - eax;
    MEM32(esp + 0x18) = ebp;
    /* nop */

loc_002482C0: ;
    eax = MEM32(esp + 0x1034);

loc_002482C7: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002482C7; /* jne: not equal / not zero */

loc_002482D1: ;
    if (CMP_GE(esi, 0xA)) goto loc_00248303; /* jge: greater or equal (signed >=) */

loc_002482D6: ;
    PUSH32(esp, 0xA);
    edx = esp + 0x828;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00479B08(); /* call 0x00479B08 */

loc_002482E7: ;
    esp = esp + 0xC;
    eax = esp + 0x824;
    PUSH32(esp, eax);
    edi = esp + 0x28;
    MEM8(esp + 0xC27) = 0;
    PUSH32(esp, 0); sub_000687F0(); /* call 0x000687F0 */

loc_00248303: ;
    PUSH32(esp, 0xA);
    ecx = esp + 0x428;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00479B08(); /* call 0x00479B08 */

loc_00248313: ;
    esp = esp + 0xC;
    edx = esp + 0x424;
    PUSH32(esp, edx);
    edi = esp + 0x28;
    MEM8(esp + 0x827) = 0;
    PUSH32(esp, 0); sub_000687F0(); /* call 0x000687F0 */

loc_0024832F: ;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, 0x3FF);
    eax = eax + 0x8C;
    PUSH32(esp, eax);
    eax = esp + 0xC2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0024834A: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edi = esp + 0xC28;
    PUSH32(esp, 0); sub_000687F0(); /* call 0x000687F0 */

loc_0024835B: ;
    edi = esp + 0x20;
    eax = esp + 0xC24;
    PUSH32(esp, 0); sub_00076130(); /* call 0x00076130 */

loc_0024836B: ;
    eax = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_002484D1; /* je: equal / zero */

loc_00248377: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024837E: ;
    ebp = eax;
    esi = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(ebp, esi)) goto loc_002483E5; /* je: equal / zero */

loc_00248389: ;
    eax = MEM32(esp + 0x102C);
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = 0x5FBD40;
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_002483A2: ;
    edx = MEM32(esp + 0x1040);
    esi = MEM32(esp + 0x1030);
    xmm0 = MEMF(esp + 0x1038); /* movss */
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(ebp + 0x10) = edx;
    MEM32(ebp) = 0x5FBD68;
    edi = ebp + 0x20;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebp + 0x60) = eax;
    MEMF(ebp + 0x64) = xmm0; /* movss */
    eax = MEM32(ebp + 4);
    eax++;
    esi = ebp;
    MEM32(ebp + 4) = eax;

loc_002483E5: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_002483EC: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024844E; /* je: equal / zero */

loc_002483F3: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(esp + 0x1040);
    edx = MEM32(ecx + 0x64);
    ecx = MEM32(ecx + 0x60);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024840E; /* je: equal / zero */

loc_0024840B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024840E: ;
    PUSH32(esp, 0); sub_00247E80(); /* call 0x00247E80 */

loc_00248413: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024841C; /* je: equal / zero */

loc_00248419: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024841C: ;
    if (TEST_Z(esi, esi)) goto loc_00248435; /* je: equal / zero */

loc_00248420: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00248435; /* jne: not equal / not zero */

loc_0024842D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00248435: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (TEST_Z(edi, edi)) goto loc_00248440; /* je: equal / zero */

loc_0024843D: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_00248440: ;
    edx = MEM32(ebx + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = ebx + 0x14;
    if (TEST_NZ(edx, edx)) goto loc_00248452; /* jne: not equal / not zero */

loc_0024844A: ;
    ecx = 0; /* xor self */
    goto loc_0024845A;

loc_0024844E: ;
    edi = 0; /* xor self */
    goto loc_0024841C;

loc_00248452: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);

loc_0024845A: ;
    if (TEST_Z(edx, edx)) goto loc_0024848A; /* je: equal / zero */

loc_0024845E: ;
    eax = MEM32(esi + 0xC);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(ecx, eax)) goto loc_0024848A; /* jae: above or equal (unsigned >=) */

loc_0024846A: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_002502B0(); /* call 0x002502B0 */

loc_0024847F: ;
    esp = esp + 0x10;
    ebp = ebp + 4;
    MEM32(esi + 8) = ebp;
    goto loc_0024849B;

loc_0024848A: ;
    eax = MEM32(esi + 8);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024FB60(); /* call 0x0024FB60 */

loc_0024849B: ;
    if (TEST_Z(edi, edi)) goto loc_002484C9; /* je: equal / zero */

loc_0024849F: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_002484B4; /* jne: not equal / not zero */

loc_002484AC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_002484B4: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_002484C9; /* jne: not equal / not zero */

loc_002484C1: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_002484C9: ;
    ebp = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);

loc_002484D1: ;
    eax = MEM32(esp + 0x14);
    esi++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(esi, eax)) goto loc_002482C0; /* jl: less (signed <) */

loc_002484E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x1014;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00248500
 * Original: 0x00248500 - 0x00248511 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00248500: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x24), _icall_esp); /* indirect call */
    }

loc_00248506: ;
    edx = MEM32(esi + 0x18);
    if (TEST_NZ(edx, edx)) { sub_00248511(); return; } /* jne: not equal / not zero */

loc_0024850D: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00248519(); return; /* tail jmp 0x00248519 */

}

/**
 * sub_00248540
 * Original: 0x00248540 - 0x0024858D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248540(void)
{
    float xmm0;

loc_00248540: ;
    esp = esp - 0x10;
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, edi);
    esp = esp - 0x10;
    edi = esp;
    eax = 0x2507B0;
    MEM32(edi) = eax;
    edx = 0; /* xor self */
    MEM32(edi + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x20) = xmm0; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(edi + 8) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(edi + 0xC) = edx;
    PUSH32(esp, 0); sub_0024FF50(); /* call 0x0024FF50 */

loc_00248582: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00248590
 * Original: 0x00248590 - 0x002485A8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248590(void)
{

loc_00248590: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx + 0x14;
    PUSH32(esp, 0); sub_0024EEE0(); /* call 0x0024EEE0 */

loc_002485A3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002485B0
 * Original: 0x002485B0 - 0x002485E1 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002485B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002485B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x14;
    PUSH32(esp, 0); sub_0024F500(); /* call 0x0024F500 */

loc_002485BC: ;
    (void)0; /* test MEM8(esp + 0xC), 1 - flags set for next jcc */
    MEM32(edi) = 0x5FBD40;
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_002485DA; /* je: equal / zero */

loc_002485C9: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002485D7: ;
    esp = esp + 4;

loc_002485DA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002485F0
 * Original: 0x002485F0 - 0x00248647 (87 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002485F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002485F0: ;
    eax--;
    if (CMP_A(eax, 4)) goto loc_0024861D; /* ja: above (unsigned >) */

loc_002485F6: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x248654)); return; /* indirect tail jmp */

    MEM32(0x807668) = 0x2487C0;
    goto loc_0024861D;

    MEM32(0x807668) = 0x248920;
    MEM32(0x807670) = 0x248670;

loc_0024861D: ;
    xmm0 = MEMF(0x849C3C); /* movss */
    eax = MEM32(esp + 4);
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    SET_LO8(ebx, 0); /* xor self */
    MEMF(0x849C3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000DB520(); /* call 0x000DB520 */

loc_00248642: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002487C0
 * Original: 0x002487C0 - 0x00248920 (352 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002487C0(void)
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

loc_002487C0: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x849C3C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(0x849C38); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x648EA8); /* mulss */
    esp = esp - 8;
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 4) = xmm3; /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00247BD0(); /* call 0x00247BD0 */

loc_00248846: ;
    eax = MEM32(esp + 0x24);
    (void)0; /* cmp MEM8(eax), 0xFF - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(0x648FDC); /* mulss */
    if (CMP_AE(MEM8(eax), 0xFF)) goto loc_00248862; /* jae: above or equal (unsigned >=) */

loc_0024885F: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_00248862: ;
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    ecx = esp;
    edx = ecx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002488B0: ;
    ecx = MEM32(esp + 0x18);
    edx = ZX8(MEM8(ecx));
    eax = ZX8(LO8(eax));
    eax = eax + edx;
    if (CMP_L(eax, 0xFF)) goto loc_002488C8; /* jl: less (signed <) */

loc_002488C3: ;
    eax = 0xFF;

loc_002488C8: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM8(ecx) = LO8(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002488D9: ;
    ecx = MEM32(esp + 0x1C);
    edx = ZX8(MEM8(ecx));
    eax = ZX8(LO8(eax));
    eax = eax + edx;
    if (CMP_L(eax, 0xFF)) goto loc_002488F1; /* jl: less (signed <) */

loc_002488EC: ;
    eax = 0xFF;

loc_002488F1: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM8(ecx) = LO8(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248902: ;
    ecx = MEM32(esp + 0x20);
    edx = ZX8(MEM8(ecx));
    eax = ZX8(LO8(eax));
    eax = eax + edx;
    if (CMP_L(eax, 0xFF)) goto loc_0024891A; /* jl: less (signed <) */

loc_00248915: ;
    eax = 0xFF;

loc_0024891A: ;
    MEM8(ecx) = LO8(eax);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002489F0
 * Original: 0x002489F0 - 0x00248A4C (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002489F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002489F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = eax;
    eax = esp;
    MEM32(eax) = esi;
    if (TEST_Z(esi, esi)) goto loc_00248A04; /* je: equal / zero */

loc_00248A01: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_00248A04: ;
    PUSH32(esp, 0); sub_00247780(); /* call 0x00247780 */

loc_00248A09: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(edi + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(edi) = 0x5FBD54;
    MEM32(edi + 0x18) = eax;
    MEMF(edi + 0x20) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_00248A45; /* je: equal / zero */

loc_00248A30: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00248A45; /* jne: not equal / not zero */

loc_00248A3D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00248A45: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00248A50
 * Original: 0x00248A50 - 0x00248AB1 (97 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248A50(void)
{
    float xmm0;

loc_00248A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0); sub_002485F0(); /* call 0x002485F0 */

loc_00248A5F: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x14);
    xmm0 = MEMF(esi + 0x20); /* movss */
    edx = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEMF(0x6BD958) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00248A81: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    MEMF(0x849C38) = xmm0; /* movss */
    xmm0 = MEMF(0x648E40); /* movss */
    MEM32(0x807668) = eax;
    MEM32(0x807670) = eax;
    MEMF(0x6BD958) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000DB6A0(); /* call 0x000DB6A0 */

loc_00248AAD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00248AC0
 * Original: 0x00248AC0 - 0x00248B0C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248AC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00248AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00248AE1; /* je: equal / zero */

loc_00248ACA: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_00248AE1; /* jne: not equal / not zero */

loc_00248AD7: ;
    if (TEST_Z(ecx, ecx)) goto loc_00248AE1; /* je: equal / zero */

loc_00248ADB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00248AE1: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi + 0x14) = 0;
    MEM32(esi) = 0x5FBD40;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00248B06; /* je: equal / zero */

loc_00248AF5: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00248B03: ;
    esp = esp + 4;

loc_00248B06: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00248B10
 * Original: 0x00248B10 - 0x00248B7E (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248B10(void)
{
    float xmm0;

loc_00248B10: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x5FBD40;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00248B25: ;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(esp + 4); /* movss */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0x5FBD90;
    eax = MEM32(edi);
    edx = esi + 0x18;
    MEM32(edx) = eax;
    ecx = MEM32(edi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(edi + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = esi + 0x2C;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    MEMF(esi + 0x24) = xmm0; /* movss */
    MEM8(esi + 0x28) = 0;
    MEM8(esi + 0x29) = 1;
    MEM32(ecx + 8) = edx;
    eax = esi;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00248B80
 * Original: 0x00248B80 - 0x00248BD7 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248B80(void)
{
    float xmm0;

loc_00248B80: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x5FBD40;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00248B95: ;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(esp + 4); /* movss */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0x5FBD90;
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(edi);
    edx = esi + 0x18;
    MEM32(edx) = eax;
    ecx = MEM32(edi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(edi + 8);
    MEM32(edx + 8) = eax;
    MEMF(esi + 0x24) = xmm0; /* movss */
    MEM8(esi + 0x28) = 0;
    MEM8(esi + 0x29) = 0;
    eax = esi;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00248BE0
 * Original: 0x00248BE0 - 0x00248C03 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248BE0(void)
{

loc_00248BE0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    eax = ecx + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00248C10(); /* call 0x00248C10 */

loc_00248C00: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00248C10
 * Original: 0x00248C10 - 0x00249536 (2342 bytes, 534 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248C10(void)
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

loc_00248C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1B4;
    eax = MEM32(0x84B868);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x4C) = esi;
    edi = edi;

loc_00248C30: ;
    if (TEST_NZ(esi, esi)) goto loc_00248C41; /* jne: not equal / not zero */

loc_00248C34: ;
    SET_LO8(eax, MEM8(0x75E818));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00249502; /* je: equal / zero */

loc_00248C41: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_00248C48: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537760(); /* call 0x00537760 */

loc_00248C4F: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D14); /* movss */
    MEM8(0x8086C6) = 0;
    MEMF(0x80761C) = xmm3; /* movss */
    MEMF(0x807620) = xmm3; /* movss */
    MEMF(0x807624) = xmm3; /* movss */
    MEMF(esp + 0x78) = xmm4; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    MEMF(0x807628) = xmm0; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x80762C) = xmm0; /* movss */
    MEMF(0x807630) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm4; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    xmm1 = MEMF(esp + 0x68); /* movss */
    ebx = MEM32(ebp + 8);
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D34); /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x807634) = xmm0; /* movss */
    MEMF(0x80763C) = xmm0; /* movss */
    xmm0 = MEMF(0x64971C); /* movss */
    MEMF(0x807638) = xmm1; /* movss */
    MEMF(0x80769C) = xmm3; /* movss */
    MEMF(0x8076A4) = xmm0; /* movss */
    MEM8(0x8086C4) = 0;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ecx + 0x34);
    PUSH32(esp, 0); sub_001F6230(); /* call 0x001F6230 */

loc_00248D69: ;
    eax = MEM32(ebp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00248D7C; /* je: equal / zero */

loc_00248D70: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    goto loc_00248D82;

loc_00248D7C: ;
    MEMF(esp + 0x44) = xmm4; /* movss */

loc_00248D82: ;
    if (CMP_NE(esi, 1)) goto loc_00248EA2; /* jne: not equal / not zero */

loc_00248D8B: ;
    esi = MEM32(ebp + 0x20);
    if (TEST_NZ(esi, esi)) goto loc_00248E4D; /* jne: not equal / not zero */

loc_00248D96: ;
    SET_LO8(eax, MEM8(ebx + 0x29));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00248DF7; /* jne: not equal / not zero */

loc_00248D9D: ;
    esi = MEM32(ebx + 0x10);
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248DAE: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248DBE: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248DD0: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    SET_LO8(edx, MEM8(esp + 0xC));
    ecx = MEM32(ebp + 0x1C);
    MEM8(0x807666) = LO8(ebx);
    ebx = MEM32(ebp + 8);
    MEM8(0x807664) = LO8(eax);
    MEM8(0x807665) = LO8(edx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00248EC7;

loc_00248DF7: ;
    fp_push(MEMF(ebx + 0x34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248E05: ;
    fp_push(MEMF(ebx + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248E17: ;
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248E29: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(0x807664) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(0x807666) = LO8(ecx);
    ecx = MEM32(ebp + 0x1C);
    MEM8(0x807665) = LO8(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00248EC7;

loc_00248E4D: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248E5B: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248E6D: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248E7E: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = MEM32(ebp + 0x1C);
    MEM8(0x807664) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(0x807666) = LO8(eax);
    MEM8(0x807665) = LO8(edx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00248EC7;

loc_00248EA2: ;
    eax = MEM32(ebp + 0x1C);
    MEM8(0x807664) = 0;
    MEM8(0x807665) = 0;
    MEM8(0x807666) = 0;
    edx = MEM32(ebx + 0x10);
    fp_push(MEMF(edx + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */

loc_00248EC7: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00248ED2: ;
    esi = MEM32(esp + 0x54);
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    esi = esi + 0x10;
    MEM8(0x807667) = LO8(eax);
    ecx = 0x10;
    edi = esp + 0x180;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x54);
    esi = esi + 0x90;
    ecx = 0x10;
    edi = esp + 0x100;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0xC);
    ecx = 0x10;
    edi = esp + 0x80;
    edx = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x80;
    eax = edx;
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm5; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x14);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x18);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x50);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(ebp + 0x14);
    xmm0 = MEMF(eax + 8); /* movss */
    edx = 1;
    if (CMP_NE(ecx, edx)) goto loc_00248FA7; /* jne: not equal / not zero */

loc_00248FA2: ;
    xmm4 = xmm5; /* movaps */
    goto loc_00248FB4;

loc_00248FA7: ;
    ecx = MEM32(ebx + 0x10);
    xmm4 = MEMF(eax + 8); /* movss */
    xmm4 = xmm4 - MEMF(ecx + 0x70); /* subss */

loc_00248FB4: ;
    eax = MEM32(ebx + 0x10);
    xmm2 = MEMF(eax + 0x68); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x6C); /* subss */
    eax = esp + 0x80;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    ecx = esp + 0x38;
    eax = esp + 0x2C;
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x50);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x18);
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
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 + MEMF(esp + 0xB0); /* addss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 + MEMF(esp + 0xB4); /* addss */
    MEMF(esp + 0xB4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    ecx = esp + 0x180;
    PUSH32(esp, ecx);
    eax = esp + 0x84;
    xmm1 = xmm1 * xmm4; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x148;
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 + MEMF(esp + 0xC0); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0xC4) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002490D0: ;
    eax = esp + 0x100;
    PUSH32(esp, eax);
    ecx = esp + 0x144;
    PUSH32(esp, ecx);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002490ED: ;
    ecx = esp + 0xC0;
    eax = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
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
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x10;
    esi = esp + 0xC0;
    edi = 0x8072B0;
    MEM32(0x8086E8) = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_NZ(eax, eax)) goto loc_0024916D; /* jne: not equal / not zero */

loc_00249168: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0024916D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002491BD; /* je: equal / zero */

loc_00249193: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C0)) goto loc_002491BD; /* jb: below (unsigned <) */

loc_0024919F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002491A9: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002491B4: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_002491DF; /* jne: not equal / not zero */

loc_002491BD: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002491CF: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002491DA: ;
    esp = esp + 8;
    esi = eax;

loc_002491DF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, MEM8(esi + 8));
    xmm1 = MEMF(0x649718); /* movss */
    MEMF(esi + 0xEC) = xmm0; /* movss */
    MEMF(esi + 0xF4) = xmm0; /* movss */
    xmm0 = MEMF(0x64971C); /* movss */
    MEMF(esi + 0xF8) = xmm0; /* movss */
    xmm0 = MEMF(0x58BC2C); /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    SET_LO8(ecx, LO8(ecx) | 2);
    MEMF(esi + 0xFC) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    MEM8(esi + 8) = LO8(ecx);
    MEMF(esi + 0xF0) = xmm1; /* movss */
    MEMF(esi + 0x100) = xmm0; /* movss */
    eax = MEM32(0x8086E8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84B868) = esi;
    if (TEST_NZ(eax, eax)) goto loc_00249254; /* jne: not equal / not zero */

loc_0024924D: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_00249252: ;
    goto loc_00249259;

loc_00249254: ;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_00249259: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    MEM32(0x84B868) = edx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00249269: ;
    if (TEST_NZ(eax, eax)) goto loc_00249290; /* jne: not equal / not zero */

loc_0024926D: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0024928D: ;
    esp = esp + 4;

loc_00249290: ;
    eax = MEM32(ebx + 0x10);
    xmm0 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0x18); /* mulss */
    edx = MEM32(ebp + 0x14);
    xmm2 = 0.0f; /* xorps self = zero */
    esi = MEM32(ebp + 0x10);
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x6497D0); /* mulss */
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    eax = MEM32(edx);
    ecx = MEM32(ebx + 0x10);
    xmm1 = MEMF(ecx + 0x10); /* movss */
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x58) = eax;
    xmm3 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEM32(esp + 0x5C) = ecx;
    xmm2 = xmm2 - MEMF(esp + 0x5C); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - xmm1; /* subss */
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm4; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ebx + 0x28));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEM32(esp + 0x60) = edx;
    MEMF(esp + 0x7C) = xmm2; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00249407; /* je: equal / zero */

loc_00249333: ;
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0024934E: ;
    SET_LO8(eax, MEM8(0x75E818));
    xmm1 = MEMF(esp + 0x38); /* movss */
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002493D2; /* jne: not equal / not zero */

loc_00249360: ;
    xmm0 = MEMF(0x648F8C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002493D2; /* jbe: below or equal (unsigned <=) */

loc_0024936D: ;
    xmm2 = MEMF(esp + 0x6C); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x64); /* mulss */
    xmm1 = xmm1 * MEMF(0x6497D0); /* mulss */
    MEMF(0x80765C) = xmm1; /* movss */
    PUSH32(esp, 0x5F59F0);
    MEMF(0x807660) = xmm2; /* movss */
    edx = MEM32(ebx + 0x10);
    xmm1 = MEMF(edx + 0x10); /* movss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_002493C9: ;
    xmm1 = MEMF(esp + 0x38); /* movss */
    esp = esp + 0x10;

loc_002493D2: ;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x58); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm2 = MEMF(esp + 0x7C); /* movss */

loc_00249407: ;
    xmm0 = MEMF(0x84B508); /* movss */
    /* comiss xmm0, MEMF(0x80765C) - sets EFLAGS */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(0x807650) = xmm3; /* movss */
    MEMF(0x807654) = xmm2; /* movss */
    MEMF(0x807658) = xmm3; /* movss */
    if ((xmm0 > MEMF(0x80765C))) goto loc_00249451; /* ja: above (unsigned >) */

loc_00249438: ;
    /* comiss xmm0, MEMF(0x807660) - sets EFLAGS */
    if ((xmm0 > MEMF(0x807660))) goto loc_00249451; /* ja: above (unsigned >) */

loc_00249441: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    ecx = ecx | 1;
    goto loc_0024945E;

loc_00249451: ;
    ecx = MEM32(0x5499F0);
    eax = 1;
    ecx = ecx | eax;

loc_0024945E: ;
    MEM32(0x54733C) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547340) = eax;
    PUSH32(esp, 0x7FFFFFFE);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003D3D00(); /* call 0x003D3D00 */

loc_0024947D: ;
    esi = MEM32(0x5499E8);
    edi = MEM32(esi + 0xF88);
    ebx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(edi, ebx)) goto loc_002494B0; /* je: equal / zero */

loc_00249492: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 0x2C);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi + 8) = edx;
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_002494B0; /* jne: not equal / not zero */

loc_002494AB: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_002494B0: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esi + 0xF88) = ebx;
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002494CC; /* jb: below (unsigned <) */

loc_002494BD: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002494CC: ;
    ecx = MEM32(0x5499F0);
    MEM32(eax) = 0x41B0C;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = 0x80000000u;
    eax = MEM32(0x8072F0);
    esi = MEM32(esp + 0x4C);
    ecx = ecx | 0x4800;
    eax--;
    MEM32(0x5499F0) = ecx;
    MEM32(0x8072F0) = eax;

loc_00249502: ;
    esi++;
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    MEM32(esp + 0x4C) = esi;
    if (CMP_L(esi, 2)) goto loc_00248C30; /* jl: less (signed <) */

loc_00249510: ;
    PUSH32(esp, 0);
    MEM32(0x8086E8) = 0;
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_00249521: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x10);
    SET_LO8(ecx, MEM8(edx + 0x14));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x28) = LO8(ecx);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00249540
 * Original: 0x00249540 - 0x002495BC (124 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249540(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00249540: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00248B80(); /* call 0x00248B80 */

loc_0024955A: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    edx = MEM32(esp + 0x20);
    xmm0 = MEMF(0x648D34); /* movss */
    MEM8(esi + 0x41) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x58) = edx;
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esp + 0x28);
    edx = esi + 0x60;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x30);
    MEMF(esi + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esi + 0x40) = LO8(eax);
    MEM8(esi + 0x54) = LO8(eax);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esi) = 0x5FBCC8;
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM32(esi + 0x44) = ebx;
    MEM32(edx + 8) = ecx;
    eax = esi;
    if (CMP_EQ(ebx, eax)) goto loc_002495B7; /* je: equal / zero */

loc_002495B2: ;
    SET_LO8(edx, MEM8(ebx));
    MEM8(esi + 0x40) = LO8(edx);

loc_002495B7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_002495C0
 * Original: 0x002495C0 - 0x0024960A (74 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002495C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002495C0: ;
    xmm1 = MEMF(0x648D14); /* movss */
    eax = MEM32(ecx + 0x10);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / MEMF(eax + 0x38); /* divss */
    xmm0 = xmm0 * MEMF(ecx + 0x38); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x3C); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ecx + 0x3C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_002495FA; /* ja: above (unsigned >) */

loc_002495ED: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) { sub_0024960A(); return; } /* jbe: below or equal (unsigned <=) */

loc_002495F5: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00249602; /* jbe: below or equal (unsigned <=) */

loc_002495FA: ;
    MEMF(ecx + 0x3C) = xmm1; /* movss */
    esp += 8; return; /* ret 4 */

loc_00249602: ;
    MEMF(ecx + 0x3C) = xmm0; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00249620
 * Original: 0x00249620 - 0x0024999A (890 bytes, 240 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249620(void)
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

loc_00249620: ;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = eax + 0x18;
    edx = MEM32(ecx);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x58) = ecx;
    edx = eax + 0x3C;
    ecx = MEM32(edx);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    eax = eax + 0x48;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = edx;
    eax = MEM32(eax + 8);
    ecx = esi + 0x18;
    edx = MEM32(ecx);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(esi + 0x54));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x2C) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002496A6; /* je: equal / zero */

loc_0024968F: ;
    edx = esi + 0x48;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;

loc_002496A6: ;
    fp_push(MEMF(0x849C40)); /* fld float */
    SET_LO8(eax, MEM8(esi + 0x41));
    (void)0; /* cmp LO8(eax), 0x4E - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(LO8(eax), 0x4E)) goto loc_002496EA; /* jne: not equal / not zero */

loc_002496D6: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648D40); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_002496EA: ;
    xmm0 = MEMF(esi + 0x3C); /* movss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x4C); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x50); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    eax = esp + 0x30;
    ecx = esp + 0x54;
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = ecx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x24;
    edx = ecx;
    ecx = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002497DE: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_002497F3; /* jge: greater or equal (signed >=) */

loc_002497ED: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002497F3: ;
    SET_LO8(ecx, MEM8(esi + 0x41));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = MEM32(esp + 0x68);
    ebp = MEM32(esp + 0x10);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = MEM32(esp + 0x64);
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), 0x4E - flags set for next jcc */
    /* FPU: fsubr dword ptr [esp + 0x24] */
    SET_LO8(eax, (CMP_NE(LO8(ecx), 0x4E)) ? 1 : 0); /* setne */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x40;
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    edx = esp + 0x28;
    eax--;
    eax = eax & ecx;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00248C10(); /* call 0x00248C10 */

loc_0024983B: ;
    SET_LO8(eax, MEM8(esi + 0x41));
    (void)0; /* cmp LO8(eax), 0x4E - flags set for next jcc */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), 0x4E)) goto loc_00249990; /* je: equal / zero */

loc_00249853: ;
    if (CMP_NE(LO8(eax), 0x59)) goto loc_00249867; /* jne: not equal / not zero */

loc_00249857: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    goto loc_00249875;

loc_00249867: ;
    ecx = MEM32(esi + 0x10);
    xmm0 = MEMF(ecx + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */

loc_00249875: ;
    xmm1 = MEMF(esi + 0x60); /* movss */
    SET_LO8(eax, MEM8(esi + 0x40));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002498AD; /* je: equal / zero */

loc_002498A3: ;
    xmm0 = MEMF(0x648D3C); /* movss */
    goto loc_002498BB;

loc_002498AD: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648D40); /* addss */

loc_002498BB: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x5C);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00248C10(); /* call 0x00248C10 */

loc_002498E0: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x64A96C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x64); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5FBFE0);
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00248C10(); /* call 0x00248C10 */

loc_0024992D: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    SET_LO8(eax, MEM8(esi + 0x40));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(esi + 0x68); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00249963; /* je: equal / zero */

loc_00249953: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648D40); /* addss */
    goto loc_0024996B;

loc_00249963: ;
    xmm0 = MEMF(0x648D3C); /* movss */

loc_0024996B: ;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00248C10(); /* call 0x00248C10 */

loc_00249990: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002499A0
 * Original: 0x002499A0 - 0x002499E9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002499A0(void)
{
    float xmm0;

loc_002499A0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esi + 4) = ebx;
    MEM32(esi) = 0x5FBD40;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_002499B4: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0x5FBD18;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = LO8(ebx);
    MEMF(esi + 0x2C) = xmm0; /* movss */
    eax = esi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002499F0
 * Original: 0x002499F0 - 0x00249AA5 (181 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002499F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002499F0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x28) = 1;
    ecx = MEM32(esi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00249A29; /* je: equal / zero */

loc_00249A03: ;
    eax = MEM32(esi + 0x1C);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_00249A29; /* je: equal / zero */

loc_00249A0F: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00249A29; /* jp: parity */

loc_00249A22: ;
    eax = esi;
    PUSH32(esp, 0); sub_00249D00(); /* call 0x00249D00 */

loc_00249A29: ;
    edx = MEM32(esi + 0x1C);
    xmm0 = MEMF(esp + 0x20); /* movss */
    edi = MEM32(esi + 0x18);
    esp = esp - 0x10;
    ebx = esp;
    eax = 0x233F20;
    MEM32(ebx) = eax;
    ecx = 0; /* xor self */
    PUSH32(esp, edx);
    MEM32(ebx + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x28) = xmm0; /* movss */
    eax = MEM32(esp + 0x28);
    edx = esp + 0x20;
    MEM32(ebx + 8) = eax;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(ebx + 0xC) = ecx;
    PUSH32(esp, 0); sub_0024FF50(); /* call 0x0024FF50 */

loc_00249A66: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + eax * 4);
    esp = esp + 0x1C;
    if (TEST_Z(ecx, ecx)) goto loc_00249A79; /* je: equal / zero */

loc_00249A76: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_00249A79: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ecx + 0x38) = xmm0; /* movss */
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_00249A99; /* jne: not equal / not zero */

loc_00249A93: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00249A99: ;
    eax = MEM32(esi + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00249AB0
 * Original: 0x00249AB0 - 0x00249C70 (448 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249AB0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 4) = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_00249AC3; /* je: equal / zero */

loc_00249AC0: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_00249AC3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    esi = edi + 0x14;
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_0024F260(); /* call 0x0024F260 */

loc_00249AD5: ;
    if (TEST_Z(ebp, ebp)) goto loc_00249AEF; /* je: equal / zero */

loc_00249AD9: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00249AEF; /* jne: not equal / not zero */

loc_00249AE6: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00249AEF: ;
    ecx = MEM32(esi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00249C4D; /* je: equal / zero */

loc_00249AFA: ;
    eax = MEM32(esi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_BE(eax, 1)) goto loc_00249C4D; /* jbe: below or equal (unsigned <=) */

loc_00249B0B: ;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(ecx);
    edi = MEM32(esi + 4);
    eax = eax + 0x18;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm5 = MEMF(esp + 0x10); /* movss */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    xmm6 = MEMF(esp + 0x14); /* movss */
    eax = eax + 0x18;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm4 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x20) = edx;
    xmm3 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = eax;
    xmm7 = MEMF(esp + 0x28); /* movss */
    edx = 1;
    ebx = ecx + 4;
    /* nop */

loc_00249B70: ;
    if (TEST_Z(edi, edi)) goto loc_00249BEE; /* je: equal / zero */

loc_00249B74: ;
    eax = MEM32(esi + 8);
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(edx, eax)) goto loc_00249BEE; /* jae: above or equal (unsigned >=) */

loc_00249B80: ;
    eax = MEM32(ebx);
    eax = eax + 0x18;
    ebp = MEM32(eax);
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm2 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm2, xmm4 - sets EFLAGS */
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = eax;
    if ((xmm2 <= xmm4)) goto loc_00249BA7; /* jbe: below or equal (unsigned <=) */

loc_00249BA4: ;
    xmm4 = xmm2; /* movaps */

loc_00249BA7: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_00249BB5; /* jbe: below or equal (unsigned <=) */

loc_00249BB2: ;
    xmm3 = xmm1; /* movaps */

loc_00249BB5: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_00249BC3; /* jbe: below or equal (unsigned <=) */

loc_00249BC0: ;
    xmm7 = xmm0; /* movaps */

loc_00249BC3: ;
    /* comiss xmm5, xmm2 - sets EFLAGS */
    if ((xmm5 <= xmm2)) goto loc_00249BCB; /* jbe: below or equal (unsigned <=) */

loc_00249BC8: ;
    xmm5 = xmm2; /* movaps */

loc_00249BCB: ;
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_00249BD3; /* jbe: below or equal (unsigned <=) */

loc_00249BD0: ;
    xmm6 = xmm1; /* movaps */

loc_00249BD3: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00249BE4; /* jbe: below or equal (unsigned <=) */

loc_00249BDE: ;
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_00249BE4: ;
    ebp = MEM32(esp + 0x34);
    edx++;
    ebx = ebx + 4;
    goto loc_00249B70;

loc_00249BEE: ;
    xmm4 = xmm4 - xmm5; /* subss */
    xmm3 = xmm3 - xmm6; /* subss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    POP32(esp, ebx);
    if ((xmm4 <= xmm3)) goto loc_00249C03; /* jbe: below or equal (unsigned <=) */

loc_00249BFC: ;
    eax = 1;
    goto loc_00249C05;

loc_00249C03: ;
    eax = 0; /* xor self */

loc_00249C05: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(esp + 0x2C);
    MEM8(edx + 0x29) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00249C40; /* je: equal / zero */

loc_00249C10: ;
    ecx = MEM32(ecx);
    ecx = ecx + 0x18;
    eax = MEM32(ecx);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 4);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    ecx = MEM32(ecx + 8);
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(esp + 0x20) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(esp + 0x24) = ecx;
    if (1 /* jnp after test - parity */) goto loc_00249C48; /* jnp: not parity */

loc_00249C40: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_00249C48: ;
    MEMF(edx + 0x2C) = xmm0; /* movss */

loc_00249C4D: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(ebp, ebp)) goto loc_00249C69; /* je: equal / zero */

loc_00249C53: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00249C69; /* jne: not equal / not zero */

loc_00249C60: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00249C69: ;
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00249D00
 * Original: 0x00249D00 - 0x00249E5D (349 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249D00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = esp + 0x13;
    PUSH32(esp, eax);
    ecx = esp + 0x16;
    PUSH32(esp, ecx);
    edx = esp + 0x19;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00249ED0(); /* call 0x00249ED0 */

loc_00249D22: ;
    SET_LO8(eax, MEM8(esi + 0x29));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = ecx + ecx + 0xD14;
    edi = ecx;
    edx = edx + edx + 0xD14;
    ebp = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00249D99; /* je: equal / zero */

loc_00249D4D: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_00249D58; /* jne: not equal / not zero */

loc_00249D54: ;
    eax = 0; /* xor self */
    goto loc_00249D60;

loc_00249D58: ;
    eax = MEM32(esi + 0x1C);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00249D60: ;
    ecx = MEM32(esi + 0x24);
    eax--;
    if (CMP_AE(ecx, eax)) goto loc_00249D99; /* jae: above or equal (unsigned >=) */

loc_00249D68: ;
    if (TEST_Z(edi, edi)) goto loc_00249D96; /* je: equal / zero */

loc_00249D6C: ;
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, edx);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00249D96: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_00249D99: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00249DD9; /* je: equal / zero */

loc_00249DA1: ;
    eax = MEM32(esi + 0x24);
    if (CMP_BE(eax & eax, 0)) goto loc_00249DD9; /* jbe: below or equal (unsigned <=) */

loc_00249DA8: ;
    if (TEST_Z(edi, edi)) goto loc_00249DD6; /* je: equal / zero */

loc_00249DAC: ;
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, edx);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00249DD6: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;

loc_00249DD9: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00249E5D(); return; } /* je: equal / zero */

loc_00249DE1: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + eax * 4);
    if (TEST_Z(ecx, ecx)) goto loc_00249DF1; /* je: equal / zero */

loc_00249DEE: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_00249DF1: ;
    SET_LO8(ebx, MEM8(ecx + 0x40));
    eax = MEM32(ecx + 0x44);
    edx = 1;
    (void)0; /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(LO8(ebx), LO8(edx))) ? 1 : 0); /* setne */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(ecx + 0x40) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_00249E0A; /* je: equal / zero */

loc_00249E08: ;
    MEM8(eax) = LO8(edx);

loc_00249E0A: ;
    esi = MEM32(ecx + 4);
    esi--;
    eax = esi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = esi;
    if (TEST_NZ(eax, eax)) goto loc_00249E1C; /* jne: not equal / not zero */

loc_00249E17: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00249E1C: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00249E4F; /* je: equal / zero */

loc_00249E20: ;
    if (TEST_Z(ebp, ebp)) goto loc_00249E4F; /* je: equal / zero */

loc_00249E24: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = ebp;
    PUSH32(esp, eax);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00249E4F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249ED0
 * Original: 0x00249ED0 - 0x00249FCA (250 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249ED0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x10);
    MEM8(eax) = 0;
    eax = MEM32(esp + 0xC);
    MEM8(ecx) = 0;
    MEM8(edx) = 0;
    MEM8(eax) = 0;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00249FC6; /* jne: not equal / not zero */

loc_00249EFC: ;
    eax = ZX8(MEM8(0x776558));
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_GE(eax, 2)) goto loc_00249F15; /* jge: greater or equal (signed >=) */

loc_00249F09: ;
    ecx = MEM32(eax * 4 + 0x8470FC);
    ebx = MEM32(ecx + 8);
    goto loc_00249F1A;

loc_00249F15: ;
    ebx = 0x75A0B4;

loc_00249F1A: ;
    SET_LO8(eax, MEM8(esi + 0x29));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x14);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00249F2F; /* je: equal / zero */

loc_00249F29: ;
    eax = ebp;
    ebp = edi;
    edi = eax;

loc_00249F2F: ;
    edx = MEM32(esi + 0x10);
    if (CMP_G(edi, MEM32(edx + 0x58))) goto loc_00249F3D; /* jg: greater (signed >) */

loc_00249F37: ;
    if (TEST_Z(MEM8(ebx + 8), 1)) goto loc_00249F49; /* je: equal / zero */

loc_00249F3D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00249FD0(); /* call 0x00249FD0 */

loc_00249F43: ;
    ecx = MEM32(esp + 0x18);
    MEM8(ecx) = LO8(eax);

loc_00249F49: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x58);
    eax = (uint32_t)(-(int32_t)eax);
    if (CMP_L(edi, eax)) goto loc_00249F5B; /* jl: less (signed <) */

loc_00249F55: ;
    if (TEST_Z(MEM8(ebx + 8), 2)) goto loc_00249F67; /* je: equal / zero */

loc_00249F5B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00249FD0(); /* call 0x00249FD0 */

loc_00249F61: ;
    ecx = MEM32(esp + 0x14);
    MEM8(ecx) = LO8(eax);

loc_00249F67: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x58);
    eax = (uint32_t)(-(int32_t)eax);
    if (CMP_L(ebp, eax)) goto loc_00249F79; /* jl: less (signed <) */

loc_00249F73: ;
    if (TEST_Z(MEM8(ebx + 8), 4)) goto loc_00249F85; /* je: equal / zero */

loc_00249F79: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00249FD0(); /* call 0x00249FD0 */

loc_00249F7F: ;
    ecx = MEM32(esp + 0x20);
    MEM8(ecx) = LO8(eax);

loc_00249F85: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x58);
    POP32(esp, edi);
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_G(ebp, eax)) goto loc_00249F97; /* jg: greater (signed >) */

loc_00249F91: ;
    if (TEST_Z(MEM8(ebx + 8), 8)) goto loc_00249FA3; /* je: equal / zero */

loc_00249F97: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00249FD0(); /* call 0x00249FD0 */

loc_00249F9D: ;
    ecx = MEM32(esp + 0x14);
    MEM8(ecx) = LO8(eax);

loc_00249FA3: ;
    xmm0 = MEMF(esi + 0x2C); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, ebx);
    if (1 /* jp after test - parity */) goto loc_00249FC6; /* jp: parity */

loc_00249FB6: ;
    esi = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, MEM8(ecx));
    MEM8(ecx) = LO8(edx);
    MEM8(esi) = LO8(eax);

loc_00249FC6: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00249FD0
 * Original: 0x00249FD0 - 0x00249FE8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249FD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00249FD0: ;
    eax = MEM32(0x875804);
    if (TEST_NZ(eax, eax)) { sub_00249FE8(); return; } /* jne: not equal / not zero */

loc_00249FD9: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_00249FDE: ;
    MEM32(0x875804) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024A010
 * Original: 0x0024A010 - 0x0024A2B6 (678 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A010: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    MEM32(ebp + 4) = ebx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    MEM32(ebp) = 0x5FBD40;
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0024A035: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(esp + 0x28);
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm2 = MEMF(0x648F58); /* movss */
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x20) = ebx;
    MEMF(ebp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(ebp + 0x24) = ebx;
    MEM8(ebp + 0x28) = LO8(ebx);
    MEM8(ebp + 0x29) = LO8(ebx);
    MEM32(ebp) = 0x5FBDCC;
    MEM32(ebp + 0x30) = ecx;
    MEM32(ebp + 0x34) = esi;
    MEMF(ebp + 0x38) = xmm1; /* movss */
    eax = MEM32(edi);
    edx = ebp + 0x3C;
    MEM32(edx) = eax;
    ecx = MEM32(edi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(edi + 8);
    MEMF(ebp + 0x54) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edx + 8) = eax;
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    MEMF(ebp + 0x60) = xmm0; /* movss */
    MEMF(ebp + 0x64) = xmm2; /* movss */
    xmm2 = MEMF(0x648E68); /* movss */
    MEMF(ebp + 0x68) = xmm2; /* movss */
    MEM8(ebp + 0x6C) = LO8(ebx);
    MEM32(ebp + 0x70) = ebx;
    MEMF(ebp + 0x74) = xmm0; /* movss */
    edi = ebp + 0x48;
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D40); /* mulss */
    PUSH32(esp, 0x38);
    MEMF(edi + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024A0F4: ;
    ecx = eax;
    esp = esp + 4;
    if (CMP_EQ(ecx, ebx)) goto loc_0024A27F; /* je: equal / zero */

loc_0024A101: ;
    edx = MEM32(esp + 0x30);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = 0x5FBFC4;
    esi = ecx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00248B80(); /* call 0x00248B80 */

loc_0024A127: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0024A130; /* je: equal / zero */

loc_0024A12D: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024A130: ;
    if (CMP_EQ(esi, MEM32(ebp + 0x70))) goto loc_0024A159; /* je: equal / zero */

loc_0024A135: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024A13C; /* je: equal / zero */

loc_0024A139: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024A13C: ;
    ecx = MEM32(ebp + 0x70);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + 0x70) = esi;
    if (CMP_EQ(ecx, ebx)) goto loc_0024A159; /* je: equal / zero */

loc_0024A146: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (CMP_NE(eax, ebx)) goto loc_0024A159; /* jne: not equal / not zero */

loc_0024A153: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024A159: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024A172; /* je: equal / zero */

loc_0024A15D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (CMP_NE(eax, ebx)) goto loc_0024A172; /* jne: not equal / not zero */

loc_0024A16A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024A172: ;
    eax = MEM32(ebp + 0x30);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x30) = edi;
    if (CMP_LE(eax, ebx)) goto loc_0024A2AA; /* jle: less or equal (signed <=) */

loc_0024A183: ;
    esi = MEM32(esp + 0x34);
    eax = MEM32(esi + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0024A190: ;
    ecx = eax + eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024A19A: ;
    edx = MEM32(esi + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024A1A8: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024A1AF: ;
    esi = eax;
    esp = esp + 0x14;
    if (CMP_EQ(esi, ebx)) goto loc_0024A286; /* je: equal / zero */

loc_0024A1BC: ;
    eax = MEM32(0x5A02CC);
    ecx = MEM32(0x5A02D0);
    edx = MEM32(0x5A02D4);
    edi = MEM32(ebp + 0x10);
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 4) = ebx;
    eax = 0x5FBFB8;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esi) = 0x5FBD40;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0024A1F2: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = edi;
    edi = MEM32(esp + 0x30);
    MEM32(esi) = 0x5FBD90;
    eax = ebp + 0x48;
    edx = MEM32(eax);
    ecx = esi + 0x18;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x14);
    ecx = esi + 0x60;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esi + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ecx + 4) = eax;
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = LO8(ebx);
    MEM32(esi) = 0x5FBCC8;
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM8(esi + 0x40) = LO8(ebx);
    MEM8(esi + 0x41) = 0x4E;
    MEM32(esi + 0x44) = ebx;
    MEM8(esi + 0x54) = LO8(ebx);
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(ecx + 8) = edx;
    goto loc_0024A288;

loc_0024A27F: ;
    esi = 0; /* xor self */
    goto loc_0024A130;

loc_0024A286: ;
    esi = 0; /* xor self */

loc_0024A288: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0024A294; /* je: equal / zero */

loc_0024A291: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024A294: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00249AB0(); /* call 0x00249AB0 */

loc_0024A29A: ;
    eax = MEM32(ebp + 0x30);
    edi++;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x30) = edi;
    if (CMP_L(edi, eax)) goto loc_0024A183; /* jl: less (signed <) */

loc_0024A2AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0024A2C0
 * Original: 0x0024A2C0 - 0x0024A3BE (254 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A2C0(void)
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

loc_0024A2C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    MEM32(esp + 8) = edi;
    if (TEST_Z(ecx, ecx)) goto loc_0024A30D; /* je: equal / zero */

loc_0024A2D3: ;
    eax = MEM32(esi + 0x1C);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_0024A30D; /* je: equal / zero */

loc_0024A2DF: ;
    xmm0 = MEMF(esi + 0x74); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0024A30D; /* jp: parity */

loc_0024A2F1: ;
    eax = esi;
    PUSH32(esp, 0); sub_00249D00(); /* call 0x00249D00 */

loc_0024A2F8: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0024A30D; /* jnp: not parity */

loc_0024A305: ;
    MEMF(0x6BD95C) = xmm0; /* movss */

loc_0024A30D: ;
    ecx = MEM32(esi + 0x24);
    if (CMP_EQ(edi, ecx)) goto loc_0024A32F; /* je: equal / zero */

loc_0024A314: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0024A32A; /* jge: greater or equal (signed >=) */

loc_0024A324: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0024A32A: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esi + 0x54) = (float)fp_top(); fp_popp(); /* fstp */

loc_0024A32F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x34);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, ebp);
    ecx = ecx - eax;
    ebp = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = ecx;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0024A383; /* jle: less or equal (signed <=) */

loc_0024A345: ;
    ebx = MEM32(esp + 0x18);
    /* nop */

loc_0024A350: ;
    if (TEST_S(edi, edi)) goto loc_0024A37A; /* jl: less (signed <) */

loc_0024A354: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_0024A35F; /* jne: not equal / not zero */

loc_0024A35B: ;
    eax = 0; /* xor self */
    goto loc_0024A367;

loc_0024A35F: ;
    eax = MEM32(esi + 0x1C);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_0024A367: ;
    if (CMP_GE(edi, eax)) goto loc_0024A37A; /* jge: greater or equal (signed >=) */

loc_0024A36B: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    eax = eax + edi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0024A37A: ;
    eax = MEM32(esi + 0x34);
    ebp++;
    edi++;
    if (CMP_L(ebp, eax)) goto loc_0024A350; /* jl: less (signed <) */

loc_0024A383: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + eax * 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0024A395; /* je: equal / zero */

loc_0024A392: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_0024A395: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ecx + 0x38) = xmm0; /* movss */
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_0024A3B5; /* jne: not equal / not zero */

loc_0024A3AF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024A3B5: ;
    eax = MEM32(esi + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0024A3C0
 * Original: 0x0024A3C0 - 0x0024A407 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A3C0(void)
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

loc_0024A3C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x24);
    fp_push((double)SMEM32(ecx + 0x24)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0024A3D1; /* jge: greater or equal (signed >=) */

loc_0024A3CB: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0024A3D1: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM8(ecx + 0x6C) = 1;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ecx + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(ecx + 0x60); /* movss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x5C); /* addss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */
    MEM8(ecx + 0x6C) = 0;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00249C70(); return; /* tail jmp 0x00249C70 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0024A410
 * Original: 0x0024A410 - 0x0024A43F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0024A410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    xmm0 = MEMF(ecx + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    ebx = 0; /* xor self */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, edi);
    if (1 /* jp after test - parity */) { sub_0024A43F(); return; } /* jp: parity */

loc_0024A438: ;
    eax = 1;
    g_seh_ebp = ebp; sub_0024A441(); return; /* tail jmp 0x0024A441 */

}

/**
 * sub_0024A6F0
 * Original: 0x0024A6F0 - 0x0024A746 (86 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A6F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024A6F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_0024A711; /* je: equal / zero */

loc_0024A6FA: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(edi + 0x70);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_0024A711; /* jne: not equal / not zero */

loc_0024A707: ;
    if (TEST_Z(ecx, ecx)) goto loc_0024A711; /* je: equal / zero */

loc_0024A70B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024A711: ;
    PUSH32(esp, esi);
    esi = edi + 0x14;
    MEM32(edi + 0x70) = 0;
    PUSH32(esp, 0); sub_0024F500(); /* call 0x0024F500 */

loc_0024A721: ;
    (void)0; /* test MEM8(esp + 0xC), 1 - flags set for next jcc */
    MEM32(edi) = 0x5FBD40;
    POP32(esp, esi);
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_0024A740; /* je: equal / zero */

loc_0024A72F: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024A73D: ;
    esp = esp + 4;

loc_0024A740: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024A750
 * Original: 0x0024A750 - 0x0024A81E (206 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A750: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x38));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024A778; /* je: equal / zero */

loc_0024A775: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024A778: ;
    eax = esi;
    PUSH32(esp, 0); sub_00247E80(); /* call 0x00247E80 */

loc_0024A77F: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEM32(esi) = 0x5FBD7C;
    MEM8(esi + 0x3C) = 0;
    eax = MEM32(ebp);
    edx = esi + 0x40;
    MEM32(edx) = eax;
    ecx = MEM32(ebp + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(ebp + 8);
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm0 = MEMF(0x64925C); /* movss */
    MEM32(edx + 8) = eax;
    MEM8(esi + 0x50) = LO8(ebx);
    if ((xmm0 > xmm1)) goto loc_0024A7BE; /* ja: above (unsigned >) */

loc_0024A7B6: ;
    xmm0 = MEMF(0x649A2C); /* movss */

loc_0024A7BE: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    MEM8(esp + 0x1C) = 0;
    MEMF(esp + 0x10) = xmm1; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0024A81E(); return; } /* je: equal / zero */

loc_0024A7D2: ;
    eax = MEM32(esp + 0x10);
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    edx = MEM32(esp + 0xC);
    ecx = esi + 0x2C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edx;
    g_seh_ebp = ebp; sub_0024A861(); return; /* tail jmp 0x0024A861 */

}

/**
 * sub_0024A890
 * Original: 0x0024A890 - 0x0024A924 (148 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A890: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x2C); /* addss */
    MEMF(esi + 0x2C) = xmm0; /* movss */
    MEM8(esi + 0x3C) = 0;
    xmm0 = MEMF(esi + 0x20); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, edi);
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0024A8CA; /* jbe: below or equal (unsigned <=) */

loc_0024A8BE: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_0024A8C6: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0024A924(); return; } /* jne: not equal / not zero */

loc_0024A8CA: ;
    xmm0 = MEMF(esi + 0x4C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x2C) = ecx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648E68); /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x30) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM8(esp + 0x18) = 0;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = edx;
    g_seh_ebp = ebp; sub_0024A97D(); return; /* tail jmp 0x0024A97D */

}

/**
 * sub_0024A9B0
 * Original: 0x0024A9B0 - 0x0024AA79 (201 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A9B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0024A9B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x9C;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(esi + 0x2C); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024A9DE; /* je: equal / zero */

loc_0024A9CB: ;
    xmm1 = MEMF(0x6BD95C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */

loc_0024A9DE: ;
    xmm1 = MEMF(esi + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x44); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x2C;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0024AA16: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0024AA29: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm0 = MEMF(esi + 0x20); /* movss */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = edx;
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    edx = esp + 0x10;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x64;
    MEMF(esp + 0x20) = xmm0; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0024AA6A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x28) = xmm0; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024AA80
 * Original: 0x0024AA80 - 0x0024AAE4 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AA80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024AA80: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esi + 4) = ebx;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM32(esi) = 0x5FBD40;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0024AA99: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0x5FBD90;
    MEM32(esi + 0x14) = ebx;
    edx = MEM32(edi);
    ecx = esi + 0x18;
    MEM32(ecx) = edx;
    eax = MEM32(edi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    MEMF(esi + 0x24) = xmm0; /* movss */
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = LO8(ebx);
    MEM32(esi) = 0x5FBD04;
    eax = esi;
    if (CMP_EQ(ebp, ebx)) { sub_0024AAE4(); return; } /* je: equal / zero */

loc_0024AADC: ;
    MEM32(esi + 0x38) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024ABB0
 * Original: 0x0024ABB0 - 0x0024ABD5 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ABB0(void)
{
    float xmm0;

loc_0024ABB0: ;
    eax = MEM32(esp + 8);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x5FBF8C;
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0024ABE0
 * Original: 0x0024ABE0 - 0x0024AC07 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ABE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024ABE0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5FBD40;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_0024AC01; /* je: equal / zero */

loc_0024ABF0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024ABFE: ;
    esp = esp + 4;

loc_0024AC01: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024AC10
 * Original: 0x0024AC10 - 0x0024AC57 (71 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AC10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024AC10: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024AC2B; /* je: equal / zero */

loc_0024AC28: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024AC2B: ;
    eax = edi;
    PUSH32(esp, 0); sub_00247E80(); /* call 0x00247E80 */

loc_0024AC32: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(edi) = 0x5FBDF4;
    if (TEST_Z(esi, esi)) goto loc_0024AC51; /* je: equal / zero */

loc_0024AC3C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024AC51; /* jne: not equal / not zero */

loc_0024AC49: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024AC51: ;
    eax = edi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024AC60
 * Original: 0x0024AC60 - 0x0024ADE1 (385 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0024AC60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    ebx = ecx;
    xmm0 = MEMF(ebx + 0x28); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = 0x10;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(esp + 0x13) = 0;
    if (1 /* jnp after test - parity */) goto loc_0024AD46; /* jnp: not parity */

loc_0024AC9A: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_0024ACA1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024AD46; /* je: equal / zero */

loc_0024ACA9: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x20); /* subss */
    ecx = esp + 0x14;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x6496BC); /* mulss */
    edx = ecx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3FC00000;
    MEM32(esp + 0x1C) = 0x3F000000;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0024AD2E: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0024AD41: ;
    MEM8(esp + 0x13) = 1;

loc_0024AD46: ;
    esi = MEM32(ebp + 0xC);
    xmm0 = MEMF(ebx + 0x20); /* movss */
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x20) = edx;
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    edx = esp + 0x14;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(ebx + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x34;
    MEMF(esp + 0x24) = xmm0; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0024AD89: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0x28) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024ADD8; /* je: equal / zero */

loc_0024AD99: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xC);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebp + 8);
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00248010(); /* call 0x00248010 */

loc_0024ADD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024ADF0
 * Original: 0x0024ADF0 - 0x0024AE46 (86 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ADF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0024ADF0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024AE0B; /* je: equal / zero */

loc_0024AE08: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024AE0B: ;
    eax = edi;
    PUSH32(esp, 0); sub_00247E80(); /* call 0x00247E80 */

loc_0024AE12: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, MEM8(esp + 0xC));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi) = 0x5FBDB8;
    MEM8(edi + 0x2C) = LO8(edx);
    MEMF(edi + 0x30) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_0024AE40; /* je: equal / zero */

loc_0024AE2B: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024AE40; /* jne: not equal / not zero */

loc_0024AE38: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024AE40: ;
    eax = edi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0024AE50
 * Original: 0x0024AE50 - 0x0024AE8D (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AE50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0024AE50: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0024AE6B; /* jne: not equal / not zero */

loc_0024AE5B: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x30); /* addss */
    MEMF(esi + 0x30) = xmm0; /* movss */

loc_0024AE6B: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00247EF0(); /* call 0x00247EF0 */

loc_0024AE7F: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0024AE88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024AE90
 * Original: 0x0024AE90 - 0x0024AED9 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AE90(void)
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

loc_0024AE90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0024AED9(); return; } /* je: equal / zero */

loc_0024AEAA: ;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x849C40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00247DA0(); /* call 0x00247DA0 */

loc_0024AECF: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    g_seh_ebp = ebp; sub_0024AEE6(); return; /* tail jmp 0x0024AEE6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0024AF60
 * Original: 0x0024AF60 - 0x0024AFC4 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AF60(void)
{

loc_0024AF60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(ebx + 4) = 0;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x5FBD40;
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0024AF7C: ;
    esi = MEM32(esp + 0x20);
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(ebx + 0x10) = eax;
    MEM32(ebx) = 0x5FBCDC;
    edi = ebx + 0x20;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0); sub_00254230(); /* call 0x00254230 */

loc_0024AFA7: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(ebx + 0x74) = eax;
    POP32(esp, esi);
    MEM32(ebx + 0x70) = edx;
    MEM32(ebx + 0x78) = ecx;
    eax = ebx;
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0024AFD0
 * Original: 0x0024AFD0 - 0x0024B019 (73 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024AFD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024AFD0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x78);
    if (TEST_Z(eax, eax)) { sub_0024B019(); return; } /* je: equal / zero */

loc_0024AFDA: ;
    eax = MEM32(ebx + 0x68);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x64);
    if (CMP_EQ(esi, eax)) goto loc_0024B011; /* je: equal / zero */

loc_0024AFE5: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    goto loc_0024AFF0;

    /* nop */

loc_0024AFF0: ;
    eax = MEM32(ebx + 0x78);
    edi = MEM32(esi);
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_0024AFFD: ;
    eax = MEM32(ebx + 0x68);
    esi = esi + 4;
    if (CMP_NE(esi, eax)) goto loc_0024AFF0; /* jne: not equal / not zero */

loc_0024B007: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0024B011: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024B020
 * Original: 0x0024B020 - 0x0024B204 (484 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0024B020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_0024B03A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    esi = esi + 0x20;
    PUSH32(esp, esi);
    ecx = esp + 0x88;
    ebx = 0; /* xor self */
    PUSH32(esp, ecx);
    MEM32(0x81BE48) = ebx;
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0024B057: ;
    eax = MEM32(0x84B80C);
    edi = eax + eax * 8;
    edi = edi << 4;
    edi = edi + 0x81DEB0;
    ecx = 0x10;
    esi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0024B092; /* jb: below (unsigned <) */

loc_0024B083: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0024B092: ;
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
    if (CMP_NE(eax, 2)) goto loc_0024B0EF; /* jne: not equal / not zero */

loc_0024B0C0: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0024B0C5: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0024B0CA: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0024B0E0; /* jb: below (unsigned <) */

loc_0024B0D1: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0024B0E0: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0024B0E8: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0024B0ED: ;
    MEM32(esi) = eax;

loc_0024B0EF: ;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    edx = MEM32(0x8493C4);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_NE(edx, ebx)) goto loc_0024B14A; /* jne: not equal / not zero */

loc_0024B126: ;
    PUSH32(esp, 0x570);
    PUSH32(esp, 0); sub_00130BC0(); /* call 0x00130BC0 */

loc_0024B130: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_0024B142; /* je: equal / zero */

loc_0024B137: ;
    ebx = eax;
    PUSH32(esp, 0); sub_0012D160(); /* call 0x0012D160 */

loc_0024B13E: ;
    edx = eax;
    goto loc_0024B144;

loc_0024B142: ;
    edx = 0; /* xor self */

loc_0024B144: ;
    MEM32(0x8493C4) = edx;

loc_0024B14A: ;
    xmm0 = MEMF(0x648E64); /* movss */
    MEM32(0x85D5B4) = edx;
    MEM32(edx + 0xE0) = 0;
    eax = 0; /* xor self */
    SET_LO8(ebx, 1);
    edi = edx;
    ecx = 0x24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx + 0x338) = LO8(ebx);
    eax = MEM32(0x85D5B4);
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x60); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0x60) = xmm1; /* movss */
    eax = 0x75E80C;
    MEM8(0x8493C8) = LO8(ebx);
    MEM8(0x819FE8) = LO8(ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0024B1BA: ;
    edx = MEM32(0x75E80C);
    eax = MEM32(0x75E810);
    ecx = MEM32(0x75E814);
    xmm0 = MEMF(0x75E800); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x75E808); /* movss */
    xmm2 = MEMF(0x75E804); /* movss */
    xmm4 = MEMF(0x648D18); /* movss */
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ecx;
    if ((xmm3 <= xmm0)) { sub_0024B204(); return; } /* jbe: below or equal (unsigned <=) */

loc_0024B1FF: ;
    xmm0 = xmm3; /* movaps */
    g_seh_ebp = ebp; sub_0024B20C(); return; /* tail jmp 0x0024B20C */

}

/**
 * sub_0024B4D0
 * Original: 0x0024B4D0 - 0x0024B526 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B4D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024B4D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_0024B4EC; /* je: equal / zero */

loc_0024B4DB: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024B4E9: ;
    esp = esp + 4;

loc_0024B4EC: ;
    (void)0; /* test MEM8(esp + 0xC), 1 - flags set for next jcc */
    MEM32(esi + 0x64) = 0;
    MEM32(esi + 0x68) = 0;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi) = 0x5FBD40;
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_0024B51F; /* je: equal / zero */

loc_0024B50E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024B51C: ;
    esp = esp + 4;

loc_0024B51F: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024B530
 * Original: 0x0024B530 - 0x0024B59C (108 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B530: ;
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    edx = eax + 1;
    /* nop */

loc_0024B540: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024B540; /* jne: not equal / not zero */

loc_0024B547: ;
    eax = eax - edx;
    MEM32(esp + 4) = eax;
    if ((eax == 0)) goto loc_0024B581; /* je: equal / zero */

loc_0024B54F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    edx = edi;
    ebp = ebp - edi;
    /* nop */

loc_0024B560: ;
    SET_LO8(eax, MEM8(edx));
    if (CMP_NE(LO8(eax), 0x5F)) goto loc_0024B568; /* jne: not equal / not zero */

loc_0024B566: ;
    SET_LO8(eax, 0x5C);

loc_0024B568: ;
    MEM8(edx + ebp) = LO8(eax);
    eax = edi;
    ebx++;
    edx++;
    esi = eax + 1;

loc_0024B572: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024B572; /* jne: not equal / not zero */

loc_0024B579: ;
    eax = eax - esi;
    if (CMP_B(ebx, eax)) goto loc_0024B560; /* jb: below (unsigned <) */

loc_0024B57F: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0024B581: ;
    eax = edi;
    edx = eax + 1;
    POP32(esp, ebx);

loc_0024B587: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024B587; /* jne: not equal / not zero */

loc_0024B58E: ;
    ecx = MEM32(esp + 8);
    eax = eax - edx;
    MEM8(eax + ecx) = 0;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024B5A0
 * Original: 0x0024B5A0 - 0x0024B5EA (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B5A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B5A0: ;
    esp = esp - 0x204;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x210);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x210);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0024B5C7: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x20;
    PUSH32(esp, 0x5FBF58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470655(); /* call 0x00470655 */

loc_0024B5DB: ;
    esp = esp + 0x18;
    if (CMP_NE(MEM16(esp + 0x10), 0)) { sub_0024B5EA(); return; } /* jne: not equal / not zero */

loc_0024B5E6: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024B617(); return; /* tail jmp 0x0024B617 */

}

/**
 * sub_0024B730
 * Original: 0x0024B730 - 0x0024B79A (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B730(void)
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

loc_0024B730: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470133(); /* call 0x00470133 */

loc_0024B747: ;
    esi = eax;
    esi = esi + 2;
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470133(); /* call 0x00470133 */

loc_0024B754: ;
    edi = eax;
    PUSH32(esp, ebx);
    edi = edi + 2;
    PUSH32(esp, 0); sub_00470155(); /* call 0x00470155 */

loc_0024B75F: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470155(); /* call 0x00470155 */

loc_0024B769: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00470155(); /* call 0x00470155 */

loc_0024B773: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    esp = esp + 0x1C;
    POP32(esp, edi);
    eax = ebp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(eax + 4) = edx;
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0024B7A0
 * Original: 0x0024B7A0 - 0x0024B7DC (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B7A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024B7A0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    eax = esi + 0x20;
    edx = edi;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0); sub_0024E8E0(); /* call 0x0024E8E0 */

loc_0024B7BF: ;
    eax = edi + 0x10D;
    MEM32(esi + 0x1B8) = ebx;
    (void)0; /* cmp MEM8(eax), LO8(ebx) - flags set for next jcc */
    ecx = esi + 0x1BC;
    if (CMP_NE(MEM8(eax), LO8(ebx))) { sub_0024B7DC(); return; } /* jne: not equal / not zero */

loc_0024B7D5: ;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx) = ebx;
    g_seh_ebp = ebp; sub_0024B7E9(); return; /* tail jmp 0x0024B7E9 */

}

/**
 * sub_0024B830
 * Original: 0x0024B830 - 0x0024B888 (88 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B830(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024B830: ;
    esp = esp - 0x84;
    PUSH32(esp, eax);
    esp = esp - 0x80;
    eax = esp + 0x110;
    edx = esp;
    ecx = eax;
    edx = edx - ecx;
    /* nop */

loc_0024B850: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024B850; /* jne: not equal / not zero */

loc_0024B85A: ;
    eax = esp + 0x84;
    PUSH32(esp, 0); sub_0024FE20(); /* call 0x0024FE20 */

loc_0024B866: ;
    ecx = eax;
    eax = MEM32(esp + 0x10C);
    esp = esp + 0x84;
    eax = eax + 0x1C4;
    PUSH32(esp, 0); sub_0024F090(); /* call 0x0024F090 */

loc_0024B87F: ;
    esp = esp + 0x84;
    esp += 136; return; /* ret 132 */

}

/**
 * sub_0024B890
 * Original: 0x0024B890 - 0x0024B8E8 (88 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B890(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024B890: ;
    esp = esp - 0x84;
    PUSH32(esp, eax);
    esp = esp - 0x80;
    eax = esp + 0x110;
    edx = esp;
    ecx = eax;
    edx = edx - ecx;
    /* nop */

loc_0024B8B0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024B8B0; /* jne: not equal / not zero */

loc_0024B8BA: ;
    eax = esp + 0x84;
    PUSH32(esp, 0); sub_0024FE20(); /* call 0x0024FE20 */

loc_0024B8C6: ;
    ecx = eax;
    eax = MEM32(esp + 0x10C);
    esp = esp + 0x84;
    eax = eax + 0x1D4;
    PUSH32(esp, 0); sub_0024F090(); /* call 0x0024F090 */

loc_0024B8DF: ;
    esp = esp + 0x84;
    esp += 136; return; /* ret 132 */

}

/**
 * sub_0024B8F0
 * Original: 0x0024B8F0 - 0x0024CCEA (5114 bytes, 1538 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B8F0(void)
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

loc_0024B8F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    eax = 0x10C4;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0024B900: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    ecx = 0x24;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    MEM32(esp + 0x9C) = 0x587BE4;
    MEM32(esp + 0xA4) = 0x5FBF2C;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_0024F480(); /* call 0x0024F480 */

loc_0024B94D: ;
    esi = MEM32(ebp + 8);
    ecx = esi + 0x10;
    edx = 9;
    PUSH32(esp, 0); sub_000350A0(); /* call 0x000350A0 */

loc_0024B95D: ;
    edx = 9;
    ecx = esi;
    PUSH32(esp, 0); sub_0024EF20(); /* call 0x0024EF20 */

loc_0024B969: ;
    ecx = MEM32(esi + 0x1C0);
    edi = MEM32(esi + 0x1BC);
    eax = esp + 0x10;
    esi = esi + 0x1BC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5FBF14);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_0024B98F: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0024B9A0; /* je: equal / zero */

loc_0024B99C: ;
    eax = MEM32(esp + 0x10);

loc_0024B9A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470155(); /* call 0x00470155 */

loc_0024B9A6: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    esp = esp + 4;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0024B9CF; /* jp: parity */

loc_0024B9C1: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */

loc_0024B9CF: ;
    edx = MEM32(0x5A02CC);
    eax = MEM32(0x5A02D0);
    ecx = MEM32(0x5A02D4);
    edi = MEM32(esi);
    MEM32(esp + 0x7C) = edx;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x5FBEE8);
    PUSH32(esp, eax);
    MEM32(esp + 0x90) = ecx;
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_0024BA07: ;
    esp = esp + 0xC;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0024BA5D; /* je: equal / zero */

loc_0024BA0F: ;
    edx = MEM32(esi + 4);
    edi = MEM32(esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5FBEE8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_0024BA24: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0024BA35; /* je: equal / zero */

loc_0024BA31: ;
    eax = MEM32(esp + 0x10);

loc_0024BA35: ;
    PUSH32(esp, eax);
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024B730(); /* call 0x0024B730 */

loc_0024BA43: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = eax;

loc_0024BA5D: ;
    esi = esp + 0x88;
    PUSH32(esp, 0); sub_001DFE30(); /* call 0x001DFE30 */

loc_0024BA69: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024CCDF; /* je: equal / zero */

loc_0024BA71: ;
    eax = MEM32(esp + 0x9C);
    edx = eax + 1;
    goto loc_0024BA80;

    /* nop */

loc_0024BA80: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024BA80; /* jne: not equal / not zero */

loc_0024BA87: ;
    esi = MEM32(esp + 0x90);
    ecx = MEM32(esp + 0x94);
    ebx = MEM32(esp + 0x98);
    eax = eax - edx;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = ecx + eax;
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(esi, esi)) goto loc_0024BB1F; /* je: equal / zero */

loc_0024BAAD: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0024BB1F; /* je: equal / zero */

loc_0024BAB4: ;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0024BAC5: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0024BB1F; /* je: equal / zero */

loc_0024BACC: ;
    eax = MEM32(esp + 0xC0);
    if (TEST_Z(eax, eax)) goto loc_0024BAEE; /* je: equal / zero */

loc_0024BAD7: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_0024BAE4; /* je: equal / zero */

loc_0024BADE: ;
    MEM32(esp + 0x70) = eax;
    goto loc_0024BAF2;

loc_0024BAE4: ;
    MEM32(esp + 0x70) = 0;
    goto loc_0024BB1F;

loc_0024BAEE: ;
    eax = MEM32(esp + 0x70);

loc_0024BAF2: ;
    if (TEST_Z(eax, eax)) goto loc_0024BB1F; /* je: equal / zero */

loc_0024BAF6: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */

loc_0024BB1F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(esp + 0xA4);
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0xAC);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x58) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_0024BBA1; /* je: equal / zero */

loc_0024BB4D: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0024BBA1; /* je: equal / zero */

loc_0024BB54: ;
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0024BB65: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0024BBA1; /* je: equal / zero */

loc_0024BB6C: ;
    eax = MEM32(esp + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_0024BB8E; /* je: equal / zero */

loc_0024BB77: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_0024BB84; /* je: equal / zero */

loc_0024BB7E: ;
    MEM32(esp + 0x6C) = eax;
    goto loc_0024BB92;

loc_0024BB84: ;
    MEM32(esp + 0x6C) = 0;
    goto loc_0024BBA1;

loc_0024BB8E: ;
    eax = MEM32(esp + 0x6C);

loc_0024BB92: ;
    if (TEST_Z(eax, eax)) goto loc_0024BBA1; /* je: equal / zero */

loc_0024BB96: ;
    xmm0 = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */

loc_0024BBA1: ;
    xmm0 = MEMF(0x75E7FC); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(edi + 1);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    ecx = eax + -48;
    (void)0; /* cmp ecx, 9 - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEM32(esp + 0x34) = ecx;
    if (CMP_LE(ecx, 9)) goto loc_0024BBEE; /* jle: less or equal (signed <=) */

loc_0024BBE7: ;
    eax = eax + 0xFFFFFFC9u;
    MEM32(esp + 0x34) = eax;

loc_0024BBEE: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 3);
    edi = edi + 3;
    eax = eax + 0xFFFFFFBFu;
    (void)0; /* cmp eax, 0x19 - flags set for next jcc */
    MEM8(esp + 0x17) = 0;
    MEM8(esp + 0xF) = 1;
    if (CMP_A(eax, 0x19)) goto loc_0024CCCB; /* ja: above (unsigned >) */

loc_0024BC0B: ;
    edx = ZX8(MEM8(eax + 0x24CECC));
    { uint32_t _jt = MEM32(edx * 4 + 0x24CEA4); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0024BC19u) goto loc_0024BC19;
    if (_jt == 0x0024BDEDu) goto loc_0024BDED;
    if (_jt == 0x0024BF53u) goto loc_0024BF53;
    if (_jt == 0x0024C176u) goto loc_0024C176;
    if (_jt == 0x0024C30Au) goto loc_0024C30A;
    if (_jt == 0x0024C442u) goto loc_0024C442;
    if (_jt == 0x0024C533u) goto loc_0024C533;
    if (_jt == 0x0024C7BEu) goto loc_0024C7BE;
    if (_jt == 0x0024C905u) goto loc_0024C905;
    if (_jt == 0x0024CCCBu) goto loc_0024CCCB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0024BC19: ;
    eax = 0; /* xor self */
    edx = 0x10;
    ecx = esp + 0x40;
    edi = edi + 4;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0); sub_000350A0(); /* call 0x000350A0 */

loc_0024BC38: ;
    SET_LO8(eax, MEM8(edi));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024BCA0; /* je: equal / zero */

loc_0024BC3E: ;
    esi = MEM32(esp + 0x48);

loc_0024BC42: ;
    eax = SX8(LO8(eax));
    edx = eax + -48;
    if (CMP_LE(edx, 9)) goto loc_0024BC50; /* jle: less or equal (signed <=) */

loc_0024BC4D: ;
    edx = eax + -55;

loc_0024BC50: ;
    ecx = MEM32(esp + 0x44);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_0024BC7F; /* je: equal / zero */

loc_0024BC5C: ;
    ebx = MEM32(esp + 0x44);
    eax = esi;
    eax = eax - ecx;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(eax, ecx)) goto loc_0024BC7F; /* jae: above or equal (unsigned >=) */

loc_0024BC74: ;
    MEM32(esi) = edx;
    esi = esi + 4;
    MEM32(esp + 0x48) = esi;
    goto loc_0024BC98;

loc_0024BC7F: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_0024BC94: ;
    esi = MEM32(esp + 0x48);

loc_0024BC98: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0024BC42; /* jne: not equal / not zero */

loc_0024BCA0: ;
    edx = esp + 0x110;
    PUSH32(esp, edx);
    edi = esp + 0x8C;
    PUSH32(esp, 0); sub_001E4D90(); /* call 0x001E4D90 */

loc_0024BCB4: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024BCBE: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024BDE0; /* je: equal / zero */

loc_0024BCC9: ;
    ecx = MEM32(ebp + 8);
    edx = ecx + 0x20;
    PUSH32(esp, edx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1B8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1B4);
    ecx = MEM32(ecx + 0x1B0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0x5FBEE0;
    PUSH32(esp, 0); sub_0024AF60(); /* call 0x0024AF60 */

loc_0024BCFD: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024BD06; /* je: equal / zero */

loc_0024BD03: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024BD06: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, 0x54);
    MEMF(esp + 0xF4) = xmm0; /* movss */
    MEMF(esp + 0xF8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024BD38: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024BDE7; /* je: equal / zero */

loc_0024BD43: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F4CCCCD);
    edx = esp + 0x100;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    esp = esp - 0xC;
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    MEM32(ecx + 8) = edx;
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024BD86; /* je: equal / zero */

loc_0024BD83: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024BD86: ;
    esi = eax;
    PUSH32(esp, 0); sub_0024A750(); /* call 0x0024A750 */

loc_0024BD8D: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0024BD96; /* je: equal / zero */

loc_0024BD93: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024BD96: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_0024BDB1; /* je: equal / zero */

loc_0024BD9C: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (CMP_NE(eax, ebx)) goto loc_0024BDB1; /* jne: not equal / not zero */

loc_0024BDA9: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024BDB1: ;
    eax = MEM32(esp + 0x44);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (CMP_EQ(eax, ebx)) goto loc_0024BDCF; /* je: equal / zero */

loc_0024BDBE: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024BDCC: ;
    esp = esp + 4;

loc_0024BDCF: ;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    goto loc_0024C677;

loc_0024BDE0: ;
    edi = 0; /* xor self */
    goto loc_0024BD06;

loc_0024BDE7: ;
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    goto loc_0024BD96;

loc_0024BDED: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 2);
    xmm0 = MEMF(0x648D14); /* movss */
    edi = edi + 2;
    eax = eax - 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x68) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0024BE20; /* jle: less or equal (signed <=) */

loc_0024BE09: ;
    if (CMP_G(eax, 9)) goto loc_0024BE20; /* jg: greater (signed >) */

loc_0024BE0E: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(esp + 0x68) = xmm0; /* movss */

loc_0024BE20: ;
    edx = esp + 0x4D0;
    edi = edi + 2;
    PUSH32(esp, edx);
    MEM8(esp + 0x4D4) = 0;
    MEM8(esp + 0x8D3) = 0;
    PUSH32(esp, 0); sub_0024B530(); /* call 0x0024B530 */

loc_0024BE40: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024BE47: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) goto loc_0024BF48; /* je: equal / zero */

loc_0024BE54: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x1E8);
    edx = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F);
    PUSH32(esp, edx);
    eax = esp + 0x4E0;
    PUSH32(esp, eax);
    ecx = esp + 0x3A4;
    PUSH32(esp, ecx);
    edi = esp + 0xA0;
    PUSH32(esp, 0); sub_001E4D90(); /* call 0x001E4D90 */

loc_0024BE85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5FBED4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00248220(); /* call 0x00248220 */

loc_0024BE91: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024BE9A; /* je: equal / zero */

loc_0024BE97: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024BE9A: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, 0x54);
    MEMF(esp + 0x10C) = xmm0; /* movss */
    MEMF(esp + 0x110) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024BECC: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024BF4F; /* je: equal / zero */

loc_0024BED3: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F4CCCCD);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    esp = esp - 0xC;
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    MEM32(ecx + 8) = edx;
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024BF16; /* je: equal / zero */

loc_0024BF13: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024BF16: ;
    esi = eax;
    PUSH32(esp, 0); sub_0024A750(); /* call 0x0024A750 */

loc_0024BF1D: ;
    if (TEST_Z(eax, eax)) goto loc_0024BF24; /* je: equal / zero */

loc_0024BF21: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024BF24: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024C672; /* je: equal / zero */

loc_0024BF2E: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024C672; /* jne: not equal / not zero */

loc_0024BF3F: ;
    eax = MEM32(edi);
    ecx = edi;
    goto loc_0024C66E;

loc_0024BF48: ;
    edi = 0; /* xor self */
    goto loc_0024BE9A;

loc_0024BF4F: ;
    eax = 0; /* xor self */
    goto loc_0024BF24;

loc_0024BF53: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x3FF);
    ecx = ecx + 0xAC;
    PUSH32(esp, ecx);
    edx = esp + 0x8D8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0024BF6F: ;
    SET_LO8(eax, MEM8(edi + 1));
    xmm0 = MEMF(0x648D14); /* movss */
    edi = edi + 2;
    MEM8(esp + 0x3B) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(edi);
    eax = eax - 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x54) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0024BFA8; /* jle: less or equal (signed <=) */

loc_0024BF91: ;
    if (CMP_G(eax, 9)) goto loc_0024BFA8; /* jg: greater (signed >) */

loc_0024BF96: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(esp + 0x54) = xmm0; /* movss */

loc_0024BFA8: ;
    PUSH32(esp, 0x7F);
    edi = edi + 2;
    PUSH32(esp, edi);
    ecx = esp + 0x458;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0024BFBF: ;
    edi = 0x5FBEC0;
    esi = esp + 0x450;
    ecx = 0x12;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0024BFE5; /* jne: not equal / not zero */

loc_0024BFD6: ;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_0024BFDB: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    ebx = 0x5FBEA8;
    if (CMP_EQ(eax, 2)) goto loc_0024BFE9; /* je: equal / zero */

loc_0024BFE5: ;
    ebx = MEM32(esp + 0x18);

loc_0024BFE9: ;
    PUSH32(esp, ebx);
    edi = esp + 0x8D4;
    PUSH32(esp, 0); sub_000687F0(); /* call 0x000687F0 */

loc_0024BFF6: ;
    edi = esp + 0xBC;
    eax = esp + 0x8D0;
    PUSH32(esp, 0); sub_00076130(); /* call 0x00076130 */

loc_0024C009: ;
    PUSH32(esp, ebx);
    eax = esp + 0x154;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0024C01C: ;
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi + 4);
    edi = MEM32(esi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x160;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_0024C038: ;
    esp = esp + 0x18;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0024C0AA; /* je: equal / zero */

loc_0024C040: ;
    if (CMP_NE(MEM16(esp + 0x150), 0)) goto loc_0024C04F; /* jne: not equal / not zero */

loc_0024C04B: ;
    edi = 0; /* xor self */
    goto loc_0024C07E;

loc_0024C04F: ;
    eax = MEM32(esi + 4);
    edi = MEM32(esi);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    edx = esp + 0x154;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_0024C06A: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0024C07E; /* je: equal / zero */

loc_0024C077: ;
    edi = MEM32(esp + 0xC8);

loc_0024C07E: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00470133(); /* call 0x00470133 */

loc_0024C086: ;
    esi = eax;
    PUSH32(esp, edi);
    esi = esi + 2;
    PUSH32(esp, 0); sub_00470155(); /* call 0x00470155 */

loc_0024C091: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, esi);
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00470155(); /* call 0x00470155 */

loc_0024C09F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp + 0x10;
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */

loc_0024C0AA: ;
    edi = MEM32(esp + 0xBC);
    if (TEST_Z(edi, edi)) goto loc_0024CCCB; /* je: equal / zero */

loc_0024C0B9: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C0C0: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0024C16E; /* je: equal / zero */

loc_0024C0CD: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x1C);
    ecx = ecx + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = esp + 0x34;
    eax = ebx;
    PUSH32(esp, 0); sub_00247930(); /* call 0x00247930 */

loc_0024C0EA: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024C0F3; /* je: equal / zero */

loc_0024C0F0: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024C0F3: ;
    if (CMP_NE(MEM8(esp + 0x3B), 0x55)) goto loc_0024C677; /* jne: not equal / not zero */

loc_0024C0FE: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C105: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024C172; /* je: equal / zero */

loc_0024C10C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024C124; /* je: equal / zero */

loc_0024C121: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024C124: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024ADF0(); /* call 0x0024ADF0 */

loc_0024C12B: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024C134; /* je: equal / zero */

loc_0024C131: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024C134: ;
    if (TEST_Z(esi, esi)) goto loc_0024C14D; /* je: equal / zero */

loc_0024C138: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024C14D; /* jne: not equal / not zero */

loc_0024C145: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024C14D: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C154: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024C7B7; /* je: equal / zero */

loc_0024C15F: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3E99999A);
    goto loc_0024C63D;

loc_0024C16E: ;
    esi = 0; /* xor self */
    goto loc_0024C0F3;

loc_0024C172: ;
    ebx = 0; /* xor self */
    goto loc_0024C134;

loc_0024C176: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x3FF);
    ecx = ecx + 0xAC;
    PUSH32(esp, ecx);
    edx = esp + 0xCD8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0024C192: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 2);
    xmm0 = MEMF(0x648D14); /* movss */
    edi = edi + 2;
    eax = eax - 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x78) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0024C1C5; /* jle: less or equal (signed <=) */

loc_0024C1AE: ;
    if (CMP_G(eax, 9)) goto loc_0024C1C5; /* jg: greater (signed >) */

loc_0024C1B3: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(esp + 0x78) = xmm0; /* movss */

loc_0024C1C5: ;
    edi = edi + 2;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = edi;
    edi = esp + 0xCD4;
    PUSH32(esp, 0); sub_000687F0(); /* call 0x000687F0 */

loc_0024C1D9: ;
    edi = esp + 0xA0;
    eax = esp + 0xCD0;
    PUSH32(esp, 0); sub_00076130(); /* call 0x00076130 */

loc_0024C1EC: ;
    edi = MEM32(esp + 0xA0);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM8(esp + 0xF) = 0;
    if (TEST_Z(edi, edi)) goto loc_0024CCCB; /* je: equal / zero */

loc_0024C200: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C207: ;
    ebx = eax;
    esp = esp + 4;
    if (TEST_Z(ebx, ebx)) goto loc_0024C2FF; /* je: equal / zero */

loc_0024C214: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x78);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x35C;
    PUSH32(esp, edx);
    edi = esp + 0x98;
    PUSH32(esp, 0); sub_001E4D90(); /* call 0x001E4D90 */

loc_0024C235: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002480A0(); /* call 0x002480A0 */

loc_0024C240: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024C249; /* je: equal / zero */

loc_0024C246: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024C249: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xF8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, 0x54);
    MEMF(esp + 0x100) = xmm0; /* movss */
    MEMF(esp + 0x104) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C27B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024C306; /* je: equal / zero */

loc_0024C286: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = esp + 0x10C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    esp = esp - 0xC;
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    MEM32(edx + 8) = ecx;
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024C2C9; /* je: equal / zero */

loc_0024C2C6: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024C2C9: ;
    esi = eax;
    PUSH32(esp, 0); sub_0024A750(); /* call 0x0024A750 */

loc_0024C2D0: ;
    if (TEST_Z(eax, eax)) goto loc_0024C2D7; /* je: equal / zero */

loc_0024C2D4: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024C2D7: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024C677; /* je: equal / zero */

loc_0024C2E1: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024C677; /* jne: not equal / not zero */

loc_0024C2F2: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024C2FA: ;
    goto loc_0024C677;

loc_0024C2FF: ;
    edi = 0; /* xor self */
    goto loc_0024C249;

loc_0024C306: ;
    eax = 0; /* xor self */
    goto loc_0024C2D7;

loc_0024C30A: ;
    (void)0; /* cmp MEM8(edi + 1), 0x31 - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(MEM8(edi + 1), 0x31)) ? 1 : 0); /* sete */
    edi = edi + 4;
    PUSH32(esp, edi);
    eax = esp + 0x154;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0024C32B: ;
    edi = MEM32(ebp + 8);
    esp = esp + 0xC;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x154;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    esi = esp + 0x30;
    PUSH32(esp, 0); sub_0024B5A0(); /* call 0x0024B5A0 */

loc_0024C348: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, 0x38);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0024C3F0; /* je: equal / zero */

loc_0024C352: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C37A: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0024C434; /* je: equal / zero */

loc_0024C387: ;
    ecx = MEM32(esp + 0xB0);
    edx = MEM32(esp + 0xB4);
    edi = edi + 0x20;
    PUSH32(esp, edi);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x30);
    eax = esp + 0x160;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_0024C3BD: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    edi = esp + 0x3C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024C3DD: ;
    if (TEST_Z(eax, eax)) goto loc_0024C3E4; /* je: equal / zero */

loc_0024C3E1: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024C3E4: ;
    esi = eax;

loc_0024C3E6: ;
    MEM8(esp + 0x17) = 1;
    goto loc_0024C677;

loc_0024C3F0: ;
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C3F5: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0024C434; /* je: equal / zero */

loc_0024C3FE: ;
    ecx = MEM32(esp + 0x20);
    edi = edi + 0x20;
    PUSH32(esp, edi);
    eax = esp + 0x154;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_0024C412: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edi = esp + 0x30;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00248B80(); /* call 0x00248B80 */

loc_0024C432: ;
    goto loc_0024C3DD;

loc_0024C434: ;
    eax = 0; /* xor self */
    esi = eax;
    MEM8(esp + 0x17) = 1;
    goto loc_0024C677;

loc_0024C442: ;
    (void)0; /* cmp MEM8(edi + 1), 0x65 - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(MEM8(edi + 1), 0x65)) ? 1 : 0); /* sete */
    edi = edi + 4;
    PUSH32(esp, edi);
    edx = esp + 0x154;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0024C463: ;
    edi = MEM32(ebp + 8);
    esp = esp + 0xC;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x154;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    esi = esp + 0x30;
    PUSH32(esp, 0); sub_0024B5A0(); /* call 0x0024B5A0 */

loc_0024C480: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C487: ;
    esp = esp + 4;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    esi = eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0024C4F0; /* je: equal / zero */

loc_0024C490: ;
    if (TEST_Z(esi, esi)) goto loc_0024C52A; /* je: equal / zero */

loc_0024C498: ;
    ecx = MEM32(edi + 0x20);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(edx + 8) = eax;
    eax = esp + 0x160;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_0024C4C2: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    edi = esp + 0x3C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024C4E2: ;
    if (TEST_Z(eax, eax)) goto loc_0024C4E9; /* je: equal / zero */

loc_0024C4E6: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024C4E9: ;
    esi = eax;
    goto loc_0024C5D0;

loc_0024C4F0: ;
    if (TEST_Z(esi, esi)) goto loc_0024C52A; /* je: equal / zero */

loc_0024C4F4: ;
    ecx = MEM32(esp + 0x20);
    edi = edi + 0x20;
    PUSH32(esp, edi);
    eax = esp + 0x154;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_0024C508: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edi = esp + 0x30;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00248B80(); /* call 0x00248B80 */

loc_0024C528: ;
    goto loc_0024C4E2;

loc_0024C52A: ;
    eax = 0; /* xor self */
    esi = eax;
    goto loc_0024C5D0;

loc_0024C533: ;
    SET_LO8(ecx, MEM8(edi + 1));
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1DC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    (void)0; /* cmp LO8(ecx), 0x31 - flags set for next jcc */
    ecx = MEM32(esi + 0x1D8);
    PUSH32(esp, eax);
    SET_LO8(ebx, (CMP_EQ(LO8(ecx), 0x31)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    eax = esp + 0xD8;
    edi = edi + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); sub_0024FE70(); /* call 0x0024FE70 */

loc_0024C566: ;
    esi = MEM32(esi + 0x1DC);
    edi = MEM32(esp + 0xDC);
    esp = esp + 0x10;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C57D: ;
    esp = esp + 4;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(edi, esi)) goto loc_0024C797; /* je: equal / zero */

loc_0024C58A: ;
    if (TEST_Z(esi, esi)) goto loc_0024C7A9; /* je: equal / zero */

loc_0024C592: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(edi + 0x80);
    ecx = ecx + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0024C5A0: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edi = esp + 0x30;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0024AA80(); /* call 0x0024AA80 */

loc_0024C5BF: ;
    if (TEST_Z(eax, eax)) goto loc_0024C5C6; /* je: equal / zero */

loc_0024C5C3: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024C5C6: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    esi = eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0024C3E6; /* je: equal / zero */

loc_0024C5D0: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C5D7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024C7B0; /* je: equal / zero */

loc_0024C5E2: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024C5FA; /* je: equal / zero */

loc_0024C5F7: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024C5FA: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024C5FF: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024C608; /* je: equal / zero */

loc_0024C605: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024C608: ;
    if (TEST_Z(esi, esi)) goto loc_0024C621; /* je: equal / zero */

loc_0024C60C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024C621; /* jne: not equal / not zero */

loc_0024C619: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024C621: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C628: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024C7B7; /* je: equal / zero */

loc_0024C633: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3DCCCCCD);

loc_0024C63D: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024C649; /* je: equal / zero */

loc_0024C646: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024C649: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024C650: ;
    if (TEST_Z(eax, eax)) goto loc_0024C657; /* je: equal / zero */

loc_0024C654: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024C657: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024C672; /* je: equal / zero */

loc_0024C65D: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    MEM32(ebx + 4) = ecx;
    eax = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024C672; /* jne: not equal / not zero */

loc_0024C66A: ;
    eax = MEM32(ebx);
    ecx = ebx;

loc_0024C66E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024C672: ;
    MEM8(esp + 0xF) = 0;

loc_0024C677: ;
    if (TEST_Z(esi, esi)) goto loc_0024CCCB; /* je: equal / zero */

loc_0024C67F: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(ebp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024C6DF; /* je: equal / zero */

loc_0024C68A: ;
    eax = MEM32(edi + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_0024C6DF; /* je: equal / zero */

loc_0024C691: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C698: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024CB82; /* je: equal / zero */

loc_0024C6A3: ;
    ecx = MEM32(edi + 0x50);
    edx = MEM32(edi + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024C6BD: ;
    if (TEST_Z(eax, eax)) goto loc_0024C6C4; /* je: equal / zero */

loc_0024C6C1: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024C6C4: ;
    ecx = esi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0024C6DF; /* je: equal / zero */

loc_0024C6CC: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_0024C6DF; /* jne: not equal / not zero */

loc_0024C6D9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024C6DF: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024C73A; /* je: equal / zero */

loc_0024C6E7: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C6EE: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024CB89; /* je: equal / zero */

loc_0024C6F9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(edi + 0x84);
    edx = MEM32(edi + 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024C713; /* je: equal / zero */

loc_0024C710: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024C713: ;
    PUSH32(esp, 0); sub_00247E80(); /* call 0x00247E80 */

loc_0024C718: ;
    if (TEST_Z(eax, eax)) goto loc_0024C71F; /* je: equal / zero */

loc_0024C71C: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024C71F: ;
    ecx = esi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0024C73A; /* je: equal / zero */

loc_0024C727: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_0024C73A; /* jne: not equal / not zero */

loc_0024C734: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024C73A: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x18);
    ebx = MEM32(esp + 0x34);
    eax = edx;
    if (CMP_EQ(eax, ecx)) goto loc_0024C763; /* je: equal / zero */

loc_0024C74A: ;
    /* nop */

loc_0024C750: ;
    if (CMP_EQ(MEM32(eax), ebx)) goto loc_0024C75B; /* je: equal / zero */

loc_0024C754: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_0024C750; /* jne: not equal / not zero */

loc_0024C75B: ;
    if (CMP_NE(eax, ecx)) goto loc_0024CC14; /* jne: not equal / not zero */

loc_0024C763: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0024CEF0(); /* call 0x0024CEF0 */

loc_0024C76A: ;
    if (TEST_Z(esi, esi)) goto loc_0024C771; /* je: equal / zero */

loc_0024C76E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024C771: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(edi + 8);
    edi = MEM32(edi + -4);
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024C782; /* je: equal / zero */

loc_0024C77F: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024C782: ;
    edx = MEM32(edi + 8);
    edi = edi + 4;
    if (TEST_NZ(edx, edx)) goto loc_0024CB90; /* jne: not equal / not zero */

loc_0024C790: ;
    ecx = 0; /* xor self */
    goto loc_0024CB98;

loc_0024C797: ;
    if (TEST_Z(esi, esi)) goto loc_0024C7A9; /* je: equal / zero */

loc_0024C79B: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    goto loc_0024C5A0;

loc_0024C7A9: ;
    eax = 0; /* xor self */
    goto loc_0024C5C6;

loc_0024C7B0: ;
    ebx = 0; /* xor self */
    goto loc_0024C608;

loc_0024C7B7: ;
    eax = 0; /* xor self */
    goto loc_0024C657;

loc_0024C7BE: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 4);
    edx = MEM32(esp + 0x34);
    eax = MEM32(ebp + 8);
    edi = edi + 4;
    ecx = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = esi - 0x30;
    edi = edi + 2;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1E4), _icall_esp); /* indirect call */
    }

loc_0024C7DE: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) goto loc_0024C807; /* jne: not equal / not zero */

loc_0024C7E7: ;
    eax = MEM32(0x6BD960);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_0024C7F5: ;
    MEM32(0x6BD964) = eax;
    MEM32(esp + 0x5C) = 0x6BD964;
    ebx = 1;

loc_0024C807: ;
    PUSH32(esp, 0x78);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C80E: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024C8FA; /* je: equal / zero */

loc_0024C819: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x30); /* mulss */
    PUSH32(esp, ecx);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0024A010(); /* call 0x0024A010 */

loc_0024C847: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024C850; /* je: equal / zero */

loc_0024C84D: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024C850: ;
    xmm0 = MEMF(0x649D7C); /* movss */
    MEMF(esp + 0xD0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x54);
    MEMF(esp + 0xD8) = xmm0; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024C87D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024C901; /* je: equal / zero */

loc_0024C884: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3E99999A);
    edx = esp + 0xE4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    esp = esp - 0xC;
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    MEM32(ecx + 8) = edx;
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024C8C7; /* je: equal / zero */

loc_0024C8C4: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024C8C7: ;
    esi = eax;
    PUSH32(esp, 0); sub_0024A750(); /* call 0x0024A750 */

loc_0024C8CE: ;
    if (TEST_Z(eax, eax)) goto loc_0024C8D5; /* je: equal / zero */

loc_0024C8D2: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024C8D5: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024C8F0; /* je: equal / zero */

loc_0024C8DB: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024C8F0; /* jne: not equal / not zero */

loc_0024C8E8: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024C8F0: ;
    MEM8(esp + 0x17) = 1;
    goto loc_0024C672;

loc_0024C8FA: ;
    edi = 0; /* xor self */
    goto loc_0024C850;

loc_0024C901: ;
    eax = 0; /* xor self */
    goto loc_0024C8D5;

loc_0024C905: ;
    SET_LO8(ecx, MEM8(edi + 4));
    edi = edi + 4;
    PUSH32(esp, 0x7F);
    edi = edi + 2;
    PUSH32(esp, edi);
    edx = esp + 0x3D8;
    PUSH32(esp, edx);
    MEM8(esp + 0x80) = LO8(ecx);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0024C929: ;
    edi = 0x5FBE90;
    esi = esp + 0x3D0;
    ecx = 0x16;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0024C94D; /* jne: not equal / not zero */

loc_0024C940: ;
    PUSH32(esp, 0); sub_002A3890(); /* call 0x002A3890 */

loc_0024C945: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024CCCB; /* je: equal / zero */

loc_0024C94D: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x1CC);
    ecx = MEM32(ebx + 0x1C8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    MEM32(esp + 0x74) = 0;
    PUSH32(esp, 0); sub_0024FE70(); /* call 0x0024FE70 */

loc_0024C975: ;
    eax = MEM32(ebx + 0x1CC);
    ecx = MEM32(esp + 0x70);
    esp = esp + 0x10;
    if (CMP_EQ(ecx, eax)) goto loc_0024C9A1; /* je: equal / zero */

loc_0024C986: ;
    edx = MEM32(ecx + 0x80);
    PUSH32(esp, ecx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    esi = ebx + 0x1C4;
    MEM32(esp + 0x6C) = edx;
    PUSH32(esp, 0); sub_0024F110(); /* call 0x0024F110 */

loc_0024C9A1: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x154;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0024C9B8: ;
    esp = esp + 0xC;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x154;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    esi = esp + 0x30;
    PUSH32(esp, 0); sub_0024B5A0(); /* call 0x0024B5A0 */

loc_0024C9D2: ;
    (void)0; /* cmp MEM8(esp + 0x74), 0x30 - flags set for next jcc */
    ecx = MEM32(esp + 0x20);
    if (CMP_NE(MEM8(esp + 0x74), 0x30)) goto loc_0024C9F2; /* jne: not equal / not zero */

loc_0024C9DD: ;
    eax = 0x5FBE88;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_0024C9E7: ;
    MEM32(esp + 0x50) = eax;
    eax = 0x5FBE78;
    goto loc_0024CA05;

loc_0024C9F2: ;
    eax = 0x5FBE80;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_0024C9FC: ;
    MEM32(esp + 0x50) = eax;
    eax = 0x5F1298;

loc_0024CA05: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_0024CA0E: ;
    PUSH32(esp, 0x6C);
    edi = eax;
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024CA17: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0024CAF6; /* je: equal / zero */

loc_0024CA24: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x80);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x90);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, edi);
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x74);
    eax = MEM32(esp + 0x84);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x16C;
    edi = ebx + 0x20;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_0024CA69: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x4C); /* mulss */
    edx = MEM32(esp + 0x34);
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, esi);
    edi = esp + 0x4C;
    PUSH32(esp, 0); sub_00249540(); /* call 0x00249540 */

loc_0024CA8E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024CABF; /* je: equal / zero */

loc_0024CA94: ;
    eax = MEM32(edi + 4);
    eax++;
    esi = eax;
    esi++;
    edx = esi;
    edx++;
    MEM32(edi + 4) = eax;
    ecx = edx;
    ecx--;
    MEM32(edi + 4) = esi;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = edx;
    MEM32(esp + 0x10) = edi;
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024CABF; /* jne: not equal / not zero */

loc_0024CAB7: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024CABF: ;
    esi = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0xE0);
    if (CMP_NE(MEM32(ecx + esi * 4), 0)) goto loc_0024CB29; /* jne: not equal / not zero */

loc_0024CAD0: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024CAD7: ;
    ecx = eax;
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) goto loc_0024CAFA; /* je: equal / zero */

loc_0024CAE0: ;
    ebx = ebx + 0x20;
    PUSH32(esp, ebx);
    eax = 0x5FBE70;
    esi = ecx;
    PUSH32(esp, 0); sub_002499A0(); /* call 0x002499A0 */

loc_0024CAF0: ;
    esi = MEM32(esp + 0x34);
    goto loc_0024CAFC;

loc_0024CAF6: ;
    edi = 0; /* xor self */
    goto loc_0024CABF;

loc_0024CAFA: ;
    eax = 0; /* xor self */

loc_0024CAFC: ;
    if (TEST_Z(eax, eax)) goto loc_0024CB03; /* je: equal / zero */

loc_0024CB00: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0024CB03: ;
    ebx = MEM32(esp + 0xE0);
    ecx = MEM32(ebx + esi * 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebx + esi * 4) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0024CB30; /* je: equal / zero */

loc_0024CB14: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_0024CB30; /* jne: not equal / not zero */

loc_0024CB21: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024CB27: ;
    goto loc_0024CB30;

loc_0024CB29: ;
    ebx = MEM32(esp + 0xE0);

loc_0024CB30: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024CB3C; /* je: equal / zero */

loc_0024CB39: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024CB3C: ;
    esi = MEM32(ebx + esi * 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00249AB0(); /* call 0x00249AB0 */

loc_0024CB45: ;
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0024CB60; /* je: equal / zero */

loc_0024CB4D: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_0024CB60; /* jne: not equal / not zero */

loc_0024CB5A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024CB60: ;
    if (TEST_Z(edi, edi)) goto loc_0024CCCB; /* je: equal / zero */

loc_0024CB68: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024CCCB; /* jne: not equal / not zero */

loc_0024CB79: ;
    edx = MEM32(edi);
    ecx = edi;
    goto loc_0024CCC7;

loc_0024CB82: ;
    eax = 0; /* xor self */
    goto loc_0024C6C4;

loc_0024CB89: ;
    eax = 0; /* xor self */
    goto loc_0024C71F;

loc_0024CB90: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);

loc_0024CB98: ;
    if (TEST_Z(edx, edx)) goto loc_0024CBC8; /* je: equal / zero */

loc_0024CB9C: ;
    eax = MEM32(edi + 0xC);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(ecx, eax)) goto loc_0024CBC8; /* jae: above or equal (unsigned >=) */

loc_0024CBA8: ;
    ecx = MEM32(esp + 0x3C);
    ebx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_002502B0(); /* call 0x002502B0 */

loc_0024CBBD: ;
    esp = esp + 0x10;
    ebx = ebx + 4;
    MEM32(edi + 8) = ebx;
    goto loc_0024CBD9;

loc_0024CBC8: ;
    eax = MEM32(edi + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0024FB60(); /* call 0x0024FB60 */

loc_0024CBD9: ;
    if (TEST_Z(esi, esi)) goto loc_0024CCCB; /* je: equal / zero */

loc_0024CBE1: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024CBF6; /* jne: not equal / not zero */

loc_0024CBEE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024CBF6: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024CCB6; /* jne: not equal / not zero */

loc_0024CC07: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024CC0F: ;
    goto loc_0024CCB6;

loc_0024CC14: ;
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(esi, esi)) goto loc_0024CC20; /* je: equal / zero */

loc_0024CC1D: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024CC20: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(edi + 4);
    edi = MEM32(edi + eax * 4);
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024CC31; /* je: equal / zero */

loc_0024CC2E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024CC31: ;
    edx = MEM32(edi + 8);
    edi = edi + 4;
    if (TEST_NZ(edx, edx)) goto loc_0024CC3F; /* jne: not equal / not zero */

loc_0024CC3B: ;
    ecx = 0; /* xor self */
    goto loc_0024CC47;

loc_0024CC3F: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);

loc_0024CC47: ;
    if (TEST_Z(edx, edx)) goto loc_0024CC77; /* je: equal / zero */

loc_0024CC4B: ;
    eax = MEM32(edi + 0xC);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(ecx, eax)) goto loc_0024CC77; /* jae: above or equal (unsigned >=) */

loc_0024CC57: ;
    eax = MEM32(esp + 0x3C);
    ebx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_002502B0(); /* call 0x002502B0 */

loc_0024CC6C: ;
    esp = esp + 0x10;
    ebx = ebx + 4;
    MEM32(edi + 8) = ebx;
    goto loc_0024CC88;

loc_0024CC77: ;
    eax = MEM32(edi + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0024FB60(); /* call 0x0024FB60 */

loc_0024CC88: ;
    if (TEST_Z(esi, esi)) goto loc_0024CCCB; /* je: equal / zero */

loc_0024CC8C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024CCA1; /* jne: not equal / not zero */

loc_0024CC99: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024CCA1: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024CCB6; /* jne: not equal / not zero */

loc_0024CCAE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024CCB6: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024CCCB; /* jne: not equal / not zero */

loc_0024CCC3: ;
    edx = MEM32(esi);
    ecx = esi;

loc_0024CCC7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024CCCB: ;
    esi = esp + 0x88;
    PUSH32(esp, 0); sub_001DFE30(); /* call 0x001DFE30 */

loc_0024CCD7: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0024BA71; /* jne: not equal / not zero */

loc_0024CCDF: ;
    ebx = MEM32(ebp + 8);
    edi = 0; /* xor self */
    MEM32(esp + 0x34) = edi;
    g_seh_ebp = ebp; sub_0024CCF0(); return; /* tail jmp 0x0024CCF0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0024CECA
 * Original: 0x0024CECA - 0x0024CEF0 (38 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CECA(void)
{

loc_0024CECA: ;
    SET_LO8(eax, LO8(eax) & 0);
    MEM8(ecx) = MEM8(ecx) + LO8(ecx);
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(ecx) = MEM32(ecx) | eax;
    MEM32(ecx) = MEM32(ecx) | ecx;
    MEM32(edx) = MEM32(edx) | eax;
    ecx = ecx + MEM32(ecx);
    MEM32(ecx + ecx) = MEM32(ecx + ecx) | eax;
    MEM32(0x9070906) = MEM32(0x9070906) | eax;
    MEM32(ecx) = MEM32(ecx) | ecx;
    SET_HI8(eax, HI8(eax) | LO8(ecx));
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */

}

/**
 * sub_0024CEF0
 * Original: 0x0024CEF0 - 0x0024CF05 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024CEF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024CEF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    edx = MEM32(ebp + 0x14);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = ebp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(edx, edx)) { sub_0024CF05(); return; } /* jne: not equal / not zero */

loc_0024CF01: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024CF0D(); return; /* tail jmp 0x0024CF0D */

}

/**
 * sub_0024D030
 * Original: 0x0024D030 - 0x0024D044 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024D030: ;
    edx = MEM32(eax + 0x1F0);
    eax = eax + 0x1EC;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(edx, edx)) { sub_0024D044(); return; } /* jne: not equal / not zero */

loc_0024D040: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024D04C(); return; /* tail jmp 0x0024D04C */

}

/**
 * sub_0024D090
 * Original: 0x0024D090 - 0x0024D0E5 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024D090: ;
    edx = MEM32(ecx + 0x1F0);
    esp = esp - 8;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(edx, edx)) { sub_0024D0E5(); return; } /* je: equal / zero */

loc_0024D09E: ;
    eax = MEM32(ecx + 0x1F4);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) { sub_0024D0E5(); return; } /* je: equal / zero */

loc_0024D0AD: ;
    edx = MEM32(ecx + 0x1F4);
    eax = MEM32(ecx + 0x1F0);
    if (CMP_EQ(eax, edx)) goto loc_0024D0CF; /* je: equal / zero */

loc_0024D0BD: ;
    /* nop */

loc_0024D0C0: ;
    if (CMP_EQ(MEM32(eax), edi)) goto loc_0024D0CB; /* je: equal / zero */

loc_0024D0C4: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024D0C0; /* jne: not equal / not zero */

loc_0024D0CB: ;
    if (CMP_NE(eax, edx)) { sub_0024D0E5(); return; } /* jne: not equal / not zero */

loc_0024D0CF: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0024D0EB(); return; /* tail jmp 0x0024D0EB */

}

/**
 * sub_0024D170
 * Original: 0x0024D170 - 0x0024D2D6 (358 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D170(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0024D170: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0);
    esi = edi + 0x1EC;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0024F2C0(); /* call 0x0024F2C0 */

loc_0024D186: ;
    xmm0 = MEMF(edi + 0xA0); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0024D24D; /* jbe: below or equal (unsigned <=) */

loc_0024D19B: ;
    xmm0 = MEMF(edi + 0xA4); /* movss */
    xmm0 = xmm0 * MEMF(0x849C40); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00247DA0(); /* call 0x00247DA0 */

loc_0024D1B6: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xA4); /* movss */
    xmm0 = xmm0 * MEMF(0x849C40); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A724); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00247DA0(); /* call 0x00247DA0 */

loc_0024D1EF: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(edi + 0xA0); /* movss */
    xmm2 = xmm2 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm1 - MEMF(edi + 0xA0); /* subss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm2 = xmm2 * MEMF(edi + 0x94); /* mulss */
    MEMF(edi + 0x88) = xmm2; /* movss */
    xmm2 = MEMF(edi + 0xA0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm2 = xmm2 * MEMF(edi + 0x98); /* mulss */
    MEMF(edi + 0x8C) = xmm2; /* movss */

loc_0024D24D: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0024D26A; /* jp: parity */

loc_0024D262: ;
    xmm0 = MEMF(0x6497D0); /* movss */

loc_0024D26A: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024D286; /* je: equal / zero */

loc_0024D272: ;
    xmm1 = MEMF(0x849C40); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(0x849C40) = xmm1; /* movss */

loc_0024D286: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 4);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = 0x2478A0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024FF10(); /* call 0x0024FF10 */

loc_0024D2A9: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(edi + 8);
    edi = MEM32(edi + 4);
    PUSH32(esp, edx);
    eax = 0x2478F0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024FF10(); /* call 0x0024FF10 */

loc_0024D2C6: ;
    esp = esp + 0x28;
    PUSH32(esp, 0); sub_001F6060(); /* call 0x001F6060 */

loc_0024D2CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024D2E0
 * Original: 0x0024D2E0 - 0x0024E54C (4716 bytes, 1767 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D2E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024D2E0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024CEF0(); /* call 0x0024CEF0 */

loc_0024D2F3: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024D2FD: ;
    edi = eax;
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0xD18);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024D311: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D318: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024D4D3; /* je: equal / zero */

loc_0024D325: ;
    ecx = MEM32(ebx + 0x20);
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x6BD9EC);
    PUSH32(esp, edi);
    MEM32(edx + 8) = eax;
    PUSH32(esp, ecx);
    edi = 0x6BD968;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024D356: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024D35F; /* je: equal / zero */

loc_0024D35C: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D35F: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D366: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024D4DA; /* je: equal / zero */

loc_0024D371: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024D389; /* je: equal / zero */

loc_0024D386: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D389: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024D38E: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024D397; /* je: equal / zero */

loc_0024D394: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024D397: ;
    if (TEST_Z(esi, esi)) goto loc_0024D3B0; /* je: equal / zero */

loc_0024D39B: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D3B0; /* jne: not equal / not zero */

loc_0024D3A8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024D3B0: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D3B7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024D4E1; /* je: equal / zero */

loc_0024D3C2: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024D3D8; /* je: equal / zero */

loc_0024D3D5: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024D3D8: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024D3DF: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_0024D3E8; /* je: equal / zero */

loc_0024D3E5: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_0024D3E8: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(ebx, ebx)) goto loc_0024D405; /* je: equal / zero */

loc_0024D3F0: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D405; /* jne: not equal / not zero */

loc_0024D3FD: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024D405: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_0024D411; /* je: equal / zero */

loc_0024D40E: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_0024D411: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x14);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024D42D; /* je: equal / zero */

loc_0024D421: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0024D42D; /* je: equal / zero */

loc_0024D426: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024D421; /* jne: not equal / not zero */

loc_0024D42D: ;
    ebx = MEM32(esp + 0x20);
    eax = eax - ecx;
    ecx = MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024D441: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024D44B: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xD1C);
    edi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024D460: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D467: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024D4E8; /* je: equal / zero */

loc_0024D470: ;
    edx = MEM32(ebx + 0x20);
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6BD9F0);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = 0x6BD974;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024D4A1: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024D4AA; /* je: equal / zero */

loc_0024D4A7: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D4AA: ;
    if (CMP_EQ(esi, ebp)) goto loc_0024D4EC; /* je: equal / zero */

loc_0024D4AE: ;
    if (TEST_Z(esi, esi)) goto loc_0024D4B5; /* je: equal / zero */

loc_0024D4B2: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D4B5: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    edi = esi;
    if (TEST_Z(ebp, ebp)) goto loc_0024D4F0; /* je: equal / zero */

loc_0024D4BB: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D4F0; /* jne: not equal / not zero */

loc_0024D4C8: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024D4D1: ;
    goto loc_0024D4F0;

loc_0024D4D3: ;
    esi = 0; /* xor self */
    goto loc_0024D35F;

loc_0024D4DA: ;
    ebx = 0; /* xor self */
    goto loc_0024D397;

loc_0024D4E1: ;
    ebp = 0; /* xor self */
    goto loc_0024D3E8;

loc_0024D4E8: ;
    esi = 0; /* xor self */
    goto loc_0024D4AA;

loc_0024D4EC: ;
    edi = MEM32(esp + 0x10);

loc_0024D4F0: ;
    if (TEST_Z(esi, esi)) goto loc_0024D509; /* je: equal / zero */

loc_0024D4F4: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D509; /* jne: not equal / not zero */

loc_0024D501: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024D509: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D510: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024D685; /* je: equal / zero */

loc_0024D51B: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024D533; /* je: equal / zero */

loc_0024D530: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024D533: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024D538: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024D541; /* je: equal / zero */

loc_0024D53E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D541: ;
    if (TEST_Z(edi, edi)) goto loc_0024D55A; /* je: equal / zero */

loc_0024D545: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D55A; /* jne: not equal / not zero */

loc_0024D552: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024D55A: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D561: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024D68C; /* je: equal / zero */

loc_0024D56C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024D582; /* je: equal / zero */

loc_0024D57F: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D582: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024D589: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024D592; /* je: equal / zero */

loc_0024D58F: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024D592: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(esi, esi)) goto loc_0024D5AF; /* je: equal / zero */

loc_0024D59A: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D5AF; /* jne: not equal / not zero */

loc_0024D5A7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024D5AF: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024D5BB; /* je: equal / zero */

loc_0024D5B8: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024D5BB: ;
    ebp = MEM32(esp + 0x20);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024D5DC; /* je: equal / zero */

loc_0024D5CB: ;
    goto loc_0024D5D0;

    /* nop */

loc_0024D5D0: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0024D5DC; /* je: equal / zero */

loc_0024D5D5: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024D5D0; /* jne: not equal / not zero */

loc_0024D5DC: ;
    eax = eax - ecx;
    ecx = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024D5EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0024CEF0(); /* call 0x0024CEF0 */

loc_0024D5F4: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024D5FE: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xD20);
    edi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024D613: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D61A: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024D693; /* je: equal / zero */

loc_0024D623: ;
    edx = MEM32(ebp + 0x20);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6BDA00);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = 0x6BD9A4;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024D654: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024D65D; /* je: equal / zero */

loc_0024D65A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D65D: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024D697; /* je: equal / zero */

loc_0024D661: ;
    if (TEST_Z(esi, esi)) goto loc_0024D668; /* je: equal / zero */

loc_0024D665: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D668: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = esi;
    if (TEST_Z(ebx, ebx)) goto loc_0024D69B; /* je: equal / zero */

loc_0024D66E: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D69B; /* jne: not equal / not zero */

loc_0024D67B: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024D683: ;
    goto loc_0024D69B;

loc_0024D685: ;
    esi = 0; /* xor self */
    goto loc_0024D541;

loc_0024D68C: ;
    ebx = 0; /* xor self */
    goto loc_0024D592;

loc_0024D693: ;
    esi = 0; /* xor self */
    goto loc_0024D65D;

loc_0024D697: ;
    edi = MEM32(esp + 0x10);

loc_0024D69B: ;
    if (TEST_Z(esi, esi)) goto loc_0024D6B4; /* je: equal / zero */

loc_0024D69F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D6B4; /* jne: not equal / not zero */

loc_0024D6AC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024D6B4: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D6BB: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024D81F; /* je: equal / zero */

loc_0024D6C6: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024D6DE; /* je: equal / zero */

loc_0024D6DB: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024D6DE: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024D6E3: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024D6EC; /* je: equal / zero */

loc_0024D6E9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D6EC: ;
    if (TEST_Z(edi, edi)) goto loc_0024D705; /* je: equal / zero */

loc_0024D6F0: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D705; /* jne: not equal / not zero */

loc_0024D6FD: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024D705: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D70C: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024D826; /* je: equal / zero */

loc_0024D717: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024D72D; /* je: equal / zero */

loc_0024D72A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D72D: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024D734: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024D73D; /* je: equal / zero */

loc_0024D73A: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024D73D: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(esi, esi)) goto loc_0024D75A; /* je: equal / zero */

loc_0024D745: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D75A; /* jne: not equal / not zero */

loc_0024D752: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024D75A: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024D766; /* je: equal / zero */

loc_0024D763: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024D766: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024D77E; /* je: equal / zero */

loc_0024D772: ;
    if (CMP_EQ(MEM32(eax), 1)) goto loc_0024D77E; /* je: equal / zero */

loc_0024D777: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024D772; /* jne: not equal / not zero */

loc_0024D77E: ;
    eax = eax - ecx;
    ecx = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024D78E: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024D798: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xD24);
    edi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024D7AD: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D7B4: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024D82D; /* je: equal / zero */

loc_0024D7BD: ;
    edx = MEM32(ebp + 0x20);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6BDA04);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = 0x6BD9B0;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024D7EE: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024D7F7; /* je: equal / zero */

loc_0024D7F4: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D7F7: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024D831; /* je: equal / zero */

loc_0024D7FB: ;
    if (TEST_Z(esi, esi)) goto loc_0024D802; /* je: equal / zero */

loc_0024D7FF: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D802: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = esi;
    if (TEST_Z(ebx, ebx)) goto loc_0024D835; /* je: equal / zero */

loc_0024D808: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D835; /* jne: not equal / not zero */

loc_0024D815: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024D81D: ;
    goto loc_0024D835;

loc_0024D81F: ;
    esi = 0; /* xor self */
    goto loc_0024D6EC;

loc_0024D826: ;
    ebx = 0; /* xor self */
    goto loc_0024D73D;

loc_0024D82D: ;
    esi = 0; /* xor self */
    goto loc_0024D7F7;

loc_0024D831: ;
    edi = MEM32(esp + 0x10);

loc_0024D835: ;
    if (TEST_Z(esi, esi)) goto loc_0024D84E; /* je: equal / zero */

loc_0024D839: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D84E; /* jne: not equal / not zero */

loc_0024D846: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024D84E: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D855: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024DCED; /* je: equal / zero */

loc_0024D860: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024D878; /* je: equal / zero */

loc_0024D875: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024D878: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024D87D: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024D886; /* je: equal / zero */

loc_0024D883: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D886: ;
    if (TEST_Z(edi, edi)) goto loc_0024D89F; /* je: equal / zero */

loc_0024D88A: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D89F; /* jne: not equal / not zero */

loc_0024D897: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024D89F: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D8A6: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024DCF4; /* je: equal / zero */

loc_0024D8B1: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024D8C7; /* je: equal / zero */

loc_0024D8C4: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D8C7: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024D8CE: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024D8D7; /* je: equal / zero */

loc_0024D8D4: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024D8D7: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = ebx;
    if (TEST_Z(esi, esi)) goto loc_0024D8F2; /* je: equal / zero */

loc_0024D8DD: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D8F2; /* jne: not equal / not zero */

loc_0024D8EA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024D8F2: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024D8FE; /* je: equal / zero */

loc_0024D8FB: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024D8FE: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x14);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024D91C; /* je: equal / zero */

loc_0024D90E: ;
    edi = edi;

loc_0024D910: ;
    if (CMP_EQ(MEM32(eax), 1)) goto loc_0024D91C; /* je: equal / zero */

loc_0024D915: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024D910; /* jne: not equal / not zero */

loc_0024D91C: ;
    eax = eax - ecx;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024D930: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024D93A: ;
    edx = MEM32(0x849800);
    edi = eax;
    eax = MEM32(edx + 0xD28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024D94F: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D956: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024DCFB; /* je: equal / zero */

loc_0024D963: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6BDA08);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = 0x6BD9BC;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024D998: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024D9A1; /* je: equal / zero */

loc_0024D99E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D9A1: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024D9C7; /* je: equal / zero */

loc_0024D9A5: ;
    if (TEST_Z(esi, esi)) goto loc_0024D9AC; /* je: equal / zero */

loc_0024D9A9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024D9AC: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ebp = esi;
    if (TEST_Z(ebx, ebx)) goto loc_0024D9C7; /* je: equal / zero */

loc_0024D9B2: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D9C7; /* jne: not equal / not zero */

loc_0024D9BF: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024D9C7: ;
    if (TEST_Z(esi, esi)) goto loc_0024D9E0; /* je: equal / zero */

loc_0024D9CB: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024D9E0; /* jne: not equal / not zero */

loc_0024D9D8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024D9E0: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024D9E7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024DD02; /* je: equal / zero */

loc_0024D9F2: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_0024DA0A; /* je: equal / zero */

loc_0024DA07: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_0024DA0A: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024DA0F: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024DA18; /* je: equal / zero */

loc_0024DA15: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DA18: ;
    if (TEST_Z(ebp, ebp)) goto loc_0024DA32; /* je: equal / zero */

loc_0024DA1C: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DA32; /* jne: not equal / not zero */

loc_0024DA29: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024DA32: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DA39: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024DD09; /* je: equal / zero */

loc_0024DA44: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024DA5A; /* je: equal / zero */

loc_0024DA57: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DA5A: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024DA61: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024DA6A; /* je: equal / zero */

loc_0024DA67: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024DA6A: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = ebx;
    if (TEST_Z(esi, esi)) goto loc_0024DA85; /* je: equal / zero */

loc_0024DA70: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DA85; /* jne: not equal / not zero */

loc_0024DA7D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024DA85: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024DA91; /* je: equal / zero */

loc_0024DA8E: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024DA91: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x14);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024DAAD; /* je: equal / zero */

loc_0024DAA1: ;
    if (CMP_EQ(MEM32(eax), 1)) goto loc_0024DAAD; /* je: equal / zero */

loc_0024DAA6: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024DAA1; /* jne: not equal / not zero */

loc_0024DAAD: ;
    eax = eax - ecx;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024DAC1: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024DACB: ;
    edx = MEM32(0x849800);
    edi = eax;
    eax = MEM32(edx + 0xD2C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024DAE0: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DAE7: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024DD10; /* je: equal / zero */

loc_0024DAF4: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6BDA0C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = 0x6BD9C8;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024DB29: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024DB32; /* je: equal / zero */

loc_0024DB2F: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DB32: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024DB58; /* je: equal / zero */

loc_0024DB36: ;
    if (TEST_Z(esi, esi)) goto loc_0024DB3D; /* je: equal / zero */

loc_0024DB3A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DB3D: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ebp = esi;
    if (TEST_Z(ebx, ebx)) goto loc_0024DB58; /* je: equal / zero */

loc_0024DB43: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DB58; /* jne: not equal / not zero */

loc_0024DB50: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024DB58: ;
    if (TEST_Z(esi, esi)) goto loc_0024DB71; /* je: equal / zero */

loc_0024DB5C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DB71; /* jne: not equal / not zero */

loc_0024DB69: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024DB71: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DB78: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024DD17; /* je: equal / zero */

loc_0024DB83: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_0024DB9B; /* je: equal / zero */

loc_0024DB98: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_0024DB9B: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024DBA0: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024DBA9; /* je: equal / zero */

loc_0024DBA6: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DBA9: ;
    if (TEST_Z(ebp, ebp)) goto loc_0024DBC3; /* je: equal / zero */

loc_0024DBAD: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DBC3; /* jne: not equal / not zero */

loc_0024DBBA: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024DBC3: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DBCA: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024DD1E; /* je: equal / zero */

loc_0024DBD5: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024DBEB; /* je: equal / zero */

loc_0024DBE8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DBEB: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024DBF2: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024DBFB; /* je: equal / zero */

loc_0024DBF8: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024DBFB: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(esi, esi)) goto loc_0024DC18; /* je: equal / zero */

loc_0024DC03: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DC18; /* jne: not equal / not zero */

loc_0024DC10: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024DC18: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024DC24; /* je: equal / zero */

loc_0024DC21: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024DC24: ;
    ebp = MEM32(esp + 0x20);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024DC40; /* je: equal / zero */

loc_0024DC34: ;
    if (CMP_EQ(MEM32(eax), 1)) goto loc_0024DC40; /* je: equal / zero */

loc_0024DC39: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024DC34; /* jne: not equal / not zero */

loc_0024DC40: ;
    eax = eax - ecx;
    ecx = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024DC50: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0024CEF0(); /* call 0x0024CEF0 */

loc_0024DC58: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024DC62: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xD30);
    edi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024DC77: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DC7E: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024DD25; /* je: equal / zero */

loc_0024DC8B: ;
    edx = MEM32(ebp + 0x20);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6BD9F4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = 0x6BD980;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024DCBC: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024DCC5; /* je: equal / zero */

loc_0024DCC2: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DCC5: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024DD29; /* je: equal / zero */

loc_0024DCC9: ;
    if (TEST_Z(esi, esi)) goto loc_0024DCD0; /* je: equal / zero */

loc_0024DCCD: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DCD0: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = esi;
    if (TEST_Z(ebx, ebx)) goto loc_0024DD2D; /* je: equal / zero */

loc_0024DCD6: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DD2D; /* jne: not equal / not zero */

loc_0024DCE3: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024DCEB: ;
    goto loc_0024DD2D;

loc_0024DCED: ;
    esi = 0; /* xor self */
    goto loc_0024D886;

loc_0024DCF4: ;
    ebx = 0; /* xor self */
    goto loc_0024D8D7;

loc_0024DCFB: ;
    esi = 0; /* xor self */
    goto loc_0024D9A1;

loc_0024DD02: ;
    esi = 0; /* xor self */
    goto loc_0024DA18;

loc_0024DD09: ;
    ebx = 0; /* xor self */
    goto loc_0024DA6A;

loc_0024DD10: ;
    esi = 0; /* xor self */
    goto loc_0024DB32;

loc_0024DD17: ;
    esi = 0; /* xor self */
    goto loc_0024DBA9;

loc_0024DD1E: ;
    ebx = 0; /* xor self */
    goto loc_0024DBFB;

loc_0024DD25: ;
    esi = 0; /* xor self */
    goto loc_0024DCC5;

loc_0024DD29: ;
    edi = MEM32(esp + 0x10);

loc_0024DD2D: ;
    if (TEST_Z(esi, esi)) goto loc_0024DD46; /* je: equal / zero */

loc_0024DD31: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DD46; /* jne: not equal / not zero */

loc_0024DD3E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024DD46: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DD4D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024DEF7; /* je: equal / zero */

loc_0024DD58: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024DD70; /* je: equal / zero */

loc_0024DD6D: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024DD70: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024DD75: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024DD7E; /* je: equal / zero */

loc_0024DD7B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DD7E: ;
    if (TEST_Z(edi, edi)) goto loc_0024DD97; /* je: equal / zero */

loc_0024DD82: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DD97; /* jne: not equal / not zero */

loc_0024DD8F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024DD97: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DD9E: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024DEFE; /* je: equal / zero */

loc_0024DDA9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024DDBF; /* je: equal / zero */

loc_0024DDBC: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DDBF: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024DDC6: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_0024DDCF; /* je: equal / zero */

loc_0024DDCC: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_0024DDCF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(esi, esi)) goto loc_0024DDEC; /* je: equal / zero */

loc_0024DDD7: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DDEC; /* jne: not equal / not zero */

loc_0024DDE4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024DDEC: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_0024DDF8; /* je: equal / zero */

loc_0024DDF5: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_0024DDF8: ;
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x18);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024DE14; /* je: equal / zero */

loc_0024DE08: ;
    if (CMP_EQ(MEM32(eax), 2)) goto loc_0024DE14; /* je: equal / zero */

loc_0024DE0D: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024DE08; /* jne: not equal / not zero */

loc_0024DE14: ;
    eax = eax - ecx;
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024DE24: ;
    edi = 3;
    MEM32(esp + 0x14) = 4;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_0024DE36: ;
    if (CMP_EQ(eax, 4)) goto loc_0024DE4F; /* je: equal / zero */

loc_0024DE3B: ;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_0024DE40: ;
    if (CMP_EQ(eax, 5)) goto loc_0024DE4F; /* je: equal / zero */

loc_0024DE45: ;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_0024DE4A: ;
    if (CMP_NE(eax, 6)) goto loc_0024DE5C; /* jne: not equal / not zero */

loc_0024DE4F: ;
    edi = 4;
    MEM32(esp + 0x14) = 3;

loc_0024DE5C: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024DE66: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xD34);
    ebx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024DE7B: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DE82: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024DF05; /* je: equal / zero */

loc_0024DE8B: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6BD9F8);
    PUSH32(esp, ebx);
    edi = edi + edi * 2;
    PUSH32(esp, ecx);
    edi = edi * 4 + 0x6BD968;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024DEC5: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024DECE; /* je: equal / zero */

loc_0024DECB: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DECE: ;
    if (CMP_EQ(esi, ebp)) goto loc_0024DF09; /* je: equal / zero */

loc_0024DED2: ;
    if (TEST_Z(esi, esi)) goto loc_0024DED9; /* je: equal / zero */

loc_0024DED6: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DED9: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    edi = esi;
    if (TEST_Z(ebp, ebp)) goto loc_0024DF0D; /* je: equal / zero */

loc_0024DEDF: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DF0D; /* jne: not equal / not zero */

loc_0024DEEC: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024DEF5: ;
    goto loc_0024DF0D;

loc_0024DEF7: ;
    esi = 0; /* xor self */
    goto loc_0024DD7E;

loc_0024DEFE: ;
    ebp = 0; /* xor self */
    goto loc_0024DDCF;

loc_0024DF05: ;
    esi = 0; /* xor self */
    goto loc_0024DECE;

loc_0024DF09: ;
    edi = MEM32(esp + 0x10);

loc_0024DF0D: ;
    if (TEST_Z(esi, esi)) goto loc_0024DF26; /* je: equal / zero */

loc_0024DF11: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DF26; /* jne: not equal / not zero */

loc_0024DF1E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024DF26: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DF2D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E09E; /* je: equal / zero */

loc_0024DF38: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024DF50; /* je: equal / zero */

loc_0024DF4D: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024DF50: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024DF55: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024DF5E; /* je: equal / zero */

loc_0024DF5B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DF5E: ;
    if (TEST_Z(edi, edi)) goto loc_0024DF77; /* je: equal / zero */

loc_0024DF62: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DF77; /* jne: not equal / not zero */

loc_0024DF6F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024DF77: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024DF7E: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E0A5; /* je: equal / zero */

loc_0024DF89: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024DF9F; /* je: equal / zero */

loc_0024DF9C: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024DF9F: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024DFA6: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024DFAF; /* je: equal / zero */

loc_0024DFAC: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024DFAF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(esi, esi)) goto loc_0024DFCC; /* je: equal / zero */

loc_0024DFB7: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024DFCC; /* jne: not equal / not zero */

loc_0024DFC4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024DFCC: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024DFD8; /* je: equal / zero */

loc_0024DFD5: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024DFD8: ;
    ebp = MEM32(esp + 0x20);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024DFF4; /* je: equal / zero */

loc_0024DFE8: ;
    if (CMP_EQ(MEM32(eax), 2)) goto loc_0024DFF4; /* je: equal / zero */

loc_0024DFED: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024DFE8; /* jne: not equal / not zero */

loc_0024DFF4: ;
    eax = eax - ecx;
    ecx = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024E004: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024E00E: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xD38);
    edi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024E023: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E02A: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024E0AC; /* je: equal / zero */

loc_0024E033: ;
    edx = MEM32(ebp + 0x20);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(0x6BD9FC);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    PUSH32(esp, ecx);
    edi = edi * 4 + 0x6BD968;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024E06D: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024E076; /* je: equal / zero */

loc_0024E073: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E076: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024E0B0; /* je: equal / zero */

loc_0024E07A: ;
    if (TEST_Z(esi, esi)) goto loc_0024E081; /* je: equal / zero */

loc_0024E07E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E081: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = esi;
    if (TEST_Z(ebx, ebx)) goto loc_0024E0B4; /* je: equal / zero */

loc_0024E087: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E0B4; /* jne: not equal / not zero */

loc_0024E094: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E09C: ;
    goto loc_0024E0B4;

loc_0024E09E: ;
    esi = 0; /* xor self */
    goto loc_0024DF5E;

loc_0024E0A5: ;
    ebx = 0; /* xor self */
    goto loc_0024DFAF;

loc_0024E0AC: ;
    esi = 0; /* xor self */
    goto loc_0024E076;

loc_0024E0B0: ;
    edi = MEM32(esp + 0x10);

loc_0024E0B4: ;
    if (TEST_Z(esi, esi)) goto loc_0024E0CD; /* je: equal / zero */

loc_0024E0B8: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E0CD; /* jne: not equal / not zero */

loc_0024E0C5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E0CD: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E0D4: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E245; /* je: equal / zero */

loc_0024E0DF: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024E0F7; /* je: equal / zero */

loc_0024E0F4: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024E0F7: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024E0FC: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024E105; /* je: equal / zero */

loc_0024E102: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E105: ;
    if (TEST_Z(edi, edi)) goto loc_0024E11E; /* je: equal / zero */

loc_0024E109: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E11E; /* jne: not equal / not zero */

loc_0024E116: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E11E: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E125: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E24C; /* je: equal / zero */

loc_0024E130: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024E146; /* je: equal / zero */

loc_0024E143: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E146: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024E14D: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024E156; /* je: equal / zero */

loc_0024E153: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E156: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(esi, esi)) goto loc_0024E173; /* je: equal / zero */

loc_0024E15E: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E173; /* jne: not equal / not zero */

loc_0024E16B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E173: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024E17F; /* je: equal / zero */

loc_0024E17C: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E17F: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024E19C; /* je: equal / zero */

loc_0024E18B: ;
    goto loc_0024E190;

    /* nop */

loc_0024E190: ;
    if (CMP_EQ(MEM32(eax), 2)) goto loc_0024E19C; /* je: equal / zero */

loc_0024E195: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024E190; /* jne: not equal / not zero */

loc_0024E19C: ;
    eax = eax - ecx;
    ecx = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024E1AC: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0024CEF0(); /* call 0x0024CEF0 */

loc_0024E1B4: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024E1BE: ;
    edi = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FBE50;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0024E1CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024E1D3: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E1DA: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024E253; /* je: equal / zero */

loc_0024E1E3: ;
    edx = MEM32(ebp + 0x20);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6BD9EC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = 0x6BD968;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024E214: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024E21D; /* je: equal / zero */

loc_0024E21A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E21D: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024E257; /* je: equal / zero */

loc_0024E221: ;
    if (TEST_Z(esi, esi)) goto loc_0024E228; /* je: equal / zero */

loc_0024E225: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E228: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = esi;
    if (TEST_Z(ebx, ebx)) goto loc_0024E25B; /* je: equal / zero */

loc_0024E22E: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E25B; /* jne: not equal / not zero */

loc_0024E23B: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E243: ;
    goto loc_0024E25B;

loc_0024E245: ;
    esi = 0; /* xor self */
    goto loc_0024E105;

loc_0024E24C: ;
    ebx = 0; /* xor self */
    goto loc_0024E156;

loc_0024E253: ;
    esi = 0; /* xor self */
    goto loc_0024E21D;

loc_0024E257: ;
    edi = MEM32(esp + 0x10);

loc_0024E25B: ;
    if (TEST_Z(esi, esi)) goto loc_0024E274; /* je: equal / zero */

loc_0024E25F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E274; /* jne: not equal / not zero */

loc_0024E26C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E274: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E27B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E530; /* je: equal / zero */

loc_0024E286: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024E29E; /* je: equal / zero */

loc_0024E29B: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024E29E: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024E2A3: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024E2AC; /* je: equal / zero */

loc_0024E2A9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E2AC: ;
    if (TEST_Z(edi, edi)) goto loc_0024E2C5; /* je: equal / zero */

loc_0024E2B0: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E2C5; /* jne: not equal / not zero */

loc_0024E2BD: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E2C5: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E2CC: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E537; /* je: equal / zero */

loc_0024E2D7: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024E2ED; /* je: equal / zero */

loc_0024E2EA: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E2ED: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024E2F4: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024E2FD; /* je: equal / zero */

loc_0024E2FA: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E2FD: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = ebx;
    if (TEST_Z(esi, esi)) goto loc_0024E318; /* je: equal / zero */

loc_0024E303: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E318; /* jne: not equal / not zero */

loc_0024E310: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E318: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024E324; /* je: equal / zero */

loc_0024E321: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E324: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x14);
    eax = ecx;
    if (CMP_EQ(eax, edx)) goto loc_0024E340; /* je: equal / zero */

loc_0024E334: ;
    if (CMP_EQ(MEM32(eax), 3)) goto loc_0024E340; /* je: equal / zero */

loc_0024E339: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024E334; /* jne: not equal / not zero */

loc_0024E340: ;
    eax = eax - ecx;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024E354: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024E35E: ;
    edi = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FBE34;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0024E36C: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0024E373: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E37A: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_0024E53E; /* je: equal / zero */

loc_0024E387: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x6BD9F0);
    PUSH32(esp, edi);
    MEM32(edx + 8) = eax;
    PUSH32(esp, ecx);
    edi = 0x6BD974;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024E3BC: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024E3C5; /* je: equal / zero */

loc_0024E3C2: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E3C5: ;
    if (CMP_EQ(esi, ebx)) goto loc_0024E3EB; /* je: equal / zero */

loc_0024E3C9: ;
    if (TEST_Z(esi, esi)) goto loc_0024E3D0; /* je: equal / zero */

loc_0024E3CD: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E3D0: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ebp = esi;
    if (TEST_Z(ebx, ebx)) goto loc_0024E3EB; /* je: equal / zero */

loc_0024E3D6: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E3EB; /* jne: not equal / not zero */

loc_0024E3E3: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E3EB: ;
    if (TEST_Z(esi, esi)) goto loc_0024E404; /* je: equal / zero */

loc_0024E3EF: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E404; /* jne: not equal / not zero */

loc_0024E3FC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E404: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E40B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E545; /* je: equal / zero */

loc_0024E416: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_0024E42E; /* je: equal / zero */

loc_0024E42B: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;

loc_0024E42E: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024E433: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024E43C; /* je: equal / zero */

loc_0024E439: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E43C: ;
    if (TEST_Z(ebp, ebp)) goto loc_0024E456; /* je: equal / zero */

loc_0024E440: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E456; /* jne: not equal / not zero */

loc_0024E44D: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E456: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E45D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0024E54C(); return; } /* je: equal / zero */

loc_0024E468: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024E47E; /* je: equal / zero */

loc_0024E47B: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E47E: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024E485: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024E48E; /* je: equal / zero */

loc_0024E48B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E48E: ;
    if (TEST_Z(ebx, ebx)) goto loc_0024E4A7; /* je: equal / zero */

loc_0024E492: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E4A7; /* jne: not equal / not zero */

loc_0024E49F: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E4A7: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024E4B3; /* je: equal / zero */

loc_0024E4B0: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E4B3: ;
    edi = MEM32(esp + 0x20);
    edx = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x18);
    eax = edx;
    if (CMP_EQ(eax, ecx)) goto loc_0024E4CF; /* je: equal / zero */

loc_0024E4C3: ;
    if (CMP_EQ(MEM32(eax), 3)) goto loc_0024E4CF; /* je: equal / zero */

loc_0024E4C8: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_0024E4C3; /* jne: not equal / not zero */

loc_0024E4CF: ;
    ecx = MEM32(edi + 4);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024E4DF: ;
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FBE14;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0024E4ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0024E560(); /* call 0x0024E560 */

loc_0024E4F6: ;
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FBE08;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0024E504: ;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0024E560(); /* call 0x0024E560 */

loc_0024E50D: ;
    if (TEST_Z(esi, esi)) goto loc_0024E526; /* je: equal / zero */

loc_0024E511: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E526; /* jne: not equal / not zero */

loc_0024E51E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E526: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0024E530: ;
    esi = 0; /* xor self */
    goto loc_0024E2AC;

loc_0024E537: ;
    ebx = 0; /* xor self */
    goto loc_0024E2FD;

loc_0024E53E: ;
    esi = 0; /* xor self */
    goto loc_0024E3C5;

loc_0024E545: ;
    ebx = 0; /* xor self */
    goto loc_0024E43C;

}

/**
 * sub_0024E560
 * Original: 0x0024E560 - 0x0024E8D0 (880 bytes, 326 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E560: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0024CEF0(); /* call 0x0024CEF0 */

loc_0024E573: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024E57D: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x200);
    edi = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0024E58F: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E596: ;
    esi = eax;
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_0024E89C; /* je: equal / zero */

loc_0024E5A3: ;
    ecx = MEM32(ebp + 0x20);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x6BDA10);
    PUSH32(esp, edi);
    MEM32(edx + 8) = eax;
    PUSH32(esp, ecx);
    edi = 0x6BD9D4;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024E5D4: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024E5DD; /* je: equal / zero */

loc_0024E5DA: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E5DD: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E5E4: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E8A3; /* je: equal / zero */

loc_0024E5EF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024E607; /* je: equal / zero */

loc_0024E604: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E607: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024E60C: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024E615; /* je: equal / zero */

loc_0024E612: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E615: ;
    if (TEST_Z(esi, esi)) goto loc_0024E62E; /* je: equal / zero */

loc_0024E619: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E62E; /* jne: not equal / not zero */

loc_0024E626: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E62E: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E635: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E8AA; /* je: equal / zero */

loc_0024E640: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024E656; /* je: equal / zero */

loc_0024E653: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E656: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024E65D: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024E66A; /* je: equal / zero */

loc_0024E667: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E66A: ;
    if (TEST_Z(ebx, ebx)) goto loc_0024E683; /* je: equal / zero */

loc_0024E66E: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E683; /* jne: not equal / not zero */

loc_0024E67B: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E683: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024E68F; /* je: equal / zero */

loc_0024E68C: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E68F: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = edx;
    if (CMP_EQ(eax, ecx)) goto loc_0024E6AF; /* je: equal / zero */

loc_0024E69B: ;
    goto loc_0024E6A0;

    /* nop */

loc_0024E6A0: ;
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM32(eax), edi)) goto loc_0024E6AF; /* je: equal / zero */

loc_0024E6A8: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_0024E6A0; /* jne: not equal / not zero */

loc_0024E6AF: ;
    ecx = MEM32(ebp + 4);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024E6BF: ;
    ebx = MEM32(esp + 0x20);
    if (TEST_Z(ebx, ebx)) goto loc_0024E87C; /* je: equal / zero */

loc_0024E6CB: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0024E6D5: ;
    PUSH32(esp, 0x200);
    edi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0024E6E3: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E6EA: ;
    esi = eax;
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_0024E8BB; /* je: equal / zero */

loc_0024E6F7: ;
    edx = MEM32(ebp + 0x20);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6BDA14);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = 0x6BD9E0;
    eax = 0x5FBE6C;
    PUSH32(esp, 0); sub_00248B10(); /* call 0x00248B10 */

loc_0024E728: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024E731; /* je: equal / zero */

loc_0024E72E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E731: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E738: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E8C2; /* je: equal / zero */

loc_0024E743: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024E75B; /* je: equal / zero */

loc_0024E758: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E75B: ;
    PUSH32(esp, 0); sub_002489F0(); /* call 0x002489F0 */

loc_0024E760: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0024E769; /* je: equal / zero */

loc_0024E766: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E769: ;
    if (TEST_Z(esi, esi)) goto loc_0024E782; /* je: equal / zero */

loc_0024E76D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E782; /* jne: not equal / not zero */

loc_0024E77A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E782: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E789: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0024E8C9; /* je: equal / zero */

loc_0024E794: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0024E7AA; /* je: equal / zero */

loc_0024E7A7: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;

loc_0024E7AA: ;
    edi = eax;
    PUSH32(esp, 0); sub_0024AC10(); /* call 0x0024AC10 */

loc_0024E7B1: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0024E7BA; /* je: equal / zero */

loc_0024E7B7: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E7BA: ;
    if (TEST_Z(ebx, ebx)) goto loc_0024E7D3; /* je: equal / zero */

loc_0024E7BE: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E7D3; /* jne: not equal / not zero */

loc_0024E7CB: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E7D3: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0); sub_0024EDF0(); /* call 0x0024EDF0 */

loc_0024E7DA: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0024E8D0(); return; } /* je: equal / zero */

loc_0024E7E5: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(ebp + 0x84);
    edx = MEM32(ebp + 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = esi;
    if (TEST_Z(esi, esi)) goto loc_0024E7FF; /* je: equal / zero */

loc_0024E7FC: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;

loc_0024E7FF: ;
    PUSH32(esp, 0); sub_00247E80(); /* call 0x00247E80 */

loc_0024E804: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0024E80D; /* je: equal / zero */

loc_0024E80A: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024E80D: ;
    if (TEST_Z(esi, esi)) goto loc_0024E826; /* je: equal / zero */

loc_0024E811: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E826; /* jne: not equal / not zero */

loc_0024E81E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E826: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024E832; /* je: equal / zero */

loc_0024E82F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;

loc_0024E832: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = edx;
    if (CMP_EQ(eax, ecx)) goto loc_0024E84F; /* je: equal / zero */

loc_0024E83E: ;
    edi = edi;

loc_0024E840: ;
    esi = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM32(eax), esi)) goto loc_0024E84F; /* je: equal / zero */

loc_0024E848: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_0024E840; /* jne: not equal / not zero */

loc_0024E84F: ;
    ecx = MEM32(ebp + 4);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0); sub_00247820(); /* call 0x00247820 */

loc_0024E85F: ;
    if (TEST_Z(edi, edi)) goto loc_0024E878; /* je: equal / zero */

loc_0024E863: ;
    ecx = MEM32(edi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E878; /* jne: not equal / not zero */

loc_0024E870: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0024E878: ;
    esi = MEM32(esp + 0x14);

loc_0024E87C: ;
    if (TEST_Z(esi, esi)) goto loc_0024E895; /* je: equal / zero */

loc_0024E880: ;
    ecx = MEM32(esi + 4);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0024E895; /* jne: not equal / not zero */

loc_0024E88D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0024E895: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0024E89C: ;
    esi = 0; /* xor self */
    goto loc_0024E5DD;

loc_0024E8A3: ;
    ebx = 0; /* xor self */
    goto loc_0024E615;

loc_0024E8AA: ;
    MEM32(esp + 0x14) = 0;
    esi = MEM32(esp + 0x14);
    goto loc_0024E66A;

loc_0024E8BB: ;
    esi = 0; /* xor self */
    goto loc_0024E731;

loc_0024E8C2: ;
    ebx = 0; /* xor self */
    goto loc_0024E769;

loc_0024E8C9: ;
    esi = 0; /* xor self */
    goto loc_0024E7BA;

}

/**
 * sub_0024E8E0
 * Original: 0x0024E8E0 - 0x0024E9B1 (209 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E8E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024E8E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = edx;
    edi = MEM32(ecx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    esi = edx + 0xC;
    edi = eax + 0xC;
    ecx = 0xB;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = edx + 0x38;
    edi = eax + 0x38;
    ecx = 0xA;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(edx + 0x60);
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(edx + 0x64);
    MEM32(eax + 0x64) = ecx;
    ecx = edx + 0x68;
    edi = MEM32(ecx);
    esi = eax + 0x68;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    ecx = edx + 0x74;
    edi = MEM32(ecx);
    esi = eax + 0x74;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edx + 0x80);
    MEM32(eax + 0x80) = ecx;
    ecx = MEM32(edx + 0x84);
    MEM32(eax + 0x84) = ecx;
    ecx = MEM32(edx + 0x88);
    esi = edx + 0x8C;
    edi = eax + 0x8C;
    MEM32(eax + 0x88) = ecx;
    edi = edi - esi;
    /* nop */

loc_0024E980: ;
    SET_LO8(ecx, MEM8(esi));
    MEM8(edi + esi) = LO8(ecx);
    esi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024E980; /* jne: not equal / not zero */

loc_0024E98A: ;
    SET_LO8(ecx, MEM8(edx + 0x10C));
    MEM8(eax + 0x10C) = LO8(ecx);
    ecx = edx + 0x10D;
    esi = eax + 0x10D;
    esi = esi - ecx;

loc_0024E9A4: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0024E9A4; /* jne: not equal / not zero */

loc_0024E9AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024E9C0
 * Original: 0x0024E9C0 - 0x0024EA5C (156 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E9C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024E9C0: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0024E9D5; /* jne: not equal / not zero */

loc_0024E9D0: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0024E9D5: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0024EA23; /* je: equal / zero */

loc_0024E9FB: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1FC)) goto loc_0024EA23; /* jb: below (unsigned <) */

loc_0024EA07: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0024EA11: ;
    PUSH32(esp, 0x1FC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0024EA1C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0024EA47; /* jne: not equal / not zero */

loc_0024EA23: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0024EA35: ;
    PUSH32(esp, 0x1FC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0024EA40: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0024EA5C(); return; } /* je: equal / zero */

loc_0024EA47: ;
    edi = MEM32(esp + 0x14);
    esi = eax;
    PUSH32(esp, 0); sub_0024B7A0(); /* call 0x0024B7A0 */

loc_0024EA52: ;
    POP32(esp, edi);
    MEM32(ebx) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024EA70
 * Original: 0x0024EA70 - 0x0024EB33 (195 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EA70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024EA70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1F0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0024EA92; /* je: equal / zero */

loc_0024EA81: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024EA8F: ;
    esp = esp + 4;

loc_0024EA92: ;
    MEM32(esi + 0x1F0) = edi;
    MEM32(esi + 0x1F4) = edi;
    MEM32(esi + 0x1F8) = edi;
    eax = MEM32(esi + 0x1D8);
    if (CMP_EQ(eax, edi)) goto loc_0024EABF; /* je: equal / zero */

loc_0024EAAE: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024EABC: ;
    esp = esp + 4;

loc_0024EABF: ;
    MEM32(esi + 0x1D8) = edi;
    MEM32(esi + 0x1DC) = edi;
    MEM32(esi + 0x1E0) = edi;
    eax = MEM32(esi + 0x1C8);
    if (CMP_EQ(eax, edi)) goto loc_0024EAEC; /* je: equal / zero */

loc_0024EADB: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024EAE9: ;
    esp = esp + 4;

loc_0024EAEC: ;
    eax = esi + 0x1BC;
    MEM32(esi + 0x1C8) = edi;
    MEM32(esi + 0x1CC) = edi;
    MEM32(esi + 0x1D0) = edi;
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_0024EB09: ;
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_0024EB21; /* je: equal / zero */

loc_0024EB10: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024EB1E: ;
    esp = esp + 4;

loc_0024EB21: ;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0); sub_0024F350(); /* call 0x0024F350 */

loc_0024EB2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EB40
 * Original: 0x0024EB40 - 0x0024EB76 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024EB40: ;
    esp = esp - 0x80;
    eax = esp + 0x88;
    edx = esp;
    ecx = eax;
    edx = edx - ecx;

loc_0024EB53: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024EB53; /* jne: not equal / not zero */

loc_0024EB5D: ;
    edx = MEM32(esp + 0x84);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10C);
    PUSH32(esp, 0); sub_0024B830(); /* call 0x0024B830 */

loc_0024EB73: ;
    esp += 140; return; /* ret 136 */

}

/**
 * sub_0024EB80
 * Original: 0x0024EB80 - 0x0024EBAE (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024EB80: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    eax = esi;
    if (CMP_EQ(eax, edx)) goto loc_0024EB9B; /* je: equal / zero */

loc_0024EB8F: ;
    /* nop */

loc_0024EB90: ;
    if (CMP_EQ(MEM32(eax), edi)) goto loc_0024EB9B; /* je: equal / zero */

loc_0024EB94: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0024EB90; /* jne: not equal / not zero */

loc_0024EB9B: ;
    ecx = MEM32(ecx + 4);
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = MEM32(ecx + eax * 4);
    eax = ecx + eax * 4;
    eax = MEM32(edx + 0x14);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EBB0
 * Original: 0x0024EBB0 - 0x0024EC45 (149 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EBB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024EBB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0024EBCD; /* jb: below (unsigned <) */

loc_0024EBBE: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0024EBCD: ;
    MEM32(eax) = 0x4030C;
    edx = 0; /* xor self */
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = edx;
    if (CMP_NE(eax, 2)) goto loc_0024EC2C; /* jne: not equal / not zero */

loc_0024EBFD: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0024EC02: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0024EC07: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0024EC1D; /* jb: below (unsigned <) */

loc_0024EC0E: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0024EC1D: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0024EC25: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0024EC2A: ;
    MEM32(esi) = eax;

loc_0024EC2C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024D170(); /* call 0x0024D170 */

loc_0024EC41: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024EC50
 * Original: 0x0024EC50 - 0x0024EDBF (367 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EC50(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_0024EC50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    eax = MEM32(0x84B868);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x10;
    ecx = 0x10;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x70;
    ecx = esp + 0x24;
    esi = ebx;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_0024EC84: ;
    xmm0 = MEMF(ebx + 0x20); /* movss */
    xmm1 = MEMF(ebx); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x24); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x28); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 4) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 8) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x2C); /* movss */
    eax = esp + 0x18;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x6494E4); /* movss */
    ecx = eax;
    MEMF(ebx + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0024EDAC: ;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0024EDB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EDC0
 * Original: 0x0024EDC0 - 0x0024EDEA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EDC0(void)
{

loc_0024EDC0: ;
    esp = esp - 0x80;
    eax = esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0024EDD1: ;
    edx = MEM32(esp + 0x84);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x8C);
    PUSH32(esp, 0); sub_0024B890(); /* call 0x0024B890 */

loc_0024EDE7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024EDF0
 * Original: 0x0024EDF0 - 0x0024EE74 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EDF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024EDF0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0024EE74(); return; } /* je: equal / zero */

loc_0024EE0B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0024EE1F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024EE54; /* je: equal / zero */

loc_0024EE2A: ;
    ecx = 0x75E7E0;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_0024EE34: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0024EE51: ;
    esp = esp + 0x14;

loc_0024EE54: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0024EE6D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_0024EEA0
 * Original: 0x0024EEA0 - 0x0024EEE0 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024EEA0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    if (CMP_EQ(esi, eax)) goto loc_0024EED8; /* je: equal / zero */

loc_0024EEB4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    /* nop */

loc_0024EEC0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0024EEC8: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    if (CMP_G(eax, edi)) edi = eax; /* cmovg */
    eax = MEM32(ebp + 8);
    esi = esi + 4;
    if (CMP_NE(esi, eax)) goto loc_0024EEC0; /* jne: not equal / not zero */

loc_0024EED7: ;
    POP32(esp, ebx);

loc_0024EED8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024EEE0
 * Original: 0x0024EEE0 - 0x0024EF13 (51 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024EEE0: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (CMP_EQ(esi, eax)) goto loc_0024EF0E; /* je: equal / zero */

loc_0024EEF0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_0024EEF7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024EF04; /* je: equal / zero */

loc_0024EEFB: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0024EF04: ;
    eax = MEM32(edi + 8);
    esi = esi + 4;
    if (CMP_NE(esi, eax)) goto loc_0024EEF0; /* jne: not equal / not zero */

loc_0024EF0E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EF20
 * Original: 0x0024EF20 - 0x0024EF50 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EF20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024EF20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F950);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    if (CMP_BE(edx, 0x3FFFFFFF)) { sub_0024EF50(); return; } /* jbe: below or equal (unsigned <=) */

loc_0024EF4B: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_0024F030
 * Original: 0x0024F030 - 0x0024F03D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_0024F03D(); return; } /* jne: not equal / not zero */

loc_0024F039: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024F045(); return; /* tail jmp 0x0024F045 */

}

/**
 * sub_0024F090
 * Original: 0x0024F090 - 0x0024F0A1 (17 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F090: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 4);
    if (TEST_NZ(ebx, ebx)) { sub_0024F0A1(); return; } /* jne: not equal / not zero */

loc_0024F09D: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024F0B7(); return; /* tail jmp 0x0024F0B7 */

}

/**
 * sub_0024F110
 * Original: 0x0024F110 - 0x0024F149 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F110(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F110: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = edi + 0x84;
    eax = edi;
    PUSH32(esp, 0); sub_00250110(); /* call 0x00250110 */

loc_0024F130: ;
    eax = MEM32(esi + 8);
    eax = eax + 0xFFFFFF7Cu;
    esp = esp + 4;
    MEM32(esi + 8) = eax;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024F150
 * Original: 0x0024F150 - 0x0024F180 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024F150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F940);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    if (CMP_BE(edx, 0x3FFFFFFF)) { sub_0024F180(); return; } /* jbe: below or equal (unsigned <=) */

loc_0024F17B: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_0024F260
 * Original: 0x0024F260 - 0x0024F26D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F260: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_0024F26D(); return; } /* jne: not equal / not zero */

loc_0024F269: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024F275(); return; /* tail jmp 0x0024F275 */

}

/**
 * sub_0024F2C0
 * Original: 0x0024F2C0 - 0x0024F2CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F2C0: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) { sub_0024F2CB(); return; } /* jne: not equal / not zero */

loc_0024F2C7: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024F2D3(); return; /* tail jmp 0x0024F2D3 */

}

/**
 * sub_0024F330
 * Original: 0x0024F330 - 0x0024F345 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F330(void)
{

loc_0024F330: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00250150(); /* call 0x00250150 */

loc_0024F33F: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024F350
 * Original: 0x0024F350 - 0x0024F395 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F350(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024F350: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0024F37E; /* je: equal / zero */

loc_0024F358: ;
    ecx = MEM32(esp);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00250150(); /* call 0x00250150 */

loc_0024F365: ;
    eax = MEM32(esi + 4);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_0024F37E; /* je: equal / zero */

loc_0024F372: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024F37B: ;
    esp = esp + 4;

loc_0024F37E: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024F3A0
 * Original: 0x0024F3A0 - 0x0024F3BA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F3A0(void)
{

loc_0024F3A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002501A0(); /* call 0x002501A0 */

loc_0024F3B1: ;
    esp = esp + 0x10;
    eax = edi + esi * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F3C0
 * Original: 0x0024F3C0 - 0x0024F3C8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F3C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024F3C0: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_0024F3C8(); return; } /* jne: not equal / not zero */

loc_0024F3C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F3E0
 * Original: 0x0024F3E0 - 0x0024F412 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F3E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F3E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0024F40E; /* je: equal / zero */

loc_0024F3F2: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x3E0F83E1;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_0024F412(); return; } /* jne: not equal / not zero */

loc_0024F40E: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024F427(); return; /* tail jmp 0x0024F427 */

}

/**
 * sub_0024F450
 * Original: 0x0024F450 - 0x0024F471 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F450(void)
{

loc_0024F450: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00250240(); /* call 0x00250240 */

loc_0024F461: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    esp = esp + 0x10;
    eax = eax + edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F480
 * Original: 0x0024F480 - 0x0024F4E5 (101 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024F480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F930);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    ebx = MEM32(ebp + 8);
    eax = edi;
    esi = ebx;
    PUSH32(esp, 0); sub_0037C2A0(); /* call 0x0037C2A0 */

loc_0024F4AD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0024F4CB; /* je: equal / zero */

loc_0024F4B1: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    esi = edi;
    edi = MEM32(ebx + 4);
    ecx = ebx;
    PUSH32(esp, 0); sub_001DDCE0(); /* call 0x001DDCE0 */

loc_0024F4C8: ;
    MEM32(ebx + 8) = eax;

loc_0024F4CB: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024F500
 * Original: 0x0024F500 - 0x0024F547 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F500(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024F500: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0024F530; /* je: equal / zero */

loc_0024F508: ;
    ecx = MEM32(esp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DEBB0(); /* call 0x001DEBB0 */

loc_0024F515: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0024F530; /* je: equal / zero */

loc_0024F524: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0024F52D: ;
    esp = esp + 4;

loc_0024F530: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024F550
 * Original: 0x0024F550 - 0x0024F58C (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F550: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(edi, ecx)) goto loc_0024F583; /* je: equal / zero */

loc_0024F562: ;
    eax = MEM32(ebp + 8);
    eax = eax - ecx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 2);
    esi = eax * 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0024F57A: ;
    esp = esp + 0xC;
    eax = eax + esi;
    MEM32(ebp + 8) = eax;
    POP32(esp, esi);

loc_0024F583: ;
    MEM32(ebx) = edi;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024F590
 * Original: 0x0024F590 - 0x0024F5CD (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024F590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FB40);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    edi = MEM32(eax);
    MEM32(ebp + -20) = edi;
    if (TEST_Z(edi, edi)) goto loc_0024F5C2; /* je: equal / zero */

loc_0024F5C0: ;
    MEM32(edi) = MEM32(edi) + 1;

loc_0024F5C2: ;
    esi = MEM32(ebx + 4);
    if (TEST_NZ(esi, esi)) { sub_0024F5CD(); return; } /* jne: not equal / not zero */

loc_0024F5C9: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024F5D5(); return; /* tail jmp 0x0024F5D5 */

}

/**
 * sub_0024F860
 * Original: 0x0024F860 - 0x0024F8B0 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024F860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F920);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0xAC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    ebx = edx;
    eax = esi;
    edx = ebp + -184;
    edx = edx - esi;

loc_0024F892: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024F892; /* jne: not equal / not zero */

loc_0024F89C: ;
    eax = MEM32(esi + 0x80);
    MEM32(ebp + -56) = eax;
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_0024F8B0(); return; } /* jne: not equal / not zero */

loc_0024F8AC: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024F8C6(); return; /* tail jmp 0x0024F8C6 */

}

/**
 * sub_0024FB60
 * Original: 0x0024FB60 - 0x0024FB9E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FB60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024FB60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F910);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    MEM32(ebp + -20) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0024FB93; /* je: equal / zero */

loc_0024FB90: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_0024FB93: ;
    esi = MEM32(ebx + 4);
    if (TEST_NZ(esi, esi)) { sub_0024FB9E(); return; } /* jne: not equal / not zero */

loc_0024FB9A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0024FBA6(); return; /* tail jmp 0x0024FBA6 */

}

/**
 * sub_0024FE20
 * Original: 0x0024FE20 - 0x0024FE6F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FE20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024FE20: ;
    esp = esp - 0x80;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    /* nop */

loc_0024FE30: ;
    SET_LO8(edx, MEM8(esp + ecx + 0x88));
    MEM8(esp + ecx + 4) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0024FE30; /* jne: not equal / not zero */

loc_0024FE40: ;
    ecx = esp + 4;
    esi = eax;
    edx = ecx;
    esi = esi - edx;
    /* nop */

loc_0024FE50: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0024FE50; /* jne: not equal / not zero */

loc_0024FE5A: ;
    ecx = MEM32(esp + 0x108);
    MEM32(eax + 0x80) = ecx;
    POP32(esp, esi);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FE70
 * Original: 0x0024FE70 - 0x0024FEFE (142 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024FE70: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x94);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x94);
    if (CMP_EQ(edi, eax)) { sub_0024FEFE(); return; } /* je: equal / zero */

loc_0024FE96: ;
    PUSH32(esp, esi);

loc_0024FE97: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0024FEA6: ;
    esi = esp + 0x10;
    eax = edi;
    /* nop */

loc_0024FEB0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi))) goto loc_0024FED4; /* jne: not equal / not zero */

loc_0024FEB8: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0024FED0; /* je: equal / zero */

loc_0024FEBC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi + 1))) goto loc_0024FED4; /* jne: not equal / not zero */

loc_0024FEC6: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0024FEB0; /* jne: not equal / not zero */

loc_0024FED0: ;
    eax = 0; /* xor self */
    goto loc_0024FED9;

loc_0024FED4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_0024FED9: ;
    if (TEST_Z(eax, eax)) goto loc_0024FEEE; /* je: equal / zero */

loc_0024FEDD: ;
    eax = MEM32(esp + 0x9C);
    edi = edi + 0x84;
    if (CMP_NE(edi, eax)) goto loc_0024FE97; /* jne: not equal / not zero */

loc_0024FEEE: ;
    POP32(esp, esi);
    MEM32(ebp) = edi;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF10
 * Original: 0x0024FF10 - 0x0024FF42 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024FF10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(esi, edi)) goto loc_0024FF34; /* je: equal / zero */

loc_0024FF28: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_0024FF2D: ;
    esi = esi + 4;
    if (CMP_NE(esi, edi)) goto loc_0024FF28; /* jne: not equal / not zero */

loc_0024FF34: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    MEM32(eax + 4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF50
 * Original: 0x0024FF50 - 0x0024FF96 (70 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024FF50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(esi, edi)) goto loc_0024FF78; /* je: equal / zero */

loc_0024FF68: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ecx + ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_0024FF71: ;
    esi = esi + 4;
    if (CMP_NE(esi, edi)) goto loc_0024FF68; /* jne: not equal / not zero */

loc_0024FF78: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(ecx + 4) = ebp;
    POP32(esp, esi);
    MEM32(ecx + 8) = ebx;
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FFA0
 * Original: 0x0024FFA0 - 0x0024FFBC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FFA0(void)
{

loc_0024FFA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002504B0(); /* call 0x002504B0 */

loc_0024FFB6: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024FFC0
 * Original: 0x0024FFC0 - 0x0024FFDC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FFC0(void)
{

loc_0024FFC0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00250550(); /* call 0x00250550 */

loc_0024FFD6: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024FFE0
 * Original: 0x0024FFE0 - 0x0024FFFB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FFE0(void)
{

loc_0024FFE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002505F0(); /* call 0x002505F0 */

loc_0024FFF5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00250000
 * Original: 0x00250000 - 0x00250058 (88 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    if (CMP_EQ(ebx, ebp)) goto loc_00250055; /* je: equal / zero */

loc_0025000C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi;

loc_00250010: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax);
    if (CMP_EQ(eax, MEM32(ebx))) goto loc_0025004C; /* je: equal / zero */

loc_0025001A: ;
    if (TEST_Z(eax, eax)) goto loc_00250020; /* je: equal / zero */

loc_0025001E: ;
    MEM32(eax) = MEM32(eax) + 1;

loc_00250020: ;
    edi = MEM32(ebx);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebx) = eax;
    if (TEST_Z(edi, edi)) goto loc_0025004C; /* je: equal / zero */

loc_00250028: ;
    ecx = MEM32(edi);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0025004C; /* jne: not equal / not zero */

loc_00250033: ;
    esi = edi + 4;
    PUSH32(esp, 0); sub_0024F500(); /* call 0x0024F500 */

loc_0025003B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00250049: ;
    esp = esp + 4;

loc_0025004C: ;
    ebx = ebx + 4;
    if (CMP_NE(ebx, ebp)) goto loc_00250010; /* jne: not equal / not zero */

loc_00250053: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00250055: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250060
 * Original: 0x00250060 - 0x002500A4 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250060: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(edx, ebp)) goto loc_002500A2; /* je: equal / zero */

loc_00250069: ;
    PUSH32(esp, ebx);
    ebx = 0xFFFFFF80u;
    PUSH32(esp, esi);
    ebx = ebx - edi;

loc_00250072: ;
    eax = edi;
    esi = ebx + edx + 0x80;
    goto loc_00250080;

    /* nop */

loc_00250080: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00250080; /* jne: not equal / not zero */

loc_0025008A: ;
    eax = MEM32(edi + 0x80);
    MEM32(edx + 0x80) = eax;
    edx = edx + 0x84;
    if (CMP_NE(edx, ebp)) goto loc_00250072; /* jne: not equal / not zero */

loc_002500A0: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002500A2: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002500B0
 * Original: 0x002500B0 - 0x002500CB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002500B0(void)
{

loc_002500B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00250690(); /* call 0x00250690 */

loc_002500C5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002500D0
 * Original: 0x002500D0 - 0x00250108 (56 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002500D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002500D0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, edi)) goto loc_00250106; /* je: equal / zero */

loc_002500D7: ;
    eax = MEM32(ebx);
    if (CMP_EQ(eax, MEM32(esi))) goto loc_002500FF; /* je: equal / zero */

loc_002500DD: ;
    if (TEST_Z(eax, eax)) goto loc_002500E4; /* je: equal / zero */

loc_002500E1: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_002500E4: ;
    ecx = MEM32(esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_002500FF; /* je: equal / zero */

loc_002500EC: ;
    edx = MEM32(ecx + 4);
    edx--;
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(eax, eax)) goto loc_002500FF; /* jne: not equal / not zero */

loc_002500F9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_002500FF: ;
    esi = esi + 4;
    if (CMP_NE(esi, edi)) goto loc_002500D7; /* jne: not equal / not zero */

loc_00250106: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00250110
 * Original: 0x00250110 - 0x00250148 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250110(void)
{
    int _flags = 0; /* fallback flag var */

loc_00250110: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(esi, ebx)) goto loc_00250146; /* je: equal / zero */

loc_00250117: ;
    PUSH32(esp, edi);

loc_00250118: ;
    edi = eax;
    ecx = esi;
    edi = edi - esi;
    edi = edi;

loc_00250120: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00250120; /* jne: not equal / not zero */

loc_0025012A: ;
    ecx = MEM32(esi + 0x80);
    MEM32(eax + 0x80) = ecx;
    esi = esi + 0x84;
    eax = eax + 0x84;
    if (CMP_NE(esi, ebx)) goto loc_00250118; /* jne: not equal / not zero */

loc_00250145: ;
    POP32(esp, edi);

loc_00250146: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00250150
 * Original: 0x00250150 - 0x0025019E (78 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250150: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(edi, ebp)) goto loc_0025019B; /* je: equal / zero */

loc_0025015C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = edi;

loc_00250160: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_0025018C; /* je: equal / zero */

loc_00250166: ;
    MEM32(eax) = MEM32(eax) - 1;
    ebx = MEM32(edi);
    if (CMP_NE(MEM32(ebx), 0)) goto loc_0025018C; /* jne: not equal / not zero */

loc_0025016F: ;
    if (TEST_Z(ebx, ebx)) goto loc_0025018C; /* je: equal / zero */

loc_00250173: ;
    esi = ebx + 4;
    PUSH32(esp, 0); sub_0024F500(); /* call 0x0024F500 */

loc_0025017B: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00250189: ;
    esp = esp + 4;

loc_0025018C: ;
    MEM32(edi) = 0;
    edi = edi + 4;
    if (CMP_NE(edi, ebp)) goto loc_00250160; /* jne: not equal / not zero */

loc_00250199: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0025019B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002501A0
 * Original: 0x002501A0 - 0x002501F7 (87 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002501A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002501A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F500);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -4) = 0;

loc_002501D3: ;
    if (CMP_BE(edx & edx, 0)) { sub_002501F7(); return; } /* jbe: below or equal (unsigned <=) */

loc_002501D7: ;
    MEM32(ebp + -24) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_002501EB; /* je: equal / zero */

loc_002501DE: ;
    eax = MEM32(esi);
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_002501EB; /* je: equal / zero */

loc_002501E6: ;
    MEM32(ebp + -28) = eax;
    MEM32(eax) = MEM32(eax) + 1;

loc_002501EB: ;
    edx--;
    MEM32(ebp + 0xC) = edx;
    ecx = ecx + 4;
    MEM32(ebp + 8) = ecx;
    goto loc_002501D3;

}

/**
 * sub_00250240
 * Original: 0x00250240 - 0x00250288 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00250240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F2B0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_00250270: ;
    if (CMP_BE(ebx & ebx, 0)) { sub_00250288(); return; } /* jbe: below or equal (unsigned <=) */

loc_00250274: ;
    PUSH32(esp, 0); sub_00250480(); /* call 0x00250480 */

loc_00250279: ;
    ebx--;
    MEM32(ebp + 0xC) = ebx;
    edi = edi + 0x84;
    MEM32(ebp + 8) = edi;
    goto loc_00250270;

}
