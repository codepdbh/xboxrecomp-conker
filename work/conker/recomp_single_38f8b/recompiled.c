/**
 * sub_00538F8B
 * Original: 0x00538F8B - 0x0053902A (159 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538F8B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538F8B: ;
    conker_trace_point(0x53D7E18B);
    eax = MEM32(ebp + 0x94C);
    MEM32(edx + 8) = 0x4020C;
    eax = eax << 0x10;
    ecx = ecx & 0xFFFF;
    eax = eax | ecx;
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 0x10) = ebx;
    MEM32(edx + 0x14) = edi;
    edx = edx + 0x20;
    eax = 0x40110;
    MEM32(edx + -8) = eax;
    MEM32(edx + -4) = edi;
    MEM32(edx) = ebx;
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = 0x40210;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 0x10) = ebx;
    MEM32(edx + 0x14) = edi;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = edi;
    edx = edx + 0x20;
    MEM32(edx) = ebx;
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = 0x40214;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ebx;
    MEM32(edx + 0x14) = edi;
    MEM32(edx + 0x18) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 0x1C) = edi;
    edx = edx + 0x20;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) { g_seh_ebp = ebp; sub_00538F25(); return; } /* jne: not equal / not zero */

loc_0053900D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00539013: ;
    if (CMP_EQ(MEM32(0x549C34), edi)) { g_seh_ebp = ebp; sub_0053902A(); return; } /* je: equal / zero */

loc_0053901B: ;
    if (CMP_EQ(MEM32(ebp + 0x1A08), edi)) { g_seh_ebp = ebp; sub_0053902A(); return; } /* je: equal / zero */

loc_00539023: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_0053902C(); return; /* tail jmp 0x0053902C */

}
