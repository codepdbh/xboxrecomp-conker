/**
 * Burnout 3 - Recompiled code chunk 2
 * Functions: 250 (0x0002C3E0 - 0x00036BA0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0002C3E0
 * Original: 0x0002C3E0 - 0x0002C42A (74 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C3E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002C3E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = esi - edi;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 1)) goto loc_0002C427; /* jle: less or equal (signed <=) */

loc_0002C3F6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);

loc_0002C3FB: ;
    eax = MEM32(edi + esi + -4);
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = esi + -4;
    edx = (uint32_t)((int32_t)edx >> 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(edi + esi + -4) = ecx;
    PUSH32(esp, 0); sub_0002CCB0(); /* call 0x0002CCB0 */

loc_0002C416: ;
    esi = esi - 4;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    esp = esp + 0x14;
    if (CMP_G(eax, 1)) goto loc_0002C3FB; /* jg: greater (signed >) */

loc_0002C426: ;
    POP32(esp, ebx);

loc_0002C427: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C430
 * Original: 0x0002C430 - 0x0002C592 (354 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C430: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    esp = esp - 0xC;
    if (CMP_EQ(ecx, eax)) goto loc_0002C58E; /* je: equal / zero */

loc_0002C443: ;
    PUSH32(esp, ebx);
    ebx = ecx + 4;
    if (CMP_EQ(ebx, eax)) goto loc_0002C58D; /* je: equal / zero */

loc_0002C44F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0002C458;

loc_0002C454: ;
    ecx = MEM32(esp + 0x20);

loc_0002C458: ;
    edi = MEM32(ebx);
    eax = MEM32(edi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0002C4B7; /* je: equal / zero */

loc_0002C463: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002C496; /* jge: greater or equal (signed >=) */

loc_0002C468: ;
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0002C4B7; /* je: equal / zero */

loc_0002C46F: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C487; /* jne: not equal / not zero */

loc_0002C479: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002C47E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C487; /* jne: not equal / not zero */

loc_0002C482: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002C48D;

loc_0002C487: ;
    esi = MEM32(esi + 0xF4);

loc_0002C48D: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x20);
    MEM32(eax) = esi;

loc_0002C496: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edi + 0x14);
    eax = MEM32(eax);
    (void)0; /* cmp eax, MEM32(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, MEM32(edx))) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002C4B7; /* je: equal / zero */

loc_0002C4A7: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    eax = ebx + 4;
    if (CMP_EQ(ecx, ebx)) goto loc_0002C57B; /* je: equal / zero */

loc_0002C4B2: ;
    goto loc_0002C56C;

loc_0002C4B7: ;
    MEM32(esp + 0x10) = ebx;
    ecx = ebx;
    /* nop */

loc_0002C4C0: ;
    edi = MEM32(ebx);
    eax = MEM32(edi + 0x14);
    edx = MEM32(ecx + -4);
    ecx = ecx - 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(eax, eax)) goto loc_0002C561; /* je: equal / zero */

loc_0002C4DB: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002C53C; /* jge: greater or equal (signed >=) */

loc_0002C4E0: ;
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0002C561; /* je: equal / zero */

loc_0002C4E7: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C531; /* jne: not equal / not zero */

loc_0002C4F1: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0002C55C; /* je: equal / zero */

loc_0002C4F8: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x18);
    ebp = esi + 0xF0;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00400D90(); /* call 0x00400D90 */

loc_0002C50C: ;
    SET_LO8(eax, MEM8(ebp));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0002C526; /* jne: not equal / not zero */

loc_0002C516: ;
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esi + 0x144) = xmm0; /* movss */

loc_0002C526: ;
    ecx = MEM32(esp + 0x14);
    MEM8(esi + 0x154) = 1;

loc_0002C531: ;
    esi = MEM32(esi + 0xF4);

loc_0002C537: ;
    eax = MEM32(edi + 0x14);
    MEM32(eax) = esi;

loc_0002C53C: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x14);
    edx = MEM32(edi + 0x14);
    esi = MEM32(eax);
    edx = MEM32(edx);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_G(edx, esi)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002C561; /* je: equal / zero */

loc_0002C553: ;
    MEM32(esp + 0x10) = ecx;
    goto loc_0002C4C0;

loc_0002C55C: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002C537;

loc_0002C561: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(ecx, ebx)) goto loc_0002C57B; /* je: equal / zero */

loc_0002C569: ;
    eax = ebx + 4;

loc_0002C56C: ;
    if (CMP_EQ(ebx, eax)) goto loc_0002C57B; /* je: equal / zero */

loc_0002C570: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002CE50(); /* call 0x0002CE50 */

loc_0002C578: ;
    esp = esp + 0xC;

loc_0002C57B: ;
    eax = MEM32(esp + 0x24);
    ebx = ebx + 4;
    if (CMP_NE(ebx, eax)) goto loc_0002C454; /* jne: not equal / not zero */

loc_0002C58A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0002C58D: ;
    POP32(esp, ebx);

loc_0002C58E: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0002C5A0
 * Original: 0x0002C5A0 - 0x0002C72D (397 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C5A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C5A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = ebx;
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = edi + eax * 4;
    PUSH32(esp, ecx);
    eax = ebx + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0002CA00(); /* call 0x0002CA00 */

loc_0002C5CC: ;
    esp = esp + 0x10;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    ebp = esi + 4;
    if (CMP_AE(edi, esi)) goto loc_0002C5FB; /* jae: above or equal (unsigned >=) */

loc_0002C5D6: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + -4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C5E1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C5FB; /* jne: not equal / not zero */

loc_0002C5E5: ;
    eax = MEM32(esi + -4);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C5F0: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C5FB; /* jne: not equal / not zero */

loc_0002C5F4: ;
    esi = esi + 0xFFFFFFFCu;
    if (CMP_B(edi, esi)) goto loc_0002C5D6; /* jb: below (unsigned <) */

loc_0002C5FB: ;
    if (CMP_AE(ebp, ebx)) goto loc_0002C625; /* jae: above or equal (unsigned >=) */

loc_0002C5FF: ;
    /* nop */

loc_0002C600: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C60B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C625; /* jne: not equal / not zero */

loc_0002C60F: ;
    eax = MEM32(ebp);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C61A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C625; /* jne: not equal / not zero */

loc_0002C61E: ;
    ebp = ebp + 4;
    if (CMP_B(ebp, ebx)) goto loc_0002C600; /* jb: below (unsigned <) */

loc_0002C625: ;
    ebx = esi;
    edi = ebp;
    MEM32(esp + 0x10) = ebx;
    /* nop */

loc_0002C630: ;
    if (CMP_AE(edi, MEM32(esp + 0x20))) goto loc_0002C66A; /* jae: above or equal (unsigned >=) */

loc_0002C636: ;
    eax = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C640: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C65F; /* jne: not equal / not zero */

loc_0002C644: ;
    eax = MEM32(esi);
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C64E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C66A; /* jne: not equal / not zero */

loc_0002C652: ;
    edx = MEM32(edi);
    eax = ebp;
    ecx = MEM32(eax);
    MEM32(eax) = edx;
    ebp = ebp + 4;
    MEM32(edi) = ecx;

loc_0002C65F: ;
    eax = MEM32(esp + 0x20);
    edi = edi + 4;
    if (CMP_B(edi, eax)) goto loc_0002C636; /* jb: below (unsigned <) */

loc_0002C66A: ;
    if (CMP_BE(ebx, MEM32(esp + 0x1C))) goto loc_0002C6B9; /* jbe: below or equal (unsigned <=) */

loc_0002C670: ;
    ebx = ebx + 0xFFFFFFFCu;

loc_0002C673: ;
    eax = MEM32(esi);
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C67D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C69B; /* jne: not equal / not zero */

loc_0002C681: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C68B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C6B1; /* jne: not equal / not zero */

loc_0002C68F: ;
    ecx = MEM32(ebx);
    eax = MEM32(esi + -4);
    esi = esi - 4;
    MEM32(esi) = ecx;
    MEM32(ebx) = eax;

loc_0002C69B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    eax = eax - 4;
    ebx = ebx - 4;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(ecx, eax)) goto loc_0002C673; /* jb: below (unsigned <) */

loc_0002C6B1: ;
    ebx = MEM32(esp + 0x10);
    (void)0; /* cmp ebx, MEM32(esp + 0x1C) - flags set for next jcc */

loc_0002C6B9: ;
    eax = MEM32(esp + 0x20);
    if (CMP_NE(ebx, MEM32(esp + 0x1C))) goto loc_0002C6EF; /* jne: not equal / not zero */

loc_0002C6BF: ;
    if (CMP_EQ(edi, eax)) { sub_0002C72D(); return; } /* je: equal / zero */

loc_0002C6C3: ;
    if (CMP_EQ(ebp, edi)) goto loc_0002C6D1; /* je: equal / zero */

loc_0002C6C7: ;
    edx = MEM32(ebp);
    eax = MEM32(esi);
    MEM32(esi) = edx;
    MEM32(ebp) = eax;

loc_0002C6D1: ;
    eax = edi;
    ebx = MEM32(eax);
    ecx = esi;
    edx = MEM32(ecx);
    MEM32(ecx) = ebx;
    ebx = MEM32(esp + 0x10);
    ebp = ebp + 4;
    edi = edi + 4;
    esi = esi + 4;
    MEM32(eax) = edx;
    goto loc_0002C630;

loc_0002C6EF: ;
    ebx = ebx - 4;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(edi, eax)) goto loc_0002C71B; /* jne: not equal / not zero */

loc_0002C6FA: ;
    esi = esi - 4;
    if (CMP_EQ(ebx, esi)) goto loc_0002C709; /* je: equal / zero */

loc_0002C701: ;
    ecx = MEM32(esi);
    eax = MEM32(ebx);
    MEM32(ebx) = ecx;
    MEM32(esi) = eax;

loc_0002C709: ;
    edx = MEM32(ebp + -4);
    eax = MEM32(esi);
    ebp = ebp - 4;
    MEM32(esi) = edx;
    MEM32(ebp) = eax;
    goto loc_0002C630;

loc_0002C71B: ;
    edx = MEM32(ebx);
    eax = edi;
    ecx = MEM32(eax);
    MEM32(eax) = edx;
    edi = edi + 4;
    MEM32(ebx) = ecx;
    goto loc_0002C630;

}

/**
 * sub_0002C740
 * Original: 0x0002C740 - 0x0002C78A (74 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C740(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002C740: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = esi - edi;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 1)) goto loc_0002C787; /* jle: less or equal (signed <=) */

loc_0002C756: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);

loc_0002C75B: ;
    eax = MEM32(edi + esi + -4);
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = esi + -4;
    edx = (uint32_t)((int32_t)edx >> 2);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(edi + esi + -4) = ecx;
    PUSH32(esp, 0); sub_0002CDE0(); /* call 0x0002CDE0 */

loc_0002C776: ;
    esi = esi - 4;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    esp = esp + 0x10;
    if (CMP_G(eax, 1)) goto loc_0002C75B; /* jg: greater (signed >) */

loc_0002C786: ;
    POP32(esp, ebx);

loc_0002C787: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C790
 * Original: 0x0002C790 - 0x0002C812 (130 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C790: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(ebp, eax)) goto loc_0002C810; /* je: equal / zero */

loc_0002C79D: ;
    PUSH32(esp, esi);
    esi = ebp + 4;
    if (CMP_EQ(esi, eax)) goto loc_0002C80F; /* je: equal / zero */

loc_0002C7A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0002C7A7: ;
    eax = MEM32(ebp);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C7B2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002C7C6; /* je: equal / zero */

loc_0002C7B6: ;
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    eax = esi + 4;
    if (CMP_EQ(ebp, esi)) goto loc_0002C802; /* je: equal / zero */

loc_0002C7BD: ;
    if (CMP_EQ(esi, eax)) goto loc_0002C802; /* je: equal / zero */

loc_0002C7C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    goto loc_0002C7FA;

loc_0002C7C6: ;
    eax = MEM32(esi + -4);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    edi = esi + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C7D4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002C802; /* je: equal / zero */

loc_0002C7D8: ;
    eax = MEM32(edi + -4);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    ebx = edi;
    edi = edi - 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002C7E8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002C7D8; /* jne: not equal / not zero */

loc_0002C7EC: ;
    if (CMP_EQ(ebx, esi)) goto loc_0002C802; /* je: equal / zero */

loc_0002C7F0: ;
    eax = esi + 4;
    if (CMP_EQ(esi, eax)) goto loc_0002C802; /* je: equal / zero */

loc_0002C7F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);

loc_0002C7FA: ;
    PUSH32(esp, 0); sub_0002CE50(); /* call 0x0002CE50 */

loc_0002C7FF: ;
    esp = esp + 0xC;

loc_0002C802: ;
    eax = MEM32(esp + 0x18);
    esi = esi + 4;
    if (CMP_NE(esi, eax)) goto loc_0002C7A7; /* jne: not equal / not zero */

loc_0002C80D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0002C80F: ;
    POP32(esp, esi);

loc_0002C810: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C820
 * Original: 0x0002C820 - 0x0002C8AC (140 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C820: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ebp;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 0x28)) { sub_0002C8AC(); return; } /* jle: less or equal (signed <=) */

loc_0002C836: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    edx = edx & 7;
    eax = eax + edx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    edx = eax * 8;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, edi);
    edx = edx + ecx;
    esi = eax * 4;
    eax = esi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0002CAF0(); /* call 0x0002CAF0 */

loc_0002C86B: ;
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    ecx = esi + ebx;
    PUSH32(esp, ecx);
    eax = ebx;
    eax = eax - esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002CAF0(); /* call 0x0002CAF0 */

loc_0002C87F: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = ecx;
    ebp = ebp - esi;
    eax = eax - edx;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002CAF0(); /* call 0x0002CAF0 */

loc_0002C896: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002CAF0(); /* call 0x0002CAF0 */

loc_0002C8A3: ;
    esp = esp + 0x40;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C8D0
 * Original: 0x0002C8D0 - 0x0002C90F (63 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C8D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi = edi - ebx;
    edi = (uint32_t)((int32_t)edi >> 2);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    if (CMP_LE(esi & esi, 0)) goto loc_0002C90B; /* jle: less or equal (signed <=) */

loc_0002C8ED: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);

loc_0002C8F2: ;
    eax = MEM32(ebx + esi * 4 + -4);
    esi--;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_0002CB40(); /* call 0x0002CB40 */

loc_0002C903: ;
    esp = esp + 0xC;
    if (CMP_G(esi & esi, 0)) goto loc_0002C8F2; /* jg: greater (signed >) */

loc_0002C90A: ;
    POP32(esp, ebp);

loc_0002C90B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C910
 * Original: 0x0002C910 - 0x0002C99C (140 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C910: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ebp;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 0x28)) { sub_0002C99C(); return; } /* jle: less or equal (signed <=) */

loc_0002C926: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    edx = edx & 7;
    eax = eax + edx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    edx = eax * 8;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, edi);
    edx = edx + ecx;
    esi = eax * 4;
    eax = esi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0002CBD0(); /* call 0x0002CBD0 */

loc_0002C95B: ;
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    ecx = esi + ebx;
    PUSH32(esp, ecx);
    eax = ebx;
    eax = eax - esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002CBD0(); /* call 0x0002CBD0 */

loc_0002C96F: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = ecx;
    ebp = ebp - esi;
    eax = eax - edx;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002CBD0(); /* call 0x0002CBD0 */

loc_0002C986: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002CBD0(); /* call 0x0002CBD0 */

loc_0002C993: ;
    esp = esp + 0x40;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C9C0
 * Original: 0x0002C9C0 - 0x0002C9FD (61 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C9C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C9C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi = edi - ebx;
    edi = (uint32_t)((int32_t)edi >> 2);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    if (CMP_LE(esi & esi, 0)) goto loc_0002C9F9; /* jle: less or equal (signed <=) */

loc_0002C9DD: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);

loc_0002C9E2: ;
    eax = MEM32(ebx + esi * 4 + -4);
    esi--;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0002CCB0(); /* call 0x0002CCB0 */

loc_0002C9F1: ;
    esp = esp + 0x14;
    if (CMP_G(esi & esi, 0)) goto loc_0002C9E2; /* jg: greater (signed >) */

loc_0002C9F8: ;
    POP32(esp, ebp);

loc_0002C9F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CA00
 * Original: 0x0002CA00 - 0x0002CA8C (140 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CA00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CA00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ebp;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 0x28)) { sub_0002CA8C(); return; } /* jle: less or equal (signed <=) */

loc_0002CA16: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    edx = edx & 7;
    eax = eax + edx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    edx = eax * 8;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, edi);
    edx = edx + ecx;
    esi = eax * 4;
    eax = esi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0002CD80(); /* call 0x0002CD80 */

loc_0002CA4B: ;
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    ecx = esi + ebx;
    PUSH32(esp, ecx);
    eax = ebx;
    eax = eax - esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002CD80(); /* call 0x0002CD80 */

loc_0002CA5F: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = ecx;
    ebp = ebp - esi;
    eax = eax - edx;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002CD80(); /* call 0x0002CD80 */

loc_0002CA76: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002CD80(); /* call 0x0002CD80 */

loc_0002CA83: ;
    esp = esp + 0x40;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CAB0
 * Original: 0x0002CAB0 - 0x0002CAEE (62 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CAB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CAB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi = edi - ebx;
    edi = (uint32_t)((int32_t)edi >> 2);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    if (CMP_LE(esi & esi, 0)) goto loc_0002CAEA; /* jle: less or equal (signed <=) */

loc_0002CACD: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);

loc_0002CAD2: ;
    eax = MEM32(ebx + esi * 4 + -4);
    esi--;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0002CDE0(); /* call 0x0002CDE0 */

loc_0002CAE2: ;
    esp = esp + 0x10;
    if (CMP_G(esi & esi, 0)) goto loc_0002CAD2; /* jg: greater (signed >) */

loc_0002CAE9: ;
    POP32(esp, ebp);

loc_0002CAEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CAF0
 * Original: 0x0002CAF0 - 0x0002CB3D (77 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CAF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002CAF0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    esi = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    if (CMP_BE(esi, MEM32(edx + 0x1C))) goto loc_0002CB0E; /* jbe: below or equal (unsigned <=) */

loc_0002CB06: ;
    esi = MEM32(ecx);
    edx = MEM32(eax);
    MEM32(eax) = esi;
    MEM32(ecx) = edx;

loc_0002CB0E: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(eax);
    edi = MEM32(edx);
    edi = MEM32(edi + 0x1C);
    if (CMP_BE(edi, MEM32(esi + 0x1C))) goto loc_0002CB26; /* jbe: below or equal (unsigned <=) */

loc_0002CB1E: ;
    edi = MEM32(eax);
    esi = MEM32(edx);
    MEM32(edx) = edi;
    MEM32(eax) = esi;

loc_0002CB26: ;
    edx = MEM32(ecx);
    esi = MEM32(eax);
    esi = MEM32(esi + 0x1C);
    if (CMP_BE(esi, MEM32(edx + 0x1C))) goto loc_0002CB3A; /* jbe: below or equal (unsigned <=) */

loc_0002CB32: ;
    esi = MEM32(ecx);
    edx = MEM32(eax);
    MEM32(eax) = esi;
    MEM32(ecx) = edx;

loc_0002CB3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CB40
 * Original: 0x0002CB40 - 0x0002CBC5 (133 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CB40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CB40: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + esi + 2;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi;
    if (CMP_GE(eax, edx)) goto loc_0002CB84; /* jge: greater or equal (signed >=) */

loc_0002CB58: ;
    goto loc_0002CB60;

    /* nop */

loc_0002CB60: ;
    ebx = MEM32(ecx + eax * 4);
    ebp = MEM32(ecx + eax * 4 + -4);
    ebx = MEM32(ebx + 0x1C);
    if (CMP_BE(ebx, MEM32(ebp + 0x1C))) goto loc_0002CB70; /* jbe: below or equal (unsigned <=) */

loc_0002CB6F: ;
    eax--;

loc_0002CB70: ;
    ebx = MEM32(ecx + eax * 4);
    MEM32(ecx + esi * 4) = ebx;
    esi = eax;
    eax = eax + eax + 2;
    if (CMP_L(eax, edx)) goto loc_0002CB60; /* jl: less (signed <) */

loc_0002CB80: ;
    ebx = MEM32(esp + 0x18);

loc_0002CB84: ;
    if (CMP_NE(eax, edx)) goto loc_0002CB90; /* jne: not equal / not zero */

loc_0002CB86: ;
    eax = MEM32(ecx + edx * 4 + -4);
    MEM32(ecx + esi * 4) = eax;
    esi = edx + -1;

loc_0002CB90: ;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_GE(edi, esi)) goto loc_0002CBBD; /* jge: greater or equal (signed >=) */

loc_0002CB9C: ;
    /* nop */

loc_0002CBA0: ;
    edx = MEM32(ecx + eax * 4);
    edx = MEM32(edx + 0x1C);
    if (CMP_BE(edx, MEM32(ebx + 0x1C))) goto loc_0002CBBD; /* jbe: below or equal (unsigned <=) */

loc_0002CBAB: ;
    edx = MEM32(ecx + eax * 4);
    MEM32(ecx + esi * 4) = edx;
    esi = eax;
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_L(edi, esi)) goto loc_0002CBA0; /* jl: less (signed <) */

loc_0002CBBD: ;
    POP32(esp, edi);
    MEM32(ecx + esi * 4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CBD0
 * Original: 0x0002CBD0 - 0x0002CCA2 (210 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CBD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CBD0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi);
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0002CC19; /* je: equal / zero */

loc_0002CBE6: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002CC00; /* jge: greater or equal (signed >=) */

loc_0002CBEB: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0002CC19; /* je: equal / zero */

loc_0002CBF2: ;
    PUSH32(esp, 0); sub_00021D40(); /* call 0x00021D40 */

loc_0002CBF7: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 0x10);

loc_0002CC00: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(ebx + 0x14);
    eax = MEM32(eax);
    (void)0; /* cmp eax, MEM32(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, MEM32(edx))) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CC19; /* je: equal / zero */

loc_0002CC11: ;
    edx = MEM32(ecx);
    eax = MEM32(edi);
    MEM32(edi) = edx;
    MEM32(ecx) = eax;

loc_0002CC19: ;
    ebx = MEM32(edi);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    esi = MEM32(ebp);
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0002CC5F; /* je: equal / zero */

loc_0002CC2A: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002CC44; /* jge: greater or equal (signed >=) */

loc_0002CC2F: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0002CC5F; /* je: equal / zero */

loc_0002CC36: ;
    PUSH32(esp, 0); sub_00021D40(); /* call 0x00021D40 */

loc_0002CC3B: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 0x14);

loc_0002CC44: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(ebx + 0x14);
    eax = MEM32(eax);
    (void)0; /* cmp eax, MEM32(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, MEM32(edx))) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CC5F; /* je: equal / zero */

loc_0002CC55: ;
    edx = MEM32(edi);
    eax = MEM32(ebp);
    MEM32(ebp) = edx;
    MEM32(edi) = eax;

loc_0002CC5F: ;
    esi = MEM32(edi);
    eax = MEM32(esi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(ecx);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_0002CC9E; /* je: equal / zero */

loc_0002CC6B: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002CC85; /* jge: greater or equal (signed >=) */

loc_0002CC70: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0002CC9E; /* je: equal / zero */

loc_0002CC77: ;
    PUSH32(esp, 0); sub_00021D40(); /* call 0x00021D40 */

loc_0002CC7C: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 0x10);

loc_0002CC85: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(ebx + 0x14);
    eax = MEM32(eax);
    (void)0; /* cmp eax, MEM32(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, MEM32(edx))) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CC9E; /* je: equal / zero */

loc_0002CC96: ;
    edx = MEM32(ecx);
    eax = MEM32(edi);
    MEM32(edi) = edx;
    MEM32(ecx) = eax;

loc_0002CC9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CCB0
 * Original: 0x0002CCB0 - 0x0002CD7C (204 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CCB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CCB0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + eax + 2;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(edi, ecx)) goto loc_0002CD46; /* jge: greater or equal (signed >=) */

loc_0002CCCD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_0002CCD0: ;
    eax = MEM32(ebp + edi * 4 + -4);
    ebx = MEM32(ebp + edi * 4);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0002CD2C; /* je: equal / zero */

loc_0002CCE3: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002CD16; /* jge: greater or equal (signed >=) */

loc_0002CCE8: ;
    esi = MEM32(ebx + 4);
    if (TEST_Z(esi, esi)) goto loc_0002CD2C; /* je: equal / zero */

loc_0002CCEF: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002CD0B; /* jne: not equal / not zero */

loc_0002CCF9: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002CCFE: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(esp + 0x24);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002CD0B; /* jne: not equal / not zero */

loc_0002CD06: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002CD11;

loc_0002CD0B: ;
    esi = MEM32(esi + 0xF4);

loc_0002CD11: ;
    edx = MEM32(ebx + 0x14);
    MEM32(edx) = esi;

loc_0002CD16: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x14);
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax);
    (void)0; /* cmp eax, MEM32(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax, MEM32(edx))) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CD2C; /* je: equal / zero */

loc_0002CD2B: ;
    edi--;

loc_0002CD2C: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(ebp + edi * 4);
    MEM32(esp + 0x20) = edi;
    edi = edi + edi + 2;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(ebp + eax * 4) = edx;
    if (CMP_L(edi, ecx)) goto loc_0002CCD0; /* jl: less (signed <) */

loc_0002CD44: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0002CD46: ;
    if (CMP_NE(edi, ecx)) goto loc_0002CD59; /* jne: not equal / not zero */

loc_0002CD48: ;
    edx = MEM32(ebp + ecx * 4 + -4);
    eax = MEM32(esp + 0x18);
    ecx--;
    MEM32(ebp + eax * 4) = edx;
    MEM32(esp + 0x18) = ecx;

loc_0002CD59: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002CF10(); /* call 0x0002CF10 */

loc_0002CD73: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0002CD80
 * Original: 0x0002CD80 - 0x0002CDD5 (85 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CD80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002CD80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002CD94: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CDA0; /* je: equal / zero */

loc_0002CD98: ;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    MEM32(esi) = ecx;
    MEM32(edi) = eax;

loc_0002CDA0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002CDAF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CDBB; /* je: equal / zero */

loc_0002CDB3: ;
    ecx = MEM32(esi);
    eax = MEM32(ebx);
    MEM32(ebx) = ecx;
    MEM32(esi) = eax;

loc_0002CDBB: ;
    eax = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002CDC5: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CDD2; /* je: equal / zero */

loc_0002CDCA: ;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    MEM32(esi) = ecx;
    MEM32(edi) = eax;

loc_0002CDD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CDE0
 * Original: 0x0002CDE0 - 0x0002CE4D (109 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CDE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CDE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = eax;
    PUSH32(esp, esi);
    esi = ebx + ebx + 2;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ebx;
    if (CMP_GE(esi, ebp)) goto loc_0002CE22; /* jge: greater or equal (signed >=) */

loc_0002CDFA: ;
    /* nop */

loc_0002CE00: ;
    eax = MEM32(edi + esi * 4 + -4);
    ecx = MEM32(edi + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0002CE0D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CE12; /* je: equal / zero */

loc_0002CE11: ;
    esi--;

loc_0002CE12: ;
    eax = MEM32(edi + esi * 4);
    MEM32(edi + ebx * 4) = eax;
    ebx = esi;
    esi = esi + esi + 2;
    if (CMP_L(esi, ebp)) goto loc_0002CE00; /* jl: less (signed <) */

loc_0002CE22: ;
    if (CMP_NE(esi, ebp)) goto loc_0002CE2E; /* jne: not equal / not zero */

loc_0002CE24: ;
    ecx = MEM32(edi + ebp * 4 + -4);
    MEM32(edi + ebx * 4) = ecx;
    ebx = ebp + -1;

loc_0002CE2E: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0002CFB0(); /* call 0x0002CFB0 */

loc_0002CE45: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CE50
 * Original: 0x0002CE50 - 0x0002CF09 (185 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CE50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CE50: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    esi = esi - ebp;
    ecx = ebx;
    ecx = ecx - ebp;
    esi = (uint32_t)((int32_t)esi >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    eax = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0002CE82; /* je: equal / zero */

loc_0002CE77: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = edi;
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = edx;
    if (TEST_NZ(edx, edx)) goto loc_0002CE77; /* jne: not equal / not zero */

loc_0002CE82: ;
    if (CMP_GE(eax, ecx)) goto loc_0002CF01; /* jge: greater or equal (signed >=) */

loc_0002CE86: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0002CF01; /* jle: less or equal (signed <=) */

loc_0002CE8A: ;
    edx = ebp + eax * 4;
    MEM32(esp + 0x24) = eax;

loc_0002CE92: ;
    eax = MEM32(edx);
    MEM32(esp + 0x18) = eax;
    eax = edx + esi * 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edi = edx;
    if (CMP_NE(eax, ebx)) goto loc_0002CEA7; /* jne: not equal / not zero */

loc_0002CEA1: ;
    eax = esp + 0x20;
    goto loc_0002CEAF;

loc_0002CEA7: ;
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x28;

loc_0002CEAF: ;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, edx)) goto loc_0002CEED; /* je: equal / zero */

loc_0002CEB5: ;
    eax = MEM32(ecx);
    MEM32(edi) = eax;
    eax = ebx;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    edi = ecx;
    if (CMP_GE(esi, eax)) goto loc_0002CED3; /* jge: greater or equal (signed >=) */

loc_0002CEC6: ;
    ecx = ecx + esi * 4;
    MEM32(esp + 0x10) = ecx;
    eax = esp + 0x10;
    goto loc_0002CEE7;

loc_0002CED3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FFFFFFF);
    eax = eax + esi;
    eax = ebp + eax * 4;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;

loc_0002CEE7: ;
    ecx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_0002CEB5; /* jne: not equal / not zero */

loc_0002CEED: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    edx = edx - 4;
    eax--;
    MEM32(edi) = ecx;
    MEM32(esp + 0x24) = eax;
    if ((eax != 0)) goto loc_0002CE92; /* jne: not equal / not zero */

loc_0002CF01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0002CF10
 * Original: 0x0002CF10 - 0x0002CFB0 (160 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CF10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CF10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = ebp + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14);
    edi = (uint32_t)((int32_t)edi >> 1);
    if (CMP_GE(eax, ebp)) goto loc_0002CFA2; /* jge: greater or equal (signed >=) */

loc_0002CF28: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_0002CF30: ;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(ecx + edi * 4);
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0002CFA0; /* je: equal / zero */

loc_0002CF3E: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002CF71; /* jge: greater or equal (signed >=) */

loc_0002CF43: ;
    esi = MEM32(ebx + 4);
    if (TEST_Z(esi, esi)) goto loc_0002CFA0; /* je: equal / zero */

loc_0002CF4A: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002CF62; /* jne: not equal / not zero */

loc_0002CF54: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002CF59: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002CF62; /* jne: not equal / not zero */

loc_0002CF5D: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002CF68;

loc_0002CF62: ;
    esi = MEM32(esi + 0xF4);

loc_0002CF68: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = esi;

loc_0002CF71: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 0x14);
    edx = MEM32(ebx + 0x14);
    esi = MEM32(eax);
    edx = MEM32(edx);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_G(edx, esi)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CFA0; /* je: equal / zero */

loc_0002CF88: ;
    eax = MEM32(ecx + edi * 4);
    MEM32(ecx + ebp * 4) = eax;
    eax = edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    ebp = edi;
    edi = eax;
    if (CMP_L(MEM32(esp + 0x1C), ebp)) goto loc_0002CF30; /* jl: less (signed <) */

loc_0002CFA0: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0002CFA2: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(edx + ebp * 4) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CFB0
 * Original: 0x0002CFB0 - 0x0002D003 (83 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CFB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CFB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    if (CMP_GE(ebp, edi)) goto loc_0002CFF7; /* jge: greater or equal (signed >=) */

loc_0002CFCC: ;
    /* nop */

loc_0002CFD0: ;
    ecx = MEM32(ebx + esi * 4);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_0002CFDD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002CFF7; /* je: equal / zero */

loc_0002CFE1: ;
    eax = MEM32(ebx + esi * 4);
    MEM32(ebx + edi * 4) = eax;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edi = esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    esi = eax;
    if (CMP_L(ebp, edi)) goto loc_0002CFD0; /* jl: less (signed <) */

loc_0002CFF7: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ebx + edi * 4) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D010
 * Original: 0x0002D010 - 0x0002D096 (134 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D010: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    MEM32(esi + 4) = 0;
    ecx = MEM32(edi + 4);
    MEM32(esi + 8) = ecx;
    SET_LO8(edx, MEM8(edi + 8));
    MEM8(esi + 0xC) = LO8(edx);
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 0x14) = ecx;
    MEM8(esi + 0x18) = 0;
    MEM32(esi + 0x1C) = 0;
    edx = MEM32(edi + 0xC);
    eax = 0x780AB8;
    MEM32(esi + 0x20) = edx;
    edx = eax + 1;
    /* nop */

loc_0002D050: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002D050; /* jne: not equal / not zero */

loc_0002D057: ;
    eax = eax - edx;
    edx = eax;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebp);
    ebp = eax + 1;

loc_0002D062: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002D062; /* jne: not equal / not zero */

loc_0002D069: ;
    eax = eax - ebp;
    ebp = eax + edx + 1;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002D075: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_NZ(eax, eax)) { sub_0002D096(); return; } /* jne: not equal / not zero */

loc_0002D07F: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0002D08F: ;
    esp = esp + 0xC;
    eax = esi;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D0C0
 * Original: 0x0002D0C0 - 0x0002D14C (140 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002D0C0: ;
    SET_LO8(eax, MEM8(ebx + 0x18));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002D0EA; /* je: equal / zero */

loc_0002D0C8: ;
    SET_LO8(eax, MEM8(0x846FF9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002D14A; /* je: equal / zero */

loc_0002D0D1: ;
    eax = MEM32(ebx + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D2690);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002D0E5: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002D0EA: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x847024);
    PUSH32(esp, 0); sub_00017950(); /* call 0x00017950 */

loc_0002D0F9: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0002D149; /* je: equal / zero */

loc_0002D0FF: ;
    edx = MEM32(0x847024);
    edi = MEM32(ecx + 4);
    edx = MEM32(edx + 0x50);
    eax = MEM32(ebx + 4);
    ecx = MEM32(ecx + 8);
    esi = ebx + 0x1C;
    PUSH32(esp, esi);
    edx = edx + edi;
    PUSH32(esp, 0); sub_00400540(); /* call 0x00400540 */

loc_0002D11C: ;
    eax = MEM32(esi);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0002D149; /* je: equal / zero */

loc_0002D125: ;
    SET_LO8(eax, MEM8(0x846FF2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002D145; /* je: equal / zero */

loc_0002D12E: ;
    eax = MEM32(ebx + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D2660);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002D142: ;
    esp = esp + 8;

loc_0002D145: ;
    MEM8(ebx + 0x18) = 1;

loc_0002D149: ;
    POP32(esp, edi);

loc_0002D14A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D150
 * Original: 0x0002D150 - 0x0002D15D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D150(void)
{

loc_0002D150: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0002D160
 * Original: 0x0002D160 - 0x0002D194 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D160: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0002D182: ;
    if (TEST_NZ(eax, eax)) { sub_0002D194(); return; } /* jne: not equal / not zero */

loc_0002D186: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0002D18B: ;
    MEM32(esp + 0xC) = eax;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

}

/**
 * sub_0002D250
 * Original: 0x0002D250 - 0x0002D26C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D250(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0002D250: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002D262; /* jne: not equal / not zero */

loc_0002D25D: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002D262: ;
    xmm0 = MEMF(esi + 0x144); /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D270
 * Original: 0x0002D270 - 0x0002D2A0 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D270(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002D270: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) { sub_0002D2A0(); return; } /* je: equal / zero */

loc_0002D27A: ;
    ecx = MEM32(esi + 0x14);
    if (TEST_Z(ecx, ecx)) { sub_0002D2A0(); return; } /* je: equal / zero */

loc_0002D281: ;
    if (CMP_GE(MEM32(ecx), 0)) goto loc_0002D290; /* jge: greater or equal (signed >=) */

loc_0002D286: ;
    PUSH32(esp, 0); sub_00021D40(); /* call 0x00021D40 */

loc_0002D28B: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx) = eax;

loc_0002D290: ;
    eax = MEM32(esi + 0x14);
    if (CMP_NE(MEM32(eax), 0xFFFFFFFFu)) goto loc_0002D29C; /* jne: not equal / not zero */

loc_0002D298: ;
    MEM8(esi + 0x3C) = 1;

loc_0002D29C: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D2B0
 * Original: 0x0002D2B0 - 0x0002D2F0 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D2B0(void)
{

loc_0002D2B0: ;
    MEM32(esi + 0x2C) = eax;
    SET_LO8(eax, MEM8(esp + 4));
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x24) = edx;
    edx = MEM32(esp + 0x14);
    MEM8(esi + 0xA) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0002D2E1: ;
    edx = MEM32(0x7F9F60);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = edx;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0002D300
 * Original: 0x0002D300 - 0x0002D33E (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D300(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0002D300: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) { sub_0002D33E(); return; } /* je: equal / zero */

loc_0002D308: ;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, 0); sub_00034D60(); /* call 0x00034D60 */

loc_0002D318: ;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_0002D324: ;
    fp_push(MEMF(esp)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0002D338; /* jbe: below or equal (unsigned <=) */

loc_0002D32F: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002D338: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0002D350
 * Original: 0x0002D350 - 0x0002D38C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D350(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0002D350: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) { sub_0002D38C(); return; } /* je: equal / zero */

loc_0002D358: ;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, 0); sub_00034D60(); /* call 0x00034D60 */

loc_0002D368: ;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_0002D374: ;
    fp_push(MEMF(esp)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0002D386; /* jbe: below or equal (unsigned <=) */

loc_0002D37D: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002D386: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0002D3A0
 * Original: 0x0002D3A0 - 0x0002D3BB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D3A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D3A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) { sub_0002D3BB(); return; } /* je: equal / zero */

loc_0002D3A8: ;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00034D60(); return; /* tail jmp 0x00034D60 */

}

/**
 * sub_0002D3E0
 * Original: 0x0002D3E0 - 0x0002D431 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D3E0(void)
{
    float xmm0;

loc_0002D3E0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    SET_LO8(edx, 1);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    MEM32(eax + 0x2C) = esi;
    MEM32(eax + 0x30) = esi;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = esi;
    MEM32(eax) = 0x5D2738;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(edx);
    MEM8(eax + 9) = LO8(ecx);
    MEM8(eax + 0xA) = LO8(ecx);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM8(eax + 0x3C) = LO8(edx);
    MEM8(eax + 0x3D) = LO8(edx);
    MEM8(eax + 0x3E) = LO8(edx);
    MEM32(eax + 0x40) = ecx;
    MEMF(eax + 0x44) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D440
 * Original: 0x0002D440 - 0x0002D491 (81 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D440(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002D440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) { sub_0002D491(); return; } /* je: equal / zero */

loc_0002D44D: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x28));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0001A510(); /* call 0x0001A510 */

