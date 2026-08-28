/**
 * sub_0053A01B
 * Original: 0x0053A01B - 0x0053A01F (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A01B(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A01B: ;
    ebp = MEM32(esp + 0x28);
    g_seh_ebp = ebp;
    sub_0053A01F();
    return;

}
