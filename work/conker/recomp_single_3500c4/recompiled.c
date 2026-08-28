/**
 * sub_003500C4
 * Original: 0x003500C4 - 0x003500E3 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003500C4(void)
{
    int _flags = 0; /* fallback flag var */

loc_003500C4: ;
    if (TEST_Z(esi, esi)) { sub_003500E3(); return; } /* je: equal / zero */

loc_003500C8: ;
    ecx = MEM32(eax + 0xC);
    ecx = ecx - esi;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(edx, ecx)) { sub_003500E3(); return; } /* jae: above or equal (unsigned >=) */

loc_003500D4: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(edi);
    MEM32(ecx) = edx;
    ecx = ecx + 4;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
