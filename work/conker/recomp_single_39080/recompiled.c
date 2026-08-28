/**
 * sub_00539080
 * Original: 0x00539080 - 0x005390B8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539080(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539080: ;
    conker_trace_point(0x53D7E280);
    esi = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    MEM32(ebp) = eax;
    PUSH32(esp, 0); sub_0053F9B0(); /* call 0x0053F9B0 */
    conker_trace_point(0x53D7E281);

loc_00539090: ;
    MEM32(ebp + 0x1A0C) = eax;
    PUSH32(esp, 0x546078);
    eax = ebp;
    PUSH32(esp, 0); sub_005381C0(); /* call 0x005381C0 */
    conker_trace_point(0x53D7E282);

loc_005390A2: ;
    edx = MEM32(0x549C74);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00537440(); /* call 0x00537440 */
    conker_trace_point(0x53D7E283);

loc_005390AE: ;
    conker_trace_point(0x53D7E2AE);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}
