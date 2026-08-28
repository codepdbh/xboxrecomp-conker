/**
 * sub_00538404
 * Original: 0x00538404 - 0x005384DB (215 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538404(void)
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

loc_00538404: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053841A; /* jb: below (unsigned <) */

loc_0053840B: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053841A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = ebx;
    fp_push(MEMF(esi + 0x964)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    ecx = eax + 8;
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_005384B5; /* jnp: not parity */

loc_00538439: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, ecx);
    MEM32(esi + 0x964) = eax;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_00538458: ;
    edx = MEM32(eax * 4 + 0x545FC8);
    ebx = MEM32(0x5499F0);
    MEM32(esi + 0x968) = edx;
    eax = MEM32(0x549C6C);
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = ebx | 0x10F;
    MEM32(0x5499F0) = ebx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0053D960(); /* call 0x0053D960 */

loc_0053849D: ;
    if (CMP_BE(eax, 0x1FF)) goto loc_005384A9; /* jbe: below or equal (unsigned <=) */

loc_005384A4: ;
    eax = 0x1FF;

loc_005384A9: ;
    MEM32(ecx) = 0x40380;
    MEM32(ecx + 4) = eax;
    ecx = ecx + 8;

loc_005384B5: ;
    edi = esi;
    MEM32(esi) = ecx;
    PUSH32(esp, 0); sub_00538090(); /* call 0x00538090 */

loc_005384BE: ;
    ecx = MEM32(esi + 0x794);
    if (TEST_Z(MEM8(ecx + 4), 2)) goto loc_005384CF; /* je: equal / zero */

loc_005384CA: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_005384CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_00539710(); return; /* tail jmp 0x00539710 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
