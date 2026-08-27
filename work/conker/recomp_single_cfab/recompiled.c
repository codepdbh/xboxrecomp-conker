/**
 * sub_0053CFAB
 * Original: 0x0053CFAB - 0x0053CFB3 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CFAB(void)
{

loc_0053CFAB: ;
    eax = eax & 0xFFF;
    eax++;
    edi = eax;
    sub_0053CFB3();
    return;

}
