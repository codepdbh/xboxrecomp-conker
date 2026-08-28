/**
 * sub_00539EE2
 * Original: 0x00539EE2 - 0x00539F38 (86 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539EE2(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539EE2: ;
    MEM32(ecx) = 0x80200;
    eax = eax << 0x10;
    edx = edx << 0x10;
    eax = eax | esi;
    esi = MEM32(esp + 0x20);
    edx = edx | edi;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 0x402B4;
    MEM32(ecx + 0x10) = 0;
    eax = MEM32(ebx + 0x954);
    eax = eax << 0x10;
    MEM32(ecx + 0x14) = 0x402C0;
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ebx + 0x958);
    eax = eax << 0x10;
    MEM32(ecx + 0x1C) = 0x402E0;
    MEM32(ecx + 0x20) = eax;
    edx = ecx + 0x24;
    g_seh_ebp = ebp; sub_0053A01F(); return; /* tail jmp 0x0053A01F */

}
