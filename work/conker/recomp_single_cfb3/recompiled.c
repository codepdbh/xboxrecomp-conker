/**
 * sub_0053CFB3
 * Original: 0x0053CFB3 - 0x0053CFCC (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CFB3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053CFB3: ;
    eax = MEM32(edx + 0x10);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(eax, ebp)) {
        g_seh_ebp = ebp;
        sub_0053CFCC();
        return;
    } /* jne: not equal / not zero */

loc_0053CFBB: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 0xF));
    ebx = 1;
    ecx = ecx & 0xF;
    ebx = ebx << LO8(ecx);
    g_seh_ebp = ebp; sub_0053CFD7(); return; /* tail jmp 0x0053CFD7 */

}
