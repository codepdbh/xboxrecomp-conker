/**
 * sub_00538F63
 * Continuation inside sub_00538E00's surface-state command loop.
 */
void sub_00538F63(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp;
    conker_trace_point(0x53D7E163);

    ecx = 0;
    SET_LO8(ecx, MEM8(esi + 0x545CD0));
    esi = MEM32(esp + 0x20);
    ecx = ecx & 0x3C;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx >> 3;
    g_seh_ebp = ebp;
    sub_00538F8B();
}
