/**
 * sub_00540254
 * Original: 0x00540254 - 0x0054025B (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540254(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540254: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00540341(); return; /* tail jmp 0x00540341 */

}
