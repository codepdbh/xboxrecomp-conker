/**
 * sub_00538F7A
 * Original: 0x00538F7A - 0x00538F83 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538F7A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538F7A: ;
    conker_trace_point(0x53D7E17A);
    esi = MEM32(esp + 0x20);
    ecx = eax + eax;
    g_seh_ebp = ebp; sub_00538F8B(); return; /* tail jmp 0x00538F8B */

}
