/**
 * sub_00539F38
 * Original: 0x00539F38 - 0x0053A01B (227 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539F38(void)
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

loc_00539F38: ;
    edx = MEM32(ebx + 0x954);
    eax = MEM32(ebx + 0x958);
    edx = edx << 0x10;
    MEM32(ecx) = 0x80200;
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x24);
    eax = eax << 0x10;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 0x402B4;
    MEM32(ecx + 0x10) = edx;
    edx = ecx + 0x14;
    if (CMP_BE(esi & esi, 0)) { sub_0053A01B(); return; } /* jbe: below or equal (unsigned <=) */

loc_00539F6F: ;
    eax = edx;
    eax = eax - ecx;
    ecx = MEM32(esp + 0x28);
    edi = 0x402E0;
    ecx = eax + ecx + -16;
    ebp = esi;

loc_00539F82: ;
    fp_push((double)SMEM32(ecx + -4)); /* fild */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ecx + 4)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539FA3: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = eax;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539FB8: ;
    esi--;
    esi = esi << 0x10;
    eax = eax | esi;
    esi = edi + -32;
    MEM32(edx) = esi;
    MEM32(edx + 4) = eax;
    fp_push((double)SMEM32(ecx)); /* fild */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ecx + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539FE6: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = eax;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00539FFB: ;
    esi--;
    esi = esi << 0x10;
    eax = eax | esi;
    MEM32(edx + 8) = edi;
    MEM32(edx + 0xC) = eax;
    edx = edx + 0x10;
    ecx = ecx + 0x10;
    edi = edi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_00539F82; /* jne: not equal / not zero */

loc_0053A017: ;
    esi = MEM32(esp + 0x20);
    g_seh_ebp = ebp;
    sub_0053A01B();
    return;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
