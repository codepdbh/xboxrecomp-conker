/**
 * sub_000609E6
 * Original: 0x000609E6 - 0x000609F1 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000609E6(void)
{
loc_000609E6: ;
    eax = (LO8(eax) & 0x10) ? 0x10Bu : 0;
    sub_000609F1(); return; /* seeded fallthrough */

}