loc_0002D459: ;
    if (CMP_EQ(MEM8(esi + 0x28), LO8(ebx))) goto loc_0002D461; /* je: equal / zero */

loc_0002D45E: ;
    MEM8(esi + 0x28) = LO8(ebx);

loc_0002D461: ;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM8(eax + 5), LO8(ebx))) goto loc_0002D46E; /* jne: not equal / not zero */

loc_0002D469: ;
    if (CMP_EQ(MEM8(eax + 6), LO8(ebx))) { sub_0002D491(); return; } /* je: equal / zero */

loc_0002D46E: ;
    if (CMP_NE(MEM8(eax + 9), LO8(ebx))) { sub_0002D491(); return; } /* jne: not equal / not zero */

loc_0002D473: ;
    if (CMP_NE(MEM8(eax + 8), LO8(ebx))) { sub_0002D491(); return; } /* jne: not equal / not zero */

loc_0002D478: ;
    if (CMP_NE(MEM8(esp + 0xC), LO8(ebx))) goto loc_0002D48A; /* jne: not equal / not zero */

loc_0002D47E: ;
    PUSH32(esp, 0); sub_00021D10(); /* call 0x00021D10 */

loc_0002D483: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002D48A; /* jne: not equal / not zero */

loc_0002D487: ;
    MEM8(esi + 8) = LO8(ebx);

loc_0002D48A: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002D4E0
 * Original: 0x0002D4E0 - 0x0002D661 (385 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D4E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D4E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 1;
    edi = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x18) = esi;
    if (TEST_Z(ebp, ebp)) goto loc_0002D646; /* je: equal / zero */

loc_0002D4FF: ;
    SET_LO8(eax, MEM8(0x76F0E0));

loc_0002D504: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(0x847030));
    ecx = ecx & ebp;
    ecx--;
    if (CMP_A(ecx, 0x7F)) goto loc_0002D630; /* ja: above (unsigned >) */

loc_0002D51A: ;
    ecx = ZX8(MEM8(ecx + 0x2D68C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x2D668); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0002D528u) goto loc_0002D528;
    if (_jt == 0x0002D556u) goto loc_0002D556;
    if (_jt == 0x0002D583u) goto loc_0002D583;
    if (_jt == 0x0002D5CCu) goto loc_0002D5CC;
    if (_jt == 0x0002D616u) goto loc_0002D616;
    if (_jt == 0x0002D61Cu) goto loc_0002D61C;
    if (_jt == 0x0002D620u) goto loc_0002D620;
    if (_jt == 0x0002D628u) goto loc_0002D628;
    if (_jt == 0x0002D630u) goto loc_0002D630;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002D528: ;
    if (TEST_Z(ebx, ebx)) goto loc_0002D62E; /* je: equal / zero */

loc_0002D530: ;
    ecx = MEM32(ebx + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0002D62E; /* je: equal / zero */

loc_0002D53E: ;
    ecx = MEM32(ecx + 0x3F4);
    if (TEST_Z(ecx, ecx)) goto loc_0002D62E; /* je: equal / zero */

loc_0002D54C: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    goto loc_0002D62A;

loc_0002D556: ;
    if (TEST_Z(ebx, ebx)) goto loc_0002D62E; /* je: equal / zero */

loc_0002D55E: ;
    ecx = MEM32(ebx + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0002D62E; /* je: equal / zero */

loc_0002D56C: ;
    ecx = MEM32(ecx + 0x3F4);
    if (TEST_Z(ecx, ecx)) goto loc_0002D62E; /* je: equal / zero */

loc_0002D57A: ;
    (void)0; /* cmp MEM32(ecx + 0x18), 1 - flags set for next jcc */
    goto loc_0002D62A;

loc_0002D583: ;
    if (TEST_Z(ebx, ebx)) goto loc_0002D60F; /* je: equal / zero */

loc_0002D58B: ;
    ecx = MEM32(ebx + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0002D60F; /* je: equal / zero */

loc_0002D595: ;
    edx = MEM32(ecx + 0x3F4);
    if (TEST_Z(edx, edx)) goto loc_0002D60F; /* je: equal / zero */

loc_0002D59F: ;
    eax = MEM32(ecx + 0x444);
    eax = MEM32(eax + 0x280);
    if (CMP_EQ(MEM8(eax + 5), 0)) goto loc_0002D5BE; /* je: equal / zero */

loc_0002D5B1: ;
    ecx = MEM32(ecx + 0x520);
    eax = MEM32(ecx + 8);
    if (TEST_NZ(eax, eax)) goto loc_0002D60F; /* jne: not equal / not zero */

loc_0002D5BE: ;
    eax = MEM32(edx + 8);
    if (TEST_NZ(eax, eax)) goto loc_0002D60F; /* jne: not equal / not zero */

loc_0002D5C5: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    goto loc_0002D62C;

loc_0002D5CC: ;
    if (TEST_Z(ebx, ebx)) goto loc_0002D60F; /* je: equal / zero */

loc_0002D5D0: ;
    ecx = MEM32(ebx + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0002D60F; /* je: equal / zero */

loc_0002D5DA: ;
    edx = MEM32(ecx + 0x3F4);
    if (TEST_Z(edx, edx)) goto loc_0002D60F; /* je: equal / zero */

loc_0002D5E4: ;
    eax = MEM32(ecx + 0x444);
    eax = MEM32(eax + 0x280);
    if (CMP_EQ(MEM8(eax + 5), 0)) goto loc_0002D605; /* je: equal / zero */

loc_0002D5F6: ;
    ecx = MEM32(ecx + 0x520);
    if (TEST_Z(ecx, ecx)) goto loc_0002D605; /* je: equal / zero */

loc_0002D600: ;
    eax = MEM32(ecx + 8);
    goto loc_0002D608;

loc_0002D605: ;
    eax = MEM32(edx + 8);

loc_0002D608: ;
    if (CMP_NE(eax, 1)) goto loc_0002D60F; /* jne: not equal / not zero */

loc_0002D60D: ;
    edi = edi | esi;

loc_0002D60F: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    goto loc_0002D62E;

loc_0002D616: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0002D62E; /* je: equal / zero */

loc_0002D61A: ;
    goto loc_0002D62C;

loc_0002D61C: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    goto loc_0002D62A;

loc_0002D620: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0002D62C; /* je: equal / zero */

loc_0002D624: ;
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    goto loc_0002D62A;

loc_0002D628: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */

loc_0002D62A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002D62E; /* jne: not equal / not zero */

loc_0002D62C: ;
    edi = edi | esi;

loc_0002D62E: ;
    esi = esi << 1;

loc_0002D630: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) << 1;
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_0002D504; /* jne: not equal / not zero */

loc_0002D646: ;
    ecx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + edi * 4);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) { sub_0002D661(); return; } /* je: equal / zero */

loc_0002D655: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002DA10
 * Original: 0x0002DA10 - 0x0002DB79 (361 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DA10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0002DA10: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) { sub_0002DB79(); return; } /* je: equal / zero */

loc_0002DA21: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CF8))) { sub_0002DB79(); return; } /* jb: below (unsigned <) */

loc_0002DA32: ;
    eax = MEM32(0x847024);
    ecx = eax + 0x94;
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ecx;
    edx = eax + 0xA0;
    ecx = MEM32(edx);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x86));
    eax = MEM32(eax + 0x44);
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0); sub_00034E20(); /* call 0x00034E20 */

loc_0002DA80: ;
    MEM32(esp + 8) = eax;
    edx = esp + 0x20;
    eax = esp + 0x2C;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x2C;
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm4 = MEMF(0x58F8C0); /* movss */
    xmm0 = MEMF(0x648E84); /* movss */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm3 = xmm3 * xmm4; /* mulss */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0002DB57; /* je: equal / zero */

loc_0002DB0F: ;
    edx = esp + 0x10;
    eax = esp + 0x34;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_0002DB50: ;
    esp = esp + 4;
    xmm0 = xmm0 * xmm4; /* mulss */

loc_0002DB57: ;
    esi = MEM32(esi + 0xC);
    xmm1 = MEMF(esi); /* movss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 >= xmm3)) goto loc_0002DB6F; /* jae: above or equal (unsigned >=) */

loc_0002DB63: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_0002DB6F; /* jae: above or equal (unsigned >=) */

loc_0002DB68: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

loc_0002DB6F: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0002DB80
 * Original: 0x0002DB80 - 0x0002DCD3 (339 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DB80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0002DB80: ;
    eax = MEM32(esi + 0xC);
    esp = esp - 0x38;
    if (TEST_Z(eax, eax)) { sub_0002DCD3(); return; } /* je: equal / zero */

loc_0002DB8E: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CF8))) { sub_0002DCD3(); return; } /* jb: below (unsigned <) */

loc_0002DB9F: ;
    eax = MEM32(0x847024);
    ecx = eax + 0x94;
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x86));
    eax = eax + 0xA0;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    eax = esp + 0x18;
    ecx = esp + 0x24;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x24;
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm3 = MEMF(esp + 4); /* movss */
    xmm4 = MEMF(0x58F8C0); /* movss */
    xmm0 = MEMF(0x648E84); /* movss */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm3 = xmm3 * xmm4; /* mulss */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0002DCAF; /* je: equal / zero */

loc_0002DC69: ;
    eax = esp + 8;
    ecx = esp + 0x2C;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_0002DCA8: ;
    esp = esp + 4;
    xmm0 = xmm0 * xmm4; /* mulss */

loc_0002DCAF: ;
    eax = MEM32(esi + 0xC);
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 >= xmm3)) goto loc_0002DCC8; /* jae: above or equal (unsigned >=) */

loc_0002DCBB: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_0002DCC8; /* jae: above or equal (unsigned >=) */

loc_0002DCC0: ;
    eax = 0; /* xor self */
    esp = esp + 0x38;
    esp += 8; return; /* ret 4 */

loc_0002DCC8: ;
    eax = 1;
    esp = esp + 0x38;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002DCE0
 * Original: 0x0002DCE0 - 0x0002DD85 (165 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DCE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DCE0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((xmm0 <= MEMF(esp + 0x14))) goto loc_0002DCF5; /* jbe: below or equal (unsigned <=) */

loc_0002DCEF: ;
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_0002DCF5: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_0002DD15: ;
    edi = MEM32(esi + 4);
    ecx = 0; /* xor self */
    if (CMP_EQ(edi, ecx)) { sub_0002DD85(); return; } /* je: equal / zero */

loc_0002DD1E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_0002DD4B; /* jne: not equal / not zero */

loc_0002DD28: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    ebx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = eax + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0001A390(); /* call 0x0001A390 */

loc_0002DD44: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

loc_0002DD4B: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    if (CMP_EQ(ebx, MEM32(eax))) goto loc_0002DD65; /* je: equal / zero */

loc_0002DD5B: ;
    if (CMP_EQ(ebx, MEM32(eax + 4))) goto loc_0002DD65; /* je: equal / zero */

loc_0002DD60: ;
    if (CMP_NE(ebx, MEM32(eax + 8))) goto loc_0002DD7B; /* jne: not equal / not zero */

loc_0002DD65: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0001A390(); /* call 0x0001A390 */

loc_0002DD74: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

loc_0002DD7B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM8(esi + 8) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0002DD90
 * Original: 0x0002DD90 - 0x0002DDAE (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DD90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002DD90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0002DDAC; /* je: equal / zero */

loc_0002DD9A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0002DD9E: ;
    if (TEST_NZ(eax, eax)) goto loc_0002DDA8; /* jne: not equal / not zero */

loc_0002DDA2: ;
    MEM8(esi + 9) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DDA8: ;
    MEM8(esi + 8) = 0;

loc_0002DDAC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DDB0
 * Original: 0x0002DDB0 - 0x0002DDD3 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DDB0(void)
{

loc_0002DDB0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002DDB5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x5D26D8;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002DDE0
 * Original: 0x0002DDE0 - 0x0002DEB8 (216 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DDE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DDE0: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    if (1 /* jp after test - parity */) goto loc_0002DE08; /* jp: parity */

loc_0002DDF9: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_0002DF60(); /* call 0x0002DF60 */

loc_0002DE02: ;
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_0002DE08: ;
    ebx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x18);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_0002DE29: ;
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) { sub_0002DEB8(); return; } /* je: equal / zero */

loc_0002DE34: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002DE55; /* jne: not equal / not zero */

loc_0002DE3C: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00021E30(); /* call 0x00021E30 */

loc_0002DE43: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002DE55; /* jne: not equal / not zero */

loc_0002DE47: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0002DB80(); /* call 0x0002DB80 */

loc_0002DE51: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0002DEB8(); return; } /* je: equal / zero */

loc_0002DE55: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002DE73; /* jne: not equal / not zero */

loc_0002DE5D: ;
    eax = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx--;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    goto loc_0002DE86;

loc_0002DE73: ;
    edx = MEM32(ebp + 0x34);
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax--;
    eax = eax & edi;
    PUSH32(esp, eax);

loc_0002DE86: ;
    edi = MEM32(ebp + 4);
    ebx = MEM32(esp + 0x30);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_0001A390(); /* call 0x0001A390 */

loc_0002DE94: ;
    ecx = MEM32(ebp + 4);
    ecx = MEM32(ecx + 0x1C);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) { sub_0002DEB8(); return; } /* je: equal / zero */

loc_0002DE9F: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00034E60(); /* call 0x00034E60 */

loc_0002DEB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0002DED0
 * Original: 0x0002DED0 - 0x0002DEF5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002DED0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_0002DEDF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002DEF1; /* je: equal / zero */

loc_0002DEE3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0002DEEA: ;
    eax = esi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_0002DEF1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002DF00
 * Original: 0x0002DF00 - 0x0002DF5C (92 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DF00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002DF00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0002DF5A; /* je: equal / zero */

loc_0002DF08: ;
    edx = MEM32(0x847024);
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 8));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    MEM8(esp + 4) = LO8(ecx);
    ecx = MEM32(eax + 0x1C);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x44);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0002DF58; /* je: equal / zero */

loc_0002DF27: ;
    if (TEST_Z(ecx, ecx)) goto loc_0002DF58; /* je: equal / zero */

loc_0002DF2B: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_0002DF53; /* je: equal / zero */

loc_0002DF35: ;
    if (CMP_EQ(MEM32(eax), ecx)) goto loc_0002DF40; /* je: equal / zero */

loc_0002DF39: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_0002DF35; /* jne: not equal / not zero */

loc_0002DF40: ;
    if (CMP_EQ(eax, edx)) goto loc_0002DF53; /* je: equal / zero */

loc_0002DF44: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_0002DF4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002DF53: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_0002DF58: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0002DF5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DF60
 * Original: 0x0002DF60 - 0x0002DFF1 (145 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DF60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;

loc_0002DF60: ;
    esp = esp - 0x18;
    if (TEST_Z(esi, esi)) { sub_0002DFF1(); return; } /* je: equal / zero */

loc_0002DF6B: ;
    eax = MEM32(0x847024);
    ecx = eax + 0x94;
    edx = MEM32(ecx);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x86));
    eax = eax + 0xA0;
    MEM32(esp + 8) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    eax = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0002DFB4: ;
    esp = esp + 8;
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(0x648E84); /* movss */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0002DFD5; /* je: equal / zero */

loc_0002DFC7: ;
    ecx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0002DFD2: ;
    esp = esp + 8;

loc_0002DFD5: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0002DFDD; /* jbe: below or equal (unsigned <=) */

loc_0002DFDA: ;
    xmm0 = xmm3; /* movaps */

loc_0002DFDD: ;
    xmm0 = xmm0 * MEMF(0x58F8C0); /* mulss */
    xmm0 = xmm0 * MEMF(0x649734); /* mulss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E000
 * Original: 0x0002E000 - 0x0002E01B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E000(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002E000: ;
    ecx = MEM32(esi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0002E016; /* je: equal / zero */

loc_0002E007: ;
    if (CMP_EQ(MEM32(ecx + 0x1C), 0xFFFFFFFFu)) goto loc_0002E016; /* je: equal / zero */

loc_0002E00D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0002E012: ;
    if (TEST_Z(eax, eax)) goto loc_0002E01A; /* je: equal / zero */

loc_0002E016: ;
    MEM8(esi + 8) = 0;

loc_0002E01A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E020
 * Original: 0x0002E020 - 0x0002E13C (284 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E020(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0002E020: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0002E139; /* je: equal / zero */

loc_0002E02F: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CF8))) goto loc_0002E139; /* jb: below (unsigned <) */

loc_0002E040: ;
    ecx = MEM32(edi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0002E139; /* je: equal / zero */

loc_0002E04B: ;
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xB0);
    SET_LO8(edx, MEM8(edi + 0xA));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0002E138; /* jne: not equal / not zero */

loc_0002E065: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, 0); sub_00034D60(); /* call 0x00034D60 */

loc_0002E070: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(edi + 0xC);
    xmm0 = MEMF(eax); /* movss */
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0002E099; /* jbe: below or equal (unsigned <=) */

loc_0002E096: ;
    xmm0 = xmm1; /* movaps */

loc_0002E099: ;
    xmm1 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    esi = edi;
    if ((xmm1 <= xmm0)) goto loc_0002E0F5; /* jbe: below or equal (unsigned <=) */

loc_0002E0A6: ;
    PUSH32(esp, 0); sub_00021E30(); /* call 0x00021E30 */

loc_0002E0AB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002E0B6; /* jne: not equal / not zero */

loc_0002E0AF: ;
    POP32(esp, esi);
    MEM8(edi + 8) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002E0B6: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002E138; /* jne: not equal / not zero */

loc_0002E0C0: ;
    SET_LO8(ecx, MEM8(eax + 9));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002E138; /* jne: not equal / not zero */

loc_0002E0C7: ;
    SET_LO8(ecx, MEM8(0x846FF4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002E0E9; /* je: equal / zero */

loc_0002E0D1: ;
    ecx = MEM32(eax + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D27C8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002E0E6: ;
    esp = esp + 0xC;

loc_0002E0E9: ;
    edi = MEM32(edi + 4);
    PUSH32(esp, 0); sub_0001A8B0(); /* call 0x0001A8B0 */

loc_0002E0F1: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002E0F5: ;
    PUSH32(esp, 0); sub_00021E30(); /* call 0x00021E30 */

loc_0002E0FA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002E138; /* je: equal / zero */

loc_0002E0FE: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002E10F; /* jne: not equal / not zero */

loc_0002E108: ;
    SET_LO8(ecx, MEM8(eax + 9));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002E138; /* je: equal / zero */

loc_0002E10F: ;
    SET_LO8(ecx, MEM8(0x846FF4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002E131; /* je: equal / zero */

loc_0002E119: ;
    edx = MEM32(eax + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D2768);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002E12E: ;
    esp = esp + 0xC;

loc_0002E131: ;
    esi = edi;
    PUSH32(esp, 0); sub_0002E000(); /* call 0x0002E000 */

loc_0002E138: ;
    POP32(esp, esi);

loc_0002E139: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0002E140
 * Original: 0x0002E140 - 0x0002E1C7 (135 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E140(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0002E140: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0002E1B9; /* je: equal / zero */

loc_0002E14B: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CF8))) goto loc_0002E1B9; /* jb: below (unsigned <) */

loc_0002E158: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0002E1B9; /* je: equal / zero */

loc_0002E15F: ;
    SET_LO8(ecx, MEM8(esi + 0xA));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0002E1C7(); return; } /* jne: not equal / not zero */

loc_0002E166: ;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, 0); sub_00034D60(); /* call 0x00034D60 */

loc_0002E176: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esi + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0xC); /* divss */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0002E19D; /* jbe: below or equal (unsigned <=) */

loc_0002E19A: ;
    xmm0 = xmm1; /* movaps */

loc_0002E19D: ;
    xmm1 = MEMF(esp + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0002E1B2; /* jbe: below or equal (unsigned <=) */

loc_0002E1A8: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002E1B2: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002E1B9: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) { sub_0002E1C7(); return; } /* jne: not equal / not zero */

loc_0002E1C0: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0002E1D0
 * Original: 0x0002E1D0 - 0x0002E228 (88 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E1D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0002E1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002E226; /* je: equal / zero */

loc_0002E1DA: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0002E1E1: ;
    if (TEST_NZ(eax, eax)) goto loc_0002E222; /* jne: not equal / not zero */

loc_0002E1E5: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 9) = 1;
    if (TEST_Z(eax, eax)) goto loc_0002E226; /* je: equal / zero */

loc_0002E1F0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) goto loc_0002E226; /* jbe: below or equal (unsigned <=) */

loc_0002E1F8: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0); sub_0002D250(); /* call 0x0002D250 */

loc_0002E200: ;
    ecx = MEM32(esi + 0xC);
    MEMF(ecx) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + 0xA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002E226; /* jne: not equal / not zero */

loc_0002E20E: ;
    PUSH32(esp, 0); sub_00021E30(); /* call 0x00021E30 */

loc_0002E213: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002E226; /* jne: not equal / not zero */

loc_0002E217: ;
    eax = esi;
    PUSH32(esp, 0); sub_0002DA10(); /* call 0x0002DA10 */

loc_0002E21E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002E226; /* jne: not equal / not zero */

loc_0002E222: ;
    MEM8(esi + 8) = 0;

loc_0002E226: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E230
 * Original: 0x0002E230 - 0x0002E2A9 (121 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E230(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;

loc_0002E230: ;
    esp = esp - 0x18;
    eax = MEM32(0x847024);
    ecx = eax + 0x94;
    edx = MEM32(ecx);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x86));
    eax = eax + 0xA0;
    MEM32(esp + 8) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    eax = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0002E27C: ;
    esp = esp + 8;
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(0x648E84); /* movss */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0002E29D; /* je: equal / zero */

loc_0002E28F: ;
    ecx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0002E29A: ;
    esp = esp + 8;

loc_0002E29D: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0002E2A5; /* jbe: below or equal (unsigned <=) */

loc_0002E2A2: ;
    xmm0 = xmm3; /* movaps */

loc_0002E2A5: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E2B0
 * Original: 0x0002E2B0 - 0x0002E305 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E2B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0002E2B0: ;
    eax = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) { sub_0002E305(); return; } /* je: equal / zero */

loc_0002E2B9: ;
    ecx = MEM32(esi + 0xE4);
    if (CMP_EQ(ecx, 1)) { sub_0002E305(); return; } /* je: equal / zero */

loc_0002E2C4: ;
    if (CMP_NE(MEM8(esi + 5), LO8(edx))) { sub_0002E305(); return; } /* jne: not equal / not zero */

loc_0002E2C9: ;
    if (CMP_NE(MEM8(esi + 0xB), LO8(edx))) { sub_0002E305(); return; } /* jne: not equal / not zero */

loc_0002E2CE: ;
    if (CMP_NE(MEM8(esi + 7), LO8(edx))) goto loc_0002E2FA; /* jne: not equal / not zero */

loc_0002E2D3: ;
    if (CMP_EQ(ecx, 3)) goto loc_0002E2FA; /* je: equal / zero */

loc_0002E2D8: ;
    if (CMP_EQ(MEM8(esi + 4), LO8(edx))) goto loc_0002E2FA; /* je: equal / zero */

loc_0002E2DD: ;
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, 0); sub_00400B80(); /* call 0x00400B80 */

loc_0002E2E5: ;
    xmm0 = MEMF(0x649108); /* movss */
    MEM8(esi + 5) = 1;
    MEMF(esi + 0x168) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_0002E2FA: ;
    MEM8(esi + 6) = 1;
    MEM8(esi + 0x155) = LO8(ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E330
 * Original: 0x0002E330 - 0x0002E37D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E330: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x200);
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = 0x80;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    MEM32(edi + 0x18) = ebx;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x28) = ebx;
    MEM32(edi + 0x2C) = ebx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0002E35F: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi) = eax;
    if (CMP_NE(eax, ebx)) { sub_0002E37D(); return; } /* jne: not equal / not zero */

loc_0002E368: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0002E378: ;
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_0002E38F(); return; /* tail jmp 0x0002E38F */

}

/**
 * sub_0002E4F0
 * Original: 0x0002E4F0 - 0x0002E519 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E4F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002E4F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    ebx = 0; /* xor self */
    eax = ecx;
    /* nop */

loc_0002E500: ;
    if (CMP_EQ(MEM32(eax), 0)) { sub_0002E519(); return; } /* je: equal / zero */

loc_0002E505: ;
    ebx++;
    eax = eax + 4;
    if (CMP_L(ebx, 0x80)) goto loc_0002E500; /* jl: less (signed <) */

loc_0002E511: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002E660
 * Original: 0x0002E660 - 0x0002E793 (307 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E660: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0002E78F; /* je: equal / zero */

loc_0002E671: ;
    if (TEST_S(ebx, ebx)) goto loc_0002E78F; /* jl: less (signed <) */

loc_0002E679: ;
    if (CMP_GE(ebx, 0x80)) goto loc_0002E78F; /* jge: greater or equal (signed >=) */

loc_0002E685: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + ebx * 4);
    if (TEST_Z(ebp, ebp)) goto loc_0002E78E; /* je: equal / zero */

loc_0002E691: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x24);
    if (TEST_Z(edi, edi)) goto loc_0002E719; /* je: equal / zero */

loc_0002E69A: ;
    if (CMP_NE(MEM32(edi + 0x188), ebx)) goto loc_0002E6BA; /* jne: not equal / not zero */

loc_0002E6A2: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi + 0x188) = eax;
    MEM32(edi + 0x190) = eax;
    MEM8(edi + 0x194) = 0;
    goto loc_0002E719;

loc_0002E6BA: ;
    if (CMP_NE(MEM32(edi + 0x184), ebx)) goto loc_0002E6DA; /* jne: not equal / not zero */

loc_0002E6C2: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi + 0x184) = eax;
    MEM32(edi + 0x18C) = eax;
    MEM8(edi + 0x195) = 0;
    goto loc_0002E719;

loc_0002E6DA: ;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0002E719; /* je: equal / zero */

loc_0002E6E4: ;
    if (CMP_NE(MEM32(eax + 0x4E8), ebx)) goto loc_0002E719; /* jne: not equal / not zero */

loc_0002E6EC: ;
    SET_LO8(eax, MEM8(0x846FF4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002E709; /* je: equal / zero */

loc_0002E6F5: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5D2A78);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002E706: ;
    esp = esp + 8;

loc_0002E709: ;
    ecx = MEM32(edi + 0x568);
    MEM32(ecx + 0x4E8) = 0xFFFFFFFFu;

loc_0002E719: ;
    SET_LO8(eax, MEM8(0x846FF4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002E74B; /* je: equal / zero */

loc_0002E722: ;
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) goto loc_0002E72E; /* je: equal / zero */

loc_0002E729: ;
    eax = MEM32(eax + 0x28);
    goto loc_0002E730;

loc_0002E72E: ;
    eax = 0; /* xor self */

loc_0002E730: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D29F8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002E748: ;
    esp = esp + 0x14;

loc_0002E74B: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002EB90(); /* call 0x0002EB90 */

loc_0002E756: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(ebp + 4);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002E770; /* jne: not equal / not zero */

loc_0002E761: ;
    if (TEST_Z(esi, esi)) goto loc_0002E77D; /* je: equal / zero */

loc_0002E765: ;
    SET_LO8(ebx, MEM8(esp + 0x1C));
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_0002E76E: ;
    goto loc_0002E77D;

loc_0002E770: ;
    if (TEST_Z(esi, esi)) goto loc_0002E77D; /* je: equal / zero */

loc_0002E774: ;
    SET_LO8(ebx, MEM8(esp + 0x1C));
    PUSH32(esp, 0); sub_0002E2B0(); /* call 0x0002E2B0 */

loc_0002E77D: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0002E78C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0002E78E: ;
    POP32(esp, ebp);

loc_0002E78F: ;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002E7A0
 * Original: 0x0002E7A0 - 0x0002E7CD (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E7A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002E7A0: ;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_0002E7CC; /* je: equal / zero */

loc_0002E7A5: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0002E7A8: ;
    eax = MEM32(edi);
    if (CMP_EQ(MEM32(eax + esi * 4), 0)) goto loc_0002E7BB; /* je: equal / zero */

loc_0002E7B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_0002E7BB: ;
    eax = MEM32(edi + 8);
    if (TEST_Z(eax, eax)) goto loc_0002E7CB; /* je: equal / zero */

loc_0002E7C2: ;
    esi++;
    if (CMP_L(esi, 0x80)) goto loc_0002E7A8; /* jl: less (signed <) */

loc_0002E7CB: ;
    POP32(esp, esi);

loc_0002E7CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E7D0
 * Original: 0x0002E7D0 - 0x0002E854 (132 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E7D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    /* nop */

loc_0002E7E0: ;
    eax = MEM32(ebp);
    esi = MEM32(eax + edi * 4);
    if (TEST_Z(esi, esi)) goto loc_0002E83F; /* je: equal / zero */

loc_0002E7EA: ;
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002E83E; /* je: equal / zero */

loc_0002E7F1: ;
    ecx = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(esi + 0x24), ecx)) goto loc_0002E83E; /* jne: not equal / not zero */

loc_0002E7FA: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0002E830; /* je: equal / zero */

loc_0002E801: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0002E830; /* je: equal / zero */

loc_0002E808: ;
    if (CMP_GE(MEM32(ecx), 0)) goto loc_0002E817; /* jge: greater or equal (signed >=) */

loc_0002E80D: ;
    PUSH32(esp, 0); sub_00021D70(); /* call 0x00021D70 */

loc_0002E812: ;
    edx = MEM32(esi + 0x18);
    MEM32(edx) = eax;

loc_0002E817: ;
    eax = MEM32(esi + 0x18);
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002E823; /* jge: greater or equal (signed >=) */

loc_0002E81F: ;
    MEM8(esi + 0x3D) = 1;

loc_0002E823: ;
    (void)0; /* cmp MEM32(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 0xFFFF)) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002E83E; /* je: equal / zero */

loc_0002E830: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_0002E83C: ;
    goto loc_0002E83F;

loc_0002E83E: ;
    ebx++;

loc_0002E83F: ;
    if (CMP_EQ(ebx, MEM32(ebp + 8))) goto loc_0002E84D; /* je: equal / zero */

loc_0002E844: ;
    edi++;
    if (CMP_L(edi, 0x80)) goto loc_0002E7E0; /* jl: less (signed <) */

loc_0002E84D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002E860
 * Original: 0x0002E860 - 0x0002E86D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E860(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0002E870(); return; /* tail jmp 0x0002E870 */

}

/**
 * sub_0002E8B0
 * Original: 0x0002E8B0 - 0x0002E8BD (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E8B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E8B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0002E8C0(); return; /* tail jmp 0x0002E8C0 */

}

/**
 * sub_0002E910
 * Original: 0x0002E910 - 0x0002EB85 (629 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E910: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x10);
    ebx = MEM32(eax + 0xC);
    if (CMP_EQ(ebx, eax)) goto loc_0002EB7F; /* je: equal / zero */

loc_0002E925: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_0002E930;

    /* nop */

loc_0002E930: ;
    edi = MEM32(ebx);
    if (TEST_Z(edi, edi)) goto loc_0002EB6D; /* je: equal / zero */

loc_0002E93A: ;
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_0002E963; /* je: equal / zero */

loc_0002E941: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_0002E956; /* jne: not equal / not zero */

loc_0002E948: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0002E956; /* jne: not equal / not zero */

loc_0002E94F: ;
    SET_LO8(ecx, MEM8(eax + 0xB));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002E963; /* je: equal / zero */

loc_0002E956: ;
    if (CMP_NE(MEM32(eax + 0xE4), 1)) goto loc_0002EB0F; /* jne: not equal / not zero */

loc_0002E963: ;
    SET_LO8(ecx, MEM8(0x846FF4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002E99A; /* je: equal / zero */

loc_0002E96D: ;
    if (TEST_Z(eax, eax)) goto loc_0002E976; /* je: equal / zero */

loc_0002E971: ;
    eax = MEM32(eax + 0x28);
    goto loc_0002E978;

loc_0002E976: ;
    eax = 0; /* xor self */

loc_0002E978: ;
    PUSH32(esp, eax);
    eax = MEM32(0x7F9F60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0002E985: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5D2980);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002E997: ;
    esp = esp + 0x18;

loc_0002E99A: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0002E9A8; /* jne: not equal / not zero */

loc_0002E9A3: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0002E9A8: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_0002E9F0; /* je: equal / zero */

loc_0002E9CE: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_0002E9F0; /* jb: below (unsigned <) */

loc_0002E9D7: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0002E9E1: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0002E9E9: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0002EA11; /* jne: not equal / not zero */

loc_0002E9F0: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0002EA02: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0002EA0A: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0002EA19; /* je: equal / zero */

loc_0002EA11: ;
    esi = eax;
    MEM32(esp + 0x10) = esi;
    goto loc_0002EA2D;

loc_0002EA19: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_0002EA2A: ;
    esp = esp + 8;

loc_0002EA2D: ;
    MEM32(esi) = edi;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0002EA35: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_S(eax, eax)) goto loc_0002EA57; /* jl: less (signed <) */

loc_0002EA42: ;
    if (CMP_GE(eax, 0xDDA)) goto loc_0002EA57; /* jge: greater or equal (signed >=) */

loc_0002EA49: ;
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = MEM32(eax + 0x65E064);
    goto loc_0002EA67;

loc_0002EA57: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = MEM32(0x65DDDC);
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    ecx--;
    eax = eax & ecx;

loc_0002EA67: ;
    MEM32(esi + 8) = eax;
    edx = MEM32(edi + 0x24);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x18) = eax;
    SET_LO8(ecx, MEM8(0x846FF4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002EAB9; /* je: equal / zero */

loc_0002EA86: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x7F9F60);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0002EAA0: ;
    edx = MEM32(esp + 0x30);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D28D0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002EAB6: ;
    esp = esp + 0x24;

loc_0002EAB9: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_0002F3B0(); /* call 0x0002F3B0 */

loc_0002EAC7: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x24), _icall_esp); /* indirect call */
    }

