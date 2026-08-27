/**
 * sub_0053CFCC
 * Original: 0x0053CFCC - 0x0053CFD7 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CFCC(void)
{

loc_0053CFCC: ;
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    eax++;
    ebx = eax;
    sub_0053CFD7();
    return;

}
