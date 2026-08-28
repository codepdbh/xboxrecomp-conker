/**
 * sub_0053A01F
 * Original: 0x0053A01F - 0x0053A05A (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A01F(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A01F: ;
    eax = MEM32(esp + 0x20);
    ecx = esi;
    ecx = ecx << 4;
    MEM32(ebx) = edx;
    edx = ecx;
    ecx = ecx >> 2;
    esi = ebp;
    edi = ebx + 0x1B80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x1C00) = eax;
    MEM32(ebx + 0x1C04) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}
