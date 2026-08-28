/**
 * sub_005385B2
 * Original: 0x005385B2 - 0x005385BC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005385B2(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_005385B2: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    sub_005385BC();
    return;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