loc_0002EAD0: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(eax + 0x10);
    if (CMP_EQ(ebx, esi)) goto loc_0002EB6D; /* je: equal / zero */

loc_0002EADF: ;
    edi = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0xC);
    edx = edi;
    MEM32(ecx + 8) = edx;
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0xC);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(eax + 0xC) = ecx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0002EB01: ;
    eax = MEM32(esi + 0x10);
    esp = esp + 4;
    eax--;
    ebx = edi;
    MEM32(esi + 0x10) = eax;
    goto loc_0002EB6D;

loc_0002EB0F: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0002EB18: ;
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0002EB67; /* je: equal / zero */

loc_0002EB1F: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0002EB67; /* je: equal / zero */

loc_0002EB26: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002EB4E; /* jge: greater or equal (signed >=) */

loc_0002EB2B: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002EB43; /* jne: not equal / not zero */

loc_0002EB35: ;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0002EB3A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002EB43; /* jne: not equal / not zero */

loc_0002EB3E: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_0002EB49;

loc_0002EB43: ;
    esi = MEM32(esi + 0x114);

loc_0002EB49: ;
    ecx = MEM32(edi + 0x18);
    MEM32(ecx) = esi;

loc_0002EB4E: ;
    eax = MEM32(edi + 0x18);
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002EB5A; /* jge: greater or equal (signed >=) */

loc_0002EB56: ;
    MEM8(edi + 0x3D) = 1;

loc_0002EB5A: ;
    (void)0; /* cmp MEM32(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 0xFFFF)) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002EB6D; /* je: equal / zero */

loc_0002EB67: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = MEM32(eax) + 1;

loc_0002EB6D: ;
    esi = MEM32(esp + 0x18);
    ebx = MEM32(ebx + 0xC);
    if (CMP_NE(ebx, MEM32(esi + 0x10))) goto loc_0002E930; /* jne: not equal / not zero */

loc_0002EB7D: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0002EB7F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002EB90
 * Original: 0x0002EB90 - 0x0002EC51 (193 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EB90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EB90: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp);
    ebx = MEM32(eax + ecx * 4);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 8) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0002EC47; /* je: equal / zero */

loc_0002EBAF: ;
    eax = MEM32(ebx + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0002EC2A; /* jle: less or equal (signed <=) */

loc_0002EBBA: ;
    edx = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4);
    if (TEST_Z(esi, esi)) goto loc_0002EC29; /* je: equal / zero */

loc_0002EBC5: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(eax, esi)) goto loc_0002EBF6; /* je: equal / zero */

loc_0002EBD0: ;
    if (CMP_EQ(MEM32(eax), ecx)) goto loc_0002EBE1; /* je: equal / zero */

loc_0002EBD4: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, esi)) goto loc_0002EBD0; /* jne: not equal / not zero */

loc_0002EBDB: ;
    MEM32(esp + 0x18) = eax;
    goto loc_0002EBF6;

loc_0002EBE1: ;
    ebx = esp + 0x18;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_0002F610(); /* call 0x0002F610 */

loc_0002EBEE: ;
    ebx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x1C);

loc_0002EBF6: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0002EC29; /* jne: not equal / not zero */

loc_0002EBFD: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_000208E0(); /* call 0x000208E0 */

loc_0002EC05: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0002EC13: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(esp + 0x18);
    esp = esp + 4;
    MEM32(ecx + edx * 4) = 0;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);

loc_0002EC29: ;
    POP32(esp, esi);

loc_0002EC2A: ;
    eax = MEM32(ebp);
    MEM32(eax + ecx * 4) = 0;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    eax = MEM32(ebx + 0x30);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0002EC47; /* je: equal / zero */

loc_0002EC3F: ;
    ecx = MEM32(ebp + 0x14);
    eax = ecx + eax * 4;
    MEM32(eax) = MEM32(eax) - 1;

loc_0002EC47: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002EC60
 * Original: 0x0002EC60 - 0x0002ED32 (210 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EC60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(edi + 0x18) = ebx;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x24) = ebx;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x28) = ebx;
    MEM32(edi + 0x2C) = ebx;
    MEM32(esp + 0xC) = ebx;
    ebp = 0; /* xor self */
    edi = edi;

loc_0002EC80: ;
    eax = MEM32(edi);
    esi = MEM32(eax + ebp * 4);
    if (CMP_EQ(esi, ebx)) goto loc_0002ED06; /* je: equal / zero */

loc_0002EC89: ;
    if (CMP_EQ(MEM8(esi + 8), LO8(ebx))) goto loc_0002ECE0; /* je: equal / zero */

loc_0002EC8E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0002EC96: ;
    if (CMP_EQ(MEM8(esi + 8), LO8(ebx))) goto loc_0002ECE0; /* je: equal / zero */

loc_0002EC9B: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebx)) goto loc_0002ECA7; /* je: equal / zero */

loc_0002ECA2: ;
    if (CMP_EQ(MEM8(eax + 8), LO8(ebx))) goto loc_0002ECBC; /* je: equal / zero */

loc_0002ECA7: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) + 1;
    PUSH32(esp, 0); sub_00021E30(); /* call 0x00021E30 */

loc_0002ECAF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002ECDA; /* je: equal / zero */

loc_0002ECB3: ;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) + 1;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    goto loc_0002ED06;

loc_0002ECBC: ;
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + 1;
    PUSH32(esp, 0); sub_00021E30(); /* call 0x00021E30 */

loc_0002ECC4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002ECCB; /* je: equal / zero */

loc_0002ECC8: ;
    MEM32(edi + 0x20) = MEM32(edi + 0x20) + 1;

loc_0002ECCB: ;
    esi = MEM32(esi + 4);
    if (CMP_EQ(esi, ebx)) goto loc_0002ECD7; /* je: equal / zero */

loc_0002ECD2: ;
    if (CMP_EQ(MEM8(esi + 9), LO8(ebx))) goto loc_0002ECDA; /* je: equal / zero */

loc_0002ECD7: ;
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) + 1;

loc_0002ECDA: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    goto loc_0002ED06;

loc_0002ECE0: ;
    if (CMP_EQ(MEM8(0x846FF4), LO8(ebx))) goto loc_0002ECFC; /* je: equal / zero */

loc_0002ECE8: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5D2888);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0002ECF9: ;
    esp = esp + 8;

loc_0002ECFC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_0002ED06: ;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(eax, MEM32(edi + 8))) goto loc_0002ED1C; /* je: equal / zero */

loc_0002ED0F: ;
    ebp++;
    if (CMP_L(ebp, 0x80)) goto loc_0002EC80; /* jl: less (signed <) */

loc_0002ED1C: ;
    ecx = MEM32(esp + 0x14);
    eax = edi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0002E910(); /* call 0x0002E910 */

loc_0002ED2B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002ED40
 * Original: 0x0002ED40 - 0x0002EEE3 (419 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ED40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002ED40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ebx + 0x18) = edi;
    MEM32(ebx + 0x1C) = edi;
    MEM32(ebx + 0x24) = edi;
    MEM32(ebx + 0x20) = edi;
    MEM32(ebx + 0x28) = edi;
    MEM32(ebx + 0x2C) = edi;
    MEM32(esp + 0xC) = edi;
    ebp = 0; /* xor self */
    edi = edi;

loc_0002ED60: ;
    eax = MEM32(ebx);
    esi = MEM32(eax + ebp);
    if (CMP_EQ(esi, edi)) goto loc_0002EE11; /* je: equal / zero */

loc_0002ED6D: ;
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002EE11; /* je: equal / zero */

loc_0002ED78: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_0002ED86; /* je: equal / zero */

loc_0002ED7F: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002EDC2; /* je: equal / zero */

loc_0002ED86: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + 1;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_0002EDBD; /* je: equal / zero */

loc_0002ED90: ;
    ecx = MEM32(esi + 0x18);
    if (CMP_EQ(ecx, edi)) goto loc_0002EDBD; /* je: equal / zero */

loc_0002ED97: ;
    if (CMP_GE(MEM32(ecx), edi)) goto loc_0002EDA5; /* jge: greater or equal (signed >=) */

loc_0002ED9B: ;
    PUSH32(esp, 0); sub_00021D70(); /* call 0x00021D70 */

loc_0002EDA0: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;

loc_0002EDA5: ;
    eax = MEM32(esi + 0x18);
    if (CMP_GE(MEM32(eax), edi)) goto loc_0002EDB0; /* jge: greater or equal (signed >=) */

loc_0002EDAC: ;
    MEM8(esi + 0x3D) = 1;

loc_0002EDB0: ;
    (void)0; /* cmp MEM32(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 0xFFFF)) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002EE0D; /* je: equal / zero */

loc_0002EDBD: ;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 1;
    goto loc_0002EE0D;

loc_0002EDC2: ;
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) + 1;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_0002EDF9; /* je: equal / zero */

loc_0002EDCC: ;
    ecx = MEM32(esi + 0x18);
    if (CMP_EQ(ecx, edi)) goto loc_0002EDF9; /* je: equal / zero */

loc_0002EDD3: ;
    if (CMP_GE(MEM32(ecx), edi)) goto loc_0002EDE1; /* jge: greater or equal (signed >=) */

loc_0002EDD7: ;
    PUSH32(esp, 0); sub_00021D70(); /* call 0x00021D70 */

loc_0002EDDC: ;
    edx = MEM32(esi + 0x18);
    MEM32(edx) = eax;

loc_0002EDE1: ;
    eax = MEM32(esi + 0x18);
    if (CMP_GE(MEM32(eax), edi)) goto loc_0002EDEC; /* jge: greater or equal (signed >=) */

loc_0002EDE8: ;
    MEM8(esi + 0x3D) = 1;

loc_0002EDEC: ;
    (void)0; /* cmp MEM32(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 0xFFFF)) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002EDFC; /* je: equal / zero */

loc_0002EDF9: ;
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + 1;

loc_0002EDFC: ;
    esi = MEM32(esi + 4);
    if (CMP_EQ(esi, edi)) goto loc_0002EE0A; /* je: equal / zero */

loc_0002EE03: ;
    SET_LO8(eax, MEM8(esi + 9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002EE0D; /* je: equal / zero */

loc_0002EE0A: ;
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) + 1;

loc_0002EE0D: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;

loc_0002EE11: ;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(eax, MEM32(ebx + 8))) goto loc_0002EE29; /* je: equal / zero */

loc_0002EE1A: ;
    ebp = ebp + 4;
    if (CMP_L(ebp, 0x200)) goto loc_0002ED60; /* jl: less (signed <) */

loc_0002EE29: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0xC);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(ecx, eax)) goto loc_0002EEDE; /* je: equal / zero */

loc_0002EE3B: ;
    goto loc_0002EE41;

loc_0002EE3D: ;
    ecx = MEM32(esp + 0xC);

loc_0002EE41: ;
    ebp = MEM32(ecx);
    if (CMP_EQ(ebp, edi)) goto loc_0002EECE; /* je: equal / zero */

loc_0002EE4B: ;
    esi = MEM32(ebp + 4);
    if (CMP_EQ(esi, edi)) goto loc_0002EECB; /* je: equal / zero */

loc_0002EE52: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_EQ(eax, edi)) goto loc_0002EECB; /* je: equal / zero */

loc_0002EE59: ;
    if (CMP_GE(MEM32(eax), edi)) goto loc_0002EEB3; /* jge: greater or equal (signed >=) */

loc_0002EE5D: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002EEA8; /* jne: not equal / not zero */

loc_0002EE67: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, edi)) { sub_0002EEE3(); return; } /* je: equal / zero */

loc_0002EE6E: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x18);
    edi = esi + 0xF0;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00400D90(); /* call 0x00400D90 */

loc_0002EE82: ;
    SET_LO8(eax, MEM8(edi));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0002EE9B; /* jne: not equal / not zero */

loc_0002EE8B: ;
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esi + 0x144) = xmm0; /* movss */

loc_0002EE9B: ;
    ecx = MEM32(esp + 0xC);
    MEM8(esi + 0x154) = 1;
    edi = 0; /* xor self */

loc_0002EEA8: ;
    esi = MEM32(esi + 0x114);
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = esi;

loc_0002EEB3: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_GE(MEM32(eax), edi)) goto loc_0002EEBE; /* jge: greater or equal (signed >=) */

loc_0002EEBA: ;
    MEM8(ebp + 0x3D) = 1;

loc_0002EEBE: ;
    (void)0; /* cmp MEM32(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 0xFFFF)) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002EECE; /* je: equal / zero */

loc_0002EECB: ;
    MEM32(ebx + 0x28) = MEM32(ebx + 0x28) + 1;

loc_0002EECE: ;
    eax = MEM32(ecx + 0xC);
    (void)0; /* cmp eax, MEM32(ebx + 0x10) - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(eax, MEM32(ebx + 0x10))) goto loc_0002EE3D; /* jne: not equal / not zero */

loc_0002EEDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002EEF0
 * Original: 0x0002EEF0 - 0x0002EFBA (202 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EEF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EEF0: ;
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0002EF02; /* jne: not equal / not zero */

loc_0002EEFD: ;
    eax = 1;

loc_0002EF02: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    edi = 0; /* xor self */

loc_0002EF16: ;
    ecx = MEM32(ebp);
    esi = MEM32(edi + ecx);
    if (TEST_Z(esi, esi)) goto loc_0002EF9E; /* je: equal / zero */

loc_0002EF20: ;
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002EF99; /* je: equal / zero */

loc_0002EF27: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x20), _icall_esp); /* indirect call */
    }

loc_0002EF33: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + 4);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002EF62; /* je: equal / zero */

loc_0002EF3A: ;
    if (TEST_Z(eax, eax)) goto loc_0002EF99; /* je: equal / zero */

loc_0002EF3E: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0002EF99; /* je: equal / zero */

loc_0002EF45: ;
    if (CMP_GE(MEM32(ecx), 0)) goto loc_0002EF54; /* jge: greater or equal (signed >=) */

loc_0002EF4A: ;
    PUSH32(esp, 0); sub_00021D70(); /* call 0x00021D70 */

loc_0002EF4F: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;

loc_0002EF54: ;
    edx = MEM32(esi + 0x18);
    if (CMP_GE(MEM32(edx), 0)) goto loc_0002EF99; /* jge: greater or equal (signed >=) */

loc_0002EF5C: ;
    MEM8(esi + 0x3D) = 1;
    goto loc_0002EF99;

loc_0002EF62: ;
    if (TEST_Z(eax, eax)) goto loc_0002EF95; /* je: equal / zero */

loc_0002EF66: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0002EF95; /* je: equal / zero */

loc_0002EF6D: ;
    if (CMP_GE(MEM32(ecx), 0)) goto loc_0002EF7C; /* jge: greater or equal (signed >=) */

loc_0002EF72: ;
    PUSH32(esp, 0); sub_00021D70(); /* call 0x00021D70 */

loc_0002EF77: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;

loc_0002EF7C: ;
    eax = MEM32(esi + 0x18);
    if (CMP_GE(MEM32(eax), 0)) goto loc_0002EF88; /* jge: greater or equal (signed >=) */

loc_0002EF84: ;
    MEM8(esi + 0x3D) = 1;

loc_0002EF88: ;
    (void)0; /* cmp MEM32(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 0xFFFF)) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002EF99; /* je: equal / zero */

loc_0002EF95: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;

loc_0002EF99: ;
    eax = MEM32(esp + 0x18);
    ebx++;

loc_0002EF9E: ;
    if (CMP_EQ(ebx, MEM32(ebp + 8))) goto loc_0002EFB2; /* je: equal / zero */

loc_0002EFA3: ;
    edi = edi + 4;
    if (CMP_L(edi, 0x200)) goto loc_0002EF16; /* jl: less (signed <) */

loc_0002EFB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002EFC0
 * Original: 0x0002EFC0 - 0x0002F054 (148 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EFC0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0002F04B; /* je: equal / zero */

loc_0002EFCB: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 4);
    ebp = MEM32(edx + eax * 4);
    if (TEST_Z(ebp, ebp)) goto loc_0002F04B; /* je: equal / zero */

loc_0002EFD9: ;
    esi = MEM32(ebp + 0xC);
    if (CMP_EQ(esi, ebp)) goto loc_0002F04B; /* je: equal / zero */

loc_0002EFE0: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(esi);
    ecx = MEM32(eax);
    eax = MEM32(ecx + edi * 4);
    if (TEST_Z(eax, eax)) goto loc_0002F044; /* je: equal / zero */

loc_0002EFEF: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002F044; /* je: equal / zero */

loc_0002EFF6: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0002F002; /* je: equal / zero */

loc_0002EFFD: ;
    ecx = MEM32(eax + 0x1C);
    goto loc_0002F005;

loc_0002F002: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_0002F005: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034E20(); /* call 0x00034E20 */

loc_0002F013: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0002F044; /* je: equal / zero */

loc_0002F019: ;
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, MEMF(ebx) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0002F044; /* jp: parity */

loc_0002F026: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0002F044; /* jp: parity */

loc_0002F035: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm0, MEMF(ebx + 8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0002F054(); return; } /* jnp: not parity */

loc_0002F044: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, ebp)) goto loc_0002EFE0; /* jne: not equal / not zero */

loc_0002F04B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F060
 * Original: 0x0002F060 - 0x0002F0AE (78 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F060: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = 0; /* xor self */

loc_0002F068: ;
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_0002F096; /* je: equal / zero */

loc_0002F06E: ;
    if (CMP_EQ(MEM8(ecx + 8), 0)) goto loc_0002F095; /* je: equal / zero */

loc_0002F074: ;
    ebp = MEM32(ecx + 0x30);
    if (CMP_NE(ebp, MEM32(esp + 0xC))) goto loc_0002F095; /* jne: not equal / not zero */

loc_0002F07D: ;
    ebp = MEM32(esp + 0x10);
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_0002F08B; /* je: equal / zero */

loc_0002F086: ;
    if (CMP_NE(MEM32(ecx + 0x34), ebp)) goto loc_0002F095; /* jne: not equal / not zero */

loc_0002F08B: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_0002F0A9; /* je: equal / zero */

loc_0002F090: ;
    if (CMP_EQ(MEM32(ecx + 0x38), ebx)) goto loc_0002F0A9; /* je: equal / zero */

loc_0002F095: ;
    esi++;

loc_0002F096: ;
    if (CMP_EQ(esi, MEM32(edi + 8))) goto loc_0002F0A6; /* je: equal / zero */

loc_0002F09B: ;
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, 0x80)) goto loc_0002F068; /* jl: less (signed <) */

loc_0002F0A6: ;
    eax = eax | 0xFFFFFFFFu;

loc_0002F0A9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F0B0
 * Original: 0x0002F0B0 - 0x0002F0B8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F0B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002F0B0: ;
    if (CMP_NE(edi, 0xFFFFFFFFu)) { sub_0002F0B8(); return; } /* jne: not equal / not zero */

loc_0002F0B5: ;
    eax = eax | edi;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F100
 * Original: 0x0002F100 - 0x0002F172 (114 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F100: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    /* nop */

loc_0002F110: ;
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_0002F15A; /* je: equal / zero */

loc_0002F116: ;
    if (CMP_EQ(MEM8(ecx + 8), 0)) goto loc_0002F155; /* je: equal / zero */

loc_0002F11C: ;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_0002F126; /* je: equal / zero */

loc_0002F121: ;
    if (CMP_NE(MEM32(ecx + 0x2C), ebp)) goto loc_0002F155; /* jne: not equal / not zero */

loc_0002F126: ;
    ebp = MEM32(esp + 0x10);
    if (CMP_NE(MEM32(ecx + 0x30), ebp)) goto loc_0002F155; /* jne: not equal / not zero */

loc_0002F12F: ;
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_0002F13D; /* je: equal / zero */

loc_0002F138: ;
    if (CMP_NE(MEM32(ecx + 0x34), ebp)) goto loc_0002F155; /* jne: not equal / not zero */

loc_0002F13D: ;
    ebp = MEM32(esp + 0x18);
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_0002F14B; /* je: equal / zero */

loc_0002F146: ;
    if (CMP_NE(MEM32(ecx + 0x38), ebp)) goto loc_0002F155; /* jne: not equal / not zero */

loc_0002F14B: ;
    if (CMP_EQ(MEM32(ecx + 0x24), ebx)) goto loc_0002F16D; /* je: equal / zero */

loc_0002F150: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_0002F16D; /* je: equal / zero */

loc_0002F155: ;
    ebp = MEM32(esp + 0xC);
    esi++;

loc_0002F15A: ;
    if (CMP_EQ(esi, MEM32(edi + 8))) goto loc_0002F16A; /* je: equal / zero */

loc_0002F15F: ;
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, 0x80)) goto loc_0002F110; /* jl: less (signed <) */

loc_0002F16A: ;
    eax = eax | 0xFFFFFFFFu;

loc_0002F16D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0002F180
 * Original: 0x0002F180 - 0x0002F1AE (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F180(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002F180: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = 0; /* xor self */

loc_0002F187: ;
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_0002F199; /* je: equal / zero */

loc_0002F18D: ;
    if (CMP_EQ(MEM8(ecx + 8), 0)) goto loc_0002F198; /* je: equal / zero */

loc_0002F193: ;
    if (CMP_EQ(MEM32(ecx + 0x24), ebx)) goto loc_0002F1AC; /* je: equal / zero */

loc_0002F198: ;
    esi++;

loc_0002F199: ;
    if (CMP_EQ(esi, MEM32(edi + 8))) goto loc_0002F1A9; /* je: equal / zero */

loc_0002F19E: ;
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, 0x80)) goto loc_0002F187; /* jl: less (signed <) */

loc_0002F1A9: ;
    eax = eax | 0xFFFFFFFFu;

loc_0002F1AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F1B0
 * Original: 0x0002F1B0 - 0x0002F1EF (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F1B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F1B0: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    /* nop */

loc_0002F1C0: ;
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_0002F1D7; /* je: equal / zero */

loc_0002F1C6: ;
    if (CMP_EQ(MEM8(ecx + 8), 0)) goto loc_0002F1D6; /* je: equal / zero */

loc_0002F1CC: ;
    if (CMP_NE(MEM32(ecx + 0x24), ebx)) goto loc_0002F1D6; /* jne: not equal / not zero */

loc_0002F1D1: ;
    if (CMP_EQ(MEM32(ecx + 0x2C), ebp)) goto loc_0002F1EA; /* je: equal / zero */

loc_0002F1D6: ;
    esi++;

loc_0002F1D7: ;
    if (CMP_EQ(esi, MEM32(edi + 8))) goto loc_0002F1E7; /* je: equal / zero */

loc_0002F1DC: ;
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, 0x80)) goto loc_0002F1C0; /* jl: less (signed <) */

loc_0002F1E7: ;
    eax = eax | 0xFFFFFFFFu;

loc_0002F1EA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F1F0
 * Original: 0x0002F1F0 - 0x0002F2B2 (194 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F1F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F1F0: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    edx = edx + 8;

loc_0002F202: ;
    ecx = MEM32(edx + -8);
    if (TEST_Z(ecx, ecx)) goto loc_0002F223; /* je: equal / zero */

loc_0002F209: ;
    if (CMP_EQ(MEM8(ecx + 8), 0)) goto loc_0002F222; /* je: equal / zero */

loc_0002F20F: ;
    ebp = MEM32(ecx + 0x24);
    if (CMP_NE(ebp, MEM32(esp + 0x18))) goto loc_0002F222; /* jne: not equal / not zero */

loc_0002F218: ;
    ebp = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(ecx + 0x2C), ebp)) goto loc_0002F222; /* jne: not equal / not zero */

loc_0002F221: ;
    eax++;

loc_0002F222: ;
    esi++;

loc_0002F223: ;
    if (CMP_EQ(esi, ebx)) goto loc_0002F2AB; /* je: equal / zero */

loc_0002F22B: ;
    ecx = MEM32(edx + -4);
    if (TEST_Z(ecx, ecx)) goto loc_0002F24C; /* je: equal / zero */

loc_0002F232: ;
    if (CMP_EQ(MEM8(ecx + 8), 0)) goto loc_0002F24B; /* je: equal / zero */

loc_0002F238: ;
    ebp = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(ecx + 0x24), ebp)) goto loc_0002F24B; /* jne: not equal / not zero */

loc_0002F241: ;
    ebp = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(ecx + 0x2C), ebp)) goto loc_0002F24B; /* jne: not equal / not zero */

loc_0002F24A: ;
    eax++;

loc_0002F24B: ;
    esi++;

loc_0002F24C: ;
    if (CMP_EQ(esi, ebx)) goto loc_0002F2AB; /* je: equal / zero */

loc_0002F250: ;
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_0002F270; /* je: equal / zero */

loc_0002F256: ;
    if (CMP_EQ(MEM8(ecx + 8), 0)) goto loc_0002F26F; /* je: equal / zero */

loc_0002F25C: ;
    ebp = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(ecx + 0x24), ebp)) goto loc_0002F26F; /* jne: not equal / not zero */

loc_0002F265: ;
    ebp = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(ecx + 0x2C), ebp)) goto loc_0002F26F; /* jne: not equal / not zero */

loc_0002F26E: ;
    eax++;

loc_0002F26F: ;
    esi++;

loc_0002F270: ;
    if (CMP_EQ(esi, ebx)) goto loc_0002F2AB; /* je: equal / zero */

loc_0002F274: ;
    ecx = MEM32(edx + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0002F295; /* je: equal / zero */

loc_0002F27B: ;
    if (CMP_EQ(MEM8(ecx + 8), 0)) goto loc_0002F294; /* je: equal / zero */

loc_0002F281: ;
    ebp = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(ecx + 0x24), ebp)) goto loc_0002F294; /* jne: not equal / not zero */

loc_0002F28A: ;
    ebp = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(ecx + 0x2C), ebp)) goto loc_0002F294; /* jne: not equal / not zero */

loc_0002F293: ;
    eax++;

loc_0002F294: ;
    esi++;

loc_0002F295: ;
    if (CMP_EQ(esi, ebx)) goto loc_0002F2AB; /* je: equal / zero */

loc_0002F299: ;
    edi = edi + 4;
    edx = edx + 0x10;
    if (CMP_L(edi, 0x80)) goto loc_0002F202; /* jl: less (signed <) */

loc_0002F2AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F2C0
 * Original: 0x0002F2C0 - 0x0002F301 (65 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F2C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = 0; /* xor self */

loc_0002F2C7: ;
    eax = MEM32(ebx);
    eax = MEM32(edi + eax);
    if (TEST_Z(eax, eax)) goto loc_0002F2EB; /* je: equal / zero */

loc_0002F2D0: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0002F2EB; /* je: equal / zero */

loc_0002F2D7: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0002F2EA; /* je: equal / zero */

loc_0002F2DE: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0); sub_0001AAE0(); /* call 0x0001AAE0 */

loc_0002F2EA: ;
    ebp++;

loc_0002F2EB: ;
    if (CMP_EQ(ebp, MEM32(ebx + 8))) goto loc_0002F2FB; /* je: equal / zero */

loc_0002F2F0: ;
    edi = edi + 4;
    if (CMP_L(edi, 0x200)) goto loc_0002F2C7; /* jl: less (signed <) */

loc_0002F2FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F310
 * Original: 0x0002F310 - 0x0002F3A7 (151 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F310: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi);
    esi = 0; /* xor self */
    edx = 0; /* xor self */

loc_0002F322: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0002F351; /* je: equal / zero */

loc_0002F328: ;
    if (CMP_EQ(MEM8(eax + 8), 0)) goto loc_0002F351; /* je: equal / zero */

loc_0002F32E: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0002F350; /* je: equal / zero */

loc_0002F335: ;
    eax = MEM32(eax + 0xC);
    ebp = MEM32(ebx);
    eax = MEM32(ebp + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_0002F350; /* je: equal / zero */

loc_0002F342: ;
    eax = MEM32(eax + 0x20);
    (void)0; /* cmp eax, MEM32(esp + 0x14) - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, MEM32(esp + 0x14))) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0002F3A7(); return; } /* jne: not equal / not zero */

loc_0002F350: ;
    esi++;

loc_0002F351: ;
    if (CMP_EQ(esi, MEM32(edi + 8))) goto loc_0002F362; /* je: equal / zero */

loc_0002F356: ;
    edx++;
    ecx = ecx + 4;
    if (CMP_L(edx, 0x80)) goto loc_0002F322; /* jl: less (signed <) */

loc_0002F362: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx + 0xC);
    if (CMP_EQ(ecx, edx)) goto loc_0002F39E; /* je: equal / zero */

loc_0002F36C: ;
    /* nop */

loc_0002F370: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0002F397; /* je: equal / zero */

loc_0002F376: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0002F397; /* je: equal / zero */

loc_0002F37D: ;
    eax = MEM32(eax + 0xC);
    esi = MEM32(ebx);
    eax = MEM32(esi + eax * 4);
    if (TEST_Z(eax, eax)) goto loc_0002F397; /* je: equal / zero */

loc_0002F389: ;
    eax = MEM32(eax + 0x20);
    (void)0; /* cmp eax, MEM32(esp + 0x14) - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, MEM32(esp + 0x14))) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0002F3A7(); return; } /* jne: not equal / not zero */

loc_0002F397: ;
    ecx = MEM32(ecx + 0xC);
    if (CMP_NE(ecx, edx)) goto loc_0002F370; /* jne: not equal / not zero */

loc_0002F39E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F3B0
 * Original: 0x0002F3B0 - 0x0002F430 (128 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F3B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002F3B0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 0xC);
    ecx = ecx + eax;
    if (TEST_NZ(LO8(ecx), 3)) goto loc_0002F3D4; /* jne: not equal / not zero */

loc_0002F3C0: ;
    ecx = MEM32(ebx + 8);
    eax = eax + 4;
    eax = eax >> 2;
    if (CMP_A(ecx, eax)) goto loc_0002F3D4; /* ja: above (unsigned >) */

loc_0002F3CD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0002F430(); /* call 0x0002F430 */

loc_0002F3D4: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    esi = esi + MEM32(ebx + 0x10);
    edi = esi;
    edi = edi >> 2;
    if (CMP_A(eax, edi)) goto loc_0002F3EA; /* ja: above (unsigned >) */

loc_0002F3E8: ;
    edi = edi - eax;

loc_0002F3EA: ;
    edx = MEM32(ebx + 4);
    if (CMP_NE(MEM32(edx + edi * 4), 0)) goto loc_0002F40F; /* jne: not equal / not zero */

loc_0002F3F3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0002F406: ;
    ecx = MEM32(ebx + 4);
    esp = esp + 0x10;
    MEM32(ecx + edi * 4) = eax;

loc_0002F40F: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + edi * 4);
    esi = esi & 3;
    eax = eax + esi * 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0002F429; /* je: equal / zero */

loc_0002F421: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;

loc_0002F429: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F430
 * Original: 0x0002F430 - 0x0002F591 (353 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F430: ;
    eax = MEM32(ebx + 8);
    esp = esp - 0xC;
    ecx = 0xFFFFFFF;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = ecx - eax;
    if (CMP_AE(ecx, edi)) goto loc_0002F44B; /* jae: above or equal (unsigned >=) */

loc_0002F446: ;
    PUSH32(esp, 0); sub_0002F5A0(); /* call 0x0002F5A0 */

loc_0002F44B: ;
    ecx = eax;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 8)) goto loc_0002F459; /* jae: above or equal (unsigned >=) */

loc_0002F454: ;
    ecx = 8;

loc_0002F459: ;
    if (CMP_AE(edi, ecx)) goto loc_0002F46E; /* jae: above or equal (unsigned >=) */

loc_0002F45D: ;
    edx = 0xFFFFFFF;
    edx = edx - ecx;
    if (CMP_A(eax, edx)) goto loc_0002F46E; /* ja: above (unsigned >) */

loc_0002F468: ;
    MEM32(esp + 0x14) = ecx;
    edi = ecx;

loc_0002F46E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax + edi;
    PUSH32(esp, 0x461);
    eax = eax << 2;
    PUSH32(esp, 0x606A34);
    PUSH32(esp, eax);
    ebp = ebp >> 2;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0002F48D: ;
    ecx = MEM32(ebx + 4);
    edx = eax;
    esi = ebp * 4;
    eax = esi + ecx;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebx + 8);
    eax = eax << 2;
    eax = eax - MEM32(esp + 0x20);
    MEM32(esp + 0x1C) = edx;
    eax = eax + ecx;
    ecx = MEM32(esp + 0x20);
    eax = (uint32_t)((int32_t)eax >> 2);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edx + esi;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0002F4C8: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(ebx + 4);
    esp = esp + 0x1C;
    eax = eax + edx;
    if (CMP_A(ebp, edi)) goto loc_0002F517; /* ja: above (unsigned >) */

loc_0002F4D8: ;
    esi = (uint32_t)((int32_t)esi >> 2);
    edx = esi;
    edx = edx << 2;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    esi = edi;
    PUSH32(esp, eax);
    esi = esi - ebp;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0002F4F0: ;
    ecx = MEM32(esp + 0x20);
    edx = eax;
    esp = esp + 0xC;
    edx = edx + ecx;
    if (CMP_BE(esi & esi, 0)) goto loc_0002F50B; /* jbe: below or equal (unsigned <=) */

loc_0002F4FF: ;
    ecx = esi;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x1C);

loc_0002F50B: ;
    if (CMP_BE(ebp & ebp, 0)) goto loc_0002F561; /* jbe: below or equal (unsigned <=) */

loc_0002F50F: ;
    edi = MEM32(esp + 0xC);
    ecx = ebp;
    goto loc_0002F559;

loc_0002F517: ;
    ebp = edi * 4;
    edx = ebp;
    edx = (uint32_t)((int32_t)edx >> 2);
    edx = edx << 2;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0002F52E: ;
    eax = MEM32(ebx + 4);
    ecx = eax + ebp;
    esi = esi - ecx;
    esi = esi + eax;
    eax = MEM32(esp + 0x18);
    esi = (uint32_t)((int32_t)esi >> 2);
    esi = esi << 2;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0002F54A: ;
    edx = eax;
    esp = esp + 0x18;
    edx = edx + esi;
    if (CMP_BE(edi & edi, 0)) goto loc_0002F561; /* jbe: below or equal (unsigned <=) */

loc_0002F555: ;
    ecx = edi;
    edi = edx;

loc_0002F559: ;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x1C);

loc_0002F561: ;
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_0002F57B; /* je: equal / zero */

loc_0002F56A: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0002F578: ;
    esp = esp + 4;

loc_0002F57B: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(esp + 4);
    eax = eax + edi;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = eax;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F5A0
 * Original: 0x0002F5A0 - 0x0002F610 (112 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F5A0(void)
{

loc_0002F5A0: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x11);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x5D2870);
    ecx = esp + 0xC;
    MEM32(esp + 0x24) = 0xF;
    MEM32(esp + 0x20) = ebx;
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_0002F5C6: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0002F5CF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x2C) = 0x5AC69C;
    MEM32(esp + 0x50) = 0xF;
    MEM32(esp + 0x4C) = ebx;
    MEM8(esp + 0x3C) = LO8(ebx);
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_0002F5F8: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0002F60F: ;
    POP32(esp, ebx);

}

/**
 * sub_0002F610
 * Original: 0x0002F610 - 0x0002F649 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F610(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002F610: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx);
    if (CMP_EQ(eax, esi)) goto loc_0002F647; /* je: equal / zero */

loc_0002F617: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edx = edi;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0002F63A: ;
    MEM32(ebx) = edi;
    eax = MEM32(esi + 0x10);
    esp = esp + 4;
    eax--;
    MEM32(esi + 0x10) = eax;
    POP32(esp, edi);

