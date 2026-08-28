/**
 * sub_00537F34
 * Original: 0x00537F34 - 0x0053802D (249 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537F34(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00537F34: ;
    edx = MEM32(esi + 0xEE0);
    fp_push((double)SMEM32(esi + 0xEE0)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_00537F4A; /* jge: greater or equal (signed >=) */

loc_00537F44: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00537F4A: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi + 0xEE4);
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push((double)SMEM32(esi + 0xEE4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00537F6C; /* jge: greater or equal (signed >=) */

loc_00537F66: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00537F6C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    (void)0; /* test HI8(ecx), HI8(ecx) - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if (((int32_t)(HI8(ecx) & HI8(ecx)) >= 0)) goto loc_00537F99; /* jns: not sign (positive) */

loc_00537F81: ;
    if (CMP_EQ(MEM32(0x549C58), eax)) goto loc_00537F99; /* je: equal / zero */

loc_00537F89: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */

loc_00537F99: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEM32(edi) = 0x100A20;
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x1C18));
    edi = edi + 0x14;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0053800D; /* jne: not equal / not zero */

loc_00537FBA: ;
    if (CMP_NE(MEM32(0x549C34), 2)) goto loc_00537FE9; /* jne: not equal / not zero */

loc_00537FC3: ;
    fp_push(MEMF(esi + 0x944)); /* fld float */
    ecx = MEM32(esi + 0x948);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esi + 0x1C0C) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x1C08) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0053800D;

loc_00537FE9: ;
    fp_push(MEMF(esi + 0xEF0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x1C08) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0xEF4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x1C0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0053800D: ;
    fp_push(MEMF(esi + 0x1C0C)); /* fld float */
    eax = edi + 0xC;
    fp_push(MEMF(esi + 0x1C08)); /* fld float */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = 0x80394;
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
