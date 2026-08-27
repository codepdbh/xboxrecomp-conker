/**
 * sub_0053C2D1
 * Original: 0x0053C2D1 - 0x0053C2F6 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C2D1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C2D1: ;
    edi = MEM32(0x561150);
    esi = esi + 0x1DCC;
    /* nop */

loc_0053C2E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0053C2EB: ;
    if (TEST_NZ(eax, eax)) goto loc_0053C2E0; /* jne: not equal / not zero */

loc_0053C2EF: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
