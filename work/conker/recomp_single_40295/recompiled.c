/**
 * sub_00540295
 * Original: 0x00540295 - 0x0054029C (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540295(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540295: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00540340(); return; /* tail jmp 0x00540340 */

}