loc_0002F647: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F650
 * Original: 0x0002F650 - 0x0002F6A5 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F650(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002F650: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_0002DDE0(); /* call 0x0002DDE0 */

loc_0002F687: ;
    eax = MEM32(esi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0002F6A1; /* je: equal / zero */

loc_0002F68E: ;
    ecx = MEM32(eax + 0x5D8);
    MEM32(esi + 0x4C) = ecx;
    MEM32(eax + 0x5D8) = 0x30430;

loc_0002F6A1: ;
    POP32(esp, esi);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0002F6B0
 * Original: 0x0002F6B0 - 0x0002F6D9 (41 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F6B0(void)
{

loc_0002F6B0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F6B5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2CEC;
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x48) = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F6E0
 * Original: 0x0002F6E0 - 0x0002F702 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F6E0(void)
{

loc_0002F6E0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F6E5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2BCC;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F710
 * Original: 0x0002F710 - 0x0002F732 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F710(void)
{

loc_0002F710: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F715: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2B34;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F740
 * Original: 0x0002F740 - 0x0002F743 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F740(void)
{

loc_0002F740: ;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0002F750
 * Original: 0x0002F750 - 0x0002F75C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F750(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002F750: ;
    eax = MEM32(ecx + 0x48);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(ecx + 8) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F760
 * Original: 0x0002F760 - 0x0002F782 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F760(void)
{

loc_0002F760: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F765: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2DDC;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F790
 * Original: 0x0002F790 - 0x0002F796 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F790(void)
{

loc_0002F790: ;
    SET_LO8(eax, MEM8(ecx + 8));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F7A0
 * Original: 0x0002F7A0 - 0x0002F7AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F7A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002F7A0: ;
    eax = MEM32(ecx + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(ecx + 8) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F7B0
 * Original: 0x0002F7B0 - 0x0002F7D2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F7B0(void)
{

loc_0002F7B0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F7B5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2D4C;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F7E0
 * Original: 0x0002F7E0 - 0x0002F801 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F7E0(void)
{

loc_0002F7E0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F7E5: ;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x5D2D1C;
    MEM32(eax + 0x48) = edi;
    MEM32(eax + 0x4C) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = edi;
    MEM32(eax + 0x38) = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F810
 * Original: 0x0002F810 - 0x0002F832 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F810(void)
{

loc_0002F810: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F815: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2BFC;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F840
 * Original: 0x0002F840 - 0x0002F870 (48 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F840(void)
{
    float xmm0;

loc_0002F840: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F845: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x7F9F58); /* mulss */
    MEM32(eax) = 0x5D2B64;
    MEMF(eax + 0x48) = xmm0; /* movss */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F870
 * Original: 0x0002F870 - 0x0002F892 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F870(void)
{

loc_0002F870: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F875: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2E3C;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F8A0
 * Original: 0x0002F8A0 - 0x0002F8C2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F8A0(void)
{

loc_0002F8A0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F8A5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2C5C;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F8D0
 * Original: 0x0002F8D0 - 0x0002F8F2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F8D0(void)
{

loc_0002F8D0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F8D5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2E0C;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F900
 * Original: 0x0002F900 - 0x0002F922 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F900(void)
{

loc_0002F900: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F905: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2D7C;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F930
 * Original: 0x0002F930 - 0x0002F952 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F930(void)
{

loc_0002F930: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F935: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2CBC;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F960
 * Original: 0x0002F960 - 0x0002F99E (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F960(void)
{
    float xmm0;

loc_0002F960: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F965: ;
    xmm0 = MEMF(0x6495E4); /* movss */
    ecx = esi;
    ecx = ecx & 0xFFFFFF;
    edx = esi;
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(esp + 4);
    edx = edx >> 0x1F;
    MEM32(eax) = 0x5D2C8C;
    MEM32(eax + 0x48) = edi;
    MEM32(eax + 0x50) = edx;
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = edi;
    MEM32(eax + 0x38) = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F9A0
 * Original: 0x0002F9A0 - 0x0002F9C2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F9A0(void)
{

loc_0002F9A0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F9A5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x5D2C2C;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F9D0
 * Original: 0x0002F9D0 - 0x0002F9DA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F9D0(void)
{

loc_0002F9D0: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x24) = eax;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0002F9E0
 * Original: 0x0002F9E0 - 0x0002FA0C (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F9E0(void)
{

loc_0002F9E0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002F9E5: ;
    edx = MEM32(esp + 8);
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x5D2B94;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002FA10
 * Original: 0x0002FA10 - 0x0002FA3A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FA10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002FA10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00032290(); /* call 0x00032290 */

loc_0002FA18: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0002FA34; /* je: equal / zero */

loc_0002FA1F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_0002FA34; /* je: equal / zero */

loc_0002FA27: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0002FA31: ;
    esp = esp + 4;

loc_0002FA34: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002FA40
 * Original: 0x0002FA40 - 0x0002FA5F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FA40(void)
{

loc_0002FA40: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x54) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x58) = eax;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0002FA60
 * Original: 0x0002FA60 - 0x0002FA65 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FA60(void)
{

loc_0002FA60: ;
    MEM8(ecx + 8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0002FA70
 * Original: 0x0002FA70 - 0x0002FA9C (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FA70(void)
{

loc_0002FA70: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002FA75: ;
    edx = MEM32(esp + 8);
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x5D2E6C;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002FAA0
 * Original: 0x0002FAA0 - 0x0002FACA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FAA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002FAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000323A0(); /* call 0x000323A0 */

loc_0002FAA8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0002FAC4; /* je: equal / zero */

loc_0002FAAF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_0002FAC4; /* je: equal / zero */

loc_0002FAB7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0002FAC1: ;
    esp = esp + 4;

loc_0002FAC4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002FAD0
 * Original: 0x0002FAD0 - 0x0002FAF3 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FAD0(void)
{

loc_0002FAD0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002FAD5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x5D2DAC;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002FB00
 * Original: 0x0002FB00 - 0x0002FB9E (158 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FB00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002FB00: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0002FB0E; /* jne: not equal / not zero */

loc_0002FB09: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0002FB0E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0002FB58; /* je: equal / zero */

loc_0002FB36: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0002FB58; /* jb: below (unsigned <) */

loc_0002FB3F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0002FB49: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0002FB51: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0002FB79; /* jne: not equal / not zero */

loc_0002FB58: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0002FB6A: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0002FB72: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0002FB9E(); return; } /* je: equal / zero */

loc_0002FB79: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_0002FB7E: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = 0x5D2708;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002FBC0
 * Original: 0x0002FBC0 - 0x000300B9 (1273 bytes, 369 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002FBC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_A(eax, 0x1F)) goto loc_0002FC12; /* ja: above (unsigned >) */

loc_0002FBCC: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x300C0); /* switch: 32 entries, 32 targets */
    if (_jt == 0x0002FBD4u) goto loc_0002FBD4;
    if (_jt == 0x0002FC18u) goto loc_0002FC18;
    if (_jt == 0x0002FC38u) goto loc_0002FC38;
    if (_jt == 0x0002FC5Cu) goto loc_0002FC5C;
    if (_jt == 0x0002FC83u) goto loc_0002FC83;
    if (_jt == 0x0002FCAAu) goto loc_0002FCAA;
    if (_jt == 0x0002FCD1u) goto loc_0002FCD1;
    if (_jt == 0x0002FCF8u) goto loc_0002FCF8;
    if (_jt == 0x0002FD1Eu) goto loc_0002FD1E;
    if (_jt == 0x0002FD45u) goto loc_0002FD45;
    if (_jt == 0x0002FD6Bu) goto loc_0002FD6B;
    if (_jt == 0x0002FD92u) goto loc_0002FD92;
    if (_jt == 0x0002FDB9u) goto loc_0002FDB9;
    if (_jt == 0x0002FDDFu) goto loc_0002FDDF;
    if (_jt == 0x0002FE06u) goto loc_0002FE06;
    if (_jt == 0x0002FE2Cu) goto loc_0002FE2C;
    if (_jt == 0x0002FE53u) goto loc_0002FE53;
    if (_jt == 0x0002FE7Au) goto loc_0002FE7A;
    if (_jt == 0x0002FEA1u) goto loc_0002FEA1;
    if (_jt == 0x0002FEC7u) goto loc_0002FEC7;
    if (_jt == 0x0002FEEDu) goto loc_0002FEED;
    if (_jt == 0x0002FF14u) goto loc_0002FF14;
    if (_jt == 0x0002FF3Bu) goto loc_0002FF3B;
    if (_jt == 0x0002FF62u) goto loc_0002FF62;
    if (_jt == 0x0002FF89u) goto loc_0002FF89;
    if (_jt == 0x0002FFB1u) goto loc_0002FFB1;
    if (_jt == 0x0002FFD8u) goto loc_0002FFD8;
    if (_jt == 0x0002FFFFu) goto loc_0002FFFF;
    if (_jt == 0x00030026u) goto loc_00030026;
    if (_jt == 0x0003004Du) goto loc_0003004D;
    if (_jt == 0x00030071u) goto loc_00030071;
    if (_jt == 0x00030095u) goto loc_00030095;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002FBD4: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FBDB: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FBE6: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);

loc_0002FBF2: ;
    PUSH32(esp, 0); sub_0002DDB0(); /* call 0x0002DDB0 */

loc_0002FBF7: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0002FC11; /* jne: not equal / not zero */

loc_0002FBFD: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0002FC0E: ;
    esp = esp + 0xC;

loc_0002FC11: ;
    POP32(esp, edi);

loc_0002FC12: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0002FC18: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FC1F: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FC2A: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    goto loc_0002FBF2;

loc_0002FC38: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FC3F: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FC4A: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0002F810(); /* call 0x0002F810 */

loc_0002FC5A: ;
    goto loc_0002FBF7;

loc_0002FC5C: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FC63: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FC6E: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0002F6B0(); /* call 0x0002F6B0 */

loc_0002FC7E: ;
    goto loc_0002FBF7;

loc_0002FC83: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FC8A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FC95: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0002F7B0(); /* call 0x0002F7B0 */

loc_0002FCA5: ;
    goto loc_0002FBF7;

loc_0002FCAA: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FCB1: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FCBC: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0002F840(); /* call 0x0002F840 */

loc_0002FCCC: ;
    goto loc_0002FBF7;

loc_0002FCD1: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FCD8: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FCE3: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0002F870(); /* call 0x0002F870 */

loc_0002FCF3: ;
    goto loc_0002FBF7;

loc_0002FCF8: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FCFF: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FD0A: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_0002F7E0(); /* call 0x0002F7E0 */

loc_0002FD19: ;
    goto loc_0002FBF7;

loc_0002FD1E: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FD25: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FD30: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0002F8A0(); /* call 0x0002F8A0 */

loc_0002FD40: ;
    goto loc_0002FBF7;

loc_0002FD45: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FD4C: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FD57: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_00031680(); /* call 0x00031680 */

loc_0002FD66: ;
    goto loc_0002FBF7;

loc_0002FD6B: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FD72: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FD7D: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0); sub_00031870(); /* call 0x00031870 */

loc_0002FD8D: ;
    goto loc_0002FBF7;

loc_0002FD92: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FD99: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FDA4: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0); sub_00031A10(); /* call 0x00031A10 */

loc_0002FDB4: ;
    goto loc_0002FBF7;

loc_0002FDB9: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FDC0: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FDCB: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0); sub_00031B90(); /* call 0x00031B90 */

loc_0002FDDA: ;
    goto loc_0002FBF7;

loc_0002FDDF: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FDE6: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FDF1: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_00031CD0(); /* call 0x00031CD0 */

loc_0002FE01: ;
    goto loc_0002FBF7;

loc_0002FE06: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FE0D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FE18: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0); sub_00031E70(); /* call 0x00031E70 */

loc_0002FE27: ;
    goto loc_0002FBF7;

loc_0002FE2C: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FE33: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FE3E: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0); sub_00032090(); /* call 0x00032090 */

loc_0002FE4E: ;
    goto loc_0002FBF7;

loc_0002FE53: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FE5A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FE65: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0); sub_0002F8D0(); /* call 0x0002F8D0 */

loc_0002FE75: ;
    goto loc_0002FBF7;

loc_0002FE7A: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FE81: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FE8C: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_0002F930(); /* call 0x0002F930 */

loc_0002FE9C: ;
    goto loc_0002FBF7;

loc_0002FEA1: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FEA8: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FEB3: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0); sub_0002F960(); /* call 0x0002F960 */

loc_0002FEC2: ;
    goto loc_0002FBF7;

loc_0002FEC7: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FECE: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FED9: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0); sub_000314C0(); /* call 0x000314C0 */

loc_0002FEE8: ;
    goto loc_0002FBF7;

loc_0002FEED: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FEF4: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FEFF: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00031010(); /* call 0x00031010 */

loc_0002FF0F: ;
    goto loc_0002FBF7;

loc_0002FF14: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FF1B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FF26: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_0002F710(); /* call 0x0002F710 */

loc_0002FF36: ;
    goto loc_0002FBF7;

loc_0002FF3B: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FF42: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FF4D: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0); sub_0002F900(); /* call 0x0002F900 */

loc_0002FF5D: ;
    goto loc_0002FBF7;

loc_0002FF62: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FF69: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FF74: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0002F760(); /* call 0x0002F760 */

loc_0002FF84: ;
    goto loc_0002FBF7;

loc_0002FF89: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FF90: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FF9B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); sub_00030180(); /* call 0x00030180 */

loc_0002FFAC: ;
    goto loc_0002FBF7;

loc_0002FFB1: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FFB8: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FFC3: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_00030440(); /* call 0x00030440 */

loc_0002FFD3: ;
    goto loc_0002FBF7;

loc_0002FFD8: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0002FFDF: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0002FFEA: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0); sub_00030520(); /* call 0x00030520 */

loc_0002FFFA: ;
    goto loc_0002FBF7;

loc_0002FFFF: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00030006: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_00030011: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0002F6E0(); /* call 0x0002F6E0 */

loc_00030021: ;
    goto loc_0002FBF7;

loc_00030026: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0003002D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_00030038: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_0002F9A0(); /* call 0x0002F9A0 */

loc_00030048: ;
    goto loc_0002FBF7;

loc_0003004D: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00030054: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0003005B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0); sub_0002F9E0(); /* call 0x0002F9E0 */

loc_0003006C: ;
    goto loc_0002FBF7;

loc_00030071: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00030078: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_0003007F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0); sub_0002FA70(); /* call 0x0002FA70 */

loc_00030090: ;
    goto loc_0002FBF7;

loc_00030095: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0003009C: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_000300B9(); return; } /* je: equal / zero */

loc_000300A3: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0); sub_0002FAD0(); /* call 0x0002FAD0 */

loc_000300B4: ;
    goto loc_0002FBF7;

}

/**
 * sub_00030180
 * Original: 0x00030180 - 0x000301C5 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030180(void)
{
    float xmm0;

loc_00030180: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00030185: ;
    edx = MEM32(esp + 8);
    xmm0 = MEMF(0x648D34); /* movss */
    ecx = 0; /* xor self */
    MEM32(eax + 0x48) = ecx;
    MEM8(eax + 0x60) = LO8(ecx);
    MEM8(eax + 0x61) = LO8(ecx);
    MEM8(eax + 0x63) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x5D2EFC;
    MEM32(eax + 0x58) = 0xFFFFFFFFu;
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000301D0
 * Original: 0x000301D0 - 0x00030297 (199 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000301D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000301D0: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 9));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00030224; /* jne: not equal / not zero */

loc_000301EF: ;
    MEM32(ebp + 0x48) = edi;
    ecx = esi;
    edx = MEM32(ecx);
    eax = ebp + 0x4C;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0x20);
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, MEM8(esp + 0x2C));
    SET_LO8(ecx, MEM8(esp + 0x30));
    MEM32(ebp + 0x58) = edx;
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    MEM8(ebp + 0x60) = LO8(ebx);
    MEM8(ebp + 0x61) = LO8(eax);
    MEM8(ebp + 0x62) = LO8(ecx);

loc_00030224: ;
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0003023C; /* jp: parity */

loc_00030231: ;
    PUSH32(esp, 0); sub_0002DF60(); /* call 0x0002DF60 */

loc_00030236: ;
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_0003023C: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_00030255: ;
    ecx = MEM32(ebp + 4);
    if (TEST_Z(ecx, ecx)) { sub_00030297(); return; } /* je: equal / zero */

loc_0003025C: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_0001A390(); /* call 0x0001A390 */

loc_0003026F: ;
    ecx = MEM32(ebp + 4);
    ecx = MEM32(ecx + 0x1C);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) { sub_00030297(); return; } /* je: equal / zero */

loc_0003027A: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00034E60(); /* call 0x00034E60 */

loc_0003028C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0xA) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_000302B0
 * Original: 0x000302B0 - 0x00030371 (193 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000302B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000302B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000302BA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003036D; /* je: equal / zero */

loc_000302C2: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000302DB; /* jne: not equal / not zero */

loc_000302CD: ;
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000302DB; /* jne: not equal / not zero */

loc_000302D4: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000302E4; /* je: equal / zero */

loc_000302DB: ;
    if (CMP_NE(MEM32(esi + 0xE4), 1)) goto loc_0003033F; /* jne: not equal / not zero */

loc_000302E4: ;
    eax = MEM32(edi + 0x58);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_000302F1; /* jne: not equal / not zero */

loc_000302EC: ;
    esi = MEM32(esi + 0x1C);
    goto loc_000302F3;

loc_000302F1: ;
    esi = eax;

loc_000302F3: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x62));
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x61));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x60));
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x48);
    PUSH32(esp, esi);
    eax = edi + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(0x657C4C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00030321: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00030328: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM8(edi + 0x63) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00030333: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_0003033A: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0003033F: ;
    eax = MEM32(edi + 0x2C);
    if (CMP_EQ(eax, MEM32(0x657C4C))) goto loc_0003035E; /* je: equal / zero */

loc_0003034A: ;
    SET_LO8(eax, MEM8(edi + 0x63));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003035E; /* jne: not equal / not zero */

loc_00030351: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_00030359: ;
    MEM8(edi + 0x63) = 1;
    POP32(esp, ebx);

loc_0003035E: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00030365: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_0003036C: ;
    POP32(esp, esi);

loc_0003036D: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030380
 * Original: 0x00030380 - 0x00030429 (169 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030380(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00030380: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_0003038F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030425; /* je: equal / zero */

loc_00030397: ;
    ecx = MEM32(esi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_000303E6; /* je: equal / zero */

loc_0003039E: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000303E6; /* je: equal / zero */

loc_000303A8: ;
    xmm0 = MEMF(eax + 0x30C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000303E6; /* jnp: not parity */

loc_000303BD: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (CMP_EQ(LO8(eax), 1)) goto loc_000303E6; /* je: equal / zero */

loc_000303C6: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_000303E6; /* je: equal / zero */

loc_000303CA: ;
    SET_LO8(eax, MEM8(ecx + 0x584));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000303E6; /* jne: not equal / not zero */

loc_000303D4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_000303DB: ;
    eax = esi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_000303E2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000303E6: ;
    eax = MEM32(esi + 0x48);
    if (CMP_LE(eax & eax, 0)) goto loc_00030407; /* jle: less or equal (signed <=) */

loc_000303ED: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00030407: ;
    eax = MEM32(esi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00030421; /* je: equal / zero */

loc_0003040E: ;
    edx = MEM32(esi + 0x4C);
    MEM32(eax + 0x5D8) = edx;
    eax = MEM32(esi + 0x24);
    MEM8(eax + 0x584) = 0;

loc_00030421: ;
    MEM8(esi + 8) = 0;

loc_00030425: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030430
 * Original: 0x00030430 - 0x0003043C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030430(void)
{

loc_00030430: ;
    eax = MEM32(esp + 8);
    MEM8(eax + 0x584) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00030440
 * Original: 0x00030440 - 0x00030482 (66 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030440(void)
{

loc_00030440: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00030445: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D301C;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 0xCC);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00030490
 * Original: 0x00030490 - 0x0003051C (140 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030490(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00030490: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_0003049F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030518; /* je: equal / zero */

loc_000304A3: ;
    eax = MEM32(edi + 0x4C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000304F5; /* je: equal / zero */

loc_000304AB: ;
    edx = MEM32(edi + 0x50);
    if (CMP_NE(edx, MEM32(eax + 0xB0))) goto loc_000304F5; /* jne: not equal / not zero */

loc_000304B6: ;
    eax = MEM32(edi + 0x48);
    xmm0 = MEMF(eax + 0xD4); /* movss */
    xmm1 = MEMF(0x648E54); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_000304E2; /* jb: below (unsigned <) */

loc_000304CE: ;
    esi = MEM32(edi + 4);
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x17);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_000304E2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_000304E9: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_000304F0: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000304F5: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(edi + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D34D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00030510: ;
    esp = esp + 0xC;
    MEM8(edi + 8) = 0;
    POP32(esp, esi);

loc_00030518: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030520
 * Original: 0x00030520 - 0x00030562 (66 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030520(void)
{

loc_00030520: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00030525: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D2F8C;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 0xCC);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00030570
 * Original: 0x00030570 - 0x000305FC (140 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030570(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00030570: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_0003057F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000305F8; /* je: equal / zero */

loc_00030583: ;
    eax = MEM32(edi + 0x4C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000305D5; /* je: equal / zero */

loc_0003058B: ;
    edx = MEM32(edi + 0x50);
    if (CMP_NE(edx, MEM32(eax + 0xB0))) goto loc_000305D5; /* jne: not equal / not zero */

loc_00030596: ;
    eax = MEM32(edi + 0x48);
    xmm0 = MEMF(eax + 0xD0); /* movss */
    xmm1 = MEMF(0x648E54); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_000305C2; /* jb: below (unsigned <) */

loc_000305AE: ;
    esi = MEM32(edi + 4);
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_000305C2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_000305C9: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_000305D0: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000305D5: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(edi + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D3460);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000305F0: ;
    esp = esp + 0xC;
    MEM8(edi + 8) = 0;
    POP32(esp, esi);

loc_000305F8: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030600
 * Original: 0x00030600 - 0x00030727 (295 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00030600: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00030618: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003071F; /* je: equal / zero */

loc_00030620: ;
    eax = MEM32(esi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_0003071B; /* je: equal / zero */

loc_0003062B: ;
    edi = eax + 0x2C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00030634: ;
    if (TEST_NZ(eax, eax)) goto loc_0003071B; /* jne: not equal / not zero */

loc_0003063C: ;
    edx = MEM32(edi);
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_00030651: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0003071B; /* jne: not equal / not zero */

loc_0003065C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_0003066B: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0003071B; /* je: equal / zero */

loc_00030676: ;
    eax = MEM32(edi + 4);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_0003068C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0003071B; /* jne: not equal / not zero */

loc_00030697: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_000306A6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0003071B; /* je: equal / zero */

loc_000306AD: ;
    ecx = MEM32(edi + 8);
    MEM32(esp + 0xC) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_000306C3: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0003071B; /* jne: not equal / not zero */

loc_000306CA: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_000306D9: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0003071B; /* je: equal / zero */

loc_000306E0: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_000306EC; /* je: equal / zero */

loc_000306E7: ;
    eax = MEM32(eax + 0x1C);
    goto loc_000306EF;

loc_000306EC: ;
    eax = eax | 0xFFFFFFFFu;

loc_000306EF: ;
    edx = MEM32(esi + 0x48);
    ecx = eax;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    edx = edx + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00034DA0(); /* call 0x00034DA0 */

loc_00030705: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0003070C: ;
    eax = esi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00030713: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0003071B: ;
    MEM8(esi + 8) = 0;

loc_0003071F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00030730
 * Original: 0x00030730 - 0x000308B1 (385 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030730: ;
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00030745: ;
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030891; /* je: equal / zero */

loc_0003074F: ;
    eax = MEM32(edi + 0x48);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ebp = edi + 0x48;
    if (CMP_EQ(eax, ebx)) goto loc_00030891; /* je: equal / zero */

loc_0003075D: ;
    if (CMP_EQ(MEM8(eax + 2), LO8(ebx))) goto loc_0003077A; /* je: equal / zero */

loc_00030762: ;
    ecx = ZX8(MEM8(eax));
    ecx = ecx << 2;
    edx = MEM32(ecx + 0x76F0F8);
    if (CMP_GE(edx, MEM32(ecx + 0x76F0E8))) goto loc_00030891; /* jge: greater or equal (signed >=) */

loc_0003077A: ;
    ecx = ZX8(MEM8(eax));
    SET_LO8(edx, MEM8(eax + 0x10));
    if (CMP_NE(LO8(edx), MEM8(ecx + 0x76F0DC))) goto loc_00030829; /* jne: not equal / not zero */

loc_0003078C: ;
    if (CMP_EQ(MEM32(ecx * 4 + 0x76E884), ebx)) goto loc_00030829; /* je: equal / zero */

loc_00030799: ;
    edx = ZX8(MEM8(eax + 1));
    ecx = ZX8(MEM8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    ecx = MEM32(ecx * 4 + 0x76E884);
    xmm0 = MEMF(edx + ecx); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    ecx = ZX8(MEM8(eax + 1));
    edx = ZX8(MEM8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    edx = MEM32(edx * 4 + 0x76E884);
    xmm0 = MEMF(ecx + edx + 0x38); /* movss */
    xmm0 = xmm0 + MEMF(ecx + edx + 4); /* addss */
    ecx = ecx + edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 1));
    ecx = ZX8(MEM8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    eax = MEM32(ecx * 4 + 0x76E884);
    xmm0 = MEMF(eax + edx + 8); /* movss */
    eax = MEM32(edi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_00030803; /* je: equal / zero */

loc_000307FE: ;
    eax = MEM32(eax + 0x1C);
    goto loc_00030806;

loc_00030803: ;
    eax = eax | 0xFFFFFFFFu;

loc_00030806: ;
    edx = MEM32(0x847024);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034DA0(); /* call 0x00034DA0 */

loc_0003081B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_00030822: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00030829: ;
    eax = MEM32(ebp);
    (void)0; /* cmp MEM32(eax + 4), ebx - flags set for next jcc */
    SET_LO8(edx, MEM8(0x765601));
    if (CMP_LE(MEM32(eax + 4), ebx)) goto loc_0003085F; /* jle: less or equal (signed <=) */

loc_00030837: ;
    esi = MEM32(eax + 4);
    ecx = MEM32(0x7FA208);
    esi = esi - ecx;
    MEM32(eax + 4) = esi;
    eax = MEM32(ebp);
    if (CMP_LE(MEM32(eax + 4), ebx)) goto loc_0003085C; /* jle: less or equal (signed <=) */

loc_0003084D: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0003085F; /* je: equal / zero */

loc_00030851: ;
    eax = ZX8(MEM8(0x765600));
    if (CMP_G(eax, ecx)) goto loc_0003085F; /* jg: greater (signed >) */

loc_0003085C: ;
    PUSH32(esp, ebp);
    goto loc_0003089C;

loc_0003085F: ;
    if (CMP_EQ(MEM8(0x76EC82), LO8(ebx))) goto loc_000308A7; /* je: equal / zero */

loc_00030867: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_000308A7; /* je: equal / zero */

loc_0003086B: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5D342C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0003087B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00030881: ;
    esp = esp + 8;
    MEM8(edi + 8) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00030891: ;
    ecx = MEM32(edi + 0x48);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    eax = edi + 0x48;
    if (CMP_EQ(ecx, ebx)) goto loc_000308A4; /* je: equal / zero */

loc_0003089B: ;
    PUSH32(esp, eax);

loc_0003089C: ;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000308A1: ;
    esp = esp + 4;

loc_000308A4: ;
    MEM8(edi + 8) = LO8(ebx);

loc_000308A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000308C0
 * Original: 0x000308C0 - 0x000309A8 (232 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000308C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000308C0: ;
    esp = esp - 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000308CE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000309A1; /* je: equal / zero */

loc_000308D6: ;
    eax = MEM32(0x8470DC);
    if (TEST_Z(eax, eax)) { sub_000309A8(); return; } /* je: equal / zero */

loc_000308E3: ;
    PUSH32(esp, edi);
    edi = eax + 0x3E0;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_000309A0; /* je: equal / zero */

loc_000308F3: ;
    eax = MEM32(ebp + 0x48);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = eax + 0x40;
    eax = eax + 0x34;
    edx = esp + 0x20;
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(edi);
    PUSH32(esp, 0x447A0000);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x48);
    PUSH32(esp, 0x44480000);
    ecx = ecx + 0x78;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = eax + 0x40;
    PUSH32(esp, eax);
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_003DD3C0(); /* call 0x003DD3C0 */

loc_00030973: ;
    esp = esp + 0x18;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000309A0; /* je: equal / zero */

loc_0003097B: ;
    ecx = MEM32(edi);
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB4A);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0003099C: ;
    MEM8(ebp + 8) = 0;

loc_000309A0: ;
    POP32(esp, edi);

loc_000309A1: ;
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000309C0
 * Original: 0x000309C0 - 0x00030A30 (112 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000309C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000309C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000309CA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030A2C; /* je: equal / zero */

loc_000309CE: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00030A2C; /* je: equal / zero */

loc_000309D5: ;
    eax = MEM32(0x8470DC);
    if (TEST_Z(eax, eax)) { sub_00030A30(); return; } /* je: equal / zero */

loc_000309DE: ;
    PUSH32(esp, esi);
    esi = eax + 0x3E0;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00030A2B; /* je: equal / zero */

loc_000309EB: ;
    ecx = ecx + 0x78;
    PUSH32(esp, ecx);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_000309F8: ;
    xmm1 = MEMF(0x6493B4); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00030A2B; /* jb: below (unsigned <) */

loc_00030A08: ;
    ecx = MEM32(esi);
    eax = MEM32(0x847024);
    edx = MEM32(edi + 0x48);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00030A27: ;
    MEM8(edi + 8) = 0;

loc_00030A2B: ;
    POP32(esp, esi);

loc_00030A2C: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030A40
 * Original: 0x00030A40 - 0x00030B04 (196 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030A40: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    if (1 /* jp after test - parity */) goto loc_00030A68; /* jp: parity */

loc_00030A59: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0); sub_0002DF60(); /* call 0x0002DF60 */

loc_00030A62: ;
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_00030A68: ;
    ebx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x18);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_00030A89: ;
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) goto loc_00030AF9; /* je: equal / zero */

loc_00030A90: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00030AB1; /* jne: not equal / not zero */

loc_00030A98: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00021E30(); /* call 0x00021E30 */

loc_00030A9F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00030AB1; /* jne: not equal / not zero */

loc_00030AA3: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0002DB80(); /* call 0x0002DB80 */

loc_00030AAD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030AF9; /* je: equal / zero */

loc_00030AB1: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00030ACF; /* jne: not equal / not zero */

loc_00030AB9: ;
    eax = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx--;
    ecx = ecx & edi;
    PUSH32(esp, ecx);
    goto loc_00030AE2;

loc_00030ACF: ;
    edx = MEM32(ebp + 0x34);
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax--;
    eax = eax & edi;
    PUSH32(esp, eax);

loc_00030AE2: ;
    edi = MEM32(ebp + 4);
    ebx = MEM32(esp + 0x30);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_0001A390(); /* call 0x0001A390 */

loc_00030AF0: ;
    ecx = MEM32(ebp + 4);
    if (CMP_NE(MEM32(ecx + 0x1C), 0xFFFFFFFFu)) goto loc_00030AFD; /* jne: not equal / not zero */

loc_00030AF9: ;
    MEM8(ebp + 8) = 0;

loc_00030AFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00030B10
 * Original: 0x00030B10 - 0x00030B97 (135 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 9));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00030B97(); return; } /* jne: not equal / not zero */

loc_00030B1A: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    edx = MEM32(edi);
    ecx = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, ebp);

loc_00030B33: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_00030B62; /* je: equal / zero */

loc_00030B39: ;
    if (CMP_EQ(MEM8(eax + 8), 0)) goto loc_00030B5E; /* je: equal / zero */

loc_00030B3F: ;
    ebp = MEM32(esi + 0x48);
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00030B4C; /* je: equal / zero */

loc_00030B47: ;
    if (CMP_NE(MEM32(eax + 0x2C), ebp)) goto loc_00030B5E; /* jne: not equal / not zero */

loc_00030B4C: ;
    ebp = MEM32(eax + 0x30);
    if (CMP_NE(ebp, MEM32(esi + 0x4C))) goto loc_00030B5E; /* jne: not equal / not zero */

loc_00030B54: ;
    if (CMP_EQ(MEM32(eax + 0x24), ebx)) goto loc_00030B85; /* je: equal / zero */

loc_00030B59: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_00030B85; /* je: equal / zero */

loc_00030B5E: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;

loc_00030B62: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, MEM32(edi + 8))) goto loc_00030B89; /* je: equal / zero */

loc_00030B6B: ;
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, 0x80)) goto loc_00030B33; /* jl: less (signed <) */

loc_00030B77: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00030B7E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00030B85: ;
    if (CMP_GE(ecx & ecx, 0)) goto loc_00030B90; /* jge: greater or equal (signed >=) */

loc_00030B89: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00030B90: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030BC0
 * Original: 0x00030BC0 - 0x00030BFC (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030BC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00030BC0: ;
    eax = MEM32(0x7FA208);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    ecx = ecx - eax;
    eax = ecx;
    MEM32(esi + 0x48) = ecx;
    ecx = 0; /* xor self */
    if (CMP_G(eax, ecx)) goto loc_00030BDE; /* jg: greater (signed >) */

loc_00030BD8: ;
    MEM32(esi + 0x48) = ecx;
    MEM8(esi + 8) = LO8(ecx);

loc_00030BDE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x2C), _icall_esp); /* indirect call */
    }

loc_00030BE6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030BF8; /* je: equal / zero */

loc_00030BEA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_00030BF1: ;
    eax = esi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00030BF8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030C00
 * Original: 0x00030C00 - 0x00030CAA (170 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030C00: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00030C0F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00030CAA(); return; } /* jne: not equal / not zero */

loc_00030C17: ;
    xmm0 = MEMF(esi + 0x48); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA218); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x48) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_00030CA2; /* jb: below (unsigned <) */

loc_00030C31: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00030C3D; /* je: equal / zero */

loc_00030C38: ;
    ecx = MEM32(eax + 0x1C);
    goto loc_00030C40;

loc_00030C3D: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_00030C40: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00034E20(); /* call 0x00034E20 */

loc_00030C51: ;
    ebp = MEM32(esi + 0x24);
    edi = eax;
    eax = MEM32(0x847024);
    ebx = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00030C63: ;
    esi = eax;
    esi = esi & 0x7F;
    esi = esi + 0x80;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00030C73: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = edx;
    ecx = ecx + 0x6C;
    if ((ecx == 0)) goto loc_00030C9B; /* je: equal / zero */

loc_00030C82: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00030C9B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00030CA2: ;
    MEM8(esi + 8) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030CC0
 * Original: 0x00030CC0 - 0x00030D2C (108 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00030CC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00030CCF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030D28; /* je: equal / zero */

loc_00030CD3: ;
    eax = MEM32(esi + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 8) = 0;
    if (TEST_Z(eax, eax)) goto loc_00030D13; /* je: equal / zero */

loc_00030CDE: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_00030D13; /* je: equal / zero */

loc_00030CE5: ;
    edx = MEM32(esi + 0x48);
    if (CMP_EQ(MEM16(edx), 0)) goto loc_00030D13; /* je: equal / zero */

loc_00030CEE: ;
    ecx = MEM32(eax + 0xA4);
    eax = 0; /* xor self */
    PUSH32(esp, edi);

loc_00030CF7: ;
    edi = ZX16(MEM16(eax + edx));
    if (CMP_EQ(edi, ecx)) goto loc_00030D0E; /* je: equal / zero */

loc_00030CFF: ;
    edi = MEM32(esi + 0x48);
    eax = eax + 2;
    if (CMP_NE(MEM16(eax + edi), 0)) goto loc_00030CF7; /* jne: not equal / not zero */

loc_00030D0C: ;
    goto loc_00030D12;

loc_00030D0E: ;
    MEM8(esi + 8) = 1;

loc_00030D12: ;
    POP32(esp, edi);

loc_00030D13: ;
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030D28; /* je: equal / zero */

loc_00030D1A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00030D21: ;
    eax = esi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00030D28: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030D30
 * Original: 0x00030D30 - 0x00030DBA (138 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030D30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00030D30: ;
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00030D42: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030DB3; /* je: equal / zero */

loc_00030D46: ;
    eax = MEM32(esi + 0x48);
    if (TEST_NZ(eax, eax)) goto loc_00030D57; /* jne: not equal / not zero */

loc_00030D4D: ;
    MEM8(esi + 8) = LO8(eax);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00030D57: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00030D8D; /* je: equal / zero */

loc_00030D88: ;
    eax = MEM32(eax + 0x1C);
    goto loc_00030D90;

loc_00030D8D: ;
    eax = eax | 0xFFFFFFFFu;

loc_00030D90: ;
    edx = MEM32(0x847024);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034DA0(); /* call 0x00034DA0 */

loc_00030DA5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_00030DAC: ;
    eax = esi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00030DB3: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030DC0
 * Original: 0x00030DC0 - 0x00030E75 (181 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030DC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00030DC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00030DCF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030E71; /* je: equal / zero */

loc_00030DD7: ;
    eax = MEM32(edi + 0x48);
    ecx = ZX8(MEM8(eax + 5));
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_00030E19; /* je: equal / zero */

loc_00030DE3: ;
    ecx = ecx - 2;
    xmm0 = 0.0f; /* xorps self = zero */
    if ((ecx != 0)) goto loc_00030E12; /* jne: not equal / not zero */

loc_00030DEB: ;
    xmm1 = MEMF(eax + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00030E50; /* jbe: below or equal (unsigned <=) */

loc_00030DF5: ;
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 - MEMF(0x64909C); /* subss */
    MEMF(eax + 8) = xmm1; /* movss */
    edx = MEM32(edi + 0x48);
    /* comiss xmm0, MEMF(edx + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 8))) goto loc_00030E50; /* jbe: below or equal (unsigned <=) */

loc_00030E10: ;
    eax = edx;

loc_00030E12: ;
    MEMF(eax + 8) = xmm0; /* movss */
    goto loc_00030E50;

loc_00030E19: ;
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 8))) goto loc_00030E50; /* jbe: below or equal (unsigned <=) */

loc_00030E27: ;
    eax = MEM32(edi + 0x48);
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 + MEMF(0x64909C); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    ecx = MEM32(edi + 0x48);
    xmm1 = MEMF(ecx + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00030E50; /* jbe: below or equal (unsigned <=) */

loc_00030E49: ;
    edx = ecx;
    MEMF(edx + 8) = xmm0; /* movss */

loc_00030E50: ;
    eax = MEM32(edi + 0x48);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_00030E62: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00030E69: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00030E70: ;
    POP32(esp, esi);

loc_00030E71: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030E80
 * Original: 0x00030E80 - 0x00031002 (386 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030E80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00030E8F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00030FFE; /* je: equal / zero */

loc_00030E97: ;
    eax = MEM32(edi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_00030FFA; /* je: equal / zero */

loc_00030EA2: ;
    eax = MEM32(edi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00030FFE; /* je: equal / zero */

loc_00030EAD: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_00030FFE; /* je: equal / zero */

loc_00030EB8: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00030EBF: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00030EC6: ;
    eax = MEM32(edi + 0x48);
    (void)0; /* cmp MEM16(eax + 2), 0x37 - flags set for next jcc */
    ecx = MEM32(edi + 0x24);
    if (CMP_NE(MEM16(eax + 2), 0x37)) goto loc_00030F39; /* jne: not equal / not zero */

loc_00030ED3: ;
    edx = MEM32(eax + 0xB0);
    ecx = MEM32(ecx + 0xA4);
    edx = edx & 0xFFFF;
    if (CMP_EQ(ecx, edx)) goto loc_00030F23; /* je: equal / zero */

loc_00030EE9: ;
    if (CMP_NE(ecx, 0x15F)) goto loc_00030F23; /* jne: not equal / not zero */

loc_00030EF1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00030EF6: ;
    eax = eax & 3;
    eax = eax + 0x444;
    if (CMP_EQ(eax, 0xDDA)) goto loc_00030F23; /* je: equal / zero */

loc_00030F05: ;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00030F23: ;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(edi + 0x48);
    eax = MEM32(ecx + 0xA4);
    MEM32(edx + 0xB0) = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00030F39: ;
    ecx = MEM32(ecx + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00030FFE; /* je: equal / zero */

loc_00030F47: ;
    edx = ZX16(MEM16(ecx + 0x2C6));
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = ecx << 1;
    if (CMP_GE(edx, ecx)) goto loc_00030FFE; /* jge: greater or equal (signed >=) */

loc_00030F60: ;
    if (CMP_NE(MEM32(eax + 0xB0), 0x513)) goto loc_00030FFE; /* jne: not equal / not zero */

loc_00030F70: ;
    edx = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(eax + 0xB0) = 0x3A1;
    ebp = MEM32(edx + 0x40);
    ebx = MEM32(edi + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x24);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00030F91: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00030FAC; /* jne: not equal / not zero */

loc_00030F95: ;
    edx = MEM32(edi + 0x48);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    MEM32(edx + 0xB8) = eax;
    POP32(esp, ebx);
    MEM8(edi + 8) = 0;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00030FAC: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00030FC8; /* je: equal / zero */

loc_00030FB6: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_00030FCE;

loc_00030FC8: ;
    eax = MEM32(esi + 0x580);

loc_00030FCE: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = esi;
    eax = ebx;
    ecx = 0x3A1;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00030FEE: ;
    edx = MEM32(edi + 0x48);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0xB8) = eax;
    POP32(esp, ebx);

loc_00030FFA: ;
    MEM8(edi + 8) = 0;

loc_00030FFE: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031010
 * Original: 0x00031010 - 0x0003104F (63 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031010(void)
{

loc_00031010: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00031015: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D2FEC;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 0x50);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00031050
 * Original: 0x00031050 - 0x000311C7 (375 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031050: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_0003105A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00031133; /* je: equal / zero */

loc_00031062: ;
    eax = MEM32(edi + 0x4C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_000311A0; /* je: equal / zero */

loc_0003106E: ;
    ecx = MEM32(edi + 0x50);
    if (CMP_NE(ecx, MEM32(eax + 0xB0))) goto loc_000311A0; /* jne: not equal / not zero */

loc_0003107D: ;
    eax = MEM32(edi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_000311BE; /* je: equal / zero */

loc_00031088: ;
    eax = MEM32(edi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_000311BE; /* je: equal / zero */

loc_00031093: ;
    SET_LO8(ecx, MEM8(eax + 0x9C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000310AA; /* jne: not equal / not zero */

loc_0003109D: ;
    if (CMP_EQ(MEM32(edi + 0x2C), 0x622)) goto loc_000311BE; /* je: equal / zero */

loc_000310AA: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_000310B3: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_000310BA: ;
    ebx = MEM32(edi + 0x48);
    xmm0 = MEMF(ebx + 0x6C); /* movss */
    /* comiss xmm0, MEMF(0x6490F4) - sets EFLAGS */
    eax = MEM32(edi + 0x2C);
    if ((xmm0 <= MEMF(0x6490F4))) goto loc_00031137; /* jbe: below or equal (unsigned <=) */

loc_000310CE: ;
    if (CMP_EQ(eax, 0x8C1)) goto loc_00031130; /* je: equal / zero */

loc_000310D5: ;
    eax = MEM32(0x847024);
    esi = MEM32(edi + 0x24);
    ebp = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_000310E5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003112C; /* je: equal / zero */

loc_000310E9: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00031106; /* je: equal / zero */

loc_000310F3: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0003110C;

loc_00031106: ;
    eax = MEM32(esi + 0x580);

loc_0003110C: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = ebx;
    eax = esi;
    ecx = 0x8C1;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0003112C: ;
    MEM8(edi + 8) = 0;

loc_00031130: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);

loc_00031133: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00031137: ;
    if (CMP_NE(eax, 0x8C1)) goto loc_00031130; /* jne: not equal / not zero */

loc_0003113E: ;
    eax = MEM32(0x847024);
    esi = MEM32(edi + 0x24);
    ebp = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0003114E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003112C; /* je: equal / zero */

loc_00031152: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0003116F; /* je: equal / zero */

loc_0003115C: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_00031175;

loc_0003116F: ;
    eax = MEM32(esi + 0x580);

loc_00031175: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = ebx;
    eax = esi;
    ecx = 0x8C2;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00031195: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM8(edi + 8) = 0;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000311A0: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(edi + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D33B0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000311BB: ;
    esp = esp + 0xC;

loc_000311BE: ;
    POP32(esp, esi);
    MEM8(edi + 8) = 0;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000311D0
 * Original: 0x000311D0 - 0x0003138A (442 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000311D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000311D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00031381; /* je: equal / zero */

loc_000311DF: ;
    if (CMP_EQ(MEM16(eax + 0x3AE), 0)) goto loc_00031381; /* je: equal / zero */

loc_000311ED: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000311F6: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_000311FE: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00031205: ;
    ecx = MEM32(ebp + 0x48);
    eax = MEM32(ebp + 0x24);
    xmm0 = MEMF(eax + 0x110); /* movss */
    ecx = ecx & 0x7F;
    ebx = 0; /* xor self */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    xmm0 = 0.0f; /* xorps self = zero */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00031231; /* jbe: below or equal (unsigned <=) */

loc_00031224: ;
    xmm1 = MEMF(eax + 0x118); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0003124B; /* ja: above (unsigned >) */

loc_00031231: ;
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm1, MEMF(eax + 0x110) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 0x110))) goto loc_00031252; /* jbe: below or equal (unsigned <=) */

loc_00031242: ;
    /* comiss xmm0, MEMF(eax + 0x118) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x118))) goto loc_00031252; /* jbe: below or equal (unsigned <=) */

loc_0003124B: ;
    ebx = 1;
    goto loc_0003128F;

loc_00031252: ;
    xmm1 = MEMF(eax + 0x110); /* movss */
    /* comiss xmm1, MEMF(0x648D1C) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x648D1C))) goto loc_0003126C; /* jbe: below or equal (unsigned <=) */

loc_00031263: ;
    /* comiss xmm0, MEMF(eax + 0x118) - sets EFLAGS */
    if ((xmm0 >= MEMF(eax + 0x118))) goto loc_0003128A; /* jae: above or equal (unsigned >=) */

loc_0003126C: ;
    xmm1 = MEMF(0x649354); /* movss */
    /* comiss xmm1, MEMF(eax + 0x110) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 0x110))) goto loc_0003128F; /* jbe: below or equal (unsigned <=) */

loc_0003127D: ;
    xmm1 = MEMF(eax + 0x118); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0003128F; /* jb: below (unsigned <) */

loc_0003128A: ;
    ebx = 2;

loc_0003128F: ;
    eax = ebx;
    eax = eax ^ ecx;
    eax = eax & 0x7F;
    if ((eax == 0)) goto loc_00031311; /* je: equal / zero */

loc_00031298: ;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), 2)) goto loc_000312A9; /* je: equal / zero */

loc_0003129D: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_000312A9; /* je: equal / zero */

loc_000312A2: ;
    edi = 0x4A5;
    goto loc_000312BD;

loc_000312A9: ;
    PUSH32(esp, 0x4A3);
    edi = 4;
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_000312B8: ;
    esp = esp + 4;
    edi = eax;

loc_000312BD: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x24);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_000312C6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000312F2; /* je: equal / zero */

loc_000312CA: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_000312F2; /* je: equal / zero */

loc_000312D1: ;
    eax = MEM32(esi + 0x188);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000312F2; /* je: equal / zero */

loc_000312DC: ;
    ecx = MEM32(0x84706C);
    edx = MEM32(esi + 0x190);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_000312EE: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003130C; /* jne: not equal / not zero */

loc_000312F2: ;
    edx = MEM32(ebp + 0x24);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0003130C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, esi);
    POP32(esp, edi);

loc_00031311: ;
    edx = MEM32(ebp + 0x24);
    MEM32(ebp + 0x48) = ebx;
    fp_push(MEMF(edx + 0x110)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    POP32(esp, ebx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00031346; /* ja: above (unsigned >) */

loc_00031330: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = MEMF(0x6490B8); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00031346; /* jbe: below or equal (unsigned <=) */

loc_00031343: ;
    xmm0 = xmm1; /* movaps */

loc_00031346: ;
    edx = MEM32(0x847010);
    ecx = MEM32(edx + 0x44);
    xmm0 = xmm0 * MEMF(0x648EF4); /* mulss */
    xmm1 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0003136A; /* jnp: not parity */

loc_00031365: ;
    MEMF(ecx + 4) = xmm0; /* movss */

loc_0003136A: ;
    MEM8(ecx + 9) = 0;
    eax = MEM32(edx + 0x44);
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00031385; /* jne: not equal / not zero */

loc_00031378: ;
    MEM8(eax + 8) = 1;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00031381: ;
    MEM8(ebp + 8) = 0;

loc_00031385: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00031390
 * Original: 0x00031390 - 0x000313A9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031390(void)
{
    int _flags = 0; /* fallback flag var */

loc_00031390: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_0003139A: ;
    eax = MEM32(esi + 0x24);
    if (TEST_NZ(eax, eax)) { sub_000313A9(); return; } /* jne: not equal / not zero */

loc_000313A1: ;
    MEM8(esi + 8) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000314C0
 * Original: 0x000314C0 - 0x00031504 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000314C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000314C0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_000314C5: ;
    ecx = 0; /* xor self */
    MEM32(eax) = 0x5D30AC;
    MEM32(eax + 0x50) = edi;
    MEM32(eax + 0x54) = 0;
    MEM32(eax + 0x48) = esi;
    (void)0; /* cmp MEM32(esi + 0x2AC), 0x43 - flags set for next jcc */
    edx = MEM32(esp + 4);
    SET_LO8(ecx, (CMP_NE(MEM32(esi + 0x2AC), 0x43)) ? 1 : 0); /* setne */
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;
    ecx--;
    ecx = ecx & 0x2A3;
    ecx = ecx + 0x61C;
    MEM32(eax + 0x4C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031510
 * Original: 0x00031510 - 0x0003167E (366 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031510: ;
    esp = esp - 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00031520: ;
    eax = MEM32(edi + 0x50);
    ecx = eax;
    ecx = ecx & 0xFFF;
    ecx = ecx << 4;
    ebx = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(edi + 0x48);
    esi = MEM32(ecx + 0x3E4);
    fp_push(MEMF(esi + 0x264)); /* fld float */
    eax = (uint32_t)((int32_t)eax >> 0xC);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 0xFFF;
    eax = eax << 4;
    ebx = (uint32_t)((int32_t)ebx >> 0x18);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00031560: ;
    fp_push(MEMF(esi + 0x260)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp = ZX16(LO16(eax));
    ebp = ebp & 0xFFFFFFF0u;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00031577: ;
    esi = ZX16(LO16(eax));
    eax = MEM32(edi + 0x2C);
    esi = esi & 0xFFFFFFF0u;
    if (CMP_EQ(eax, 0x622)) goto loc_00031670; /* je: equal / zero */

loc_0003158B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00031592: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00031599: ;
    ecx = MEM32(edi + 0x48);
    ecx = MEM32(ecx + 0x3E4);
    edx = MEM32(ecx + 0x2B0);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_NE(edx, 2)) goto loc_00031670; /* jne: not equal / not zero */

loc_000315B3: ;
    if (CMP_NE(MEM32(esp + 0x10), ebp)) goto loc_000315C3; /* jne: not equal / not zero */

loc_000315B9: ;
    if (CMP_NE(MEM32(esp + 0x14), esi)) goto loc_000315C3; /* jne: not equal / not zero */

loc_000315BF: ;
    ebx = 0; /* xor self */
    goto loc_000315D2;

loc_000315C3: ;
    if (CMP_AE(ebx, 0xA)) goto loc_000315D0; /* jae: above or equal (unsigned >=) */

loc_000315C8: ;
    ebx = ebx + MEM32(0x7FA208);
    goto loc_000315D2;

loc_000315D0: ;
    SET_LO8(eax, 1);

loc_000315D2: ;
    edx = MEM32(edi + 0x54);
    esi = esi >> 4;
    esi = esi & 0xFFF;
    ebx = ebx << 0xC;
    esi = esi | ebx;
    ebp = ebp >> 4;
    esi = esi << 0xC;
    ebp = ebp & 0xFFF;
    esi = esi | ebp;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(edi + 0x4C);
    MEM32(edi + 0x50) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00031630; /* je: equal / zero */

loc_000315FB: ;
    if (CMP_EQ(edx, eax)) goto loc_00031674; /* je: equal / zero */

loc_000315FF: ;
    esi = MEM32(edi + 4);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_00019AA0(); /* call 0x00019AA0 */

loc_00031609: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    ecx = MEM32(edi + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x24);
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_0003161D: ;
    ecx = MEM32(edi + 0x4C);
    MEM32(edi + 0x58) = eax;
    MEM32(edi + 0x54) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00031630: ;
    if (CMP_NE(edx, eax)) goto loc_00031674; /* jne: not equal / not zero */

loc_00031634: ;
    eax = MEM32(0x847024);
    esi = MEM32(eax + 0x40);
    eax = MEM32(edi + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_00031645: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00031674; /* jne: not equal / not zero */

loc_00031649: ;
    eax = MEM32(edi + 0x48);
    edx = MEM32(eax + 0x2AC);
    eax = MEM32(edi + 0x24);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, 0x43 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(edx, 0x43)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    ecx--;
    ecx = ecx & 0x2A5;
    ecx = ecx + 0x61D;
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_00031670: ;
    MEM8(edi + 8) = 0;

loc_00031674: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00031680
 * Original: 0x00031680 - 0x000316BE (62 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031680(void)
{

loc_00031680: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00031685: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D307C;
    MEM32(eax + 0x54) = edi;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edi;
    MEM32(eax + 0x38) = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000316C0
 * Original: 0x000316C0 - 0x00031867 (423 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000316C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000316C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000316D9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003185E; /* je: equal / zero */

loc_000316E1: ;
    eax = MEM32(ebx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_0003183C; /* je: equal / zero */

loc_000316EC: ;
    edx = MEM32(ebx + 0x50);
    if (CMP_NE(edx, MEM32(eax + 0xB0))) goto loc_0003183C; /* jne: not equal / not zero */

loc_000316FB: ;
    eax = MEM32(ebx + 0x54);
    eax--;
    if ((eax == 0)) goto loc_00031797; /* je: equal / zero */

loc_00031705: ;
    eax--;
    if ((eax == 0)) goto loc_0003172C; /* je: equal / zero */

loc_00031708: ;
    eax--;
    if ((eax != 0)) goto loc_0003181E; /* jne: not equal / not zero */

loc_0003170F: ;
    eax = MEM32(ebx + 0x48);
    if (TEST_NZ(MEM8(eax + 0x1114), 2)) goto loc_0003181E; /* jne: not equal / not zero */

loc_0003171F: ;
    MEM8(ebx + 8) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0003172C: ;
    eax = MEM32(ebx + 0x48);
    if (TEST_Z(MEM8(eax + 0x1114), 1)) goto loc_0003185A; /* je: equal / zero */

loc_0003173C: ;
    fp_push(MEMF(eax + 0x79C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00031775; /* jbe: below or equal (unsigned <=) */

loc_00031760: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B);
    goto loc_00031816;

loc_00031775: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0003178E; /* jbe: below or equal (unsigned <=) */

loc_00031788: ;
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_0003178E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B);
    goto loc_00031816;

loc_00031797: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esi = MEM32(ebx + 0x24);
    edx = esp + 0x20;
    ecx = 0x10;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    PUSH32(esp, eax);
    ecx = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000317EE: ;
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(eax + 0x580);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034DE0(); /* call 0x00034DE0 */

loc_0003180A: ;
    eax = MEM32(ebx + 0x48);
    ecx = MEM32(eax + 0x10F4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1A);

loc_00031816: ;
    esi = MEM32(ebx + 4);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_0003181E: ;
    eax = MEM32(ebx + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0003185A; /* je: equal / zero */

loc_00031825: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0003182C: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00031833: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0003183C: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(ebx + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D34D8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00031857: ;
    esp = esp + 0xC;

loc_0003185A: ;
    MEM8(ebx + 8) = 0;

loc_0003185E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00031870
 * Original: 0x00031870 - 0x000318AF (63 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031870(void)
{

loc_00031870: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00031875: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D304C;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000318B0
 * Original: 0x000318B0 - 0x00031A0C (348 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000318B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000318B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000318C9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00031A03; /* je: equal / zero */

loc_000318D1: ;
    esi = MEM32(ebx + 0x24);
    if (TEST_Z(esi, esi)) goto loc_000319FF; /* je: equal / zero */

loc_000318DC: ;
    eax = MEM32(ebx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_000319E1; /* je: equal / zero */

loc_000318E7: ;
    edx = MEM32(ebx + 0x50);
    if (CMP_NE(edx, MEM32(eax + 0xB0))) goto loc_000319E1; /* jne: not equal / not zero */

loc_000318F6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0x10;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    PUSH32(esp, ecx);
    edx = ecx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0003194A: ;
    ecx = MEM32(ebx + 0x24);
    edx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x580);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034DE0(); /* call 0x00034DE0 */

loc_00031966: ;
    eax = MEM32(ebx + 0x48);
    xmm0 = MEMF(eax + 0xFE0); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0xFDC); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_000319A4; /* ja: above (unsigned >) */

loc_00031997: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000319AA; /* jbe: below or equal (unsigned <=) */

loc_000319A4: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_000319AA: ;
    eax = MEM32(eax + 0xFEC);
    esi = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_000319BB: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_000319CA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_000319D1: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_000319D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000319E1: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(ebx + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D3338);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000319FC: ;
    esp = esp + 0xC;

loc_000319FF: ;
    MEM8(ebx + 8) = 0;

loc_00031A03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031A10
 * Original: 0x00031A10 - 0x00031A4F (63 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031A10(void)
{

loc_00031A10: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00031A15: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D2FBC;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00031A50
 * Original: 0x00031A50 - 0x00031B8A (314 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00031A50: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00031A69: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00031B81; /* je: equal / zero */

loc_00031A71: ;
    eax = MEM32(ebx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_00031B5F; /* je: equal / zero */

loc_00031A7C: ;
    edx = MEM32(ebx + 0x50);
    if (CMP_NE(edx, MEM32(eax + 0xB0))) goto loc_00031B5F; /* jne: not equal / not zero */

loc_00031A8B: ;
    esi = MEM32(ebx + 0x24);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0x10;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    PUSH32(esp, ecx);
    edx = ecx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00031AE2: ;
    ecx = MEM32(ebx + 0x24);
    edx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x580);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034DE0(); /* call 0x00034DE0 */

loc_00031AFE: ;
    eax = MEM32(ebx + 0x48);
    xmm0 = MEMF(eax + 0x1370); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x126C); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00031B2C; /* ja: above (unsigned >) */

loc_00031B1F: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00031B32; /* jbe: below or equal (unsigned <=) */

loc_00031B2C: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_00031B32: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_00031B41: ;
    eax = MEM32(ebx + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00031B7D; /* je: equal / zero */

loc_00031B48: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00031B4F: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00031B56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00031B5F: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(ebx + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D32C0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00031B7A: ;
    esp = esp + 0xC;

loc_00031B7D: ;
    MEM8(ebx + 8) = 0;

loc_00031B81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031B90
 * Original: 0x00031B90 - 0x00031BCE (62 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031B90(void)
{

loc_00031B90: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00031B95: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D2F5C;
    MEM32(eax + 0x54) = edi;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edi;
    MEM32(eax + 0x38) = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031BD0
 * Original: 0x00031BD0 - 0x00031CC6 (246 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031BD0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00031BD0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00031BDF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00031CC2; /* je: equal / zero */

loc_00031BE7: ;
    eax = MEM32(edi + 0x4C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ebx)) goto loc_00031C9F; /* je: equal / zero */

loc_00031BF6: ;
    edx = MEM32(edi + 0x50);
    if (CMP_NE(edx, MEM32(eax + 0xB0))) goto loc_00031C9F; /* jne: not equal / not zero */

loc_00031C05: ;
    eax = MEM32(edi + 0x54);
    eax = eax - 2;
    if ((eax == 0)) goto loc_00031C25; /* je: equal / zero */

loc_00031C0D: ;
    eax--;
    if ((eax != 0)) goto loc_00031C86; /* jne: not equal / not zero */

loc_00031C10: ;
    eax = MEM32(edi + 0x48);
    if (TEST_NZ(MEM8(eax + 0x1278), 2)) goto loc_00031C86; /* jne: not equal / not zero */

loc_00031C1C: ;
    POP32(esp, esi);
    MEM8(edi + 8) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00031C25: ;
    eax = MEM32(edi + 0x48);
    if (TEST_Z(MEM8(eax + 0x1278), 1)) goto loc_00031CBD; /* je: equal / zero */

loc_00031C35: ;
    fp_push(MEMF(eax + 0x79C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00031C5E; /* jbe: below or equal (unsigned <=) */

loc_00031C59: ;
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_00031C71;

loc_00031C5E: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00031C77; /* jbe: below or equal (unsigned <=) */

loc_00031C71: ;
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_00031C77: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_00031C86: ;
    if (CMP_EQ(MEM32(edi + 0x24), ebx)) goto loc_00031CBD; /* je: equal / zero */

loc_00031C8B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00031C92: ;
    eax = edi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00031C99: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00031C9F: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(edi + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D3250);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00031CBA: ;
    esp = esp + 0xC;

loc_00031CBD: ;
    POP32(esp, esi);
    MEM8(edi + 8) = LO8(ebx);
    POP32(esp, ebx);

loc_00031CC2: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00031CD0
 * Original: 0x00031CD0 - 0x00031D0F (63 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031CD0(void)
{

loc_00031CD0: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00031CD5: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D2F2C;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00031D10
 * Original: 0x00031D10 - 0x00031E6C (348 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00031D10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00031D29: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00031E63; /* je: equal / zero */

loc_00031D31: ;
    esi = MEM32(ebx + 0x24);
    if (TEST_Z(esi, esi)) goto loc_00031E5F; /* je: equal / zero */

loc_00031D3C: ;
    eax = MEM32(ebx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_00031E41; /* je: equal / zero */

loc_00031D47: ;
    edx = MEM32(ebx + 0x50);
    if (CMP_NE(edx, MEM32(eax + 0xB0))) goto loc_00031E41; /* jne: not equal / not zero */

loc_00031D56: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0x10;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    PUSH32(esp, ecx);
    edx = ecx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648EC0); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00031DAA: ;
    ecx = MEM32(ebx + 0x24);
    edx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x580);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034DE0(); /* call 0x00034DE0 */

loc_00031DC6: ;
    eax = MEM32(ebx + 0x48);
    xmm0 = MEMF(eax + 0xF50); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0xF4C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00031E04; /* ja: above (unsigned >) */

loc_00031DF7: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00031E0A; /* jbe: below or equal (unsigned <=) */

loc_00031E04: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_00031E0A: ;
    eax = MEM32(eax + 0xF5C);
    esi = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x21);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_00031E1B: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_00031E2A: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00031E31: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00031E38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00031E41: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(ebx + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D31D0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00031E5C: ;
    esp = esp + 0xC;

loc_00031E5F: ;
    MEM8(ebx + 8) = 0;

loc_00031E63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031E70
 * Original: 0x00031E70 - 0x00031EAE (62 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031E70(void)
{

loc_00031E70: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00031E75: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D2ECC;
    MEM32(eax + 0x54) = edi;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edi;
    MEM32(eax + 0x38) = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031EB0
 * Original: 0x00031EB0 - 0x00032081 (465 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00031EB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00031EC9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00032078; /* je: equal / zero */

loc_00031ED1: ;
    eax = MEM32(ebx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_00032056; /* je: equal / zero */

loc_00031EDC: ;
    edx = MEM32(ebx + 0x50);
    if (CMP_NE(edx, MEM32(eax + 0xB0))) goto loc_00032056; /* jne: not equal / not zero */

loc_00031EEB: ;
    eax = MEM32(ebx + 0x54);
    eax--;
    if ((eax == 0)) goto loc_00031F8A; /* je: equal / zero */

loc_00031EF5: ;
    eax--;
    if ((eax == 0)) goto loc_00031F1C; /* je: equal / zero */

loc_00031EF8: ;
    eax--;
    if ((eax != 0)) goto loc_00032038; /* jne: not equal / not zero */

loc_00031EFF: ;
    eax = MEM32(ebx + 0x48);
    if (TEST_NZ(MEM8(eax + 0x1278), 2)) goto loc_00032038; /* jne: not equal / not zero */

loc_00031F0F: ;
    MEM8(ebx + 8) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00031F1C: ;
    eax = MEM32(ebx + 0x48);
    if (TEST_Z(MEM8(eax + 0x1278), 1)) goto loc_00032074; /* je: equal / zero */

loc_00031F2C: ;
    fp_push(MEMF(eax + 0x79C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00031F65; /* jbe: below or equal (unsigned <=) */

loc_00031F50: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22);
    goto loc_00032030;

loc_00031F65: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00031F7E; /* jbe: below or equal (unsigned <=) */

loc_00031F78: ;
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_00031F7E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22);
    goto loc_00032030;

loc_00031F8A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esi = MEM32(ebx + 0x24);
    edx = esp + 0x20;
    ecx = 0x10;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    PUSH32(esp, eax);
    ecx = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00031FE1: ;
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(eax + 0x580);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034DE0(); /* call 0x00034DE0 */

loc_00031FFD: ;
    eax = MEM32(ebx + 0x48);
    xmm0 = MEMF(eax + 0x126C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00032023; /* ja: above (unsigned >) */

loc_00032016: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00032029; /* jbe: below or equal (unsigned <=) */

loc_00032023: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_00032029: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x23);

loc_00032030: ;
    esi = MEM32(ebx + 4);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_00032038: ;
    eax = MEM32(ebx + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00032074; /* je: equal / zero */

loc_0003203F: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00032046: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_0003204D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00032056: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(ebx + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D3158);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00032071: ;
    esp = esp + 0xC;

loc_00032074: ;
    MEM8(ebx + 8) = 0;

loc_00032078: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00032090
 * Original: 0x00032090 - 0x000320CF (63 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032090(void)
{

loc_00032090: ;
    PUSH32(esp, 0); sub_0002D3E0(); /* call 0x0002D3E0 */

loc_00032095: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x4C) = 0;
    MEM32(eax + 0x50) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5D2E9C;
    MEM32(eax + 0x48) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ecx + 0xB0);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = esi;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000320D0
 * Original: 0x000320D0 - 0x0003220A (314 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000320D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000320D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000320E9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00032201; /* je: equal / zero */

loc_000320F1: ;
    eax = MEM32(ebx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_000321DF; /* je: equal / zero */

loc_000320FC: ;
    edx = MEM32(ebx + 0x50);
    if (CMP_NE(edx, MEM32(eax + 0xB0))) goto loc_000321DF; /* jne: not equal / not zero */

loc_0003210B: ;
    esi = MEM32(ebx + 0x24);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0x10;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    PUSH32(esp, ecx);
    edx = ecx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00032162: ;
    ecx = MEM32(ebx + 0x24);
    edx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x580);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034DE0(); /* call 0x00034DE0 */

loc_0003217E: ;
    eax = MEM32(ebx + 0x48);
    xmm0 = MEMF(eax + 0x79C); /* movss */
    xmm0 = xmm0 * MEMF(0x6497D0); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_000321AC; /* ja: above (unsigned >) */

loc_0003219F: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000321B2; /* jbe: below or equal (unsigned <=) */

loc_000321AC: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_000321B2: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_0001A310(); /* call 0x0001A310 */

loc_000321C1: ;
    eax = MEM32(ebx + 0x24);
    if (TEST_Z(eax, eax)) goto loc_000321FD; /* je: equal / zero */

loc_000321C8: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_000321CF: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_000321D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000321DF: ;
    eax = MEM32(eax + 0xB0);
    ecx = MEM32(ebx + 0x50);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D30E0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000321FA: ;
    esp = esp + 0xC;

loc_000321FD: ;
    MEM8(ebx + 8) = 0;

loc_00032201: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032210
 * Original: 0x00032210 - 0x00032290 (128 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032210(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00032210: ;
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_00032222: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00032289; /* je: equal / zero */

loc_00032226: ;
    eax = MEM32(esi + 0x48);
    if (TEST_NZ(eax, eax)) goto loc_00032237; /* jne: not equal / not zero */

loc_0003222D: ;
    MEM8(esi + 8) = LO8(eax);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00032237: ;
    xmm0 = (float)(int32_t)MEM32(eax + 0x34); /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(eax + 0x38); /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(eax + 0x3C); /* cvtsi2ss */
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00032264; /* je: equal / zero */

loc_0003225F: ;
    eax = MEM32(eax + 0x1C);
    goto loc_00032267;

loc_00032264: ;
    eax = eax | 0xFFFFFFFFu;

loc_00032267: ;
    ecx = eax;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00034DA0(); /* call 0x00034DA0 */

loc_0003227B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00032282: ;
    eax = esi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00032289: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032290
 * Original: 0x00032290 - 0x000322D4 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032290(void)
{
    int _flags = 0; /* fallback flag var */

loc_00032290: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x48;
    MEM32(esi) = 0x5D2B94;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000322B6; /* je: equal / zero */

loc_000322A5: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000322B6: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x5D2738;
    if (TEST_Z(ecx, ecx)) goto loc_000322D1; /* je: equal / zero */

loc_000322C3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_000322CA: ;
    MEM32(esi + 4) = 0;

loc_000322D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000322E0
 * Original: 0x000322E0 - 0x00032398 (184 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000322E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;

loc_000322E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000322EA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00032394; /* je: equal / zero */

loc_000322F2: ;
    xmm1 = MEMF(0x683AC0); /* movss */
    /* ucomiss xmm1, MEMF(0x648D34) - sets EFLAGS */
    xmm0 = MEMF(0x648CE4); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00032312; /* jnp: not parity */

loc_0003230F: ;
    xmm0 = xmm1; /* movaps */

loc_00032312: ;
    eax = MEM32(0x8470DC);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x6497E4); /* mulss */
    xmm3 = xmm0; /* movaps */
    if (TEST_Z(eax, eax)) { sub_00032398(); return; } /* je: equal / zero */

loc_00032326: ;
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) goto loc_00032394; /* je: equal / zero */

loc_00032330: ;
    ecx = MEM32(esi + 0x24);
    ecx = ecx + 0x78;
    PUSH32(esp, ecx);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_00032340: ;
    xmm1 = xmm3; /* movaps */
    esp = esp + 8;
    xmm1 = xmm1 * xmm3; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00032376; /* jb: below (unsigned <) */

loc_0003234F: ;
    if (CMP_NE(MEM32(esi + 0x48), 0xFFFFFFFFu)) goto loc_00032394; /* jne: not equal / not zero */

loc_00032355: ;
    edx = MEM32(0x847024);
    ecx = 0xC8C;
    MEM32(esi + 0x4C) = ecx;
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_0003236F: ;
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00032376: ;
    eax = MEM32(esi + 0x48);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x48;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00032393; /* je: equal / zero */

loc_00032382: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_00032393: ;
    POP32(esp, edi);

loc_00032394: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000323A0
 * Original: 0x000323A0 - 0x000323E4 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000323A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000323A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x48;
    MEM32(esi) = 0x5D2E6C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000323C6; /* je: equal / zero */

loc_000323B5: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000323C6: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x5D2738;
    if (TEST_Z(ecx, ecx)) goto loc_000323E1; /* je: equal / zero */

loc_000323D3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_000323DA: ;
    MEM32(esi + 4) = 0;

loc_000323E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000323F0
 * Original: 0x000323F0 - 0x0003249F (175 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000323F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;

loc_000323F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000323FA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003247A; /* je: equal / zero */

loc_000323FE: ;
    xmm1 = MEMF(0x66C780); /* movss */
    /* ucomiss xmm1, MEMF(0x648D34) - sets EFLAGS */
    xmm0 = MEMF(0x648CE4); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0003241E; /* jnp: not parity */

loc_0003241B: ;
    xmm0 = xmm1; /* movaps */

loc_0003241E: ;
    eax = MEM32(0x8470DC);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x6497E4); /* mulss */
    xmm3 = xmm0; /* movaps */
    if (TEST_Z(eax, eax)) { sub_0003249F(); return; } /* je: equal / zero */

loc_00032432: ;
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) goto loc_0003247A; /* je: equal / zero */

loc_0003243C: ;
    PUSH32(esp, edi);
    edi = esi + 0x50;
    eax = eax + 0x78;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_0003244A: ;
    xmm1 = xmm3; /* movaps */
    esp = esp + 8;
    xmm1 = xmm1 * xmm3; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0003247E; /* jb: below (unsigned <) */

loc_00032459: ;
    if (CMP_NE(MEM32(esi + 0x48), 0xFFFFFFFFu)) goto loc_00032479; /* jne: not equal / not zero */

loc_0003245F: ;
    edx = MEM32(0x847024);
    ecx = 0x4D0;
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(edx + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_00032476: ;
    MEM32(esi + 0x48) = eax;

loc_00032479: ;
    POP32(esp, edi);

loc_0003247A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0003247E: ;
    eax = MEM32(esi + 0x48);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = esi + 0x48;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00032479; /* je: equal / zero */

loc_00032489: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0003249A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000324B0
 * Original: 0x000324B0 - 0x00032543 (147 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000324B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000324B0: ;
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_000324C2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003253C; /* je: equal / zero */

loc_000324C6: ;
    ecx = MEM32(esi + 0x24);
    edx = 0; /* xor self */
    if (CMP_EQ(ecx, edx)) goto loc_00032539; /* je: equal / zero */

loc_000324CF: ;
    eax = MEM32(0x8470DC);
    if (CMP_EQ(eax, edx)) goto loc_00032539; /* je: equal / zero */

loc_000324D8: ;
    eax = MEM32(eax + 0x3E0);
    if (CMP_EQ(eax, edx)) goto loc_00032524; /* je: equal / zero */

loc_000324E2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    xmm1 = xmm1 - MEMF(ecx + 0x7C); /* subss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_EQ(eax, edx)) goto loc_0003250D; /* je: equal / zero */

loc_00032508: ;
    eax = MEM32(eax + 0x1C);
    goto loc_00032510;

loc_0003250D: ;
    eax = eax | 0xFFFFFFFFu;

loc_00032510: ;
    ecx = eax;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00034DE0(); /* call 0x00034DE0 */

loc_00032524: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0003252B: ;
    eax = esi;
    PUSH32(esp, 0); sub_0002DF00(); /* call 0x0002DF00 */

loc_00032532: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00032539: ;
    MEM8(esi + 8) = LO8(edx);

loc_0003253C: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032550
 * Original: 0x00032550 - 0x00032555 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032550(void)
{

loc_00032550: ;
    eax = 0; /* xor self */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00032560
 * Original: 0x00032560 - 0x0003257E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032560(void)
{
    int _flags = 0; /* fallback flag var */

loc_00032560: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0003257B; /* je: equal / zero */

loc_00032568: ;
    edx = MEM32(eax);
    ecx = ecx + 0x5C;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_0003257B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032580
 * Original: 0x00032580 - 0x0003259E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00032580: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0003259B; /* je: equal / zero */

loc_00032588: ;
    edx = MEM32(eax);
    ecx = ecx + 0x74;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_0003259B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000325A0
 * Original: 0x000325A0 - 0x000325A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000325A0(void)
{

loc_000325A0: ;
    eax = ecx + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_000325B0
 * Original: 0x000325B0 - 0x000325C1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000325B0(void)
{
    float xmm0;

loc_000325B0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(ecx + 0x80) = xmm0; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000325D0
 * Original: 0x000325D0 - 0x000325D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000325D0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000325D0: ;
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000325E0
 * Original: 0x000325E0 - 0x000325ED (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000325E0(void)
{

loc_000325E0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x88) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000325F0
 * Original: 0x000325F0 - 0x000325F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000325F0(void)
{

loc_000325F0: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00032600
 * Original: 0x00032600 - 0x00032604 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032600(void)
{

loc_00032600: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_00032610
 * Original: 0x00032610 - 0x0003261E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032610(void)
{
    int _flags = 0; /* fallback flag var */

loc_00032610: ;
    SET_LO8(edx, MEM8(ecx + 0x88));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00032620
 * Original: 0x00032620 - 0x00032625 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032620(void)
{

loc_00032620: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00032630
 * Original: 0x00032630 - 0x0003263A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032630(void)
{

loc_00032630: ;
    MEM8(ecx + 0x94) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032640
 * Original: 0x00032640 - 0x000326F7 (183 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032640: ;
    eax = MEM32(0x84A19C);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi) = 0x5D367C;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = 0xFFFFFFFFu;
    MEM32(edi + 0x28) = ebx;
    MEM8(edi + 0x2C) = LO8(ebx);
    MEMF(edi + 0x30) = xmm0; /* movss */
    MEM32(edi + 0x34) = ebx;
    MEM8(edi + 0x38) = LO8(ebx);
    MEM32(edi + 0x3C) = ebx;
    if (CMP_NE(eax, ebx)) goto loc_0003267E; /* jne: not equal / not zero */

loc_00032679: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0003267E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, ebp);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_000326C8; /* je: equal / zero */

loc_000326A6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_000326C8; /* jb: below (unsigned <) */

loc_000326AF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000326B9: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000326C1: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_000326E9; /* jne: not equal / not zero */

loc_000326C8: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000326DA: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000326E2: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_000326F7(); return; } /* je: equal / zero */

loc_000326E9: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    g_seh_ebp = ebp; sub_000326F9(); return; /* tail jmp 0x000326F9 */

}

/**
 * sub_000327C0
 * Original: 0x000327C0 - 0x000327EA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000327C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000327C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000327F0(); /* call 0x000327F0 */

loc_000327C8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000327E4; /* je: equal / zero */

loc_000327CF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000327E4; /* je: equal / zero */

loc_000327D7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000327E1: ;
    esp = esp + 4;

loc_000327E4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000327F0
 * Original: 0x000327F0 - 0x000328E7 (247 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000327F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000327F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    eax = MEM32(ebp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebp + 0xC;
    MEM32(ebp) = 0x5D367C;
    if (TEST_Z(eax, eax)) goto loc_00032833; /* je: equal / zero */

loc_00032807: ;
    SET_LO8(ecx, MEM8(0x846FF5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00032826; /* je: equal / zero */

loc_00032811: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5D37A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00032823: ;
    esp = esp + 0xC;

loc_00032826: ;
    esi = edi;
    PUSH32(esp, 0); sub_00402490(); /* call 0x00402490 */

loc_0003282D: ;
    MEM32(edi) = 0;

loc_00032833: ;
    ecx = MEM32(ebp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_000328B2; /* je: equal / zero */

loc_0003283A: ;
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_0003288E; /* je: equal / zero */

loc_00032841: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00032851; /* je: equal / zero */

loc_00032847: ;
    MEM32(ecx + 0x580) = 0xFFFFFFFFu;

loc_00032851: ;
    esi = MEM32(ebp + 4);
    if (CMP_EQ(eax, esi)) goto loc_00032886; /* je: equal / zero */

loc_00032858: ;
    edi = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    edx = edi;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0003287A: ;
    ecx = MEM32(esi + 0x10);
    esp = esp + 4;
    ecx--;
    eax = edi;
    MEM32(esi + 0x10) = ecx;

loc_00032886: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, MEM32(ebp + 4))) goto loc_00032841; /* jne: not equal / not zero */

loc_0003288E: ;
    edi = MEM32(ebp + 4);
    if (TEST_Z(edi, edi)) goto loc_000328AB; /* je: equal / zero */

loc_00032895: ;
    PUSH32(esp, 0); sub_000208E0(); /* call 0x000208E0 */

loc_0003289A: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000328A8: ;
    esp = esp + 4;

loc_000328AB: ;
    MEM32(ebp + 4) = 0;

loc_000328B2: ;
    edi = MEM32(ebp + 8);
    if (TEST_Z(edi, edi)) goto loc_000328E2; /* je: equal / zero */

loc_000328B9: ;
    PUSH32(esp, 0); sub_000208E0(); /* call 0x000208E0 */

loc_000328BE: ;
    edi = MEM32(ebp + 8);
    if (TEST_Z(edi, edi)) goto loc_000328DB; /* je: equal / zero */

loc_000328C5: ;
    PUSH32(esp, 0); sub_000208E0(); /* call 0x000208E0 */

loc_000328CA: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000328D8: ;
    esp = esp + 4;

loc_000328DB: ;
    MEM32(ebp + 8) = 0;

loc_000328E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000328F0
 * Original: 0x000328F0 - 0x0003290E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000328F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000328F0: ;
    if (TEST_Z(eax, eax)) goto loc_0003290D; /* je: equal / zero */

loc_000328F4: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_00032900: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x2C) = 0;
    POP32(esp, edi);

loc_0003290D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00032910
 * Original: 0x00032910 - 0x0003295F (79 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00032910: ;
    PUSH32(esp, ecx);
    if (TEST_Z(ecx, ecx)) goto loc_0003295D; /* je: equal / zero */

loc_00032915: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, esi)) goto loc_0003295C; /* je: equal / zero */

loc_00032920: ;
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_0003292E; /* je: equal / zero */

loc_00032924: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, esi)) goto loc_00032920; /* jne: not equal / not zero */

loc_0003292B: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0003292E: ;
    if (CMP_EQ(eax, esi)) goto loc_0003295C; /* je: equal / zero */

loc_00032932: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00032952: ;
    eax = MEM32(esi + 0x10);
    esp = esp + 4;
    eax--;
    MEM32(esi + 0x10) = eax;

loc_0003295C: ;
    POP32(esp, esi);

loc_0003295D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032960
 * Original: 0x00032960 - 0x00032990 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032960(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00032960: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    PUSH32(esp, 0);
    ecx++;
    PUSH32(esp, ebx);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_00032973: ;
    eax = MEM32(ebx + 0x20);
    MEM32(esi + eax * 4 + 0x14) = MEM32(esi + eax * 4 + 0x14) + 1;
    (void)0; /* cmp eax, MEM32(esi + 0x28) - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_LE(eax, MEM32(esi + 0x28))) goto loc_00032983; /* jle: less or equal (signed <=) */

loc_00032980: ;
    MEM32(esi + 0x28) = eax;

loc_00032983: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x2C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00032990
 * Original: 0x00032990 - 0x00032A27 (151 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032990(void)
{
    int _flags = 0; /* fallback flag var */

loc_00032990: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C);
    if (CMP_LE(eax & eax, 0)) goto loc_0003299F; /* jle: less or equal (signed <=) */

loc_0003299B: ;
    eax--;
    MEM32(esi + 0x3C) = eax;

loc_0003299F: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, eax)) goto loc_00032A24; /* je: equal / zero */

loc_000329A9: ;
    /* nop */

loc_000329B0: ;
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_000329BF; /* je: equal / zero */

loc_000329B4: ;
    ecx = MEM32(ecx + 0xC);
    if (CMP_NE(ecx, MEM32(esi + 8))) goto loc_000329B0; /* jne: not equal / not zero */

loc_000329BC: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000329BF: ;
    eax = MEM32(edx + 0x20);
    edx = esi + eax * 4 + 0x14;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    edi--;
    MEM32(edx) = edi;
    if (CMP_NE(eax, MEM32(esi + 0x28))) goto loc_000329F2; /* jne: not equal / not zero */

loc_000329D1: ;
    if (TEST_NZ(edi, edi)) goto loc_000329F2; /* jne: not equal / not zero */

loc_000329D5: ;
    if (TEST_Z(eax, eax)) goto loc_000329F2; /* je: equal / zero */

loc_000329D9: ;
    /* nop */

loc_000329E0: ;
    if (CMP_NE(MEM32(edx), 0)) goto loc_000329EF; /* jne: not equal / not zero */

loc_000329E5: ;
    eax--;
    edx = edx - 4;
    if (TEST_NZ(eax, eax)) goto loc_000329E0; /* jne: not equal / not zero */

loc_000329ED: ;
    goto loc_000329F2;

loc_000329EF: ;
    MEM32(esi + 0x28) = eax;

loc_000329F2: ;
    esi = MEM32(esi + 8);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(ecx, esi)) goto loc_00032A24; /* je: equal / zero */

loc_000329FA: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00032A1A: ;
    eax = MEM32(esi + 0x10);
    esp = esp + 4;
    eax--;
    MEM32(esi + 0x10) = eax;

loc_00032A24: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032A30
 * Original: 0x00032A30 - 0x00032A5C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00032A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5D3640;
    PUSH32(esp, 0); sub_000327F0(); /* call 0x000327F0 */

loc_00032A3E: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00032A56; /* je: equal / zero */

loc_00032A45: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00032A53: ;
    esp = esp + 4;

loc_00032A56: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032A60
 * Original: 0x00032A60 - 0x00032AC3 (99 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032A60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x646054);
    ebx = ecx;
    PUSH32(esp, 3);
    PUSH32(esp, 0x646048);
    eax = 0; /* xor self */
    ecx = 0x7C;
    PUSH32(esp, 0); sub_00401230(); /* call 0x00401230 */

loc_00032A80: ;
    esi = eax;
    esp = esp + 0x10;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = 6;
    eax = MEM32(0x84B898);
    PUSH32(esp, 1);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_0054AFCB(); /* call 0x0054AFCB */

loc_00032AA0: ;
    if (CMP_GE(eax & eax, 0)) { sub_00032AC3(); return; } /* jge: greater or equal (signed >=) */

loc_00032AA4: ;
    PUSH32(esp, 0xC5);
    PUSH32(esp, 0x646054);
    ecx = 0; /* xor self */
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00401300(); /* call 0x00401300 */

loc_00032AB9: ;
    esp = esp + 8;
    edi = 0; /* xor self */
    MEM32(ebx + 0xC) = edi;
    g_seh_ebp = ebp; sub_00032B42(); return; /* tail jmp 0x00032B42 */

}

/**
 * sub_00032BF0
 * Original: 0x00032BF0 - 0x00032C1C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032BF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00032BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5D3604;
    PUSH32(esp, 0); sub_000327F0(); /* call 0x000327F0 */

loc_00032BFE: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00032C16; /* je: equal / zero */

loc_00032C05: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00032C13: ;
    esp = esp + 4;

loc_00032C16: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032C20
 * Original: 0x00032C20 - 0x00032C83 (99 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032C20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x646054);
    ebp = ecx;
    PUSH32(esp, 3);
    PUSH32(esp, 0x646048);
    eax = 0; /* xor self */
    ecx = 0x7C;
    PUSH32(esp, 0); sub_00401230(); /* call 0x00401230 */

loc_00032C40: ;
    esi = eax;
    esp = esp + 0x10;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = 5;
    eax = MEM32(0x84B898);
    PUSH32(esp, 1);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_0054AFCB(); /* call 0x0054AFCB */

loc_00032C60: ;
    if (CMP_GE(eax & eax, 0)) { sub_00032C83(); return; } /* jge: greater or equal (signed >=) */

loc_00032C64: ;
    PUSH32(esp, 0x99);
    PUSH32(esp, 0x646054);
    ecx = 0; /* xor self */
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00401300(); /* call 0x00401300 */

loc_00032C79: ;
    esp = esp + 8;
    edi = 0; /* xor self */
    MEM32(ebp + 0xC) = edi;
    g_seh_ebp = ebp; sub_00032CFE(); return; /* tail jmp 0x00032CFE */

}

/**
 * sub_00032D90
 * Original: 0x00032D90 - 0x00032DBC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00032D90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5D35C8;
    PUSH32(esp, 0); sub_000327F0(); /* call 0x000327F0 */

loc_00032D9E: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00032DB6; /* je: equal / zero */

loc_00032DA5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00032DB3: ;
    esp = esp + 4;

loc_00032DB6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032DC0
 * Original: 0x00032DC0 - 0x00032E36 (118 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032DC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x646054);
    edi = ecx;
    PUSH32(esp, 3);
    PUSH32(esp, 0x646048);
    eax = 0; /* xor self */
    ecx = 0x7C;
    PUSH32(esp, 0); sub_00401230(); /* call 0x00401230 */

loc_00032DDF: ;
    esi = eax;
    ebx = 0; /* xor self */
    MEM32(esi + 0x24) = ebx;
    edx = esi + 0x18;
    eax = 0x84B920;
    MEM32(esi + 0x28) = ebx;
    PUSH32(esp, 0); sub_003E1830(); /* call 0x003E1830 */

loc_00032DF6: ;
    PUSH32(esp, 0x646054);
    PUSH32(esp, 4);
    ecx = 0; /* xor self */
    edx = 0x7F;
    eax = 1;
    PUSH32(esp, 0); sub_004014A0(); /* call 0x004014A0 */

loc_00032E0E: ;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(0x84B938);
    esp = esp + 0x18;
    if (CMP_EQ(eax, ebx)) { sub_00032E36(); return; } /* je: equal / zero */

loc_00032E1D: ;
    eax = MEM32(0x84B93C);
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_00032E2F; /* je: equal / zero */

loc_00032E27: ;
    eax = MEM32(eax + 4);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_00032E27; /* jne: not equal / not zero */

loc_00032E2F: ;
    MEM32(eax + 4) = esi;
    MEM32(esi) = eax;
    g_seh_ebp = ebp; sub_00032E42(); return; /* tail jmp 0x00032E42 */

}

/**
 * sub_00032E70
 * Original: 0x00032E70 - 0x00032F26 (182 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032E70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00032E70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00032640(); /* call 0x00032640 */

loc_00032E79: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, MEM8(0x84725D));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(edi) = 0x5D358C;
    MEM32(edi + 0x40) = ebx;
    MEM8(edi + 0x44) = LO8(ebx);
    MEM8(edi + 0x45) = LO8(ebx);
    MEM32(edi + 0x48) = ebx;
    MEMF(edi + 0x4C) = xmm0; /* movss */
    MEM32(edi + 0x50) = ebx;
    MEMF(edi + 0x54) = xmm0; /* movss */
    MEM32(edi + 0x58) = ebx;
    MEMF(edi + 0x80) = xmm0; /* movss */
    MEM32(edi + 0x84) = ebx;
    MEM8(edi + 0x88) = LO8(ebx);
    MEM32(edi + 0x8C) = 1;
    MEMF(edi + 0x5C) = xmm0; /* movss */
    MEMF(edi + 0x60) = xmm0; /* movss */
    MEMF(edi + 0x64) = xmm0; /* movss */
    MEMF(edi + 0x68) = xmm0; /* movss */
    MEMF(edi + 0x6C) = xmm0; /* movss */
    MEMF(edi + 0x70) = xmm0; /* movss */
    MEMF(edi + 0x74) = xmm0; /* movss */
    MEMF(edi + 0x78) = xmm0; /* movss */
    MEMF(edi + 0x7C) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00032F21; /* je: equal / zero */

loc_00032EF4: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00032EFE: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x84) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00032F19; /* jne: not equal / not zero */

loc_00032F0B: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_00032F16: ;
    esp = esp + 8;

loc_00032F19: ;
    eax = MEM32(edi + 0x84);
    MEM8(eax) = LO8(ebx);

loc_00032F21: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032F30
 * Original: 0x00032F30 - 0x00033017 (231 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032F30: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 0xC;
    PUSH32(esp, ebp);
    eax = 1;
    PUSH32(esp, 0); sub_00402100(); /* call 0x00402100 */

loc_00032F45: ;
    eax = MEM32(ebp);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00033017(); return; } /* je: equal / zero */

loc_00032F53: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_00032F78; /* je: equal / zero */

loc_00032F5D: ;
    edi = MEM32(esi + 4);
    eax = MEM32(edi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0003300B; /* jne: not equal / not zero */

loc_00032F6B: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_00032F73: ;
    eax = ebx + 0x78;
    goto loc_00032F84;

loc_00032F78: ;
    eax = MEM32(esp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0003300B; /* je: equal / zero */

loc_00032F84: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edx = eax;
    ebx = MEM32(edx);
    ecx = esi + 0x5C;
    edi = ecx;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    edi = MEM32(eax);
    edx = esi + 0x68;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebp);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x10) = 0x41;
    MEM8(esi + 0x2C) = 1;
    MEMF(esi + 0x30) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00032FD6; /* je: equal / zero */

loc_00032FCD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00402600(); /* call 0x00402600 */

loc_00032FD3: ;
    esp = esp + 4;

loc_00032FD6: ;
    ebp = MEM32(ebp);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(ebp, ebp)) goto loc_00032FFF; /* je: equal / zero */

loc_00032FF0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_004026B0(); /* call 0x004026B0 */

loc_00032FFC: ;
    esp = esp + 4;

loc_00032FFF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_0003300B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00033030
 * Original: 0x00033030 - 0x00033197 (359 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033030: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x2C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebp + 0x40) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00033067; /* je: equal / zero */

loc_00033044: ;
    xmm0 = MEMF(ebp + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA218); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_00033067; /* jb: below (unsigned <) */

loc_0003305E: ;
    MEMF(ebp + 0x30) = xmm1; /* movss */
    MEM8(ebp + 0x2C) = 0;

loc_00033067: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003318D; /* je: equal / zero */

loc_00033073: ;
    eax = MEM32(ebp + 0x3C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0003309D; /* je: equal / zero */

loc_00033081: ;
    eax = ebp;
    PUSH32(esp, 0); sub_000331A0(); /* call 0x000331A0 */

loc_00033088: ;
    eax = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = esi;
    edi = ebp;
    PUSH32(esp, 0); sub_000332F0(); /* call 0x000332F0 */

loc_0003309B: ;
    goto loc_000330A1;

loc_0003309D: ;
    esi = MEM32(esp + 0x24);

loc_000330A1: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00402770(); /* call 0x00402770 */

loc_000330A9: ;
    if (TEST_NZ(eax, eax)) goto loc_000330B9; /* jne: not equal / not zero */

loc_000330AD: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003313C; /* je: equal / zero */

loc_000330B9: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00033132; /* je: equal / zero */

loc_000330C1: ;
    SET_LO8(eax, MEM8(0x847044));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000330DA; /* je: equal / zero */

loc_000330CA: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00033870(); /* call 0x00033870 */

loc_000330D1: ;
    MEM32(ebp + 0x34) = 0;
    goto loc_0003313C;

loc_000330DA: ;
    eax = MEM32(ebp + 0x28);
    if (TEST_Z(eax, eax)) goto loc_00033115; /* je: equal / zero */

loc_000330E1: ;
    if (CMP_EQ(eax, 1)) goto loc_00033115; /* je: equal / zero */

loc_000330E6: ;
    if (CMP_EQ(eax, 2)) goto loc_00033115; /* je: equal / zero */

loc_000330EB: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000330F8; /* je: equal / zero */

loc_000330F3: ;
    if (CMP_EQ(eax, 3)) goto loc_00033115; /* je: equal / zero */

loc_000330F8: ;
    (void)0; /* cmp MEM32(ebp + 0x8C), 1 - flags set for next jcc */
    eax = esi;
    if (CMP_NE(MEM32(ebp + 0x8C), 1)) eax = ebx; /* cmovne */
    PUSH32(esp, eax);
    esi = ebp;
    PUSH32(esp, 0); sub_00033490(); /* call 0x00033490 */

loc_0003310C: ;
    MEM32(ebp + 0x34) = 0;
    goto loc_0003313C;

loc_00033115: ;
    (void)0; /* cmp MEM32(ebp + 0x8C), 1 - flags set for next jcc */
    eax = esi;
    if (CMP_NE(MEM32(ebp + 0x8C), 1)) eax = ebx; /* cmovne */
    PUSH32(esp, eax);
    esi = ebp;
    PUSH32(esp, 0); sub_00033770(); /* call 0x00033770 */

loc_00033129: ;
    MEM32(ebp + 0x34) = 0;
    goto loc_0003313C;

loc_00033132: ;
    ecx = ZX8(MEM8(0x7FA250));
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) + ecx;

loc_0003313C: ;
    eax = MEM32(ebp + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_0003318A; /* je: equal / zero */

loc_00033143: ;
    eax = MEM32(esp + 0x20);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003317E; /* je: equal / zero */

loc_0003314B: ;
    if (CMP_NE(MEM32(ebp + 0x8C), 2)) goto loc_0003317E; /* jne: not equal / not zero */

loc_00033154: ;
    edi = MEM32(esp + 0x24);
    esi = esp + 0x10;
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_00033350(); /* call 0x00033350 */

loc_00033165: ;
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    eax = ebp;
    PUSH32(esp, 0); sub_00033200(); /* call 0x00033200 */

loc_00033171: ;
    eax = MEM32(ebp + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 28; return; /* ret 24 */

loc_0003317E: ;
    ecx = ebp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_00033200(); /* call 0x00033200 */

loc_0003318A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0003318D: ;
    eax = MEM32(ebp + 0x40);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000331A0
 * Original: 0x000331A0 - 0x000331F9 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000331A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000331A0: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 0x10);
    if (TEST_Z(edx, edx)) goto loc_000331CB; /* je: equal / zero */

loc_000331AA: ;
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) goto loc_000331CB; /* je: equal / zero */

loc_000331B3: ;
    ecx = ecx + 0x78;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax + 0x5C;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);

loc_000331CB: ;
    xmm0 = MEMF(eax + 0x74); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x5C); /* addss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x60); /* addss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x64); /* addss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00033200
 * Original: 0x00033200 - 0x0003329D (157 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033200: ;
    esp = esp - 0x20;
    xmm0 = MEMF(0x58F8C0); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0xC;
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 4) = eax;
    xmm0 = MEMF(esp + 8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00033255; /* je: equal / zero */

loc_00033248: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00402600(); /* call 0x00402600 */

loc_00033252: ;
    esp = esp + 4;

loc_00033255: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0003329D(); return; } /* jne: not equal / not zero */

loc_0003325D: ;
    edx = esi + 0x68;
    eax = esp + 0xC;
    ecx = esp + 0x18;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    g_seh_ebp = ebp; sub_000332B2(); return; /* tail jmp 0x000332B2 */

}

/**
 * sub_000332F0
 * Original: 0x000332F0 - 0x0003333A (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000332F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;

loc_000332F0: ;
    PUSH32(esp, esi);
    esi = edi + 0x5C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_000332FB: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(0x648E84); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003331F; /* je: equal / zero */

loc_00033311: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0003331C: ;
    esp = esp + 8;

loc_0003331F: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm0 <= xmm3)) { sub_0003333A(); return; } /* jbe: below or equal (unsigned <=) */

loc_00033325: ;
    MEMF(edi + 0x80) = xmm3; /* movss */
    MEM32(edi + 0x8C) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00033350
 * Original: 0x00033350 - 0x0003348D (317 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033350(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_00033350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = ecx + 0x5C;
    edx = MEM32(ecx);
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    esp = esp - 0xC;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 8); /* subss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    eax = esp + 0x2C;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0003341E: ;
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0003342E: ;
    PUSH32(esp, 0x40490FDB);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_00428AB7(); /* call 0x00428AB7 */

loc_00033441: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00033453: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_00033467: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00033475: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00033490
 * Original: 0x00033490 - 0x00033764 (724 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033490: ;
    eax = MEM32(esi + 0xC);
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    if (CMP_EQ(eax, ebx)) goto loc_0003375C; /* je: equal / zero */

loc_000334A6: ;
    (void)0; /* cmp MEM8(esi + 0x88), LO8(ebx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (CMP_EQ(MEM8(esi + 0x88), LO8(ebx))) goto loc_000334CB; /* je: equal / zero */

loc_000334B1: ;
    ecx = MEM32(0x754EF4);
    edx = MEM32(0x754EF0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = eax;
    goto loc_00033737;

loc_000334CB: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x40) = ecx;
    edx = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x70) = eax;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x28);
    xmm5 = MEMF(edx * 4 + 0x65DE34); /* movss */
    MEM32(esp + 0x7C) = eax;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    edi = esi + 0x5C;
    PUSH32(esp, edi);
    ecx = esp + 0x80;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000338C0(); /* call 0x000338C0 */

loc_00033539: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648EA4); /* movss */
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x1C) = eax;
    edx = 0; /* xor self */
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x64) = eax;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = edx;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x70) = eax;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esp + 0x74;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000338C0(); /* call 0x000338C0 */

loc_0003359C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00033B00(); /* call 0x00033B00 */

loc_000335A3: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = esp + 0x2C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00033B00(); /* call 0x00033B00 */

loc_000335B8: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    edi = esp + 0x44;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00033B00(); /* call 0x00033B00 */

loc_000335CD: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = esp + 0x5C;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00033B00(); /* call 0x00033B00 */

loc_000335E2: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, esi);
    edi = esp + 0x74;
    PUSH32(esp, 0); sub_00033B00(); /* call 0x00033B00 */

loc_000335FA: ;
    xmm1 = MEMF(0x648D38); /* movss */
    xmm5 = MEMF(esp + 0x7C); /* movss */
    xmm4 = MEMF(esp + 0xC); /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    POP32(esp, edi);
    if ((xmm1 <= xmm0)) goto loc_0003365C; /* jbe: below or equal (unsigned <=) */

loc_00033657: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0003366C;

loc_0003365C: ;
    xmm6 = MEMF(0x58BC24); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_0003366C; /* jbe: below or equal (unsigned <=) */

loc_00033669: ;
    xmm0 = xmm6; /* movaps */

loc_0003366C: ;
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000336C0; /* jnp: not parity */

loc_00033675: ;
    /* ucomiss xmm3, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000336C0; /* jnp: not parity */

loc_0003367E: ;
    /* ucomiss xmm4, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000336C0; /* jnp: not parity */

loc_00033687: ;
    /* ucomiss xmm5, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000336C0; /* jnp: not parity */

loc_00033690: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x64A228); /* mulss */
    MEMF(esi + 0x4C) = xmm2; /* movss */
    xmm2 = xmm2 * MEMF(0x58BC2C); /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM8(esi + 0x44) = 1;
    MEM8(esi + 0x45) = LO8(ebx);
    MEM32(esi + 0x48) = edx;
    MEMF(esi + 0x54) = xmm1; /* movss */
    MEM32(esi + 0x50) = ebx;
    goto loc_000336EE;

loc_000336C0: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x64A228); /* mulss */
    MEMF(esi + 0x54) = xmm2; /* movss */
    xmm2 = xmm2 * MEMF(0x58BC2C); /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    MEM8(esi + 0x44) = LO8(ebx);
    MEM8(esi + 0x45) = 1;
    MEMF(esi + 0x4C) = xmm1; /* movss */
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x50) = eax;

loc_000336EE: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm1; /* movaps */
    if (1 /* jnp after test - parity */) goto loc_00033722; /* jnp: not parity */

loc_000336FA: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00402080(); /* call 0x00402080 */

loc_00033717: ;
    esp = esp + 0x1C;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 8; return; /* ret 4 */

loc_00033722: ;
    eax = MEM32(0x754EF4);
    ecx = MEM32(0x754EF0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);

loc_00033737: ;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00402080(); /* call 0x00402080 */

loc_0003373E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x1C;
    eax = 0; /* xor self */
    MEM32(esi + 0x48) = eax;
    MEMF(esi + 0x4C) = xmm0; /* movss */
    MEM32(esi + 0x50) = eax;
    MEMF(esi + 0x54) = xmm0; /* movss */
    MEM8(esi + 0x44) = LO8(eax);
    MEM8(esi + 0x45) = LO8(eax);

loc_0003375C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033770
 * Original: 0x00033770 - 0x00033867 (247 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00033770: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00033863; /* je: equal / zero */

loc_0003377E: ;
    if (CMP_EQ(MEM8(esi + 0x88), LO8(ebx))) goto loc_000337A3; /* je: equal / zero */

loc_00033786: ;
    ecx = MEM32(0x754EF4);
    edx = MEM32(0x754EF0);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = eax;
    goto loc_0003383E;

loc_000337A3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = esi + 0x5C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00033B00(); /* call 0x00033B00 */

loc_000337B2: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    POP32(esp, edi);
    if ((xmm1 > xmm0)) goto loc_00033826; /* ja: above (unsigned >) */

loc_000337BB: ;
    xmm2 = MEMF(0x58BC24); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_000337CD; /* jbe: below or equal (unsigned <=) */

loc_000337C8: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000337D6;

loc_000337CD: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00033826; /* jnp: not parity */

loc_000337D6: ;
    xmm0 = xmm0 * MEMF(0x64A228); /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esi + 0x54) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x58BC2C); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM8(esi + 0x44) = LO8(ebx);
    MEM32(esi + 0x48) = ebx;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    MEM8(esi + 0x45) = 1;
    MEMF(esi + 0x4C) = xmm1; /* movss */
    MEM32(esi + 0x50) = eax;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_00402080(); /* call 0x00402080 */

loc_0003381F: ;
    esp = esp + 0x1C;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00033826: ;
    eax = MEM32(0x754EF4);
    ecx = MEM32(0x754EF0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);
    xmm0 = xmm1; /* movaps */

loc_0003383E: ;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00402080(); /* call 0x00402080 */

loc_00033845: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x1C;
    eax = 0; /* xor self */
    MEM32(esi + 0x48) = eax;
    MEMF(esi + 0x4C) = xmm0; /* movss */
    MEM32(esi + 0x50) = eax;
    MEMF(esi + 0x54) = xmm0; /* movss */
    MEM8(esi + 0x44) = LO8(eax);
    MEM8(esi + 0x45) = LO8(eax);

loc_00033863: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033870
 * Original: 0x00033870 - 0x000338B4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033870(void)
{
    float xmm0;

loc_00033870: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFA24u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(ecx, 1);
    PUSH32(esp, 0);
    MEM8(eax + 0x44) = LO8(ecx);
    MEM8(eax + 0x45) = LO8(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    MEM32(eax + 0x48) = 0xFFFFFA24u;
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEM32(eax + 0x50) = 0;
    PUSH32(esp, 0); sub_00402080(); /* call 0x00402080 */

loc_000338AF: ;
    esp = esp + 0x1C;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000338C0
 * Original: 0x000338C0 - 0x00033AFF (575 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000338C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000338C0: ;
    esp = esp - 0x28;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x18) = edi;
    xmm4 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x1C) = edi;
    esi = MEM32(esp + 0x44);
    edi = eax;
    ebp = MEM32(edi);
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    xmm0 = MEMF(edx + 4); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(edx + 4) = xmm0; /* movss */
    edi = MEM32(eax);
    edx = ecx;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(ecx + 4) = xmm0; /* movss */
    ecx = esp + 0x20;
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x14;
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(esp + 0x4C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    eax = esi;
    MEM32(eax) = ecx;
    MEMF(esp + 0x30) = xmm1; /* movss */
    edx = MEM32(esp + 0x30);
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00033A81; /* jnp: not parity */

loc_00033A46: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm5; /* divss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_00033A81: ;
    eax = MEM32(esp + 0x48);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 4); /* subss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm4 = xmm4 - MEMF(esi + 8); /* subss */
    MEMF(eax + 8) = xmm4; /* movss */
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x48);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00033B00
 * Original: 0x00033B00 - 0x00033C28 (296 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033B00: ;
    SET_LO8(eax, MEM8(0x846FEB));
    esp = esp - 0x14;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00033B1A; /* je: equal / zero */

loc_00033B13: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00111880(); /* call 0x00111880 */

loc_00033B1A: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00033B25: ;
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    esi = esp + 0x20;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(0x780AB0) = 0x5D377C;
    MEM32(0x6C0210) = 0x4EE;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x2000;
    PUSH32(esp, 0); sub_002A0C10(); /* call 0x002A0C10 */

loc_00033B69: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00033BFE; /* je: equal / zero */

loc_00033B74: ;
    MEM32(ebp + 0x40) = MEM32(ebp + 0x40) + 1;
    ecx = esi;
    esi = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00033B84: ;
    PUSH32(esp, esi);
    esi = esp + 0x20;
    eax = edi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0C10(); /* call 0x002A0C10 */

loc_00033B96: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = MEM32(ebp + 0x40);
    fp_top() = fabs(fp_top()); /* fabs */
    esp = esp + 0xC;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    edx = esi;
    PUSH32(esp, edx);
    ebx++;
    PUSH32(esp, edi);
    MEM32(ebp + 0x40) = ebx;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00033BB3: ;
    MEMF(esp + 0x30) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    esp = esp + 8;
    fp_top() = fabs(fp_top()); /* fabs */
    /* FPU: fsubr dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00033BE7; /* jbe: below or equal (unsigned <=) */

loc_00033BE2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_00033BF8;

loc_00033BE7: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00033BFE; /* jbe: below or equal (unsigned <=) */

loc_00033BF8: ;
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_00033BFE: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00033C30
 * Original: 0x00033C30 - 0x00033DA0 (368 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033C30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00033C30: ;
    SET_LO8(eax, MEM8(0x84725D));
    esp = esp - 0x14;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00033D99; /* je: equal / zero */

loc_00033C43: ;
    SET_LO8(eax, MEM8(0x846FE8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00033D90; /* je: equal / zero */

loc_00033C50: ;
    xmm1 = MEMF(esi + 0x80); /* movss */
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    xmm0 = MEMF(esi + 0x80); /* movss */
    xmm0 = xmm0 * MEMF(0x58F8C0); /* mulss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00033D90; /* jnp: not parity */

loc_00033C7F: ;
    SET_LO8(eax, MEM8(0x847008));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00033C99; /* je: equal / zero */

loc_00033C88: ;
    xmm1 = MEMF(0x656CA4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00033D90; /* jb: below (unsigned <) */

loc_00033C99: ;
    edx = MEM32(esi + 0x64);
    xmm0 = MEMF(esi + 0x5C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x47C35000);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x60);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esp + 0x2C;
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_00033CC4: ;
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00033D90; /* je: equal / zero */

loc_00033CD1: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x656CAC); /* movss */
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_NE(LO8(eax), LO8(ecx))) goto loc_00033CEC; /* jne: not equal / not zero */

loc_00033CE4: ;
    xmm0 = MEMF(0x656CA8); /* movss */

loc_00033CEC: ;
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_00033CF1: ;
    if (CMP_EQ(MEM8(esp + 0x1C), LO8(ecx))) goto loc_00033D12; /* je: equal / zero */

loc_00033CF7: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(ecx);
    MEM8(0x776170) = 0x80;
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    goto loc_00033D2C;

loc_00033D12: ;
    MEM8(0x776171) = 0xB0;
    MEM8(0x776170) = LO8(ecx);
    MEM8(0x77616F) = LO8(ecx);
    MEM8(0x77616E) = 0xFF;

loc_00033D2C: ;
    if (CMP_EQ(MEM8(esi + 0x45), LO8(ecx))) goto loc_00033D38; /* je: equal / zero */

loc_00033D31: ;
    xmm0 = MEMF(esi + 0x4C); /* movss */
    goto loc_00033D3D;

loc_00033D38: ;
    xmm0 = MEMF(esi + 0x54); /* movss */

loc_00033D3D: ;
    (void)0; /* cmp MEM8(esi + 0x44), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_EQ(MEM8(esi + 0x44), LO8(ecx))) goto loc_00033D4D; /* je: equal / zero */

loc_00033D48: ;
    eax = MEM32(esi + 0x48);
    goto loc_00033D50;

loc_00033D4D: ;
    eax = MEM32(esi + 0x50);

loc_00033D50: ;
    ecx = MEM32(esi + 0x84);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = MEM32(esi + 0x8C);
    PUSH32(esp, ecx);
    ecx = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D373C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00033D8D: ;
    esp = esp + 0x28;

loc_00033D90: ;
    edx = MEM32(esi + 0x84);
    MEM8(edx) = 0;

loc_00033D99: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00033E90
 * Original: 0x00033E90 - 0x00033EDB (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00033E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x84);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x5D358C;
    if (TEST_Z(eax, eax)) goto loc_00033EB6; /* je: equal / zero */

loc_00033EA3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00033EA9: ;
    esp = esp + 4;
    MEM32(esi + 0x84) = 0;

loc_00033EB6: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000327F0(); /* call 0x000327F0 */

loc_00033EBD: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00033ED5; /* je: equal / zero */

loc_00033EC4: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00033ED2: ;
    esp = esp + 4;

loc_00033ED5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033EE0
 * Original: 0x00033EE0 - 0x00033F2C (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00033EE0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(eax, eax)) { sub_00033F2C(); return; } /* jne: not equal / not zero */

loc_00033EEE: ;
    ecx = MEM32(esp + 0x18);
    if (TEST_Z(ecx, ecx)) { sub_00033F2C(); return; } /* je: equal / zero */

loc_00033EF6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = esp + 8;
    MEM8(edi + 0x94) = 1;
    MEM32(edi + 0x90) = ecx;
    PUSH32(esp, 0); sub_00012B10(); /* call 0x00012B10 */

loc_00033F11: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_00032F30(); /* call 0x00032F30 */

loc_00033F1F: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00033F40
 * Original: 0x00033F40 - 0x00034075 (309 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033F40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00033F40: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x2C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi + 0x40) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00033F77; /* je: equal / zero */

loc_00033F54: ;
    xmm0 = MEMF(edi + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA218); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edi + 0x30) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_00033F77; /* jb: below (unsigned <) */

loc_00033F6E: ;
    MEMF(edi + 0x30) = xmm1; /* movss */
    MEM8(edi + 0x2C) = 0;

loc_00033F77: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003406B; /* je: equal / zero */

loc_00033F83: ;
    eax = MEM32(edi + 0x3C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00033FFE; /* je: equal / zero */

loc_00033F8F: ;
    ecx = MEM32(edi + 0x90);
    if (TEST_Z(ecx, ecx)) goto loc_00033FFE; /* je: equal / zero */

loc_00033F99: ;
    SET_LO8(eax, MEM8(edi + 0x94));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00033FFE; /* je: equal / zero */

loc_00033FA3: ;
    eax = esp + 8;
    PUSH32(esp, 0); sub_00012B10(); /* call 0x00012B10 */

loc_00033FAC: ;
    eax = MEM32(edi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00033FB7: ;
    eax = edi;
    PUSH32(esp, 0); sub_000331A0(); /* call 0x000331A0 */

loc_00033FBE: ;
    edx = edi + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00033FC8: ;
    xmm1 = MEMF(0x648E84); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00033FEC; /* jbe: below or equal (unsigned <=) */

loc_00033FD8: ;
    MEMF(edi + 0x80) = xmm0; /* movss */
    MEM32(edi + 0x8C) = 1;
    goto loc_00033FFE;

loc_00033FEC: ;
    MEMF(edi + 0x80) = xmm1; /* movss */
    MEM32(edi + 0x8C) = 2;

loc_00033FFE: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0); sub_00402770(); /* call 0x00402770 */

loc_00034006: ;
    if (TEST_NZ(eax, eax)) goto loc_00034012; /* jne: not equal / not zero */

loc_0003400A: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00034052; /* je: equal / zero */

loc_00034012: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00034048; /* je: equal / zero */

loc_0003401A: ;
    eax = MEM32(edi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_00034037; /* je: equal / zero */

loc_00034021: ;
    if (CMP_EQ(eax, 1)) goto loc_00034037; /* je: equal / zero */

loc_00034026: ;
    PUSH32(esp, esi);
    esi = edi;
    PUSH32(esp, 0); sub_00033490(); /* call 0x00033490 */

loc_0003402E: ;
    MEM32(edi + 0x34) = 0;
    goto loc_00034052;

loc_00034037: ;
    PUSH32(esp, esi);
    esi = edi;
    PUSH32(esp, 0); sub_00033770(); /* call 0x00033770 */

loc_0003403F: ;
    MEM32(edi + 0x34) = 0;
    goto loc_00034052;

loc_00034048: ;
    eax = ZX8(MEM8(0x7FA250));
    MEM32(edi + 0x34) = MEM32(edi + 0x34) + eax;

loc_00034052: ;
    eax = MEM32(edi + 0x3C);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0003406B; /* je: equal / zero */

loc_0003405A: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_00034061: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_00033200(); /* call 0x00033200 */

loc_0003406B: ;
    eax = MEM32(edi + 0x40);
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00034080
 * Original: 0x00034080 - 0x0003410C (140 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034080: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0003408E; /* jne: not equal / not zero */

loc_00034089: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0003408E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, ebx);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_000340D8; /* je: equal / zero */

loc_000340B6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_000340D8; /* jb: below (unsigned <) */

loc_000340BF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000340C9: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000340D1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0003410C(); return; } /* jne: not equal / not zero */

loc_000340D8: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000340EA: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000340F2: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0003410C(); return; } /* jne: not equal / not zero */

loc_000340F9: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_00034104: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00034140
 * Original: 0x00034140 - 0x0003423C (252 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034140: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    MEM32(edi) = 0x40;
    ecx = edi + 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(edi + 4) = 3;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = ebx;
    edx = MEM32(edi);
    eax = 5;
    MEMF(edi + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x18) = ebx;
    MEM8(edi + 0x1D) = LO8(ebx);
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x24) = ebx;
    MEMF(edi + 0x2C) = xmm0; /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */
    MEMF(edi + 0x34) = xmm0; /* movss */
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x40) = ebx;
    MEM32(edi + 0x44) = ebx;
    PUSH32(esp, 0); sub_000350A0(); /* call 0x000350A0 */

loc_0003419F: ;
    ecx = MEM32(edi);
    eax = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_000341B6; /* jle: less or equal (signed <=) */

loc_000341A7: ;
    ecx = MEM32(edi + 0xC);
    ecx = ecx + eax * 4;
    MEM32(ecx) = ebx;
    ecx = MEM32(edi);
    eax++;
    if (CMP_L(eax, ecx)) goto loc_000341A7; /* jl: less (signed <) */

loc_000341B6: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_000341C3; /* jne: not equal / not zero */

loc_000341BE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000341C3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, ebp);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0003420D; /* je: equal / zero */

loc_000341EB: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_0003420D; /* jb: below (unsigned <) */

loc_000341F4: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000341FE: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00034206: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0003422E; /* jne: not equal / not zero */

loc_0003420D: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0003421F: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00034227: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0003423C(); return; } /* je: equal / zero */

loc_0003422E: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    g_seh_ebp = ebp; sub_0003423E(); return; /* tail jmp 0x0003423E */

}

/**
 * sub_00034260
 * Original: 0x00034260 - 0x00034312 (178 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034260: ;
    eax = MEM32(0x847078);
    if (TEST_NZ(eax, eax)) goto loc_00034311; /* jne: not equal / not zero */

loc_0003426D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0003427B; /* jne: not equal / not zero */

loc_00034276: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0003427B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_000342C5; /* je: equal / zero */

loc_000342A3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_000342C5; /* jb: below (unsigned <) */

loc_000342AC: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000342B6: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000342BE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000342E6; /* jne: not equal / not zero */

loc_000342C5: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000342D7: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000342DF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00034312(); return; } /* je: equal / zero */

loc_000342E6: ;
    edi = eax;
    PUSH32(esp, 0); sub_00034140(); /* call 0x00034140 */

loc_000342ED: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x847078) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0003430F; /* jne: not equal / not zero */

loc_000342F6: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00034307: ;
    eax = MEM32(0x847078);
    esp = esp + 0xC;

loc_0003430F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00034311: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00034320
 * Original: 0x00034320 - 0x00034584 (612 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034320: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0xC);
    (void)0; /* cmp MEM32(eax), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(eax), 0)) goto loc_000343DC; /* jne: not equal / not zero */

loc_00034333: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00034341; /* jne: not equal / not zero */

loc_0003433C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00034341: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0003438B; /* je: equal / zero */

loc_00034367: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0003438B; /* jb: below (unsigned <) */

loc_00034370: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0003437A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00034382: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_000343B2; /* jne: not equal / not zero */

loc_0003438B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0003439D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000343A5: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_00034552; /* je: equal / zero */

loc_000343B2: ;
    PUSH32(esp, 0); sub_00032640(); /* call 0x00032640 */

loc_000343B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(edi) = 0x5D35C8;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x34), _icall_esp); /* indirect call */
    }

loc_000343CC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000343DC; /* je: equal / zero */

loc_000343D0: ;
    eax = ebp + 8;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_000343DC: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00034496; /* jne: not equal / not zero */

loc_000343ED: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000343FB; /* jne: not equal / not zero */

loc_000343F6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000343FB: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00034445; /* je: equal / zero */

loc_00034421: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_00034445; /* jb: below (unsigned <) */

loc_0003442A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00034434: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0003443C: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_0003446C; /* jne: not equal / not zero */

loc_00034445: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00034457: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0003445F: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_0003456B; /* je: equal / zero */

loc_0003446C: ;
    PUSH32(esp, 0); sub_00032640(); /* call 0x00032640 */

loc_00034471: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(edi) = 0x5D3604;
    edx = MEM32(edi);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x34), _icall_esp); /* indirect call */
    }

loc_00034486: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00034496; /* je: equal / zero */

loc_0003448A: ;
    eax = ebp + 8;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_00034496: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_0003454C; /* jne: not equal / not zero */

loc_000344A7: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000344B5; /* jne: not equal / not zero */

loc_000344B0: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000344B5: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_000344FF; /* je: equal / zero */

loc_000344DB: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_000344FF; /* jb: below (unsigned <) */

loc_000344E4: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000344EE: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000344F6: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_00034522; /* jne: not equal / not zero */

loc_000344FF: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00034511: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00034519: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) { sub_00034584(); return; } /* je: equal / zero */

loc_00034522: ;
    PUSH32(esp, 0); sub_00032640(); /* call 0x00032640 */

loc_00034527: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(edi) = 0x5D3640;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x34), _icall_esp); /* indirect call */
    }

loc_0003453C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003454C; /* je: equal / zero */

loc_00034540: ;
    eax = ebp + 8;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_0003454C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00034552: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00034563: ;
    esp = esp + 0xC;
    goto loc_000343DC;

loc_0003456B: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0003457C: ;
    esp = esp + 0xC;
    goto loc_00034496;

}

/**
 * sub_000345A0
 * Original: 0x000345A0 - 0x00034650 (176 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000345A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000345A0: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_000345B6; /* jne: not equal / not zero */

loc_000345B1: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000345B6: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00034604; /* je: equal / zero */

loc_000345DC: ;
    if (CMP_B(MEM32(esi + 0x80), 0x90)) goto loc_00034604; /* jb: below (unsigned <) */

loc_000345E8: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000345F2: ;
    PUSH32(esp, 0x90);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000345FD: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00034628; /* jne: not equal / not zero */

loc_00034604: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00034616: ;
    PUSH32(esp, 0x90);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00034621: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00034637; /* je: equal / zero */

loc_00034628: ;
    PUSH32(esp, 0); sub_00032E70(); /* call 0x00032E70 */

loc_0003462D: ;
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (TEST_NZ(ebx, ebx)) { sub_00034650(); return; } /* jne: not equal / not zero */

loc_00034637: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_00034643: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000346C0
 * Original: 0x000346C0 - 0x00034802 (322 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000346C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000346C0: ;
    eax = MEM32(0x84A19C);
    esp = esp - 0x10;
    if (TEST_NZ(eax, eax)) goto loc_000346D1; /* jne: not equal / not zero */

loc_000346CC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000346D1: ;
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
    if (TEST_Z(esi, esi)) goto loc_00034724; /* je: equal / zero */

loc_000346FA: ;
    if (CMP_B(MEM32(esi + 0x80), 0x98)) goto loc_00034724; /* jb: below (unsigned <) */

loc_00034706: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00034710: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0003471B: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_NZ(ebp, ebp)) goto loc_0003474E; /* jne: not equal / not zero */

loc_00034724: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00034736: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00034741: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_000347E7; /* je: equal / zero */

loc_0003474E: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00032E70(); /* call 0x00032E70 */

loc_00034755: ;
    eax = MEM32(0x847024);
    eax = eax + 0x94;
    MEM32(ebp) = 0x5D3550;
    MEM32(ebp + 0x90) = 0;
    MEM8(ebp + 0x94) = 0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x28);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x30), _icall_esp); /* indirect call */
    }

loc_000347A6: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x846FF5));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00034802(); return; } /* je: equal / zero */

loc_000347AF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000347CC; /* je: equal / zero */

loc_000347B3: ;
    ecx = MEM32(esp + 0x20);
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D39B0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000347C9: ;
    esp = esp + 0xC;

loc_000347CC: ;
    eax = MEM32(esp + 0x20);
    eax = eax + 8;
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_000347DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

loc_000347E7: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_000347F3: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00034830
 * Original: 0x00034830 - 0x00034866 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034830(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034830: ;
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(esi, esi)) { sub_00034866(); return; } /* je: equal / zero */

loc_00034837: ;
    eax = MEM32(esi + 0x580);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_00034866(); return; } /* je: equal / zero */

loc_00034842: ;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0xC);
    if (CMP_EQ(ecx, edx)) goto loc_0003485F; /* je: equal / zero */

loc_0003484C: ;
    /* nop */

loc_00034850: ;
    if (CMP_EQ(MEM32(ecx), eax)) goto loc_0003485B; /* je: equal / zero */

loc_00034854: ;
    ecx = ecx + 4;
    if (CMP_NE(ecx, edx)) goto loc_00034850; /* jne: not equal / not zero */

loc_0003485B: ;
    if (CMP_NE(ecx, edx)) goto loc_00034862; /* jne: not equal / not zero */

loc_0003485F: ;
    eax = eax | 0xFFFFFFFFu;

loc_00034862: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000348C0
 * Original: 0x000348C0 - 0x0003493B (123 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000348C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000348C0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(ebx, MEM32(eax))) goto loc_00034939; /* je: equal / zero */

loc_000348CA: ;
    if (CMP_EQ(ebx, MEM32(eax + 4))) goto loc_00034939; /* je: equal / zero */

loc_000348CF: ;
    if (CMP_EQ(ebx, MEM32(eax + 8))) goto loc_00034939; /* je: equal / zero */

loc_000348D4: ;
    ecx = MEM32(edi + 0x10);
    if (CMP_EQ(eax, ecx)) goto loc_00034939; /* je: equal / zero */

loc_000348DB: ;
    goto loc_000348E0;

    /* nop */

loc_000348E0: ;
    if (CMP_EQ(MEM32(eax), ebx)) goto loc_000348EB; /* je: equal / zero */

loc_000348E4: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_000348E0; /* jne: not equal / not zero */

loc_000348EB: ;
    if (CMP_EQ(eax, ecx)) goto loc_00034939; /* je: equal / zero */

loc_000348EF: ;
    edx = MEM32(edi + 0xC);
    if (TEST_Z(edx, edx)) goto loc_00034902; /* je: equal / zero */

loc_000348F6: ;
    ecx = MEM32(edi + 0x10);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (TEST_NZ(ecx, ecx)) goto loc_00034909; /* jne: not equal / not zero */

loc_00034902: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034907: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00034909: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00034939; /* je: equal / zero */

loc_0003490E: ;
    SET_LO8(eax, MEM8(0x846FF5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003492E; /* je: equal / zero */

loc_00034917: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D38E8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0003492A: ;
    esp = esp + 0xC;
    POP32(esp, esi);

loc_0003492E: ;
    edi = MEM32(edi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_00034939: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034940
 * Original: 0x00034940 - 0x00034AA5 (357 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034940: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = eax;
    edx = MEM32(edi + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (TEST_Z(edx, edx)) goto loc_00034AA0; /* je: equal / zero */

loc_00034955: ;
    eax = MEM32(edx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00034AA0; /* je: equal / zero */

loc_00034960: ;
    ecx = MEM32(edi + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00034973; /* je: equal / zero */

loc_00034967: ;
    eax = MEM32(edi + 0x10);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_NZ(eax, eax)) goto loc_0003497D; /* jne: not equal / not zero */

loc_00034973: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034978: ;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0003497D: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xC);
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (CMP_EQ(esi, edx)) goto loc_00034A9F; /* je: equal / zero */

loc_0003498D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_00034995;

loc_00034991: ;
    edx = MEM32(esp + 0x14);

loc_00034995: ;
    eax = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0xC);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(ebx, eax)) goto loc_00034A9D; /* je: equal / zero */

loc_000349A9: ;
    /* nop */

loc_000349B0: ;
    if (CMP_EQ(MEM32(ebx), ecx)) goto loc_000349BB; /* je: equal / zero */

loc_000349B4: ;
    ebx = ebx + 4;
    if (CMP_NE(ebx, eax)) goto loc_000349B0; /* jne: not equal / not zero */

loc_000349BB: ;
    if (CMP_EQ(ebx, eax)) goto loc_00034A9D; /* je: equal / zero */

loc_000349C3: ;
    ebp = MEM32(ebx);
    if (TEST_Z(ebp, ebp)) goto loc_00034A51; /* je: equal / zero */

loc_000349CD: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00034A87; /* je: equal / zero */

loc_000349D8: ;
    PUSH32(esp, 0); sub_00402770(); /* call 0x00402770 */

loc_000349DD: ;
    if (TEST_NZ(eax, eax)) goto loc_00034A87; /* jne: not equal / not zero */

loc_000349E5: ;
    eax = MEM32(ebp + 0x3C);
    if (TEST_NZ(eax, eax)) goto loc_00034A87; /* jne: not equal / not zero */

loc_000349F0: ;
    SET_LO8(eax, MEM8(0x846FF5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00034A13; /* je: equal / zero */

loc_000349F9: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(0x847024);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D3878);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00034A10: ;
    esp = esp + 0x10;

loc_00034A13: ;
    ecx = MEM32(edi + 0x10);
    eax = ebx + 4;
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00034A29: ;
    ecx = MEM32(edi + 0x10);
    ecx = ecx + 0xFFFFFFFCu;
    esp = esp + 0xC;
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x38), _icall_esp); /* indirect call */
    }

loc_00034A3F: ;
    esi = MEM32(edi + 0x18);
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_0002F610(); /* call 0x0002F610 */

loc_00034A4B: ;
    esi = MEM32(esp + 0x10);
    goto loc_00034A87;

loc_00034A51: ;
    if (CMP_EQ(esi, edx)) goto loc_00034A87; /* je: equal / zero */

loc_00034A55: ;
    ebx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = ebx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(edx + 0xC) = eax;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00034A77: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x10);
    esp = esp + 4;
    ecx--;
    esi = ebx;
    MEM32(eax + 0x10) = ecx;

loc_00034A87: ;
    esi = MEM32(esi + 0xC);
    eax = MEM32(edi + 0x18);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(esi, eax)) goto loc_00034991; /* jne: not equal / not zero */

loc_00034A9D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00034A9F: ;
    POP32(esp, esi);

loc_00034AA0: ;
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00034AB0
 * Original: 0x00034AB0 - 0x00034ADB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034AB0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00034940(); /* call 0x00034940 */

loc_00034ABC: ;
    ecx = MEM32(edi + 0xC);
    esi = ecx;

loc_00034AC1: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, MEM32(ecx))) goto loc_00034AD1; /* je: equal / zero */

loc_00034AC7: ;
    if (CMP_EQ(eax, MEM32(ecx + 4))) goto loc_00034AD1; /* je: equal / zero */

loc_00034ACC: ;
    if (CMP_NE(eax, MEM32(ecx + 8))) { sub_00034ADB(); return; } /* jne: not equal / not zero */

loc_00034AD1: ;
    if (CMP_EQ(esi, MEM32(edi + 0x10))) { sub_00034ADB(); return; } /* je: equal / zero */

loc_00034AD6: ;
    esi = esi + 4;
    goto loc_00034AC1;

}

/**
 * sub_00034C80
 * Original: 0x00034C80 - 0x00034D1B (155 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034C80: ;
    SET_LO8(eax, MEM8(0x846FF5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00034D1A; /* je: equal / zero */

loc_00034C8D: ;
    ecx = MEM32(edi + 0xC);
    if (TEST_NZ(ecx, ecx)) goto loc_00034C98; /* jne: not equal / not zero */

loc_00034C94: ;
    eax = 0; /* xor self */
    goto loc_00034CA0;

loc_00034C98: ;
    eax = MEM32(edi + 0x10);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00034CA0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D3850);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00034CB2: ;
    ecx = MEM32(edi + 0xC);
    esp = esp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_00034CC0; /* jne: not equal / not zero */

