/**
 * sub_00538F25
 * Original: 0x00538F25 - 0x00538F63 (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538F25(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538F25: ;
    conker_trace_point(0x53D7E125);
    esi = MEM32(esp + 0x20);
    MEM32(edx) = ebx;
    MEM32(edx + 4) = edi;
    if (CMP_NE(MEM32(esi + 0x10), edi)) { g_seh_ebp = ebp; sub_00538F83(); return; } /* jne: not equal / not zero */

loc_00538F33: ;
    ecx = MEM32(esi + 0xC);
    esi = ZX8(MEM8(esi + 0xD));
    ecx = ecx >> 0x14;
    ecx = ecx & 0xF;
    eax = 1;
    eax = eax << LO8(ecx);
    if (CMP_EQ(esi, 0xC)) { g_seh_ebp = ebp; sub_00538F7A(); return; } /* je: equal / zero */

loc_00538F4C: ;
    if (CMP_LE(esi, 0xD)) { g_seh_ebp = ebp; sub_00538F63(); return; } /* jle: less or equal (signed <=) */

loc_00538F51: ;
    if (CMP_G(esi, 0xF)) { g_seh_ebp = ebp; sub_00538F63(); return; } /* jg: greater (signed >) */

loc_00538F56: ;
    esi = MEM32(esp + 0x20);
    ecx = eax * 4;
    g_seh_ebp = ebp; sub_00538F8B(); return; /* tail jmp 0x00538F8B */

}
