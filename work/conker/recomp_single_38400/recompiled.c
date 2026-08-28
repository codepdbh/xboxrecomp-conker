/**
 * sub_00538400
 * Original: 0x00538400 - 0x00538404 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538400(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00538400: ;
    /* This is an internal continuation of sub_005381C0.  The normal path is
     * linked directly there so its synthetic FPU stack remains available. */
    sub_00538404();
    return;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