loc_00034CBC: ;
    eax = 0; /* xor self */
    goto loc_00034CC8;

loc_00034CC0: ;
    eax = MEM32(edi + 0x14);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00034CC8: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D3828);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00034CDA: ;
    esp = esp + 8;
    ebx = 0; /* xor self */
    /* nop */

loc_00034CE0: ;
    ecx = MEM32(edi + 0xC);
    if (TEST_NZ(ecx, ecx)) goto loc_00034CEB; /* jne: not equal / not zero */

loc_00034CE7: ;
    eax = 0; /* xor self */
    goto loc_00034CF3;

loc_00034CEB: ;
    eax = MEM32(edi + 0x10);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_00034CF3: ;
    if (CMP_GE(ebx, eax)) goto loc_00034D18; /* jge: greater or equal (signed >=) */

loc_00034CF7: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + ebx * 4);
    esi = MEM32(0x847024);
    eax = eax + ebx * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5D3800);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00034D12: ;
    esp = esp + 0xC;
    ebx++;
    goto loc_00034CE0;

loc_00034D18: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_00034D1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00034D20
 * Original: 0x00034D20 - 0x00034D53 (51 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034D20: ;
    (void)0; /* cmp edx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_00034D4F; /* je: equal / zero */

loc_00034D28: ;
    if (TEST_Z(edx, edx)) goto loc_00034D4F; /* je: equal / zero */

loc_00034D2C: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00034D4A; /* je: equal / zero */

loc_00034D36: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_00034D41; /* je: equal / zero */

loc_00034D3A: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_00034D36; /* jne: not equal / not zero */

loc_00034D41: ;
    if (CMP_EQ(eax, ecx)) goto loc_00034D4A; /* je: equal / zero */

loc_00034D45: ;
    eax = MEM32(edx + 0xC);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00034D4A: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034D4F: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034D60
 * Original: 0x00034D60 - 0x00034D98 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034D60: ;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00034D90; /* je: equal / zero */

loc_00034D68: ;
    if (TEST_Z(ecx, ecx)) goto loc_00034D90; /* je: equal / zero */

loc_00034D6C: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_00034D8B; /* je: equal / zero */

loc_00034D76: ;
    if (CMP_EQ(MEM32(eax), ecx)) goto loc_00034D81; /* je: equal / zero */

loc_00034D7A: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_00034D76; /* jne: not equal / not zero */

loc_00034D81: ;
    if (CMP_EQ(eax, edx)) goto loc_00034D8B; /* je: equal / zero */

loc_00034D85: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

loc_00034D8B: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034D90: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00034DA0
 * Original: 0x00034DA0 - 0x00034DD3 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034DA0: ;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00034DCF; /* je: equal / zero */

loc_00034DA8: ;
    if (TEST_Z(ecx, ecx)) goto loc_00034DCF; /* je: equal / zero */

loc_00034DAC: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_00034DCA; /* je: equal / zero */

loc_00034DB6: ;
    if (CMP_EQ(MEM32(eax), ecx)) goto loc_00034DC1; /* je: equal / zero */

loc_00034DBA: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_00034DB6; /* jne: not equal / not zero */

loc_00034DC1: ;
    if (CMP_EQ(eax, edx)) goto loc_00034DCA; /* je: equal / zero */

loc_00034DC5: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00034DCA: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034DCF: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034DE0
 * Original: 0x00034DE0 - 0x00034E14 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034DE0: ;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00034E10; /* je: equal / zero */

loc_00034DE8: ;
    if (TEST_Z(ecx, ecx)) goto loc_00034E10; /* je: equal / zero */

loc_00034DEC: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_00034E0B; /* je: equal / zero */

loc_00034DF6: ;
    if (CMP_EQ(MEM32(eax), ecx)) goto loc_00034E01; /* je: equal / zero */

loc_00034DFA: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_00034DF6; /* jne: not equal / not zero */

loc_00034E01: ;
    if (CMP_EQ(eax, edx)) goto loc_00034E0B; /* je: equal / zero */

loc_00034E05: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_00034E0B: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034E10: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034E20
 * Original: 0x00034E20 - 0x00034E54 (52 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034E20: ;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00034E50; /* je: equal / zero */

loc_00034E28: ;
    if (TEST_Z(ecx, ecx)) goto loc_00034E50; /* je: equal / zero */

loc_00034E2C: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_00034E4B; /* je: equal / zero */

loc_00034E36: ;
    if (CMP_EQ(MEM32(eax), ecx)) goto loc_00034E41; /* je: equal / zero */

loc_00034E3A: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_00034E36; /* jne: not equal / not zero */

loc_00034E41: ;
    if (CMP_EQ(eax, edx)) goto loc_00034E4B; /* je: equal / zero */

loc_00034E45: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

loc_00034E4B: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034E50: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034E60
 * Original: 0x00034E60 - 0x00034E94 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034E60: ;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00034E90; /* je: equal / zero */

loc_00034E68: ;
    if (TEST_Z(ecx, ecx)) goto loc_00034E90; /* je: equal / zero */

loc_00034E6C: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_00034E8B; /* je: equal / zero */

loc_00034E76: ;
    if (CMP_EQ(MEM32(eax), ecx)) goto loc_00034E81; /* je: equal / zero */

loc_00034E7A: ;
    eax = eax + 4;
    if (CMP_NE(eax, edx)) goto loc_00034E76; /* jne: not equal / not zero */

loc_00034E81: ;
    if (CMP_EQ(eax, edx)) goto loc_00034E8B; /* je: equal / zero */

loc_00034E85: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_00034E8B: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034E90: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034EA0
 * Original: 0x00034EA0 - 0x00034EE9 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034EA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034EA0: ;
    (void)0; /* cmp edx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_00034EE5; /* je: equal / zero */

loc_00034EA8: ;
    if (TEST_Z(edx, edx)) goto loc_00034EE5; /* je: equal / zero */

loc_00034EAC: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(eax, ecx)) goto loc_00034EDF; /* je: equal / zero */

loc_00034EB7: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_00034EC2; /* je: equal / zero */

loc_00034EBB: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_00034EB7; /* jne: not equal / not zero */

loc_00034EC2: ;
    if (CMP_EQ(eax, ecx)) goto loc_00034EDF; /* je: equal / zero */

loc_00034EC6: ;
    ebx = MEM32(edx + 0xC);
    if (TEST_Z(ebx, ebx)) goto loc_00034EE4; /* je: equal / zero */

loc_00034ECD: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004027E0(); /* call 0x004027E0 */

loc_00034ED7: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00034EDF: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034EE4: ;
    POP32(esp, ebx);

loc_00034EE5: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034EF0
 * Original: 0x00034EF0 - 0x00034F41 (81 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034EF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00034F3B; /* je: equal / zero */

loc_00034F00: ;
    if (TEST_Z(esi, esi)) goto loc_00034F3B; /* je: equal / zero */

loc_00034F04: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00034F36; /* je: equal / zero */

loc_00034F0E: ;
    edi = edi;

loc_00034F10: ;
    if (CMP_EQ(MEM32(eax), esi)) goto loc_00034F1B; /* je: equal / zero */

loc_00034F14: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_00034F10; /* jne: not equal / not zero */

loc_00034F1B: ;
    if (CMP_EQ(eax, ecx)) goto loc_00034F36; /* je: equal / zero */

loc_00034F1F: ;
    if (TEST_Z(ebx, ebx)) goto loc_00034F3B; /* je: equal / zero */

loc_00034F23: ;
    eax = ebx;
    PUSH32(esp, 0); sub_000328F0(); /* call 0x000328F0 */

loc_00034F2A: ;
    POP32(esp, edi);
    MEM32(ebx + 0x580) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00034F36: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034F3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034F50
 * Original: 0x00034F50 - 0x00034F93 (67 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034F50: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00034F91; /* je: equal / zero */

loc_00034F58: ;
    if (TEST_Z(eax, eax)) goto loc_00034F91; /* je: equal / zero */

loc_00034F5C: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0xC);
    if (CMP_EQ(ecx, edx)) goto loc_00034F8C; /* je: equal / zero */

loc_00034F66: ;
    if (CMP_EQ(MEM32(ecx), eax)) goto loc_00034F71; /* je: equal / zero */

loc_00034F6A: ;
    ecx = ecx + 4;
    if (CMP_NE(ecx, edx)) goto loc_00034F66; /* jne: not equal / not zero */

loc_00034F71: ;
    if (CMP_EQ(ecx, edx)) goto loc_00034F8C; /* je: equal / zero */

loc_00034F75: ;
    if (TEST_Z(esi, esi)) goto loc_00034F91; /* je: equal / zero */

loc_00034F79: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00032910(); /* call 0x00032910 */

loc_00034F80: ;
    MEM32(esi + 0x580) = 0xFFFFFFFFu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00034F8C: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034F91: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034FA0
 * Original: 0x00034FA0 - 0x00034FE9 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034FA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034FA0: ;
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00034FE4; /* je: equal / zero */

loc_00034FAB: ;
    if (TEST_Z(esi, esi)) goto loc_00034FE4; /* je: equal / zero */

loc_00034FAF: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00034FDF; /* je: equal / zero */

loc_00034FB9: ;
    /* nop */

loc_00034FC0: ;
    if (CMP_EQ(MEM32(eax), esi)) goto loc_00034FCB; /* je: equal / zero */

loc_00034FC4: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_00034FC0; /* jne: not equal / not zero */

loc_00034FCB: ;
    if (CMP_EQ(eax, ecx)) goto loc_00034FDF; /* je: equal / zero */

loc_00034FCF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_00032960(); /* call 0x00032960 */

loc_00034FD9: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00034FDF: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00034FE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034FF0
 * Original: 0x00034FF0 - 0x00035062 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00034FF0: ;
    esp = esp - 0x1C;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0003505D; /* je: equal / zero */

loc_00034FFB: ;
    if (TEST_Z(esi, esi)) goto loc_0003505D; /* je: equal / zero */

loc_00034FFF: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00035058; /* je: equal / zero */

loc_00035009: ;
    /* nop */

loc_00035010: ;
    if (CMP_EQ(MEM32(eax), esi)) goto loc_0003501B; /* je: equal / zero */

loc_00035014: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_00035010; /* jne: not equal / not zero */

loc_0003501B: ;
    if (CMP_EQ(eax, ecx)) goto loc_00035058; /* je: equal / zero */

loc_0003501F: ;
    edx = MEM32(0x847024);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_0001D740(); /* call 0x0001D740 */

loc_00035037: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_00035053: ;
    POP32(esp, edi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00035058: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_0003505D: ;
    POP32(esp, edi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00035070
 * Original: 0x00035070 - 0x000350A0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035070(void)
{
    int _flags = 0; /* fallback flag var */

loc_00035070: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 0xC);
    if (CMP_EQ(esi, MEM32(edi + 0x10))) goto loc_0003509D; /* je: equal / zero */

loc_0003507C: ;
    /* nop */

loc_00035080: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_0003508E; /* je: equal / zero */

loc_00035086: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_0003508C: ;
    goto loc_00035093;

loc_0003508E: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00035093: ;
    eax = MEM32(edi + 0x10);
    esi = esi + 4;
    if (CMP_NE(esi, eax)) goto loc_00035080; /* jne: not equal / not zero */

loc_0003509D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000350A0
 * Original: 0x000350A0 - 0x000350D0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000350A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000350A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FA10);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    if (CMP_BE(edx, 0x3FFFFFFF)) { sub_000350D0(); return; } /* jbe: below or equal (unsigned <=) */

loc_000350CB: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_00035190
 * Original: 0x00035190 - 0x00035243 (179 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035190: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 0x20)) goto loc_00035227; /* jle: less or equal (signed <=) */

loc_000351AB: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_000351B0: ;
    if (CMP_LE(esi & esi, 0)) { sub_00035243(); return; } /* jle: less or equal (signed <=) */

loc_000351B8: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00035280(); /* call 0x00035280 */

loc_000351C9: ;
    ebp = MEM32(esp + 0x24);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi + eax;
    eax = MEM32(esp + 0x20);
    edx = edi;
    ecx = eax;
    edx = edx - ebp;
    ecx = ecx - ebx;
    edx = edx & 0xFFFFFFFCu;
    ecx = ecx & 0xFFFFFFFCu;
    esp = esp + 0x10;
    if (CMP_GE(ecx, edx)) goto loc_00035207; /* jge: greater or equal (signed >=) */

loc_000351F6: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00035190(); /* call 0x00035190 */

loc_00035203: ;
    ebx = ebp;
    goto loc_00035218;

loc_00035207: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00035190(); /* call 0x00035190 */

loc_00035214: ;
    edi = MEM32(esp + 0x20);

loc_00035218: ;
    eax = edi;
    eax = eax - ebx;
    eax = (uint32_t)((int32_t)eax >> 2);
    esp = esp + 0x10;
    if (CMP_G(eax, 0x20)) goto loc_000351B0; /* jg: greater (signed >) */

loc_00035227: ;
    if (CMP_LE(eax, 1)) goto loc_0003523B; /* jle: less or equal (signed <=) */

loc_0003522C: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00035430(); /* call 0x00035430 */

loc_00035238: ;
    esp = esp + 0xC;

loc_0003523B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00035280
 * Original: 0x00035280 - 0x000352ED (109 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035280: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ebx;
    eax = eax - ebp;
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    eax = eax - edx;
    PUSH32(esp, edi);
    eax = (uint32_t)((int32_t)eax >> 1);
    edi = ebp + eax * 4;
    PUSH32(esp, ecx);
    eax = ebx + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000354A0(); /* call 0x000354A0 */

loc_000352AD: ;
    esp = esp + 0x10;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    eax = edi;
    esi = edi + 4;
    if (CMP_AE(ebp, edi)) goto loc_000352D2; /* jae: above or equal (unsigned >=) */

loc_000352B9: ;
    /* nop */

loc_000352C0: ;
    ecx = MEM32(eax + -4);
    edx = MEM32(eax);
    if (CMP_B(edx, ecx)) goto loc_000352D2; /* jb: below (unsigned <) */

loc_000352C9: ;
    if (CMP_A(edx, ecx)) goto loc_000352D2; /* ja: above (unsigned >) */

loc_000352CB: ;
    eax = eax + 0xFFFFFFFCu;
    if (CMP_B(ebp, eax)) goto loc_000352C0; /* jb: below (unsigned <) */

loc_000352D2: ;
    if (CMP_AE(esi, ebx)) goto loc_000352E7; /* jae: above or equal (unsigned >=) */

loc_000352D6: ;
    edx = MEM32(eax);

loc_000352D8: ;
    ecx = MEM32(esi);
    if (CMP_B(edx, ecx)) goto loc_000352E7; /* jb: below (unsigned <) */

loc_000352DE: ;
    if (CMP_A(edx, ecx)) goto loc_000352E7; /* ja: above (unsigned >) */

loc_000352E0: ;
    esi = esi + 4;
    if (CMP_B(esi, ebx)) goto loc_000352D8; /* jb: below (unsigned <) */

loc_000352E7: ;
    ecx = esi;
    ebp = eax;
    g_seh_ebp = ebp; sub_000352F0(); return; /* tail jmp 0x000352F0 */

}

/**
 * sub_000353E0
 * Original: 0x000353E0 - 0x0003542A (74 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000353E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000353E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = esi - edi;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_LE(eax, 1)) goto loc_00035427; /* jle: less or equal (signed <=) */

loc_000353F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);

loc_000353FC: ;
    eax = MEM32(edi);
    ebx = MEM32(edi + esi + -4);
    MEM32(edi + esi + -4) = eax;
    PUSH32(esp, ebp);
    edx = esi + -4;
    edx = (uint32_t)((int32_t)edx >> 2);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00035620(); /* call 0x00035620 */

loc_00035415: ;
    esi = esi - 4;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    esp = esp + 8;
    if (CMP_G(eax, 1)) goto loc_000353FC; /* jg: greater (signed >) */

loc_00035425: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00035427: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035430
 * Original: 0x00035430 - 0x00035495 (101 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035430: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(edi, ebx)) goto loc_00035492; /* je: equal / zero */

loc_0003543E: ;
    PUSH32(esp, esi);
    esi = edi + 4;
    if (CMP_EQ(esi, ebx)) goto loc_00035491; /* je: equal / zero */

loc_00035446: ;
    PUSH32(esp, ebp);

loc_00035447: ;
    ecx = MEM32(esi);
    if (CMP_BE(ecx, MEM32(edi))) goto loc_0003545D; /* jbe: below or equal (unsigned <=) */

loc_0003544D: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    eax = esi + 4;
    if (CMP_EQ(edi, esi)) goto loc_00035489; /* je: equal / zero */

loc_00035454: ;
    if (CMP_EQ(esi, eax)) goto loc_00035489; /* je: equal / zero */

loc_00035458: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00035481;

loc_0003545D: ;
    edx = MEM32(esi + -4);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = esi + -4;
    if (CMP_BE(ecx, edx)) goto loc_00035489; /* jbe: below or equal (unsigned <=) */

loc_00035467: ;
    ebp = MEM32(eax + -4);
    edx = eax;
    eax = eax - 4;
    if (CMP_A(ecx, ebp)) goto loc_00035467; /* ja: above (unsigned >) */

loc_00035473: ;
    if (CMP_EQ(edx, esi)) goto loc_00035489; /* je: equal / zero */

loc_00035477: ;
    eax = esi + 4;
    if (CMP_EQ(esi, eax)) goto loc_00035489; /* je: equal / zero */

loc_0003547E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);

