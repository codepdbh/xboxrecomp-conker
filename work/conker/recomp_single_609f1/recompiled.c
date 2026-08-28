/**
 * sub_000609F1
 * Original: 0x000609F1 - 0x00060AE9 (248 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000609F1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000609F1: ;
    if (TEST_NZ(eax, eax)) goto loc_00060AE8; /* jne: not equal / not zero */

loc_000609F9: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00060A07; /* jne: not equal / not zero */

loc_00060A02: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00060A07: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00060A58; /* je: equal / zero */

loc_00060A30: ;
    if (CMP_B(MEM32(esi + 0x80), 0x138)) goto loc_00060A58; /* jb: below (unsigned <) */

loc_00060A3C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00060A46: ;
    PUSH32(esp, 0x138);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00060A51: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00060A7C; /* jne: not equal / not zero */

loc_00060A58: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00060A6A: ;
    PUSH32(esp, 0x138);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00060A75: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00060A8D; /* je: equal / zero */

loc_00060A7C: ;
    PUSH32(esp, 0x5D88B8);
    PUSH32(esp, 0); sub_00060CF0(); /* call 0x00060CF0 */

loc_00060A86: ;
    MEM32(0x847160) = eax;
    goto loc_00060A97;

loc_00060A8D: ;
    MEM32(0x847160) = 0;

loc_00060A97: ;
    PUSH32(esp, 0); sub_000615D0(); /* call 0x000615D0 */

loc_00060A9C: ;
    esi = eax;
    MEM8(esi + 0x24) = 0;

loc_00060AA2: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_00060AB1; /* je: equal / zero */

loc_00060AAB: ;
    ecx = MEM32(eax + 0x48);
    ecx = ecx - MEM32(esi + 0x1C);

loc_00060AB1: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00060AD6; /* jne: not equal / not zero */

loc_00060AB8: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_00060AD6; /* je: equal / zero */

loc_00060ABF: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx);
    if (CMP_EQ(eax, edx)) goto loc_00060AD6; /* je: equal / zero */

loc_00060AC8: ;
    edi = MEM32(eax + 8);
    ebp = MEM32(edi + 0x48);
    eax = MEM32(eax);
    ecx = ecx + ebp;
    if (CMP_NE(eax, edx)) goto loc_00060AC8; /* jne: not equal / not zero */

loc_00060AD6: ;
    if (TEST_Z(ecx, ecx)) goto loc_00060AE1; /* je: equal / zero */

loc_00060ADA: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_00060ADF: ;
    goto loc_00060AA2;

loc_00060AE1: ;
    POP32(esp, edi);
    MEM8(esi + 0x24) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00060AE8: ;
    esp += 4; return; /* ret */

}
