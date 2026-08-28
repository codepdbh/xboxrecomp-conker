/**
 * sub_00539E67
 * Original: 0x00539E67 - 0x00539EE2 (123 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539E67(void)
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

loc_00539E67: ;
    if (CMP_NE(esi, 1)) { sub_00539F38(); return; } /* jne: not equal / not zero */

loc_00539E70: ;
    eax = MEM32(esp + 0x24);
    if (TEST_NZ(eax, eax)) { sub_00539F38(); return; } /* jne: not equal / not zero */

loc_00539E7C: ;
    ebp = MEM32(esp + 0x28);
    fp_push((double)SMEM32(ebp)); /* fild */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539E96: ;
    fp_push((double)SMEM32(ebp + 4)); /* fild */
    PUSH32(esp, ecx);
    edi = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539EAE: ;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539EC6: ;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    edx = eax;
    PUSH32(esp, ecx);
    edx = edx - edi;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539EE0: ;
    eax = eax - esi;
    g_seh_ebp = ebp;
    sub_00539EE2();
    return;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
