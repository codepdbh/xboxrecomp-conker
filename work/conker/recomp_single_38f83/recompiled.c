/**
 * sub_00538F83
 * Original: 0x00538F83 - 0x00538F8B (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538F83(void)
{

loc_00538F83: ;
    conker_trace_point(0x53D7E183);
    ecx = ZX8(MEM8(esi + 0x13));
    ecx++;
    ecx = ecx << 6;
    sub_00538F8B();
}
