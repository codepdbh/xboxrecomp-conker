/**
 * sub_005399FF
 * Original: 0x005399FF - 0x00539B0F (272 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005399FF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005399FF: ;
    MEM32(ebp) = MEM32(ebp) + 0x80000;
    eax = MEM32(ebx);
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_00539A1C; /* jb: below (unsigned <) */

loc_00539A0D: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00539A1C: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 4);
    ebx = esi + 0x206C;
    ebx = ebx << 6;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = eax + 0xC;
    if (TEST_Z(ecx, ecx)) goto loc_00539A8A; /* je: equal / zero */

loc_00539A3D: ;
    edx = ZX8(MEM8(ebp + 0x13));
    eax = ecx;
    ecx = ecx >> 0xC;
    eax = eax & 0xFFF;
    ecx = ecx & 0xFFF;
    eax++;
    ecx++;
    MEM32(esp + 0x1C) = ecx;
    edx++;
    ecx = esi;
    ecx = ecx << 6;
    edi = ecx + 0x41B10;
    edx = edx << 6;
    MEM32(ebx) = edi;
    edi = MEM32(esp + 0x10);
    edx = edx << 0x10;
    ecx = ecx + 0x41B1C;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = eax << 0x10;
    eax = eax | ecx;
    MEM32(ebx + 0xC) = eax;
    ebx = ebx + 0x10;

loc_00539A8A: ;
    ebp = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + esi * 4 + 0xC);
    eax = ebp;
    eax = eax & 0x20F4;
    if (CMP_EQ(edx, eax)) goto loc_00539B03; /* je: equal / zero */

loc_00539AA0: ;
    if (TEST_Z(HI8(eax), 0x20)) goto loc_00539AC5; /* je: equal / zero */

loc_00539AA5: ;
    ebp = ebp & 0xFF00;
    eax = eax & 0xFFFFDFFFu;
    if (CMP_B(ebp, 0x2A00)) goto loc_00539AC5; /* jb: below (unsigned <) */

loc_00539AB8: ;
    if (CMP_A(ebp, 0x3100)) goto loc_00539AC5; /* ja: above (unsigned >) */

loc_00539AC0: ;
    eax = eax | 0x40000000;

loc_00539AC5: ;
    edx = MEM32(0x5499F0);
    edx = edx | 0x4000;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ecx + esi * 4 + 0xC) = eax;
    MEM32(0x5499F0) = edx;
    if (TEST_NZ(edi, edi)) goto loc_00539B03; /* jne: not equal / not zero */

loc_00539ADF: ;
    eax = MEM32(ecx + esi * 4 + 0x774);
    esi = esi << 6;
    esi = esi + 0x41B0C;
    MEM32(ebx) = esi;
    MEM32(ebx + 4) = eax;
    eax = edx;
    ebx = ebx + 8;
    eax = eax | 0x800;
    MEM32(0x5499F0) = eax;

loc_00539B03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}
