/**
 * sub_003500BC
 * Original: 0x003500BC - 0x003500C4 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003500BC(void)
{

loc_003500BC: ;
    edx = MEM32(eax + 8);
    edx = edx - esi;
    edx = (uint32_t)((int32_t)edx >> 2);
    sub_003500C4(); return;

}
