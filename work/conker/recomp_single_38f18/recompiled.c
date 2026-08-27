/**
 * sub_00538F18
 * Original: 0x00538F18 - 0x00538F25 (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538F18(void)
{

loc_00538F18: ;
    conker_trace_point(0x53D7E118);
    MEM32(esp + 0x14) = 2;
    ebx = 0x40100;
    sub_00538F25();
}
