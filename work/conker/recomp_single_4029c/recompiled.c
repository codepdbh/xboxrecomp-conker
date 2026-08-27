/**
 * sub_0054029C
 * Original: 0x0054029C - 0x00540340 (164 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054029C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054029C: ;
    MEM32(edi + 0x168) = MEM32(edi + 0x168) & 0;
    eax = edi + 0x164;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(eax) = 0x541660;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56112C), _icall_esp); /* indirect call */
    }

loc_005402B7: ;
    eax = edi;
    PUSH32(esp, 0); sub_005403B3(); /* call 0x005403B3 */

loc_005402BE: ;
    if (TEST_Z(eax, eax)) {
        g_seh_ebp = ebp;
        sub_00540295();
        return;
    } /* je: equal / zero */

loc_005402C2: ;
    eax = edi + 0x2DC;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = 2;
    edx = 0x100;

loc_005402D7: ;
    eax = 0; /* xor self */

loc_005402D9: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + eax;
    esi = 0xFFFFFF00u;
    MEM8(esi + ecx) = LO8(eax);
    esi = 0x100;
    MEM8(ecx) = LO8(eax);
    MEM8(esi + ecx) = LO8(eax);
    eax++;
    if (CMP_B(eax, edx)) goto loc_005402D9; /* jb: below (unsigned <) */

loc_005402F5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x300;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    if ((MEM32(ebp + -12) != 0)) goto loc_005402D7; /* jne: not equal / not zero */

loc_00540301: ;
    esi = MEM32(0x561174);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    SET_LO16(edx, 0x80C0);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 4);
    /* TODO: out dx, al */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0054031D: ;
    MEM8(ebp + -5) = MEM8(ebp + -5) | 0x1F;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0054032F: ;
    MEM32(edi + 0xA0) = ebx;
    PUSH32(esp, 0); sub_00540434(); /* call 0x00540434 */

loc_0054033A: ;
    /* neg/sbb/neg reduces the return value to a boolean. */
    eax = eax ? 1u : 0u;
    g_seh_ebp = ebp;
    sub_00540340();
    return;

}
