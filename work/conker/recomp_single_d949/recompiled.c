/**
 * sub_0053D949
 * Original: 0x0053D949 - 0x0053D95A (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D949(void)
{
    int _flags = 0; /* fallback flag var */

loc_0053D949: ;
    if (TEST_Z(edi, edi)) goto loc_0053D953; /* je: equal / zero */

loc_0053D94D: ;
    MEM32(edi) = 0x547540;

loc_0053D953: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
