/**
 * sub_0053904E
 * Original: 0x0053904E - 0x00539080 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053904E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053904E: ;
    conker_trace_point(0x53D7E24E);
    MEM32(eax + 8) = 0x4032C;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + 8);
    eax = eax + 0x10;
    if (TEST_Z(HI8(ecx), 1)) { g_seh_ebp = ebp; sub_00539080(); return; } /* je: equal / zero */

loc_00539063: ;
    if (CMP_NE(esi, MEM32(ebp + 0x1A14))) { g_seh_ebp = ebp; sub_00539080(); return; } /* jne: not equal / not zero */

loc_0053906B: ;
    ecx = ecx & 0xFFFFFEFFu;
    MEM32(ebp + 8) = ecx;
    MEM32(eax) = 0x40130;
    MEM32(eax + 4) = edi;
    eax = eax + 8;
    g_seh_ebp = ebp;
    sub_00539080();
}
