/**
 * sub_0054025B
 * Original: 0x0054025B - 0x00540295 (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054025B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054025B: ;
    eax = edi;
    PUSH32(esp, 0); sub_00540370(); /* call 0x00540370 */

loc_00540262: ;
    if (TEST_Z(eax, eax)) {
        g_seh_ebp = ebp;
        sub_00540254();
        return;
    } /* je: equal / zero */

loc_00540266: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561168), _icall_esp); /* indirect call */
    }

loc_00540273: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -16));
    esi = edi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x540CA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56116C), _icall_esp); /* indirect call */
    }

loc_0054028A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561164), _icall_esp); /* indirect call */
    }

loc_00540291: ;
    g_seh_ebp = ebp;
    if (TEST_NZ(LO8(eax), LO8(eax))) {
        sub_0054029C();
        return;
    } /* jne: not equal / not zero */

    sub_00540295();
    return;

}
