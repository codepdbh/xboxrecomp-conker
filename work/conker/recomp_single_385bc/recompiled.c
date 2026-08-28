/**
 * sub_005385BC
 * Original: 0x005385BC - 0x00538620 (100 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005385BC(void)
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

loc_005385BC: ;
    eax = 0; /* xor self */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    ecx = 0x10;
    edi = esp + 0x20;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x54) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, eax);
    ecx = edx + 0xCA0;
    PUSH32(esp, ecx);
    edx = edx + 0x980;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053DAE0(); /* call 0x0053DAE0 */

loc_00538611: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x200;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