loc_00035481: ;
    PUSH32(esp, 0); sub_0002CE50(); /* call 0x0002CE50 */

loc_00035486: ;
    esp = esp + 0xC;

loc_00035489: ;
    esi = esi + 4;
    if (CMP_NE(esi, ebx)) goto loc_00035447; /* jne: not equal / not zero */

loc_00035490: ;
    POP32(esp, ebp);

loc_00035491: ;
    POP32(esp, esi);

loc_00035492: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000354A0
 * Original: 0x000354A0 - 0x000355AD (269 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000354A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000354A0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = ebp;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    (void)0; /* cmp eax, 0x28 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_LE(eax, 0x28)) { sub_000355AD(); return; } /* jle: less or equal (signed <=) */

loc_000354BC: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, ebx);
    ebx = eax * 8;
    eax = eax << 2;
    edx = MEM32(eax + ecx);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(edx, esi)) goto loc_000354DE; /* jbe: below or equal (unsigned <=) */

loc_000354D9: ;
    MEM32(eax + ecx) = esi;
    MEM32(ecx) = edx;

loc_000354DE: ;
    edx = MEM32(ebx + ecx);
    esi = MEM32(eax + ecx);
    if (CMP_BE(edx, esi)) goto loc_000354EE; /* jbe: below or equal (unsigned <=) */

