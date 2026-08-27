/**
 * sub_0053CFD7
 * Original: 0x0053CFD7 - 0x0053D1F1 (538 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CFD7(void)
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

loc_0053CFD7: ;
    eax = MEM32(0x547340);
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(eax, 4)) goto loc_0053CFF6; /* je: equal / zero */

loc_0053CFF1: ;
    if (CMP_NE(eax, 5)) goto loc_0053D02C; /* jne: not equal / not zero */

loc_0053CFF6: ;
    fp_push(MEMF(0x648CE0)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0053D011; /* jp: parity */

loc_0053D009: ;
    MEM32(esp + 0x10) = 0x3F000000;

loc_0053D011: ;
    fp_push(MEMF(0x648CE0)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0053D02C; /* jp: parity */

loc_0053D024: ;
    MEM32(esp + 0x14) = 0x3F000000;

loc_0053D02C: ;
    esi = MEM32(0x5499E8);
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_0053D037: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053D04D; /* jb: below (unsigned <) */

loc_0053D03E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D04D: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 5;
    edx = MEM32(esi + 8);
    eax = eax + 8;
    edx = edx | 0x800;
    MEM32(esi) = eax;
    MEM32(esi + 8) = edx;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053D087; /* jb: below (unsigned <) */

loc_0053D078: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D087: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(eax) = 0x818C8;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    eax = eax + 0xC;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053D0BC; /* jb: below (unsigned <) */

loc_0053D0AD: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D0BC: ;
    MEM32(eax) = 0x81880;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebp;
    eax = eax + 0xC;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053D0E9; /* jb: below (unsigned <) */

loc_0053D0DA: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D0E9: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(eax) = 0x818C8;
    if (CMP_GE(edi & edi, 0)) goto loc_0053D101; /* jge: greater or equal (signed >=) */

loc_0053D0FB: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0053D101: ;
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(eax + 8) = ecx;
    eax = eax + 0xC;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053D13E; /* jb: below (unsigned <) */

loc_0053D12F: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D13E: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(eax) = 0x81880;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(eax + 8) = ebp;
    eax = eax + 0xC;
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053D175; /* jb: below (unsigned <) */

loc_0053D166: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D175: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = ebx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(eax) = 0x818C8;
    MEM32(eax + 4) = edx;
    if (CMP_GE(ebx & ebx, 0)) goto loc_0053D194; /* jge: greater or equal (signed >=) */

loc_0053D18E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0053D194: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fst */
    eax = eax + 0xC;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0053D1CB; /* jb: below (unsigned <) */

loc_0053D1BC: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0053D1CB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(eax + 4) = ebp;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(eax) = 0x81880;
    eax = eax + 0xC;
    POP32(esp, edi);
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    g_seh_ebp = ebp; sub_0053AD40(); return; /* tail jmp 0x0053AD40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
