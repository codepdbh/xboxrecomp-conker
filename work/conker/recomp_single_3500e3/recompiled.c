/**
 * sub_003500E3
 * Original: 0x003500E3 - 0x003500F5 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003500E3(void)
{

loc_003500E3: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_003500F3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
