/**
 * sub_0053902C
 * Original: 0x0053902C - 0x0053904C (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053902C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053902C: ;
    conker_trace_point(0x53D7E22C);
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(MEM32(0x549C38), edi)) { g_seh_ebp = ebp; sub_0053904C(); return; } /* je: equal / zero */

loc_0053903D: ;
    if (CMP_EQ(MEM32(ebp + 0x1A08), edi)) { g_seh_ebp = ebp; sub_0053904C(); return; } /* je: equal / zero */

loc_00539045: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_0053904E(); return; /* tail jmp 0x0053904E */

}
