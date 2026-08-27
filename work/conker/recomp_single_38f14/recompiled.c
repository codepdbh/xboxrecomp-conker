/**
 * sub_00538F14
 * Original: 0x00538F14 - 0x00538F18 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538F14(void)
{

loc_00538F14: ;
    conker_trace_point(0x53D7E114);
    MEM32(esp + 0x10) = edi;
    sub_00538F18();
}