loc_000354E8: ;
    MEM32(ebx + ecx) = esi;
    MEM32(eax + ecx) = edx;

loc_000354EE: ;
    edx = MEM32(eax + ecx);
    esi = MEM32(ecx);
    if (CMP_BE(edx, esi)) goto loc_000354FC; /* jbe: below or equal (unsigned <=) */

loc_000354F7: ;
    MEM32(eax + ecx) = esi;
    MEM32(ecx) = edx;

loc_000354FC: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(edx);
    esi = edx;
    esi = esi - eax;
    if (CMP_BE(edi, MEM32(esi))) goto loc_00035518; /* jbe: below or equal (unsigned <=) */

loc_0003550A: ;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(esi) = edi;

loc_00035518: ;
    edi = MEM32(eax + edx);
    if (CMP_BE(edi, MEM32(edx))) goto loc_0003552E; /* jbe: below or equal (unsigned <=) */

loc_0003551F: ;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(edx);
    MEM32(eax + edx) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(edx) = edi;

loc_0003552E: ;
    edi = MEM32(edx);
    if (CMP_BE(edi, MEM32(esi))) goto loc_00035542; /* jbe: below or equal (unsigned <=) */

loc_00035534: ;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(esi) = edi;

loc_00035542: ;
    esi = ebp;
    esi = esi - eax;
    edi = ebp;
    edi = edi - ebx;
    ebx = MEM32(esi);
    if (CMP_BE(ebx, MEM32(edi))) goto loc_0003555E; /* jbe: below or equal (unsigned <=) */

loc_00035550: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(esi) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(edi) = ebx;

loc_0003555E: ;
    ebx = MEM32(ebp);
    if (CMP_BE(ebx, MEM32(esi))) goto loc_00035574; /* jbe: below or equal (unsigned <=) */

loc_00035565: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(esi);
    MEM32(ebp) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(esi) = ebx;

loc_00035574: ;
    ebx = MEM32(esi);
    ebp = MEM32(edi);
    if (CMP_BE(ebx, ebp)) goto loc_00035580; /* jbe: below or equal (unsigned <=) */

loc_0003557C: ;
    MEM32(esi) = ebp;
    MEM32(edi) = ebx;

loc_00035580: ;
    edi = MEM32(edx);
    ebx = MEM32(eax + ecx);
    if (CMP_BE(edi, ebx)) goto loc_0003558E; /* jbe: below or equal (unsigned <=) */

loc_00035589: ;
    MEM32(edx) = ebx;
    MEM32(eax + ecx) = edi;

loc_0003558E: ;
    edi = MEM32(esi);
    ebx = MEM32(edx);
    if (CMP_BE(edi, ebx)) goto loc_0003559A; /* jbe: below or equal (unsigned <=) */

loc_00035596: ;
    MEM32(esi) = ebx;
    MEM32(edx) = edi;

loc_0003559A: ;
    esi = MEM32(edx);
    edi = MEM32(eax + ecx);
    if (CMP_BE(esi, edi)) goto loc_000355A8; /* jbe: below or equal (unsigned <=) */

loc_000355A3: ;
    MEM32(edx) = edi;
    MEM32(eax + ecx) = esi;

loc_000355A8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000355E0
 * Original: 0x000355E0 - 0x00035620 (64 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000355E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000355E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi = edi - ebp;
    edi = (uint32_t)((int32_t)edi >> 2);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    if (CMP_LE(esi & esi, 0)) goto loc_0003561C; /* jle: less or equal (signed <=) */

loc_000355FD: ;
    PUSH32(esp, ebx);
    edi = edi;

loc_00035600: ;
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(ebp + esi * 4 + -4);
    PUSH32(esp, eax);
    esi--;
    PUSH32(esp, ebp);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_00035620(); /* call 0x00035620 */

loc_00035614: ;
    esp = esp + 8;
    if (CMP_G(esi & esi, 0)) goto loc_00035600; /* jg: greater (signed >) */

loc_0003561B: ;
    POP32(esp, ebx);

loc_0003561C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00035620
 * Original: 0x00035620 - 0x00035682 (98 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035620: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + esi + 2;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi;
    if (CMP_GE(eax, edx)) goto loc_0003564E; /* jge: greater or equal (signed >=) */

loc_00035632: ;
    PUSH32(esp, ebp);

loc_00035633: ;
    ebp = MEM32(ecx + eax * 4);
    if (CMP_BE(ebp, MEM32(ecx + eax * 4 + -4))) goto loc_0003563D; /* jbe: below or equal (unsigned <=) */

loc_0003563C: ;
    eax--;

loc_0003563D: ;
    ebp = MEM32(ecx + eax * 4);
    MEM32(ecx + esi * 4) = ebp;
    esi = eax;
    eax = eax + eax + 2;
    if (CMP_L(eax, edx)) goto loc_00035633; /* jl: less (signed <) */

loc_0003564D: ;
    POP32(esp, ebp);

loc_0003564E: ;
    if (CMP_NE(eax, edx)) goto loc_0003565A; /* jne: not equal / not zero */

loc_00035650: ;
    eax = MEM32(ecx + edx * 4 + -4);
    MEM32(ecx + esi * 4) = eax;
    esi = edx + -1;

loc_0003565A: ;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_GE(edi, esi)) goto loc_0003567C; /* jge: greater or equal (signed >=) */

loc_00035666: ;
    edx = MEM32(ecx + eax * 4);
    if (CMP_BE(edx, ebx)) goto loc_0003567C; /* jbe: below or equal (unsigned <=) */

loc_0003566D: ;
    MEM32(ecx + esi * 4) = edx;
    esi = eax;
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_L(edi, esi)) goto loc_00035666; /* jl: less (signed <) */

loc_0003567C: ;
    POP32(esp, edi);
    MEM32(ecx + esi * 4) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035690
 * Original: 0x00035690 - 0x000356ED (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035690: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(esi + 4) = ebx;
    ecx = MEM32(edi + 8);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    SET_LO8(edx, MEM8(edi + 0x10));
    MEM8(esi + 0x14) = LO8(edx);
    MEM8(esi + 0x15) = LO8(ebx);
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x21) = LO8(ebx);
    SET_LO8(eax, MEM8(edi + 0x11));
    MEM8(esi + 0x22) = LO8(eax);
    ecx = MEM32(edi + 0x14);
    eax = MEM32(esi + 8);
    eax--;
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, ebp);
    MEM32(esi + 0x28) = edx;
    if ((eax == 0)) goto loc_000356DC; /* je: equal / zero */

loc_000356D4: ;
    eax--;
    if ((eax != 0)) goto loc_000356E3; /* jne: not equal / not zero */

loc_000356D7: ;
    MEM32(esi + 0x2C) = ebx;
    goto loc_000356E3;

loc_000356DC: ;
    MEM32(esi + 0x2C) = 1;

loc_000356E3: ;
    eax = 0x780AB8;
    edx = eax + 1;
    g_seh_ebp = ebp; sub_000356F0(); return; /* tail jmp 0x000356F0 */

}

/**
 * sub_00035760
 * Original: 0x00035760 - 0x00035772 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035760(void)
{
    int _flags = 0; /* fallback flag var */

loc_00035760: ;
    ecx = MEM32(ebx + 0x2C);
    eax = 1;
    if (CMP_NE(ecx, eax)) { sub_00035772(); return; } /* jne: not equal / not zero */

loc_0003576C: ;
    MEM8(ebx + 0x20) = LO8(eax);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00035860
 * Original: 0x00035860 - 0x0003591A (186 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00035860: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00035917; /* je: equal / zero */

loc_0003586B: ;
    SET_LO8(eax, MEM8(edi + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003587E; /* je: equal / zero */

loc_00035872: ;
    SET_LO8(eax, MEM8(esp + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00035917; /* je: equal / zero */

loc_0003587E: ;
    eax = MEM32(edi + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_00035917; /* jne: not equal / not zero */

loc_00035889: ;
    eax = MEM32(edi + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    ecx = esi;
    PUSH32(esp, 0); sub_00018BA0(); /* call 0x00018BA0 */

loc_0003589A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000358FC; /* je: equal / zero */

loc_0003589E: ;
    esi = edi + 0x1C;
    eax = esi;
    PUSH32(esp, 0); sub_00402A70(); /* call 0x00402A70 */

loc_000358A8: ;
    (void)0; /* cmp MEM32(esi), 0 - flags set for next jcc */
    SET_LO8(eax, MEM8(0x846FF3));
    if (CMP_NE(MEM32(esi), 0)) goto loc_000358DD; /* jne: not equal / not zero */

loc_000358B2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000358D1; /* je: equal / zero */

loc_000358B6: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D3D14);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000358CE: ;
    esp = esp + 0xC;

loc_000358D1: ;
    MEM8(edi + 0x15) = 0;
    MEM8(edi + 0x21) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000358DD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00035916; /* je: equal / zero */

loc_000358E1: ;
    edx = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D3CD0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000358F5: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000358FC: ;
    SET_LO8(eax, MEM8(0x846FF3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00035916; /* je: equal / zero */

loc_00035905: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D3C68);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00035913: ;
    esp = esp + 8;

loc_00035916: ;
    POP32(esp, esi);

loc_00035917: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00035920
 * Original: 0x00035920 - 0x00035950 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035920(void)
{
    int _flags = 0; /* fallback flag var */

loc_00035920: ;
    eax = MEM32(ecx + 0x18);
    if (CMP_LE(eax & eax, 0)) goto loc_0003594F; /* jle: less or equal (signed <=) */

loc_00035927: ;
    eax--;
    MEM32(ecx + 0x18) = eax;
    SET_LO8(edx, MEM8(0x846FF3));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0003594F; /* je: equal / zero */

loc_00035935: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D3C20);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0003594B: ;
    esp = esp + 0xC;
    POP32(esp, esi);

loc_0003594F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035950
 * Original: 0x00035950 - 0x00035992 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035950: ;
    SET_LO8(eax, MEM8(0x846FF3));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    edi = edi + 0xB;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00035975; /* je: equal / zero */

loc_00035961: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D3BD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00035972: ;
    esp = esp + 8;

loc_00035975: ;
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_0003597A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x35A60);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0005F940(); /* call 0x0005F940 */

loc_00035989: ;
    if (TEST_NZ(eax, eax)) { sub_00035992(); return; } /* jne: not equal / not zero */

loc_0003598D: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

}

/**
 * sub_000359C0
 * Original: 0x000359C0 - 0x00035A53 (147 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000359C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000359C0: ;
    eax = MEM32(esp + 8);
    eax = eax - 6;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    if ((eax == 0)) goto loc_00035A05; /* je: equal / zero */

loc_000359D2: ;
    eax--;
    if ((eax != 0)) goto loc_00035A4E; /* jne: not equal / not zero */

loc_000359D5: ;
    SET_LO8(eax, MEM8(0x846FF3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000359FC; /* je: equal / zero */

loc_000359DE: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_000359E8: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D3B1C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_000359F9: ;
    esp = esp + 0x10;

loc_000359FC: ;
    MEM8(edi + 0x15) = 1;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00035A05: ;
    SET_LO8(eax, MEM8(0x846FF3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00035A4E; /* je: equal / zero */

loc_00035A0E: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, ecx);
    if (TEST_Z(edi, edi)) goto loc_00035A35; /* je: equal / zero */

loc_00035A13: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_00035A1C: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D3B9C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00035A2D: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00035A35: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_00035A3A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D3B58);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00035A4B: ;
    esp = esp + 0xC;

loc_00035A4E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035A60
 * Original: 0x00035A60 - 0x00035AA4 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035A60: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00035A74; /* je: equal / zero */

loc_00035A68: ;
    if (CMP_EQ(eax, 0x3E3)) goto loc_00035AA3; /* je: equal / zero */

loc_00035A6F: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

loc_00035A74: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x2C) = 2;
    SET_LO8(ecx, MEM8(0x846FF3));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00035AA3; /* je: equal / zero */

loc_00035A89: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D3AD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00035A9F: ;
    esp = esp + 0xC;
    POP32(esp, esi);

loc_00035AA3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00035AB0
 * Original: 0x00035AB0 - 0x00035B32 (130 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035AB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00035AB0: ;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 0x11C);
    if (TEST_NZ(eax, eax)) { sub_00035B32(); return; } /* jne: not equal / not zero */

loc_00035AC4: ;
    if (TEST_Z(ebx, ebx)) goto loc_00035B28; /* je: equal / zero */

loc_00035AC8: ;
    eax = MEM32(esp + 0x120);
    edx = ebx;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00035AD6: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00035B28; /* je: equal / zero */

loc_00035ADC: ;
    xmm0 = MEMF(esp + 0x134); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ecx + 0x1BC) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00035B14; /* jp: parity */

loc_00035AFA: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ecx + 0x1C4) = xmm0; /* movss */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_00035B14: ;
    xmm1 = MEMF(0x648D34); /* movss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(ecx + 0x1C4) = xmm1; /* movss */

loc_00035B28: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_00035F30
 * Original: 0x00035F30 - 0x00035F90 (96 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035F30: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi;
    ecx = 1;
    if (TEST_Z(esi, esi)) goto loc_00035F8D; /* je: equal / zero */

loc_00035F40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_00035F42: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00035F7D; /* je: equal / zero */

loc_00035F49: ;
    /* nop */

loc_00035F50: ;
    edx = MEM32(edi + 8);
    if (CMP_NE(edx, MEM32(eax + 8))) goto loc_00035F62; /* jne: not equal / not zero */

loc_00035F58: ;
    edi = eax;
    eax = MEM32(eax + 4);
    ecx++;
    if (TEST_NZ(eax, eax)) goto loc_00035F50; /* jne: not equal / not zero */

loc_00035F62: ;
    if (CMP_BE(ecx, 4)) goto loc_00035F7D; /* jbe: below or equal (unsigned <=) */

loc_00035F67: ;
    ecx = ecx - 4;
    if ((ecx == 0)) goto loc_00035F7D; /* je: equal / zero */

loc_00035F6C: ;
    ebp = ecx;
    edi = edi;

loc_00035F70: ;
    ebx = MEM32(esi + 4);
    PUSH32(esp, 0); sub_00036640(); /* call 0x00036640 */

loc_00035F78: ;
    ebp--;
    esi = ebx;
    if ((ebp != 0)) goto loc_00035F70; /* jne: not equal / not zero */

loc_00035F7D: ;
    esi = MEM32(edi + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = esi;
    ecx = 1;
    if (TEST_NZ(esi, esi)) goto loc_00035F42; /* jne: not equal / not zero */

loc_00035F8B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00035F8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035F90
 * Original: 0x00035F90 - 0x00035FC7 (55 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00035F90: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    if (TEST_Z(edi, edi)) goto loc_00035FC5; /* je: equal / zero */

loc_00035F98: ;
    if (CMP_EQ(MEM32(edi + 8), ebx)) goto loc_00035FA6; /* je: equal / zero */

loc_00035F9D: ;
    edi = MEM32(edi + 4);
    if (TEST_NZ(edi, edi)) goto loc_00035F98; /* jne: not equal / not zero */

loc_00035FA4: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00035FA6: ;
    PUSH32(esp, esi);

loc_00035FA7: ;
    (void)0; /* cmp MEM32(edi + 8), ebx - flags set for next jcc */
    esi = edi;
    if (CMP_NE(MEM32(edi + 8), ebx)) goto loc_00035FC4; /* jne: not equal / not zero */

loc_00035FAE: ;
    SET_LO8(eax, MEM8(esi + 0x1D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(edi + 4);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00035FC0; /* jne: not equal / not zero */

loc_00035FBB: ;
    PUSH32(esp, 0); sub_00036640(); /* call 0x00036640 */

loc_00035FC0: ;
    if (TEST_NZ(edi, edi)) goto loc_00035FA7; /* jne: not equal / not zero */

loc_00035FC4: ;
    POP32(esp, esi);

loc_00035FC5: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035FD0
 * Original: 0x00035FD0 - 0x00035FE0 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035FD0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    if (TEST_NZ(eax, eax)) { sub_00035FE0(); return; } /* jne: not equal / not zero */

loc_00035FDC: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00036230
 * Original: 0x00036230 - 0x00036258 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036230: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(edi, ebx)) { sub_00036258(); return; } /* jne: not equal / not zero */

loc_0003624F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00036440
 * Original: 0x00036440 - 0x0003653A (250 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm3, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036440: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edx;
    if (CMP_A(eax, 4)) goto loc_00036536; /* ja: above (unsigned >) */

loc_00036454: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3653C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0003645Bu) goto loc_0003645B;
    if (_jt == 0x0003648Au) goto loc_0003648A;
    if (_jt == 0x000364BAu) goto loc_000364BA;
    if (_jt == 0x000364DEu) goto loc_000364DE;
    if (_jt == 0x000364FAu) goto loc_000364FA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003645B: ;
    ecx = MEM32(esp + 0x10);
    eax = edi + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x11C;
    PUSH32(esp, edx);
    ecx = ebx + 0x11C;
    PUSH32(esp, ecx);
    eax = edi + 0x10;
    edx = esi + 0x10;
    ecx = ebx + 0x10;
    PUSH32(esp, 0); sub_003CD8E0(); /* call 0x003CD8E0 */

loc_00036483: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003648A: ;
    edx = MEM32(esp + 0x10);
    eax = edi + 0x11C;
    edi = edi + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi + 0x11C;
    PUSH32(esp, ecx);
    esi = esi + 0x10;
    edx = ebx + 0x11C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = ebx + 0x10;
    PUSH32(esp, 0); sub_003CD940(); /* call 0x003CD940 */

loc_000364B3: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000364BA: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = edi + 0x10;
    PUSH32(esp, edi);
    esi = esi + 0x10;
    PUSH32(esp, esi);
    ecx = ebx + 0x10;
    PUSH32(esp, 0); sub_003CD990(); /* call 0x003CD990 */

loc_000364D7: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000364DE: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    edi = edi + 0x10;
    PUSH32(esp, edi);
    esi = esi + 0x10;
    PUSH32(esp, esi);
    ecx = ebx + 0x10;
    PUSH32(esp, 0); sub_003CD9D0(); /* call 0x003CD9D0 */

loc_000364F3: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000364FA: ;
    ecx = MEM32(esi + 0x1EC);
    xmm7 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, ecx);
    edx = edi + 0x10;
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = ebx + 0x10;
    PUSH32(esp, ecx);
    xmm3 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003CDBC0(); /* call 0x003CDBC0 */

loc_0003651B: ;
    ebx = ebx + 0x11C;
    edi = edi + 0x11C;
    eax = esi + 0x11C;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003CD1C0(); /* call 0x003CD1C0 */

loc_00036533: ;
    esp = esp + 0x14;

loc_00036536: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00036550
 * Original: 0x00036550 - 0x00036637 (231 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036550: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ebp, ebp)) goto loc_0003655E; /* je: equal / zero */

loc_0003655A: ;
    MEM8(ebp) = 0;

loc_0003655E: ;
    esi = MEM32(eax + 4);
    if (TEST_Z(esi, esi)) goto loc_00036634; /* je: equal / zero */

loc_00036569: ;
    /* nop */

loc_00036570: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x1E0) = 0;
    if (TEST_Z(eax, eax)) goto loc_0003658D; /* je: equal / zero */

loc_00036581: ;
    ecx = MEM32(eax + 8);
    if (CMP_EQ(ecx, MEM32(esi + 8))) goto loc_0003661F; /* je: equal / zero */

loc_0003658D: ;
    eax = MEM32(esi + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x84A5BD) = 0;
    if (TEST_NZ(eax, eax)) goto loc_000365A9; /* jne: not equal / not zero */

loc_0003659B: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x1C), _icall_esp); /* indirect call */
    }

loc_000365A7: ;
    goto loc_000365B5;

loc_000365A9: ;
    eax = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x20), _icall_esp); /* indirect call */
    }

loc_000365B5: ;
    SET_LO8(eax, MEM8(0x84A5BD));
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003662D; /* jne: not equal / not zero */

loc_000365C1: ;
    eax = MEM32(esi + 0xF4);
    if (CMP_NE(eax, 1)) goto loc_000365E5; /* jne: not equal / not zero */

loc_000365CC: ;
    if (CMP_NE(MEM16(esi + 0x1DA), 0)) goto loc_000365E0; /* jne: not equal / not zero */

loc_000365D6: ;
    if (CMP_A(MEM16(esi + 0x1D8), 0)) goto loc_000365F3; /* ja: above (unsigned >) */

loc_000365E0: ;
    if (CMP_EQ(eax, 1)) goto loc_000365EF; /* je: equal / zero */

loc_000365E5: ;
    if (CMP_NE(MEM16(esi + 0xF8), 0)) goto loc_000365F3; /* jne: not equal / not zero */

loc_000365EF: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0003661F; /* je: equal / zero */

loc_000365F3: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0003661F; /* je: equal / zero */

loc_000365FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000365FF: ;
    SET_LO8(ecx, MEM8(0x84A5BD));
    esp = esp + 8;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003662D; /* jne: not equal / not zero */

loc_0003660C: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00036634; /* je: equal / zero */

loc_00036610: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM8(esi + 0x1F1) = 1;
    if (TEST_Z(ebp, ebp)) goto loc_0003661F; /* je: equal / zero */

loc_0003661B: ;
    MEM8(ebp) = 1;

loc_0003661F: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_00036570; /* jne: not equal / not zero */

loc_0003662A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0003662D: ;
    MEM8(0x84A5BD) = 0;

loc_00036634: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00036640
 * Original: 0x00036640 - 0x000366DA (154 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036640(void)
{
    int _flags = 0; /* fallback flag var */

loc_00036640: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0003664E; /* je: equal / zero */

loc_0003664C: ;
    MEM32(eax) = ecx;

loc_0003664E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    ecx = ebx;
    edi = 0x84D458;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0003666C: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00036697; /* je: equal / zero */

loc_00036672: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0003667D; /* je: equal / zero */

loc_00036679: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0003667D: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_00036697; /* jne: not equal / not zero */

loc_00036684: ;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0003668D: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00036697: ;
    ecx = MEM32(esi + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0xC;
    if (TEST_Z(ecx, ecx)) goto loc_000366AA; /* je: equal / zero */

loc_000366A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000366A7: ;
    esp = esp + 4;

loc_000366AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_000366B0: ;
    if (TEST_NZ(eax, eax)) goto loc_000366D7; /* jne: not equal / not zero */

loc_000366B4: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_000366D4: ;
    esp = esp + 4;

loc_000366D7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000366E0
 * Original: 0x000366E0 - 0x000366F6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000366E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000366E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ecx + 8);
    if (CMP_AE(eax, ecx)) { sub_000366F6(); return; } /* jae: above or equal (unsigned >=) */

loc_000366F2: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00036700
 * Original: 0x00036700 - 0x00036740 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036700(void)
{
    int _flags = 0; /* fallback flag var */

loc_00036700: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (TEST_Z(esi, esi)) goto loc_0003673E; /* je: equal / zero */

loc_00036708: ;
    PUSH32(esp, edi);
    /* nop */

loc_00036710: ;
    if (CMP_NE(MEM32(esi), 0)) goto loc_00036718; /* jne: not equal / not zero */

loc_00036715: ;
    esi = MEM32(esi + 4);

loc_00036718: ;
    if (TEST_Z(esi, esi)) goto loc_0003673D; /* je: equal / zero */

loc_0003671C: ;
    /* nop */

loc_00036720: ;
    if (CMP_EQ(MEM32(esi + 8), ebx)) goto loc_0003672F; /* je: equal / zero */

loc_00036725: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_00036720; /* jne: not equal / not zero */

loc_0003672C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003672F: ;
    edi = MEM32(esi + 4);
    PUSH32(esp, 0); sub_00036640(); /* call 0x00036640 */

loc_00036737: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_00036710; /* jne: not equal / not zero */

loc_0003673D: ;
    POP32(esp, edi);

loc_0003673E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036740
 * Original: 0x00036740 - 0x00036756 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036740(void)
{
    int _flags = 0; /* fallback flag var */

loc_00036740: ;
    if (TEST_Z(ecx, ecx)) goto loc_00036753; /* je: equal / zero */

loc_00036744: ;
    eax = MEM32(ecx);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00036753; /* je: equal / zero */

loc_0003674B: ;
    edx = MEM32(eax + 8);
    if (CMP_EQ(edx, MEM32(ecx + 8))) goto loc_00036755; /* je: equal / zero */

loc_00036753: ;
    eax = 0; /* xor self */

loc_00036755: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036760
 * Original: 0x00036760 - 0x00036797 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036760(void)
{
    int _flags = 0; /* fallback flag var */

loc_00036760: ;
    ecx = MEM32(eax + 4);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_00036796; /* je: equal / zero */

loc_00036769: ;
    /* nop */

loc_00036770: ;
    if (CMP_NE(MEM32(ecx), 0)) goto loc_00036778; /* jne: not equal / not zero */

loc_00036775: ;
    ecx = MEM32(ecx + 4);

loc_00036778: ;
    if (TEST_Z(ecx, ecx)) goto loc_00036796; /* je: equal / zero */

loc_0003677C: ;
    /* nop */

loc_00036780: ;
    if (CMP_EQ(MEM32(ecx + 8), edx)) goto loc_0003678D; /* je: equal / zero */

loc_00036785: ;
    ecx = MEM32(ecx + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00036780; /* jne: not equal / not zero */

loc_0003678C: ;
    esp += 4; return; /* ret */

loc_0003678D: ;
    eax = ecx;
    ecx = MEM32(ecx + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00036770; /* jne: not equal / not zero */

loc_00036796: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000367A0
 * Original: 0x000367A0 - 0x000367A5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000367A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000367A0: ;
    if (TEST_NZ(eax, eax)) { sub_000367A5(); return; } /* jne: not equal / not zero */

loc_000367A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036830
 * Original: 0x00036830 - 0x0003686E (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036830(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00036830: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00036836: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0003686A; /* je: equal / zero */

loc_0003683C: ;
    eax = MEM32(ecx + 0x10);
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    MEMF(ecx + 0xE4) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (1 /* jp after test - parity */) { sub_0003686E(); return; } /* jp: parity */

loc_00036862: ;
    MEMF(ecx + 0xE8) = xmm1; /* movss */

loc_0003686A: ;
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000368A0
 * Original: 0x000368A0 - 0x00036920 (128 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000368A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000368A0: ;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_000368A5: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) { sub_00036920(); return; } /* je: equal / zero */

loc_000368AB: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x100);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x104);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x108);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    if (TEST_Z(esi, esi)) goto loc_0003691D; /* je: equal / zero */

loc_000368DE: ;
    xmm1 = MEMF(ecx + 0x100); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0003691A; /* jp: parity */

loc_000368F2: ;
    xmm1 = MEMF(ecx + 0x104); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0003691A; /* jp: parity */

loc_00036903: ;
    xmm1 = MEMF(ecx + 0x108); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0003691A; /* jp: parity */

loc_00036914: ;
    MEM8(esi) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0003691A: ;
    MEM8(esi) = 1;

loc_0003691D: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00036930
 * Original: 0x00036930 - 0x0003696E (62 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036930(void)
{
    int _flags = 0; /* fallback flag var */

loc_00036930: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00036938: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_0003696A; /* je: equal / zero */

loc_0003693E: ;
    ecx = MEM32(edx);
    (void)0; /* cmp MEM32(ecx), 0 - flags set for next jcc */
    eax = 1;
    if (CMP_EQ(MEM32(ecx), 0)) { sub_0003696E(); return; } /* je: equal / zero */

loc_0003694A: ;
    esi = MEM32(ecx + 8);
    if (CMP_NE(esi, MEM32(edx + 8))) { sub_0003696E(); return; } /* jne: not equal / not zero */

loc_00036952: ;
    eax++;
    if (TEST_Z(ecx, ecx)) { sub_0003696E(); return; } /* je: equal / zero */

loc_00036957: ;
    edx = MEM32(ecx);
    if (CMP_EQ(MEM32(edx), 0)) { sub_0003696E(); return; } /* je: equal / zero */

loc_0003695E: ;
    esi = MEM32(edx + 8);
    if (CMP_NE(esi, MEM32(ecx + 8))) { sub_0003696E(); return; } /* jne: not equal / not zero */

loc_00036966: ;
    ecx = edx;
    goto loc_00036952;

loc_0003696A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036970
 * Original: 0x00036970 - 0x000369CD (93 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036970(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_00036970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    edx = MEM32(ecx + 0x34);
    eax = eax + eax * 8;
    ecx = MEM32(edx + eax * 4 + 0xC);
    xmm1 = MEMF(edx + eax * 4 + 0x14); /* movss */
    xmm0 = MEMF(edx + eax * 4 + 0x10); /* movss */
    eax = edx + eax * 4;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = esp + 4;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_0003699F: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    esp = esp + 4;
    MEMF(ecx) = xmm0; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000369D0
 * Original: 0x000369D0 - 0x00036A56 (134 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000369D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000369D0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_000369DE; /* jne: not equal / not zero */

loc_000369D9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_000369DE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00036A2E; /* je: equal / zero */

loc_00036A06: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC800)) goto loc_00036A2E; /* jb: below (unsigned <) */

loc_00036A12: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00036A1C: ;
    PUSH32(esp, 0xC800);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00036A27: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00036A4E; /* jne: not equal / not zero */

loc_00036A2E: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00036A40: ;
    PUSH32(esp, 0xC800);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00036A4B: ;
    esp = esp + 8;

loc_00036A4E: ;
    POP32(esp, edi);
    MEM32(0x762D70) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036A60
 * Original: 0x00036A60 - 0x00036B4D (237 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036A60: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_00036A75; /* jne: not equal / not zero */

loc_00036A70: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00036A75: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00036ABF; /* je: equal / zero */

loc_00036A9B: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_00036ABF; /* jb: below (unsigned <) */

loc_00036AA4: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00036AAE: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00036AB6: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_00036ADE; /* jne: not equal / not zero */

loc_00036ABF: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00036AD1: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00036AD9: ;
    esp = esp + 8;
    esi = eax;

loc_00036ADE: ;
    eax = MEM32(ebp + 0x30);
    MEM16(esi + 0x10) = LO16(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0x4F);
    eax = eax << 6;
    PUSH32(esp, 0x5D4C08);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00036AFA: ;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(edx);
    MEM32(ecx + edx + 4) = eax;
    MEM32(esi) = ebp;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM8(esi + 0x12) = 0;
    eax = 0; /* xor self */
    ecx = esi + 0x14;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    PUSH32(esp, 0x5A0350);
    eax = esi;
    PUSH32(esp, 0); sub_00036BA0(); /* call 0x00036BA0 */

loc_00036B46: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00036B50
 * Original: 0x00036B50 - 0x00036B98 (72 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00036B50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_Z(ebx, ebx)) goto loc_00036B96; /* je: equal / zero */

loc_00036B59: ;
    eax = ebx + 4;
    if (TEST_Z(eax, eax)) goto loc_00036B80; /* je: equal / zero */

loc_00036B60: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (TEST_Z(esi, esi)) goto loc_00036B7F; /* je: equal / zero */

loc_00036B68: ;
    PUSH32(esp, edi);
    /* nop */

loc_00036B70: ;
    edi = MEM32(esi + 4);
    PUSH32(esp, 0); sub_00036640(); /* call 0x00036640 */

loc_00036B78: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_00036B70; /* jne: not equal / not zero */

loc_00036B7E: ;
    POP32(esp, edi);

loc_00036B7F: ;
    POP32(esp, esi);

loc_00036B80: ;
    ebx = ebx + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00036B89: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00036B93: ;
    esp = esp + 8;

loc_00036B96: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00036BA0
 * Original: 0x00036BA0 - 0x00036BFF (95 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036BA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ebp, ebp)) goto loc_00036BD3; /* je: equal / zero */

loc_00036BB1: ;
    if (CMP_BE(MEM16(eax + 0x10), LO16(edx))) goto loc_00036BFA; /* jbe: below or equal (unsigned <=) */

loc_00036BB7: ;
    edi = ebx;
    ecx = 0x10;
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ZX16(MEM16(eax + 0x10));
    edx++;
    ebx = ebx + 0x40;
    if (CMP_L(edx, ecx)) goto loc_00036BB7; /* jl: less (signed <) */

loc_00036BCE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00036BD3: ;
    if (CMP_BE(MEM16(eax + 0x10), 0)) goto loc_00036BFA; /* jbe: below or equal (unsigned <=) */

loc_00036BDA: ;
    /* nop */

loc_00036BE0: ;
    edi = ebx;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ZX16(MEM16(eax + 0x10));
    edx++;
    ebx = ebx + 0x40;
    if (CMP_L(edx, ecx)) goto loc_00036BE0; /* jl: less (signed <) */

loc_00036BFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
