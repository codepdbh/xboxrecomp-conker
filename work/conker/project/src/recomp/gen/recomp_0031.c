/**
 * Burnout 3 - Recompiled code chunk 31
 * Functions: 250 (0x002AE930 - 0x002C5070)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002AE930
 * Original: 0x002AE930 - 0x002AE944 (20 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE930(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AE930: ;
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002AE942; /* je: equal / zero */

loc_002AE937: ;
    PUSH32(esp, esi);
    ecx = 0x16;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, esi);

loc_002AE942: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002AE950
 * Original: 0x002AE950 - 0x002AE99B (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002AE950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F270);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0xC);
    ebx = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_002AE980: ;
    if (CMP_EQ(esi, ebx)) { sub_002AE99B(); return; } /* je: equal / zero */

loc_002AE984: ;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_002AE930(); /* call 0x002AE930 */

loc_002AE98D: ;
    edi = edi + 0x58;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x58;
    MEM32(ebp + 8) = esi;
    goto loc_002AE980;

}

/**
 * sub_002AE9C0
 * Original: 0x002AE9C0 - 0x002AEBB4 (500 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE9C0(void)
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

loc_002AE9C0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(0x801FFC) = ebx;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002AE9F0; /* jne: not equal / not zero */

loc_002AE9D5: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x46)) goto loc_002AE9F0; /* je: equal / zero */

loc_002AE9DE: ;
    eax = MEM32(0x8470DC);
    PUSH32(esp, 0xFE);
    PUSH32(esp, 0); sub_001D2E50(); /* call 0x001D2E50 */

loc_002AE9ED: ;
    esp = esp + 4;

loc_002AE9F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8493BC);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, ebx)) goto loc_002AEB00; /* je: equal / zero */

loc_002AEA00: ;
    (void)0; /* cmp MEM8(esi + 0x190), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM8(esi + 0x190), LO8(ebx))) ? 1 : 0); /* setne */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002AEB00; /* je: equal / zero */

loc_002AEA11: ;
    fp_push(MEMF(esi + 0x198)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AEA22: ;
    fp_push(MEMF(esi + 0x19C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x3E) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AEA37: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D1C); /* movss */
    MEM8(esp + 0x3F) = LO8(eax);
    SET_LO8(eax, 0x80);
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    SET_LO8(eax, 0x64);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF4); /* movss */
    MEM8(esp + 0x3A) = LO8(eax);
    MEM8(esp + 0x3B) = LO8(eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64ACF8); /* movss */
    SET_LO8(eax, 0x96);
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    eax = MEM32(esi + 0x194);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x6492EC); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64ACF4); /* movss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64ACF0); /* movss */
    PUSH32(esp, 0x41700000);
    MEM8(esp + 0x24) = LO8(ebx);
    MEM8(esp + 0x25) = LO8(ebx);
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001BBEA0(); /* call 0x001BBEA0 */

loc_002AEAF7: ;
    esi = MEM32(0x8493BC);
    esp = esp + 0x10;

loc_002AEB00: ;
    esi = esi + 0x1A0;
    ecx = 8;
    edi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(esp + 0x14); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    POP32(esp, edi);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEMF(esp + 0xC) = xmm0; /* movss */
    POP32(esp, esi);
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002AEB6C; /* jbe: below or equal (unsigned <=) */

loc_002AEB4B: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002AEB6C; /* jp: parity */

loc_002AEB5D: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002AEB91; /* jnp: not parity */

loc_002AEB6C: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = esp + 0x14;
    PUSH32(esp, 0); sub_001C2280(); /* call 0x001C2280 */

loc_002AEB89: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    ebx = 0; /* xor self */

loc_002AEB91: ;
    (void)0; /* cmp MEM8(esp + 0x24), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(MEM8(esp + 0x24), LO8(ebx))) goto loc_002AEBB0; /* je: equal / zero */

loc_002AEB98: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002AEBB0; /* jbe: below or equal (unsigned <=) */

loc_002AEBA3: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001BDCF0(); /* call 0x001BDCF0 */

loc_002AEBAD: ;
    esp = esp + 4;

loc_002AEBB0: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002AEBC0
 * Original: 0x002AEBC0 - 0x002AEC6E (174 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AEBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AEBC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_002AEBE0; /* je: equal / zero */

loc_002AEBD2: ;
    MEM32(ebp) = 0x606A28;
    MEM32(ebp + 0x60) = 0x5F1144;

loc_002AEBE0: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 4);
    MEM32(ecx + ebp) = 0x606A24;
    edx = MEM32(ebp);
    edi = MEM32(edx + 4);
    edi = edi + ebp;
    ecx = edi;
    PUSH32(esp, 0); sub_0046DDA6(); /* call 0x0046DDA6 */

loc_002AEBFC: ;
    esi = ebp + 4;
    PUSH32(esp, 0x20);
    eax = edi;
    MEM32(edi + 0x28) = esi;
    MEM32(edi + 0x2C) = ebx;
    PUSH32(esp, 0); sub_000A3270(); /* call 0x000A3270 */

loc_002AEC0E: ;
    MEM8(edi + 0x30) = LO8(eax);
    if (CMP_NE(MEM32(edi + 0x28), ebx)) goto loc_002AEC25; /* jne: not equal / not zero */

loc_002AEC16: ;
    eax = MEM32(edi + 8);
    eax = eax | 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0046DC85(); /* call 0x0046DC85 */

loc_002AEC25: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 4);
    ebx = esi;
    MEM32(ecx + ebp) = 0x606A30;
    PUSH32(esp, 0); sub_000A2950(); /* call 0x000A2950 */

loc_002AEC3C: ;
    ebx = 0; /* xor self */
    eax = esi;
    MEM32(esi) = 0x5F11B0;
    MEM32(esi + 0x48) = ebx;
    MEM8(esi + 0x54) = LO8(ebx);
    MEM8(esi + 0x4C) = LO8(ebx);
    PUSH32(esp, 0); sub_000A2A00(); /* call 0x000A2A00 */

loc_002AEC54: ;
    eax = MEM32(0x876AD8);
    POP32(esp, edi);
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x3C) = ebx;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AEC70
 * Original: 0x002AEC70 - 0x002AECD1 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AEC70(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AEC70: ;
    PUSH32(esp, ebx);
    ebx = ecx + -96;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ebx + 0x60;
    PUSH32(esp, edi);
    MEM32(ecx + esi + -96) = 0x606A30;
    edi = esi + -92;
    ecx = edi;
    PUSH32(esp, 0); sub_000A1800(); /* call 0x000A1800 */

loc_002AEC90: ;
    edx = MEM32(edi + -4);
    eax = MEM32(edx + 4);
    MEM32(eax + edi + -4) = 0x606A24;
    ecx = esi;
    MEM32(esi) = 0x5F1144;
    PUSH32(esp, 0); sub_0046DB9B(); /* call 0x0046DB9B */

loc_002AECAB: ;
    (void)0; /* test MEM8(esp + 0x10), 1 - flags set for next jcc */
    eax = ebx;
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_002AECCB; /* je: equal / zero */

loc_002AECB4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_002AECC9; /* je: equal / zero */

loc_002AECBC: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AECC6: ;
    esp = esp + 4;

loc_002AECC9: ;
    eax = ebx;

loc_002AECCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AECE0
 * Original: 0x002AECE0 - 0x002AED23 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AECE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AECE0: ;
    PUSH32(esp, esi);
    esi = ecx + -4;
    eax = MEM32(esi);
    edx = MEM32(eax + 4);
    ecx = esi + 4;
    MEM32(edx + ecx + -4) = 0x606A24;
    MEM32(ecx) = 0x5F1144;
    PUSH32(esp, 0); sub_0046DB9B(); /* call 0x0046DB9B */

loc_002AECFF: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    eax = esi;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_002AED1F; /* je: equal / zero */

loc_002AED08: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_002AED1D; /* je: equal / zero */

loc_002AED10: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AED1A: ;
    esp = esp + 4;

loc_002AED1D: ;
    eax = esi;

loc_002AED1F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AED30
 * Original: 0x002AED30 - 0x002AED63 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AED30(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AED30: ;
    eax = MEM32(0x84A188);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x20);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(ecx, ecx)) goto loc_002AED4A; /* je: equal / zero */

loc_002AED42: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_002AED47: ;
    esp = esp + 8;

loc_002AED4A: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AED53: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AED5E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002AED70
 * Original: 0x002AED70 - 0x002AEFFC (652 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AED70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AED70: ;
    eax = MEM32(0x84A19C);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_002AEFF7; /* jne: not equal / not zero */

loc_002AED83: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x404);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4000000);
    eax = 0x808000FFu;
    PUSH32(esp, ebx);
    edi = 0x20;
    PUSH32(esp, 0xA00000);
    MEM32(0x84B798) = 0xCF570;
    MEM32(0x74FB2C) = edi;
    MEM32(0x74FB28) = eax;
    MEM32(0x74FB24) = eax;
    PUSH32(esp, 0); sub_0042DD31(); /* call 0x0042DD31 */

loc_002AEDBF: ;
    edx = eax;
    PUSH32(esp, ebx);
    ecx = edx + 0xB7C;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    eax = edx + 0x2070000;
    PUSH32(esp, 0x84A188);
    MEM32(0x7FA388) = edx;
    PUSH32(esp, 0); sub_003E7540(); /* call 0x003E7540 */

loc_002AEDE2: ;
    eax = MEM32(0x84A188);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    esp = esp + 0x14;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0xC) = 0x80;
    if (CMP_EQ(ecx, ebx)) goto loc_002AEE0B; /* je: equal / zero */

loc_002AEDFE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_002AEE06: ;
    esp = esp + 8;
    goto loc_002AEE27;

loc_002AEE0B: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));

loc_002AEE17: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_002AEE17; /* ja: above (unsigned >) */

loc_002AEE22: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_002AEE27: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x102000);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042E61B(); /* call 0x0042E61B */

loc_002AEE36: ;
    MEM32(0x7FA4E8) = eax;
    PUSH32(esp, 0x7FF0000);
    PUSH32(esp, 0x84A184);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003E88A0(); /* call 0x003E88A0 */

loc_002AEE4C: ;
    eax = MEM32(0x84A184);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    esp = esp + 8;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(ecx, ebx)) goto loc_002AEE6D; /* je: equal / zero */

loc_002AEE64: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_002AEE68: ;
    esp = esp + 8;
    goto loc_002AEE90;

loc_002AEE6D: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));
    /* nop */

loc_002AEE80: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_002AEE80; /* ja: above (unsigned >) */

loc_002AEE8B: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_002AEE90: ;
    eax = MEM32(0x84A184);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(0x84B790) = eax;
    edi = esp + 0x18;
    eax = 0x6C0290;
    edx = 8;
    MEM32(0x7FA494) = ebx;
    MEM32(0x7FA490) = ebx;
    MEMF(0x7FA4B0) = xmm0; /* movss */
    MEMF(0x7FA4DC) = xmm0; /* movss */
    MEMF(0x7FA4D8) = xmm0; /* movss */
    MEM32(0x7FA4AC) = ebx;
    MEM32(0x7FA4A8) = ebx;
    MEM32(0x7FA488) = ebx;
    MEM32(0x7FA48C) = ebx;
    MEM32(0x7FA480) = ebx;
    MEM32(0x7FA484) = ebx;
    MEM32(0x7FA4C0) = ebx;
    MEM32(0x7FA4C4) = ebx;
    MEM32(0x7FA4B8) = ebx;
    MEM32(0x7FA4BC) = ebx;
    MEM32(0x7FA4A0) = ebx;
    MEM32(0x7FA4A4) = ebx;
    MEM32(0x7FA498) = ebx;
    MEM32(0x7FA49C) = ebx;
    MEM32(0x7FA4B4) = ebx;
    MEM32(0x84A19C) = 1;
    PUSH32(esp, 0); sub_003E64E0(); /* call 0x003E64E0 */

loc_002AEF43: ;
    ebp = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x178);
    eax = edi + ebp;
    PUSH32(esp, 0x606A34);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002AEF60: ;
    esi = eax;
    ecx = edi + -1;
    esp = esp + 0x18;
    if (TEST_Z(esi, ecx)) goto loc_002AEF77; /* je: equal / zero */

loc_002AEF6C: ;
    edx = edi + -1;
    edx = ~edx;
    edx = edx & esi;
    edx = edx + edi;
    esi = edx;

loc_002AEF77: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x183);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002AEF8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6C0290);
    PUSH32(esp, 8);
    edx = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x84A190);
    eax = esi;
    PUSH32(esp, 0); sub_003E6550(); /* call 0x003E6550 */

loc_002AEFA4: ;
    eax = MEM32(0x84A190);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    esp = esp + 0x24;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x18) = 4;
    POP32(esp, ebp);
    if (CMP_EQ(ecx, ebx)) goto loc_002AEFCB; /* je: equal / zero */

loc_002AEFC1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_002AEFC6: ;
    esp = esp + 8;
    goto loc_002AEFE7;

loc_002AEFCB: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));

loc_002AEFD7: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_002AEFD7; /* ja: above (unsigned >) */

loc_002AEFE2: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_002AEFE7: ;
    edx = MEM32(0x84A190);
    eax = MEM32(0x84A18C);
    POP32(esp, edi);
    MEM32(edx + 0x4C) = eax;
    POP32(esp, esi);

loc_002AEFF7: ;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002AF000
 * Original: 0x002AF000 - 0x002AF0B3 (179 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF000(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AF000: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A188);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E7710(); /* call 0x003E7710 */

loc_002AF00D: ;
    eax = MEM32(0x7FA388);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD6E(); /* call 0x0042DD6E */

loc_002AF018: ;
    PUSH32(esp, 0x404);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4000000);
    PUSH32(esp, 0x100000);
    PUSH32(esp, 0x2070000);
    MEM32(0x7FA388) = 0;
    MEM32(0x84A188) = 0;
    PUSH32(esp, 0); sub_0042DD31(); /* call 0x0042DD31 */

loc_002AF047: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1BC);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x2C4C);
    MEM32(0x7FA388) = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002AF062: ;
    ecx = MEM32(0x7FA388);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = eax;
    eax = ecx + 0x2070000;
    ecx = edx + 0x2C4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x84A188);
    PUSH32(esp, 0); sub_003E7540(); /* call 0x003E7540 */

loc_002AF089: ;
    eax = MEM32(0x84A188);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    esp = esp + 0x24;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 4) = 0x80;
    if (TEST_Z(ecx, ecx)) { sub_002AF0B3(); return; } /* je: equal / zero */

loc_002AF0A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_002AF0AD: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AF0E0
 * Original: 0x002AF0E0 - 0x002AF174 (148 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF0E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AF0E0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002AF0EE; /* jne: not equal / not zero */

loc_002AF0E9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002AF0EE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_002AF10A; /* jne: not equal / not zero */

loc_002AF0FF: ;
    (void)0; /* cmp ebx, 0x20 - flags set for next jcc */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0xFFFFFFF4u;
    edi = edi + 0x10;

loc_002AF10A: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_002AF156; /* je: equal / zero */

loc_002AF130: ;
    ecx = MEM32(esi + 0x80);
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    eax = ebx;
    if (CMP_BE(ebx, edi)) eax = edi; /* cmovbe */
    if (CMP_A(eax, ecx)) goto loc_002AF156; /* ja: above (unsigned >) */

loc_002AF141: ;
    ecx = edi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AF148: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AF14F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002AF16F; /* jne: not equal / not zero */

loc_002AF156: ;
    esi = MEM32(0x84A184);
    ecx = edi;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AF165: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AF16C: ;
    esp = esp + 8;

loc_002AF16F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AF180
 * Original: 0x002AF180 - 0x002AF1B5 (53 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF180(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AF180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002AF194: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_002AF1B1; /* je: equal / zero */

loc_002AF19D: ;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_002AF1B1: ;
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002AF1C0
 * Original: 0x002AF1C0 - 0x002AF202 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF1C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AF1C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002AF1CD: ;
    if (TEST_NZ(eax, eax)) goto loc_002AF200; /* jne: not equal / not zero */

loc_002AF1D1: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_002AF200; /* je: equal / zero */

loc_002AF1D7: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002AF1F7: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_002AF200: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002AF210
 * Original: 0x002AF210 - 0x002AF24C (60 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF210(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AF210: ;
    eax = edi;
    edx = eax + 1;

loc_002AF215: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002AF215; /* jne: not equal / not zero */

loc_002AF21C: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax - edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002AF231: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002AF24B; /* je: equal / zero */

loc_002AF238: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = edi;
    esi = esi - edi;
    /* nop */

loc_002AF240: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002AF240; /* jne: not equal / not zero */

loc_002AF24A: ;
    POP32(esp, esi);

loc_002AF24B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AF250
 * Original: 0x002AF250 - 0x002AF3EB (411 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AF250: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6270(); /* call 0x003E6270 */

loc_002AF25A: ;
    edx = MEM32(0x7FA4AC);
    ecx = MEM32(0x7FA4A8);
    edi = MEM32(0x7FA494);
    ebx = MEM32(0x7FA490);
    eax = MEM32(0x7FA4A0);
    ebp = MEM32(0x7FA488);
    esi = MEM32(0x7FA4A4);
    xmm1 = MEMF(0x7FA4B0); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edx = edx + edi;
    ecx = ecx + ebx;
    eax = eax + ebp;
    MEM32(0x7FA4A0) = eax;
    eax = MEM32(0x7FA48C);
    esi = esi + eax + _cf; /* adc */
    eax = MEM32(0x7FA49C);
    MEM32(0x7FA4AC) = edx;
    edx = MEM32(0x7FA498);
    MEM32(0x7FA4A8) = ecx;
    ecx = MEM32(0x7FA480);
    edx = edx + ecx;
    MEM32(0x7FA498) = edx;
    edx = MEM32(0x7FA484);
    eax = eax + edx + _cf; /* adc */
    xmm1 = xmm1 + xmm0; /* addss */
    MEM32(0x7FA4A4) = esi;
    esi = 0; /* xor self */
    /* comiss xmm1, MEMF(0x648E38) - sets EFLAGS */
    MEMF(0x7FA4B0) = xmm1; /* movss */
    MEM32(0x7FA49C) = eax;
    if ((xmm1 < MEMF(0x648E38))) goto loc_002AF38D; /* jb: below (unsigned <) */

loc_002AF2F8: ;
    fp_push((double)SMEM32(0x7FA4A0)); /* fild */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = (float)(int32_t)MEM32(0x7FA4AC); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x7FA4DC) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(0x7FA4A8); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x7FA4D8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AF339: ;
    fp_push((double)SMEM32(0x7FA498)); /* fild */
    MEM32(0x7FA4C0) = eax;
    MEM32(0x7FA4C4) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AF353: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x7FA4B8) = eax;
    MEM32(0x7FA4BC) = edx;
    MEMF(0x7FA4B0) = xmm0; /* movss */
    MEM32(0x7FA4AC) = esi;
    MEM32(0x7FA4A8) = esi;
    MEM32(0x7FA4A0) = esi;
    MEM32(0x7FA4A4) = esi;
    MEM32(0x7FA498) = esi;
    MEM32(0x7FA49C) = esi;

loc_002AF38D: ;
    eax = MEM32(0x7FA48C);
    ecx = MEM32(0x7FA480);
    edx = MEM32(0x7FA484);
    MEM32(0x7FA4E4) = edi;
    POP32(esp, edi);
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA488) = esi;
    MEM32(0x7FA48C) = esi;
    MEM32(0x7FA480) = esi;
    MEM32(0x7FA484) = esi;
    POP32(esp, esi);
    MEM32(0x7FA4D0) = ebp;
    POP32(esp, ebp);
    MEM32(0x7FA4E0) = ebx;
    MEM32(0x7FA4D4) = eax;
    MEM32(0x7FA4C8) = ecx;
    MEM32(0x7FA4CC) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002AF3F0
 * Original: 0x002AF3F0 - 0x002AF40A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF3F0(void)
{

loc_002AF3F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002AF406: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002AF410
 * Original: 0x002AF410 - 0x002AF424 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF410(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AF410: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_002AF423; /* je: equal / zero */

loc_002AF418: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AF422: ;
    POP32(esp, ecx);

loc_002AF423: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AF430
 * Original: 0x002AF430 - 0x002AF59A (362 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AF430: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx++;
    ecx++;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    if (TEST_NZ(ebx, ebx)) goto loc_002AF45A; /* jne: not equal / not zero */

loc_002AF455: ;
    ebx = 1;

loc_002AF45A: ;
    esi = MEM32(esp + 0x14);
    eax = esi;
    eax = eax & 0xFF0000;
    SET_LO8(ecx, 0); /* xor self */
    (void)0; /* cmp eax, 0x840000 - flags set for next jcc */
    edi = 4;
    if (CMP_NE(eax, 0x840000)) goto loc_002AF475; /* jne: not equal / not zero */

loc_002AF473: ;
    SET_LO8(ecx, 1);

loc_002AF475: ;
    if (((int32_t)(esi & esi) >= 0)) { sub_002AF59A(); return; } /* jns: not sign (positive) */

loc_002AF47D: ;
    esi = esi >> 0x18;
    esi = esi & 0xF;
    if (CMP_A(esi, 0xF)) goto loc_002AF494; /* ja: above (unsigned >) */

loc_002AF488: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(esi * 4 + 0x2AF618)); return; /* indirect tail jmp */

    edi = 4;

loc_002AF494: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(0x84A188);
    esi = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002AF573; /* je: equal / zero */

loc_002AF4A3: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_002AF585; /* je: equal / zero */

loc_002AF4B1: ;
    PUSH32(esp, 5);
    goto loc_002AF57F;

    edi = 8;
    goto loc_002AF494;

    edi = 0x10;
    goto loc_002AF494;

    edi = 0x20;
    goto loc_002AF494;

    edi = 0x40;
    goto loc_002AF494;

    edi = 0x80;
    goto loc_002AF494;

    edi = 0x100;
    goto loc_002AF494;

    edi = 0x200;
    goto loc_002AF494;

    edi = 0x400;
    goto loc_002AF494;

    edi = 0x800;
    goto loc_002AF494;

    edi = 0x1000;
    goto loc_002AF494;

    edi = 0x2000;
    goto loc_002AF494;

    edi = 0x4000;
    goto loc_002AF494;

    edi = 0x8000;
    goto loc_002AF494;

    PUSH32(esp, 0x404);
    PUSH32(esp, 0);
    PUSH32(esp, 0x800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042DD31(); /* call 0x0042DD31 */

loc_002AF527: ;
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    goto loc_002AF530;

    /* nop */

loc_002AF530: ;
    esi = MEM32(ecx * 4 + 0x7FA390);
    if (TEST_Z(esi, esi)) goto loc_002AF543; /* je: equal / zero */

loc_002AF53B: ;
    ecx++;
    if (CMP_L(ecx, 0x3C)) goto loc_002AF530; /* jl: less (signed <) */

loc_002AF541: ;
    goto loc_002AF54D;

loc_002AF543: ;
    MEM32(ecx * 4 + 0x7FA390) = eax;
    edx = ecx + 1;

loc_002AF54D: ;
    (void)0; /* cmp edx, 0x3C - flags set for next jcc */
    ecx = edx;
    if (CMP_GE(edx, 0x3C)) goto loc_002AF566; /* jge: greater or equal (signed >=) */

loc_002AF554: ;
    esi = MEM32(ecx * 4 + 0x7FA390);
    (void)0; /* test esi, esi - flags set for next jcc */
    if (TEST_NZ(esi, esi)) edx = ecx; /* cmovne */
    ecx++;
    if (CMP_L(ecx, 0x3C)) goto loc_002AF554; /* jl: less (signed <) */

loc_002AF566: ;
    POP32(esp, edi);
    edx++;
    POP32(esp, esi);
    MEM32(0x84A198) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002AF573: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_002AF585; /* je: equal / zero */

loc_002AF57D: ;
    PUSH32(esp, 4);

loc_002AF57F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_002AF582: ;
    esp = esp + 8;

loc_002AF585: ;
    ecx = edi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AF58C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AF593: ;
    esp = esp + 8;
    edx = eax;
    g_seh_ebp = ebp; sub_002AF5F7(); return; /* tail jmp 0x002AF5F7 */

}

/**
 * sub_002AF670
 * Original: 0x002AF670 - 0x002AF6E6 (118 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF670(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AF670: ;
    edx = MEM32(0x7FA490);
    ecx = MEM32(0x7FA4B4);
    edx++;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    ecx--;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(0x7FA490) = edx;
    MEM32(0x7FA4B4) = ecx;
    if (TEST_Z(edi, edi)) goto loc_002AF6E2; /* je: equal / zero */

loc_002AF693: ;
    if (CMP_NE(edi, MEM32(0x84A12C))) goto loc_002AF6AF; /* jne: not equal / not zero */

loc_002AF69B: ;
    PUSH32(esp, edi);
    MEM32(0x84A12C) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042DD6E(); /* call 0x0042DD6E */

loc_002AF6AB: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_002AF6AF: ;
    eax = MEM32(0x84A198);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_002AF6CE; /* jle: less or equal (signed <=) */

loc_002AF6BB: ;
    goto loc_002AF6C0;

    /* nop */

loc_002AF6C0: ;
    if (CMP_EQ(MEM32(esi * 4 + 0x7FA390), edi)) { sub_002AF6E6(); return; } /* je: equal / zero */

loc_002AF6C9: ;
    esi++;
    if (CMP_L(esi, eax)) goto loc_002AF6C0; /* jl: less (signed <) */

loc_002AF6CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002AF6D4: ;
    if (TEST_NZ(eax, eax)) goto loc_002AF6E1; /* jne: not equal / not zero */

loc_002AF6D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002AF6DE: ;
    esp = esp + 4;

loc_002AF6E1: ;
    POP32(esp, esi);

loc_002AF6E2: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002AF700
 * Original: 0x002AF700 - 0x002AF71D (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF700(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002AF700: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm1 < MEMF(0x648E6C))) { sub_002AF71D(); return; } /* jb: below (unsigned <) */

loc_002AF710: ;
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */
    xmm0 = xmm0 - xmm2; /* subss */
    esp += 4; return; /* ret */

}

/**
 * sub_002AF740
 * Original: 0x002AF740 - 0x002AF755 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF740(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AF740: ;
    ecx = edx;
    ecx = ecx - eax;
    if (CMP_LE(ecx, 0xB4)) { sub_002AF755(); return; } /* jle: less or equal (signed <=) */

loc_002AF74C: ;
    edx = edx - 0x168;
    eax = eax - edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002AF770
 * Original: 0x002AF770 - 0x002AF7B7 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_002AF770: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(eax) - sets EFLAGS */
    xmm0 = MEMF(0x648F60); /* movss */
    if ((xmm1 <= MEMF(eax))) goto loc_002AF797; /* jbe: below or equal (unsigned <=) */

loc_002AF780: ;
    xmm3 = MEMF(eax); /* movss */

loc_002AF784: ;
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm3 = xmm2; /* movaps */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 > xmm3)) goto loc_002AF784; /* ja: above (unsigned >) */

loc_002AF793: ;
    MEMF(eax) = xmm3; /* movss */

loc_002AF797: ;
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_002AF7B6; /* jb: below (unsigned <) */

loc_002AF7A0: ;
    xmm2 = xmm1; /* movaps */

loc_002AF7A3: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = xmm1; /* movaps */
    if ((xmm1 >= xmm0)) goto loc_002AF7A3; /* jae: above or equal (unsigned >=) */

loc_002AF7B2: ;
    MEMF(eax) = xmm2; /* movss */

loc_002AF7B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AF7C0
 * Original: 0x002AF7C0 - 0x002AF7E2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF7C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002AF7C0: ;
    xmm0 = MEMF(0x648F68); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 > MEMF(eax))) goto loc_002AF7DA; /* ja: above (unsigned >) */

loc_002AF7CD: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(0x648F6C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648F6C))) { sub_002AF7E2(); return; } /* jbe: below or equal (unsigned <=) */

loc_002AF7DA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002AF850
 * Original: 0x002AF850 - 0x002AF893 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF850(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002AF850: ;
    if (CMP_BE(LO8(eax), 0x40)) { sub_002AF893(); return; } /* jbe: below or equal (unsigned <=) */

loc_002AF854: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_002AF87E; /* jbe: below or equal (unsigned <=) */

loc_002AF858: ;
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_002AF86E; /* jbe: below or equal (unsigned <=) */

loc_002AF85C: ;
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    ecx = 0x743490;
    ecx = ecx - eax;
    xmm0 = MEMF(ecx); /* movss */
    esp += 4; return; /* ret */

loc_002AF86E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = ZX8(LO8(eax));
    xmm0 = xmm0 - MEMF(edx * 4 + 0x742E90); /* subss */
    esp += 4; return; /* ret */

loc_002AF87E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    ecx = 0x743290;
    ecx = ecx - eax;
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    esp += 4; return; /* ret */

}

/**
 * sub_002AF8A0
 * Original: 0x002AF8A0 - 0x002AF8E5 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF8A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002AF8A0: ;
    SET_LO8(eax, LO8(eax) - 0x40);
    if (CMP_BE(LO8(eax), 0x40)) { sub_002AF8E5(); return; } /* jbe: below or equal (unsigned <=) */

loc_002AF8A6: ;
    if (CMP_BE(LO8(eax), 0x80)) goto loc_002AF8D0; /* jbe: below or equal (unsigned <=) */

loc_002AF8AA: ;
    if (CMP_BE(LO8(eax), 0xC0)) goto loc_002AF8C0; /* jbe: below or equal (unsigned <=) */

loc_002AF8AE: ;
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    ecx = 0x743490;
    ecx = ecx - eax;
    xmm0 = MEMF(ecx); /* movss */
    esp += 4; return; /* ret */

loc_002AF8C0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = ZX8(LO8(eax));
    xmm0 = xmm0 - MEMF(edx * 4 + 0x742E90); /* subss */
    esp += 4; return; /* ret */

loc_002AF8D0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    ecx = 0x743290;
    ecx = ecx - eax;
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    esp += 4; return; /* ret */

}

/**
 * sub_002AF900
 * Original: 0x002AF900 - 0x002AF9A7 (167 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF900(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_002AF900: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm4 = MEMF(esp + 0xC); /* movss */
    xmm3 = MEMF(esp + 4); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x14); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm4 = xmm4 - MEMF(esp + 0x24); /* subss */
    xmm7 = xmm7 - MEMF(esp + 0x18); /* subss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm3 = xmm3 - MEMF(esp + 0x1C); /* subss */
    xmm5 = xmm5 - MEMF(esp + 0x10); /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(0x7FAA60) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    MEMF(0x7FAA64) = xmm2; /* movss */
    xmm2 = xmm2 * MEMF(esp + 8); /* mulss */
    MEMF(0x7FAA68) = xmm1; /* movss */
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(0x7FAA5C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002AF9B0
 * Original: 0x002AF9B0 - 0x002AFB50 (416 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AF9B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_002AF9B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1A4;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002AFB49; /* je: equal / zero */

loc_002AF9CA: ;
    if (TEST_Z(ebx, ebx)) goto loc_002AFB49; /* je: equal / zero */

loc_002AF9D2: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_002AFA03: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D14); /* movss */
    esp = esp + 0x20;
    PUSH32(esp, 0);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x34;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    PUSH32(esp, 0);
    MEMF(esp + 0x78) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm1 = xmm1 - MEMF(esp + 0x20); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x110;
    PUSH32(esp, edx);
    MEMF(esp + 0x8C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002AFA86: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x3C); /* subss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    esp = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x14C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002AFAC1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    esp = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002AFAFC: ;
    esp = esp + 0x24;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0xB8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002AFB16: ;
    edx = esp + 0x130;
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = esp + 0x178;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002AFB33: ;
    edx = esp + 0xF0;
    PUSH32(esp, edx);
    eax = esp + 0x174;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002AFB49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002AFB50
 * Original: 0x002AFB50 - 0x002AFC3F (239 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AFB50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_002AFB50: ;
    xmm0 = MEMF(eax + 8); /* movss */
    xmm3 = MEMF(eax + 0x18); /* movss */
    xmm4 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esp + 4); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x38); /* addss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_002AFC3C; /* ja: above (unsigned >) */

loc_002AFB97: ;
    /* comiss xmm5, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm5 > MEMF(esp + 0x14))) goto loc_002AFC3C; /* ja: above (unsigned >) */

loc_002AFBA2: ;
    xmm0 = MEMF(eax + 0x10); /* movss */
    xmm6 = MEMF(eax + 0x20); /* movss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = MEMF(eax); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x30); /* addss */
    xmm6 = MEMF(esp + 0x18); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - MEMF(esp + 8); /* subss */
    /* comiss xmm7, xmm6 - sets EFLAGS */
    if ((xmm7 > xmm6)) goto loc_002AFC3C; /* ja: above (unsigned >) */

loc_002AFBDD: ;
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm6; /* subss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 > xmm0)) goto loc_002AFC3C; /* ja: above (unsigned >) */

loc_002AFBEF: ;
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x24); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x34); /* addss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 > xmm2)) goto loc_002AFC3C; /* ja: above (unsigned >) */

loc_002AFC2F: ;
    xmm0 = xmm0 + xmm1; /* addss */
    xmm4 = xmm4 - xmm2; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) { sub_002AFC3F(); return; } /* jbe: below or equal (unsigned <=) */

loc_002AFC3C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002AFC50
 * Original: 0x002AFC50 - 0x002AFC86 (54 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AFC50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AFC50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_002AFC61: ;
    xmm3 = xmm0; /* movaps */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    /* ucomiss xmm3, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002AFC86(); return; } /* jp: parity */

loc_002AFC73: ;
    eax = MEM32(esi);
    MEM32(ebx) = eax;
    ecx = MEM32(esi + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(esi + 8);
    POP32(esp, ebp);
    MEM32(ebx + 8) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AFD00
 * Original: 0x002AFD00 - 0x002AFD90 (144 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AFD00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002AFD00: ;
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(eax); /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x28); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp - 0x14;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(0x648E54) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E54))) { sub_002AFD90(); return; } /* jbe: below or equal (unsigned <=) */

loc_002AFD26: ;
    MEMF(esp) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(edi) = xmm2; /* movss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x24); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x20); /* movss */
    xmm1 = xmm1 - MEMF(eax + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x10); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 0xC) = xmm1; /* movss */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002AFE80
 * Original: 0x002AFE80 - 0x002AFF43 (195 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AFE80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_002AFE80: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 * MEMF(esi + 8); /* mulss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * MEMF(esi + 4); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(edi + 0xC); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esi); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x6494C8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_002AFF43(); return; } /* jbe: below or equal (unsigned <=) */

loc_002AFECB: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm2 = MEMF(edi); /* movss */
    xmm3 = MEMF(esi); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(ebx) = xmm2; /* movss */
    xmm2 = MEMF(edi + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esi + 4); /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(ebx + 4) = xmm2; /* movss */
    xmm2 = MEMF(edi + 8); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esi + 8); /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(ebx + 8) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0xC); /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(ebx + 0xC) = xmm0; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B0040
 * Original: 0x002B0040 - 0x002B019D (349 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0040(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_002B0040: ;
    esp = esp - 0xC;
    xmm3 = MEMF(eax); /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm5 = MEMF(eax); /* movss */
    xmm7 = MEMF(eax); /* movss */
    xmm6 = MEMF(eax); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm0 = xmm0 / xmm4; /* divss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(eax + 0xC); /* mulss */
    xmm1 = xmm1 * MEMF(eax + 8); /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(eax + 8); /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm3; /* movss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(eax + 0xC); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm1 = xmm1 * MEMF(eax + 8); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(ecx + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    MEMF(ecx + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm4 = xmm4 - xmm5; /* subss */
    MEMF(ecx + 0x14) = xmm7; /* movss */
    MEMF(ecx + 0x20) = xmm3; /* movss */
    MEMF(ecx + 0x24) = xmm4; /* movss */
    MEMF(ecx + 0x28) = xmm2; /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    MEMF(ecx + 0x2C) = xmm0; /* movss */
    MEMF(ecx + 0x3C) = xmm1; /* movss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002B01A0
 * Original: 0x002B01A0 - 0x002B021B (123 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B01A0(void)
{
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002B01A0: ;
    esp = esp - 0x14;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002B01A8: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002B01BA: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    PUSH32(esp, 0); sub_003E3920(); /* call 0x003E3920 */

loc_002B01CF: ;
    MEMF(esp + 4) = xmm0; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 4) = xmm1; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B0220
 * Original: 0x002B0220 - 0x002B02C8 (168 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    MEM32(ebp) = 0x606A58;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ebp + 4;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + 0x14) = eax;
    ecx = MEM32(ebx + edi * 8 + -8);
    MEM32(ebp + 0x18) = ecx;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_00278F30(); /* call 0x00278F30 */

loc_002B0256: ;
    if (CMP_BE(edi & edi, 0)) goto loc_002B02BF; /* jbe: below or equal (unsigned <=) */

loc_002B025A: ;
    MEM32(esp + 0x14) = edi;
    edi = edi;

loc_002B0260: ;
    edx = MEM32(esi + 4);
    if (TEST_NZ(edx, edx)) goto loc_002B026B; /* jne: not equal / not zero */

loc_002B0267: ;
    ecx = 0; /* xor self */
    goto loc_002B0273;

loc_002B026B: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 3);

loc_002B0273: ;
    if (TEST_Z(edx, edx)) goto loc_002B02A0; /* je: equal / zero */

loc_002B0277: ;
    eax = MEM32(esi + 0xC);
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_AE(ecx, eax)) goto loc_002B02A0; /* jae: above or equal (unsigned >=) */

loc_002B0283: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    edx = ebx;
    PUSH32(esp, 0); sub_001DEB30(); /* call 0x001DEB30 */

loc_002B0295: ;
    esp = esp + 0xC;
    edi = edi + 8;
    MEM32(esi + 8) = edi;
    goto loc_002B02B1;

loc_002B02A0: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = 1;
    edx = esi;
    PUSH32(esp, 0); sub_002B04D0(); /* call 0x002B04D0 */

loc_002B02B1: ;
    eax = MEM32(esp + 0x14);
    ebx = ebx + 8;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_002B0260; /* jne: not equal / not zero */

loc_002B02BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B02D0
 * Original: 0x002B02D0 - 0x002B02DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B02D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B02D0: ;
    eax = MEM32(edx + 8);
    if (TEST_NZ(eax, eax)) { sub_002B02DB(); return; } /* jne: not equal / not zero */

loc_002B02D7: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_002B02E3(); return; /* tail jmp 0x002B02E3 */

}

/**
 * sub_002B0320
 * Original: 0x002B0320 - 0x002B0376 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0320(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B0320: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x606A58;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_002B0342; /* je: equal / zero */

loc_002B0331: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002B033F: ;
    esp = esp + 4;

loc_002B0342: ;
    (void)0; /* test MEM8(esp + 0xC), 1 - flags set for next jcc */
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0;
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_002B036F; /* je: equal / zero */

loc_002B035E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002B036C: ;
    esp = esp + 4;

loc_002B036F: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B0380
 * Original: 0x002B0380 - 0x002B03A1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0380: ;
    esp = esp - 0x30;
    xmm0 = MEMF(esp + 0x34); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm1 = MEMF(esi + 0x14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_002B03A1(); return; } /* jbe: below or equal (unsigned <=) */

loc_002B039C: ;
    xmm0 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_002B03AC(); return; /* tail jmp 0x002B03AC */

}

/**
 * sub_002B04D0
 * Original: 0x002B04D0 - 0x002B050E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B04D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002B04D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FBA0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0xC);
    edi = ecx;
    esi = edx;
    ecx = MEM32(eax);
    MEM32(ebp + -84) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -80) = edx;
    ecx = MEM32(esi + 4);
    if (TEST_NZ(ecx, ecx)) { sub_002B050E(); return; } /* jne: not equal / not zero */

loc_002B050A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002B0516(); return; /* tail jmp 0x002B0516 */

}

/**
 * sub_002B0720
 * Original: 0x002B0720 - 0x002B073B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0720(void)
{

loc_002B0720: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00279B80(); /* call 0x00279B80 */

loc_002B0735: ;
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B0740
 * Original: 0x002B0740 - 0x002B075C (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0740(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B0740: ;
    if (CMP_EQ(edx, ecx)) goto loc_002B075B; /* je: equal / zero */

loc_002B0744: ;
    PUSH32(esp, esi);

loc_002B0745: ;
    esi = MEM32(ecx + -8);
    ecx = ecx - 8;
    eax = eax - 8;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    if (CMP_NE(ecx, edx)) goto loc_002B0745; /* jne: not equal / not zero */

loc_002B075A: ;
    POP32(esp, esi);

loc_002B075B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B0760
 * Original: 0x002B0760 - 0x002B077B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0760(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002B0760: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002B077B(); return; } /* jp: parity */

loc_002B076C: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(edx) = xmm0; /* movss */
    MEMF(ecx) = xmm1; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002B0840
 * Original: 0x002B0840 - 0x002B08C1 (129 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0840(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;

loc_002B0840: ;
    xmm6 = 0.0f; /* xorps self = zero */
    /* comiss xmm6, MEMF(ecx) - sets EFLAGS */
    xmm5 = MEMF(0x648F60); /* movss */
    if ((xmm6 <= MEMF(ecx))) goto loc_002B0867; /* jbe: below or equal (unsigned <=) */

loc_002B0850: ;
    xmm1 = MEMF(ecx); /* movss */

loc_002B0854: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm1 = xmm0; /* movaps */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 > xmm1)) goto loc_002B0854; /* ja: above (unsigned >) */

loc_002B0863: ;
    MEMF(ecx) = xmm1; /* movss */

loc_002B0867: ;
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 < xmm5)) goto loc_002B0886; /* jb: below (unsigned <) */

loc_002B0870: ;
    xmm1 = xmm0; /* movaps */

loc_002B0873: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    if ((xmm0 >= xmm5)) goto loc_002B0873; /* jae: above or equal (unsigned >=) */

loc_002B0882: ;
    MEMF(ecx) = xmm1; /* movss */

loc_002B0886: ;
    xmm1 = MEMF(esp + 4); /* movss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_002B089A; /* jbe: below or equal (unsigned <=) */

loc_002B0891: ;
    xmm1 = xmm1 + xmm5; /* addss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 > xmm1)) goto loc_002B0891; /* ja: above (unsigned >) */

loc_002B089A: ;
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 < xmm5)) goto loc_002B08A9; /* jb: below (unsigned <) */

loc_002B089F: ;
    /* nop */

loc_002B08A0: ;
    xmm1 = xmm1 - xmm5; /* subss */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 >= xmm5)) goto loc_002B08A0; /* jae: above or equal (unsigned >=) */

loc_002B08A9: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002B08C1(); return; } /* jp: parity */

loc_002B08B8: ;
    MEMF(ecx) = xmm1; /* movss */
    MEMF(edx) = xmm6; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002B0A40
 * Original: 0x002B0A40 - 0x002B0A67 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0A40(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B0A40: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x606A68;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_002B0A61; /* je: equal / zero */

loc_002B0A50: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002B0A5E: ;
    esp = esp + 4;

loc_002B0A61: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B0A70
 * Original: 0x002B0A70 - 0x002B0AF7 (135 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0A70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002B0A70: ;
    xmm1 = MEMF(0x648E84); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    edx = ecx;
    xmm0 = MEMF(edx + 0x20); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002B0AA6; /* jnp: not parity */

loc_002B0A8F: ;
    xmm0 = MEMF(edx + 0x20); /* movss */
    /* comiss xmm0, MEMF(edx + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 8))) goto loc_002B0A9C; /* jbe: below or equal (unsigned <=) */

loc_002B0A9A: ;
    goto loc_002B0AA1;

loc_002B0A9C: ;
    xmm0 = MEMF(edx + 8); /* movss */

loc_002B0AA1: ;
    MEMF(edx + 8) = xmm0; /* movss */

loc_002B0AA6: ;
    xmm0 = MEMF(edx + 0x24); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002B0AD4; /* jnp: not parity */

loc_002B0AB8: ;
    xmm0 = MEMF(edx + 8); /* movss */
    /* comiss xmm0, MEMF(edx + 0x24) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 0x24))) goto loc_002B0ACA; /* jbe: below or equal (unsigned <=) */

loc_002B0AC3: ;
    xmm0 = MEMF(edx + 0x24); /* movss */
    goto loc_002B0ACF;

loc_002B0ACA: ;
    xmm0 = MEMF(edx + 8); /* movss */

loc_002B0ACF: ;
    MEMF(edx + 8) = xmm0; /* movss */

loc_002B0AD4: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0x10);
    xmm0 = MEMF(esp + 4); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = edx + 0xC;
    PUSH32(esp, eax);
    edx = edx + 4;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_002B0AF1: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B0B00
 * Original: 0x002B0B00 - 0x002B0B84 (132 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0B00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002B0B00: ;
    xmm0 = MEMF(ecx + 0x20); /* movss */
    xmm1 = MEMF(0x648E84); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002B0B34; /* jnp: not parity */

loc_002B0B1D: ;
    xmm0 = MEMF(ecx + 0x20); /* movss */
    /* comiss xmm0, MEMF(ecx + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 8))) goto loc_002B0B2A; /* jbe: below or equal (unsigned <=) */

loc_002B0B28: ;
    goto loc_002B0B2F;

loc_002B0B2A: ;
    xmm0 = MEMF(ecx + 8); /* movss */

loc_002B0B2F: ;
    MEMF(ecx + 8) = xmm0; /* movss */

loc_002B0B34: ;
    xmm0 = MEMF(ecx + 0x24); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002B0B62; /* jnp: not parity */

loc_002B0B46: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x24) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x24))) goto loc_002B0B58; /* jbe: below or equal (unsigned <=) */

loc_002B0B51: ;
    xmm0 = MEMF(ecx + 0x24); /* movss */
    goto loc_002B0B5D;

loc_002B0B58: ;
    xmm0 = MEMF(ecx + 8); /* movss */

loc_002B0B5D: ;
    MEMF(ecx + 8) = xmm0; /* movss */

loc_002B0B62: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    edx = ecx + 0xC;
    PUSH32(esp, eax);
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_002B0B7E: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B0B90
 * Original: 0x002B0B90 - 0x002B0BE5 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0B90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002B0B90: ;
    eax = MEM32(esp + 4);
    if (CMP_EQ(ecx, eax)) goto loc_002B0BE2; /* je: equal / zero */

loc_002B0B98: ;
    edx = MEM32(eax + 4);
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm1 = MEMF(ecx + 0xC); /* movss */
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = edx;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = eax;
    MEMF(ecx + 0xC) = xmm1; /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */

loc_002B0BE2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B0BF0
 * Original: 0x002B0BF0 - 0x002B0C0D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0BF0: ;
    eax = MEM32(esp + 4);
    if (CMP_EQ(ecx, eax)) { sub_002B0C0D(); return; } /* je: equal / zero */

loc_002B0BF8: ;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002B0B90(); return; /* tail jmp 0x002B0B90 */

}

/**
 * sub_002B0C10
 * Original: 0x002B0C10 - 0x002B0C5C (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0C10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002B0C10: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_NZ(esi, esi)) goto loc_002B0C1E; /* jne: not equal / not zero */

loc_002B0C19: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0C1E: ;
    if (TEST_NZ(ebx, ebx)) goto loc_002B0C27; /* jne: not equal / not zero */

loc_002B0C22: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0C27: ;
    if (TEST_NZ(edi, edi)) goto loc_002B0C30; /* jne: not equal / not zero */

loc_002B0C2B: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0C30: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 4); /* subss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 8); /* subss */
    MEMF(edi + 8) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B0C60
 * Original: 0x002B0C60 - 0x002B0CA6 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0C60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002B0C60: ;
    if (TEST_NZ(esi, esi)) goto loc_002B0C69; /* jne: not equal / not zero */

loc_002B0C64: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0C69: ;
    if (TEST_NZ(ebx, ebx)) goto loc_002B0C72; /* jne: not equal / not zero */

loc_002B0C6D: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0C72: ;
    if (TEST_NZ(edi, edi)) goto loc_002B0C7B; /* jne: not equal / not zero */

loc_002B0C76: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0C7B: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(esi + 4); /* subss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(esi + 8); /* subss */
    MEMF(edi + 8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002B0CB0
 * Original: 0x002B0CB0 - 0x002B0CE1 (49 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0CB0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002B0CB0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002B0CE1(); return; } /* jp: parity */

loc_002B0CDC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B0D50
 * Original: 0x002B0D50 - 0x002B0D80 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0D50(void)
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

loc_002B0D50: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002B0D80(); return; } /* jp: parity */

loc_002B0D7C: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B0E00
 * Original: 0x002B0E00 - 0x002B0E41 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0E00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002B0E00: ;
    if (TEST_NZ(edi, edi)) goto loc_002B0E09; /* jne: not equal / not zero */

loc_002B0E04: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0E09: ;
    if (TEST_NZ(esi, esi)) goto loc_002B0E12; /* jne: not equal / not zero */

loc_002B0E0D: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0E12: ;
    xmm1 = MEMF(edi); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm1 = MEMF(edi + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 8) = xmm1; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002B0E50
 * Original: 0x002B0E50 - 0x002B0EE2 (146 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0E50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002B0E50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(edi, edi)) goto loc_002B0E5F; /* jne: not equal / not zero */

loc_002B0E5A: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0E5F: ;
    if (TEST_NZ(esi, esi)) goto loc_002B0E68; /* jne: not equal / not zero */

loc_002B0E63: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_002B0E68: ;
    edx = MEM32(esp + 0xC);
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
    xmm1 = MEMF(esp + 4); /* movss */
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm1; /* movaps */
    if (1 /* jnp after test - parity */) goto loc_002B0EB7; /* jnp: not parity */

loc_002B0EAB: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_002B0EB7: ;
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm1 = MEMF(edi + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 8) = xmm1; /* movss */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B0EF0
 * Original: 0x002B0EF0 - 0x002B0FA2 (178 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0EF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_002B0EF0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 0x17);
    eax = eax & 0xFF;
    if (CMP_GE(eax, 0x7E)) { sub_002B0FA2(); return; } /* jge: greater or equal (signed >=) */

loc_002B0F08: ;
    if (CMP_L(eax, 0x63)) goto loc_002B0F9A; /* jl: less (signed <) */

loc_002B0F11: ;
    xmm2 = MEMF(esp + 8); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x6494C0); /* mulss */
    xmm0 = xmm0 - MEMF(0x6494BC); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x6494B8); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x6494B4); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - MEMF(0x6494B0); /* subss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + MEMF(0x6494AC); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x6494A8); /* addss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 - MEMF(0x6494A4); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + MEMF(0x6494A0); /* addss */
    xmm0 = xmm0 / xmm3; /* divss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002B0F9A: ;
    xmm0 = MEMF(esp + 8); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1180
 * Original: 0x002B1180 - 0x002B1205 (133 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1180(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B1180: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002B1204; /* je: equal / zero */

loc_002B118A: ;
    eax = MEM32(eax + 0x3F4);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_002B11E5; /* je: equal / zero */

loc_002B1196: ;
    edx = MEM32(eax + 8);
    edx = edx - ecx;
    if ((edx == 0)) goto loc_002B11C7; /* je: equal / zero */

loc_002B119D: ;
    edx--;
    if ((edx != 0)) goto loc_002B11E5; /* jne: not equal / not zero */

loc_002B11A0: ;
    ecx = MEM32(eax + 0x18);
    ecx = ecx - 0;
    edx = 1;
    if ((ecx == 0)) goto loc_002B11B9; /* je: equal / zero */

loc_002B11AD: ;
    ecx--;
    if ((ecx != 0)) goto loc_002B11BE; /* jne: not equal / not zero */

loc_002B11B0: ;
    eax = MEM32(eax + 0x14);
    ecx = edx + eax + -1;
    goto loc_002B11E5;

loc_002B11B9: ;
    edx = 0xD;

loc_002B11BE: ;
    eax = MEM32(eax + 0x14);
    ecx = edx + eax + -1;
    goto loc_002B11E5;

loc_002B11C7: ;
    ecx = MEM32(eax + 0x18);
    ecx = ecx - 0;
    edx = 7;
    if ((ecx == 0)) goto loc_002B11D9; /* je: equal / zero */

loc_002B11D4: ;
    ecx--;
    if ((ecx != 0)) goto loc_002B11DE; /* jne: not equal / not zero */

loc_002B11D7: ;
    goto loc_002B11DE;

loc_002B11D9: ;
    edx = 0x13;

loc_002B11DE: ;
    ecx = MEM32(eax + 0x14);
    ecx = edx + ecx + -1;

loc_002B11E5: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(ecx * 4 + 0x6C86A8);
    MEM32(edx + 0x448) = eax;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x44C) = ecx;

loc_002B1204: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1210
 * Original: 0x002B1210 - 0x002B1227 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1210(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B1210: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x444);
    if (TEST_Z(eax, eax)) goto loc_002B1224; /* je: equal / zero */

loc_002B1220: ;
    if (TEST_NZ(edx, edx)) { sub_002B1227(); return; } /* jne: not equal / not zero */

loc_002B1224: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002B12B0
 * Original: 0x002B12B0 - 0x002B12C7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B12B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B12B0: ;
    eax = MEM32(eax + 0x568);
    edx = MEM32(eax + 0x444);
    if (TEST_Z(edx, edx)) goto loc_002B12C4; /* je: equal / zero */

loc_002B12C0: ;
    if (TEST_NZ(ecx, ecx)) { sub_002B12C7(); return; } /* jne: not equal / not zero */

loc_002B12C4: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1300
 * Original: 0x002B1300 - 0x002B138E (142 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1300: ;
    esp = esp - 8;
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_002B1321: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B136C; /* je: equal / zero */

loc_002B1328: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B1334; /* jne: not equal / not zero */

loc_002B1330: ;
    edx = 0; /* xor self */
    goto loc_002B1338;

loc_002B1334: ;
    edx = MEM32(esp + 4);

loc_002B1338: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_002B1349; /* je: equal / zero */

loc_002B1340: ;
    ecx = MEM32(eax + esi);
    eax = eax + esi;
    if (TEST_NZ(ecx, ecx)) goto loc_002B1357; /* jne: not equal / not zero */

loc_002B1349: ;
    if (TEST_Z(edx, edx)) goto loc_002B136C; /* je: equal / zero */

loc_002B134D: ;
    ecx = MEM32(edx + esi);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edx + esi;
    if (TEST_Z(ecx, ecx)) goto loc_002B136C; /* je: equal / zero */

loc_002B1357: ;
    if (TEST_Z(edi, edi)) goto loc_002B135D; /* je: equal / zero */

loc_002B135B: ;
    MEM32(edi) = ecx;

loc_002B135D: ;
    if (TEST_Z(ebp, ebp)) goto loc_002B1389; /* je: equal / zero */

loc_002B1361: ;
    edx = MEM32(eax + 4);
    MEM32(ebp) = edx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_002B136C: ;
    if (TEST_Z(edi, edi)) goto loc_002B1376; /* je: equal / zero */

loc_002B1370: ;
    MEM32(edi) = 0xFFFFFFFFu;

loc_002B1376: ;
    if (TEST_Z(ebp, ebp)) goto loc_002B1387; /* je: equal / zero */

loc_002B137A: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebp) = xmm0; /* movss */

loc_002B1387: ;
    eax = 0; /* xor self */

loc_002B1389: ;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1390
 * Original: 0x002B1390 - 0x002B13EF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1390(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002B1390: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_002B12B0(); /* call 0x002B12B0 */

loc_002B13A6: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B13D1; /* je: equal / zero */

loc_002B13AD: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_002B13D1; /* je: equal / zero */

loc_002B13B4: ;
    ecx = MEM32(esp + 0xC);
    eax = eax + ecx;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_002B13D1; /* je: equal / zero */

loc_002B13C0: ;
    if (TEST_Z(esi, esi)) goto loc_002B13C6; /* je: equal / zero */

loc_002B13C4: ;
    MEM32(esi) = ecx;

loc_002B13C6: ;
    if (TEST_Z(edi, edi)) goto loc_002B13ED; /* je: equal / zero */

loc_002B13CA: ;
    edx = MEM32(eax + 4);
    MEM32(edi) = edx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002B13D1: ;
    if (TEST_Z(esi, esi)) goto loc_002B13DB; /* je: equal / zero */

loc_002B13D5: ;
    MEM32(esi) = 0xFFFFFFFFu;

loc_002B13DB: ;
    if (TEST_Z(edi, edi)) goto loc_002B13EB; /* je: equal / zero */

loc_002B13DF: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(edi) = xmm0; /* movss */

loc_002B13EB: ;
    eax = 0; /* xor self */

loc_002B13ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B13F0
 * Original: 0x002B13F0 - 0x002B14A0 (176 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B13F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B13F0: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    if (TEST_Z(eax, eax)) goto loc_002B141A; /* je: equal / zero */

loc_002B1413: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm0; /* movss */

loc_002B141A: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_002B1429: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B1498; /* je: equal / zero */

loc_002B1430: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_002B144C; /* je: equal / zero */

loc_002B1438: ;
    eax = eax + edi;
    if ((eax == 0)) goto loc_002B144C; /* je: equal / zero */

loc_002B143C: ;
    edx = MEM32(eax);
    if (TEST_Z(edx, edx)) goto loc_002B144C; /* je: equal / zero */

loc_002B1442: ;
    ecx = MEM32(edx + ebp);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edx + ebp;
    if (TEST_NZ(ecx, ecx)) goto loc_002B1467; /* jne: not equal / not zero */

loc_002B144C: ;
    edx = MEM32(esp + 0xC);
    eax = edx + edi;
    if (TEST_Z(eax, eax)) goto loc_002B1498; /* je: equal / zero */

loc_002B1457: ;
    edx = MEM32(eax);
    if (TEST_Z(edx, edx)) goto loc_002B1498; /* je: equal / zero */

loc_002B145D: ;
    ecx = MEM32(edx + ebp);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edx + ebp;
    if (TEST_Z(ecx, ecx)) goto loc_002B1498; /* je: equal / zero */

loc_002B1467: ;
    edi = MEM32(esp + 0x14);
    if (TEST_Z(edi, edi)) goto loc_002B1471; /* je: equal / zero */

loc_002B146F: ;
    MEM32(edi) = ecx;

loc_002B1471: ;
    ecx = MEM32(esp + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_002B147E; /* je: equal / zero */

loc_002B1479: ;
    edi = MEM32(eax + 4);
    MEM32(ecx) = edi;

loc_002B147E: ;
    ecx = MEM32(esp + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_002B149A; /* je: equal / zero */

loc_002B1486: ;
    if (TEST_Z(edx, edx)) goto loc_002B149A; /* je: equal / zero */

loc_002B148A: ;
    edx = MEM32(edx + 0x80);
    POP32(esp, edi);
    MEM32(ecx) = edx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_002B1498: ;
    eax = 0; /* xor self */

loc_002B149A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B14A0
 * Original: 0x002B14A0 - 0x002B159C (252 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B14A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B14A0: ;
    esp = esp - 8;
    SET_LO8(ecx, MEM8(0x7819D5));
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002B14CD; /* jne: not equal / not zero */

loc_002B14BF: ;
    ecx = MEM32(ebx + 0x568);
    if (CMP_EQ(MEM32(ecx + 0xA0), eax)) goto loc_002B1533; /* je: equal / zero */

loc_002B14CD: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_002B14E0: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B1533; /* je: equal / zero */

loc_002B14E7: ;
    edx = MEM32(esp + 8);
    if (TEST_Z(edx, edx)) goto loc_002B150D; /* je: equal / zero */

loc_002B14EF: ;
    ecx = edi + edi * 2;
    eax = edx + ecx * 8;
    ecx = MEM32(eax + esi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = eax + esi + 0x38;
    if (TEST_NZ(ecx, ecx)) goto loc_002B155B; /* jne: not equal / not zero */

loc_002B1501: ;
    ecx = MEM32(edx + esi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edx + esi + 0x38;
    if (TEST_NZ(ecx, ecx)) goto loc_002B155B; /* jne: not equal / not zero */

loc_002B150D: ;
    edx = MEM32(esp + 0xC);
    if (TEST_Z(edx, edx)) goto loc_002B1533; /* je: equal / zero */

loc_002B1515: ;
    ecx = edi + edi * 2;
    eax = edx + ecx * 8;
    ecx = MEM32(eax + esi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = eax + esi + 0x38;
    if (TEST_NZ(ecx, ecx)) goto loc_002B155B; /* jne: not equal / not zero */

loc_002B1527: ;
    ecx = MEM32(edx + esi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edx + esi + 0x38;
    if (TEST_NZ(ecx, ecx)) goto loc_002B155B; /* jne: not equal / not zero */

loc_002B1533: ;
    ecx = MEM32(ebx + 0x568);
    edx = MEM32(ecx + 0x448);
    eax = edi + edi * 2;
    ecx = edx + eax * 8;
    eax = ecx + esi + 4;
    ecx = MEM32(eax);
    if (TEST_NZ(ecx, ecx)) goto loc_002B155B; /* jne: not equal / not zero */

loc_002B154F: ;
    ecx = MEM32(edx + esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edx + esi + 4;
    if (TEST_Z(ecx, ecx)) goto loc_002B1575; /* je: equal / zero */

loc_002B155B: ;
    if (TEST_Z(ebp, ebp)) goto loc_002B1562; /* je: equal / zero */

loc_002B155F: ;
    MEM32(ebp) = ecx;

loc_002B1562: ;
    ecx = MEM32(esp + 0x1C);
    if (TEST_Z(ecx, ecx)) goto loc_002B1596; /* je: equal / zero */

loc_002B156A: ;
    edx = MEM32(eax + 4);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_002B1575: ;
    if (TEST_Z(ebp, ebp)) goto loc_002B1580; /* je: equal / zero */

loc_002B1579: ;
    MEM32(ebp) = 0xFFFFFFFFu;

loc_002B1580: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_002B1594; /* je: equal / zero */

loc_002B1588: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax) = xmm0; /* movss */

loc_002B1594: ;
    eax = 0; /* xor self */

loc_002B1596: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B15A0
 * Original: 0x002B15A0 - 0x002B15F6 (86 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B15A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B15A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    if (TEST_Z(ebp, ebp)) goto loc_002B15B3; /* je: equal / zero */

loc_002B15B0: ;
    MEM32(ebp) = eax;

loc_002B15B3: ;
    ebp = MEM32(ebx + 0x568);
    ebp = MEM32(ebp + 0x530);
    ebp = ebp - 0;
    if ((ebp == 0)) goto loc_002B15D4; /* je: equal / zero */

loc_002B15C4: ;
    ebp--;
    if ((ebp == 0)) goto loc_002B15CF; /* je: equal / zero */

loc_002B15C7: ;
    ebp--;
    if ((ebp != 0)) goto loc_002B15E7; /* jne: not equal / not zero */

loc_002B15CA: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    goto loc_002B15D7;

loc_002B15CF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    goto loc_002B15D7;

loc_002B15D4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);

loc_002B15D7: ;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    eax = esi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_002B15E4: ;
    esp = esp + 0x10;

loc_002B15E7: ;
    ecx = MEM32(esp + 0x14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_002B15F3; /* je: equal / zero */

loc_002B15F1: ;
    MEM32(ecx) = eax;

loc_002B15F3: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1600
 * Original: 0x002B1600 - 0x002B1636 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1600(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002B1600: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEM32(ebx) = 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    SET_LO8(edx, 0); /* xor self */
    MEMF(esi) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B1640(); /* call 0x002B1640 */

loc_002B1624: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002B1635; /* je: equal / zero */

loc_002B162C: ;
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    eax = MEM32(eax + 4);
    MEM32(esi) = eax;

loc_002B1635: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1640
 * Original: 0x002B1640 - 0x002B1738 (248 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1640: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    if (CMP_NE(eax, ecx)) goto loc_002B16CF; /* jne: not equal / not zero */

loc_002B1655: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002B16F7; /* je: equal / zero */

loc_002B165D: ;
    eax = esp + 0xC;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_002B1676: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B16A1; /* je: equal / zero */

loc_002B167D: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_002B168F; /* je: equal / zero */

loc_002B1685: ;
    ecx = MEM32(eax + 0xB0);
    if (TEST_NZ(ecx, ecx)) goto loc_002B16A1; /* jne: not equal / not zero */

loc_002B168F: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_002B16A1; /* je: equal / zero */

loc_002B1697: ;
    edx = MEM32(eax + 0xB0);
    MEM32(esp + 0xC) = edx;

loc_002B16A1: ;
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_00331950(); /* call 0x00331950 */

loc_002B16BB: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_002B16F3; /* je: equal / zero */

loc_002B16C7: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_002B16CF: ;
    if (CMP_BE(eax, 3)) goto loc_002B16F7; /* jbe: below or equal (unsigned <=) */

loc_002B16D4: ;
    ecx = 0; /* xor self */

loc_002B16D6: ;
    edx = MEM32(ebx + 0x568);
    edx = MEM32(edx + 0x530);
    eax = 0; /* xor self */
    edx = edx - eax;
    if ((edx == 0)) goto loc_002B171F; /* je: equal / zero */

loc_002B16E8: ;
    edx--;
    if ((edx == 0)) goto loc_002B171A; /* je: equal / zero */

loc_002B16EB: ;
    edx--;
    if ((edx != 0)) goto loc_002B1732; /* jne: not equal / not zero */

loc_002B16EE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10);
    goto loc_002B1722;

loc_002B16F3: ;
    eax = MEM32(esp + 0x18);

loc_002B16F7: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B1738); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002B16FEu) goto loc_002B16FE;
    if (_jt == 0x002B1705u) goto loc_002B1705;
    if (_jt == 0x002B170Cu) goto loc_002B170C;
    if (_jt == 0x002B1713u) goto loc_002B1713;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B16FE: ;
    ecx = 0x34;
    goto loc_002B16D6;

loc_002B1705: ;
    ecx = 0x30;
    goto loc_002B16D6;

loc_002B170C: ;
    ecx = 0x2C;
    goto loc_002B16D6;

loc_002B1713: ;
    ecx = 0x28;
    goto loc_002B16D6;

loc_002B171A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    goto loc_002B1722;

loc_002B171F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);

loc_002B1722: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_002B172F: ;
    esp = esp + 0x10;

loc_002B1732: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1750
 * Original: 0x002B1750 - 0x002B1791 (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1750: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B1778; /* je: equal / zero */

loc_002B1760: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    esi = 0xB8;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1771: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002B178C; /* jne: not equal / not zero */

loc_002B1778: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    esi = 0xB0;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1789: ;
    esp = esp + 8;

loc_002B178C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B17A0
 * Original: 0x002B17A0 - 0x002B17A7 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B17A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B17A0: ;
    if (TEST_NZ(edi, edi)) { sub_002B17A7(); return; } /* jne: not equal / not zero */

loc_002B17A4: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1810
 * Original: 0x002B1810 - 0x002B183C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1810: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1820: ;
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_002B1839; /* je: equal / zero */

loc_002B1827: ;
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 * MEMF(0x648F24); /* mulss */
    MEMF(ebp) = xmm0; /* movss */

loc_002B1839: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1840
 * Original: 0x002B1840 - 0x002B189C (92 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1840(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B1840: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_002B1888; /* je: equal / zero */

loc_002B185A: ;
    eax--;
    if ((eax == 0)) goto loc_002B1874; /* je: equal / zero */

loc_002B185D: ;
    eax--;
    if ((eax != 0)) goto loc_002B1898; /* jne: not equal / not zero */

loc_002B1860: ;
    PUSH32(esp, 0);
    esi = 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B186D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002B1874: ;
    PUSH32(esp, 0);
    esi = 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1881: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002B1888: ;
    PUSH32(esp, 0);
    esi = 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1895: ;
    esp = esp + 8;

loc_002B1898: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B18A0
 * Original: 0x002B18A0 - 0x002B18FC (92 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B18A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B18A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_002B18E8; /* je: equal / zero */

loc_002B18BA: ;
    eax--;
    if ((eax == 0)) goto loc_002B18D4; /* je: equal / zero */

loc_002B18BD: ;
    eax--;
    if ((eax != 0)) goto loc_002B18F8; /* jne: not equal / not zero */

loc_002B18C0: ;
    PUSH32(esp, 0);
    esi = 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B18CD: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002B18D4: ;
    PUSH32(esp, 0);
    esi = 0xC8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B18E1: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002B18E8: ;
    PUSH32(esp, 0);
    esi = 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B18F5: ;
    esp = esp + 8;

loc_002B18F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1900
 * Original: 0x002B1900 - 0x002B1921 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1900(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B1900: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edx, edx)) { sub_002B1921(); return; } /* je: equal / zero */

loc_002B190C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    esi = 0xD8;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B191A: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1950
 * Original: 0x002B1950 - 0x002B19C4 (116 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1950: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(ebp, ebp)) { sub_002B19C4(); return; } /* je: equal / zero */

loc_002B195F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = 0xE0;
    edi = esp + 0x18;
    edx = ebp;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1978: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    esi = 0xE8;
    edi = esp + 0x24;
    edx = ebp;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B198F: ;
    edx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    esi = 0xF0;
    edi = esp + 0x30;
    edx = ebp;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B19A6: ;
    eax = esp + 0x44;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = 0xF8;
    edi = esp + 0x3C;
    edx = ebp;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B19BD: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002B1A30(); return; /* tail jmp 0x002B1A30 */

}

/**
 * sub_002B1A60
 * Original: 0x002B1A60 - 0x002B1AD4 (116 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1A60: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(ebp, ebp)) { sub_002B1AD4(); return; } /* je: equal / zero */

loc_002B1A6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = 0x100;
    edi = esp + 0x18;
    edx = ebp;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1A88: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    esi = 0x108;
    edi = esp + 0x24;
    edx = ebp;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1A9F: ;
    edx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    esi = 0x110;
    edi = esp + 0x30;
    edx = ebp;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1AB6: ;
    eax = esp + 0x44;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = 0x118;
    edi = esp + 0x3C;
    edx = ebp;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1ACD: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002B1B40(); return; /* tail jmp 0x002B1B40 */

}

/**
 * sub_002B1B70
 * Original: 0x002B1B70 - 0x002B1BA2 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1B70: ;
    esp = esp - 8;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edx;
    if (CMP_A(eax, 3)) { sub_002B1BA2(); return; } /* ja: above (unsigned >) */

loc_002B1B7F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B1CAC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002B1B86u) goto loc_002B1B86;
    if (_jt == 0x002B1B8Du) goto loc_002B1B8D;
    if (_jt == 0x002B1B94u) goto loc_002B1B94;
    if (_jt == 0x002B1B9Bu) goto loc_002B1B9B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B1B86: ;
    esi = 0x34;
    g_seh_ebp = ebp; sub_002B1BA4(); return; /* tail jmp 0x002B1BA4 */

loc_002B1B8D: ;
    esi = 0x30;
    g_seh_ebp = ebp; sub_002B1BA4(); return; /* tail jmp 0x002B1BA4 */

loc_002B1B94: ;
    esi = 0x2C;
    g_seh_ebp = ebp; sub_002B1BA4(); return; /* tail jmp 0x002B1BA4 */

loc_002B1B9B: ;
    esi = 0x28;
    g_seh_ebp = ebp; sub_002B1BA4(); return; /* tail jmp 0x002B1BA4 */

}

/**
 * sub_002B1CC0
 * Original: 0x002B1CC0 - 0x002B1CF2 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1CC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1CC0: ;
    esp = esp - 8;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edx;
    if (CMP_A(eax, 3)) { sub_002B1CF2(); return; } /* ja: above (unsigned >) */

loc_002B1CCF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B1DFC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002B1CD6u) goto loc_002B1CD6;
    if (_jt == 0x002B1CDDu) goto loc_002B1CDD;
    if (_jt == 0x002B1CE4u) goto loc_002B1CE4;
    if (_jt == 0x002B1CEBu) goto loc_002B1CEB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B1CD6: ;
    esi = 0x34;
    g_seh_ebp = ebp; sub_002B1CF4(); return; /* tail jmp 0x002B1CF4 */

loc_002B1CDD: ;
    esi = 0x30;
    g_seh_ebp = ebp; sub_002B1CF4(); return; /* tail jmp 0x002B1CF4 */

loc_002B1CE4: ;
    esi = 0x2C;
    g_seh_ebp = ebp; sub_002B1CF4(); return; /* tail jmp 0x002B1CF4 */

loc_002B1CEB: ;
    esi = 0x28;
    g_seh_ebp = ebp; sub_002B1CF4(); return; /* tail jmp 0x002B1CF4 */

}

/**
 * sub_002B1E10
 * Original: 0x002B1E10 - 0x002B1E74 (100 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B1E10: ;
    esp = esp - 8;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_002B1E32: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B1E6E; /* je: equal / zero */

loc_002B1E39: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_002B1E55; /* je: equal / zero */

loc_002B1E40: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_002B1E55; /* je: equal / zero */

loc_002B1E45: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_002B1E55; /* je: equal / zero */

loc_002B1E4B: ;
    ecx = MEM32(eax + 0x18);
    eax = eax + 0x18;
    if (TEST_NZ(ecx, ecx)) goto loc_002B1E70; /* jne: not equal / not zero */

loc_002B1E55: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_002B1E6E; /* je: equal / zero */

loc_002B1E5E: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_002B1E6E; /* je: equal / zero */

loc_002B1E64: ;
    ecx = MEM32(eax + 0x18);
    eax = eax + 0x18;
    if (TEST_NZ(ecx, ecx)) goto loc_002B1E70; /* jne: not equal / not zero */

loc_002B1E6E: ;
    eax = 0; /* xor self */

loc_002B1E70: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1E80
 * Original: 0x002B1E80 - 0x002B1EE4 (100 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B1E80: ;
    esp = esp - 8;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_002B1EA2: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B1EDE; /* je: equal / zero */

loc_002B1EA9: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_002B1EC5; /* je: equal / zero */

loc_002B1EB0: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_002B1EC5; /* je: equal / zero */

loc_002B1EB5: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_002B1EC5; /* je: equal / zero */

loc_002B1EBB: ;
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    if (TEST_NZ(ecx, ecx)) goto loc_002B1EE0; /* jne: not equal / not zero */

loc_002B1EC5: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_002B1EDE; /* je: equal / zero */

loc_002B1ECE: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_002B1EDE; /* je: equal / zero */

loc_002B1ED4: ;
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    if (TEST_NZ(ecx, ecx)) goto loc_002B1EE0; /* jne: not equal / not zero */

loc_002B1EDE: ;
    eax = 0; /* xor self */

loc_002B1EE0: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1EF0
 * Original: 0x002B1EF0 - 0x002B1F54 (100 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B1EF0: ;
    esp = esp - 8;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_002B1F12: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B1F4E; /* je: equal / zero */

loc_002B1F19: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_002B1F35; /* je: equal / zero */

loc_002B1F20: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_002B1F35; /* je: equal / zero */

loc_002B1F25: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_002B1F35; /* je: equal / zero */

loc_002B1F2B: ;
    ecx = MEM32(eax + 0x28);
    eax = eax + 0x28;
    if (TEST_NZ(ecx, ecx)) goto loc_002B1F50; /* jne: not equal / not zero */

loc_002B1F35: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_002B1F4E; /* je: equal / zero */

loc_002B1F3E: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_002B1F4E; /* je: equal / zero */

loc_002B1F44: ;
    ecx = MEM32(eax + 0x28);
    eax = eax + 0x28;
    if (TEST_NZ(ecx, ecx)) goto loc_002B1F50; /* jne: not equal / not zero */

loc_002B1F4E: ;
    eax = 0; /* xor self */

loc_002B1F50: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1F60
 * Original: 0x002B1F60 - 0x002B1F86 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B1F60: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(edx, edx)) goto loc_002B1F81; /* je: equal / zero */

loc_002B1F6A: ;
    edx = ecx;
    /* nop */

loc_002B1F70: ;
    if (CMP_EQ(MEM32(edx), esi)) goto loc_002B1F84; /* je: equal / zero */

loc_002B1F74: ;
    edi = MEM32(ecx + 0xC);
    ecx = ecx + 8;
    eax++;
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = ecx;
    if (TEST_NZ(edi, edi)) goto loc_002B1F70; /* jne: not equal / not zero */

loc_002B1F81: ;
    eax = eax | 0xFFFFFFFFu;

loc_002B1F84: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1F90
 * Original: 0x002B1F90 - 0x002B20B1 (289 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1F90: ;
    edx = MEM32(esp + 4);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(edx, edx)) goto loc_002B202D; /* je: equal / zero */

loc_002B1FA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    esi = 0x120;
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1FBB: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B1FC7; /* je: equal / zero */

loc_002B1FC2: ;
    ebp = 1;

loc_002B1FC7: ;
    edx = MEM32(esp + 0x34);
    ecx = esp + ebp * 4 + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = esp + ebp * 4 + 0x18;
    esi = 0x128;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B1FE0: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B1FE8; /* je: equal / zero */

loc_002B1FE7: ;
    ebp++;

loc_002B1FE8: ;
    edx = esp + ebp * 4 + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    edi = esp + ebp * 4 + 0x18;
    esi = 0x130;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B2001: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B2009; /* je: equal / zero */

loc_002B2008: ;
    ebp++;

loc_002B2009: ;
    edx = MEM32(esp + 0x34);
    eax = esp + ebp * 4 + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edi = esp + ebp * 4 + 0x18;
    esi = 0x138;
    PUSH32(esp, 0); sub_002B1300(); /* call 0x002B1300 */

loc_002B2022: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_002B20A5; /* je: equal / zero */

loc_002B202B: ;
    goto loc_002B20A4;

loc_002B202D: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x448);
    ecx = MEM32(eax + 0x80);
    if (TEST_Z(ecx, ecx)) goto loc_002B205A; /* je: equal / zero */

loc_002B2043: ;
    xmm0 = MEMF(eax + 0x84); /* movss */
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    ebp = 1;

loc_002B205A: ;
    ecx = MEM32(eax + 0x88);
    if (TEST_Z(ecx, ecx)) goto loc_002B2073; /* je: equal / zero */

loc_002B2064: ;
    edx = MEM32(eax + 0x8C);
    MEM32(esp + ebp * 4 + 8) = ecx;
    MEM32(esp + ebp * 4 + 0x18) = edx;
    ebp++;

loc_002B2073: ;
    ecx = MEM32(eax + 0x90);
    if (TEST_Z(ecx, ecx)) goto loc_002B208C; /* je: equal / zero */

loc_002B207D: ;
    MEM32(esp + ebp * 4 + 8) = ecx;
    ecx = MEM32(eax + 0x94);
    MEM32(esp + ebp * 4 + 0x18) = ecx;
    ebp++;

loc_002B208C: ;
    ecx = MEM32(eax + 0x98);
    if (TEST_Z(ecx, ecx)) goto loc_002B20A5; /* je: equal / zero */

loc_002B2096: ;
    edx = MEM32(eax + 0x9C);
    MEM32(esp + ebp * 4 + 8) = ecx;
    MEM32(esp + ebp * 4 + 0x18) = edx;

loc_002B20A4: ;
    ebp++;

loc_002B20A5: ;
    if (TEST_NZ(ebp, ebp)) { sub_002B20B1(); return; } /* jne: not equal / not zero */

loc_002B20A9: ;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002B20E0
 * Original: 0x002B20E0 - 0x002B2177 (151 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B20E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B20E0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    edi = esp + 0x28;
    esi = esp + 0x18;
    ecx = ebp;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_002B1390(); /* call 0x002B1390 */

loc_002B2103: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B210F; /* je: equal / zero */

loc_002B210A: ;
    ebx = 1;

loc_002B210F: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    edi = esp + ebx * 4 + 0x28;
    esi = esp + ebx * 4 + 0x18;
    ecx = ebp;
    PUSH32(esp, 0); sub_002B1390(); /* call 0x002B1390 */

loc_002B2125: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B212D; /* je: equal / zero */

loc_002B212C: ;
    ebx++;

loc_002B212D: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0x1C);
    edi = esp + ebx * 4 + 0x24;
    esi = esp + ebx * 4 + 0x14;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0); sub_002B1390(); /* call 0x002B1390 */

loc_002B2143: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B214B; /* je: equal / zero */

loc_002B214A: ;
    ebx++;

loc_002B214B: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0x24);
    edi = esp + ebx * 4 + 0x24;
    esi = esp + ebx * 4 + 0x14;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_002B1390(); /* call 0x002B1390 */

loc_002B2161: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B2169; /* je: equal / zero */

loc_002B2168: ;
    ebx++;

loc_002B2169: ;
    if (TEST_NZ(ebx, ebx)) { sub_002B2177(); return; } /* jne: not equal / not zero */

loc_002B216D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002B21B0
 * Original: 0x002B21B0 - 0x002B2271 (193 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B21B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B21B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebx + 0x500));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B226C; /* je: equal / zero */

loc_002B21C4: ;
    esi = MEM32(ebx + 0x4B0);
    if (TEST_Z(esi, esi)) { sub_002B2271(); return; } /* je: equal / zero */

loc_002B21D2: ;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_002B21D7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002B2271(); return; } /* je: equal / zero */

loc_002B21DF: ;
    (void)0; /* cmp MEM8(ebx + 0x511), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM8(ebx + 0x500) = 0;
    ebp = 1;
    if (CMP_BE(MEM8(ebx + 0x511), 1)) goto loc_002B2239; /* jbe: below or equal (unsigned <=) */

loc_002B21F5: ;
    eax = 0xFFFFFB50u;
    eax = eax - ebx;
    esi = ebx + 0x4B4;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);

loc_002B2207: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x24);
    if (TEST_NZ(edx, edx)) goto loc_002B2229; /* jne: not equal / not zero */

loc_002B2210: ;
    edx = MEM32(ebx + 0x50C);
    edi = MEM32(ebx + 0x68);
    edx = edx + eax;
    eax = MEM32(edx + esi);
    PUSH32(esp, 0); sub_00086440(); /* call 0x00086440 */

loc_002B2223: ;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);

loc_002B2229: ;
    ecx = ZX8(MEM8(ebx + 0x511));
    ebp++;
    esi = esi + 4;
    if (CMP_L(ebp, ecx)) goto loc_002B2207; /* jl: less (signed <) */

loc_002B2238: ;
    POP32(esp, edi);

loc_002B2239: ;
    edx = MEM32(ebx + 0x68);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002B3200(); /* call 0x002B3200 */

loc_002B2245: ;
    esp = esp + 0xC;
    esi = ebx;
    PUSH32(esp, 0); sub_002B44B0(); /* call 0x002B44B0 */

loc_002B224F: ;
    eax = MEM32(ebx + 0x504);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_002B226C; /* je: equal / zero */

loc_002B225A: ;
    edx = ZX16(MEM16(ebx + 0x60));
    ecx = MEM32(ebx + 0x508);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx++;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002B2269: ;
    esp = esp + 8;

loc_002B226C: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2280
 * Original: 0x002B2280 - 0x002B229C (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2280(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B2280: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_002B2291: ;
    esi = eax;
    esp = esp + 0xC;
    if (TEST_NZ(esi, esi)) { sub_002B229C(); return; } /* jne: not equal / not zero */

loc_002B229A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B22E0
 * Original: 0x002B22E0 - 0x002B22EC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B22E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B22E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A1B0);
    if (TEST_NZ(eax, eax)) { sub_002B22EC(); return; } /* jne: not equal / not zero */

loc_002B22EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2530
 * Original: 0x002B2530 - 0x002B2547 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2530: ;
    esp = esp - 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_002B2547(); return; } /* je: equal / zero */

loc_002B2538: ;
    eax = ZX8(MEM8(0x7FAA9C));
    ebx = 0; /* xor self */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002B2559(); return; /* tail jmp 0x002B2559 */

}

/**
 * sub_002B25F0
 * Original: 0x002B25F0 - 0x002B2638 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B25F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B25F0: ;
    eax = MEM32(ecx + 0x200);
    edx = MEM32(ecx + 0x568);
    eax = eax & 0xFFFFFFFDu;
    eax = eax | 4;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ecx + 0x200) = eax;
    if (TEST_Z(edx, edx)) goto loc_002B2637; /* je: equal / zero */

loc_002B260C: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x6E));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002B2637; /* jne: not equal / not zero */

loc_002B2615: ;
    edx = MEM32(0x7FA1F8);
    if (CMP_A(edx, 0x44)) goto loc_002B262E; /* ja: above (unsigned >) */

loc_002B2620: ;
    edx = ZX8(MEM8(edx + 0x2B2640));
    { uint32_t _jt = MEM32(edx * 4 + 0x2B2638); /* switch: 2 entries, 2 targets */
    if (_jt == 0x002B262Eu) goto loc_002B262E;
    if (_jt == 0x002B2637u) goto loc_002B2637;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B262E: ;
    eax = eax | 2;
    MEM32(ecx + 0x200) = eax;

loc_002B2637: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B2690
 * Original: 0x002B2690 - 0x002B26D2 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002B2690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) { sub_002B26D2(); return; } /* je: equal / zero */

loc_002B26AC: ;
    eax = MEM32(0x84A1B0);
    if (TEST_Z(MEM8(eax + ebx), 0x7F)) { sub_002B26D2(); return; } /* je: equal / zero */

loc_002B26B7: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002B26BF: ;
    MEM32(0x7FAA98) = 0xA;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3200
 * Original: 0x002B3200 - 0x002B323F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3200: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    (void)0; /* cmp MEM32(ebp + 0x68), 0xFFFF - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0x68), 0xFFFF)) { sub_002B323F(); return; } /* je: equal / zero */

loc_002B3218: ;
    eax = MEM32(ebx * 4 + 0x6A58F0);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    esi = ebp + 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_002B322B: ;
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, esi);
    MEM8(ebp + 0x5F) = 0;
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B323A: ;
    esp = esp + 0x14;
    g_seh_ebp = ebp; sub_002B326C(); return; /* tail jmp 0x002B326C */

}

/**
 * sub_002B34D0
 * Original: 0x002B34D0 - 0x002B34DA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B34D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B34D0: ;
    if (CMP_NE(eax, 0xFFFF)) { sub_002B34DA(); return; } /* jne: not equal / not zero */

loc_002B34D7: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002B3510
 * Original: 0x002B3510 - 0x002B357A (106 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3510: ;
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(ecx + 0x511));
    if (TEST_NZ(eax, eax)) goto loc_002B3523; /* jne: not equal / not zero */

loc_002B351C: ;
    eax = 1;
    (void)0; /* test eax, eax - flags set for next jcc */

loc_002B3523: ;
    if (CMP_LE(eax & eax, 0)) goto loc_002B3578; /* jle: less or equal (signed <=) */

loc_002B3525: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x4EC;
    ebp = eax;

loc_002B3530: ;
    eax = MEM32(esi + -60);
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_002B356F; /* je: equal / zero */

loc_002B353A: ;
    edi = MEM32(eax + 8);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_002B3552: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_002B355E: ;
    MEM32(esi) = eax;
    ecx = MEM32(esi + -40);
    edx = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    esp = esp + 0x10;
    MEM32(edx + eax + 4) = ebx;

loc_002B356F: ;
    esi = esi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_002B3530; /* jne: not equal / not zero */

loc_002B3575: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002B3578: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3580
 * Original: 0x002B3580 - 0x002B3657 (215 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3580: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x258);
    if (TEST_Z(eax, eax)) goto loc_002B3652; /* je: equal / zero */

loc_002B3596: ;
    SET_LO8(eax, MEM8(eax + 0x41));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B35B1; /* jne: not equal / not zero */

loc_002B359E: ;
    SET_LO8(eax, MEM8(ebp + 0x236));
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ebx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    ebx = ebx + ebx + 3;
    goto loc_002B35B4;

loc_002B35B1: ;
    ebx = ZX8(LO8(eax));

loc_002B35B4: ;
    eax = MEM32(0x84A144);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = edi;
    if (TEST_S(eax, eax)) goto loc_002B3630; /* jl: less (signed <) */

loc_002B35C8: ;
    PUSH32(esp, esi);
    esi = ebx * 4;
    ebp = ebp + 0x550;
    goto loc_002B35E0;

    /* nop */
    /* nop */

loc_002B35E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1BD);
    PUSH32(esp, 0x5F3FA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002B35F2: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_002B3617; /* je: equal / zero */

loc_002B35FB: ;
    ecx = esi;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ebx = MEM32(esp + 0x10);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x14);

loc_002B3617: ;
    eax = MEM32(0x84A144);
    edi++;
    MEM32(ebp) = edx;
    ebp = ebp + 4;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(edi, eax)) goto loc_002B35E0; /* jle: less or equal (signed <=) */

loc_002B362B: ;
    ebp = MEM32(esp + 0x1C);
    POP32(esp, esi);

loc_002B3630: ;
    eax = MEM32(ebp + edi * 4 + 0x54C);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002B3642; /* je: equal / zero */

loc_002B363C: ;
    MEM8(ebp + 0x54A) = LO8(ebx);

loc_002B3642: ;
    PUSH32(esp, 0); sub_00123FA0(); /* call 0x00123FA0 */

loc_002B3647: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + 0x560) = eax;
    POP32(esp, ebx);

loc_002B3652: ;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3660
 * Original: 0x002B3660 - 0x002B36F9 (153 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3660: ;
    PUSH32(esp, edi);
    edi = eax + -6;
    if (CMP_A(edi, 0xF)) goto loc_002B36F7; /* ja: above (unsigned >) */

loc_002B366D: ;
    ecx = ZX8(MEM8(edi + 0x2B37B8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x2B37B0)); return; /* indirect tail jmp */

    edi = eax + -18;
    PUSH32(esp, 0x605C98);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002B368A: ;
    PUSH32(esp, 0x605C8C);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002B3696: ;
    PUSH32(esp, 0x605C60);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002B36A2: ;
    PUSH32(esp, 0x605C58);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002B36AE: ;
    esp = esp + 0x10;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    eax = esi;
    if (CMP_GE(edi, 2)) goto loc_002B36D3; /* jge: greater or equal (signed >=) */

loc_002B36B8: ;
    PUSH32(esp, 0x605C58);
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_002B36C2: ;
    PUSH32(esp, 0x605C8C);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_002B36CE: ;
    esp = esp + 8;
    goto loc_002B36E0;

loc_002B36D3: ;
    PUSH32(esp, 0x605C60);
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_002B36DD: ;
    esp = esp + 4;

loc_002B36E0: ;
    if (TEST_Z(edi, 0xFFFFFFFEu)) goto loc_002B36F7; /* je: equal / zero */

loc_002B36E8: ;
    PUSH32(esp, 0x605C98);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_002B36F4: ;
    esp = esp + 4;

loc_002B36F7: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B37D0
 * Original: 0x002B37D0 - 0x002B37FA (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B37D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B37D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_002B21B0(); /* call 0x002B21B0 */

loc_002B37E4: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B37F3; /* jne: not equal / not zero */

loc_002B37EB: ;
    if (CMP_LE(ebp, 0x11A)) { sub_002B37FA(); return; } /* jle: less or equal (signed <=) */

loc_002B37F3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B38F0
 * Original: 0x002B38F0 - 0x002B398D (157 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B38F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B38F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    (void)0; /* cmp ebx, 0x11A - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_G(ebx, 0x11A)) goto loc_002B398A; /* jg: greater (signed >) */

loc_002B3904: ;
    PUSH32(esp, esi);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00076E40(); /* call 0x00076E40 */

loc_002B390F: ;
    esp = esp + 4;
    if (CMP_LE(ebx & ebx, 0)) goto loc_002B398A; /* jle: less or equal (signed <=) */

loc_002B3916: ;
    ecx = ZX16(MEM16(esi + 0x60));
    ebx--;
    ecx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebx * 8 + 0x59BBD0);
    MEM32(esp + 0x10) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_002B393B; /* jne: not equal / not zero */

loc_002B392C: ;
    SET_LO8(eax, MEM8(edi + 9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B393B; /* je: equal / zero */

loc_002B3933: ;
    eax = ebx + 1;
    PUSH32(esp, 0); sub_002B4570(); /* call 0x002B4570 */

loc_002B393B: ;
    SET_LO8(eax, MEM8(ebx * 8 + 0x59BBD4));
    ebx = ebx * 8 + 0x59BBD4;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002B3988; /* jbe: below or equal (unsigned <=) */

loc_002B3950: ;
    SET_LO8(eax, MEM8(edi + 9));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B397D; /* jne: not equal / not zero */

loc_002B3957: ;
    esi = ZX16(MEM16(edi));
    PUSH32(esp, 0); sub_002F2E60(); /* call 0x002F2E60 */

loc_002B395F: ;
    if (TEST_Z(eax, eax)) goto loc_002B397D; /* je: equal / zero */

loc_002B3963: ;
    ecx = ZX8(MEM8(eax + 0x135));
    if (CMP_NE(ecx, MEM32(esp + 0x14))) goto loc_002B397D; /* jne: not equal / not zero */

loc_002B3970: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_002B397A: ;
    esp = esp + 0xC;

loc_002B397D: ;
    edx = ZX8(MEM8(ebx));
    ebp++;
    edi = edi + 0x20;
    if (CMP_L(ebp, edx)) goto loc_002B3950; /* jl: less (signed <) */

loc_002B3988: ;
    POP32(esp, ebp);
    POP32(esp, edi);

loc_002B398A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3990
 * Original: 0x002B3990 - 0x002B39B9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = edi;
    MEM32(edi + 0x6C) = esi;
    PUSH32(esp, 0); sub_002E5830(); /* call 0x002E5830 */

loc_002B399E: ;
    ebx = MEM32(edi + 0x68);
    eax = ebx;
    PUSH32(esp, 0); sub_000867A0(); /* call 0x000867A0 */

loc_002B39A8: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp ebx, 0xFFFF - flags set for next jcc */
    MEM32(edi + 0x70) = eax;
    if (CMP_NE(ebx, 0xFFFF)) { sub_002B39B9(); return; } /* jne: not equal / not zero */

loc_002B39B5: ;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_002B39F6(); return; /* tail jmp 0x002B39F6 */

}

/**
 * sub_002B3AA0
 * Original: 0x002B3AA0 - 0x002B3C40 (416 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002B3AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX16(MEM16(ebx + 0x60));
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002F2CE0(); /* call 0x002F2CE0 */

loc_002B3AC2: ;
    edi = eax;
    SET_LO8(edx, MEM8(edi + 0x60));
    SET_LO8(eax, LO8(eax) | 0xFF);
    SET_LO8(eax, LO8(eax) - LO8(edx));
    SET_LO8(edx, MEM8(ebp + 0xC));
    ecx = ZX8(LO8(eax));
    MEM8(edi + 0x10B) = LO8(eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = edi;
    MEM32(edi + 0x10C) = ecx;
    MEM8(edi + 0x1B3) = LO8(edx);
    PUSH32(esp, 0); sub_002E57E0(); /* call 0x002E57E0 */

loc_002B3AEE: ;
    esp = esp + 4;
    eax = edi;
    PUSH32(esp, 0); sub_002F5CD0(); /* call 0x002F5CD0 */

loc_002B3AF8: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(edi + 0x135) = LO8(eax);
    eax = edi;
    MEM8(edi + 0x43D) = 1;
    MEM16(edi + 0x3AE) = 1;
    MEM8(edi + 0x234) = 0xFF;
    MEM32(edi + 0x12C) = ecx;
    MEM8(edi + 0x233) = 1;
    MEM32(edi + 0x6C) = esi;
    MEM32(edi + 0x68) = esi;
    PUSH32(esp, 0); sub_002E5830(); /* call 0x002E5830 */

loc_002B3B38: ;
    eax = MEM32(ebx + 0x68);
    PUSH32(esp, 0); sub_000867A0(); /* call 0x000867A0 */

loc_002B3B40: ;
    xmm1 = MEMF(0x648EEC); /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(ebx + 0x70) = eax;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx + 0x136));
    edx = edx & 0xFFF8;
    MEM16(edi + 0x136) = LO16(edx);
    eax = MEM32(ebx + 0x3E0);
    MEM32(edi + 0x3E0) = eax;
    ecx = MEM32(ebx + 0x3E4);
    (void)0; /* cmp MEM32(edi + 0x64), 0x12 - flags set for next jcc */
    MEM32(edi + 0x3E4) = ecx;
    edx = MEM32(ebx + 0x3E4);
    MEMF(edi + 0x624) = xmm0; /* movss */
    MEMF(edi + 0x628) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x3E8) = edx;
    MEMF(edi + 0x62C) = xmm0; /* movss */
    MEMF(edi + 0x630) = xmm0; /* movss */
    MEMF(edi + 0x614) = xmm1; /* movss */
    MEMF(edi + 0x604) = xmm1; /* movss */
    MEMF(edi + 0x5F4) = xmm1; /* movss */
    MEMF(edi + 0x618) = xmm1; /* movss */
    MEMF(edi + 0x608) = xmm1; /* movss */
    MEMF(edi + 0x5F8) = xmm1; /* movss */
    MEMF(edi + 0x61C) = xmm0; /* movss */
    MEMF(edi + 0x60C) = xmm0; /* movss */
    MEMF(edi + 0x5FC) = xmm0; /* movss */
    MEMF(edi + 0x620) = xmm0; /* movss */
    MEMF(edi + 0x610) = xmm0; /* movss */
    MEMF(edi + 0x600) = xmm0; /* movss */
    if (CMP_NE(MEM32(edi + 0x64), 0x12)) { sub_002B3C40(); return; } /* jne: not equal / not zero */

loc_002B3C16: ;
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(edi + 0x260) = xmm0; /* movss */
    MEMF(edi + 0x264) = xmm0; /* movss */
    MEMF(edi + 0x268) = xmm0; /* movss */
    MEMF(edi + 0x26C) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002B3C81(); return; /* tail jmp 0x002B3C81 */

}

/**
 * sub_002B3ED0
 * Original: 0x002B3ED0 - 0x002B3F15 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B3ED0: ;
    edx = ZX8(MEM8(0x7FAA9D));
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = 1;
    if (CMP_LE(edx & edx, 0)) goto loc_002B3F14; /* jle: less or equal (signed <=) */

loc_002B3EE2: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A1AC);
    PUSH32(esp, edi);
    /* nop */

loc_002B3EF0: ;
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x54);
    edi = ZX8(MEM8(edi + esi + 0x38));
    if (CMP_NE(edi, eax)) goto loc_002B3F01; /* jne: not equal / not zero */

loc_002B3EFE: ;
    eax++;
    ecx = 0; /* xor self */

loc_002B3F01: ;
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_002B3EF0; /* jl: less (signed <) */

loc_002B3F06: ;
    (void)0; /* cmp eax, 0xFF - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_LE(eax, 0xFF)) goto loc_002B3F14; /* jle: less or equal (signed <=) */

loc_002B3F0F: ;
    eax = 0xFF;

loc_002B3F14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3F20
 * Original: 0x002B3F20 - 0x002B3F28 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B3F20: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_002B3F28(); return; } /* jne: not equal / not zero */

loc_002B3F24: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3F70
 * Original: 0x002B3F70 - 0x002B3F77 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B3F70: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_002B3F77(); return; } /* jne: not equal / not zero */

loc_002B3F74: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002B3FB0
 * Original: 0x002B3FB0 - 0x002B3FBE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B3FB0: ;
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_002B3FB5: ;
    if (TEST_Z(eax, eax)) { sub_002B3FBE(); return; } /* je: equal / zero */

loc_002B3FB9: ;
    eax = ZX16(MEM16(eax + 0x60));
    esp += 4; return; /* ret */

}

/**
 * sub_002B3FD0
 * Original: 0x002B3FD0 - 0x002B3FDE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3FD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B3FD0: ;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_002B3FD5: ;
    if (TEST_Z(eax, eax)) { sub_002B3FDE(); return; } /* je: equal / zero */

loc_002B3FD9: ;
    eax = ZX16(MEM16(eax + 0x60));
    esp += 4; return; /* ret */

}

/**
 * sub_002B3FF0
 * Original: 0x002B3FF0 - 0x002B4020 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B3FF0: ;
    ecx = MEM32(0x84A1AC);
    if (TEST_Z(ecx, ecx)) goto loc_002B401C; /* je: equal / zero */

loc_002B3FFA: ;
    edx = ZX8(MEM8(0x7FAA9D));
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_002B401C; /* jle: less or equal (signed <=) */

loc_002B4007: ;
    ecx = ecx + 4;
    /* nop */

loc_002B4010: ;
    if (CMP_EQ(MEM32(ecx), esi)) { sub_002B4020(); return; } /* je: equal / zero */

loc_002B4014: ;
    eax++;
    ecx = ecx + 0x54;
    if (CMP_L(eax, edx)) goto loc_002B4010; /* jl: less (signed <) */

loc_002B401C: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4040
 * Original: 0x002B4040 - 0x002B40B2 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4040: ;
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(0x7FAA9D));
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    if (CMP_LE(eax & eax, 0)) goto loc_002B40AD; /* jle: less or equal (signed <=) */

loc_002B4050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A1AC);
    ebx = 0xFFFFFFB0u;
    PUSH32(esp, edi);
    edi = ebp + 0x50;
    ebx = ebx - ebp;
    MEM32(esp + 0x10) = eax;

loc_002B4067: ;
    if (TEST_Z(ebp, ebp)) goto loc_002B409C; /* je: equal / zero */

loc_002B406B: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(edi + -76), eax)) goto loc_002B409C; /* jne: not equal / not zero */

loc_002B4074: ;
    edx = MEM32(edi);
    PUSH32(esp, 0); sub_004160F0(); /* call 0x004160F0 */

loc_002B407B: ;
    ecx = MEM32(esp + 0x1C);
    eax = eax & 0xFF;
    if (CMP_NE(eax, ecx)) goto loc_002B409C; /* jne: not equal / not zero */

loc_002B4088: ;
    ecx = ebx + edi;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 4);
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;

loc_002B409C: ;
    eax = MEM32(esp + 0x10);
    edi = edi + 0x54;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_002B4067; /* jne: not equal / not zero */

loc_002B40AA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002B40AD: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B40C0
 * Original: 0x002B40C0 - 0x002B412D (109 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B40C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B40C0: ;
    edx = ZX8(MEM8(0x7FAA9D));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_002B4125; /* jle: less or equal (signed <=) */

loc_002B40D1: ;
    ebp = MEM32(0x84A1AC);
    ebp = ebp + 0x50;
    /* nop */

loc_002B40E0: ;
    eax = MEM32(ebp);
    if (TEST_Z(eax, eax)) goto loc_002B411D; /* je: equal / zero */

loc_002B40E7: ;
    esi = MEM32(esp + 0x14);
    goto loc_002B40F0;

    /* nop */

loc_002B40F0: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_002B4114; /* jne: not equal / not zero */

loc_002B40F8: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002B4110; /* je: equal / zero */

loc_002B40FC: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_002B4114; /* jne: not equal / not zero */

loc_002B4106: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002B40F0; /* jne: not equal / not zero */

loc_002B4110: ;
    eax = 0; /* xor self */
    goto loc_002B4119;

loc_002B4114: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_002B4119: ;
    if (TEST_Z(eax, eax)) { sub_002B412D(); return; } /* je: equal / zero */

loc_002B411D: ;
    edi++;
    ebp = ebp + 0x54;
    if (CMP_L(edi, edx)) goto loc_002B40E0; /* jl: less (signed <) */

loc_002B4125: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4150
 * Original: 0x002B4150 - 0x002B424D (253 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4150(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B4150: ;
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = edx;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002B424A; /* je: equal / zero */

loc_002B4161: ;
    PUSH32(esp, 0); sub_002B34D0(); /* call 0x002B34D0 */

loc_002B4166: ;
    edx = 0; /* xor self */
    if (CMP_EQ(esi, edx)) goto loc_002B41AA; /* je: equal / zero */

loc_002B416C: ;
    SET_LO16(ecx, MEM16(esi + 0x3E));
    if (CMP_NE(LO16(ecx), LO16(edx))) goto loc_002B419B; /* jne: not equal / not zero */

loc_002B4175: ;
    SET_LO16(ecx, MEM16(eax + 0x34));

loc_002B4179: ;
    MEM16(ebx + 0xCA) = LO16(ecx);

loc_002B4180: ;
    ecx = MEM32(0x7FA1F8);
    if (CMP_EQ(ecx, 0x1D)) goto loc_002B4190; /* je: equal / zero */

loc_002B418B: ;
    if (CMP_NE(ecx, 0x46)) goto loc_002B41B1; /* jne: not equal / not zero */

loc_002B4190: ;
    MEM16(ebx + 0xCA) = 0x3E8;
    goto loc_002B41B1;

loc_002B419B: ;
    if (CMP_NE(LO16(ecx), 1)) goto loc_002B4179; /* jne: not equal / not zero */

loc_002B41A1: ;
    MEM16(ebx + 0xCA) = LO16(edx);
    goto loc_002B4180;

loc_002B41AA: ;
    MEM16(ebx + 0xCA) = LO16(edx);

loc_002B41B1: ;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    SET_LO8(ecx, MEM8(eax + 0x45));
    MEM8(ebx + 0x24F) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x3D));
    MEM8(ebx + 0x519) = LO8(ecx);
    ecx = MEM32(eax + 0x40);
    MEM32(ebx + 0x51C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x12));
    MEM8(ebx + 0xA1) = LO8(ecx);
    MEM8(ebx + 0x139) = LO8(edx);
    MEM8(ebx + 0x13A) = LO8(edx);
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(ebx + 0x274) = LO16(ecx);
    if (CMP_EQ(esi, edx)) goto loc_002B4202; /* je: equal / zero */

loc_002B41F0: ;
    ecx = MEM32(esi + 0x44);
    if (CMP_EQ(ecx, edx)) goto loc_002B4202; /* je: equal / zero */

loc_002B41F7: ;
    MEM8(ebx + 0x510) = LO8(ecx);
    ecx = MEM32(esi + 0x48);
    goto loc_002B421A;

loc_002B4202: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (CMP_EQ(LO8(ecx), LO8(edx))) goto loc_002B4220; /* je: equal / zero */

loc_002B4209: ;
    MEM8(ebx + 0x510) = LO8(ecx);
    ecx = ZX8(MEM8(eax + 5));
    ecx = MEM32(ecx * 4 + 0x6C8708);

loc_002B421A: ;
    MEM32(ebx + 0x50C) = ecx;

loc_002B4220: ;
    if (CMP_EQ(esi, edx)) goto loc_002B4231; /* je: equal / zero */

loc_002B4224: ;
    esi = MEM32(esi + 0x4C);
    if (CMP_EQ(esi, edx)) goto loc_002B4231; /* je: equal / zero */

loc_002B422B: ;
    MEM32(ebx + 0x514) = esi;

loc_002B4231: ;
    SET_LO8(ecx, MEM8(ebx + 0x510));
    SET_LO8(ecx, LO8(ecx) + MEM8(eax + 0x44));
    MEM8(ebx + 0x511) = LO8(ecx);
    if (CMP_EQ(MEM8(eax + 0x32), LO8(edx))) goto loc_002B424A; /* je: equal / zero */

loc_002B4245: ;
    PUSH32(esp, 0); sub_00089CD0(); /* call 0x00089CD0 */

loc_002B424A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4250
 * Original: 0x002B4250 - 0x002B4305 (181 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4250: ;
    PUSH32(esp, ecx);
    (void)0; /* cmp ebx, 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_EQ(ebx, 0xFFFF)) goto loc_002B4302; /* je: equal / zero */

loc_002B4262: ;
    PUSH32(esp, edi);
    eax = ebx;
    edi = ebp;
    PUSH32(esp, 0); sub_002B3990(); /* call 0x002B3990 */

loc_002B426C: ;
    ecx = MEM32(esp + 0x14);
    eax = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_002B4150(); /* call 0x002B4150 */

loc_002B4279: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_002B4286; /* jne: not equal / not zero */

loc_002B4282: ;
    if (TEST_Z(ebx, ebx)) goto loc_002B4301; /* je: equal / zero */

loc_002B4286: ;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00099CF0(); /* call 0x00099CF0 */

loc_002B428E: ;
    SET_LO8(eax, MEM8(ebp + 0x511));
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002B42DC; /* jbe: below or equal (unsigned <=) */

loc_002B429A: ;
    eax = ebp + 0x4B0;
    MEM32(esp + 0xC) = eax;

loc_002B42A4: ;
    ecx = MEM32(ebp + 0x50C);
    eax = MEM32(ecx + esi * 4);
    edi = ebx;
    PUSH32(esp, 0); sub_00086440(); /* call 0x00086440 */

loc_002B42B4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    if (TEST_Z(eax, eax)) goto loc_002B42C5; /* je: equal / zero */

loc_002B42BE: ;
    MEM8(ebp + 0x500) = 1;

loc_002B42C5: ;
    edx = MEM32(esp + 0xC);
    eax = ZX8(MEM8(ebp + 0x511));
    esi++;
    edx = edx + 4;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    if (CMP_L(esi, eax)) goto loc_002B42A4; /* jl: less (signed <) */

loc_002B42DC: ;
    esi = MEM32(ebp + 0x4B0);
    if (TEST_Z(esi, esi)) goto loc_002B4300; /* je: equal / zero */

loc_002B42E6: ;
    PUSH32(esp, 0); sub_0009A490(); /* call 0x0009A490 */

loc_002B42EB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B4300; /* je: equal / zero */

loc_002B42EF: ;
    ecx = MEM32(ebp + 0x4B0);
    PUSH32(esp, ecx);
    edi = ebx;
    PUSH32(esp, 0); sub_002D0590(); /* call 0x002D0590 */

loc_002B42FD: ;
    esp = esp + 4;

loc_002B4300: ;
    POP32(esp, esi);

loc_002B4301: ;
    POP32(esp, edi);

loc_002B4302: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4310
 * Original: 0x002B4310 - 0x002B4477 (359 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4310: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x68);
    (void)0; /* cmp esi, 0xFFFF - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (CMP_EQ(esi, 0xFFFF)) { sub_002B4477(); return; } /* je: equal / zero */

loc_002B4327: ;
    if (CMP_EQ(esi, 0x48)) { sub_002B4477(); return; } /* je: equal / zero */

loc_002B4330: ;
    if (CMP_EQ(esi, 0xB)) { sub_002B4477(); return; } /* je: equal / zero */

loc_002B4339: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = eax + 0x4B0;
    MEM32(esp + 0x10) = 5;
    /* nop */

loc_002B4350: ;
    ecx = MEM32(ebp + 0x14);
    eax = ebp + 0x14;
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_002B436F; /* je: equal / zero */

loc_002B435C: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_002B436C: ;
    esp = esp + 8;

loc_002B436F: ;
    if (CMP_EQ(MEM32(ebp), ebx)) goto loc_002B444E; /* je: equal / zero */

loc_002B4378: ;
    eax = MEM32(ebp + 0x28);
    if (CMP_EQ(eax, ebx)) goto loc_002B438F; /* je: equal / zero */

loc_002B437F: ;
    ebx = eax;
    PUSH32(esp, 0); sub_003F96B0(); /* call 0x003F96B0 */

loc_002B4386: ;
    MEM32(ebp + 0x28) = 0;
    ebx = 0; /* xor self */

loc_002B438F: ;
    esi = MEM32(ebp);
    if (CMP_EQ(esi, 0x75DB48)) goto loc_002B4447; /* je: equal / zero */

loc_002B439E: ;
    (void)0; /* cmp MEM8(esi + 0xC), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esi + 8);
    if (CMP_BE(eax, 1)) goto loc_002B43B2; /* jbe: below or equal (unsigned <=) */

loc_002B43A9: ;
    eax--;
    MEM32(esi + 8) = eax;
    goto loc_002B4447;

loc_002B43B2: ;
    if (CMP_NE(MEM8(0x770FA8), LO8(ebx))) goto loc_002B4447; /* jne: not equal / not zero */

loc_002B43BE: ;
    edi = MEM32(esi + 0x24);
    if (CMP_EQ(edi, ebx)) goto loc_002B43CD; /* je: equal / zero */

loc_002B43C5: ;
    PUSH32(esp, 0); sub_0009A3B0(); /* call 0x0009A3B0 */

loc_002B43CA: ;
    MEM32(esi + 0x24) = ebx;

loc_002B43CD: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002B43D6: ;
    if (TEST_NZ(eax, eax)) goto loc_002B4407; /* jne: not equal / not zero */

loc_002B43DA: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_002B4407; /* je: equal / zero */

loc_002B43E1: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002B4401: ;
    esp = esp + 4;
    MEM32(esi + 0x10) = ebx;

loc_002B4407: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_002B4415; /* je: equal / zero */

loc_002B4413: ;
    MEM32(eax) = ecx;

loc_002B4415: ;
    PUSH32(esp, esi);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002B4420: ;
    if (TEST_NZ(eax, eax)) goto loc_002B4447; /* jne: not equal / not zero */

loc_002B4424: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002B4444: ;
    esp = esp + 4;

loc_002B4447: ;
    esi = MEM32(esp + 0x14);
    MEM32(ebp) = ebx;

loc_002B444E: ;
    eax = MEM32(esp + 0x10);
    ebp = ebp + 4;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_002B4350; /* jne: not equal / not zero */

loc_002B4460: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x46 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) { sub_002B4477(); return; } /* jne: not equal / not zero */

loc_002B446C: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_00099E50(); return; /* tail jmp 0x00099E50 */

}

/**
 * sub_002B4480
 * Original: 0x002B4480 - 0x002B4498 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4480(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B4480: ;
    SET_LO8(eax, MEM8(ecx + 0x3A9));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002B4498(); return; } /* je: equal / zero */

loc_002B448A: ;
    ecx = MEM32(ecx + 0x50C);
    eax = ZX8(LO8(eax));
    eax = MEM32(ecx + eax * 4 + -4);
    esp += 4; return; /* ret */

}

/**
 * sub_002B44B0
 * Original: 0x002B44B0 - 0x002B4567 (183 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B44B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002B44B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C30C0(); /* call 0x001C30C0 */

loc_002B44B6: ;
    eax = MEM32(esi + 0x68);
    esp = esp + 4;
    eax = eax - 0x40;
    if ((eax == 0)) goto loc_002B454B; /* je: equal / zero */

loc_002B44C5: ;
    eax = eax - 0x54;
    if ((eax == 0)) goto loc_002B44E5; /* je: equal / zero */

loc_002B44CA: ;
    eax = eax - 0x100;
    if ((eax != 0)) goto loc_002B4566; /* jne: not equal / not zero */

loc_002B44D5: ;
    PUSH32(esp, 0x5F4174);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002B44E1: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_002B44E5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002B44EA: ;
    eax = MEM32(esi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002B4566; /* je: equal / zero */

loc_002B44F4: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002B44FE: ;
    if (TEST_Z(eax, eax)) goto loc_002B4566; /* je: equal / zero */

loc_002B4502: ;
    ecx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm0; /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax + 0xE8) - sets EFLAGS */
    MEMF(eax + 0x1CC) = xmm1; /* movss */
    if ((xmm0 > MEMF(eax + 0xE8))) goto loc_002B453A; /* ja: above (unsigned >) */

loc_002B4529: ;
    xmm1 = xmm1 - MEMF(0x648D2C); /* subss */
    MEMF(eax + 0x1D0) = xmm1; /* movss */
    esp += 4; return; /* ret */

loc_002B453A: ;
    xmm1 = xmm1 + MEMF(0x648D2C); /* addss */
    MEMF(eax + 0x1D0) = xmm1; /* movss */
    esp += 4; return; /* ret */

loc_002B454B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    edx = 4;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002B4563: ;
    esp = esp + 0x18;

loc_002B4566: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4570
 * Original: 0x002B4570 - 0x002B457B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4570(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B4570: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_002B457B(); return; } /* jne: not equal / not zero */

loc_002B4575: ;
    eax = 0x587BE4;
    esp += 4; return; /* ret */

}

/**
 * sub_002B45B0
 * Original: 0x002B45B0 - 0x002B45E7 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B45B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B45B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(0x6CB4EC));
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_002B45E1; /* jle: less or equal (signed <=) */

loc_002B45C2: ;
    PUSH32(esp, 0); sub_000867A0(); /* call 0x000867A0 */

loc_002B45C7: ;
    goto loc_002B45D0;

    /* nop */

loc_002B45D0: ;
    ecx = ZX16(MEM16(esi * 2 + 0x6CB480));
    if (CMP_EQ(ecx, eax)) { sub_002B45E7(); return; } /* je: equal / zero */

loc_002B45DC: ;
    esi++;
    if (CMP_L(esi, edi)) goto loc_002B45D0; /* jl: less (signed <) */

loc_002B45E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B45F0
 * Original: 0x002B45F0 - 0x002B48DE (750 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B45F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B45F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    /* nop */

loc_002B4600: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + edi), LO8(ebx))) goto loc_002B461F; /* je: equal / zero */

loc_002B460A: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, 1);
    edx = esi + ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_002B461C: ;
    esp = esp + 0xC;

loc_002B461F: ;
    esi = esi + 0x6D0;
    edi++;
    if (CMP_L(esi, 0x36800)) goto loc_002B4600; /* jl: less (signed <) */

loc_002B462E: ;
    eax = MEM32(0x84A1A0);
    if (CMP_EQ(eax, ebx)) goto loc_002B4673; /* je: equal / zero */

loc_002B4637: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002B463D: ;
    if (TEST_NZ(eax, eax)) goto loc_002B4673; /* jne: not equal / not zero */

loc_002B4641: ;
    eax = MEM32(0x84A1A0);
    if (CMP_EQ(eax, ebx)) goto loc_002B4673; /* je: equal / zero */

loc_002B464A: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002B466A: ;
    esp = esp + 4;
    MEM32(0x84A1A0) = ebx;

loc_002B4673: ;
    eax = MEM32(0x84A1A8);
    if (CMP_EQ(eax, ebx)) goto loc_002B46B8; /* je: equal / zero */

loc_002B467C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002B4682: ;
    if (TEST_NZ(eax, eax)) goto loc_002B46B8; /* jne: not equal / not zero */

loc_002B4686: ;
    eax = MEM32(0x84A1A8);
    if (CMP_EQ(eax, ebx)) goto loc_002B46B8; /* je: equal / zero */

loc_002B468F: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002B46AF: ;
    esp = esp + 4;
    MEM32(0x84A1A8) = ebx;

loc_002B46B8: ;
    eax = MEM32(0x84A1A4);
    if (CMP_EQ(eax, ebx)) goto loc_002B46FD; /* je: equal / zero */

loc_002B46C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002B46C7: ;
    if (TEST_NZ(eax, eax)) goto loc_002B46FD; /* jne: not equal / not zero */

loc_002B46CB: ;
    eax = MEM32(0x84A1A4);
    if (CMP_EQ(eax, ebx)) goto loc_002B46FD; /* je: equal / zero */

loc_002B46D4: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002B46F4: ;
    esp = esp + 4;
    MEM32(0x84A1A4) = ebx;

loc_002B46FD: ;
    eax = MEM32(0x84A1B0);
    if (CMP_EQ(eax, ebx)) goto loc_002B4742; /* je: equal / zero */

loc_002B4706: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002B470C: ;
    if (TEST_NZ(eax, eax)) goto loc_002B4742; /* jne: not equal / not zero */

loc_002B4710: ;
    eax = MEM32(0x84A1B0);
    if (CMP_EQ(eax, ebx)) goto loc_002B4742; /* je: equal / zero */

loc_002B4719: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002B4739: ;
    esp = esp + 4;
    MEM32(0x84A1B0) = ebx;

loc_002B4742: ;
    eax = MEM32(0x84A1B4);
    if (CMP_EQ(eax, ebx)) goto loc_002B4787; /* je: equal / zero */

loc_002B474B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002B4751: ;
    if (TEST_NZ(eax, eax)) goto loc_002B4787; /* jne: not equal / not zero */

loc_002B4755: ;
    eax = MEM32(0x84A1B4);
    if (CMP_EQ(eax, ebx)) goto loc_002B4787; /* je: equal / zero */

loc_002B475E: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002B477E: ;
    esp = esp + 4;
    MEM32(0x84A1B4) = ebx;

loc_002B4787: ;
    ecx = MEM32(0x84A604);
    if (CMP_EQ(ecx, ebx)) goto loc_002B47D2; /* je: equal / zero */

loc_002B4791: ;
    eax = MEM32(ecx);
    edx = eax;
    edx = edx & 0xFFFF;
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    edi = ecx;
    if (CMP_NE(edx, 1)) goto loc_002B47CA; /* jne: not equal / not zero */

loc_002B47A2: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_002B47BB; /* jne: not equal / not zero */

loc_002B47AE: ;
    ecx = MEM32(ecx + 0x14);
    if (CMP_EQ(ecx, ebx)) goto loc_002B47BB; /* je: equal / zero */

loc_002B47B5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_002B47BB: ;
    if (TEST_NZ(MEM32(edi), 0x780000)) goto loc_002B47CA; /* jne: not equal / not zero */

loc_002B47C3: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_002B47C8: ;
    goto loc_002B47CC;

loc_002B47CA: ;
    MEM32(edi) = MEM32(edi) - 1;

loc_002B47CC: ;
    MEM32(0x84A604) = ebx;

loc_002B47D2: ;
    ecx = MEM32(0x84A608);
    if (CMP_EQ(ecx, ebx)) goto loc_002B481D; /* je: equal / zero */

loc_002B47DC: ;
    eax = MEM32(ecx);
    edx = eax;
    edx = edx & 0xFFFF;
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    edi = ecx;
    if (CMP_NE(edx, 1)) goto loc_002B4815; /* jne: not equal / not zero */

loc_002B47ED: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_002B4806; /* jne: not equal / not zero */

loc_002B47F9: ;
    ecx = MEM32(ecx + 0x14);
    if (CMP_EQ(ecx, ebx)) goto loc_002B4806; /* je: equal / zero */

loc_002B4800: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_002B4806: ;
    if (TEST_NZ(MEM32(edi), 0x780000)) goto loc_002B4815; /* jne: not equal / not zero */

loc_002B480E: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_002B4813: ;
    goto loc_002B4817;

loc_002B4815: ;
    MEM32(edi) = MEM32(edi) - 1;

loc_002B4817: ;
    MEM32(0x84A608) = ebx;

loc_002B481D: ;
    if (CMP_EQ(MEM32(0x84A1AC), ebx)) goto loc_002B48D6; /* je: equal / zero */

loc_002B4829: ;
    SET_LO8(eax, MEM8(0x7FAA9D));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_BE(LO8(eax), LO8(ebx))) goto loc_002B4893; /* jbe: below or equal (unsigned <=) */

loc_002B4835: ;
    edi = 0; /* xor self */
    goto loc_002B4840;

    /* nop */

loc_002B4840: ;
    eax = MEM32(0x84A1AC);
    esi = edi + eax + 0x50;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_002B4884; /* je: equal / zero */

loc_002B484F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002B4855: ;
    if (TEST_NZ(eax, eax)) goto loc_002B4884; /* jne: not equal / not zero */

loc_002B4859: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_002B4884; /* je: equal / zero */

loc_002B485F: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002B487F: ;
    esp = esp + 4;
    MEM32(esi) = ebx;

loc_002B4884: ;
    ecx = ZX8(MEM8(0x7FAA9D));
    ebp++;
    edi = edi + 0x54;
    if (CMP_L(ebp, ecx)) goto loc_002B4840; /* jl: less (signed <) */

loc_002B4893: ;
    edx = MEM32(0x84A1AC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002B489F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_NZ(eax, eax)) goto loc_002B48D0; /* jne: not equal / not zero */

loc_002B48A4: ;
    eax = MEM32(0x84A1AC);
    if (CMP_EQ(eax, ebx)) goto loc_002B48D0; /* je: equal / zero */

loc_002B48AD: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002B48CD: ;
    esp = esp + 4;

loc_002B48D0: ;
    MEM32(0x84A1AC) = ebx;

loc_002B48D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0017D980(); return; /* tail jmp 0x0017D980 */

}

/**
 * sub_002B48E0
 * Original: 0x002B48E0 - 0x002B4B76 (662 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B48E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B48E0: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_002B48F6; /* jne: not equal / not zero */

loc_002B48F1: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002B48F6: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002B4946; /* je: equal / zero */

loc_002B491C: ;
    if (CMP_B(MEM32(esi + 0x80), 0x680)) goto loc_002B4946; /* jb: below (unsigned <) */

loc_002B4928: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002B4932: ;
    PUSH32(esp, 0x680);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002B493D: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_002B4968; /* jne: not equal / not zero */

loc_002B4946: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002B4958: ;
    PUSH32(esp, 0x680);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002B4963: ;
    esp = esp + 8;
    edi = eax;

loc_002B4968: ;
    MEM32(ebp + 0x568) = edi;
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = 0; /* xor self */
    ebx = ebx | 0xFFFFFFFFu;
    ecx = 0x1A0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x568);
    MEM16(eax + 0x498) = LO16(ebx);
    ecx = MEM32(ebp + 0x568);
    MEM16(ecx + 0x4AA) = LO16(ebx);
    edx = MEM32(ebp + 0x568);
    MEMF(edx + 0x2E8) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x2C3) = LO8(ebx);
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x3DC) = ebx;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x4E8) = ebx;
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x4EC) = ebx;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(ecx + 0x4F0) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x508) = 0;
    eax = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(eax + 0x500) = 0;
    ecx = MEM32(ebp + 0x568);
    MEMF(ecx + 0x504) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x4F4) = 0;
    eax = MEM32(ebp + 0x568);
    xmm1 = MEMF(0x648D14); /* movss */
    MEM8(eax + 0x4F5) = 0;
    ecx = MEM32(ebp + 0x568);
    MEMF(ecx + 0x50C) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x510) = 1;
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x518) = xmm1; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x474) = ebx;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x478) = ebx;
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x480) = ebx;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x484) = ebx;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x47C) = ebx;
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x638) = ebx;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(ecx + 0x4F8) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x4FC) = ebx;
    if (TEST_NZ(eax, eax)) goto loc_002B4AD6; /* jne: not equal / not zero */

loc_002B4AD1: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002B4AD6: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002B4B1E; /* je: equal / zero */

loc_002B4AFC: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_002B4B1E; /* jb: below (unsigned <) */

loc_002B4B05: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002B4B0F: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002B4B17: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002B4B3F; /* jne: not equal / not zero */

loc_002B4B1E: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002B4B30: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002B4B38: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_002B4B76(); return; } /* je: equal / zero */

loc_002B4B3F: ;
    POP32(esp, edi);
    MEM16(eax + 6) = LO16(ebx);
    MEM32(eax + 8) = ebx;
    MEM16(eax + 0x10) = LO16(ebx);
    MEM32(eax + 0x14) = ebx;
    MEM32(eax) = 0x63B638;
    MEM8(eax + 4) = 0;
    MEM32(eax + 0xC) = 0x1F;
    MEM32(eax + 0x18) = 0x11;
    ecx = MEM32(ebp + 0x568);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x648) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4B90
 * Original: 0x002B4B90 - 0x002B4C4C (188 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO16(eax, ZX8(MEM8(esi + 0x236)));
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002B4BA4: ;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x3F4) = eax;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x3F4);
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) { sub_002B4C4C(); return; } /* je: equal / zero */

loc_002B4BC7: ;
    eax = MEM32(esi + 0x64);
    if (CMP_NE(eax, 0x2E)) goto loc_002B4BD6; /* jne: not equal / not zero */

loc_002B4BCF: ;
    ecx = 0x10;
    goto loc_002B4BE5;

loc_002B4BD6: ;
    if (CMP_NE(eax, 0x42)) goto loc_002B4BE2; /* jne: not equal / not zero */

loc_002B4BDB: ;
    ecx = 0x10;
    goto loc_002B4BE5;

loc_002B4BE2: ;
    ecx = MEM32(ecx + 0x14);

loc_002B4BE5: ;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_002B4CE0(); /* call 0x002B4CE0 */

loc_002B4BED: ;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0x444);
    ecx = ZX8(MEM8(edx + 0x11));
    edx = MEM32(eax + 0xBC);
    esp = esp + 4;
    if (CMP_NE(edx, 1)) goto loc_002B4C23; /* jne: not equal / not zero */

loc_002B4C0B: ;
    edx = (uint32_t)(int32_t)SMEM8(0x86298E);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(edx * 4 + 0x59E810); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */

loc_002B4C23: ;
    MEM16(esi + 0x3B0) = LO16(ecx);
    MEM16(esi + 0x3AE) = LO16(ecx);
    eax = MEM32(eax + 0x444);
    SET_LO16(eax, ZX8(MEM8(eax + 0x12)));
    MEM16(esi + 0x3AC) = LO16(eax);
    MEM16(esi + 0x3AA) = LO16(eax);
    g_seh_ebp = ebp; sub_002B4C6D(); return; /* tail jmp 0x002B4C6D */

}

/**
 * sub_002B4CE0
 * Original: 0x002B4CE0 - 0x002B4DAA (202 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4CE0: ;
    esp = esp - 0x110;
    eax = MEM32(0x863D04);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x118);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, esi);
    SET_LO8(eax, (CMP_EQ(eax, 3)) ? 1 : 0); /* sete */
    MEM8(esp + 8) = LO8(eax);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0032D650(); /* call 0x0032D650 */

loc_002B4D0B: ;
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x444) = eax;
    eax = MEM32(0x84A19C);
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_002B4D28; /* jne: not equal / not zero */

loc_002B4D23: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002B4D28: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002B4D70; /* je: equal / zero */

loc_002B4D4E: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_002B4D70; /* jb: below (unsigned <) */

loc_002B4D57: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002B4D61: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002B4D69: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002B4D91; /* jne: not equal / not zero */

loc_002B4D70: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002B4D82: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002B4D8A: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_002B4DAA(); return; } /* je: equal / zero */

loc_002B4D91: ;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    edx = eax + 0xC;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    g_seh_ebp = ebp; sub_002B4DAC(); return; /* tail jmp 0x002B4DAC */

}

/**
 * sub_002B4E20
 * Original: 0x002B4E20 - 0x002B4E2E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4E20: ;
    eax = 0; /* xor self */
    if (CMP_NE(ecx, 0xFFFF)) { sub_002B4E2E(); return; } /* jne: not equal / not zero */

loc_002B4E2A: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_002B4E6B(); return; /* tail jmp 0x002B4E6B */

}

/**
 * sub_002B4E90
 * Original: 0x002B4E90 - 0x002B4EBE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B4E90: ;
    edx = MEM32(0x84A5FC);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    eax = 0; /* xor self */
    ecx = esi + 0x68;

loc_002B4EA2: ;
    if (CMP_EQ(MEM8(edx + eax), 0)) goto loc_002B4EAC; /* je: equal / zero */

loc_002B4EA8: ;
    if (CMP_EQ(MEM32(ecx), edi)) { sub_002B4EBE(); return; } /* je: equal / zero */

loc_002B4EAC: ;
    eax++;
    ecx = ecx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_002B4EA2; /* jl: less (signed <) */

loc_002B4EBA: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002B4ED0
 * Original: 0x002B4ED0 - 0x002B4EDC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B4ED0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002B4EDC(); return; } /* je: equal / zero */

loc_002B4ED9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4EF0
 * Original: 0x002B4EF0 - 0x002B4F0D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B4EF0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, 0x608328);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B4EFF: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) { sub_002B4F0D(); return; } /* jne: not equal / not zero */

loc_002B4F08: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4F70
 * Original: 0x002B4F70 - 0x002B5003 (147 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4F70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4F70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002B4F7D: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x54);
    ebp = eax;
    eax = MEM32(0x84A1AC);
    ebx = 0; /* xor self */
    MEM8(esi + eax + 0xA) = LO8(ebx);
    PUSH32(esp, 7);
    eax = edi;
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002B4F98: ;
    ecx = MEM32(0x84A1AC);
    MEM32(esi + ecx + 0x10) = eax;
    PUSH32(esp, 8);
    eax = edi;
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002B4FAB: ;
    esp = esp + 0xC;
    if (CMP_EQ(eax, ebx)) { sub_002B5003(); return; } /* je: equal / zero */

loc_002B4FB2: ;
    xmm0 = MEMF(eax + 0x20); /* movss */
    edx = MEM32(0x84A1AC);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esi + edx + 0x34) = xmm0; /* movss */
    ecx = MEM32(0x84A1AC);
    edx = MEM32(esi + ecx + 0x34);
    MEM32(esi + ecx + 0x30) = edx;
    ecx = MEM32(eax + 0x34);
    edx = MEM32(0x84A1AC);
    eax = eax + 0x34;
    MEM32(esi + edx + 0x10) = ecx;
    ecx = MEM32(0x84A1AC);
    MEM32(esi + ecx + 0x44) = 3;
    edx = MEM32(0x84A1AC);
    MEM32(esi + edx + 0x48) = eax;
    g_seh_ebp = ebp; sub_002B5016(); return; /* tail jmp 0x002B5016 */

}

/**
 * sub_002B51C0
 * Original: 0x002B51C0 - 0x002B52D3 (275 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B51C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B51C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, 0); sub_00243B20(); /* call 0x00243B20 */

loc_002B51D2: ;
    ebx = eax;
    esp = esp + 4;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_002B52CE; /* je: equal / zero */

loc_002B51E0: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    eax = eax << 6;
    eax = eax + 0x777ED0;
    PUSH32(esp, 0xD);
    MEM8(esi + 0x849894) = 0xFD;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002B51FE: ;
    SET_LO8(eax, MEM8(0x876758));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), 1)) goto loc_002B521B; /* jne: not equal / not zero */

loc_002B520A: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_002B521B: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B522D; /* jne: not equal / not zero */

loc_002B5224: ;
    if (CMP_EQ(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_002B523B; /* je: equal / zero */

loc_002B522D: ;
    SET_LO8(eax, MEM8(0x876754));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x876478;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B5240; /* je: equal / zero */

loc_002B523B: ;
    eax = 0x8761EC;

loc_002B5240: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax + 0x288);
    ecx = ecx | edx;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(eax + 0x288) = ecx;
    eax = ebx;
    if (CMP_GE(ebx & ebx, 0)) goto loc_002B525F; /* jge: greater or equal (signed >=) */

loc_002B525D: ;
    eax = 0; /* xor self */

loc_002B525F: ;
    eax = eax << 6;
    eax = eax + 0x777ED0;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esi * 4 + 0x800408) = eax;
    eax = ebx;
    if (CMP_GE(ebx & ebx, 0)) goto loc_002B5276; /* jge: greater or equal (signed >=) */

loc_002B5274: ;
    eax = 0; /* xor self */

loc_002B5276: ;
    eax = eax << 6;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(eax, MEM8(eax + 0x777EE0));
    MEM8(esi + 0x800488) = LO8(eax);
    if (CMP_GE(ebx & ebx, 0)) goto loc_002B528B; /* jge: greater or equal (signed >=) */

loc_002B5289: ;
    ebx = 0; /* xor self */

loc_002B528B: ;
    ebx = ebx << 6;
    ecx = MEM32(ebx + 0x777F04);
    eax = esi;
    MEM32(esi * 4 + 0x800448) = ecx;
    PUSH32(esp, 0); sub_0032D230(); /* call 0x0032D230 */

loc_002B52A2: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    edx = esp + 0x10;
    esi = 0x8629AC;
    if (TEST_Z(edi, edi)) goto loc_002B52B8; /* je: equal / zero */

loc_002B52B3: ;
    esi = 0x86299C;

loc_002B52B8: ;
    PUSH32(esp, 0); sub_00244D20(); /* call 0x00244D20 */

loc_002B52BD: ;
    eax = 0x8626F8;
    PUSH32(esp, 0); sub_0023B2C0(); /* call 0x0023B2C0 */

loc_002B52C7: ;
    MEM8(0x6BCFEB) = MEM8(0x6BCFEB) + 1;
    POP32(esp, esi);

loc_002B52CE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B52E0
 * Original: 0x002B52E0 - 0x002B5430 (336 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B52E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B52E0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, 0x48 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(eax, 0x48)) goto loc_002B53FF; /* jne: not equal / not zero */

loc_002B52FA: ;
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    edx = 0x86299C;
    PUSH32(esp, 0); sub_00068500(); /* call 0x00068500 */

loc_002B5307: ;
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    edx = 0x8629AC;
    PUSH32(esp, 0); sub_00068500(); /* call 0x00068500 */

loc_002B5314: ;
    eax = 0x8626F8;
    PUSH32(esp, 0); sub_0023B2C0(); /* call 0x0023B2C0 */

loc_002B531E: ;
    eax = MEM32(0x6BD92C);
    ecx = 1;
    MEM32(eax + 4) = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B5338: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B5346: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B5354: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B5362: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B5370: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B537E: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B538C: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B539A: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B53A8: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B53B6: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B53C4: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B53D2: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B53E0: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B53EE: ;
    ecx = 1;
    PUSH32(esp, 2);
    eax = ecx;
    PUSH32(esp, 0); sub_002B51C0(); /* call 0x002B51C0 */

loc_002B53FC: ;
    esp = esp + 0x3C;

loc_002B53FF: ;
    edx = MEM32(0x7FA1F8);
    eax = 0; /* xor self */
    ecx = 0x102;
    edi = 0x770390;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    SET_LO8(ecx, MEM8(0x7819D5));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002B5424; /* jne: not equal / not zero */

loc_002B541F: ;
    if (CMP_NE(edx, 0x48)) { sub_002B5430(); return; } /* jne: not equal / not zero */

loc_002B5424: ;
    MEM32(esp + 0x14) = 0x6CC338;
    SET_LO8(eax, 0x20);
    g_seh_ebp = ebp; sub_002B543A(); return; /* tail jmp 0x002B543A */

}

/**
 * sub_002B56B0
 * Original: 0x002B56B0 - 0x002B5837 (391 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B56B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B56B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAA9D));
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x340);
    edi = esi * 4;
    PUSH32(esp, 0x6082F0);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002B56D6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x342);
    PUSH32(esp, 0x6082F0);
    PUSH32(esp, esi);
    MEM32(0x84A1A0) = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002B56ED: ;
    ecx = edi;
    edi = MEM32(0x84A1A0);
    edx = ecx;
    ecx = ecx >> 2;
    MEM32(0x84A1A8) = eax;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(0x84A1A8);
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    esp = esp + 0x20;
    (void)0; /* cmp ebx, 0x4B - flags set for next jcc */
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    if (CMP_GE(ebx, 0x4B)) goto loc_002B580F; /* jge: greater or equal (signed >=) */

loc_002B572E: ;
    ebx = MEM32(ebx * 4 + 0x742258);
    if (TEST_Z(ebx, ebx)) goto loc_002B580F; /* je: equal / zero */

loc_002B573D: ;
    eax = ZX8(MEM8(0x7FAA9D));
    ecx = ZX8(MEM8(0x7FAA9C));
    eax = eax - MEM32(0x7FAAA0);
    esi = 0; /* xor self */
    if (CMP_GE(ecx, eax)) goto loc_002B576E; /* jge: greater or equal (signed >=) */

loc_002B5757: ;
    edx = ecx;
    edx = edx - ecx;
    edx = ebx + edx * 8;
    eax = eax - ecx;

loc_002B5760: ;
    if (CMP_EQ(MEM32(edx), 0)) goto loc_002B5768; /* je: equal / zero */

loc_002B5765: ;
    esi = esi + MEM32(edx + 4);

loc_002B5768: ;
    edx = edx + 8;
    eax--;
    if ((eax != 0)) goto loc_002B5760; /* jne: not equal / not zero */

loc_002B576E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35F);
    eax = esi * 8;
    PUSH32(esp, 0x6082F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002B5787: ;
    ecx = ZX8(MEM8(0x7FAA9D));
    edi = MEM32(0x7FAAA0);
    MEM32(0x84A1A4) = eax;
    edx = eax;
    eax = ZX8(MEM8(0x7FAA9C));
    ecx = ecx - edi;
    esp = esp + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_GE(eax, ecx)) goto loc_002B580F; /* jge: greater or equal (signed >=) */

loc_002B57AF: ;
    esi = eax;
    esi = esi - eax;
    PUSH32(esp, ebp);
    ebp = ebx + esi * 8;
    esi = MEM32(0x84A1A8);
    /* nop */

loc_002B57C0: ;
    if (CMP_EQ(MEM32(ebp), 0)) goto loc_002B5806; /* je: equal / zero */

loc_002B57C6: ;
    SET_LO8(ecx, MEM8(ebp + 4));
    MEM8(esi + eax) = LO8(ecx);
    ecx = MEM32(0x84A1A8);
    ecx = ZX8(MEM8(ecx + eax));
    esi = MEM32(ebp);
    ecx = ecx << 3;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(0x84A1A0);
    MEM32(ecx + eax * 4) = edx;
    esi = MEM32(0x84A1A8);
    ecx = ZX8(MEM8(esi + eax));
    edx = edx + ecx * 8;
    ecx = MEM32(esp + 0x10);

loc_002B5806: ;
    eax++;
    ebp = ebp + 8;
    if (CMP_L(eax, ecx)) goto loc_002B57C0; /* jl: less (signed <) */

loc_002B580E: ;
    POP32(esp, ebp);

loc_002B580F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002B5837(); return; } /* je: equal / zero */

loc_002B581B: ;
    eax = 0; /* xor self */
    /* nop */

loc_002B5820: ;
    edx = MEM32(0x84A1A0);
    MEM32(eax + edx) = 1;
    eax = eax + 4;
    if (CMP_L(eax, 0x40)) goto loc_002B5820; /* jl: less (signed <) */

loc_002B5835: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5850
 * Original: 0x002B5850 - 0x002B5865 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5850(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B5850: ;
    PUSH32(esp, 0x6082EC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B585B: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002B5864; /* jne: not equal / not zero */

loc_002B5862: ;
    eax = esi;

loc_002B5864: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5870
 * Original: 0x002B5870 - 0x002B594D (221 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5870: ;
    xmm0 = MEMF(0x648D10); /* movss */
    esp = esp - 0x28;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    SET_LO8(ecx, 0x28);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    MEM8(ebp + 0x2C) = LO8(ecx);
    MEM8(ebp + 0x2D) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x3C));
    PUSH32(esp, 0x6082E0);
    PUSH32(esp, edi);
    MEM16(ebp + 8) = 0x20;
    MEM8(ebp + 0x1A) = 0;
    MEM8(ebp + 0x1B) = 1;
    MEM8(ebp + 0x1C) = 1;
    MEM8(ebp + 0x1D) = 4;
    MEM16(ebp + 0x1E) = 9;
    MEM8(ebp + 0x20) = 0;
    MEM8(ebp + 0x21) = 0;
    MEM8(ebp + 0x22) = 0;
    MEM16(ebp + 0x24) = LO16(eax);
    MEM32(ebp + 0x28) = 0x243;
    MEMF(ebp + 0x30) = xmm0; /* movss */
    MEMF(ebp + 0x34) = xmm0; /* movss */
    MEM8(ebp + 0x38) = LO8(ecx);
    MEM16(ebp + 0x3A) = LO16(eax);
    MEM16(ebp + 0x3C) = LO16(eax);
    MEM16(ebp + 0x3E) = LO16(eax);
    MEM8(ebp + 0x40) = LO8(eax);
    MEM8(ebp + 0x41) = LO8(eax);
    MEM8(ebp + 0xA) = LO8(eax);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B58F2: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_002B594D(); return; } /* jne: not equal / not zero */

loc_002B58F9: ;
    PUSH32(esp, 0x6082D8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B5904: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_002B594D(); return; } /* jne: not equal / not zero */

loc_002B590B: ;
    PUSH32(esp, 0x6082D4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B5916: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_002B594D(); return; } /* jne: not equal / not zero */

loc_002B591D: ;
    PUSH32(esp, 0x6082CC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B5928: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002B5947; /* jne: not equal / not zero */

loc_002B592F: ;
    PUSH32(esp, 0x6082C8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B593A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002B5947; /* jne: not equal / not zero */

loc_002B5941: ;
    MEM8(ebp + 0x42) = 2;
    g_seh_ebp = ebp; sub_002B5951(); return; /* tail jmp 0x002B5951 */

loc_002B5947: ;
    MEM8(ebp + 0x42) = 0;
    g_seh_ebp = ebp; sub_002B5951(); return; /* tail jmp 0x002B5951 */

}

/**
 * sub_002B65F0
 * Original: 0x002B65F0 - 0x002B6689 (153 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B65F0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_002B65F0: ;
    eax = MEM32(0x76FE00);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FAAA0) = 0;
    if (TEST_Z(eax, eax)) goto loc_002B6688; /* je: equal / zero */

loc_002B6607: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    /* nop */

loc_002B6610: ;
    eax = MEM32(0x76FE00);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002B6620; /* je: equal / zero */

loc_002B661C: ;
    ecx = MEM32(eax);
    goto loc_002B6622;

loc_002B6620: ;
    ecx = 0; /* xor self */

loc_002B6622: ;
    if (CMP_GE(edi, ecx)) goto loc_002B665B; /* jge: greater or equal (signed >=) */

loc_002B6626: ;
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_002B663D; /* je: equal / zero */

loc_002B662C: ;
    if (TEST_S(esi, esi)) goto loc_002B663D; /* jl: less (signed <) */

loc_002B6630: ;
    if (CMP_AE(edi, MEM32(eax))) goto loc_002B663D; /* jae: above or equal (unsigned >=) */

loc_002B6634: ;
    eax = MEM32(eax + 4);
    eax = eax + esi;
    if ((eax == 0)) goto loc_002B663D; /* je: equal / zero */

loc_002B663B: ;
    ecx = MEM32(eax);

loc_002B663D: ;
    PUSH32(esp, 0x607EEC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6648: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B6655; /* je: equal / zero */

loc_002B664F: ;
    MEM32(0x7FAAA0) = MEM32(0x7FAAA0) + 1;

loc_002B6655: ;
    edi++;
    esi = esi + 0xC;
    goto loc_002B6610;

loc_002B665B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6688; /* je: equal / zero */

loc_002B6666: ;
    ecx = MEM32(0x6BD92C);
    eax = MEM32(ecx + 4);
    ecx = MEM32(0x7FAAA0);
    eax--;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax + 6;
    ecx = ecx + eax;
    ecx = ecx + 7;
    MEM32(0x7FAAA0) = ecx;

loc_002B6688: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B6690
 * Original: 0x002B6690 - 0x002B691E (654 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6690(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B6690: ;
    ecx = MEM32(0x6BD92C);
    if (CMP_NE(MEM32(ecx + 4), 1)) goto loc_002B67E1; /* jne: not equal / not zero */

loc_002B66A0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B66D2; /* je: equal / zero */

loc_002B66A4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B66AB: ;
    PUSH32(esp, eax);
    eax = 0x5FB428;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B66BB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B66C2: ;
    PUSH32(esp, eax);
    eax = 0x5FB4D0;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B66D2: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002B6704; /* je: equal / zero */

loc_002B66D6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B66DD: ;
    PUSH32(esp, eax);
    eax = 0x5FB47C;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B66ED: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B66F4: ;
    PUSH32(esp, eax);
    eax = 0x5FB52C;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6704: ;
    SET_LO8(eax, MEM8(esp + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B673A; /* je: equal / zero */

loc_002B670C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6713: ;
    PUSH32(esp, eax);
    eax = 0x5FB40C;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6723: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B672A: ;
    PUSH32(esp, eax);
    eax = 0x5FB4B4;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B673A: ;
    SET_LO8(eax, MEM8(esp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6770; /* je: equal / zero */

loc_002B6742: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6749: ;
    PUSH32(esp, eax);
    eax = 0x5FB45C;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6759: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6760: ;
    PUSH32(esp, eax);
    eax = 0x5FB50C;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6770: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B67A6; /* je: equal / zero */

loc_002B6778: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B677F: ;
    PUSH32(esp, eax);
    eax = 0x5FB440;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B678F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6796: ;
    PUSH32(esp, eax);
    eax = 0x5FB4EC;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B67A6: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B691D; /* je: equal / zero */

loc_002B67B2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B67B9: ;
    PUSH32(esp, eax);
    eax = 0x5FB3F4;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B67C9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B67D0: ;
    PUSH32(esp, eax);
    eax = 0x5FB498;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B67E0: ;
    esp += 4; return; /* ret */

loc_002B67E1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6813; /* je: equal / zero */

loc_002B67E5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B67EC: ;
    PUSH32(esp, eax);
    eax = 0x5FB2A8;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B67FC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6803: ;
    PUSH32(esp, eax);
    eax = 0x5FB368;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6813: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002B6845; /* je: equal / zero */

loc_002B6817: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B681E: ;
    PUSH32(esp, eax);
    eax = 0x5FB308;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B682E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6835: ;
    PUSH32(esp, eax);
    eax = 0x5FB3D0;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6845: ;
    SET_LO8(eax, MEM8(esp + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B687B; /* je: equal / zero */

loc_002B684D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6854: ;
    PUSH32(esp, eax);
    eax = 0x5FB288;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6864: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B686B: ;
    PUSH32(esp, eax);
    eax = 0x5FB348;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B687B: ;
    SET_LO8(eax, MEM8(esp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B68B1; /* je: equal / zero */

loc_002B6883: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B688A: ;
    PUSH32(esp, eax);
    eax = 0x5FB2E4;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B689A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B68A1: ;
    PUSH32(esp, eax);
    eax = 0x5FB3AC;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B68B1: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B68E7; /* je: equal / zero */

loc_002B68B9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B68C0: ;
    PUSH32(esp, eax);
    eax = 0x5FB2C4;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B68D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B68D7: ;
    PUSH32(esp, eax);
    eax = 0x5FB388;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B68E7: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B691D; /* je: equal / zero */

loc_002B68EF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B68F6: ;
    PUSH32(esp, eax);
    eax = 0x5FB26C;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6906: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B690D: ;
    PUSH32(esp, eax);
    eax = 0x5FB328;
    ecx = 0x607ECC;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B691D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B6920
 * Original: 0x002B6920 - 0x002B6B58 (568 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6920(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B6920: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6958; /* je: equal / zero */

loc_002B6925: ;
    edx = 0x6083F0;
    PUSH32(esp, 0); sub_00388A00(); /* call 0x00388A00 */

loc_002B692F: ;
    esi = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6941: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B694B: ;
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x607EE0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6958: ;
    SET_LO8(eax, MEM8(esp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6993; /* je: equal / zero */

loc_002B6960: ;
    edx = 0x6083CC;
    PUSH32(esp, 0); sub_00388A00(); /* call 0x00388A00 */

loc_002B696A: ;
    esi = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B697C: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6986: ;
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x607EE0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6993: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B69CE; /* je: equal / zero */

loc_002B699B: ;
    edx = 0x6083BC;
    PUSH32(esp, 0); sub_00388A00(); /* call 0x00388A00 */

loc_002B69A5: ;
    esi = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B69B7: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B69C1: ;
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x607EE0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B69CE: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6A09; /* je: equal / zero */

loc_002B69D6: ;
    edx = 0x6083DC;
    PUSH32(esp, 0); sub_00388A00(); /* call 0x00388A00 */

loc_002B69E0: ;
    esi = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B69F2: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B69FC: ;
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x607EE0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6A09: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6A4F; /* je: equal / zero */

loc_002B6A11: ;
    eax = MEM32(0x6BD92C);
    if (CMP_NE(MEM32(eax + 4), 1)) goto loc_002B6A4F; /* jne: not equal / not zero */

loc_002B6A1C: ;
    edx = 0x6083A8;
    PUSH32(esp, 0); sub_00388A00(); /* call 0x00388A00 */

loc_002B6A26: ;
    esi = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6A38: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6A42: ;
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x607EE0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6A4F: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6AAA; /* je: equal / zero */

loc_002B6A57: ;
    ecx = MEM32(0x6BD92C);
    (void)0; /* cmp MEM32(ecx + 4), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0x6CB648;
    if (CMP_EQ(MEM32(ecx + 4), 1)) goto loc_002B6A6F; /* je: equal / zero */

loc_002B6A6A: ;
    ebx = 0x6CB638;

loc_002B6A6F: ;
    esi = 0; /* xor self */

loc_002B6A71: ;
    edx = MEM32(ebx + esi * 4);
    PUSH32(esp, 0); sub_003B5B30(); /* call 0x003B5B30 */

loc_002B6A79: ;
    edi = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6A8B: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6A95: ;
    PUSH32(esp, eax);
    eax = edi;
    ecx = 0x607EE0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6AA2: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_002B6A71; /* jl: less (signed <) */

loc_002B6AA8: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002B6AAA: ;
    edx = MEM32(0x6CB658);
    PUSH32(esp, 0); sub_00388A00(); /* call 0x00388A00 */

loc_002B6AB5: ;
    esi = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6AC7: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6AD1: ;
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x607EE0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6ADE: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6B1A; /* je: equal / zero */

loc_002B6AE6: ;
    edx = MEM32(0x6CB65C);
    PUSH32(esp, 0); sub_00388A00(); /* call 0x00388A00 */

loc_002B6AF1: ;
    esi = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6B03: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6B0D: ;
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x607EE0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6B1A: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B6B56; /* je: equal / zero */

loc_002B6B22: ;
    edx = MEM32(0x6CB660);
    PUSH32(esp, 0); sub_00388A00(); /* call 0x00388A00 */

loc_002B6B2D: ;
    esi = MEM32(eax * 4 + 0x6A58F0);
    PUSH32(esp, 0x606A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6B3F: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002B6B49: ;
    PUSH32(esp, eax);
    eax = esi;
    ecx = 0x607EE0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002B6B56: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6B60
 * Original: 0x002B6B60 - 0x002B6DE0 (640 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6B60: ;
    esp = esp - 0xB0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x7FAAA0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_002B6DE0(); return; } /* je: equal / zero */

loc_002B6B79: ;
    edi = 0; /* xor self */
    edx = 0; /* xor self */

loc_002B6B7D: ;
    eax = MEM32(0x76FE00);
    eax = MEM32(eax + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(eax, eax)) goto loc_002B6B95; /* je: equal / zero */

loc_002B6B91: ;
    ecx = MEM32(eax);
    goto loc_002B6B97;

loc_002B6B95: ;
    ecx = 0; /* xor self */

loc_002B6B97: ;
    if (CMP_GE(edi, ecx)) { sub_002B6DE0(); return; } /* jge: greater or equal (signed >=) */

loc_002B6B9F: ;
    ebp = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_002B6BB6; /* je: equal / zero */

loc_002B6BA5: ;
    if (TEST_S(edx, edx)) goto loc_002B6BB6; /* jl: less (signed <) */

loc_002B6BA9: ;
    if (CMP_AE(edi, MEM32(eax))) goto loc_002B6BB6; /* jae: above or equal (unsigned >=) */

loc_002B6BAD: ;
    eax = MEM32(eax + 4);
    eax = eax + edx;
    if ((eax == 0)) goto loc_002B6BB6; /* je: equal / zero */

loc_002B6BB4: ;
    ebp = MEM32(eax);

loc_002B6BB6: ;
    PUSH32(esp, 0x607EEC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6BC1: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B6DCF; /* je: equal / zero */

loc_002B6BCC: ;
    ecx = esp + 0x40;
    edi = eax + 1;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_002B6BE0: ;
    eax = MEM32(0x84A1AC);
    ecx = esi;
    ecx = ecx - eax;
    eax = 0x30C30C31;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 4);
    ebx = edx;
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    edx = MEM32(esp + 0xC4);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_002B5870(); /* call 0x002B5870 */

loc_002B6C0A: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B6DC8; /* je: equal / zero */

loc_002B6C15: ;
    PUSH32(esp, 0x6080B0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6C20: ;
    PUSH32(esp, 0x608080);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B6C2B: ;
    eax = MEM32(0x76FE00);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002B6DC8; /* je: equal / zero */

loc_002B6C3B: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002B6DC8; /* je: equal / zero */

loc_002B6C46: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = ebp;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002B6C56: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002B6DC8; /* je: equal / zero */

loc_002B6C61: ;
    eax = MEM32(esp + 0x38);
    if (TEST_Z(eax, eax)) goto loc_002B6C7A; /* je: equal / zero */

loc_002B6C69: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_002B6DB6; /* je: equal / zero */

loc_002B6C74: ;
    MEM32(esp + 0x24) = eax;
    goto loc_002B6C7E;

loc_002B6C7A: ;
    eax = MEM32(esp + 0x24);

loc_002B6C7E: ;
    if (TEST_Z(eax, eax)) goto loc_002B6DC8; /* je: equal / zero */

loc_002B6C86: ;
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    PUSH32(esp, 0x76FE20);
    edx = esp + 0x30;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_002B6CB9: ;
    eax = MEM32(0x76FE00);
    if (TEST_Z(eax, eax)) goto loc_002B6DC8; /* je: equal / zero */

loc_002B6CC6: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002B6DC8; /* je: equal / zero */

loc_002B6CD1: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = ebp;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002B6CE1: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002B6DC8; /* je: equal / zero */

loc_002B6CEC: ;
    eax = MEM32(esp + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_002B6D05; /* je: equal / zero */

loc_002B6CF4: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_002B6DC0; /* je: equal / zero */

loc_002B6CFF: ;
    MEM32(esp + 0x28) = eax;
    goto loc_002B6D09;

loc_002B6D05: ;
    eax = MEM32(esp + 0x28);

loc_002B6D09: ;
    if (TEST_Z(eax, eax)) goto loc_002B6DC8; /* je: equal / zero */

loc_002B6D11: ;
    xmm0 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_002B6D43; /* jbe: below or equal (unsigned <=) */

loc_002B6D2C: ;
    /* nop */

loc_002B6D30: ;
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_002B6D30; /* ja: above (unsigned >) */

loc_002B6D3D: ;
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_002B6D43: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002B6D52: ;
    ecx = (int32_t)MEMF(esp + 0x34); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x2C); /* cvttss2si */
    MEM8(esi + 0x1A) = LO8(eax);
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    MEM16(esi + 0x18) = LO16(ecx);
    ecx = MEM32(esp + 0xC4);
    MEM16(esi + 0x16) = LO16(eax);
    eax = MEM32(esp + 0x14);
    MEM16(esi + 0x14) = LO16(edx);
    esi = esi + 0x54;
    ecx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC4) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_002B6DCF; /* jle: less or equal (signed <=) */

loc_002B6D8D: ;
    edi = MEM32(esp + 0x1C);
    ecx = eax;
    ecx--;
    edi = edi - 0x20;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edi;
    if ((edi != 0)) goto loc_002B6BE0; /* jne: not equal / not zero */

loc_002B6DA5: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    edi++;
    edx = edx + 0xC;
    goto loc_002B6B7D;

loc_002B6DB6: ;
    MEM32(esp + 0x24) = 0;
    goto loc_002B6DC8;

loc_002B6DC0: ;
    MEM32(esp + 0x28) = 0;

loc_002B6DC8: ;
    MEM8(esi + 0xA) = 1;
    esi = esi + 0x54;

loc_002B6DCF: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    edi++;
    edx = edx + 0xC;
    goto loc_002B6B7D;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B6F60
 * Original: 0x002B6F60 - 0x002B6FC1 (97 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6F60: ;
    SET_LO8(eax, MEM8(0x6BCFEB));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebp = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002B6FBE; /* jle: less or equal (signed <=) */

loc_002B6F6F: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);

loc_002B6F73: ;
    if (CMP_GE(esi, 4)) goto loc_002B6FBC; /* jge: greater or equal (signed >=) */

loc_002B6F78: ;
    eax = MEM32(0x84A5F8);
    edi = ebx + eax;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002B6FAA; /* je: equal / zero */

loc_002B6F8A: ;
    ecx = MEM32(eax + 0xBC);
    if (TEST_Z(ecx, ecx)) goto loc_002B6F9C; /* je: equal / zero */

loc_002B6F94: ;
    if (CMP_G(esi, MEM32(0x84A144))) goto loc_002B6FAA; /* jg: greater (signed >) */

loc_002B6F9C: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000420A0(); /* call 0x000420A0 */

loc_002B6FA6: ;
    esp = esp + 4;
    esi++;

loc_002B6FAA: ;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ebp++;
    ebx = ebx + 0x6D0;
    if (CMP_L(ebp, edx)) goto loc_002B6F73; /* jl: less (signed <) */

loc_002B6FBC: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002B6FBE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6FD0
 * Original: 0x002B6FD0 - 0x002B736D (925 bytes, 265 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6FD0: ;
    esp = esp - 0x74;
    ecx = MEM32(0x7FA1F8);
    (void)0; /* cmp ecx, 0x2B - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    MEM32(esp + 0x14) = 1;
    if (CMP_NE(ecx, 0x2B)) goto loc_002B6FFA; /* jne: not equal / not zero */

loc_002B6FEB: ;
    MEM32(esp + 0x14) = 0;
    MEM8(0x7FCB47) = 0;

loc_002B6FFA: ;
    edi = MEM32(esp + 0x84);
    if (CMP_EQ(edi, 0xFF)) goto loc_002B7052; /* je: equal / zero */

loc_002B7009: ;
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_002B702A; /* jne: not equal / not zero */

loc_002B700E: ;
    edx = MEM32(0x84A5F8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + edx + 0x568);
    edx = ZX8(MEM8(eax + 0x1FC));

loc_002B702A: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002B7052; /* je: equal / zero */

loc_002B7032: ;
    ebx = MEM32(0x84A5F8);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + ebx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002B7052; /* je: equal / zero */

loc_002B704B: ;
    MEM8(eax + 0x1FC) = 0;

loc_002B7052: ;
    ebx = MEM32(0x7FAAAC);
    edx = edx & 0xFFF;
    if (CMP_GE(edx, ebx)) goto loc_002B7066; /* jge: greater or equal (signed >=) */

loc_002B7062: ;
    if (CMP_GE(edx & edx, 0)) goto loc_002B7068; /* jge: greater or equal (signed >=) */

loc_002B7066: ;
    edx = 0; /* xor self */

loc_002B7068: ;
    eax = MEM32(0x84A220);
    if (TEST_Z(eax, eax)) { sub_002B736D(); return; } /* je: equal / zero */

loc_002B7075: ;
    (void)0; /* cmp MEM8(0x7819D5), 0 - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_NE(MEM8(0x7819D5), 0)) goto loc_002B7089; /* jne: not equal / not zero */

loc_002B707F: ;
    if (CMP_EQ(ecx, 0x48)) goto loc_002B7092; /* je: equal / zero */

loc_002B7084: ;
    goto loc_002B7216;

loc_002B7089: ;
    if (CMP_EQ(ecx, 0x47)) goto loc_002B7216; /* je: equal / zero */

loc_002B7092: ;
    ecx = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    edi = edi + ecx;
    SET_LO8(ecx, MEM8(0x7FCB47));
    MEM32(esp + 0x10) = edi;
    edi = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002B70BE; /* je: equal / zero */

loc_002B70B4: ;
    SET_LO8(ecx, MEM8(0x84A5E0));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002B712F; /* je: equal / zero */

loc_002B70BE: ;
    ecx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_002B7119; /* jle: less or equal (signed <=) */

loc_002B70C4: ;
    SET_LO8(edx, MEM8(0x864EBA));
    esi = eax + 0x17;
    /* nop */

loc_002B70D0: ;
    SET_LO8(eax, MEM8(esi));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_002B7103; /* jns: not sign (positive) */

loc_002B70D6: ;
    SET_LO8(eax, LO8(eax) & 0x7F);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002B70EC; /* je: equal / zero */

loc_002B70DC: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002B70EC; /* jbe: below or equal (unsigned <=) */

loc_002B70E0: ;
    SET_LO8(ebx, 3);
    SET_LO8(ebx, LO8(ebx) - LO8(eax));
    SET_LO8(eax, LO8(ebx));
    ebx = MEM32(0x7FAAAC);

loc_002B70EC: ;
    ebp = MEM32(esp + 0x10);
    ebp = MEM32(ebp + 0x238);
    eax = ZX8(LO8(eax));
    if (CMP_NE(eax, MEM32(ebp))) goto loc_002B7103; /* jne: not equal / not zero */

loc_002B70FE: ;
    MEM8(esp + edi + 0x20) = LO8(ecx);
    edi++;

loc_002B7103: ;
    ecx++;
    esi = esi + 0x18;
    if (CMP_L(ecx, ebx)) goto loc_002B70D0; /* jl: less (signed <) */

loc_002B710B: ;
    if (TEST_Z(edi, edi)) goto loc_002B7119; /* je: equal / zero */

loc_002B710F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002B7114: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    goto loc_002B711B;

loc_002B7119: ;
    edx = 0; /* xor self */

loc_002B711B: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x568);
    SET_LO8(ecx, MEM8(esp + edx + 0x20));
    MEM8(eax + 0x216) = LO8(ecx);

loc_002B712F: ;
    edi = MEM32(0x84A224);
    ebp = 0; /* xor self */
    edx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_002B71EA; /* jle: less or equal (signed <=) */

loc_002B7141: ;
    eax = MEM32(0x84A220);
    eax = eax + 0x17;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_002B7150: ;
    if (TEST_NZ(ebp, ebp)) goto loc_002B7178; /* jne: not equal / not zero */

loc_002B7154: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x568);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x216);
    if (CMP_NE(edx, ecx)) goto loc_002B71D3; /* jne: not equal / not zero */

loc_002B7169: ;
    MEM8(esp + 0x20) = LO8(edx);
    ebp = 1;
    MEM32(esp + 0x1C) = edi;
    goto loc_002B71D3;

loc_002B7178: ;
    esi = MEM32(esp + 0x1C);
    eax = edi;
    edi = edi;

loc_002B7180: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_002B71A4; /* jne: not equal / not zero */

loc_002B7188: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002B71A0; /* je: equal / zero */

loc_002B718C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_002B71A4; /* jne: not equal / not zero */

loc_002B7196: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002B7180; /* jne: not equal / not zero */

loc_002B71A0: ;
    eax = 0; /* xor self */
    goto loc_002B71A9;

loc_002B71A4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_002B71A9: ;
    if (TEST_NZ(eax, eax)) goto loc_002B71CD; /* jne: not equal / not zero */

loc_002B71AD: ;
    eax = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax));
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x238);
    esi = MEM32(eax);
    ecx = ecx & 0x7F;
    if (CMP_NE(ecx, esi)) goto loc_002B71CD; /* jne: not equal / not zero */

loc_002B71C8: ;
    MEM8(esp + ebp + 0x20) = LO8(edx);
    ebp++;

loc_002B71CD: ;
    ebx = MEM32(0x7FAAAC);

loc_002B71D3: ;
    ecx = MEM32(esp + 0x14);
    edi = edi + 0x20;
    edx++;
    ecx = ecx + 0x18;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(edx, ebx)) goto loc_002B7150; /* jl: less (signed <) */

loc_002B71EA: ;
    edx = 0; /* xor self */
    if (TEST_Z(ebp, ebp)) goto loc_002B71F8; /* je: equal / zero */

loc_002B71F0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002B71F5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }

loc_002B71F8: ;
    edx = (uint32_t)(int32_t)SMEM8(esp + edx + 0x20);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x568);
    edi = MEM32(esp + 0x88);
    MEM8(eax + 0x2E4) = LO8(edx);
    esi = 0; /* xor self */

loc_002B7216: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = edx;
    if (TEST_Z(esi, esi)) goto loc_002B7284; /* je: equal / zero */

loc_002B721C: ;
    ebp = MEM32(0x84A220);
    ecx = edx + edx * 2;
    SET_LO8(ecx, MEM8(ebp + ecx * 8 + 0x16));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002B726C; /* je: equal / zero */

loc_002B722D: ;
    eax = SX8(LO8(ecx));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002B7239; /* je: equal / zero */

loc_002B7235: ;
    if (CMP_L(eax, ebx)) goto loc_002B723B; /* jl: less (signed <) */

loc_002B7239: ;
    eax = edx;

loc_002B723B: ;
    esi = MEM32(esp + 0xA4);
    if (TEST_Z(esi, esi)) goto loc_002B7284; /* je: equal / zero */

loc_002B7246: ;
    ecx = eax + eax * 2;
    SET_LO8(ecx, MEM8(ebp + ecx * 8 + 0x15));
    if (TEST_S(LO8(ecx), LO8(ecx))) goto loc_002B7259; /* jl: less (signed <) */

loc_002B7251: ;
    MEM32(esi) = 0;
    goto loc_002B7284;

loc_002B7259: ;
    edi = MEM32(esp + 0x88);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(LO8(ecx), 0xFF)) ? 1 : 0); /* setne */
    MEM32(esi) = ebx;
    goto loc_002B7284;

loc_002B726C: ;
    ecx = MEM32(esp + 0xA4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(0x771BF0) = 2;
    if (TEST_Z(ecx, ecx)) goto loc_002B7284; /* je: equal / zero */

loc_002B727E: ;
    MEM32(ecx) = 2;

loc_002B7284: ;
    ecx = MEM32(0x84A220);
    eax = eax + eax * 2;
    eax = eax << 3;
    (void)0; /* cmp edi, 0xFF - flags set for next jcc */
    esi = MEM32(eax + ecx + 8);
    ecx = MEM32(esp + 0x90);
    MEM32(ecx) = esi;
    esi = MEM32(0x84A220);
    esi = MEM32(eax + esi + 0xC);
    MEM32(ecx + 4) = esi;
    esi = MEM32(0x84A220);
    esi = MEM32(eax + esi + 0x10);
    MEM32(ecx + 8) = esi;
    ecx = MEM32(0x84A220);
    SET_LO16(esi, MEM16(eax + ecx));
    ecx = MEM32(esp + 0x8C);
    MEM16(ecx) = LO16(esi);
    esi = MEM32(0x84A220);
    SET_LO16(esi, MEM16(eax + esi + 2));
    MEM16(ecx + 2) = LO16(esi);
    esi = MEM32(0x84A220);
    SET_LO16(esi, MEM16(eax + esi + 4));
    MEM16(ecx + 4) = LO16(esi);
    ecx = MEM32(0x84A220);
    SET_LO8(ecx, MEM8(eax + ecx + 6));
    esi = MEM32(esp + 0x94);
    MEM8(esi) = LO8(ecx);
    ecx = MEM32(0x84A220);
    SET_LO8(ecx, MEM8(eax + ecx + 7));
    esi = MEM32(esp + 0x98);
    MEM8(esi) = LO8(ecx);
    ecx = MEM32(0x84A220);
    ecx = ZX8(MEM8(eax + ecx + 0x14));
    esi = MEM32(esp + 0x9C);
    MEM32(esi) = ecx;
    ecx = MEM32(0x84A220);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x15);
    ecx = MEM32(esp + 0xA0);
    MEM32(ecx) = eax;
    POP32(esp, ebp);
    if (CMP_EQ(edi, 0xFF)) goto loc_002B7364; /* je: equal / zero */

loc_002B7340: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002B7364; /* je: equal / zero */

loc_002B7348: ;
    eax = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    eax = MEM32(edi + eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002B7364; /* je: equal / zero */

loc_002B735E: ;
    MEM8(eax + 0x1FC) = LO8(edx);

loc_002B7364: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_002B7380
 * Original: 0x002B7380 - 0x002B7533 (435 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7380: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x16;
    PUSH32(esp, edx);
    eax = esp + 0x1B;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x7FCB47));
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x236));
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B6FD0(); /* call 0x002B6FD0 */

loc_002B73BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B21B0(); /* call 0x002B21B0 */

loc_002B73C3: ;
    esp = esp + 0x24;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B740D; /* jne: not equal / not zero */

loc_002B73CA: ;
    eax = MEM32(esi + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FAAB8) = esi;
    if (TEST_Z(eax, eax)) goto loc_002B740D; /* je: equal / zero */

loc_002B73DA: ;
    if (CMP_EQ(MEM8(esi + 0xA1), 4)) goto loc_002B740D; /* je: equal / zero */

loc_002B73E3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C4D00);
    PUSH32(esp, 0x2C4AF0);
    eax = eax + 4;
    SET_LO8(ebx, 1);
    edi = esi;
    MEMF(0x7FDBE4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00036550(); /* call 0x00036550 */

loc_002B740A: ;
    esp = esp + 0x14;

loc_002B740D: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x16);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    ebx = esi + 0x78;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 0x80) = xmm0; /* movss */
    eax = ebx;
    ecx = MEM32(eax);
    edx = esi + 0x84;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    edx = ebx;
    eax = MEM32(edx);
    ecx = esi + 0x6BC;
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = eax;
    SET_LO16(eax, ZX8(MEM8(esp + 0xA)));
    MEM32(ecx + 8) = edx;
    eax = eax << 8;
    MEM16(esi + 0x174) = LO16(eax);
    MEM16(esi + 0x172) = LO16(eax);
    MEM16(esi + 0x170) = LO16(eax);
    eax = eax + 0x4000;
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esi + 0x5DC);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEMF(esi + 0x114) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_002B74E9; /* je: equal / zero */

loc_002B74B1: ;
    xmm0 = MEMF(esi + 0x9C); /* movss */
    ecx = esi + 0x90;
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x870ED4);
    PUSH32(esp, edx);
    edi = esp + 0x18;
    MEM32(esp + 0x20) = ecx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00356170(); /* call 0x00356170 */

loc_002B74E9: ;
    eax = MEM32(esi + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x648F60); /* movss */
    if (TEST_Z(eax, eax)) { sub_002B7533(); return; } /* je: equal / zero */

loc_002B74FB: ;
    eax = MEM32(eax + 0x4D4);
    if (TEST_Z(eax, eax)) { sub_002B7533(); return; } /* je: equal / zero */

loc_002B7505: ;
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_002B751E; /* jbe: below or equal (unsigned <=) */

loc_002B7515: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 > xmm0)) goto loc_002B7515; /* ja: above (unsigned >) */

loc_002B751E: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_002B752C; /* jb: below (unsigned <) */

loc_002B7523: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_002B7523; /* jae: above or equal (unsigned >=) */

loc_002B752C: ;
    MEMF(eax + 4) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002B7536(); return; /* tail jmp 0x002B7536 */

}

/**
 * sub_002B76A0
 * Original: 0x002B76A0 - 0x002B773C (156 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B76A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B76A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FAAAC);
    if (CMP_LE(eax & eax, 0)) goto loc_002B773A; /* jle: less or equal (signed <=) */

loc_002B76AE: ;
    edx = MEM32(0x84A224);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A220);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x10) = eax;

loc_002B76C4: ;
    SET_LO8(eax, MEM8(edi + ebp + 0x17));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_002B7725; /* jns: not sign (positive) */

loc_002B76CC: ;
    esi = MEM32(esp + 0x18);
    eax = edx;

loc_002B76D2: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_002B76F6; /* jne: not equal / not zero */

loc_002B76DA: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002B76F2; /* je: equal / zero */

loc_002B76DE: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_002B76F6; /* jne: not equal / not zero */

loc_002B76E8: ;
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002B76D2; /* jne: not equal / not zero */

loc_002B76F2: ;
    eax = 0; /* xor self */
    goto loc_002B76FB;

loc_002B76F6: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_002B76FB: ;
    if (TEST_NZ(eax, eax)) goto loc_002B7725; /* jne: not equal / not zero */

loc_002B76FF: ;
    SET_LO8(eax, MEM8(edi + ebp + 0x17));
    SET_LO8(ecx, MEM8(esp + 0x1C));
    SET_LO8(eax, LO8(eax) & 0xFC);
    MEM8(edi + ebp + 0x17) = LO8(eax);
    eax = MEM32(0x84A220);
    SET_LO8(ebx, MEM8(edi + eax + 0x17));
    SET_LO8(ecx, LO8(ecx) & 3);
    SET_LO8(ebx, LO8(ebx) | LO8(ecx));
    MEM8(edi + eax + 0x17) = LO8(ebx);
    ebp = MEM32(0x84A220);

loc_002B7725: ;
    eax = MEM32(esp + 0x10);
    edx = edx + 0x20;
    edi = edi + 0x18;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_002B76C4; /* jne: not equal / not zero */

loc_002B7736: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002B773A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7740
 * Original: 0x002B7740 - 0x002B7761 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7740: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    esi = 0; /* xor self */
    eax = MEM32(0x76FE00);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) { sub_002B7761(); return; } /* je: equal / zero */

loc_002B775D: ;
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_002B7763(); return; /* tail jmp 0x002B7763 */

}

/**
 * sub_002B7880
 * Original: 0x002B7880 - 0x002B78A9 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7880: ;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(0x7FAAA8) = eax;
    MEM32(0x7FAAA4) = eax;
    eax = MEM32(0x8471EC);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x7FAAB0) = LO8(ebx);
    if (CMP_NE(eax, ebx)) { sub_002B78A9(); return; } /* jne: not equal / not zero */

loc_002B789F: ;
    MEM32(0x84A220) = ebx;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002B78B5(); return; /* tail jmp 0x002B78B5 */

}

/**
 * sub_002B7A80
 * Original: 0x002B7A80 - 0x002B7EC0 (1088 bytes, 349 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7A80: ;
    eax = MEM32(0x76FE00);
    esp = esp - 0x3C;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FAAB4) = 0;
    if (TEST_Z(eax, eax)) goto loc_002B7EBC; /* je: equal / zero */

loc_002B7A9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, esi);

loc_002B7AA1: ;
    eax = MEM32(0x76FE00);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002B7AB1; /* je: equal / zero */

loc_002B7AAD: ;
    ecx = MEM32(eax);
    goto loc_002B7AB3;

loc_002B7AB1: ;
    ecx = 0; /* xor self */

loc_002B7AB3: ;
    if (CMP_GE(ebx, ecx)) goto loc_002B7AFE; /* jge: greater or equal (signed >=) */

loc_002B7AB7: ;
    esi = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_002B7ACE; /* je: equal / zero */

loc_002B7ABD: ;
    if (TEST_S(edi, edi)) goto loc_002B7ACE; /* jl: less (signed <) */

loc_002B7AC1: ;
    if (CMP_AE(ebx, MEM32(eax))) goto loc_002B7ACE; /* jae: above or equal (unsigned >=) */

loc_002B7AC5: ;
    eax = MEM32(eax + 4);
    eax = eax + edi;
    if ((eax == 0)) goto loc_002B7ACE; /* je: equal / zero */

loc_002B7ACC: ;
    esi = MEM32(eax);

loc_002B7ACE: ;
    PUSH32(esp, 0x608424);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B7AD9: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B7AF8; /* je: equal / zero */

loc_002B7AE0: ;
    PUSH32(esp, 0x608408);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B7AEB: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002B7AF8; /* jne: not equal / not zero */

loc_002B7AF2: ;
    MEM32(0x7FAAB4) = MEM32(0x7FAAB4) + 1;

loc_002B7AF8: ;
    ebx++;
    edi = edi + 0xC;
    goto loc_002B7AA1;

loc_002B7AFE: ;
    eax = MEM32(0x7FAAB4);
    if (TEST_Z(eax, eax)) goto loc_002B7EB9; /* je: equal / zero */

loc_002B7B0B: ;
    ecx = MEM32(0x7FAAAC);
    esi = MEM32(0x84A220);
    edi = ecx + eax;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xCC);
    PUSH32(esp, 0x608430);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002B7B31: ;
    ecx = edi + edi * 2;
    edx = eax + ecx * 8;
    ecx = edi;
    ecx = ecx << 5;
    ebx = ecx;
    ecx = ecx >> 2;
    MEM32(0x84A220) = eax;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ebx = MEM32(0x7FAAAC);
    ecx = ecx & 3;
    esp = esp + 0x10;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x84A224) = edx;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    MEM8(0x7FAAB0) = 1;
    if (TEST_Z(ebx, ebx)) goto loc_002B7BA7; /* je: equal / zero */

loc_002B7B6D: ;
    edi = MEM32(0x84A220);
    ecx = ebx + ebx * 2;
    ecx = ecx << 3;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    if (CMP_LE(ebx & ebx, 0)) goto loc_002B7BA7; /* jle: less or equal (signed <=) */

loc_002B7B8B: ;
    eax = ebx;
    /* nop */

loc_002B7B90: ;
    ecx = MEM32(0x606600);
    MEM32(edx) = ecx;
    ecx = MEM32(0x606604);
    MEM32(edx + 4) = ecx;
    edx = edx + 0x20;
    eax--;
    if ((eax != 0)) goto loc_002B7B90; /* jne: not equal / not zero */

loc_002B7BA7: ;
    edi = ebx;
    eax = edi;
    MEM32(esp + 0x10) = edi;
    edi = edi + edi * 2;
    eax = eax << 5;
    edi = edi << 3;
    esi = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edi;
    edx = 0; /* xor self */

loc_002B7BC5: ;
    eax = MEM32(0x76FE00);
    eax = MEM32(eax + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = edx;
    if (TEST_Z(eax, eax)) goto loc_002B7BDD; /* je: equal / zero */

loc_002B7BD9: ;
    ecx = MEM32(eax);
    goto loc_002B7BDF;

loc_002B7BDD: ;
    ecx = 0; /* xor self */

loc_002B7BDF: ;
    if (CMP_GE(esi, ecx)) goto loc_002B7EAC; /* jge: greater or equal (signed >=) */

loc_002B7BE7: ;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_002B7BFE; /* je: equal / zero */

loc_002B7BED: ;
    if (TEST_S(edx, edx)) goto loc_002B7BFE; /* jl: less (signed <) */

loc_002B7BF1: ;
    if (CMP_AE(esi, MEM32(eax))) goto loc_002B7BFE; /* jae: above or equal (unsigned >=) */

loc_002B7BF5: ;
    eax = MEM32(eax + 4);
    eax = eax + edx;
    if ((eax == 0)) goto loc_002B7BFE; /* je: equal / zero */

loc_002B7BFC: ;
    ebx = MEM32(eax);

loc_002B7BFE: ;
    PUSH32(esp, 0x608424);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B7C09: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_002B7E95; /* je: equal / zero */

loc_002B7C16: ;
    PUSH32(esp, 0x608408);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B7C21: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002B7E95; /* jne: not equal / not zero */

loc_002B7C2C: ;
    eax = MEM32(0x76FE00);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x84A220);
    esi = edi + ecx;
    if (TEST_Z(eax, eax)) goto loc_002B7C77; /* je: equal / zero */

loc_002B7C3E: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002B7C77; /* je: equal / zero */

loc_002B7C45: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002B7C53: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002B7C77; /* je: equal / zero */

loc_002B7C5A: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_002B7C82; /* je: equal / zero */

loc_002B7C62: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_002B7C6F; /* je: equal / zero */

loc_002B7C69: ;
    MEM32(esp + 0x20) = eax;
    goto loc_002B7C86;

loc_002B7C6F: ;
    MEM32(esp + 0x20) = 0;

loc_002B7C77: ;
    MEM32(0x7FAAB4) = MEM32(0x7FAAB4) - 1;
    goto loc_002B7E95;

loc_002B7C82: ;
    eax = MEM32(esp + 0x20);

loc_002B7C86: ;
    if (TEST_Z(eax, eax)) goto loc_002B7C77; /* je: equal / zero */

loc_002B7C8A: ;
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    PUSH32(esp, 0x76FE20);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_002B7CBD: ;
    eax = MEM32(0x76FE00);
    if (TEST_Z(eax, eax)) goto loc_002B7D14; /* je: equal / zero */

loc_002B7CC6: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002B7D14; /* je: equal / zero */

loc_002B7CCD: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002B7CDB: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002B7D14; /* je: equal / zero */

loc_002B7CE2: ;
    eax = MEM32(esp + 0x34);
    if (TEST_Z(eax, eax)) goto loc_002B7D01; /* je: equal / zero */

loc_002B7CEA: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_002B7CF7; /* je: equal / zero */

loc_002B7CF1: ;
    MEM32(esp + 0x24) = eax;
    goto loc_002B7D05;

loc_002B7CF7: ;
    MEM32(esp + 0x24) = 0;
    goto loc_002B7D14;

loc_002B7D01: ;
    eax = MEM32(esp + 0x24);

loc_002B7D05: ;
    if (TEST_Z(eax, eax)) goto loc_002B7D14; /* je: equal / zero */

loc_002B7D09: ;
    xmm0 = MEMF(eax + 0x24); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */

loc_002B7D14: ;
    eax = (int32_t)MEMF(esp + 0x40); /* cvttss2si */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm0 = MEMF(0x648EA4); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(esi) = LO16(eax);
    ecx = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    MEM16(esi + 2) = LO16(ecx);
    edx = (int32_t)MEMF(esp + 0x48); /* cvttss2si */
    MEM16(esi + 4) = LO16(edx);
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi + 0xC) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    MEM8(esi + 6) = 0;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002B7D75: ;
    ecx = MEM32(esp + 0x1C);
    MEM8(esi + 7) = LO8(eax);
    eax = MEM32(0x84A224);
    ebx = ecx + eax;
    MEM8(esi + 0x15) = 0;
    MEM32(esp + 0x3C) = ebx;
    eax = 0; /* xor self */
    edx = ebp + 0xA;

loc_002B7D91: ;
    SET_LO8(ecx, MEM8(edx));
    if (CMP_EQ(LO8(ecx), 0x5F)) goto loc_002B7DAD; /* je: equal / zero */

loc_002B7D98: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002B7DAD; /* je: equal / zero */

loc_002B7D9C: ;
    if (CMP_EQ(LO8(ecx), 0x7C)) goto loc_002B7DAD; /* je: equal / zero */

loc_002B7DA1: ;
    MEM8(eax + ebx) = LO8(ecx);
    eax++;
    edx++;
    if (CMP_L(eax, 0x20)) goto loc_002B7D91; /* jl: less (signed <) */

loc_002B7DAB: ;
    goto loc_002B7DB2;

loc_002B7DAD: ;
    if (CMP_L(eax, 0x20)) goto loc_002B7DB7; /* jl: less (signed <) */

loc_002B7DB2: ;
    eax = 0x1F;

loc_002B7DB7: ;
    PUSH32(esp, 0x6082CC);
    PUSH32(esp, ebp);
    MEM8(eax + ebx) = 0;
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B7DC6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B7DD3; /* je: equal / zero */

loc_002B7DCD: ;
    MEM8(esi + 0x17) = 0;
    goto loc_002B7DEF;

loc_002B7DD3: ;
    PUSH32(esp, 0x6082E0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_002B7DDE: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002B7DEB; /* je: equal / zero */

loc_002B7DE5: ;
    MEM8(esi + 0x17) = 1;
    goto loc_002B7DEF;

loc_002B7DEB: ;
    MEM8(esi + 0x17) = 3;

loc_002B7DEF: ;
    ebp = MEM32(0x84A224);
    edx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_002B7E6B; /* jle: less or equal (signed <=) */

loc_002B7DFB: ;
    eax = MEM32(0x84A220);
    eax = eax + 0x17;
    MEM32(esp + 0x10) = eax;
    goto loc_002B7E10;

loc_002B7E09: ;
    ebx = MEM32(esp + 0x3C);
    /* nop */

loc_002B7E10: ;
    edi = ebp;
    eax = ebx;

loc_002B7E14: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(edi))) goto loc_002B7E38; /* jne: not equal / not zero */

loc_002B7E1C: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002B7E34; /* je: equal / zero */

loc_002B7E20: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(edi + 1))) goto loc_002B7E38; /* jne: not equal / not zero */

loc_002B7E2A: ;
    eax = eax + 2;
    edi = edi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002B7E14; /* jne: not equal / not zero */

loc_002B7E34: ;
    eax = 0; /* xor self */
    goto loc_002B7E3D;

loc_002B7E38: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_002B7E3D: ;
    if (TEST_NZ(eax, eax)) goto loc_002B7E50; /* jne: not equal / not zero */

loc_002B7E41: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x17));
    SET_LO8(eax, LO8(eax) & 0x7F);
    if (CMP_EQ(LO8(eax), LO8(ecx))) goto loc_002B7E71; /* je: equal / zero */

loc_002B7E50: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ebp = ebp + 0x20;
    edx++;
    ecx = ecx + 0x18;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(edx, eax)) goto loc_002B7E09; /* jl: less (signed <) */

loc_002B7E67: ;
    edi = MEM32(esp + 0x18);

loc_002B7E6B: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 0x80;
    goto loc_002B7E75;

loc_002B7E71: ;
    edi = MEM32(esp + 0x18);

loc_002B7E75: ;
    PUSH32(esp, 0); sub_002B7EC0(); /* call 0x002B7EC0 */

loc_002B7E7A: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    edx++;
    edi = edi + 0x18;
    eax = eax + 0x20;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = eax;

loc_002B7E95: ;
    esi = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    ebx = MEM32(0x7FAAAC);
    esi++;
    edx = edx + 0xC;
    goto loc_002B7BC5;

loc_002B7EAC: ;
    ebx = ebx + MEM32(0x7FAAB4);
    MEM32(0x7FAAAC) = ebx;
    POP32(esp, ebp);

loc_002B7EB9: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002B7EBC: ;
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B7EC0
 * Original: 0x002B7EC0 - 0x002B7F78 (184 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7EC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002B7EC0: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    edx = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM32(0x780AB0) = 0x608430;
    MEM32(0x6C0210) = 0x177;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x2000;
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_002B7F33: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    esp = esp + 0x38;
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(0x780AB0) = 0;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = 0;
    if (1 /* jnp after test - parity */) goto loc_002B7F76; /* jnp: not parity */

loc_002B7F6E: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 2) = LO16(ecx);

loc_002B7F76: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B7F80
 * Original: 0x002B7F80 - 0x002B7FEC (108 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7F80(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B7F80: ;
    esp = esp - 0x114;
    eax = MEM32(0x7FA1F4);
    ecx = MEM32(eax * 4 + 0x69CF90);
    edx = MEM32(0x84A14C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x13);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002B7FA7: ;
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 8;
    MEM32(esp + 0x118) = 0x13;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_002B7FCC: ;
    /* nop */

loc_002B7FD0: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_002B7FEC(); return; } /* jl: less (signed <) */

loc_002B7FDE: ;
    if (CMP_G(eax, 0x3E5)) { sub_002B7FEC(); return; } /* jg: greater (signed >) */

loc_002B7FE5: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_002B7FEA: ;
    goto loc_002B7FD0;

}

/**
 * sub_002B8110
 * Original: 0x002B8110 - 0x002B816D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8110(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B8110: ;
    ecx = MEM32(0x84A230);
    if (TEST_Z(ecx, ecx)) goto loc_002B8162; /* je: equal / zero */

loc_002B811A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_002B8128: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002B8153; /* je: equal / zero */

loc_002B812E: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002B8139; /* je: equal / zero */

loc_002B8135: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_002B8139: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_002B8153; /* jne: not equal / not zero */

loc_002B8140: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_002B8149: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_002B8153: ;
    PUSH32(esp, 0x84A234);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002B815D: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002B8162: ;
    MEM32(0x84A230) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8170
 * Original: 0x002B8170 - 0x002B81D3 (99 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8170(void)
{
    int _flags = 0; /* fallback flag var */

loc_002B8170: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    esi = eax + 1;

loc_002B8182: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002B8182; /* jne: not equal / not zero */

loc_002B8189: ;
    PUSH32(esp, 0x20);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4E4);
    PUSH32(esp, 0); sub_0047E7BE(); /* call 0x0047E7BE */

loc_002B81A0: ;
    ecx = MEM32(0x84A234);
    edi = MEM32(0x84A230);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_002B81BC: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002B81CF; /* jne: not equal / not zero */

loc_002B81CA: ;
    eax = MEM32(0x75E9D4);

loc_002B81CF: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_002B81E0
 * Original: 0x002B81E0 - 0x002B8410 (560 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B81E0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002B81E0: ;
    xmm0 = MEMF(0x648E94); /* movss */
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x78);
    SET_LO16(edx, MEM16(esi + 0x174));
    ecx = MEM32(esi + 0x80);
    MEM32(esi + 0x288) = eax;
    SET_LO16(edx, LO16(edx) + 0x4000);
    MEMF(esi + 0x228) = xmm0; /* movss */
    eax = SX16(LO16(edx));
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEM32(esi + 0x28C) = ecx;
    MEM8(esi + 0x234) = 0x64;
    MEMF(esi + 0x114) = xmm0; /* movss */
    fp_push(MEMF(edi + 0x78)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(edi + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push(MEMF(0x6492D4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002B839D; /* jbe: below or equal (unsigned <=) */

loc_002B8270: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = xmm0 - MEMF(edi + 0x7C); /* subss */
    fp_push(MEMF(esi + 0x80)); /* fld float */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm1 <= xmm0)) goto loc_002B82B2; /* jbe: below or equal (unsigned <=) */

loc_002B82A8: ;
    xmm1 = MEMF(0x59D944); /* movss */
    goto loc_002B82C6;

loc_002B82B2: ;
    xmm0 = xmm0 * MEMF(0x648D40); /* mulss */
    xmm1 = MEMF(0x64ABD4); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */

loc_002B82C6: ;
    xmm2 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_002B839D; /* jbe: below or equal (unsigned <=) */

loc_002B82D5: ;
    (void)0; /* cmp MEM8(edi + 0x1B5), 1 - flags set for next jcc */
    xmm0 = MEMF(0x6492D4); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(MEM8(edi + 0x1B5), 1)) goto loc_002B839D; /* jne: not equal / not zero */

loc_002B82F4: ;
    xmm0 = MEMF(edi + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x28C); /* subss */
    xmm1 = MEMF(esi + 0x288); /* movss */
    xmm1 = xmm1 - MEMF(edi + 0x78); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002EBA00(); /* call 0x002EBA00 */

loc_002B831C: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    esp = esp + 4;
    /* comiss xmm0, MEMF(0x649F84) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649F84))) goto loc_002B8357; /* jbe: below or equal (unsigned <=) */

loc_002B832E: ;
    xmm2 = MEMF(edi + 0x7C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x64ABD0); /* subss */
    xmm1 = xmm1 * MEMF(0x649578); /* mulss */
    xmm1 = xmm1 * MEMF(0x7FDB8C); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(edi + 0x7C) = xmm2; /* movss */

loc_002B8357: ;
    xmm0 = xmm0 * MEMF(0x64A9FC); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax + -12288;
    eax = esp + 0x10;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002EB710(); /* call 0x002EB710 */

loc_002B837E: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(edi + 0x278) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    esp = esp + 8;
    MEMF(edi + 0x27C) = xmm0; /* movss */

loc_002B839D: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002B840A; /* je: equal / zero */

loc_002B83A7: ;
    if (CMP_GE(eax, 0x205)) goto loc_002B840A; /* jge: greater or equal (signed >=) */

loc_002B83AE: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_002B840A; /* je: equal / zero */

loc_002B83B5: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_002B840A; /* je: equal / zero */

loc_002B83BC: ;
    edx = MEM32(edx);
    if (TEST_Z(edx, edx)) goto loc_002B840A; /* je: equal / zero */

loc_002B83C2: ;
    if (CMP_EQ(edx, 0x3E7)) goto loc_002B83D5; /* je: equal / zero */

loc_002B83CA: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_002B83E0; /* ja: above (unsigned >) */

loc_002B83D5: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002B83DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_002B83E0: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002B8407: ;
    esp = esp + 0x20;

loc_002B840A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B8550
 * Original: 0x002B8550 - 0x002B87AC (604 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8550: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x20C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO16(ebx, MEM16(esi + 0x170));
    MEM8(esi + 0x17A) = 0xA;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002B87AC(); return; } /* jne: not equal / not zero */

loc_002B8573: ;
    ecx = MEM32(0x84A1AC);
    xmm1 = MEMF(0x64B264); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esi + 0x253));
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    edx = (uint32_t)(int32_t)SMEM16(eax + ecx + 0x16);
    (void)0; /* test MEM8(esi + 0x438), 8 - flags set for next jcc */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    if (TEST_NZ(MEM8(esi + 0x438), 8)) goto loc_002B85D2; /* jne: not equal / not zero */

loc_002B85A7: ;
    if (CMP_EQ(MEM8(esi + 0x42F), 3)) goto loc_002B85CA; /* je: equal / zero */

loc_002B85B0: ;
    xmm2 = MEMF(esi + 0xD0); /* movss */
    xmm2 = xmm2 * MEMF(0x648E1C); /* mulss */
    MEMF(esi + 0x1C0) = xmm2; /* movss */
    goto loc_002B85D2;

loc_002B85CA: ;
    MEMF(esi + 0x1C0) = xmm3; /* movss */

loc_002B85D2: ;
    SET_LO8(eax, MEM8(esi + 0x42F));
    if (CMP_NE(LO8(eax), 0xE)) goto loc_002B8681; /* jne: not equal / not zero */

loc_002B85E0: ;
    eax = ZX8(MEM8(esi + 0x42E));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = MEMF(ecx + eax + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x78); /* subss */
    ecx = ecx + eax;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x80); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x110); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002B8653; /* jnp: not parity */

loc_002B862D: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x14); /* movss */
    goto loc_002B865B;

loc_002B8653: ;
    xmm0 = MEMF(0x6492C4); /* movss */

loc_002B865B: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x430);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(ecx + 0x7C); /* addss */
    xmm1 = xmm1 - MEMF(esi + 0x7C); /* subss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esi + 0xD4) = xmm3; /* movss */
    goto loc_002B879A;

loc_002B8681: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002B8693; /* jne: not equal / not zero */

loc_002B8685: ;
    eax = MEM32(0x84A5F8);
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */

loc_002B8693: ;
    SET_LO16(ecx, MEM16(esi + 0x430));
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    edx = MEM32(0x84A1A0);
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_002B86FD; /* je: equal / zero */

loc_002B86A5: ;
    if (CMP_NE(LO16(ecx), 0x2710)) goto loc_002B86BD; /* jne: not equal / not zero */

loc_002B86AC: ;
    ecx = ZX8(MEM8(esi + 0x42A));
    eax = MEM32(edx + edi * 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + ecx * 8 + 0xA);
    goto loc_002B86F9;

loc_002B86BD: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0x50)) goto loc_002B86F3; /* je: equal / zero */

loc_002B86C5: ;
    if (CMP_EQ(eax, 5)) goto loc_002B86F3; /* je: equal / zero */

loc_002B86CA: ;
    if (CMP_EQ(eax, 0xAD)) goto loc_002B86F3; /* je: equal / zero */

loc_002B86D1: ;
    if (CMP_EQ(eax, 0xAE)) goto loc_002B86F3; /* je: equal / zero */

loc_002B86D8: ;
    if (CMP_EQ(eax, 0xAF)) goto loc_002B86F3; /* je: equal / zero */

loc_002B86DF: ;
    eax = SX16(LO16(ecx));
    eax = eax << 3;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x294); /* addss */
    goto loc_002B86FD;

loc_002B86F3: ;
    ecx = SX16(LO16(ecx));
    ecx = ecx << 3;

loc_002B86F9: ;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */

loc_002B86FD: ;
    if (TEST_NZ(MEM8(esi + 0x208), 0x40)) goto loc_002B87A2; /* jne: not equal / not zero */

loc_002B870A: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x44)) goto loc_002B8735; /* jne: not equal / not zero */

loc_002B8710: ;
    eax = ZX8(MEM8(esi + 0x42A));
    ecx = MEM32(edx + edi * 4);
    edx = (uint32_t)(int32_t)SMEM16(ecx + eax * 8 + 0xA);
    xmm4 = MEMF(0x648D20); /* movss */
    xmm2 = MEMF(0x649030); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    goto loc_002B8745;

loc_002B8735: ;
    xmm4 = MEMF(0x648D1C); /* movss */
    xmm2 = MEMF(0x648FD8); /* movss */

loc_002B8745: ;
    xmm5 = MEMF(esi + 0x7C); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    if ((xmm5 <= xmm0)) goto loc_002B8760; /* jbe: below or equal (unsigned <=) */

loc_002B8756: ;
    MEMF(esi + 0xD4) = xmm4; /* movss */
    goto loc_002B8772;

loc_002B8760: ;
    /* comiss xmm0, MEMF(esi + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x7C))) goto loc_002B8772; /* jbe: below or equal (unsigned <=) */

loc_002B8766: ;
    xmm3 = xmm3 - xmm4; /* subss */
    MEMF(esi + 0xD4) = xmm3; /* movss */

loc_002B8772: ;
    xmm0 = MEMF(esi + 0xD0); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_002B8791; /* jbe: below or equal (unsigned <=) */

loc_002B877F: ;
    eax = esi;
    MEMF(esi + 0xD0) = xmm2; /* movss */
    PUSH32(esp, 0); sub_002E6F10(); /* call 0x002E6F10 */

loc_002B878E: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002B87B3(); return; /* tail jmp 0x002B87B3 */

loc_002B8791: ;
    /* comiss xmm1, MEMF(esi + 0xD0) - sets EFLAGS */
    if ((xmm1 <= MEMF(esi + 0xD0))) goto loc_002B87A2; /* jbe: below or equal (unsigned <=) */

loc_002B879A: ;
    MEMF(esi + 0xD0) = xmm1; /* movss */

loc_002B87A2: ;
    eax = esi;
    PUSH32(esp, 0); sub_002E6F10(); /* call 0x002E6F10 */

loc_002B87A9: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002B87B3(); return; /* tail jmp 0x002B87B3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B8830
 * Original: 0x002B8830 - 0x002B88C3 (147 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8830: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = 0xA;
    PUSH32(esp, 0); sub_002F2DA0(); /* call 0x002F2DA0 */

loc_002B8844: ;
    esi = MEM32(esp + 0x20);
    edi = eax;
    esp = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002E6F10(); /* call 0x002E6F10 */

loc_002B8854: ;
    if (CMP_NE(MEM8(esi + 0x3EE), 2)) { sub_002B88C3(); return; } /* jne: not equal / not zero */

loc_002B885D: ;
    ecx = MEM32(edi + 0x78);
    xmm1 = MEMF(0x64AA7C); /* movss */
    MEM32(esi + 0x78) = ecx;
    edx = MEM32(edi + 0x80);
    ecx = ZX16(MEM16(esi + 0x428));
    MEM32(esi + 0x80) = edx;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x649428); /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x7C); /* addss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    MEMF(esi + 0xD4) = xmm1; /* movss */
    MEM8(esi + 0x178) = 0;
    g_seh_ebp = ebp; sub_002B89A8(); return; /* tail jmp 0x002B89A8 */

}

/**
 * sub_002B8A40
 * Original: 0x002B8A40 - 0x002B8C62 (546 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8A40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002B8A40: ;
    PUSH32(esp, ecx);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x200);
    xmm1 = MEMF(esi + 0x110); /* movss */
    eax = eax & 0xFFFFFFFBu;
    eax = eax | 0x80;
    /* comiss xmm1, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    MEM8(esi + 0x1B7) = 0x19;
    MEM8(esi + 0x250) = 0;
    MEM32(esi + 0x200) = eax;
    if ((xmm1 <= MEMF(0x648D14))) goto loc_002B8A8B; /* jbe: below or equal (unsigned <=) */

loc_002B8A82: ;
    eax = eax | 4;
    MEM32(esi + 0x200) = eax;

loc_002B8A8B: ;
    eax = MEM32(esi + 0x468);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEM8(esi + 0x20C) = 0xA;
    MEM8(esi + 0x444) = 0x3B;
    MEM32(esi + 0x204) = 0xA7;
    MEM8(esi + 0x17A) = 1;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_002B8AE9; /* je: equal / zero */

loc_002B8AB4: ;
    eax = eax & 0xFFFFFFBFu;
    MEM32(esi + 0x468) = eax;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x78);
    MEM32(esi + 0x84) = ecx;
    edx = MEM32(eax + 0x80);
    PUSH32(esp, 0x870ED4);
    ecx = esi;
    MEM32(esi + 0x8C) = edx;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_002B8AE3: ;
    xmm0 = MEMF(esp + 4); /* movss */

loc_002B8AE9: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B8B4A; /* je: equal / zero */

loc_002B8AF3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002E6400(); /* call 0x002E6400 */

loc_002B8AF9: ;
    eax = ZX8(MEM8(esi + 0x251));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(edx, MEM8(eax + ecx + -1220));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002B8B2C; /* je: equal / zero */

loc_002B8B23: ;
    if (TEST_Z(MEM8(0x7FDD3C), 4)) goto loc_002B8B44; /* je: equal / zero */

loc_002B8B2C: ;
    if (CMP_BE(MEM16(esi + 0x428), 8)) goto loc_002B8B44; /* jbe: below or equal (unsigned <=) */

loc_002B8B36: ;
    xmm0 = MEMF(0x64938C); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */

loc_002B8B44: ;
    xmm0 = MEMF(esp + 4); /* movss */

loc_002B8B4A: ;
    xmm0 = xmm0 - MEMF(esi + 0x1C0); /* subss */
    SET_LO16(edx, MEM16(esi + 0x174));
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x1C0); /* addss */
    SET_LO16(edx, LO16(edx) + 0x4000);
    eax = SX16(LO16(edx));
    MEMF(esi + 0x1C0) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    eax = esi;
    MEMF(esi + 0x114) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002E9550(); /* call 0x002E9550 */

loc_002B8B94: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002EA190(); /* call 0x002EA190 */

loc_002B8B9C: ;
    eax = MEM32(esi + 0x68);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002B8C0F; /* je: equal / zero */

loc_002B8BA9: ;
    if (CMP_GE(eax, 0x205)) goto loc_002B8C0F; /* jge: greater or equal (signed >=) */

loc_002B8BB0: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_002B8C0F; /* je: equal / zero */

loc_002B8BB7: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_002B8C0F; /* je: equal / zero */

loc_002B8BBE: ;
    edx = MEM32(edx);
    if (TEST_Z(edx, edx)) goto loc_002B8C0F; /* je: equal / zero */

loc_002B8BC4: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_002B8BD3; /* jne: not equal / not zero */

loc_002B8BCC: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002B8BD1: ;
    goto loc_002B8C0F;

loc_002B8BD3: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_002B8BE5; /* ja: above (unsigned >) */

loc_002B8BDE: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002B8BE3: ;
    goto loc_002B8C0F;

loc_002B8BE5: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002B8C0C: ;
    esp = esp + 0x20;

loc_002B8C0F: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000532D0(); /* call 0x000532D0 */

loc_002B8C1A: ;
    ecx = MEM32(0x7FA200);
    edx = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    eax = ecx + edx + 0x330;
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_002B8C3D: ;
    xmm1 = MEMF(0x648F50); /* movss */
    esp = esp + 0x10;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002B8C5F; /* jbe: below or equal (unsigned <=) */

loc_002B8C4D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    eax = 2;
    PUSH32(esp, 0); sub_001B3030(); /* call 0x001B3030 */

loc_002B8C5B: ;
    esp = esp + 4;
    POP32(esp, ebx);

loc_002B8C5F: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8C70
 * Original: 0x002B8C70 - 0x002B8CD5 (101 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8C70: ;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(esi + 0x68), 0x23 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(esp + 0xC) = 0x6F1E40;
    if (CMP_EQ(MEM32(esi + 0x68), 0x23)) goto loc_002B8C8C; /* je: equal / zero */

loc_002B8C84: ;
    MEM32(esp + 0xC) = 0x6F1E50;

loc_002B8C8C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x23C);
    eax = ebp;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002B8C9B: ;
    ecx = MEM32(esi + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002B8CBF: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_002B8CD5(); return; } /* je: equal / zero */

loc_002B8CC8: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_002B8CD5(); return; } /* je: equal / zero */

loc_002B8CD0: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_002B8CD7(); return; /* tail jmp 0x002B8CD7 */

}

/**
 * sub_002B8D20
 * Original: 0x002B8D20 - 0x002B8D8B (107 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8D20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002B8D20: ;
    eax = ZX8(MEM8(ecx + 0x135));
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = MEMF(0x648E5C); /* movss */
    eax = eax + edx + -1744;
    edx = 0; /* xor self */
    MEM8(eax + 0x250) = LO8(edx);
    MEM32(eax + 0x420) = edx;
    MEM8(eax + 0x43D) = 5;
    (void)0; /* cmp MEM8(0x7819D5), LO8(edx) - flags set for next jcc */
    MEMF(ecx + 0x110) = xmm0; /* movss */
    if (CMP_EQ(MEM8(0x7819D5), LO8(edx))) goto loc_002B8D8A; /* je: equal / zero */

loc_002B8D67: ;
    xmm0 = MEMF(ecx + 0x80); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEM16(ecx + 0x174) = 0x3000;
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_002B8D8A; /* jbe: below or equal (unsigned <=) */

loc_002B8D81: ;
    MEM16(ecx + 0x174) = 0xB000;

loc_002B8D8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8D90
 * Original: 0x002B8D90 - 0x002B8E03 (115 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8D90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp MEM32(esi + 0x68), 0x23 - flags set for next jcc */
    MEM32(esp + 0x10) = 0x6F1E40;
    if (CMP_EQ(MEM32(esi + 0x68), 0x23)) goto loc_002B8DAF; /* je: equal / zero */

loc_002B8DA7: ;
    MEM32(esp + 0x10) = 0x6F1E50;

loc_002B8DAF: ;
    SET_LO8(eax, MEM8(ebp + 0x60));
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x23C);
    MEM8(esi + 0x250) = LO8(eax);
    eax = ebp;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002B8DC9: ;
    edx = MEM32(esi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002B8DED: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_002B8E03(); return; } /* je: equal / zero */

loc_002B8DF6: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_002B8E03(); return; } /* je: equal / zero */

loc_002B8DFE: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_002B8E05(); return; /* tail jmp 0x002B8E05 */

}

/**
 * sub_002B8E50
 * Original: 0x002B8E50 - 0x002B8FA2 (338 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8E50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    (void)0; /* cmp MEM32(ebp + 0x68), 0x23 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x6F1E40;
    if (CMP_EQ(MEM32(ebp + 0x68), 0x23)) goto loc_002B8E68; /* je: equal / zero */

loc_002B8E63: ;
    edi = 0x6F1E50;

loc_002B8E68: ;
    eax = MEM32(ebp + 0x52C);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    eax = eax - ecx;
    ebx = 0; /* xor self */
    MEM32(ebp + 0x52C) = eax;
    (void)0; /* cmp MEM8(0x7819D5), LO8(ebx) - flags set for next jcc */
    MEM32(ebp + 0x530) = ebx;
    MEM8(ebp + 0x543) = LO8(ebx);
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002B8E98; /* je: equal / zero */

loc_002B8E91: ;
    MEM8(ebp + 0x136) = MEM8(ebp + 0x136) & 0xBF;

loc_002B8E98: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002B8F30; /* je: equal / zero */

loc_002B8EA6: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    esi = edx + eax + -1744;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_002B8F30; /* je: equal / zero */

loc_002B8EC5: ;
    if (CMP_EQ(MEM32(eax + 0x2B0), ebx)) goto loc_002B8F30; /* je: equal / zero */

loc_002B8ECD: ;
    ecx = eax;
    fp_push(MEMF(ecx + 0x258)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002B8EE0: ;
    MEM16(ebp + 0x174) = LO16(eax);
    MEM16(ebp + 0x170) = LO16(eax);
    edx = MEM32(esi + 0x568);
    xmm0 = MEMF(edx + 0x25C); /* movss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_002B8F0D; /* jbe: below or equal (unsigned <=) */

loc_002B8F05: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_002B8F0D: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEM8(ebp + 0x136) = MEM8(ebp + 0x136) | 0x40;
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(ebp + 0x52C) = eax;
    MEM32(ebp + 0x530) = 1;

loc_002B8F30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002DA170(); /* call 0x002DA170 */

loc_002B8F36: ;
    eax = ZX8(MEM8(ebp + 0x43D));
    ecx = MEM32(edi + 4);
    esp = esp + 4;
    if (CMP_NE(eax, ecx)) { sub_002B8FA2(); return; } /* jne: not equal / not zero */

loc_002B8F47: ;
    edx = MEM32(ebp + 0x4B0);
    eax = MEM32(edx + 0x24);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(edi + 0xC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002B8F68: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002B8F7C; /* je: equal / zero */

loc_002B8F6F: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002B8F7C; /* je: equal / zero */

loc_002B8F77: ;
    eax = MEM32(eax + 8);
    goto loc_002B8F7E;

loc_002B8F7C: ;
    eax = 0; /* xor self */

loc_002B8F7E: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002DAA50(); /* call 0x002DAA50 */

loc_002B8F9A: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B90B0
 * Original: 0x002B90B0 - 0x002B91B5 (261 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B90B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B90B0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ecx = MEM32(edi + 0x200);
    SET_LO8(eax, MEM8(edi + 0x42E));
    ecx = ecx | 0x4000000;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi + 0x200) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B911B; /* je: equal / zero */

loc_002B90D6: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B911B; /* jne: not equal / not zero */

loc_002B90E0: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002B90EB: ;
    if (TEST_Z(eax, eax)) goto loc_002B911B; /* je: equal / zero */

loc_002B90EF: ;
    eax = eax + 0x78;
    edx = MEM32(eax);
    ecx = edi + 0x84;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0x870ED4);
    ecx = edi;
    MEM8(edi + 0x42E) = 0;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_002B911B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002EA710(); /* call 0x002EA710 */

loc_002B9121: ;
    esi = edi;
    PUSH32(esp, 0); sub_002EBAD0(); /* call 0x002EBAD0 */

loc_002B9128: ;
    ecx = MEM32(edi + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002E8AC0(); /* call 0x002E8AC0 */

loc_002B9135: ;
    edx = MEM32(edi + 0x294);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002ED170(); /* call 0x002ED170 */

loc_002B9141: ;
    xmm0 = MEMF(edi + 0xDC); /* movss */
    esp = esp + 0x10;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002B9171; /* jp: parity */

loc_002B9159: ;
    xmm0 = MEMF(edi + 0x110); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(edi + 0x110) = xmm0; /* movss */

loc_002B9171: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002B91B5(); return; } /* je: equal / zero */

loc_002B917B: ;
    ecx = MEM32(0x84A5F8);
    MEM8(edi + 0x42E) = LO8(eax);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + ecx + -1580);
    if (CMP_NE(eax, 0x1F9)) goto loc_002B91A5; /* jne: not equal / not zero */

loc_002B919E: ;
    edx = 2;
    g_seh_ebp = ebp; sub_002B91B7(); return; /* tail jmp 0x002B91B7 */

loc_002B91A5: ;
    edx = 0; /* xor self */
    (void)0; /* cmp eax, 0x1FB - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, 0x1FB)) ? 1 : 0); /* sete */
    edx = edx + edx + 1;
    g_seh_ebp = ebp; sub_002B91B7(); return; /* tail jmp 0x002B91B7 */

}

/**
 * sub_002B9400
 * Original: 0x002B9400 - 0x002B969A (666 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9400: ;
    esp = esp - 8;
    xmm0 = MEMF(0x648E14); /* movss */
    xmm5 = MEMF(0x648D10); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x68);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0x25 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM8(esi + 0x17A) = 0xA;
    if (CMP_NE(eax, 0x25)) goto loc_002B947A; /* jne: not equal / not zero */

loc_002B9430: ;
    xmm2 = 0.0f; /* xorps self = zero */
    edx = esi + 0x27C;
    ecx = esi + 0x278;
    PUSH32(esp, 0x3E19999A);
    xmm4 = xmm2; /* movaps */
    PUSH32(esp, 0); sub_002EB760(); /* call 0x002EB760 */

loc_002B944C: ;
    SET_LO8(eax, MEM8(esi + 0x17F));
    xmm0 = MEMF(0x648D80); /* movss */
    esp = esp + 4;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 1)) goto loc_002B9473; /* je: equal / zero */

loc_002B9467: ;
    eax = (int32_t)MEMF(esi + 0x7C); /* cvttss2si */
    MEM16(esi + 0x430) = LO16(eax);

loc_002B9473: ;
    MEM16(esi + 0x274) = LO16(ebx);

loc_002B947A: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ebx);
    SET_LO8(edx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_002EB830(); /* call 0x002EB830 */

loc_002B948E: ;
    eax = MEM32(esi + 0x68);
    xmm0 = MEMF(0x648D20); /* movss */
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0x10 - flags set for next jcc */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    if (CMP_NE(eax, 0x10)) goto loc_002B94B1; /* jne: not equal / not zero */

loc_002B94A9: ;
    xmm5 = MEMF(0x649B80); /* movss */

loc_002B94B1: ;
    if (CMP_NE(eax, 0xAC)) goto loc_002B94C0; /* jne: not equal / not zero */

loc_002B94B8: ;
    xmm5 = MEMF(0x648CF0); /* movss */

loc_002B94C0: ;
    xmm5 = xmm5 * MEMF(0x648F58); /* mulss */
    eax = esi;
    MEMF(esp + 0xC) = xmm5; /* movss */
    PUSH32(esp, 0); sub_002E6F10(); /* call 0x002E6F10 */

loc_002B94D5: ;
    if (CMP_EQ(MEM8(esi + 0x251), LO8(ebx))) goto loc_002B94E6; /* je: equal / zero */

loc_002B94DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002E6400(); /* call 0x002E6400 */

loc_002B94E3: ;
    esp = esp + 4;

loc_002B94E6: ;
    eax = esi;
    PUSH32(esp, 0); sub_002E9550(); /* call 0x002E9550 */

loc_002B94ED: ;
    xmm1 = MEMF(0x7FA248); /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x84); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esi + 0x1C4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x8C); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esi + 0x25C) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x648CE0); /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm1 = MEMF(esp + 0x14); /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esi + 0x110)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002B957F; /* jbe: below or equal (unsigned <=) */

loc_002B9570: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esi + 0x110) = xmm2; /* movss */

loc_002B957F: ;
    if (CMP_NE(MEM8(esi + 0x17F), 4)) goto loc_002B95EA; /* jne: not equal / not zero */

loc_002B9588: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, edx);
    MEM32(0x7FDBF8) = 0xFF020133u;
    MEM32(0x7FDBF4) = ebx;
    MEM32(0x7FDBF0) = ebx;
    MEM32(0x7FDBEC) = ebx;
    MEM32(0x7FDBE8) = ebx;
    PUSH32(esp, 0); sub_00305F40(); /* call 0x00305F40 */

loc_002B95B6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esi + 0x1C4);
    ecx = MEM32(esi + 0x25C);
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    esp = esp + 4;
    MEM32(esi + 0x278) = eax;
    MEM32(esi + 0x27C) = ecx;

loc_002B95EA: ;
    SET_LO8(eax, MEM8(esi + 0x17F));
    SET_LO8(eax, LO8(eax) << 1);
    /* comiss xmm1, MEMF(0x648D10) - sets EFLAGS */
    MEM8(esi + 0x17F) = LO8(eax);
    if ((xmm1 <= MEMF(0x648D10))) goto loc_002B9649; /* jbe: below or equal (unsigned <=) */

loc_002B9601: ;
    if (CMP_NE(MEM8(esi + 0x251), LO8(ebx))) goto loc_002B9649; /* jne: not equal / not zero */

loc_002B9609: ;
    xmm0 = MEMF(esi + 0x8C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x80); /* subss */
    xmm1 = MEMF(esi + 0x78); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x84); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002EBA00(); /* call 0x002EBA00 */

loc_002B9631: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    esp = esp + 4;
    MEM16(esi + 0x172) = LO16(eax);

loc_002B9649: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x174));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x172));
    edx = edx - eax;
    edx = edx - 0x4000;
    if (TEST_S(HI8(edx), HI8(edx))) goto loc_002B966C; /* js: sign (negative) */

loc_002B9667: ;
    eax = eax ^ 0x8000;

loc_002B966C: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_002EA580(); /* call 0x002EA580 */

loc_002B9674: ;
    xmm2 = MEMF(esi + 0xDC); /* movss */
    esp = esp + 4;
    /* comiss xmm2, MEMF(0x648E5C) - sets EFLAGS */
    if ((xmm2 <= MEMF(0x648E5C))) { sub_002B969A(); return; } /* jbe: below or equal (unsigned <=) */

loc_002B9688: ;
    xmm1 = MEMF(esi + 0x118); /* movss */
    xmm1 = xmm1 * MEMF(0x648E40); /* mulss */
    g_seh_ebp = ebp; sub_002B969E(); return; /* tail jmp 0x002B969E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002B9810
 * Original: 0x002B9810 - 0x002B9BA5 (917 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9810(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002B9810: ;
    esp = esp - 0x64;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x6C);
    if (CMP_NE(MEM32(esi + 0x64), 0x14)) goto loc_002B9839; /* jne: not equal / not zero */

loc_002B981E: ;
    eax = MEM32(esi + 0x52C);
    if (TEST_Z(eax, eax)) goto loc_002B9839; /* je: equal / zero */

loc_002B9828: ;
    PUSH32(esp, 0);
    eax = 0x64;
    ecx = esi;
    PUSH32(esp, 0); sub_00140900(); /* call 0x00140900 */

loc_002B9836: ;
    esp = esp + 4;

loc_002B9839: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0xD0) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0xD0))) goto loc_002B989E; /* jbe: below or equal (unsigned <=) */

loc_002B9845: ;
    xmm1 = MEMF(esi + 0xDC); /* movss */
    /* comiss xmm1, MEMF(0x64908C) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x64908C))) goto loc_002B989E; /* jbe: below or equal (unsigned <=) */

loc_002B9856: ;
    SET_LO8(eax, MEM8(esi + 0x24A));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B989E; /* jne: not equal / not zero */

loc_002B9860: ;
    xmm1 = MEMF(esi + 0xD0); /* movss */
    xmm1 = xmm1 * MEMF(0x64938C); /* mulss */
    /* comiss xmm1, MEMF(esi + 0xDC) - sets EFLAGS */
    if ((xmm1 <= MEMF(esi + 0xDC))) goto loc_002B989E; /* jbe: below or equal (unsigned <=) */

loc_002B9879: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x92);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002B9894: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esi + 0x24A) = 1;

loc_002B989E: ;
    SET_LO8(eax, MEM8(esi + 0x17D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B9AB8; /* jne: not equal / not zero */

loc_002B98AC: ;
    eax = MEM32(esi + 0x52C);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x6490B4); /* movss */
    MEMF(esi + 0x25C) = xmm1; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_002B9A60; /* jne: not equal / not zero */

loc_002B98CA: ;
    xmm1 = MEMF(0x648EB8); /* movss */
    xmm2 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648E68); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    edx = esi + 0x78;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x6493B0); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0E8); /* movss */
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x10) = eax;
    eax = esp + 8;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM16(esp + 0x14) = 0xF;
    MEM32(esp + 0x10) = 0x12C;
    MEM16(esp + 0x24) = 0xC8;
    MEM16(esp + 0x2C) = 0;
    MEM16(esp + 0x2E) = 0x168;
    MEM16(esp + 0x30) = 0xFFC1;
    MEM16(esp + 0x32) = 0x5A;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEM8(esp + 0x70) = 0;
    MEM8(esp + 0x68) = 0;
    MEM8(esp + 0x69) = 1;
    MEM8(esp + 0x6A) = 1;
    MEM16(esp + 0x6C) = 0x64;
    MEM16(esp + 0x6E) = 0x32;
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_002B99EA: ;
    xmm0 = MEMF(esi + 0x84); /* movss */
    eax = MEM32(0x59CA10);
    MEMF(0x7FCB64) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x88); /* movss */
    MEMF(0x7FCB68) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x8C); /* movss */
    MEMF(0x7FCB6C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD38); /* movss */
    MEMF(0x7FCB58) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD34); /* movss */
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(0x7FCB5C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD30); /* movss */
    MEMF(0x7FCB60) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_002B9A71; /* je: equal / zero */

loc_002B9A56: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002B9A5B: ;
    esp = esp + 8;
    goto loc_002B9A71;

loc_002B9A60: ;
    PUSH32(esp, 0);
    eax = 0x64;
    ecx = esi;
    PUSH32(esp, 0); sub_00140900(); /* call 0x00140900 */

loc_002B9A6E: ;
    esp = esp + 4;

loc_002B9A71: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A9);
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002B9A90: ;
    eax = MEM32(esi + 0x200);
    xmm0 = MEMF(0x5A0060); /* movss */
    eax = eax | 0x1008000;
    MEM8(esi + 0x1D8) = 1;
    MEMF(esi + 0x224) = xmm0; /* movss */
    MEM32(esi + 0x200) = eax;

loc_002B9AB8: ;
    SET_LO8(ecx, MEM8(esi + 0x17D));
    SET_LO8(ecx, LO8(ecx) + 1);
    SET_LO8(eax, LO8(ecx));
    (void)0; /* cmp LO8(eax), 0xA - flags set for next jcc */
    MEM8(esi + 0x234) = 0xFF;
    MEM8(esi + 0x17D) = LO8(ecx);
    if (CMP_BE(LO8(eax), 0xA)) goto loc_002B9ADD; /* jbe: below or equal (unsigned <=) */

loc_002B9AD3: ;
    MEM32(esi + 0x200) = MEM32(esi + 0x200) & 0xFFFF7FFFu;

loc_002B9ADD: ;
    eax = ZX16(MEM16(esi + 0x174));
    eax = eax + 0x4000;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    eax = esi;
    MEMF(esi + 0x114) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002E9550(); /* call 0x002E9550 */

loc_002B9B04: ;
    xmm0 = MEMF(esi + 0x25C); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x1C0); /* addss */
    MEMF(esi + 0x1C0) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x25C); /* movss */
    xmm0 = xmm0 * MEMF(0x649098); /* mulss */
    MEMF(esi + 0x25C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002B9B5C; /* jp: parity */

loc_002B9B49: ;
    if (CMP_BE(MEM8(esi + 0x17D), 0x14)) goto loc_002B9B5C; /* jbe: below or equal (unsigned <=) */

loc_002B9B52: ;
    if (CMP_EQ(MEM16(esi + 0x1D4), 0)) goto loc_002B9B70; /* je: equal / zero */

loc_002B9B5C: ;
    SET_LO8(eax, MEM8(esi + 0x214));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B9B70; /* jne: not equal / not zero */

loc_002B9B66: ;
    if (CMP_NE(MEM16(esi + 0x3AE), 0)) goto loc_002B9BA0; /* jne: not equal / not zero */

loc_002B9B70: ;
    edx = esi;
    PUSH32(esp, 0); sub_002B9BB0(); /* call 0x002B9BB0 */

loc_002B9B77: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x93);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002B9B93: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_002B9B9D: ;
    esp = esp + 0xC;

loc_002B9BA0: ;
    POP32(esp, esi);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_002B9BB0
 * Original: 0x002B9BB0 - 0x002B9D68 (440 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9BB0(void)
{
    float xmm0, xmm1;

loc_002B9BB0: ;
    esp = esp - 0x6C;
    xmm0 = MEMF(0x648EA0); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    esi = esi + 0x78;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    edx = esi;
    edi = MEM32(edx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x20) = edi;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x6493AC); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    eax = 0x14;
    ebx = 0; /* xor self */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0E8); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    PUSH32(esp, 0xFF);
    MEM16(esp + 0x1C) = LO16(eax);
    MEM16(esp + 0x74) = LO16(eax);
    MEM16(esp + 0x76) = LO16(eax);
    ecx = 0x96;
    eax = esp + 0x18;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0x12C;
    MEM16(esp + 0x34) = LO16(ecx);
    MEM16(esp + 0x3C) = LO16(ebx);
    MEM16(esp + 0x3E) = 0x168;
    MEM16(esp + 0x40) = 0xFFC1;
    MEM16(esp + 0x42) = 0x5A;
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM8(esp + 0x80) = 1;
    MEM16(esp + 0x82) = LO16(ecx);
    MEM8(esp + 0x78) = LO8(ebx);
    MEM8(esp + 0x79) = LO8(ebx);
    MEM8(esp + 0x7A) = LO8(ebx);
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_002B9CF6: ;
    esp = esp + 0xC;
    MEM8(esp + 0xC) = 3;
    MEM8(esp + 0xD) = 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002B9D08: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    MEM8(esp + 0x2A) = LO8(ebx);
    edx = edx + 0x1E;
    MEM16(esp + 0x26) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002B9D38: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x186A1;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esi;
    edx = edx + 0x7A120;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x28;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_002B9D5E: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_002B9D70
 * Original: 0x002B9D70 - 0x002BA430 (1728 bytes, 436 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9D70: ;
    esp = esp - 0x14;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    SET_LO16(eax, MEM16(esi + 0x174));
    ecx = MEM32(esi + 0xA4);
    MEM16(esp + 0x18) = LO16(eax);
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, 0x21 - flags set for next jcc */
    MEM8(esp + 0x28) = 0;
    MEM32(esp + 0x20) = ecx;
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(eax, 0x21)) goto loc_002B9DBA; /* jne: not equal / not zero */

loc_002B9DAD: ;
    MEM8(esp + 0x28) = 1;
    MEM32(esp + 0x18) = 1;

loc_002B9DBA: ;
    if (CMP_NE(eax, 0x53)) goto loc_002B9DF7; /* jne: not equal / not zero */

loc_002B9DBF: ;
    eax = MEM32(esi + 0x3C4);
    if (CMP_NE(eax, edi)) goto loc_002B9DD1; /* jne: not equal / not zero */

loc_002B9DC9: ;
    MEMF(esp + 0x14) = xmm1; /* movss */
    goto loc_002B9DF2;

loc_002B9DD1: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002B9DDB: ;
    if (CMP_EQ(eax, edi)) goto loc_002B9DE9; /* je: equal / zero */

loc_002B9DDF: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    goto loc_002B9DEC;

loc_002B9DE9: ;
    xmm0 = xmm1; /* movaps */

loc_002B9DEC: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_002B9DF2: ;
    edi = 1;

loc_002B9DF7: ;
    SET_LO8(ebx, MEM8(esi + 0x250));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002B9E0E; /* jne: not equal / not zero */

loc_002B9E01: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BA1C3; /* je: equal / zero */

loc_002B9E0E: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    eax = ecx;
    if (CMP_L(ecx, edx)) goto loc_002B9E29; /* jl: less (signed <) */

loc_002B9E24: ;
    eax = 0x14;

loc_002B9E29: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    ebp = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B9E5E; /* je: equal / zero */

loc_002B9E3F: ;
    eax = MEM32(esi + 0x568);
    ebx = MEM32(eax + 0xBC);
    if (TEST_Z(ebx, ebx)) goto loc_002B9E58; /* je: equal / zero */

loc_002B9E4F: ;
    eax = esi;
    PUSH32(esp, 0); sub_002D63B0(); /* call 0x002D63B0 */

loc_002B9E56: ;
    goto loc_002B9E78;

loc_002B9E58: ;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = ecx;
    goto loc_002B9E64;

loc_002B9E5E: ;
    eax = ZX8(LO8(ebx));
    eax--;
    (void)0; /* cmp eax, edx - flags set for next jcc */

loc_002B9E64: ;
    if (CMP_L(eax, edx)) goto loc_002B9E6B; /* jl: less (signed <) */

loc_002B9E66: ;
    eax = 0x14;

loc_002B9E6B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    ebp = eax;

loc_002B9E78: ;
    edx = 0; /* xor self */
    if (TEST_Z(edi, edi)) goto loc_002B9E86; /* je: equal / zero */

loc_002B9E7E: ;
    edx = MEM32(ebp + 0xA8);
    goto loc_002B9E94;

loc_002B9E86: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002B9E94; /* je: equal / zero */

loc_002B9E8E: ;
    edx = MEM32(ebp + 0xAC);

loc_002B9E94: ;
    eax = MEM32(ebp + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_002B9EBB; /* je: equal / zero */

loc_002B9E9E: ;
    SET_LO8(eax, MEM8(esi + 0x181));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B9EBB; /* jne: not equal / not zero */

loc_002B9EA8: ;
    xmm0 = MEMF(esi + 0xDC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    SET_LO8(ecx, 1);
    if (1 /* jnp after test - parity */) goto loc_002B9EBF; /* jnp: not parity */

loc_002B9EBB: ;
    SET_LO8(ecx, MEM8(esp + 0x13));

loc_002B9EBF: ;
    if (TEST_Z(edx, edx)) goto loc_002B9EF3; /* je: equal / zero */

loc_002B9EC3: ;
    xmm0 = MEMF(esi + 0xDC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002B9EF3; /* jp: parity */

loc_002B9ED4: ;
    SET_LO8(ebx, MEM8(esp + 0x28));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002B9EE5; /* je: equal / zero */

loc_002B9EDC: ;
    if (CMP_NE(MEM8(esi + 0x180), 0xFF)) goto loc_002B9EEF; /* jne: not equal / not zero */

loc_002B9EE5: ;
    SET_LO8(eax, MEM8(esi + 0x180));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002B9EF7; /* jne: not equal / not zero */

loc_002B9EEF: ;
    SET_LO8(ecx, 2);
    goto loc_002B9EFB;

loc_002B9EF3: ;
    SET_LO8(ebx, MEM8(esp + 0x28));

loc_002B9EF7: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002B9F4B; /* je: equal / zero */

loc_002B9EFB: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002B9F02; /* je: equal / zero */

loc_002B9EFF: ;
    SET_LO8(ecx, LO8(ecx) + 4);

loc_002B9F02: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002B9F0E; /* je: equal / zero */

loc_002B9F0B: ;
    SET_LO8(ecx, LO8(ecx) + 2);

loc_002B9F0E: ;
    ecx = ZX8(LO8(ecx));
    MEM8(esi + 0x180) = 0xB4;
    SET_LO8(edx, MEM8(ecx + 0x59C50B));
    SET_LO8(eax, LO8(edx));
    (void)0; /* cmp LO8(eax), 0x22 - flags set for next jcc */
    MEM8(esi + 0x43D) = LO8(edx);
    MEM32(esi + 0x420) = 0;
    if (CMP_NE(LO8(eax), 0x22)) goto loc_002B9F4B; /* jne: not equal / not zero */

loc_002B9F34: ;
    eax = MEM32(esi + 0x52C);
    if (TEST_NZ(eax, eax)) goto loc_002B9F4B; /* jne: not equal / not zero */

loc_002B9F3E: ;
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;

loc_002B9F4B: ;
    eax = MEM32(0x84A5F8);
    edi = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002B9F5B: ;
    SET_LO8(eax, MEM8(esi + 0x180));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BA19B; /* jne: not equal / not zero */

loc_002B9F69: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BA002; /* je: equal / zero */

loc_002B9F76: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_002BA19B; /* jne: not equal / not zero */

loc_002B9F8A: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edx = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    eax = MEM32(ecx + edx + 4);
    xmm0 = MEMF(eax + 0x5C); /* movss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_002B9FB2: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x6491F8); /* mulss */
    xmm1 = (float)(int32_t)MEM32(ebp + 4); /* cvtsi2ss */
    ebx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)MEM32(ebp + 8); /* cvtsi2ss */
    PUSH32(esp, ecx);
    MEM32(0x7FDC80) = ebx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002EBA00(); /* call 0x002EBA00 */

loc_002B9FDF: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    edi = 0; /* xor self */
    SET_LO16(edi, LO16(eax));
    SET_LO8(eax, MEM8(ebp + 4));
    esp = esp + 4;
    edi = edi + ebx;
    PUSH32(esp, 0); sub_002EB9B0(); /* call 0x002EB9B0 */

loc_002B9FF4: ;
    SET_LO8(ebx, MEM8(esp + 0x28));
    MEMF(esi + 0x118) = xmm0; /* movss */
    goto loc_002BA02F;

loc_002BA002: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002BA00D: ;
    xmm0 = MEMF(eax + 0x118); /* movss */
    xmm0 = xmm0 * MEMF(0x649224); /* mulss */
    MEMF(esi + 0x118) = xmm0; /* movss */
    ecx = MEM32(eax + 0x568);
    SET_LO16(edi, MEM16(ecx + 0x64));

loc_002BA02F: ;
    SET_LO8(eax, MEM8(esi + 0x42F));
    if (CMP_NE(LO8(eax), 0xD)) goto loc_002BA044; /* jne: not equal / not zero */

loc_002BA039: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x118) = xmm0; /* movss */

loc_002BA044: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(0x648D1C); /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002BA0EC; /* je: equal / zero */

loc_002BA054: ;
    /* comiss xmm0, MEMF(esi + 0x118) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x118))) goto loc_002BA085; /* jbe: below or equal (unsigned <=) */

loc_002BA05D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002BA062: ;
    edi = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002BA069: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEMF(esi + 0x118) = xmm0; /* movss */

loc_002BA085: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002BA08A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2710;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(esi + 0x118); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x649B78); /* addss */
    MEMF(esi + 0x118) = xmm0; /* movss */
    eax = edx + edi + -5000;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x170));
    MEM16(esi + 0x172) = LO16(eax);
    edx = edx - eax;
    edx = (uint32_t)((int32_t)edx >> 8);
    edx = edx - 0x50;
    edx = edx & 0xFF;
    if (CMP_GE(edx, 0x60)) goto loc_002BA19B; /* jge: greater or equal (signed >=) */

loc_002BA0E0: ;
    MEM8(esi + 0x43D) = 0x10;
    goto loc_002BA191;

loc_002BA0EC: ;
    /* comiss xmm0, MEMF(esi + 0x118) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x118))) goto loc_002BA11D; /* jbe: below or equal (unsigned <=) */

loc_002BA0F5: ;
    (void)0; /* cmp MEM8(esi + 0x43D), 5 - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x118) = xmm0; /* movss */
    if (CMP_EQ(MEM8(esi + 0x43D), 5)) goto loc_002BA19B; /* je: equal / zero */

loc_002BA10D: ;
    SET_LO16(eax, MEM16(esi + 0x170));
    MEM16(esi + 0x172) = LO16(eax);
    goto loc_002BA19B;

loc_002BA11D: ;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM16(esi + 0x172) = LO16(edi);
    if (CMP_NE(LO8(eax), 1)) goto loc_002BA19B; /* jne: not equal / not zero */

loc_002BA128: ;
    xmm0 = MEMF(0x648FD8); /* movss */
    /* comiss xmm0, MEMF(esi + 0x110) - sets EFLAGS */
    eax = 3;
    if ((xmm0 <= MEMF(esi + 0x110))) goto loc_002BA143; /* jbe: below or equal (unsigned <=) */

loc_002BA13E: ;
    eax = 4;

loc_002BA143: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x170));
    MEM8(esi + 0x3EF) = LO8(eax);
    MEM8(esi + 0x3EE) = LO8(eax);
    ecx = ecx - edi;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    ecx = ecx - 0x50;
    ecx = ecx & 0xFF;
    if (CMP_GE(ecx, 0x60)) goto loc_002BA18A; /* jge: greater or equal (signed >=) */

loc_002BA16B: ;
    xmm1 = MEMF(esi + 0x110); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002BA181; /* jbe: below or equal (unsigned <=) */

loc_002BA178: ;
    MEM8(esi + 0x43D) = 4;
    goto loc_002BA191;

loc_002BA181: ;
    MEM8(esi + 0x43D) = 5;
    goto loc_002BA191;

loc_002BA18A: ;
    MEM8(esi + 0x43D) = 3;

loc_002BA191: ;
    MEM32(esi + 0x420) = 0;

loc_002BA19B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BA1C3; /* je: equal / zero */

loc_002BA1A4: ;
    edx = ZX16(MEM16(esi + 0x60));
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_GE(edx, eax)) goto loc_002BA1C3; /* jge: greater or equal (signed >=) */

loc_002BA1B3: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x204);
    if (TEST_NZ(eax, eax)) goto loc_002BA1D0; /* jne: not equal / not zero */

loc_002BA1C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002DA170(); /* call 0x002DA170 */

loc_002BA1C9: ;
    SET_LO8(ebx, MEM8(esp + 0x2C));
    esp = esp + 4;

loc_002BA1D0: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(ecx + 0x39));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002BA225; /* je: equal / zero */

loc_002BA1E2: ;
    edx = ZX8(LO8(ebx));
    MEM32(esp + 0x28) = eax;
    SET_LO8(eax, MEM8(esi + 0x43D));
    (void)0; /* cmp LO8(eax), MEM8(edx + 0x59C514) - flags set for next jcc */
    eax = MEM32(esp + 0x28);
    if (CMP_NE(LO8(eax), MEM8(edx + 0x59C514))) goto loc_002BA205; /* jne: not equal / not zero */

loc_002BA1FB: ;
    SET_LO8(edx, MEM8(esi + 0x20C));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002BA225; /* je: equal / zero */

loc_002BA205: ;
    MEM8(ecx + 0x39) = 0;
    MEM8(eax + 0x180) = 0;
    MEM8(eax + 0x17D) = 0;
    MEM8(eax + 0x234) = 0;
    MEM8(esi + 0x43D) = 0x11;

loc_002BA225: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002BA2C9; /* jne: not equal / not zero */

loc_002BA233: ;
    SET_LO8(ecx, MEM8(esi + 0x43D));
    ebp = ZX8(LO8(ebx));
    if (CMP_NE(LO8(ecx), MEM8(ebp + 0x59C514))) goto loc_002BA27E; /* jne: not equal / not zero */

loc_002BA244: ;
    edx = ZX8(MEM8(ebp + 0x59C516));
    eax = MEM32(ebp * 4 + 0x6F1E60);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_002BA268: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x431C0000);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002DAA50(); /* call 0x002DAA50 */

loc_002BA279: ;
    esp = esp + 0x24;
    goto loc_002BA2C9;

loc_002BA27E: ;
    SET_LO8(ecx, MEM8(0x7FDCA8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002BA2C9; /* je: equal / zero */

loc_002BA288: ;
    ecx = MEM32(esi + 0x468);
    if (TEST_Z(HI8(ecx), 4)) goto loc_002BA2C9; /* je: equal / zero */

loc_002BA293: ;
    edi = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002BA29E: ;
    ecx = MEM32(ebp * 4 + 0x6F1E60);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_002BA2AD: ;
    edx = ZX8(MEM8(ebp + 0x59C514));
    PUSH32(esp, edx);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x42480000);
    ecx = esi;
    PUSH32(esp, 0); sub_002DADF0(); /* call 0x002DADF0 */

loc_002BA2C6: ;
    esp = esp + 0x10;

loc_002BA2C9: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x28) = 0;
    ebp = 0xA;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002BA2ED; /* je: equal / zero */

loc_002BA2DA: ;
    xmm0 = MEMF(esi + 0x110); /* movss */
    /* comiss xmm0, MEMF(0x648D1C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648D1C))) goto loc_002BA2F5; /* ja: above (unsigned >) */

loc_002BA2EB: ;
    goto loc_002BA33A;

loc_002BA2ED: ;
    if (CMP_NE(MEM32(esi + 0xA4), ebp)) goto loc_002BA33A; /* jne: not equal / not zero */

loc_002BA2F5: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x170));
    SET_LO16(eax, LO16(eax) - MEM16(esi + 0x172));
    (void)0; /* cmp LO16(eax), 0x3000 - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (CMP_LE(LO16(eax), 0x3000)) goto loc_002BA319; /* jle: less or equal (signed <=) */

loc_002BA30F: ;
    MEM32(esp + 0x28) = 0x3000;
    goto loc_002BA327;

loc_002BA319: ;
    if (CMP_GE(LO16(eax), 0xD000)) goto loc_002BA327; /* jge: greater or equal (signed >=) */

loc_002BA31F: ;
    MEM32(esp + 0x28) = 0xFFFFD000u;

loc_002BA327: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002BA33A; /* je: equal / zero */

loc_002BA32B: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BA33A; /* jne: not equal / not zero */

loc_002BA335: ;
    MEM16(esp + 0x28) = (uint32_t)((int32_t)MEM16(esp + 0x28) >> 1);

loc_002BA33A: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649508); /* mulss */
    xmm0 = xmm0 - MEMF(esi + 0x1CC); /* subss */
    xmm0 = xmm0 * MEMF(0x648EB0); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x1CC); /* addss */
    MEMF(esi + 0x1CC) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002BA3BA; /* je: equal / zero */

loc_002BA36F: ;
    eax = MEM32(esp + 0x1C);
    SET_LO16(eax, LO16(eax) - MEM16(esi + 0x174));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x52C);
    ebx = MEM32(esi + 0x52C);
    eax = eax << 2;
    eax = SX16(LO16(eax));
    eax = eax - ecx;
    ecx = MEM32(esi + 0x530);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    ebx = ebx + eax;
    eax = ecx + edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    ecx = ecx - eax;
    MEM32(esi + 0x52C) = ebx;
    MEM32(esi + 0x530) = ecx;

loc_002BA3BA: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BA3E9; /* je: equal / zero */

loc_002BA3C3: ;
    SET_LO8(eax, MEM8(0x7FDCA3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BA3E9; /* je: equal / zero */

loc_002BA3CC: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002BA3E9; /* je: equal / zero */

loc_002BA3D6: ;
    SET_LO8(ecx, MEM8(eax + 0x2DA));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002BA3E9; /* je: equal / zero */

loc_002BA3E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F75E0(); /* call 0x002F75E0 */

loc_002BA3E6: ;
    esp = esp + 4;

loc_002BA3E9: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x53)) goto loc_002BA428; /* jne: not equal / not zero */

loc_002BA3EF: ;
    eax = MEM32(esp + 0x20);
    if (CMP_NE(eax, 1)) goto loc_002BA408; /* jne: not equal / not zero */

loc_002BA3F8: ;
    if (CMP_EQ(MEM32(esi + 0xA4), ebp)) goto loc_002BA415; /* je: equal / zero */

loc_002BA400: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_002BA408: ;
    if (CMP_NE(eax, ebp)) goto loc_002BA428; /* jne: not equal / not zero */

loc_002BA40C: ;
    if (CMP_NE(MEM32(esi + 0xA4), 1)) goto loc_002BA428; /* jne: not equal / not zero */

loc_002BA415: ;
    eax = MEM32(esi + 0x3C4);
    xmm1 = MEMF(esp + 0x14); /* movss */
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_002BA428: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002BA4E0
 * Original: 0x002BA4E0 - 0x002BA5E4 (260 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA4E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BA4E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x17F));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x1B7) = 0xF;
    MEM8(esi + 0x17A) = 0xA;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BA557; /* je: equal / zero */

loc_002BA4FD: ;
    SET_LO8(eax, MEM8(esi + 0x17D));
    if (CMP_AE(LO8(eax), 0x64)) goto loc_002BA513; /* jae: above or equal (unsigned >=) */

loc_002BA507: ;
    SET_LO8(eax, LO8(eax) + MEM8(0x7FA250));
    MEM8(esi + 0x17D) = LO8(eax);

loc_002BA513: ;
    if (CMP_BE(MEM8(esi + 0x17D), 4)) goto loc_002BA595; /* jbe: below or equal (unsigned <=) */

loc_002BA51C: ;
    SET_LO8(eax, MEM8(esi + 0x45C));
    if (CMP_EQ(LO8(eax), 3)) goto loc_002BA595; /* je: equal / zero */

loc_002BA526: ;
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    ecx = MEM32(0x84A5F8);
    SET_LO16(edx, MEM16(ecx + 0x170));
    MEM16(esi + 0x172) = LO16(edx);
    MEM32(esi + 0x420) = 0;
    MEM8(esi + 0x43D) = 4;
    if (CMP_NE(LO8(eax), 2)) goto loc_002BA595; /* jne: not equal / not zero */

loc_002BA54F: ;
    MEM8(esi + 0x43D) = LO8(eax);
    goto loc_002BA595;

loc_002BA557: ;
    if (CMP_BE(MEM8(esi + 0x17D), 0x3C)) goto loc_002BA58E; /* jbe: below or equal (unsigned <=) */

loc_002BA560: ;
    eax = 0; /* xor self */
    MEM32(0x7FDBF4) = eax;
    MEM32(0x7FDBF0) = eax;
    MEM32(0x7FDBEC) = eax;
    MEM32(0x7FDBE8) = eax;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, eax);
    MEM32(0x7FDBF8) = 0xFF020133u;
    PUSH32(esp, 0); sub_00305E40(); /* call 0x00305E40 */

loc_002BA58B: ;
    esp = esp + 4;

loc_002BA58E: ;
    MEM8(esi + 0x17D) = 0;

loc_002BA595: ;
    if (CMP_NE(MEM8(esi + 0x43D), 4)) goto loc_002BA5CA; /* jne: not equal / not zero */

loc_002BA59E: ;
    SET_LO8(eax, MEM8(esi + 0x17D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BA5B6; /* jne: not equal / not zero */

loc_002BA5A8: ;
    SET_LO16(ecx, MEM16(esi + 0x170));
    MEM16(esi + 0x172) = LO16(ecx);

loc_002BA5B6: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x172));
    SET_LO8(eax, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002EA580(); /* call 0x002EA580 */

loc_002BA5C7: ;
    esp = esp + 4;

loc_002BA5CA: ;
    SET_LO8(eax, MEM8(esi + 0x20C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x17F) = 0;
    eax = esi;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002BA5E4(); return; } /* jne: not equal / not zero */

loc_002BA5DD: ;
    PUSH32(esp, 0); sub_002E6F10(); /* call 0x002E6F10 */

loc_002BA5E2: ;
    g_seh_ebp = ebp; sub_002BA5E9(); return; /* tail jmp 0x002BA5E9 */

}

/**
 * sub_002BA660
 * Original: 0x002BA660 - 0x002BA785 (293 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA660(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002BA660: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002DA170(); /* call 0x002DA170 */

loc_002BA66B: ;
    eax = MEM32(0x84A5F8);
    xmm1 = MEMF(esi + 0x7C); /* movss */
    xmm1 = xmm1 + MEMF(0x64B400); /* addss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    esp = esp + 4;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, MEMF(0x6497E0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6497E0))) goto loc_002BA756; /* jbe: below or equal (unsigned <=) */

loc_002BA696: ;
    xmm1 = MEMF(0x648EC0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002BA756; /* jbe: below or equal (unsigned <=) */

loc_002BA6A7: ;
    xmm1 = MEMF(esi + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x80); /* subss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x78); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x64A240); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_002BA756; /* jbe: below or equal (unsigned <=) */

loc_002BA6E0: ;
    xmm1 = MEMF(0x64B3FC); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x7C); /* subss */
    /* comiss xmm0, MEMF(0x649368) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649368))) goto loc_002BA727; /* jbe: below or equal (unsigned <=) */

loc_002BA6F9: ;
    xmm2 = MEMF(0x648CE4); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_002BA727; /* jbe: below or equal (unsigned <=) */

loc_002BA706: ;
    PUSH32(esp, esi);
    ecx = 4;
    MEMF(esi + 0x7C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002BA716: ;
    esp = esp + 4;
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BA727: ;
    PUSH32(esp, esi);
    ecx = 1;
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002BA732: ;
    ecx = MEM32(esi + 0x424);
    esp = esp + 4;
    if (CMP_EQ(ecx, eax)) goto loc_002BA783; /* je: equal / zero */

loc_002BA73F: ;
    MEM16(esi + 0x428) = 0;
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BA756: ;
    eax = MEM32(esi + 0x424);
    if (TEST_NZ(eax, eax)) goto loc_002BA783; /* jne: not equal / not zero */

loc_002BA760: ;
    PUSH32(esp, esi);
    ecx = 1;
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002BA76B: ;
    MEM16(esi + 0x428) = 0;
    esp = esp + 4;
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = eax;

loc_002BA783: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA790
 * Original: 0x002BA790 - 0x002BA800 (112 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA790(void)
{
    float xmm0, xmm1;

loc_002BA790: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_002BA7A7: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    esp = esp + 8;
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x649080); /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002BA7D2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x60BD98);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003138B0(); /* call 0x003138B0 */

loc_002BA7E4: ;
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x60BD98);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003138B0(); /* call 0x003138B0 */

loc_002BA7FB: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA800
 * Original: 0x002BA800 - 0x002BA892 (146 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm2, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002BA800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    xmm5 = MEMF(ebp + 0x20); /* movss */
    xmm4 = MEMF(ebp + 0x1C); /* movss */
    xmm2 = MEMF(ebp + 0x18); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0); sub_0029C950(); /* call 0x0029C950 */

loc_002BA844: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esp = esp + 0x18;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(3) */
    /* fstp st(0) */
    /* fstp st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(ebx, ebx)) { sub_002BA892(); return; } /* je: equal / zero */

loc_002BA879: ;
    eax = MEM32(ebx + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002BA884: ;
    if (TEST_Z(eax, eax)) { sub_002BA892(); return; } /* je: equal / zero */

loc_002BA888: ;
    eax = ZX16(MEM16(eax + 0x60));
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_002BA89A(); return; /* tail jmp 0x002BA89A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002BAAA0
 * Original: 0x002BAAA0 - 0x002BAAD9 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAAA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BAAA0: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm1 = MEMF(esi + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x80); /* subss */
    xmm0 = xmm0 - MEMF(esi + 0x78); /* subss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm1; /* movss */
    if (1 /* jp after test - parity */) { sub_002BAAD9(); return; } /* jp: parity */

loc_002BAACC: ;
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002BAAD9(); return; } /* jp: parity */

loc_002BAAD5: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002BAB07(); return; /* tail jmp 0x002BAB07 */

}

/**
 * sub_002BABA0
 * Original: 0x002BABA0 - 0x002BACA9 (265 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BABA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002BABA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6C;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) { sub_002BACA9(); return; } /* je: equal / zero */

loc_002BABBA: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F0C94);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_002BABC9: ;
    esp = esp + 8;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5A02F0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_002BABE0: ;
    xmm0 = MEMF(esp + 0x60); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    ecx = esp + 0x18;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    eax = esp + 0x24;
    edx = ecx;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_002BAC63: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(ebp + 8) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_002BAC89; /* jbe: below or equal (unsigned <=) */

loc_002BAC7C: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */
    MEMF(ebp + 8) = xmm0; /* movss */

loc_002BAC89: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = eax;
    g_seh_ebp = ebp; sub_002BACC7(); return; /* tail jmp 0x002BACC7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002BAE10
 * Original: 0x002BAE10 - 0x002BAEB4 (164 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAE10(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BAE10: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002BAEB3; /* je: equal / zero */

loc_002BAE1E: ;
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_002BAEB3; /* jne: not equal / not zero */

loc_002BAE2C: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BAE3E; /* je: equal / zero */

loc_002BAE35: ;
    eax = ZX8(MEM8(esi + 0x236));
    goto loc_002BAE51;

loc_002BAE3E: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002BAE49: ;
    if (TEST_Z(eax, eax)) goto loc_002BAEB3; /* je: equal / zero */

loc_002BAE4D: ;
    eax = ZX16(MEM16(eax + 0x60));

loc_002BAE51: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ecx = eax;
    if (CMP_L(eax, ecx)) goto loc_002BAE63; /* jl: less (signed <) */

loc_002BAE5E: ;
    ecx = 0x14;

loc_002BAE63: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1B0);
    edx = MEM32(ecx + 0x7632CC);
    if (TEST_Z(edx, edx)) goto loc_002BAEB3; /* je: equal / zero */

loc_002BAE73: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    edx = MEM32(eax + 0x568);
    ecx = MEM32(edx + 0x2B0);
    if (TEST_Z(ecx, ecx)) goto loc_002BAEB3; /* je: equal / zero */

loc_002BAE91: ;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002BAEB3; /* je: equal / zero */

loc_002BAE9B: ;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(eax, MEM8(esi + 0x543));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(esi + 0x543) = LO8(eax);

loc_002BAEB3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BAEC0
 * Original: 0x002BAEC0 - 0x002BAF60 (160 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAEC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BAEC0: ;
    esp = esp - 0x20;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    SET_LO8(ecx, MEM8(ebp + 0x250));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002BAF06; /* je: equal / zero */

loc_002BAEDF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + eax + -1744;
    MEM32(esp + 0x10) = ecx;
    MEMF(ecx + 0xD0) = xmm0; /* movss */
    MEMF(ecx + 0xD4) = xmm0; /* movss */

loc_002BAF06: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002BAF17; /* je: equal / zero */

loc_002BAF10: ;
    edx = ZX8(MEM8(ebp + 0x236));

loc_002BAF17: ;
    edi = MEM32(ebp + 0x23C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    MEM32(esp + 0x1C) = edx;
    MEM8(ebp + 0x543) = 0;
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002BAF34: ;
    xmm0 = MEMF(ebp + 0x110); /* movss */
    /* comiss xmm0, MEMF(ebp + 0x118) - sets EFLAGS */
    MEM8(esp + 0x34) = LO8(ebx);
    if ((xmm0 <= MEMF(ebp + 0x118))) { sub_002BAF60(); return; } /* jbe: below or equal (unsigned <=) */

loc_002BAF49: ;
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) { sub_002BAF60(); return; } /* jbe: below or equal (unsigned <=) */

loc_002BAF52: ;
    PUSH32(esp, 0x60BDB8);
    eax = ebp;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_002BAF5E: ;
    g_seh_ebp = ebp; sub_002BAF97(); return; /* tail jmp 0x002BAF97 */

}

/**
 * sub_002BBCD0
 * Original: 0x002BBCD0 - 0x002BBDCD (253 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBCD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBCD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebp = MEM32(edi + 0x564);
    ebx = 0; /* xor self */
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    SET_LO8(eax, 3);
    MEM8(edi + 0xA1) = LO8(eax);
    MEM16(edi + 0x1EC) = LO16(ebx);
    MEM8(edi + 0x234) = 0xFF;
    MEM8(edi + 0x57C) = LO8(ebx);
    if (CMP_EQ(ebp, ebx)) goto loc_002BBDC9; /* je: equal / zero */

loc_002BBD03: ;
    if (CMP_NE(MEM8(ebp + 0x2A8), LO8(eax))) goto loc_002BBD10; /* jne: not equal / not zero */

loc_002BBD0B: ;
    ebx = 1;

loc_002BBD10: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + ecx;
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_0003E350(); /* call 0x0003E350 */

loc_002BBD2A: ;
    (void)0; /* cmp ebx, 2 - flags set for next jcc */
    eax = MEM32(edi + 0x568);
    MEM32(eax + 0xA0) = 0x29;
    if (CMP_GE(ebx, 2)) goto loc_002BBD4B; /* jge: greater or equal (signed >=) */

loc_002BBD3F: ;
    ecx = MEM32(ebx * 4 + 0x8470FC);
    edi = MEM32(ecx + 8);
    goto loc_002BBD50;

loc_002BBD4B: ;
    edi = 0x75A0B4;

loc_002BBD50: ;
    if (CMP_EQ(MEM8(edi), 0)) goto loc_002BBD6F; /* je: equal / zero */

loc_002BBD55: ;
    eax = ZX8(MEM8(edi + 2));
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003D2260(); /* call 0x003D2260 */

loc_002BBD65: ;
    esp = esp + 8;
    eax = edi;
    PUSH32(esp, 0); sub_0004E0D0(); /* call 0x0004E0D0 */

loc_002BBD6F: ;
    SET_LO8(ecx, MEM8(ebp + 0x2A8));
    SET_LO8(eax, MEM8(esi + 0x217));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x543));
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x543) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BBDC8; /* je: equal / zero */

loc_002BBD91: ;
    eax = ZX8(MEM8(ebp + 0x2A8));
    MEM8(eax + eax * 2 + 0x771BC4) = 0xFF;
    MEM8(eax + eax * 2 + 0x771BC5) = 0;
    MEM8(eax + eax * 2 + 0x771BC6) = 0;
    MEM8(eax + 0x771BC0) = 0xB4;
    MEM16(eax * 2 + 0x771BD0) = 0x14;
    MEM8(esi + 0x217) = 0;

loc_002BBDC8: ;
    POP32(esp, esi);

loc_002BBDC9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BBDD0
 * Original: 0x002BBDD0 - 0x002BBDFF (47 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBDD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBDD0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0xA1));
    SET_LO8(ecx, 3);
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_002BBDF6; /* je: equal / zero */

loc_002BBDE0: ;
    MEM8(eax + 0xA1) = LO8(ecx);
    MEM16(eax + 0x1EC) = 0;
    MEM8(eax + 0x234) = 0xFF;

loc_002BBDF6: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002DA170(); return; /* tail jmp 0x002DA170 */

}

/**
 * sub_002BBE00
 * Original: 0x002BBE00 - 0x002BBECF (207 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBE00(void)
{
    uint32_t ebp;
    float xmm0, xmm5;

loc_002BBE00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002BBE25: ;
    xmm0 = MEMF(edx + 0x30); /* movss */
    ecx = MEM32(esi + 0x568);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x34); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x38); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x2EC); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x3C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002BBE88: ;
    esp = esp + 0x24;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002BBE9B: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002BBEA7: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(edx + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    POP32(esp, edi);
    MEMF(edx + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    POP32(esp, esi);
    MEMF(edx + 0x38) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BBED0
 * Original: 0x002BBED0 - 0x002BBFA2 (210 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBED0(void)
{
    uint32_t ebp;
    float xmm0, xmm5;

loc_002BBED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002BBEF5: ;
    xmm0 = MEMF(edx + 0x30); /* movss */
    ecx = MEM32(esi + 0x568);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x34); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x38); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(ecx + 0x2E8); /* subss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x3C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002BBF5B: ;
    esp = esp + 0x24;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002BBF6E: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002BBF7A: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(edx + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    POP32(esp, edi);
    MEMF(edx + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    POP32(esp, esi);
    MEMF(edx + 0x38) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BBFB0
 * Original: 0x002BBFB0 - 0x002BC116 (358 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBFB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_002BBFB0: ;
    esp = esp - 0x110;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x568);
    eax = MEM32(ebx + 0x4D4);
    ebx = ebx + 0x4D4;
    if (TEST_Z(eax, eax)) goto loc_002BBFD7; /* je: equal / zero */

loc_002BBFCD: ;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_002BBFD2: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_002BBFD7: ;
    eax = MEM32(edi + 0x114);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_002BBFE6: ;
    ecx = MEM32(0x74A598);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x59D958);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_002BC000: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F9560(); /* call 0x002F9560 */

loc_002BC015: ;
    edx = MEM32(edi + 0x568);
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x648F60); /* movss */
    MEM32(edx + 0x4D4) = eax;
    eax = MEM32(edi + 0x568);
    xmm0 = MEMF(edi + 0x114); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    ecx = MEM32(eax + 0x4D4);
    MEMF(ecx + 0x40) = xmm2; /* movss */
    edx = MEM32(edi + 0x568);
    eax = MEM32(edx + 0x4D4);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */
    POP32(esp, ebx);
    if ((xmm2 <= xmm0)) goto loc_002BC069; /* jbe: below or equal (unsigned <=) */

loc_002BC060: ;
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_002BC060; /* ja: above (unsigned >) */

loc_002BC069: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 < xmm3)) goto loc_002BC079; /* jb: below (unsigned <) */

loc_002BC06E: ;
    edi = edi;

loc_002BC070: ;
    xmm1 = xmm1 - xmm3; /* subss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 >= xmm3)) goto loc_002BC070; /* jae: above or equal (unsigned >=) */

loc_002BC079: ;
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(0x75A1A0) = xmm2; /* movss */
    MEMF(0x75A1C8) = xmm0; /* movss */
    MEMF(0x75A1F0) = xmm2; /* movss */
    MEMF(0x75A1A4) = xmm2; /* movss */
    MEMF(0x75A19C) = xmm2; /* movss */
    MEMF(0x75A1CC) = xmm2; /* movss */
    MEMF(0x75A1C4) = xmm0; /* movss */
    MEMF(0x75A1F4) = xmm2; /* movss */
    MEMF(0x75A1EC) = xmm2; /* movss */
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002BC0E2; /* je: equal / zero */

loc_002BC0D0: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x60BE18);
    PUSH32(esp, 0); sub_00039190(); /* call 0x00039190 */

loc_002BC0DD: ;
    xmm0 = MEMF(esp); /* movss */

loc_002BC0E2: ;
    eax = MEM32(edi + 0x564);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = esi + 0x360;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0004BA80(); /* call 0x0004BA80 */

loc_002BC0FE: ;
    eax = MEM32(edi + 0x564);
    MEM8(0x84A5B0) = 0;
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_002BC120
 * Original: 0x002BC120 - 0x002BC176 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC120(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BC120: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x568);
    eax = MEM32(ebx + 0x4D4);
    ebx = ebx + 0x4D4;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_002BC142; /* je: equal / zero */

loc_002BC138: ;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_002BC13D: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_002BC142: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002BC154; /* je: equal / zero */

loc_002BC14C: ;
    esi = MEM32(eax + 4);
    PUSH32(esp, 0); sub_00039210(); /* call 0x00039210 */

loc_002BC154: ;
    eax = MEM32(0x8470DC);
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_002BC163: ;
    eax = MEM32(edi + 0x564);
    POP32(esp, esi);
    MEM8(0x84A5B0) = 0;
    MEM8(eax) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC180
 * Original: 0x002BC180 - 0x002BD4CA (4938 bytes, 1041 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC180: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    eax = MEM32(ebp + 0x564);
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(esp + 0xF) = 0;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_002BC25A; /* je: equal / zero */

loc_002BC19E: ;
    ecx = MEM32(ebp + 0x56C);
    edx = MEM32(ecx + 0x1A8);
    if (TEST_Z(edx, edx)) goto loc_002BC25A; /* je: equal / zero */

loc_002BC1B2: ;
    SET_LO8(ecx, MEM8(ebp + 0x250));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002BC25A; /* jne: not equal / not zero */

loc_002BC1C0: ;
    SET_LO8(ebx, MEM8(0x84A5B0));
    esi = MEM32(eax + 4);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    ecx = esi;
    MEM8(0x84A5B0) = LO8(edx);
    PUSH32(esp, 0); sub_000495E0(); /* call 0x000495E0 */

loc_002BC1DB: ;
    eax = MEM32(esi + 0x8E8);
    ecx = ZX8(MEM8(eax + 0x2A8));
    MEM8(ecx + 0x762E40) = 3;
    edx = MEM32(ebp + 0x564);
    ecx = MEM32(edx + 4);
    ecx = ecx + 0x360;
    PUSH32(esp, 0); sub_000495E0(); /* call 0x000495E0 */

loc_002BC203: ;
    SET_LO8(eax, MEM8(0x84A5B0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xF) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BC24B; /* je: equal / zero */

loc_002BC211: ;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, 0x43700000);
    PUSH32(esp, 0x43A00000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = 0x2CF;
    MEM32(0x6B99E4) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_001D0AE0(); /* call 0x001D0AE0 */

loc_002BC246: ;
    esp = esp + 0x18;
    goto loc_002BC25A;

loc_002BC24B: ;
    eax = MEM32(0x8470DC);
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_002BC25A: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BC277; /* jne: not equal / not zero */

loc_002BC264: ;
    SET_LO8(eax, MEM8(ebp + 0x20C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BC277; /* jne: not equal / not zero */

loc_002BC26E: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BC28D; /* je: equal / zero */

loc_002BC277: ;
    eax = MEM32(0x8470DC);
    esi = 0x21;
    MEM8(0x84A5B0) = 0;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_002BC28D: ;
    eax = MEM32(ebp + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_002BC2C8; /* jne: not equal / not zero */

loc_002BC2A5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xE1);
    PUSH32(esp, 0x60BDD0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002BC2B8: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002BC2C2; /* je: equal / zero */

loc_002BC2BF: ;
    MEM8(eax) = 0;

loc_002BC2C2: ;
    MEM32(ebp + 0x570) = eax;

loc_002BC2C8: ;
    ebx = MEM32(ebp + 0x570);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x24) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_002BD4C3; /* je: equal / zero */

loc_002BC2DA: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM8(ebp + 0x1B3) = 1;
    MEM8(ebp + 0x17A) = 1;
    MEM8(ebp + 0x42E) = 0;
    eax = ecx;
    if (CMP_L(ecx, eax)) goto loc_002BC305; /* jl: less (signed <) */

loc_002BC300: ;
    eax = 0x14;

loc_002BC305: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(ecx, 2)) goto loc_002BC325; /* jge: greater or equal (signed >=) */

loc_002BC319: ;
    edx = MEM32(ecx * 4 + 0x8470FC);
    esi = MEM32(edx + 8);
    goto loc_002BC32A;

loc_002BC325: ;
    esi = 0x75A0B4;

loc_002BC32A: ;
    if (CMP_G(ecx, MEM32(0x84A144))) goto loc_002BC35E; /* jg: greater (signed >) */

loc_002BC332: ;
    SET_LO8(edx, MEM8(ecx + 0x771BEC));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002BC35E; /* je: equal / zero */

loc_002BC33C: ;
    xmm0 = MEMF(ecx * 4 + 0x771C28); /* movss */
    /* comiss xmm0, MEMF(0x648F58) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648F58))) goto loc_002BC35E; /* jbe: below or equal (unsigned <=) */

loc_002BC34E: ;
    if (CMP_EQ(MEM32(0x776574), 2)) goto loc_002BC35E; /* je: equal / zero */

loc_002BC357: ;
    edx = eax;
    PUSH32(esp, 0); sub_0004DAE0(); /* call 0x0004DAE0 */

loc_002BC35E: ;
    xmm0 = MEMF(esi + 0x24); /* movss */
    xmm3 = MEMF(esi + 0x20); /* movss */
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x200);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x2C); /* movss */
    edi = edi | 0x40;
    MEM32(ebp + 0x3B8) = eax;
    eax = ebp + 0x84;
    MEM32(ebp + 0x200) = edi;
    ecx = ebp + 0x6BC;
    edx = eax;
    edi = MEM32(edx);
    esi = ecx;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edx;
    SET_LO8(edx, MEM8(ebp + 0x20B));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002BC3CA; /* je: equal / zero */

loc_002BC3C2: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(ebp + 0x20B) = LO8(edx);

loc_002BC3CA: ;
    SET_LO8(edx, MEM8(ebp + 0x20C));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002BC472; /* je: equal / zero */

loc_002BC3D8: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002E84E0(); /* call 0x002E84E0 */

loc_002BC3DF: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002E9550(); /* call 0x002E9550 */

loc_002BC3E6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x174);
    eax = eax + 0x4000;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(ebp + 0x250));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEMF(ebp + 0x114) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BD4C2; /* je: equal / zero */

loc_002BC414: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    ecx = MEM32(eax + 0x200);
    MEM8(eax + 0x251) = 0;
    edx = MEM32(ebp + 0x110);
    POP32(esp, edi);
    ecx = ecx & 0xFFFFFBFFu;
    POP32(esp, esi);
    MEM32(eax + 0x110) = edx;
    MEM8(eax + 0x43D) = 0x21;
    MEM32(eax + 0x420) = 0;
    MEM8(eax + 0x20C) = 0;
    MEM32(eax + 0x200) = ecx;
    MEM8(ebp + 0x250) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_002BC472: ;
    SET_LO8(edx, MEM8(ebp + 0x20A));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002BC64C; /* jne: not equal / not zero */

loc_002BC480: ;
    esi = MEM32(esp + 0x14);
    MEM8(ebp + 0x1B5) = 0;
    xmm0 = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    xmm1 = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002EBA00(); /* call 0x002EBA00 */

loc_002BC4A0: ;
    SET_LO8(ecx, MEM8(esi + 8));
    esp = esp + 4;
    edx = eax;
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, 0); sub_002EB9B0(); /* call 0x002EB9B0 */

loc_002BC4B0: ;
    eax = MEM32(esi + 0x6C);
    if (TEST_Z(eax, eax)) goto loc_002BC4BA; /* je: equal / zero */

loc_002BC4B7: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_002BC4BA: ;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    SET_LO16(eax, MEM16(ebp + 0x174));
    MEM16(ebp + 0x172) = LO16(eax);
    if ((xmm0 <= MEMF(0x648D14))) goto loc_002BC4E0; /* jbe: below or equal (unsigned <=) */

loc_002BC4D1: ;
    ecx = MEM32(0x7FDC80);
    ecx = ecx + edx;
    MEM16(ebp + 0x172) = LO16(ecx);

loc_002BC4E0: ;
    xmm0 = xmm0 * MEMF(0x648F20); /* mulss */
    MEMF(ebp + 0x118) = xmm0; /* movss */
    MEM8(ebp + 0x43D) = 7;
    MEM32(ebp + 0x420) = 0;
    eax = MEM32(esi + 0x84);
    if (TEST_NZ(eax, eax)) goto loc_002BC54E; /* jne: not equal / not zero */

loc_002BC50B: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648EA4) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648EA4))) goto loc_002BC54E; /* ja: above (unsigned >) */

loc_002BC51C: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0, MEMF(0x648D40) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D40))) goto loc_002BC53A; /* jbe: below or equal (unsigned <=) */

loc_002BC52B: ;
    xmm0 = MEMF(0x649824); /* movss */
    /* comiss xmm0, MEMF(esp + 0x3C) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x3C))) goto loc_002BC54E; /* ja: above (unsigned >) */

loc_002BC53A: ;
    eax = MEM32(esi + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_002BC586; /* je: equal / zero */

loc_002BC544: ;
    eax = MEM32(esi + 0x80);
    if (TEST_NZ(eax, eax)) goto loc_002BC586; /* jne: not equal / not zero */

loc_002BC54E: ;
    edi = ebp;
    MEM8(ebp + 0x43D) = 8;
    MEM8(ebp + 0x20A) = 1;
    PUSH32(esp, 0); sub_002BBFB0(); /* call 0x002BBFB0 */

loc_002BC563: ;
    xmm0 = MEMF(0x6490B8); /* movss */
    MEM8(ebx) = 1;
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0xD4) = xmm0; /* movss */

loc_002BC586: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002DA170(); /* call 0x002DA170 */

loc_002BC58C: ;
    SET_LO8(eax, MEM8(0x7FDCA1));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BC629; /* je: equal / zero */

loc_002BC59C: ;
    xmm0 = MEMF(ebp + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648E5C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E5C))) goto loc_002BC606; /* jbe: below or equal (unsigned <=) */

loc_002BC5AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x305F40);
    ecx = 0; /* xor self */
    eax = 0xFF010074u;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_002BC5C5: ;
    eax = ZX8(MEM8(0x7FDCA1));
    edx = ZX16(MEM16(ebp + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, edx);
    edx = eax + ecx + -1744;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002E9BB0(); /* call 0x002E9BB0 */

loc_002BC5EA: ;
    SET_LO8(eax, MEM8(0x7FDCA1));
    esp = esp + 0x1C;
    edi = ebp;
    MEM8(ebp + 0x250) = LO8(eax);
    MEM8(ebp + 0x20A) = 1;
    PUSH32(esp, 0); sub_002BBFB0(); /* call 0x002BBFB0 */

loc_002BC606: ;
    xmm0 = MEMF(0x6490B8); /* movss */
    MEM8(ebx) = 1;
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0xD4) = xmm0; /* movss */

loc_002BC629: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 0x648) = xmm0; /* movss */
    MEMF(ebp + 0x644) = xmm0; /* movss */
    MEMF(ebp + 0x640) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_002BC64C: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BC707; /* jne: not equal / not zero */

loc_002BC66A: ;
    edx = MEM32(0x84A5F8);
    xmm0 = MEMF(0x59D944); /* movss */
    esi = MEM32(0x84A5FC);
    ebx = 0; /* xor self */
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = edx + 0xDC;
    /* nop */

loc_002BC690: ;
    if (CMP_EQ(MEM8(esi + ebx), 0)) goto loc_002BC6F8; /* je: equal / zero */

loc_002BC696: ;
    if (CMP_EQ(MEM16(edx + 0x2D2), 0)) goto loc_002BC6F8; /* je: equal / zero */

loc_002BC6A0: ;
    xmm0 = MEMF(edx); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002BC6F8; /* jp: parity */

loc_002BC6B1: ;
    if (CMP_EQ(MEM8(edx + 0x361), 0x21)) goto loc_002BC6F8; /* je: equal / zero */

loc_002BC6BA: ;
    eax = MEM32(edx + -116);
    if (CMP_EQ(eax, 0x9C)) goto loc_002BC6CB; /* je: equal / zero */

loc_002BC6C4: ;
    if (CMP_NE(eax, 0x9D)) goto loc_002BC6F8; /* jne: not equal / not zero */

loc_002BC6CB: ;
    eax = edx + -220;
    ecx = ebp;
    PUSH32(esp, 0); sub_002EBA60(); /* call 0x002EBA60 */

loc_002BC6D8: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002BC6F8; /* jbe: below or equal (unsigned <=) */

loc_002BC6E6: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEM8(ebp + 0x42E) = LO8(ebx);
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_002BC6F8: ;
    ebx++;
    edx = edx + 0x6D0;
    if (CMP_L(ebx, 0x80)) goto loc_002BC690; /* jl: less (signed <) */

loc_002BC707: ;
    ecx = MEM32(ebp + 0x568);
    ecx = MEM32(ecx + 0x4D4);
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(ecx + 8) - sets EFLAGS */
    xmm2 = MEMF(ecx + 0xD4); /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    if ((xmm1 > MEMF(ecx + 8))) goto loc_002BC734; /* ja: above (unsigned >) */

loc_002BC72C: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_002BC734: ;
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002BC751; /* jp: parity */

loc_002BC749: ;
    MEMF(esp + 0x3C) = xmm3; /* movss */
    goto loc_002BC76C;

loc_002BC751: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_002BC75B; /* jbe: below or equal (unsigned <=) */

loc_002BC756: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    goto loc_002BC75E;

loc_002BC75B: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */

loc_002BC75E: ;
    MEMF(esp + 0x3C) = xmm3; /* movss */
    if ((xmm0 > xmm3)) goto loc_002BC76C; /* ja: above (unsigned >) */

loc_002BC766: ;
    MEMF(esp + 0x3C) = xmm0; /* movss */

loc_002BC76C: ;
    edx = MEM32(0x7FA21C);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_002F99A0(); /* call 0x002F99A0 */

loc_002BC77E: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 * MEMF(0x64944C); /* mulss */
    MEMF(0x75A1A0) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x4D4);
    xmm0 = MEMF(ecx + 4); /* movss */
    SET_LO8(eax, MEM8(0x84A5B0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x75A1C8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BC7D4; /* je: equal / zero */

loc_002BC7B9: ;
    MEMF(0x75A1F0) = xmm0; /* movss */
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x4D4);
    MEMF(eax + 0x40) = xmm0; /* movss */
    goto loc_002BC7F0;

loc_002BC7D4: ;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0x4D4);
    xmm0 = xmm0 - MEMF(edx + 0x40); /* subss */
    MEMF(0x75A1F0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */

loc_002BC7F0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(0x7FA21C);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BC861; /* je: equal / zero */

loc_002BC7FE: ;
    MEMF(0x75A1F0) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x4D4);
    MEMF(ecx + 0x40) = xmm0; /* movss */
    xmm1 = MEMF(0x75A1A0); /* movss */
    MEMF(0x75A1A4) = xmm0; /* movss */
    MEMF(0x75A19C) = xmm1; /* movss */
    xmm1 = MEMF(0x75A1C8); /* movss */
    MEMF(0x75A1CC) = xmm0; /* movss */
    MEMF(0x75A1F4) = xmm0; /* movss */
    xmm0 = MEMF(0x75A1F0); /* movss */
    MEMF(0x75A1C4) = xmm1; /* movss */
    MEMF(0x75A1EC) = xmm0; /* movss */
    goto loc_002BC882;

loc_002BC861: ;
    PUSH32(esp, esi);
    ecx = 0x75A198;
    PUSH32(esp, 0); sub_002B0A70(); /* call 0x002B0A70 */

loc_002BC86C: ;
    PUSH32(esp, esi);
    ecx = 0x75A1C0;
    PUSH32(esp, 0); sub_002B0B00(); /* call 0x002B0B00 */

loc_002BC877: ;
    PUSH32(esp, esi);
    ecx = 0x75A1E8;
    PUSH32(esp, 0); sub_002B0A70(); /* call 0x002B0A70 */

loc_002BC882: ;
    xmm0 = MEMF(0x75A19C); /* movss */
    MEMF(ebp + 0x1CC) = xmm0; /* movss */
    fp_push(MEMF(0x75A1C4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002BC8A3: ;
    xmm7 = 0.0f; /* xorps self = zero */
    ecx = 0xC000;
    MEMF(esp + 0x18) = xmm7; /* movss */
    ecx = ecx - eax;
    MEM16(ebp + 0x170) = LO16(ecx);
    MEM16(ebp + 0x174) = LO16(ecx);
    xmm0 = MEMF(0x75A1EC); /* movss */
    MEMF(ebp + 0x1C0) = xmm0; /* movss */
    xmm0 = MEMF(0x648F24); /* movss */
    MEM8(ebp + 0x178) = 0x19;
    MEMF(ebp + 0x1C8) = xmm7; /* movss */
    eax = MEM32(edi + 0x6C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_002BCCAC; /* jne: not equal / not zero */

loc_002BC8F9: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_002BC92C; /* jbe: below or equal (unsigned <=) */

loc_002BC904: ;
    xmm0 = xmm0 * MEMF(0x6495F0); /* mulss */
    MEMF(ebp + 0x1C8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A428); /* movss */
    goto loc_002BC99C;

loc_002BC92C: ;
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_002BC9A2; /* jbe: below or equal (unsigned <=) */

loc_002BC931: ;
    xmm1 = MEMF(ebp + 0x1C0); /* movss */
    /* comiss xmm1, xmm7 - sets EFLAGS */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    MEMF(ebp + 0x1C8) = xmm0; /* movss */
    if ((xmm1 <= xmm7)) goto loc_002BC986; /* jbe: below or equal (unsigned <=) */

loc_002BC94E: ;
    xmm1 = MEMF(0x648E3C); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 0x1C0); /* subss */
    xmm1 = xmm1 * MEMF(0x6490A8); /* mulss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * MEMF(0x649428); /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(ebp + 0x1C8) = xmm2; /* movss */

loc_002BC986: ;
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */

loc_002BC99C: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_002BC9A2: ;
    eax = MEM32(edi + 0x80);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x3C) = xmm7; /* movss */
    if (TEST_Z(eax, eax)) goto loc_002BC9C0; /* je: equal / zero */

loc_002BC9B2: ;
    xmm0 = MEMF(0x6499A0); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */

loc_002BC9C0: ;
    eax = MEM32(edi + 0x7C);
    if (TEST_Z(eax, eax)) goto loc_002BC9D5; /* je: equal / zero */

loc_002BC9C7: ;
    xmm0 = MEMF(0x648E38); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */

loc_002BC9D5: ;
    (void)0; /* test MEM8(0x87C8F0), 1 - flags set for next jcc */
    ebx = 0x5D5064;
    if (TEST_NZ(MEM8(0x87C8F0), 1)) goto loc_002BCA72; /* jne: not equal / not zero */

loc_002BC9E7: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(0x87C8F0);
    MEMF(0x87C8E0) = xmm0; /* movss */
    MEMF(0x87C8E4) = xmm0; /* movss */
    MEMF(0x87C8E8) = xmm0; /* movss */
    MEMF(0x87C8EC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    edx = edx | 1;
    MEMF(0x87C8D8) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    PUSH32(esp, 0x48CCA0);
    MEM32(0x87C8F0) = edx;
    MEMF(0x87C8D4) = xmm7; /* movss */
    MEM32(0x87C8C8) = ebx;
    MEMF(0x87C8CC) = xmm7; /* movss */
    MEMF(0x87C8D0) = xmm7; /* movss */
    MEMF(0x87C8DC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_002BCA66: ;
    esi = MEM32(0x7FA21C);
    xmm7 = 0.0f; /* xorps self = zero */
    esp = esp + 4;

loc_002BCA72: ;
    if (TEST_NZ(MEM8(0x87C8F0), 2)) goto loc_002BCB0A; /* jne: not equal / not zero */

loc_002BCA7F: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(0x87C8F0);
    MEMF(0x87C8B8) = xmm0; /* movss */
    MEMF(0x87C8BC) = xmm0; /* movss */
    MEMF(0x87C8C0) = xmm0; /* movss */
    MEMF(0x87C8C4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    edx = edx | 2;
    MEMF(0x87C8B0) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    PUSH32(esp, 0x48CC90);
    MEM32(0x87C8F0) = edx;
    MEMF(0x87C8AC) = xmm7; /* movss */
    MEM32(0x87C8A0) = ebx;
    MEMF(0x87C8A4) = xmm7; /* movss */
    MEMF(0x87C8A8) = xmm7; /* movss */
    MEMF(0x87C8B4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_002BCAFE: ;
    esi = MEM32(0x7FA21C);
    xmm7 = 0.0f; /* xorps self = zero */
    esp = esp + 4;

loc_002BCB0A: ;
    if (TEST_NZ(MEM8(0x87C8F0), 4)) goto loc_002BCBA2; /* jne: not equal / not zero */

loc_002BCB17: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(0x87C8F0);
    MEMF(0x87C890) = xmm0; /* movss */
    MEMF(0x87C894) = xmm0; /* movss */
    MEMF(0x87C898) = xmm0; /* movss */
    MEMF(0x87C89C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    edx = edx | 4;
    MEMF(0x87C888) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    PUSH32(esp, 0x48CC80);
    MEM32(0x87C8F0) = edx;
    MEMF(0x87C884) = xmm7; /* movss */
    MEM32(0x87C878) = ebx;
    MEMF(0x87C87C) = xmm7; /* movss */
    MEMF(0x87C880) = xmm7; /* movss */
    MEMF(0x87C88C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_002BCB96: ;
    esi = MEM32(0x7FA21C);
    xmm7 = 0.0f; /* xorps self = zero */
    esp = esp + 4;

loc_002BCBA2: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    PUSH32(esp, esi);
    ecx = 0x87C8C8;
    MEMF(0x87C8D0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0A70(); /* call 0x002B0A70 */

loc_002BCBBB: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    PUSH32(esp, esi);
    ecx = 0x87C8A0;
    MEMF(0x87C8A8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0A70(); /* call 0x002B0A70 */

loc_002BCBDC: ;
    xmm1 = MEMF(ebp + 0x640); /* movss */
    xmm0 = MEMF(ebp + 0x644); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x3C)); /* sqrtss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, esi);
    ecx = 0x87C878;
    MEMF(0x87C880) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0A70(); /* call 0x002B0A70 */

loc_002BCC29: ;
    xmm0 = MEMF(0x87C8CC); /* movss */
    edx = MEM32(ebp + 0x568);
    MEMF(edx + 0x39C) = xmm0; /* movss */
    xmm0 = MEMF(0x87C8A4); /* movss */
    eax = MEM32(ebp + 0x568);
    xmm1 = MEMF(ebp + 0x640); /* movss */
    MEMF(ebp + 0x644) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x39C); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(0x87C8A4); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x3C)); /* sqrtss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(ebp + 0x648) = xmm0; /* movss */
    goto loc_002BCCCA;

loc_002BCCAC: ;
    ecx = MEM32(ebp + 0x568);
    MEMF(ecx + 0x39C) = xmm7; /* movss */
    MEMF(ebp + 0x644) = xmm7; /* movss */
    MEMF(ebp + 0x648) = xmm7; /* movss */

loc_002BCCCA: ;
    xmm0 = MEMF(ebp + 0x648); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002BCCF7; /* jnp: not parity */

loc_002BCCDB: ;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x3A0) = 1;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x3A1) = 1;
    goto loc_002BCD11;

loc_002BCCF7: ;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x3A0) = 0;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x3A1) = 0;

loc_002BCD11: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebp + 0x1C8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(edx, 1);
    eax = ebp;
    PUSH32(esp, 0); sub_002EB830(); /* call 0x002EB830 */

loc_002BCD2B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x174);
    esi = MEM32(esp + 0x34);
    eax = eax + 0x4000;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEMF(ebp + 0x114) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BCD7D; /* je: equal / zero */

loc_002BCD58: ;
    /* comiss xmm7, MEMF(ebp + 0xD0) - sets EFLAGS */
    if ((xmm7 < MEMF(ebp + 0xD0))) goto loc_002BCDFE; /* jb: below (unsigned <) */

loc_002BCD65: ;
    MEMF(ebp + 0xD0) = xmm7; /* movss */
    MEMF(ebp + 0xD4) = xmm7; /* movss */
    MEM8(esi) = 0;
    goto loc_002BCDFE;

loc_002BCD7D: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BCD99; /* je: equal / zero */

loc_002BCD87: ;
    xmm0 = MEMF(0x58BCCC); /* movss */
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    goto loc_002BCDF6;

loc_002BCD99: ;
    if (CMP_NE(MEM16(ebp + 0x3AE), 0)) goto loc_002BCDEE; /* jne: not equal / not zero */

loc_002BCDA3: ;
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, MEMF(ebp + 0xDC) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0xDC))) goto loc_002BCDEE; /* jbe: below or equal (unsigned <=) */

loc_002BCDB4: ;
    xmm0 = MEMF(0x649438); /* movss */
    MEMF(ebp + 0xD0) = xmm7; /* movss */
    MEMF(ebp + 0xD4) = xmm0; /* movss */
    MEMF(ebp + 0x110) = xmm7; /* movss */
    MEMF(ebp + 0x648) = xmm7; /* movss */
    MEMF(ebp + 0x640) = xmm7; /* movss */
    MEMF(ebp + 0x644) = xmm7; /* movss */
    goto loc_002BCDFE;

loc_002BCDEE: ;
    MEMF(ebp + 0xD0) = xmm7; /* movss */

loc_002BCDF6: ;
    MEMF(ebp + 0xD4) = xmm7; /* movss */

loc_002BCDFE: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BCE3E; /* jne: not equal / not zero */

loc_002BCE08: ;
    xmm1 = MEMF(ebp + 0xD0); /* movss */
    xmm0 = MEMF(0x649534); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002BCE25; /* jbe: below or equal (unsigned <=) */

loc_002BCE1D: ;
    MEMF(ebp + 0xD0) = xmm0; /* movss */

loc_002BCE25: ;
    xmm0 = MEMF(0x64B108); /* movss */
    /* comiss xmm0, MEMF(ebp + 0xD0) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0xD0))) goto loc_002BCE3E; /* jbe: below or equal (unsigned <=) */

loc_002BCE36: ;
    MEMF(ebp + 0xD0) = xmm0; /* movss */

loc_002BCE3E: ;
    eax = ebp;
    MEM8(ebp + 0x1B5) = 0xA;
    PUSH32(esp, 0); sub_002E9550(); /* call 0x002E9550 */

loc_002BCE4C: ;
    SET_LO8(ecx, MEM8(ebp + 0x250));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002BCE6D; /* je: equal / zero */

loc_002BCE56: ;
    xmm0 = MEMF(0x648F08); /* movss */
    /* comiss xmm0, MEMF(ebp + 0xDC) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0xDC))) goto loc_002BCE6D; /* jbe: below or equal (unsigned <=) */

loc_002BCE67: ;
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_002BCE6D: ;
    SET_LO8(eax, MEM8(0x7FDCA1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BCF09; /* je: equal / zero */

loc_002BCE7A: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002BCF09; /* jne: not equal / not zero */

loc_002BCE82: ;
    edx = MEM32(0x84A5F8);
    xmm2 = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    xmm0 = MEMF(ecx + edx + -1524); /* movss */
    ecx = ecx + edx;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002BCF0C; /* jp: parity */

loc_002BCEA8: ;
    xmm0 = MEMF(ecx + -1620); /* movss */
    eax = ZX16(MEM16(ebp + 0x60));
    xmm0 = xmm0 + MEMF(0x6490B4); /* addss */
    PUSH32(esp, eax);
    ecx = ecx + 0xFFFFF930u;
    MEMF(ebp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    PUSH32(esp, ecx);
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002E9BB0(); /* call 0x002E9BB0 */

loc_002BCEDE: ;
    SET_LO8(ecx, MEM8(0x7FDCA1));
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM8(ebp + 0x250) = LO8(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x305F40);
    ecx = 0; /* xor self */
    eax = 0xFF010074u;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_002BCF01: ;
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp + 0x1C;
    goto loc_002BCF0E;

loc_002BCF09: ;
    xmm2 = 0.0f; /* xorps self = zero */

loc_002BCF0C: ;
    ebx = 0; /* xor self */

loc_002BCF0E: ;
    xmm0 = MEMF(ebp + 0x520); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_002BCF41; /* jbe: below or equal (unsigned <=) */

loc_002BCF1B: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x7FA21C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002BCF39; /* jbe: below or equal (unsigned <=) */

loc_002BCF2B: ;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebp + 0x520) = xmm1; /* movss */
    goto loc_002BCF41;

loc_002BCF39: ;
    MEMF(ebp + 0x520) = xmm2; /* movss */

loc_002BCF41: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BCFF4; /* je: equal / zero */

loc_002BCF4F: ;
    ecx = MEM32(ebp + 0x468);
    if (TEST_Z(LO8(ecx), 2)) goto loc_002BD099; /* je: equal / zero */

loc_002BCF5E: ;
    edx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(ebp + 0x468) = ecx;
    edx = MEM32(eax + 0x200);
    MEM8(eax + 0x251) = 0;
    ecx = MEM32(ebp + 0x110);
    MEM32(eax + 0x110) = ecx;
    MEM8(eax + 0x43D) = 0x21;
    MEM32(eax + 0x420) = ebx;
    MEM8(eax + 0x20C) = 0;
    edx = edx & 0xFFFFFBFFu;
    MEM32(eax + 0x200) = edx;
    MEM8(ebp + 0x250) = 0;
    MEMF(ebp + 0xD0) = xmm2; /* movss */
    PUSH32(esp, ebp);
    MEM32(0x7FDBF8) = 0x76;
    MEM32(0x7FDBF4) = ebx;
    MEM32(0x7FDBF0) = ebx;
    MEM32(0x7FDBEC) = ebx;
    MEM32(0x7FDBE8) = ebx;
    PUSH32(esp, 0); sub_00305F40(); /* call 0x00305F40 */

loc_002BCFE9: ;
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    goto loc_002BD099;

loc_002BCFF4: ;
    if (CMP_EQ(MEM32(edi + 0x98), ebx)) goto loc_002BD099; /* je: equal / zero */

loc_002BD000: ;
    SET_LO8(eax, MEM8(ebp + 0x20B));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BD099; /* jne: not equal / not zero */

loc_002BD00E: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x3C)) goto loc_002BD099; /* jne: not equal / not zero */

loc_002BD01B: ;
    xmm0 = MEMF(ebp + 0x520); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002BD099; /* jp: parity */

loc_002BD02C: ;
    ecx = MEM32(0x84A5F8);
    ebx = MEM32(0x84A5FC);
    edx = 0; /* xor self */
    eax = 1;
    ecx = ecx + 0x738;

loc_002BD045: ;
    if (CMP_EQ(MEM8(ebx + eax), 0)) goto loc_002BD051; /* je: equal / zero */

loc_002BD04B: ;
    if (CMP_NE(MEM32(ecx), 0x25)) goto loc_002BD051; /* jne: not equal / not zero */

loc_002BD050: ;
    edx++;

loc_002BD051: ;
    eax++;
    ecx = ecx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_002BD045; /* jl: less (signed <) */

loc_002BD05F: ;
    if (CMP_GE(edx, 5)) goto loc_002BD089; /* jge: greater or equal (signed >=) */

loc_002BD064: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x30AF00);
    ecx = 0; /* xor self */
    eax = 0x49EE15C;
    MEM8(ebp + 0x20B) = 4;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_002BD083: ;
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;

loc_002BD089: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(ebp + 0x520) = xmm0; /* movss */

loc_002BD099: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm0, MEMF(ebp + 0xDC) - sets EFLAGS */
    if ((xmm0 < MEMF(ebp + 0xDC))) goto loc_002BD1F3; /* jb: below (unsigned <) */

loc_002BD0AC: ;
    xmm0 = MEMF(ebp + 0x110); /* movss */
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    MEMF(ebp + 0x110) = xmm0; /* movss */
    eax = MEM32(edi + 0x90);
    if (TEST_NZ(eax, eax)) goto loc_002BD12E; /* jne: not equal / not zero */

loc_002BD0CE: ;
    SET_LO8(eax, MEM8(ebp + 0x17E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BD12E; /* jne: not equal / not zero */

loc_002BD0D8: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BD138; /* jne: not equal / not zero */

loc_002BD0E2: ;
    edx = MEM32(ebp + 0x298);
    edx = edx & 0x1F;
    if (CMP_EQ(LO8(edx), 0x16)) goto loc_002BD12E; /* je: equal / zero */

loc_002BD0F0: ;
    xmm0 = MEMF(0x649438); /* movss */
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    edi = ebp;
    MEM8(ebp + 0x20A) = 0;
    MEMF(ebp + 0xDC) = xmm0; /* movss */
    MEMF(ebp + 0x1C0) = xmm2; /* movss */
    PUSH32(esp, 0); sub_002BC120(); /* call 0x002BC120 */

loc_002BD126: ;
    xmm2 = 0.0f; /* xorps self = zero */
    goto loc_002BD1F3;

loc_002BD12E: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BD17E; /* je: equal / zero */

loc_002BD138: ;
    xmm0 = MEMF(0x649368); /* movss */
    /* comiss xmm0, MEMF(ebp + 0xD0) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0xD0))) goto loc_002BD1A2; /* jbe: below or equal (unsigned <=) */

loc_002BD149: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x305A40);
    ecx = 0; /* xor self */
    eax = 0xFF0100A7u;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_002BD161: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x305F40);
    ecx = 0; /* xor self */
    eax = 0xFF060372u;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_002BD179: ;
    esp = esp + 0x28;
    goto loc_002BD19F;

loc_002BD17E: ;
    /* comiss xmm2, MEMF(ebp + 0x7C) - sets EFLAGS */
    if ((xmm2 <= MEMF(ebp + 0x7C))) goto loc_002BD1A2; /* jbe: below or equal (unsigned <=) */

loc_002BD184: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x305F40);
    ecx = 0; /* xor self */
    eax = 0xFF010072u;
    PUSH32(esp, 0); sub_00301B50(); /* call 0x00301B50 */

loc_002BD19C: ;
    esp = esp + 0x14;

loc_002BD19F: ;
    xmm2 = 0.0f; /* xorps self = zero */

loc_002BD1A2: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BD1B6; /* jne: not equal / not zero */

loc_002BD1AC: ;
    xmm0 = MEMF(0x64908C); /* movss */
    goto loc_002BD1C8;

loc_002BD1B6: ;
    SET_LO8(eax, MEM8(ebp + 0x17E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BD1D0; /* jne: not equal / not zero */

loc_002BD1C0: ;
    xmm0 = MEMF(0x6493F0); /* movss */

loc_002BD1C8: ;
    MEMF(ebp + 0xD0) = xmm0; /* movss */

loc_002BD1D0: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    MEM8(esi) = 1;
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0xD4) = xmm0; /* movss */

loc_002BD1F3: ;
    SET_LO8(eax, MEM8(ebp + 0x17E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BD246; /* jne: not equal / not zero */

loc_002BD1FD: ;
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x88); /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    xmm1 = MEMF(0x648F58); /* movss */
    if ((xmm0 <= xmm2)) goto loc_002BD23E; /* jbe: below or equal (unsigned <=) */

loc_002BD217: ;
    xmm3 = MEMF(0x648F38); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_002BD227; /* jbe: below or equal (unsigned <=) */

loc_002BD224: ;
    xmm0 = xmm3; /* movaps */

loc_002BD227: ;
    xmm0 = xmm0 * MEMF(0x648F54); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */

loc_002BD23E: ;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    goto loc_002BD24C;

loc_002BD246: ;
    xmm1 = MEMF(esp + 0x3C); /* movss */

loc_002BD24C: ;
    xmm0 = MEMF(ebp + 0x1C0); /* movss */
    /* comiss xmm0, MEMF(0x6490B8) - sets EFLAGS */
    edx = 0xF;
    if ((xmm0 <= MEMF(0x6490B8))) goto loc_002BD278; /* jbe: below or equal (unsigned <=) */

loc_002BD262: ;
    xmm0 = MEMF(ebp + 0x110); /* movss */
    /* comiss xmm0, MEMF(0x64908C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x64908C))) goto loc_002BD278; /* jbe: below or equal (unsigned <=) */

loc_002BD273: ;
    edx = 0x11;

loc_002BD278: ;
    xmm0 = MEMF(0x64908C); /* movss */
    /* comiss xmm0, MEMF(ebp + 0x110) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0x110))) goto loc_002BD2A8; /* jbe: below or equal (unsigned <=) */

loc_002BD289: ;
    /* comiss xmm2, MEMF(ebp + 0x1C8) - sets EFLAGS */
    if ((xmm2 < MEMF(ebp + 0x1C8))) goto loc_002BD2A8; /* jb: below (unsigned <) */

loc_002BD292: ;
    xmm0 = MEMF(ebp + 0x648); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002BD2A8; /* jp: parity */

loc_002BD2A3: ;
    edx = 0x18;

loc_002BD2A8: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    /* comiss xmm0, MEMF(ebp + 0x648) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0x648))) goto loc_002BD2C2; /* jbe: below or equal (unsigned <=) */

loc_002BD2B9: ;
    /* comiss xmm2, MEMF(ebp + 0x110) - sets EFLAGS */
    if ((xmm2 > MEMF(ebp + 0x110))) goto loc_002BD2E0; /* ja: above (unsigned >) */

loc_002BD2C2: ;
    xmm2 = MEMF(ebp + 0x648); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_002BD2E5; /* jb: below (unsigned <) */

loc_002BD2CF: ;
    xmm0 = MEMF(0x649368); /* movss */
    /* comiss xmm0, MEMF(ebp + 0x110) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0x110))) goto loc_002BD2E5; /* jbe: below or equal (unsigned <=) */

loc_002BD2E0: ;
    edx = 0x1F;

loc_002BD2E5: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BD302; /* je: equal / zero */

loc_002BD2EF: ;
    xmm1 = xmm1 + MEMF(0x648E64); /* addss */
    edx = 0x17;
    MEMF(esp + 0x3C) = xmm1; /* movss */

loc_002BD302: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41100000);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002BD318: ;
    edx = MEM32(ebp + 0x564);
    esp = esp + 0x18;
    if (TEST_Z(edx, edx)) goto loc_002BD4C2; /* je: equal / zero */

loc_002BD329: ;
    if (CMP_NE(MEM8(edx), 1)) goto loc_002BD4C2; /* jne: not equal / not zero */

loc_002BD332: ;
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 0x8FC);
    xmm4 = MEMF(eax + 0xC); /* movss */
    xmm0 = MEMF(ebp + 0x114); /* movss */
    xmm6 = MEMF(0x648E6C); /* movss */
    xmm4 = xmm4 + MEMF(ebp + 0x1C0); /* addss */
    xmm2 = MEMF(eax + 0x14); /* movss */
    /* comiss xmm2, xmm4 - sets EFLAGS */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * MEMF(ebp + 0x1CC); /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm2 <= xmm4)) goto loc_002BD37E; /* jbe: below or equal (unsigned <=) */

loc_002BD379: ;
    xmm4 = xmm2; /* movaps */
    goto loc_002BD389;

loc_002BD37E: ;
    /* comiss xmm4, MEMF(eax + 0x18) - sets EFLAGS */
    if ((xmm4 <= MEMF(eax + 0x18))) goto loc_002BD389; /* jbe: below or equal (unsigned <=) */

loc_002BD384: ;
    xmm4 = MEMF(eax + 0x18); /* movss */

loc_002BD389: ;
    xmm1 = xmm1 * MEMF(0x649230); /* mulss */
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm3 = MEMF(0x64938C); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm1 = MEMF(eax); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 4); /* addss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    if ((xmm3 <= xmm2)) goto loc_002BD3D2; /* jbe: below or equal (unsigned <=) */

loc_002BD3CA: ;
    MEMF(esp + 0x3C) = xmm3; /* movss */
    goto loc_002BD3E5;

loc_002BD3D2: ;
    xmm1 = MEMF(0x64908C); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_002BD3E5; /* jbe: below or equal (unsigned <=) */

loc_002BD3DF: ;
    MEMF(esp + 0x3C) = xmm1; /* movss */

loc_002BD3E5: ;
    SET_LO8(ebx, MEM8(0x84A5B0));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    edi = ecx + 0x360;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002BD446; /* je: equal / zero */

loc_002BD3F5: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648E3C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm6; /* subss */
    ebx = esp + 0x38;
    eax = ebp + 0x78;
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0004B070(); /* call 0x0004B070 */

loc_002BD42C: ;
    eax = MEM32(ebp + 0x564);
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(ebp + 0x544));
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    goto loc_002BD4A7;

loc_002BD446: ;
    edx = ZX8(MEM8(edx + 0x2A8));
    esi = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm0 = MEMF(edx + esi + 0x24C); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x10); /* mulss */
    eax = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp + 0x78;
    PUSH32(esp, 0); sub_0004B140(); /* call 0x0004B140 */

loc_002BD48D: ;
    eax = MEM32(ebp + 0x564);
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(ebp + 0x544));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));

loc_002BD4A7: ;
    MEM8(ebp + 0x544) = LO8(ecx);
    ecx = MEM32(0x7FA21C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    ecx = ecx + 0x360;
    PUSH32(esp, 0); sub_0004B320(); /* call 0x0004B320 */

loc_002BD4C2: ;
    POP32(esp, edi);

loc_002BD4C3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002BD4D0
 * Original: 0x002BD4D0 - 0x002BD4D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD4D0(void)
{

loc_002BD4D0: ;
    eax = 0x32;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD4E0
 * Original: 0x002BD4E0 - 0x002BD52B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD4E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BD4E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_002BD4E8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_002BD4F0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_002BD52B(); return; } /* je: equal / zero */

loc_002BD4F4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_002BD4F0; /* jl: less (signed <) */

loc_002BD500: ;
    edx = 0x600E6C;
    ecx = ZX16(MEM16(esi + 0x36));
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x60BF14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002BD524: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002BD550
 * Original: 0x002BD550 - 0x002BD556 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD550(void)
{

loc_002BD550: ;
    eax = 0x577BDC;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD560
 * Original: 0x002BD560 - 0x002BD5B8 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD560(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BD560: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002BD5B7; /* je: equal / zero */

loc_002BD567: ;
    ecx = MEM32(eax + 0x238);
    if (TEST_Z(ecx, ecx)) goto loc_002BD5B7; /* je: equal / zero */

loc_002BD571: ;
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(0x7F9F60);
    ecx = ecx - edx;
    if (CMP_BE(ecx, 1)) goto loc_002BD5B6; /* jbe: below or equal (unsigned <=) */

loc_002BD584: ;
    edx = MEM32(edi + 4);
    if (CMP_NE(MEM32(edx + 8), esi)) goto loc_002BD5A8; /* jne: not equal / not zero */

loc_002BD58C: ;
    eax = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_002BD59E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00242A10(); /* call 0x00242A10 */

loc_002BD5A5: ;
    esp = esp + 0x18;

loc_002BD5A8: ;
    MEM32(edi + 0x1C) = 0;
    MEM32(edi + 0x18) = 0;

loc_002BD5B6: ;
    POP32(esp, esi);

loc_002BD5B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD5C0
 * Original: 0x002BD5C0 - 0x002BD6AC (236 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD5C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003C18A0(); /* call 0x003C18A0 */

loc_002BD5D2: ;
    xmm0 = MEMF(0x64908C); /* movss */
    ebx = 0; /* xor self */
    MEM32(edi) = 0x60BE54;
    MEM32(edi + 0x18) = ebx;
    MEM32(edi + 0x1C) = ebx;
    ecx = MEM32(edi + 4);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEMF(edi + 0x20) = xmm0; /* movss */
    MEM8(edi + 0x24) = LO8(ebx);
    if (CMP_EQ(ecx, ebx)) goto loc_002BD5FD; /* je: equal / zero */

loc_002BD5F7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_002BD5FD: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002BD60A; /* jne: not equal / not zero */

loc_002BD605: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002BD60A: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002BD652; /* je: equal / zero */

loc_002BD630: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_002BD652; /* jb: below (unsigned <) */

loc_002BD639: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BD643: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BD64B: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002BD673; /* jne: not equal / not zero */

loc_002BD652: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BD664: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BD66C: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002BD6AC(); return; } /* je: equal / zero */

loc_002BD673: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + 0x238);
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(eax) = 0x63AFE8;
    MEM32(eax + 4) = ecx;
    esi = MEM32(ecx);
    MEM32(eax + 8) = esi;
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x14) = ebx;
    MEM8(ecx + 4) = 1;
    MEM32(eax) = 0x63AFD0;
    g_seh_ebp = ebp; sub_002BD6B2(); return; /* tail jmp 0x002BD6B2 */

}

/**
 * sub_002BD6F0
 * Original: 0x002BD6F0 - 0x002BD74D (93 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD6F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002BD6F0: ;
    PUSH32(esp, edi);
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0); sub_002BD760(); /* call 0x002BD760 */

loc_002BD6FA: ;
    eax = MEM32(edi + 8);
    if (CMP_EQ(eax, 1)) goto loc_002BD707; /* je: equal / zero */

loc_002BD702: ;
    if (CMP_NE(eax, 2)) goto loc_002BD726; /* jne: not equal / not zero */

loc_002BD707: ;
    SET_LO8(eax, MEM8(edi + 0x25));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BD719; /* je: equal / zero */

loc_002BD70E: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 0x28);
    if (CMP_EQ(ecx, MEM32(eax + 8))) goto loc_002BD726; /* je: equal / zero */

loc_002BD719: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(edi + 0x10) = xmm0; /* movss */

loc_002BD726: ;
    PUSH32(esp, 0); sub_002BD7F0(); /* call 0x002BD7F0 */

loc_002BD72B: ;
    PUSH32(esp, 0); sub_002BD560(); /* call 0x002BD560 */

loc_002BD730: ;
    eax = MEM32(edi + 8);
    if (CMP_EQ(eax, 1)) { sub_002BD74D(); return; } /* je: equal / zero */

loc_002BD738: ;
    if (CMP_EQ(eax, 2)) { sub_002BD74D(); return; } /* je: equal / zero */

loc_002BD73D: ;
    edx = MEM32(edi + 4);
    eax = 0; /* xor self */
    MEM8(edi + 0x25) = LO8(eax);
    eax = MEM32(edx + 8);
    MEM32(edi + 0x28) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD760
 * Original: 0x002BD760 - 0x002BD776 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD760: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002BD776(); return; } /* je: equal / zero */

loc_002BD76F: ;
    MEMF(esp) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002BD783(); return; /* tail jmp 0x002BD783 */

}

/**
 * sub_002BD7F0
 * Original: 0x002BD7F0 - 0x002BD965 (373 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD7F0: ;
    eax = MEM32(edi + 8);
    edx = 1;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, edx)) goto loc_002BD806; /* je: equal / zero */

loc_002BD7FD: ;
    if (CMP_NE(eax, 2)) goto loc_002BD8F6; /* jne: not equal / not zero */

loc_002BD806: ;
    esi = MEM32(edi + 0x2C);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002BD879; /* je: equal / zero */

loc_002BD813: ;
    if (CMP_GE(eax, 0x205)) goto loc_002BD879; /* jge: greater or equal (signed >=) */

loc_002BD81A: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_002BD879; /* je: equal / zero */

loc_002BD821: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_002BD879; /* je: equal / zero */

loc_002BD828: ;
    ecx = MEM32(ecx + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_002BD879; /* je: equal / zero */

loc_002BD82F: ;
    if (CMP_NE(ecx, 0x3E7)) goto loc_002BD83E; /* jne: not equal / not zero */

loc_002BD837: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002BD83C: ;
    goto loc_002BD879;

loc_002BD83E: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), LO16(edx))) goto loc_002BD84F; /* ja: above (unsigned >) */

loc_002BD848: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002BD84D: ;
    goto loc_002BD879;

loc_002BD84F: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x50);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002BD876: ;
    esp = esp + 0x20;

loc_002BD879: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 0x28);
    if (CMP_EQ(eax, MEM32(edx + 8))) goto loc_002BD963; /* je: equal / zero */

loc_002BD888: ;
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(ecx + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002BD963; /* je: equal / zero */

loc_002BD899: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002BD8A3: ;
    if (TEST_Z(eax, eax)) goto loc_002BD963; /* je: equal / zero */

loc_002BD8AB: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(eax + 0xE8) - sets EFLAGS */
    edx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x1CC) = xmm0; /* movss */
    if ((xmm1 > MEMF(eax + 0xE8))) goto loc_002BD8E4; /* ja: above (unsigned >) */

loc_002BD8D2: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BD8E4: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BD8F6: ;
    esi = MEM32(edi + 0x2C);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002BD963; /* je: equal / zero */

loc_002BD903: ;
    if (CMP_GE(eax, 0x205)) goto loc_002BD963; /* jge: greater or equal (signed >=) */

loc_002BD90A: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_002BD963; /* je: equal / zero */

loc_002BD911: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_002BD963; /* je: equal / zero */

loc_002BD918: ;
    ecx = MEM32(ecx + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_002BD963; /* je: equal / zero */

loc_002BD91F: ;
    if (CMP_EQ(ecx, 0x3E7)) goto loc_002BD932; /* je: equal / zero */

loc_002BD927: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 2)) goto loc_002BD938; /* ja: above (unsigned >) */

loc_002BD932: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_002BD938: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x50);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0x1C));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002BD960: ;
    esp = esp + 0x20;

loc_002BD963: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD970
 * Original: 0x002BD970 - 0x002BDA75 (261 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD970(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002BD970: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x38));
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(LO8(eax), 2)) goto loc_002BD999; /* je: equal / zero */

loc_002BD97F: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_002BD999; /* je: equal / zero */

loc_002BD983: ;
    ecx = MEM32(esi + 0x54);
    if (TEST_Z(ecx, ecx)) goto loc_002BDA70; /* je: equal / zero */

loc_002BD98E: ;
    eax = SX8(LO8(eax));
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002BD999: ;
    xmm0 = MEMF(edi + 0x10); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_002BDA70; /* ja: above (unsigned >) */

loc_002BD9AB: ;
    ecx = SX8(LO8(eax));
    if (CMP_NE(MEM32(edi + 8), ecx)) goto loc_002BD9C3; /* jne: not equal / not zero */

loc_002BD9B3: ;
    edx = ZX8(MEM8(esi + 0x39));
    eax = MEM32(edi + 4);
    if (CMP_EQ(MEM32(eax + 8), edx)) goto loc_002BDA70; /* je: equal / zero */

loc_002BD9C3: ;
    eax = MEM32(esi + 0x54);
    if (TEST_Z(eax, eax)) goto loc_002BDA70; /* je: equal / zero */

loc_002BD9CE: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    eax = 0x862C40;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_002BD9E4: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_002BDA70; /* je: equal / zero */

loc_002BD9EE: ;
    eax = MEM32(esi + 0x58);
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_00267750(); /* call 0x00267750 */

loc_002BD9FA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BDA70; /* je: equal / zero */

loc_002BD9FE: ;
    eax = edx;
    PUSH32(esp, 0); sub_002675F0(); /* call 0x002675F0 */

loc_002BDA05: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BDA70; /* je: equal / zero */

loc_002BDA09: ;
    eax = edx;
    PUSH32(esp, 0); sub_00267210(); /* call 0x00267210 */

loc_002BDA10: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BDA70; /* je: equal / zero */

loc_002BDA14: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x238);
    if (TEST_Z(eax, eax)) goto loc_002BDA70; /* je: equal / zero */

loc_002BDA22: ;
    edx = MEM32(eax);
    eax = MEM32(edx * 4 + 0x6F1E70);
    edx = MEM32(esp + 0xC);
    if (TEST_Z(MEM32(edx + 0x52C), eax)) goto loc_002BDA70; /* je: equal / zero */

loc_002BDA37: ;
    eax = MEM32(0x7F9F60);
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 0x18) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x38);
    MEM32(edi + 8) = ecx;
    edx = ZX8(MEM8(esi + 0x39));
    xmm0 = (float)(int32_t)MEM32(esi + 0x40); /* cvtsi2ss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00343100(); /* call 0x00343100 */

loc_002BDA60: ;
    if (CMP_NE(MEM8(esi + 0x38), 2)) goto loc_002BDA70; /* jne: not equal / not zero */

loc_002BDA66: ;
    xmm0 = (float)(int32_t)MEM32(esi + 0x3C); /* cvtsi2ss */
    MEMF(edi + 0xC) = xmm0; /* movss */

loc_002BDA70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002BDA80
 * Original: 0x002BDA80 - 0x002BDAB0 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDA80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002BDA80: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_002BDA92; /* jne: not equal / not zero */

loc_002BDA8D: ;
    PUSH32(esp, 0); sub_002BDAE0(); /* call 0x002BDAE0 */

loc_002BDA92: ;
    eax = MEM32(ebx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_002BDAAF; /* je: equal / zero */

loc_002BDA9D: ;
    SET_LO8(ecx, MEM8(esp + 8));
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEM8(eax + 0x24) = LO8(ecx);

loc_002BDAAF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BDAB0
 * Original: 0x002BDAB0 - 0x002BDAD6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDAB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002BDAB0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_002BDAC2; /* jne: not equal / not zero */

loc_002BDABD: ;
    PUSH32(esp, 0); sub_002BDAE0(); /* call 0x002BDAE0 */

loc_002BDAC2: ;
    eax = MEM32(ebx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_002BDAD5; /* je: equal / zero */

loc_002BDAD0: ;
    xmm0 = MEMF(eax + 0xC); /* movss */

loc_002BDAD5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BDAE0
 * Original: 0x002BDAE0 - 0x002BDBE8 (264 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDAE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BDAE0: ;
    eax = MEM32(ebx + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_002BDBE7; /* jne: not equal / not zero */

loc_002BDAEE: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002BDAFC; /* jne: not equal / not zero */

loc_002BDAF7: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002BDAFC: ;
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
    if (TEST_Z(esi, esi)) goto loc_002BDB46; /* je: equal / zero */

loc_002BDB24: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_002BDB46; /* jb: below (unsigned <) */

loc_002BDB2D: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BDB37: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BDB3F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002BDB67; /* jne: not equal / not zero */

loc_002BDB46: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BDB58: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BDB60: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002BDB6F; /* je: equal / zero */

loc_002BDB67: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002BD5C0(); /* call 0x002BD5C0 */

loc_002BDB6D: ;
    goto loc_002BDB71;

loc_002BDB6F: ;
    eax = 0; /* xor self */

loc_002BDB71: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0x570) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_002BDBE7; /* je: equal / zero */

loc_002BDB7D: ;
    eax = MEM32(ebx + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002BDBE7; /* je: equal / zero */

loc_002BDB87: ;
    if (CMP_GE(eax, 0x205)) goto loc_002BDBE7; /* jge: greater or equal (signed >=) */

loc_002BDB8E: ;
    ecx = MEM32(ebx + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_002BDBE7; /* je: equal / zero */

loc_002BDB95: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_002BDBE7; /* je: equal / zero */

loc_002BDB9C: ;
    edx = MEM32(edx);
    if (TEST_Z(edx, edx)) goto loc_002BDBE7; /* je: equal / zero */

loc_002BDBA2: ;
    if (CMP_EQ(edx, 0x3E7)) goto loc_002BDBB5; /* je: equal / zero */

loc_002BDBAA: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_002BDBBA; /* ja: above (unsigned >) */

loc_002BDBB5: ;
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_002BDBBA: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = ebx;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002BDBE4: ;
    esp = esp + 0x20;

loc_002BDBE7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BDBF0
 * Original: 0x002BDBF0 - 0x002BDE9E (686 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BDBF0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    if (TEST_Z(ebx, ebx)) goto loc_002BDE99; /* je: equal / zero */

loc_002BDC00: ;
    eax = MEM32(ebx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(ebx + 0x234) = 0xFF;
    if (TEST_NZ(eax, eax)) goto loc_002BDC16; /* jne: not equal / not zero */

loc_002BDC11: ;
    PUSH32(esp, 0); sub_002BDAE0(); /* call 0x002BDAE0 */

loc_002BDC16: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_002F8750(); /* call 0x002F8750 */

loc_002BDC20: ;
    esi = MEM32(ebx + 0x570);
    eax = ebx;
    PUSH32(esp, 0); sub_003C1B40(); /* call 0x003C1B40 */

loc_002BDC2D: ;
    eax = MEM32(ebx + 0x52C);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(eax, ebp)) goto loc_002BDE03; /* je: equal / zero */

loc_002BDC41: ;
    eax = MEM32(esi + 8);
    xmm0 = MEMF(esi + 0x10); /* movss */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, ebp)) ? 1 : 0); /* sete */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEM8(esp + 0x28) = LO8(eax);
    if ((xmm0 > MEMF(0x648CF8))) goto loc_002BDE11; /* ja: above (unsigned >) */

loc_002BDC5F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BDC6E; /* jne: not equal / not zero */

loc_002BDC63: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BDE11; /* je: equal / zero */

loc_002BDC6E: ;
    SET_LO8(eax, MEM8(0x6BCFEB));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002BDE11; /* jle: less or equal (signed <=) */

loc_002BDC7F: ;
    MEM32(esp + 0x18) = ebp;

loc_002BDC83: ;
    eax = MEM32(0x84A5F8);
    ebp = ebp + eax;
    MEM32(esp + 0x10) = ebp;
    if ((ebp == 0)) goto loc_002BDDDB; /* je: equal / zero */

loc_002BDC94: ;
    if (CMP_NE(MEM32(ebp + 0x64), 1)) goto loc_002BDDDB; /* jne: not equal / not zero */

loc_002BDC9E: ;
    eax = MEM32(ebp + 0x238);
    if (TEST_Z(eax, eax)) goto loc_002BDDDB; /* je: equal / zero */

loc_002BDCAC: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx * 4 + 0x6F1E70);
    if (TEST_Z(eax, eax)) goto loc_002BDDDB; /* je: equal / zero */

loc_002BDCBD: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00267210(); /* call 0x00267210 */

loc_002BDCC6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BDDDB; /* je: equal / zero */

loc_002BDCCE: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002BDDDB; /* je: equal / zero */

loc_002BDCDC: ;
    edi = 0; /* xor self */
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_002BDCE7: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BDCF8; /* jne: not equal / not zero */

loc_002BDCEB: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_002BDDDB; /* jne: not equal / not zero */

loc_002BDCF8: ;
    SET_LO8(eax, MEM8(ebp + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BDDDB; /* jne: not equal / not zero */

loc_002BDD06: ;
    edx = ZX16(MEM16(ebx + 0x60));
    eax = ZX8(MEM8(ebp + 0x470));
    edx++;
    if (CMP_NE(eax, edx)) goto loc_002BDDDB; /* jne: not equal / not zero */

loc_002BDD1A: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BDD3B; /* je: equal / zero */

loc_002BDD21: ;
    eax = MEM32(ebx + 0x238);
    if (TEST_Z(eax, eax)) goto loc_002BDD3B; /* je: equal / zero */

loc_002BDD2B: ;
    ecx = MEM32(ebp + 0x238);
    edx = MEM32(ecx);
    if (CMP_EQ(edx, MEM32(eax))) goto loc_002BDD3B; /* je: equal / zero */

loc_002BDD37: ;
    SET_LO8(eax, 1);
    goto loc_002BDD3D;

loc_002BDD3B: ;
    SET_LO8(eax, 0); /* xor self */

loc_002BDD3D: ;
    SET_LO8(ecx, MEM8(esp + 0x28));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002BDD4D; /* jne: not equal / not zero */

loc_002BDD45: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BDDDB; /* je: equal / zero */

loc_002BDD4D: ;
    eax = MEM32(ebp + 0x238);
    edx = MEM32(eax);
    eax = MEM32(edx * 4 + 0x6F1E70);
    edi = MEM32(esp + 0x1C);
    if (TEST_Z(edi, eax)) goto loc_002BDDDB; /* je: equal / zero */

loc_002BDD64: ;
    if (CMP_NE(eax, MEM32(ebx + 0x534))) goto loc_002BDD70; /* jne: not equal / not zero */

loc_002BDD6C: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002BDD8E; /* je: equal / zero */

loc_002BDD70: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_002BDD82; /* je: equal / zero */

loc_002BDD79: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BDDA5; /* je: equal / zero */

loc_002BDD82: ;
    ecx = MEM32(0x7F9F60);
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 0x1C) = ecx;

loc_002BDD8E: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BDDA5; /* je: equal / zero */

loc_002BDD97: ;
    MEM32(esp + 0x20) = 0;
    ecx = esp + 0x20;
    goto loc_002BDDA9;

loc_002BDDA5: ;
    ecx = esp + 0x10;

loc_002BDDA9: ;
    xmm0 = MEMF(esi + 0x20); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = 1;
    if (1 /* jnp after test - parity */) goto loc_002BDDC5; /* jnp: not parity */

loc_002BDDC0: ;
    eax = 2;

loc_002BDDC5: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_003C1BD0(); /* call 0x003C1BD0 */

loc_002BDDDB: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    eax++;
    ebp = ebp + 0x6D0;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebp;
    if (CMP_L(eax, ecx)) goto loc_002BDC83; /* jl: less (signed <) */

loc_002BDE01: ;
    goto loc_002BDE11;

loc_002BDE03: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_003C1BD0(); /* call 0x003C1BD0 */

loc_002BDE11: ;
    eax = MEM32(ebx + 0x530);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_002BDE5A; /* je: equal / zero */

loc_002BDE1D: ;
    ecx = MEM32(eax * 4 + 0x6F1E80);
    xmm0 = MEMF(esi + 0x20); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = 1;
    if (1 /* jnp after test - parity */) goto loc_002BDE40; /* jnp: not parity */

loc_002BDE3B: ;
    eax = 2;

loc_002BDE40: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_003C1BD0(); /* call 0x003C1BD0 */

loc_002BDE54: ;
    MEM32(ebx + 0x530) = edi;

loc_002BDE5A: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 8);
    eax = MEM32(esi + 8);
    if (CMP_EQ(eax, 1)) goto loc_002BDE82; /* je: equal / zero */

loc_002BDE68: ;
    if (CMP_EQ(eax, 2)) goto loc_002BDE82; /* je: equal / zero */

loc_002BDE6D: ;
    eax = esi;
    MEM32(ebx + 0x534) = edi;
    PUSH32(esp, 0); sub_002BD6F0(); /* call 0x002BD6F0 */

loc_002BDE7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_002BDE82: ;
    ecx = MEM32(ecx * 4 + 0x6F1E70);
    eax = esi;
    MEM32(ebx + 0x534) = ecx;
    PUSH32(esp, 0); sub_002BD6F0(); /* call 0x002BD6F0 */

loc_002BDE96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002BDE99: ;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002BDEA0
 * Original: 0x002BDEA0 - 0x002BDF3C (156 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDEA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BDEA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x52C);
    if (TEST_NZ(eax, eax)) goto loc_002BDF3A; /* jne: not equal / not zero */

loc_002BDEB3: ;
    eax = esi;
    PUSH32(esp, 0); sub_002F8750(); /* call 0x002F8750 */

loc_002BDEBA: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002BDF30; /* je: equal / zero */

loc_002BDEC4: ;
    if (CMP_GE(eax, 0x205)) goto loc_002BDF30; /* jge: greater or equal (signed >=) */

loc_002BDECB: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_002BDF30; /* je: equal / zero */

loc_002BDED2: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_002BDF30; /* je: equal / zero */

loc_002BDED9: ;
    edx = MEM32(edx);
    if (TEST_Z(edx, edx)) goto loc_002BDF30; /* je: equal / zero */

loc_002BDEDF: ;
    if (CMP_EQ(edx, 0x3E7)) goto loc_002BDEF2; /* je: equal / zero */

loc_002BDEE7: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_002BDF03; /* ja: above (unsigned >) */

loc_002BDEF2: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002BDEF7: ;
    MEM32(esi + 0x52C) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BDF03: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002BDF2D: ;
    esp = esp + 0x20;

loc_002BDF30: ;
    MEM32(esi + 0x52C) = 1;

loc_002BDF3A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BDF40
 * Original: 0x002BDF40 - 0x002BE1C5 (645 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BDF40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_002F8750(); /* call 0x002F8750 */

loc_002BDF4F: ;
    eax = MEM32(esi + 0x238);
    ebx = MEM32(eax);
    (void)0; /* cmp ebx, 2 - flags set for next jcc */
    eax = MEM32(esi + 0x68);
    if (CMP_NE(ebx, 2)) goto loc_002BE05B; /* jne: not equal / not zero */

loc_002BDF63: ;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002BDFD8; /* je: equal / zero */

loc_002BDF6A: ;
    if (CMP_GE(eax, 0x205)) goto loc_002BDFD8; /* jge: greater or equal (signed >=) */

loc_002BDF71: ;
    ecx = MEM32(esi + 0x74);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_002BDFDA; /* je: equal / zero */

loc_002BDF7A: ;
    edx = MEM32(ecx + 0x50);
    if (CMP_EQ(edx, ebx)) goto loc_002BDFDA; /* je: equal / zero */

loc_002BDF81: ;
    edx = MEM32(edx + 0xC);
    if (CMP_EQ(edx, ebx)) goto loc_002BDFDA; /* je: equal / zero */

loc_002BDF88: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_002BDF97; /* jne: not equal / not zero */

loc_002BDF90: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002BDF95: ;
    goto loc_002BDFDA;

loc_002BDF97: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 1)) goto loc_002BDFA9; /* ja: above (unsigned >) */

loc_002BDFA2: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002BDFA7: ;
    goto loc_002BDFDA;

loc_002BDFA9: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x10));
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002BDFD3: ;
    esp = esp + 0x20;
    goto loc_002BDFDA;

loc_002BDFD8: ;
    ebx = 0; /* xor self */

loc_002BDFDA: ;
    if (CMP_A(MEM8(esi + 0xB7), 1)) goto loc_002BDFFE; /* ja: above (unsigned >) */

loc_002BDFE3: ;
    edx = 0; /* xor self */
    ecx = esi;
    MEM8(esi + 0xB7) = LO8(ebx);
    MEM8(esi + 0xB4) = LO8(ebx);
    MEM8(esi + 0xB5) = LO8(ebx);
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_002BDFFE: ;
    ecx = MEM32(0x847024);
    MEM32(esi + 0x52C) = 1;
    ebp = MEM32(ecx + 0x40);
    edi = MEM32(ebp + 4);
    PUSH32(esp, 0xC83);
    ebx = esi;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_002BE020: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_002BE1C0; /* jl: less (signed <) */

loc_002BE02A: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BE047; /* je: equal / zero */

loc_002BE033: ;
    esi = MEM32(0x847024);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_002BE044: ;
    esp = esp + 8;

loc_002BE047: ;
    edx = MEM32(ebp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_002BE056: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002BE05B: ;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002BE0CB; /* je: equal / zero */

loc_002BE062: ;
    if (CMP_GE(eax, 0x205)) goto loc_002BE0CB; /* jge: greater or equal (signed >=) */

loc_002BE069: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_002BE0CB; /* je: equal / zero */

loc_002BE070: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_002BE0CB; /* je: equal / zero */

loc_002BE077: ;
    edx = MEM32(edx);
    if (TEST_Z(edx, edx)) goto loc_002BE0CB; /* je: equal / zero */

loc_002BE07D: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_002BE08C; /* jne: not equal / not zero */

loc_002BE085: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002BE08A: ;
    goto loc_002BE0CB;

loc_002BE08C: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_002BE09E; /* ja: above (unsigned >) */

loc_002BE097: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002BE09C: ;
    goto loc_002BE0CB;

loc_002BE09E: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002BE0C8: ;
    esp = esp + 0x20;

loc_002BE0CB: ;
    if (CMP_A(MEM8(esi + 0xB7), 1)) goto loc_002BE0F2; /* ja: above (unsigned >) */

loc_002BE0D4: ;
    SET_LO8(eax, 0xFF);
    edx = 0; /* xor self */
    ecx = esi;
    MEM8(esi + 0xB7) = 0;
    MEM8(esi + 0xB4) = LO8(eax);
    MEM8(esi + 0xB5) = LO8(eax);
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_002BE0F2: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    edi = 2;
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_NZ(ebx, ebx)) goto loc_002BE117; /* jne: not equal / not zero */

loc_002BE104: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    edi = 3;

loc_002BE117: ;
    if (CMP_EQ(MEM32(esi + 0x52C), edi)) goto loc_002BE156; /* je: equal / zero */

loc_002BE11F: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60BEE8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00313740(); /* call 0x00313740 */

loc_002BE131: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60BED8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00313740(); /* call 0x00313740 */

loc_002BE13F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60BEC8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00313740(); /* call 0x00313740 */

loc_002BE14D: ;
    esp = esp + 0x24;
    MEM32(esi + 0x52C) = edi;

loc_002BE156: ;
    ecx = MEM32(0x847024);
    ebp = MEM32(ecx + 0x40);
    edi = MEM32(ebp + 4);
    PUSH32(esp, 0xC83);
    ebx = esi;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_002BE16E: ;
    if (CMP_GE(eax & eax, 0)) goto loc_002BE1C0; /* jge: greater or equal (signed >=) */

loc_002BE172: ;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_002BE177: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BE1C0; /* je: equal / zero */

loc_002BE17B: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002BE198; /* je: equal / zero */

loc_002BE185: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_002BE19E;

loc_002BE198: ;
    eax = MEM32(esi + 0x580);

loc_002BE19E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xC83;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002BE1C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE1D0
 * Original: 0x002BE1D0 - 0x002BE20E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE1D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BE1D0: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BE1E2; /* jne: not equal / not zero */

loc_002BE1D9: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BE20D; /* jne: not equal / not zero */

loc_002BE1E2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002BE1F2: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(0x6F1E68);
    (void)0; /* test eax, eax - flags set for next jcc */
    if (TEST_Z(eax, eax)) eax = esi; /* cmove */
    eax = ZX16(MEM16(eax + 0x60));
    MEM32(ecx + edx * 4 + 0x52C) = eax;
    POP32(esp, esi);

loc_002BE20D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE210
 * Original: 0x002BE210 - 0x002BE46E (606 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE210: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x52C);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_002BE2C2; /* jne: not equal / not zero */

loc_002BE227: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002F8750(); /* call 0x002F8750 */

loc_002BE22E: ;
    eax = MEM32(ebp + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_002BE29D; /* je: equal / zero */

loc_002BE238: ;
    if (CMP_GE(eax, 0x205)) goto loc_002BE29D; /* jge: greater or equal (signed >=) */

loc_002BE23F: ;
    ecx = MEM32(ebp + 0x74);
    if (CMP_EQ(ecx, ebx)) goto loc_002BE29D; /* je: equal / zero */

loc_002BE246: ;
    edx = MEM32(ecx + 0x50);
    if (CMP_EQ(edx, ebx)) goto loc_002BE29D; /* je: equal / zero */

loc_002BE24D: ;
    edx = MEM32(edx);
    if (CMP_EQ(edx, ebx)) goto loc_002BE29D; /* je: equal / zero */

loc_002BE253: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_002BE262; /* jne: not equal / not zero */

loc_002BE25B: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002BE260: ;
    goto loc_002BE29D;

loc_002BE262: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), LO16(ebx))) goto loc_002BE273; /* ja: above (unsigned >) */

loc_002BE26C: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002BE271: ;
    goto loc_002BE29D;

loc_002BE273: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = ebp;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002BE29A: ;
    esp = esp + 0x20;

loc_002BE29D: ;
    ecx = MEM32(0x6F1E68);
    MEM32(ebp + 0x52C) = 1;
    MEM32(ebp + ecx * 4 + 0x52C) = 0xFFFFFFFFu;
    MEM32(ebp + 0x5D8) = 0x2BE1D0;

loc_002BE2C2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = ebp + 0x84;
    ecx = MEM32(edx);
    eax = ebp + 0x78;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    SET_LO8(eax, MEM8(ebp + 0x234));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM8(ebp + 0x444) = 0x39;
    MEMF(ebp + 0x110) = xmm0; /* movss */
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_002BE319; /* je: equal / zero */

loc_002BE2FF: ;
    SET_LO8(ecx, MEM8(0x7FA250));
    if (CMP_A(LO8(eax), LO8(ecx))) goto loc_002BE311; /* ja: above (unsigned >) */

loc_002BE309: ;
    MEM8(ebp + 0x234) = LO8(ebx);
    goto loc_002BE319;

loc_002BE311: ;
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(ebp + 0x234) = LO8(eax);

loc_002BE319: ;
    MEM8(ebp + 0x20C) = LO8(ebx);
    if (CMP_EQ(MEM8(0x863D11), LO8(ebx))) goto loc_002BE46A; /* je: equal / zero */

loc_002BE32B: ;
    if (CMP_EQ(MEM8(0x862C5C), LO8(ebx))) goto loc_002BE46A; /* je: equal / zero */

loc_002BE337: ;
    (void)0; /* cmp MEM8(0x864EC1), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 8) = ebx;
    if (CMP_LE(MEM8(0x864EC1), LO8(ebx))) goto loc_002BE46A; /* jle: less or equal (signed <=) */

loc_002BE347: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x864EC8;
    MEM32(esp + 0x18) = edi;

loc_002BE352: ;
    PUSH32(esp, 0); sub_00299CB0(); /* call 0x00299CB0 */

loc_002BE357: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002BE442; /* je: equal / zero */

loc_002BE35F: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002BE36C; /* jne: not equal / not zero */

loc_002BE367: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002BE36C: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002BE3B4; /* je: equal / zero */

loc_002BE392: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_002BE3B4; /* jb: below (unsigned <) */

loc_002BE39B: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BE3A5: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BE3AD: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002BE3D5; /* jne: not equal / not zero */

loc_002BE3B4: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BE3C6: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BE3CE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_002BE406; /* je: equal / zero */

loc_002BE3D5: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM8(eax + 0x30) = LO8(ebx);
    MEM16(eax + 0x32) = LO16(ebx);
    MEM32(eax) = 0x60BE60;
    goto loc_002BE408;

loc_002BE406: ;
    eax = 0; /* xor self */

loc_002BE408: ;
    SET_LO16(ecx, MEM16(ebp + 0xAC));
    MEM16(eax + 0x34) = LO16(ecx);
    edx = ZX16(MEM16(ebp + 0x60));
    MEM32(eax + 0x3C) = edx;
    SET_LO16(ecx, MEM16(ebp + 0x3AE));
    MEM16(eax + 0x36) = LO16(ecx);
    SET_LO16(edx, MEM16(ebp + 0x3B0));
    ecx = MEM32(esp + 0x18);
    MEM16(eax + 0x38) = LO16(edx);
    ecx = MEM32(ecx + 0x9DC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002BE442: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x18);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    edi = edi + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edi;
    if (CMP_L(eax, edx)) goto loc_002BE352; /* jl: less (signed <) */

loc_002BE468: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002BE46A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE470
 * Original: 0x002BE470 - 0x002BE51F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE470(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BE470: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_002BE483; /* jne: not equal / not zero */

loc_002BE47E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002BE483: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002BE4CB; /* je: equal / zero */

loc_002BE4A9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_002BE4CB; /* jb: below (unsigned <) */

loc_002BE4B2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BE4BC: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BE4C4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002BE4EC; /* jne: not equal / not zero */

loc_002BE4CB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BE4DD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BE4E5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002BE51F(); return; } /* je: equal / zero */

loc_002BE4EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM8(eax + 0x30) = LO8(ebx);
    MEM16(eax + 0x32) = LO16(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x60BE60;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE530
 * Original: 0x002BE530 - 0x002BE561 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE530(void)
{

loc_002BE530: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002BE543: ;
    eax = ZX16(MEM16(edi + 0x36));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002BE54E: ;
    eax = ZX16(MEM16(edi + 0x38));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002BE559: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BE570
 * Original: 0x002BE570 - 0x002BE5A8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE570(void)
{

loc_002BE570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002BE57F: ;
    PUSH32(esp, 0xA);
    MEM16(edi + 0x34) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002BE58A: ;
    PUSH32(esp, 0xA);
    MEM16(edi + 0x36) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002BE595: ;
    esp = esp + 0xC;
    MEM16(edi + 0x38) = LO16(eax);
    MEM32(edi + 0x3C) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BE5B0
 * Original: 0x002BE5B0 - 0x002BE5F4 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BE5B0: ;
    (void)0; /* cmp MEM32(0x863D08), 3 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_002BE5ED; /* jne: not equal / not zero */

loc_002BE5BC: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002BE5ED; /* jne: not equal / not zero */

loc_002BE5C5: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_002BE5D2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002BE5ED; /* je: equal / zero */

loc_002BE5D7: ;
    SET_LO16(ecx, MEM16(esi + 0x36));
    MEM16(eax + 0x3AE) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x38));
    MEM16(eax + 0x3B0) = LO16(edx);

loc_002BE5ED: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE600
 * Original: 0x002BE600 - 0x002BE604 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE600(void)
{

loc_002BE600: ;
    SET_LO8(eax, MEM8(ecx + 0x3C));
    esp += 4; return; /* ret */

}

/**
 * sub_002BE610
 * Original: 0x002BE610 - 0x002BE651 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE610(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BE610: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x60C220;
    if (TEST_Z(ecx, ecx)) goto loc_002BE626; /* je: equal / zero */

loc_002BE620: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_002BE626: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x64218C;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_002BE64B; /* je: equal / zero */

loc_002BE63A: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002BE648: ;
    esp = esp + 4;

loc_002BE64B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BE660
 * Original: 0x002BE660 - 0x002BE73B (219 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE660: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003C20A0(); /* call 0x003C20A0 */

loc_002BE66E: ;
    ecx = MEM32(edi + 4);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(edi) = 0x60C220;
    MEM32(edi + 0x18) = ebx;
    if (CMP_EQ(ecx, ebx)) goto loc_002BE686; /* je: equal / zero */

loc_002BE680: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_002BE686: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002BE693; /* jne: not equal / not zero */

loc_002BE68E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002BE693: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002BE6DB; /* je: equal / zero */

loc_002BE6B9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_002BE6DB; /* jb: below (unsigned <) */

loc_002BE6C2: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BE6CC: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BE6D4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002BE6FC; /* jne: not equal / not zero */

loc_002BE6DB: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BE6ED: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BE6F5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002BE73B(); return; } /* je: equal / zero */

loc_002BE6FC: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x238);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = 0x63AFE8;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 8) = edx;
    MEMF(eax + 0x10) = xmm0; /* movss */
    POP32(esp, esi);
    MEM8(ecx + 4) = 1;
    POP32(esp, ebp);
    MEM32(edi + 4) = eax;
    eax = edi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BE750
 * Original: 0x002BE750 - 0x002BE7F3 (163 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE750(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BE750: ;
    eax = MEM32(ebx + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_002BE7F2; /* jne: not equal / not zero */

loc_002BE75E: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002BE76C; /* jne: not equal / not zero */

loc_002BE767: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002BE76C: ;
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
    if (TEST_Z(esi, esi)) goto loc_002BE7B6; /* je: equal / zero */

loc_002BE794: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_002BE7B6; /* jb: below (unsigned <) */

loc_002BE79D: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BE7A7: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BE7AF: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002BE7D7; /* jne: not equal / not zero */

loc_002BE7B6: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BE7C8: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BE7D0: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002BE7E8; /* je: equal / zero */

loc_002BE7D7: ;
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0); sub_002BE660(); /* call 0x002BE660 */

loc_002BE7DF: ;
    POP32(esp, edi);
    MEM32(ebx + 0x570) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BE7E8: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(ebx + 0x570) = eax;
    POP32(esp, esi);

loc_002BE7F2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE800
 * Original: 0x002BE800 - 0x002BE81B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE800(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BE800: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_002BE750(); /* call 0x002BE750 */

loc_002BE808: ;
    eax = MEM32(ebx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_002BE81A; /* je: equal / zero */

loc_002BE813: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x18) = ecx;

loc_002BE81A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE820
 * Original: 0x002BE820 - 0x002BE834 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE820(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BE820: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_002BE750(); /* call 0x002BE750 */

loc_002BE828: ;
    eax = MEM32(ebx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) { sub_002BE834(); return; } /* jne: not equal / not zero */

loc_002BE833: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE840
 * Original: 0x002BE840 - 0x002BE870 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE840(void)
{
    int _flags = 0; /* fallback flag var */

loc_002BE840: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x570);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(ebx + 0x234) = 0xFF;
    if (TEST_NZ(esi, esi)) goto loc_002BE866; /* jne: not equal / not zero */

loc_002BE857: ;
    PUSH32(esp, 0); sub_002BE750(); /* call 0x002BE750 */

loc_002BE85C: ;
    esi = MEM32(ebx + 0x570);
    if (TEST_Z(esi, esi)) goto loc_002BE86D; /* je: equal / zero */

loc_002BE866: ;
    eax = ebx;
    PUSH32(esp, 0); sub_003C1B40(); /* call 0x003C1B40 */

loc_002BE86D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE870
 * Original: 0x002BE870 - 0x002BE8BB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x23C);
    eax = ebp;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002BE884: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ebx = MEM32(0x6F1E9C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002BE8A7: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_002BE8BB(); return; } /* je: equal / zero */

loc_002BE8AE: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) { sub_002BE8BB(); return; } /* je: equal / zero */

loc_002BE8B6: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_002BE8BD(); return; /* tail jmp 0x002BE8BD */

}

/**
 * sub_002BE910
 * Original: 0x002BE910 - 0x002BE9E8 (216 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE910(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002BE910: ;
    eax = ZX8(MEM8(esi + 0x135));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = eax + ecx + -1744;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM8(edi + 0x250) = LO8(ebx);
    MEM32(edi + 0x420) = ebx;
    MEM8(edi + 0x43D) = 0xA;
    MEMF(esi + 0x110) = xmm0; /* movss */
    if (CMP_EQ(edi, ebx)) goto loc_002BE994; /* je: equal / zero */

loc_002BE955: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5E9914);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002BE960: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_002BE994; /* je: equal / zero */

loc_002BE96D: ;
    ecx = MEM32(edi + 0x4B0);
    if (CMP_EQ(ecx, ebx)) goto loc_002BE994; /* je: equal / zero */

loc_002BE977: ;
    ecx = MEM32(ecx + 0x24);
    if (CMP_EQ(ecx, ebx)) goto loc_002BE994; /* je: equal / zero */

loc_002BE97E: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, ebx);
    ebx = 0x5E9914;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002BE98F: ;
    esp = esp + 4;
    ebx = 0; /* xor self */

loc_002BE994: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002BE9BF; /* je: equal / zero */

loc_002BE99C: ;
    xmm0 = MEMF(esi + 0x80); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEM16(esi + 0x174) = 0x3000;
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_002BE9BF; /* jbe: below or equal (unsigned <=) */

loc_002BE9B6: ;
    MEM16(esi + 0x174) = 0xB000;

loc_002BE9BF: ;
    eax = MEM32(esi + 0x564);
    if (CMP_EQ(eax, ebx)) goto loc_002BE9D6; /* je: equal / zero */

loc_002BE9C9: ;
    eax = MEM32(eax + 4);
    MEM32(eax + 0x8B8) = 1;

loc_002BE9D6: ;
    ecx = MEM32(edi + 0x570);
    MEM32(ecx + 0x6C) = ebx;
    POP32(esp, edi);
    MEM8(esi + 0x180) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE9F0
 * Original: 0x002BE9F0 - 0x002BEA46 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE9F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebp + 0x60));
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x23C);
    MEM8(esi + 0x250) = LO8(eax);
    eax = ebp;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002BEA0F: ;
    ecx = MEM32(esi + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    ebx = MEM32(0x6F1E9C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002BEA32: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_002BEA46(); return; } /* je: equal / zero */

loc_002BEA39: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) { sub_002BEA46(); return; } /* je: equal / zero */

loc_002BEA41: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_002BEA48(); return; /* tail jmp 0x002BEA48 */

}

/**
 * sub_002BEAB0
 * Original: 0x002BEAB0 - 0x002BEC6B (443 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEAB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_002BEAB0: ;
    eax = MEM32(ecx + 0x570);
    if (TEST_Z(eax, eax)) goto loc_002BEC6A; /* je: equal / zero */

loc_002BEABE: ;
    if (CMP_NE(MEM8(0x862C5C), 0)) goto loc_002BEC6A; /* jne: not equal / not zero */

loc_002BEACB: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x90);
    if (TEST_Z(edi, edi)) goto loc_002BEC69; /* je: equal / zero */

loc_002BEADA: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    SET_LO16(edi, MEM16(edx));
    MEM16(eax + 0x18) = LO16(edi);
    SET_LO16(edi, MEM16(edx + 2));
    xmm3 = 0.0f; /* xorps self = zero */
    MEM16(eax + 0x1A) = LO16(edi);
    SET_LO16(edi, MEM16(edx + 4));
    MEM16(eax + 0x1C) = LO16(edi);
    SET_LO16(edi, MEM16(edx + 6));
    MEM16(eax + 0x1E) = LO16(edi);
    SET_LO16(edi, MEM16(edx + 8));
    MEM16(ecx + 0x416) = LO16(edi);
    SET_LO16(edi, MEM16(edx + 0xA));
    MEM16(ecx + 0x418) = LO16(edi);
    SET_LO16(edx, MEM16(edx + 0xC));
    MEM16(ecx + 0x414) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax + 0x38) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002BEB3C; /* je: equal / zero */

loc_002BEB37: ;
    MEMF(eax + 0x44) = xmm3; /* movss */

loc_002BEB3C: ;
    SET_LO8(edx, MEM8(eax + 0x98));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002BEB4C; /* jne: not equal / not zero */

loc_002BEB46: ;
    MEM8(eax + 0x98) = LO8(ebx);

loc_002BEB4C: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002BEC62; /* je: equal / zero */

loc_002BEB54: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x78); /* subss */
    MEMF(eax + 0xA8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x7C); /* subss */
    xmm2 = MEMF(eax + 0xA8); /* movss */
    MEMF(eax + 0xAC) = xmm0; /* movss */
    xmm1 = MEMF(eax + 0xAC); /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x80); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    /* comiss xmm4, MEMF(0x649480) - sets EFLAGS */
    MEMF(eax + 0xB0) = xmm0; /* movss */
    if ((xmm4 <= MEMF(0x649480))) goto loc_002BEC16; /* jbe: below or equal (unsigned <=) */

loc_002BEBC2: ;
    xmm0 = MEMF(ecx + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0xA8); /* addss */
    MEMF(ecx + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xAC); /* movss */
    MEMF(eax + 0xA8) = xmm3; /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x7C); /* addss */
    MEMF(ecx + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xB0); /* movss */
    MEMF(eax + 0xAC) = xmm3; /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x80); /* addss */
    MEMF(ecx + 0x80) = xmm0; /* movss */
    MEMF(eax + 0xB0) = xmm3; /* movss */

loc_002BEC16: ;
    SET_LO16(edx, MEM16(esp + 0x14));
    xmm1 = MEMF(0x648D14); /* movss */
    MEM16(ecx + 0x170) = LO16(edx);
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEMF(ecx + 0x1C0) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xA4);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(eax + 0x9C) = xmm3; /* movss */
    MEMF(eax + 0xA0) = xmm1; /* movss */

loc_002BEC62: ;
    MEM8(eax + 0xA4) = 1;

loc_002BEC69: ;
    POP32(esp, edi);

loc_002BEC6A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEC70
 * Original: 0x002BEC70 - 0x002BEC8E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002BEC70: ;
    eax = MEM32(eax + 0x570);
    if (TEST_Z(eax, eax)) { sub_002BEC8E(); return; } /* je: equal / zero */

loc_002BEC7A: ;
    xmm0 = MEMF(eax + 0x3C); /* movss */
    /* comiss xmm0, MEMF(0x648D20) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D20))) { sub_002BEC8E(); return; } /* jbe: below or equal (unsigned <=) */

loc_002BEC88: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BECA0
 * Original: 0x002BECA0 - 0x002BEDB4 (276 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BECA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BECA0: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x570);
    if (TEST_Z(esi, esi)) goto loc_002BEDB2; /* je: equal / zero */

loc_002BECAF: ;
    PUSH32(esp, 0x60C208);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002BECBB: ;
    PUSH32(esp, 0x60C1FC);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002BECC7: ;
    PUSH32(esp, 0x60C1E8);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_002BECD3: ;
    SET_LO8(eax, MEM8(0x863D11));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002BEDB4(); return; } /* je: equal / zero */

loc_002BECE3: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002BEDB4(); return; } /* jne: not equal / not zero */

loc_002BECF0: ;
    PUSH32(esp, ebp);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_002BECFB: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_002BEDB1; /* je: equal / zero */

loc_002BED05: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002BED13; /* jne: not equal / not zero */

loc_002BED0E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002BED13: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002BED5C; /* je: equal / zero */

loc_002BED3A: ;
    if (CMP_B(MEM32(esi + 0x80), 0x64)) goto loc_002BED5C; /* jb: below (unsigned <) */

loc_002BED43: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BED4D: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BED55: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002BED7D; /* jne: not equal / not zero */

loc_002BED5C: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002BED6E: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002BED76: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002BED86; /* je: equal / zero */

loc_002BED7D: ;
    PUSH32(esp, 0); sub_00257700(); /* call 0x00257700 */

loc_002BED82: ;
    esi = eax;
    goto loc_002BED88;

loc_002BED86: ;
    esi = 0; /* xor self */

loc_002BED88: ;
    MEM8(esi + 0x34) = 2;
    eax = ZX8(MEM8(ebx + 0x10B));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002BEDA2: ;
    eax = MEM32(ebp + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002BEDB0: ;
    POP32(esp, edi);

loc_002BEDB1: ;
    POP32(esp, ebp);

loc_002BEDB2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BEDC0
 * Original: 0x002BEDC0 - 0x002BEFC9 (521 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEDC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEDC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x570);
    eax = 0; /* xor self */
    ecx = 0x30;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ebp = MEM32(esi + 0x570);
    eax = 0xFFFF;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60C1DC);
    edi = esi;
    MEM16(ebp + 0x18) = LO16(eax);
    MEM16(ebp + 0x1A) = LO16(eax);
    MEM16(ebp + 0x1C) = LO16(eax);
    MEM16(ebp + 0x1E) = LO16(eax);
    MEM8(ebp + 0x64) = 1;
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002BEDFF: ;
    eax = MEM32(esi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002BEE32; /* je: equal / zero */

loc_002BEE0C: ;
    ecx = MEM32(esi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002BEE32; /* je: equal / zero */

loc_002BEE16: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002BEE32; /* je: equal / zero */

loc_002BEE1D: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x60C1DC;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002BEE2F: ;
    esp = esp + 4;

loc_002BEE32: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x60C208);
    edi = esi;
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002BEE40: ;
    eax = MEM32(esi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002BEE73; /* je: equal / zero */

loc_002BEE4D: ;
    ecx = MEM32(esi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002BEE73; /* je: equal / zero */

loc_002BEE57: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002BEE73; /* je: equal / zero */

loc_002BEE5E: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x60C208;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002BEE70: ;
    esp = esp + 4;

loc_002BEE73: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x60C1FC);
    edi = esi;
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002BEE81: ;
    eax = MEM32(esi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002BEEB4; /* je: equal / zero */

loc_002BEE8E: ;
    ecx = MEM32(esi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002BEEB4; /* je: equal / zero */

loc_002BEE98: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002BEEB4; /* je: equal / zero */

loc_002BEE9F: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x60C1FC;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002BEEB1: ;
    esp = esp + 4;

loc_002BEEB4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60C1E8);
    edi = esi;
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002BEEC2: ;
    eax = MEM32(esi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002BEEF5; /* je: equal / zero */

loc_002BEECF: ;
    ecx = MEM32(esi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002BEEF5; /* je: equal / zero */

loc_002BEED9: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002BEEF5; /* je: equal / zero */

loc_002BEEE0: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x60C1E8;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002BEEF2: ;
    esp = esp + 4;

loc_002BEEF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60C1C4);
    edi = esi;
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002BEF03: ;
    eax = MEM32(esi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002BEF36; /* je: equal / zero */

loc_002BEF10: ;
    ecx = MEM32(esi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002BEF36; /* je: equal / zero */

loc_002BEF1A: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002BEF36; /* je: equal / zero */

loc_002BEF21: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x60C1C4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002BEF33: ;
    esp = esp + 4;

loc_002BEF36: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60C1AC);
    edi = esi;
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002BEF44: ;
    eax = MEM32(esi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002BEF77; /* je: equal / zero */

loc_002BEF51: ;
    ecx = MEM32(esi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002BEF77; /* je: equal / zero */

loc_002BEF5B: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002BEF77; /* je: equal / zero */

loc_002BEF62: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x60C1AC;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002BEF74: ;
    esp = esp + 4;

loc_002BEF77: ;
    MEM16(esi + 0x3AE) = 0x78;
    SET_LO8(eax, MEM8(esi + 0x3AE));
    ecx = 0; /* xor self */
    MEM8(esi + 0x234) = LO8(ecx);
    MEM8(ebp + 0x99) = LO8(eax);
    MEM32(ebp + 0x84) = ecx;
    MEM32(ebp + 0x88) = ecx;
    edi = MEM32(esi + 0x68);
    eax = 0; /* xor self */
    (void)0; /* cmp edi, 0xCC - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(edi, 0xCC)) ? 1 : 0); /* setne */
    if (CMP_NE(MEM32(eax * 4 + 0x84A5B4), esi)) { sub_002BEFC9(); return; } /* jne: not equal / not zero */

loc_002BEFB7: ;
    POP32(esp, edi);
    MEM32(ebp + 0x6C) = 5;
    POP32(esp, ebp);
    MEM32(eax * 4 + 0x84A5B4) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C0C40
 * Original: 0x002C0C40 - 0x002C0D3C (252 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C0C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C0C40: ;
    eax = ZX8(MEM8(esi + 0x250));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + ecx + -352);
    PUSH32(esp, edi);
    edi = eax + ecx + -1744;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002DA170(); /* call 0x002DA170 */

loc_002C0C69: ;
    MEM8(esi + 0x234) = 0xFF;
    SET_LO8(eax, MEM8(edi + 0x250));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002C0D3C(); return; } /* je: equal / zero */

loc_002C0C81: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + eax + -364);
    if (TEST_Z(ebp, ebp)) goto loc_002C0D38; /* je: equal / zero */

loc_002C0C9F: ;
    ecx = MEM32(edi + 0x84);
    MEM32(esi + 0x78) = ecx;
    edx = MEM32(edi + 0x88);
    MEM32(esi + 0x7C) = edx;
    eax = MEM32(edi + 0x8C);
    PUSH32(esp, 0x870ED4);
    ecx = esi;
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_002C0CC9: ;
    SET_LO16(ecx, MEM16(ebx + 8));
    MEM16(esi + 0x174) = LO16(ecx);
    xmm0 = MEMF(ebx + 0xC); /* movss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_002C0CEC; /* jbe: below or equal (unsigned <=) */

loc_002C0CE2: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */
    goto loc_002C0D01;

loc_002C0CEC: ;
    xmm1 = MEMF(0x648F64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C0D01; /* jbe: below or equal (unsigned <=) */

loc_002C0CF9: ;
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */

loc_002C0D01: ;
    xmm1 = MEMF(0x648E14); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi + 0x1CC) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x10); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi + 0x1C0) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(ebp + 0x2A8));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(edx, ~LO8(edx));
    MEM8(esi + 0x543) = LO8(edx);

loc_002C0D38: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C0D50
 * Original: 0x002C0D50 - 0x002C1025 (725 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C0D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002C0D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    eax = ZX8(MEM8(edi + 0x250));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + ecx + -352);
    PUSH32(esp, esi);
    esi = eax + ecx + -1744;
    MEM8(edi + 0x234) = 0xFF;
    SET_LO8(eax, MEM8(esi + 0x250));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C1012; /* je: equal / zero */

loc_002C0D95: ;
    edx = ZX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = MEM32(edx + ecx + -364);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = edx + ecx + -1744;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(eax, eax)) goto loc_002C0EEB; /* je: equal / zero */

loc_002C0DBC: ;
    edx = MEM32(ecx + 0x568);
    if (TEST_Z(edx, edx)) goto loc_002C0EEB; /* je: equal / zero */

loc_002C0DCA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(eax + 0x6DD) = 1;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F0C18);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_002C0DF5: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_002C0E09: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    esi = MEM32(esp + 0x20);
    MEMF(edi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMF(edi + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEMF(edi + 0x80) = xmm0; /* movss */
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(ecx + 0x258); /* movss */
    xmm0 = xmm0 + MEMF(0x648E3C); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(edi + 0x114) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002C0E6A: ;
    ecx = MEM32(esp + 0x28);
    MEM16(edi + 0x174) = LO16(eax);
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0x25C);
    MEM32(edi + 0x1C0) = eax;
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(edx + 0xC); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_002C0E9E: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(edi + 0x1CC) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(ecx + 0x2A8));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    PUSH32(esp, edx);
    edx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    SET_LO8(eax, ~LO8(eax));
    MEM8(edi + 0x543) = LO8(eax);
    ecx = MEM32(ebx + 4);
    MEM32(edi + 0x520) = ecx;
    esi = MEM32(ebx + 0x34);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + edx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002C1030(); /* call 0x002C1030 */

loc_002C0EE4: ;
    esi = MEM32(esp + 0x30);
    esp = esp + 0x20;

loc_002C0EEB: ;
    xmm0 = MEMF(ebx); /* movss */
    /* comiss xmm0, MEMF(0x648D50) - sets EFLAGS */
    SET_LO8(eax, MEM8(ebx + 0x64));
    if ((xmm0 <= MEMF(0x648D50))) goto loc_002C0F1D; /* jbe: below or equal (unsigned <=) */

loc_002C0EFB: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002C0F40; /* jne: not equal / not zero */

loc_002C0EFF: ;
    PUSH32(esp, 0x60C1A4);
    eax = edi;
    MEM8(ebx + 0x64) = 0;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_002C0F0F: ;
    PUSH32(esp, 0x60C19C);
    eax = edi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_002C0F1B: ;
    goto loc_002C0F3D;

loc_002C0F1D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C0F40; /* jne: not equal / not zero */

loc_002C0F21: ;
    PUSH32(esp, 0x60C1A4);
    eax = edi;
    MEM8(ebx + 0x64) = 1;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C0F31: ;
    PUSH32(esp, 0x60C19C);
    eax = edi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C0F3D: ;
    esp = esp + 8;

loc_002C0F40: ;
    xmm1 = MEMF(ebx + 0x60); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C0F7B; /* jbe: below or equal (unsigned <=) */

loc_002C0F4D: ;
    xmm1 = xmm1 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x60) = xmm1; /* movss */
    if ((xmm0 < xmm1)) goto loc_002C0F7B; /* jb: below (unsigned <) */

loc_002C0F5F: ;
    PUSH32(esp, 0x60C190);
    eax = edi;
    MEMF(ebx + 0x5C) = xmm0; /* movss */
    MEMF(ebx + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C0F75: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;

loc_002C0F7B: ;
    xmm1 = MEMF(ebx + 0x58); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C0FB3; /* jbe: below or equal (unsigned <=) */

loc_002C0F85: ;
    xmm1 = xmm1 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x58) = xmm1; /* movss */
    if ((xmm0 < xmm1)) goto loc_002C0FB3; /* jb: below (unsigned <) */

loc_002C0F97: ;
    PUSH32(esp, 0x60C184);
    eax = edi;
    MEMF(ebx + 0x54) = xmm0; /* movss */
    MEMF(ebx + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C0FAD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;

loc_002C0FB3: ;
    xmm1 = MEMF(ebx + 0x58); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002C101F; /* jp: parity */

loc_002C0FC1: ;
    xmm1 = MEMF(ebx + 0x60); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002C101F; /* jp: parity */

loc_002C0FCF: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60C174);
    eax = edi;
    PUSH32(esp, 0); sub_002C1F60(); /* call 0x002C1F60 */

loc_002C0FE6: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60C164);
    eax = edi;
    PUSH32(esp, 0); sub_002C1F60(); /* call 0x002C1F60 */

loc_002C0FFD: ;
    PUSH32(esp, 0x5E9914);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C1009: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002C1012: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_002C101C: ;
    esp = esp + 0xC;

loc_002C101F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C1030
 * Original: 0x002C1030 - 0x002C12A8 (632 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C1030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C1030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002C12A4; /* je: equal / zero */

loc_002C1049: ;
    xmm0 = MEMF(ebp); /* movss */
    /* comiss xmm0, MEMF(0x6490F4) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6490F4))) goto loc_002C1064; /* jbe: below or equal (unsigned <=) */

loc_002C1057: ;
    SET_LO8(eax, MEM8(ebp + 0x65));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C1068; /* jne: not equal / not zero */

loc_002C105E: ;
    MEM8(ebp + 0x65) = 1;
    goto loc_002C1068;

loc_002C1064: ;
    MEM8(ebp + 0x65) = 0;

loc_002C1068: ;
    xmm0 = MEMF(ebp); /* movss */
    /* comiss xmm0, MEMF(0x648FF0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648FF0))) goto loc_002C128B; /* jbe: below or equal (unsigned <=) */

loc_002C107A: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x30); /* addss */
    /* comiss xmm0, MEMF(0x648D80) - sets EFLAGS */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D80))) goto loc_002C12A4; /* jbe: below or equal (unsigned <=) */

loc_002C1099: ;
    eax = edi + 0x564;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = eax;
    goto loc_002C10B0;

loc_002C10A6: ;
    edi = MEM32(esp + 0x18);
    /* nop */

loc_002C10B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00556FA0(); /* call 0x00556FA0 */

loc_002C10C4: ;
    esp = esp + 0x1C;
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    MEMF(ebp + 0x60) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_002C116A; /* jbe: below or equal (unsigned <=) */

loc_002C10DE: ;
    if (TEST_Z(esi, esi)) goto loc_002C1123; /* je: equal / zero */

loc_002C10E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x60C190);
    edi = esi;
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002C10F0: ;
    eax = MEM32(esi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002C1123; /* je: equal / zero */

loc_002C10FD: ;
    ecx = MEM32(esi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002C1123; /* je: equal / zero */

loc_002C1107: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002C1123; /* je: equal / zero */

loc_002C110E: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x60C190;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002C1120: ;
    esp = esp + 4;

loc_002C1123: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x60C174);
    eax = esi;
    PUSH32(esp, 0); sub_002C1F60(); /* call 0x002C1F60 */

loc_002C1143: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x60C164);
    eax = esi;
    PUSH32(esp, 0); sub_002C1F60(); /* call 0x002C1F60 */

loc_002C1163: ;
    edi = MEM32(esp + 0x40);
    esp = esp + 0x28;

loc_002C116A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00556FA0(); /* call 0x00556FA0 */

loc_002C117E: ;
    esp = esp + 0x1C;
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    MEMF(ebp + 0x58) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_002C1267; /* jbe: below or equal (unsigned <=) */

loc_002C1198: ;
    if (TEST_Z(esi, esi)) goto loc_002C11DD; /* je: equal / zero */

loc_002C119C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x60C184);
    edi = esi;
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002C11AA: ;
    eax = MEM32(esi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002C11DD; /* je: equal / zero */

loc_002C11B7: ;
    ecx = MEM32(esi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002C11DD; /* je: equal / zero */

loc_002C11C1: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002C11DD; /* je: equal / zero */

loc_002C11C8: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x60C184;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002C11DA: ;
    esp = esp + 4;

loc_002C11DD: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x60C174);
    eax = esi;
    PUSH32(esp, 0); sub_002C1F60(); /* call 0x002C1F60 */

loc_002C11FD: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x60C164);
    eax = esi;
    PUSH32(esp, 0); sub_002C1F60(); /* call 0x002C1F60 */

loc_002C121D: ;
    edi = MEM32(esp + 0x44);
    esp = esp + 0x28;
    if (TEST_Z(edi, edi)) goto loc_002C1267; /* je: equal / zero */

loc_002C1228: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5E9914);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002C1234: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002C1267; /* je: equal / zero */

loc_002C1241: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002C1267; /* je: equal / zero */

loc_002C124B: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002C1267; /* je: equal / zero */

loc_002C1252: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x5E9914;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002C1264: ;
    esp = esp + 4;

loc_002C1267: ;
    xmm1 = MEMF(ebp + 0x30); /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x30) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_002C10A6; /* ja: above (unsigned >) */

loc_002C1286: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C128B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x5E9914);
    MEMF(ebp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C12A1: ;
    esp = esp + 4;

loc_002C12A4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C12B0
 * Original: 0x002C12B0 - 0x002C131E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C12B0(void)
{
    uint32_t ebp;
    float xmm0, xmm5;

loc_002C12B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    xmm0 = MEMF(ecx + 0x520); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002C12FA: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C130C: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C131A: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C1320
 * Original: 0x002C1320 - 0x002C1359 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C1320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C1320: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x68);
    ecx = ecx + 0xFFFFFF3Fu;
    if (CMP_A(ecx, 0xC)) goto loc_002C1358; /* ja: above (unsigned >) */

loc_002C1332: ;
    ecx = ZX8(MEM8(ecx + 0x2C136C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x2C135C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002C1340u) goto loc_002C1340;
    if (_jt == 0x002C1345u) goto loc_002C1345;
    if (_jt == 0x002C134Fu) goto loc_002C134F;
    if (_jt == 0x002C1358u) goto loc_002C1358;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002C1340: ;
    g_seh_ebp = ebp; sub_002BEFD0(); return; /* tail jmp 0x002BEFD0 */

loc_002C1345: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002C0C40(); /* call 0x002C0C40 */

loc_002C134D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C134F: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_002C0D50(); /* call 0x002C0D50 */

loc_002C1357: ;
    POP32(esp, edi);

loc_002C1358: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C1380
 * Original: 0x002C1380 - 0x002C13EE (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C1380(void)
{
    uint32_t ebp;
    float xmm0, xmm5;

loc_002C1380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    xmm0 = MEMF(ecx + 0x528); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002C13CA: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C13DC: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C13EA: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C13F0
 * Original: 0x002C13F0 - 0x002C1466 (118 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C13F0(void)
{
    uint32_t ebp;
    float xmm0, xmm5;

loc_002C13F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    xmm0 = MEMF(ecx + 0x528); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002C1442: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C1454: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C1462: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C1470
 * Original: 0x002C1470 - 0x002C14DE (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C1470(void)
{
    uint32_t ebp;
    float xmm0, xmm5;

loc_002C1470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    xmm0 = MEMF(ecx + 0x520); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002C14BA: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C14CC: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C14DA: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C14E0
 * Original: 0x002C14E0 - 0x002C154E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C14E0(void)
{
    uint32_t ebp;
    float xmm0, xmm5;

loc_002C14E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    xmm0 = MEMF(ecx + 0x524); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002C152A: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C153C: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C154A: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C1550
 * Original: 0x002C1550 - 0x002C15C5 (117 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C1550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_002C1550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_002C15B3; /* je: equal / zero */

loc_002C156B: ;
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_002C15A4: ;
    esp = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C15B3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_002C15C1: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C15D0
 * Original: 0x002C15D0 - 0x002C1776 (422 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C15D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C15D0: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    (void)0; /* cmp MEM32(ebx + 0x68), 0xCC - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(ebx + 0x68), 0xCC)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax--;
    eax = eax & 0x4EA2550;
    eax = eax + 0x7362DBD;
    esi = eax;
    PUSH32(esp, 0); sub_002B3FF0(); /* call 0x002B3FF0 */

loc_002C15F1: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002C1671; /* je: equal / zero */

loc_002C15F6: ;
    ecx = MEM32(0x84A1B0);
    MEM8(ecx + eax) = 0;
    edi = MEM32(0x84A1AC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    eax = eax + edi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_002C1616: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002C1671; /* je: equal / zero */

loc_002C161D: ;
    edx = MEM32(0x84A5F8);
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edi = MEM32(eax + edx + 0x23C);
    ecx = eax + edx;
    eax = MEM32(ebx + 0x78);
    MEM32(ecx + 0x78) = eax;
    edx = MEM32(ebx + 0x7C);
    MEM32(ecx + 0x7C) = edx;
    eax = MEM32(ebx + 0x80);
    MEM32(ecx + 0x80) = eax;
    eax = MEM32(ecx + 0x200);
    SET_LO8(edx, MEM8(ebx + 0x60));
    eax = eax | 0x80000000u;
    SET_LO8(edx, LO8(edx) + 1);
    MEM32(ecx + 0x200) = eax;
    eax = MEM32(esp + 0x10);
    MEM8(ecx + 0x250) = LO8(edx);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002C1671: ;
    esi = 0x96E74BE;
    PUSH32(esp, 0); sub_002B3FF0(); /* call 0x002B3FF0 */

loc_002C167B: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002C1772; /* je: equal / zero */

loc_002C1684: ;
    ecx = MEM32(0x84A1B0);
    MEM8(ecx + eax) = 0;
    esi = MEM32(0x84A1AC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    eax = eax + esi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_002C16A4: ;
    ebp = eax;
    esp = esp + 0xC;
    if (TEST_Z(ebp, ebp)) goto loc_002C1772; /* je: equal / zero */

loc_002C16B1: ;
    ecx = MEM32(0x84A5F8);
    edx = MEM32(ebx + 0x78);
    ebp--;
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    edi = MEM32(esi + ecx + 0x23C);
    MEM32(esi + ecx + 0x78) = edx;
    eax = MEM32(ebx + 0x7C);
    MEM32(esi + ecx + 0x7C) = eax;
    edx = MEM32(ebx + 0x80);
    MEM32(esi + ecx + 0x80) = edx;
    SET_LO8(eax, MEM8(ebx + 0x60));
    edx = MEM32(esi + ecx + 0x200);
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + ecx + 0x250) = LO8(eax);
    eax = MEM32(esp + 0x10);
    edx = edx | 0x80000000u;
    MEM32(esi + ecx + 0x200) = edx;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002C170B: ;
    ecx = MEM32(ebx + 0x570);
    edx = MEM32(0x84A5F8);
    MEM32(ecx + 0x34) = ebp;
    PUSH32(esp, 0x60C190);
    eax = esi + edx;
    MEM8(ebx + 0x43D) = 1;
    MEM32(ebx + 0x420) = 0;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C1738: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, 0x60C184);
    eax = eax + esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C1749: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, 0x60C1A4);
    eax = esi + ecx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C175C: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, 0x60C19C);
    eax = esi + edx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C176F: ;
    esp = esp + 0x10;

loc_002C1772: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C1780
 * Original: 0x002C1780 - 0x002C188B (267 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C1780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C1780: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x135));
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = ecx + edx + -1744;
    (void)0; /* cmp MEM8(esi + 0x43D), 5 - flags set for next jcc */
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(MEM8(esi + 0x43D), 5)) { sub_002C188B(); return; } /* je: equal / zero */

loc_002C17B3: ;
    ecx = MEM32(edi + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_002C188B(); return; } /* je: equal / zero */

loc_002C17C1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002C188B(); return; } /* je: equal / zero */

loc_002C17C9: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C17CE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_G(edx, 0x14)) goto loc_002C184A; /* jg: greater (signed >) */

loc_002C17DB: ;
    edx = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0x40);
    edi = MEM32(ebp + 4);
    PUSH32(esp, 0x8C4);
    ebx = esi;
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_002C17F5: ;
    if (CMP_GE(eax & eax, 0)) goto loc_002C1844; /* jge: greater or equal (signed >=) */

loc_002C17F9: ;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_002C17FE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C1844; /* je: equal / zero */

loc_002C1802: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002C181E; /* je: equal / zero */

loc_002C180C: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_002C1824;

loc_002C181E: ;
    eax = MEM32(esi + 0x580);

loc_002C1824: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    eax = 0x8C4;
    PUSH32(esp, ebp);
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002C1844: ;
    edi = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002C184A: ;
    edx = MEM32(edi + 0x568);
    SET_LO8(eax, MEM8(edx + 0x2BC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C1876; /* jne: not equal / not zero */

loc_002C185A: ;
    SET_LO8(ecx, MEM8(esi + 0x43D));
    SET_LO8(eax, 4);
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_002C1876; /* je: equal / zero */

loc_002C1866: ;
    MEM8(esi + 0x43D) = LO8(eax);
    MEM32(esi + 0x420) = 0;

loc_002C1876: ;
    eax = MEM32(edi + 0x1CC);
    MEM32(esi + 0x1CC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002E6F10(); return; /* tail jmp 0x002E6F10 */

}

/**
 * sub_002C18A0
 * Original: 0x002C18A0 - 0x002C1A83 (483 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C18A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C18A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A5F8);
    edx = MEM32(0x84A5FC);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    ecx = ecx + 0x135;
    PUSH32(esp, esi);

loc_002C18B7: ;
    if (CMP_NE(MEM8(edx + eax), 0x2F)) goto loc_002C18CD; /* jne: not equal / not zero */

loc_002C18BD: ;
    esi = ZX16(MEM16(edi + 0x60));
    ebx = ZX8(MEM8(ecx));
    esi++;
    if (CMP_EQ(ebx, esi)) goto loc_002C1A7F; /* je: equal / zero */

loc_002C18CD: ;
    eax++;
    ecx = ecx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_002C18B7; /* jl: less (signed <) */

loc_002C18DB: ;
    eax = MEM32(0x6BD92C);
    if (CMP_NE(MEM32(eax + 4), 1)) goto loc_002C18F7; /* jne: not equal / not zero */

loc_002C18E6: ;
    eax = 0x1441E75;
    MEM32(0x6F1EB0) = 0xCE;
    goto loc_002C1906;

loc_002C18F7: ;
    eax = 0x2F07559;
    MEM32(0x6F1EB0) = 0xCF;

loc_002C1906: ;
    PUSH32(esp, 0);
    MEM32(0x6F1EA4) = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x6F1EA0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_002C191B: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002C1A7F; /* je: equal / zero */

loc_002C1926: ;
    edx = MEM32(edi + 0x78);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(0x84A5F8);
    esi = eax + ecx + -1744;
    ebx = esi + 0x78;
    MEM32(ebx) = edx;
    eax = MEM32(edi + 0x7C);
    MEM32(esi + 0x7C) = eax;
    ecx = MEM32(edi + 0x80);
    MEM32(esi + 0x80) = ecx;
    ecx = MEM32(esi + 0x200);
    ecx = ecx | 0x80000000u;
    PUSH32(esp, edi);
    MEM8(esi + 0x234) = 0xFF;
    MEM32(esi + 0x200) = ecx;
    MEM8(esi + 0x43D) = 2;
    MEM32(esi + 0x420) = 0;
    PUSH32(esp, 0); sub_000215C0(); /* call 0x000215C0 */

loc_002C1983: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    esp = esp + 4;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002C1999: ;
    if (TEST_NZ(eax, eax)) goto loc_002C1A17; /* jne: not equal / not zero */

loc_002C199D: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    if (CMP_B(esi, ebp)) goto loc_002C1A16; /* jb: below (unsigned <) */

loc_002C19A8: ;
    ecx = ebp + 0x36ED0;
    if (CMP_A(esi, ecx)) goto loc_002C1A16; /* ja: above (unsigned >) */

loc_002C19B2: ;
    ecx = esi;
    ecx = ecx - ebp;
    eax = 0x2C9FB4D9;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = ecx - edx;
    ecx = ecx >> 1;
    ecx = ecx + edx;
    ecx = ecx >> 0xA;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + ebp;
    if (CMP_NE(esi, ecx)) goto loc_002C1A16; /* jne: not equal / not zero */

loc_002C19D2: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002C19EF; /* je: equal / zero */

loc_002C19DC: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_002C19F5;

loc_002C19EF: ;
    eax = MEM32(esi + 0x580);

loc_002C19F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0x8C5;
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002C1A16: ;
    POP32(esp, ebp);

loc_002C1A17: ;
    SET_LO8(ecx, MEM8(edi + 0x60));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 0x135) = LO8(ecx);
    edx = MEM32(edi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58D8;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002C1A44: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002C1A58; /* je: equal / zero */

loc_002C1A4B: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_002C1A58; /* je: equal / zero */

loc_002C1A53: ;
    eax = MEM32(eax + 8);
    goto loc_002C1A5A;

loc_002C1A58: ;
    eax = 0; /* xor self */

loc_002C1A5A: ;
    MEM32(esi + 0x12C) = eax;
    MEM8(esi + 0x209) = MEM8(esi + 0x209) | 0x10;
    eax = MEM32(edi + 0x260);
    MEM32(esi + 0x260) = eax;
    ecx = MEM32(edi + 0x264);
    MEM32(esi + 0x264) = ecx;

loc_002C1A7F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C1A90
 * Original: 0x002C1A90 - 0x002C1CDA (586 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C1A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C1A90: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = MEM32(edi + 0x570);
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(edi + 0x568);
    SET_LO8(ebx, 0xFF);
    MEM8(eax + 0x38D) = 1;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = 0;
    MEM8(edi + 0x234) = LO8(ebx);
    if (TEST_NZ(esi, esi)) goto loc_002C1BAE; /* jne: not equal / not zero */

loc_002C1ACA: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002C1AD8; /* jne: not equal / not zero */

loc_002C1AD3: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002C1AD8: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_002C1B20; /* je: equal / zero */

loc_002C1AFE: ;
    if (CMP_B(MEM32(esi + 0x80), 8)) goto loc_002C1B20; /* jb: below (unsigned <) */

loc_002C1B07: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002C1B11: ;
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002C1B19: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002C1B3D; /* jne: not equal / not zero */

loc_002C1B20: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002C1B32: ;
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002C1B3A: ;
    esp = esp + 8;

loc_002C1B3D: ;
    MEM32(edi + 0x570) = eax;
    MEM32(eax) = 0;
    MEM8(eax + 4) = 1;
    MEM32(esp + 0x10) = eax;
    (void)0; /* cmp MEM8(edi + 0xB7), 1 - flags set for next jcc */
    MEM8(edi + 0x17D) = LO8(ebx);
    MEM8(edi + 0x180) = LO8(ebx);
    if (CMP_A(MEM8(edi + 0xB7), 1)) goto loc_002C1B84; /* ja: above (unsigned >) */

loc_002C1B66: ;
    edx = 0; /* xor self */
    ecx = edi;
    MEM8(edi + 0xB7) = 0;
    MEM8(edi + 0xB4) = 0;
    MEM8(edi + 0xB5) = 0;
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_002C1B84: ;
    if (CMP_A(MEM8(edi + 0xB7), 2)) goto loc_002C1BAA; /* ja: above (unsigned >) */

loc_002C1B8D: ;
    edx = 0; /* xor self */
    ecx = edi;
    MEM8(edi + 0xB7) = 2;
    MEM8(edi + 0xB5) = LO8(ebx);
    MEM8(edi + 0xB6) = 1;
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_002C1BAA: ;
    esi = MEM32(esp + 0x10);

loc_002C1BAE: ;
    if (CMP_NE(MEM32(esi), 0)) goto loc_002C1BEC; /* jne: not equal / not zero */

loc_002C1BB3: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002C1BEC; /* je: equal / zero */

loc_002C1BBD: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002C1BC7: ;
    if (TEST_Z(eax, eax)) goto loc_002C1BEC; /* je: equal / zero */

loc_002C1BCB: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002C1BEC; /* jp: parity */

loc_002C1BE0: ;
    MEM32(esi) = 1;
    MEM8(edi + 0x180) = LO8(edx);

loc_002C1BEC: ;
    eax = ZX16(MEM16(edi + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    SET_LO16(ecx, MEM16(edi + 0x170));
    MEM8(edi + 0x1B3) = 1;
    MEM8(edi + 0x17A) = 1;
    MEM8(edi + 0x42E) = 0;
    MEM16(esp + 0x1C) = LO16(ecx);
    ebp = eax;
    if (CMP_L(eax, edx)) goto loc_002C1C23; /* jl: less (signed <) */

loc_002C1C1E: ;
    ebp = 0x14;

loc_002C1C23: ;
    ecx = MEM32(0x84A144);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1B0);
    ebp = ebp + 0x763260;
    if (CMP_G(eax, ecx)) goto loc_002C1C65; /* jg: greater (signed >) */

loc_002C1C39: ;
    SET_LO8(ecx, MEM8(eax + 0x771BEC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C1C65; /* je: equal / zero */

loc_002C1C43: ;
    xmm0 = MEMF(eax * 4 + 0x771C28); /* movss */
    /* comiss xmm0, MEMF(0x648F58) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648F58))) goto loc_002C1C65; /* jbe: below or equal (unsigned <=) */

loc_002C1C55: ;
    if (CMP_EQ(MEM32(0x776574), 2)) goto loc_002C1C65; /* je: equal / zero */

loc_002C1C5E: ;
    edx = ebp;
    PUSH32(esp, 0); sub_0004DAE0(); /* call 0x0004DAE0 */

loc_002C1C65: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C1C77; /* jne: not equal / not zero */

loc_002C1C6E: ;
    SET_LO8(eax, MEM8(0x862D90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C1C7E; /* je: equal / zero */

loc_002C1C77: ;
    edx = ebp;
    PUSH32(esp, 0); sub_0004DAE0(); /* call 0x0004DAE0 */

loc_002C1C7E: ;
    eax = MEM32(edi + 0x7C);
    edx = MEM32(edi + 0x200);
    edx = edx | 0x40;
    MEM32(edi + 0x3B8) = eax;
    SET_LO8(eax, MEM8(edi + 0x20B));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi + 0x200) = edx;
    esi = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C1CAA; /* je: equal / zero */

loc_002C1CA2: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(edi + 0x20B) = LO8(eax);

loc_002C1CAA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(edi + 0x1B5) = 0;
    xmm1 = (float)(int32_t)MEM32(ebp + 4); /* cvtsi2ss */
    xmm2 = (float)(int32_t)MEM32(ebp + 8); /* cvtsi2ss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x24) = xmm2; /* movss */
    if (1 /* jp after test - parity */) { sub_002C1CDA(); return; } /* jp: parity */

loc_002C1CCD: ;
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002C1CDA(); return; } /* jp: parity */

loc_002C1CD6: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002C1D06(); return; /* tail jmp 0x002C1D06 */

}

/**
 * sub_002C1F60
 * Original: 0x002C1F60 - 0x002C1FC5 (101 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C1F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C1F60: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002C1F83: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_002C1FC3; /* je: equal / zero */

loc_002C1F8B: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_002C1FC3; /* je: equal / zero */

loc_002C1F92: ;
    eax = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C1FC3; /* je: equal / zero */

loc_002C1F9C: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(0) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(0) = LO8(eax);
    MEM8(0) = LO8(ecx);
    MEM8(0) = LO8(edx);

loc_002C1FC3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C1FD0
 * Original: 0x002C1FD0 - 0x002C2028 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C1FD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C1FD0: ;
    eax = MEM32(esi + 0x70);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x70;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002C1FED; /* je: equal / zero */

loc_002C1FDC: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_002C1FED: ;
    eax = MEM32(esi + 0x78);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = esi + 0x78;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002C200A; /* je: equal / zero */

loc_002C1FF8: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(esi + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_002C200A: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 0x68);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0xCC - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xCC)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM32(ecx * 4 + 0x84A5B4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002C2030
 * Original: 0x002C2030 - 0x002C25A1 (1393 bytes, 326 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C2030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;

loc_002C2030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x214;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x130;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F369C);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_002C2053: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x154;
    PUSH32(esp, edx);
    edx = esp + 0x70;
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_002C208B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x28;
    eax = 0; /* xor self */
    PUSH32(esp, 0);
    ecx = 0x35;
    edi = esp + 0x5C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(0x847024);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEM8(esp + 0xDC) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x10B));
    edi = esi + 0x78;
    PUSH32(esp, edi);
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xBF800000u);
    MEM8(esp + 0x11C) = LO8(eax);
    MEM32(esp + 0x110) = 0xCF570;
    MEM32(esp + 0x108) = 0x13E6E0;
    MEM8(esp + 0xEC) = 0xFF;
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM8(esp + 0x114) = 1;
    MEM32(esp + 0x118) = esi;
    MEM16(esp + 0x11E) = 0xC;
    MEM16(esp + 0x120) = 0x15;
    MEM32(esp + 0xD8) = 0x1039ED;
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    eax = 0x8F4;
    PUSH32(esp, edx);
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002C21CC: ;
    MEM32(esp + 0xD8) = 0x13EDB0;
    edx = MEM32(esi + 0x68);
    xmm0 = MEMF(edi); /* movss */
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 0xCC - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edx, 0xCC)) ? 1 : 0); /* sete */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    edx = esi;
    MEM32(esp + 0xF4) = 0x13EC80;
    eax = eax + 0xFE;
    MEM32(esp + 0xC8) = eax;
    eax = esp + 0x170;
    MEM32(esp + 0xE0) = 0x13F750;
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_002C2241: ;
    eax = MEM32(0x6F1F2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_BE(eax & eax, 0)) goto loc_002C255F; /* jbe: below or equal (unsigned <=) */

loc_002C2256: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002C225B: ;
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm0 = xmm0 + MEMF(0x648FD8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C2276: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_002C2282; /* jns: not sign (positive) */

loc_002C227D: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_002C2282: ;
    eax = eax - 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C228B: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0xB0;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_002C229D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002C22A2: ;
    xmm5 = MEMF(0x648F00); /* movss */
    xmm6 = MEMF(0x648CFC); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002C22C8: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002C22DE: ;
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 - MEMF(0x648CF0); /* subss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C22FC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = esp + 0x70;
    edx = edx + 0x12C;
    MEM32(esp + 0xDC) = edx;
    edx = esp + 0x188;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_002C2332: ;
    ecx = MEM32(esp + 0x44);
    ebx = MEM32(ecx * 8 + 0x6F1EF8);
    esi = eax;
    edx = MEM32(esi + 0x100);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 8);
    esp = esp + 0x2C;
    if (TEST_Z(eax, eax)) goto loc_002C23B3; /* je: equal / zero */

loc_002C2355: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002C23B3; /* je: equal / zero */

loc_002C235C: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002C236A: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002C23B3; /* je: equal / zero */

loc_002C2371: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_002C2390; /* je: equal / zero */

loc_002C2379: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_002C2386; /* je: equal / zero */

loc_002C2380: ;
    MEM32(esp + 0x20) = eax;
    goto loc_002C2394;

loc_002C2386: ;
    MEM32(esp + 0x20) = 0;
    goto loc_002C23B3;

loc_002C2390: ;
    eax = MEM32(esp + 0x20);

loc_002C2394: ;
    if (TEST_Z(eax, eax)) goto loc_002C23B3; /* je: equal / zero */

loc_002C2398: ;
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0xE8) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0xEC) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xF0) = eax;

loc_002C23B3: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEM8(esi + 0xE4) = 1;
    xmm1 = MEMF(esi + 0xE8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x60); /* addss */
    edi = esi + 0x60;
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xEC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xF0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002C240B: ;
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm0 = MEMF(0x648E58); /* movss */
    if ((xmm1 > xmm0)) goto loc_002C2423; /* ja: above (unsigned >) */

loc_002C2420: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_002C2423: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x49);
    eax = 0x68;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_002C2440: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002C24C4; /* je: equal / zero */

loc_002C2447: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 0x24); /* movss */
    MEM32(eax + 0x2C) = 0;
    edx = edi;
    ebx = MEM32(edx);
    ecx = eax + 0x4C;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    edx = MEM32(edx + 8);
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEM32(ecx + 8) = edx;
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x649294); /* movss */
    MEMF(eax + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x48) = xmm1; /* movss */
    ecx = 0; /* xor self */
    MEM8(eax + 0x30) = LO8(ecx);
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM8(eax + 0x14) = 1;
    ecx = MEM32(edi);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x20) = ecx;
    MEM8(eax + 0x14) = 1;
    MEMF(eax + 0x24) = xmm0; /* movss */

loc_002C24C4: ;
    edx = MEM32(esi + 0x100);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    ecx = MEM32(0x6F1F2C);
    ebx = MEM32(edx + 0x14);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_BE(ecx & ecx, 0)) goto loc_002C254E; /* jbe: below or equal (unsigned <=) */

loc_002C24E6: ;
    if (CMP_EQ(MEM32(esp + 0x18), eax)) goto loc_002C253F; /* je: equal / zero */

loc_002C24EC: ;
    eax = MEM32(eax * 8 + 0x6F1EF4);
    ecx = MEM32(esi + 0x100);
    edi = MEM32(ecx + 0x14);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_003EDAC0(); /* call 0x003EDAC0 */

loc_002C2509: ;
    eax = MEM32(esp + 0x34);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002C253B; /* je: equal / zero */

loc_002C2515: ;
    edx = MEM32(ebx + 4);
    edi = MEM32(edi + 0xC);
    ecx = eax + eax * 4;
    ecx = MEM32(edx + ecx * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + edi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + edi) = LO8(ecx);

loc_002C253B: ;
    eax = MEM32(esp + 0x1C);

loc_002C253F: ;
    ecx = MEM32(0x6F1F2C);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_B(eax, ecx)) goto loc_002C24E6; /* jb: below (unsigned <) */

loc_002C254E: ;
    eax = MEM32(esp + 0x18);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(eax, ecx)) goto loc_002C2256; /* jb: below (unsigned <) */

loc_002C255F: ;
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x88);
    if (TEST_Z(ecx, ecx)) goto loc_002C2590; /* je: equal / zero */

loc_002C256C: ;
    eax = ZX8(MEM8(ecx + 0x3B));
    if (TEST_S(eax, eax)) goto loc_002C2579; /* jl: less (signed <) */

loc_002C2574: ;
    if (CMP_L(eax, 0x4F)) goto loc_002C257B; /* jl: less (signed <) */

loc_002C2579: ;
    eax = 0; /* xor self */

loc_002C257B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x595360), _icall_esp); /* indirect call */
    }

loc_002C2583: ;
    esp = esp + 4;
    MEM32(esi + 0x88) = 0;

loc_002C2590: ;
    POP32(esp, edi);
    MEM32(esi + 0x84) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C25B0
 * Original: 0x002C25B0 - 0x002C2928 (888 bytes, 235 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C25B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002C25B0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM8(edi + 0xA0) = 4;
    MEM8(0x84A5BC) = 1;
    PUSH32(esp, 0); sub_002DA170(); /* call 0x002DA170 */

loc_002C25C9: ;
    eax = MEM32(edi + 0x68);
    esp = esp + 4;
    (void)0; /* cmp eax, 0x121 - flags set for next jcc */
    MEM8(0x84A5BC) = 0;
    if (CMP_NE(eax, 0x121)) goto loc_002C266B; /* jne: not equal / not zero */

loc_002C25E1: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002C25FA; /* je: equal / zero */

loc_002C25EB: ;
    PUSH32(esp, 0);
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036830(); /* call 0x00036830 */

loc_002C25F7: ;
    esp = esp + 4;

loc_002C25FA: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002C28E1; /* je: equal / zero */

loc_002C2608: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002C2612: ;
    if (TEST_Z(eax, eax)) goto loc_002C28E1; /* je: equal / zero */

loc_002C261A: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(eax + 0xE8) - sets EFLAGS */
    ecx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x1CC) = xmm0; /* movss */
    if ((xmm1 > MEMF(eax + 0xE8))) goto loc_002C2656; /* ja: above (unsigned >) */

loc_002C2641: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    goto loc_002C28E1;

loc_002C2656: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    goto loc_002C28E1;

loc_002C266B: ;
    if (CMP_NE(eax, 0xCB)) goto loc_002C28B7; /* jne: not equal / not zero */

loc_002C2676: ;
    if (TEST_Z(MEM32(edi + 0x1FC), 0x18000)) goto loc_002C2689; /* je: equal / zero */

loc_002C2682: ;
    MEM8(edi + 0x1B1) = 1;

loc_002C2689: ;
    SET_LO8(eax, MEM8(edi + 0x1B1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C2771; /* jne: not equal / not zero */

loc_002C2697: ;
    xmm0 = MEMF(edi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x88); /* subss */
    xmm2 = MEMF(0x64B3EC); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x58BD44); /* movss */
    if ((xmm2 <= xmm0)) goto loc_002C26BE; /* jbe: below or equal (unsigned <=) */

loc_002C26B9: ;
    xmm0 = xmm2; /* movaps */
    goto loc_002C26C6;

loc_002C26BE: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_002C26C6; /* jbe: below or equal (unsigned <=) */

loc_002C26C3: ;
    xmm0 = xmm1; /* movaps */

loc_002C26C6: ;
    eax = MEM32(edi + 0x74);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(0x64B3E8); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm1 = xmm1 + MEMF(0x648D3C); /* addss */
    MEMF(esp + 8) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_002C275F; /* je: equal / zero */

loc_002C26FB: ;
    ecx = MEM32(eax + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_002C275F; /* je: equal / zero */

loc_002C2702: ;
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) goto loc_002C275F; /* je: equal / zero */

loc_002C2708: ;
    if (CMP_NE(ecx, 0x3E7)) goto loc_002C271C; /* jne: not equal / not zero */

loc_002C2710: ;
    eax = 0xCB;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002C271A: ;
    goto loc_002C2759;

loc_002C271C: ;
    if (CMP_A(MEM16(0x770526), 0)) goto loc_002C2732; /* ja: above (unsigned >) */

loc_002C2726: ;
    eax = 0xCB;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002C2730: ;
    goto loc_002C2759;

loc_002C2732: ;
    eax = MEM32(eax + 0x50);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    SET_LO8(edx, 1);
    eax = edi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002C2756: ;
    esp = esp + 0x20;

loc_002C2759: ;
    xmm1 = MEMF(esp + 8); /* movss */

loc_002C275F: ;
    eax = MEM32(edi + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_002C276C: ;
    goto loc_002C28C8;

loc_002C2771: ;
    xmm1 = MEMF(edi + 0xDC); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002C283F; /* jnp: not parity */

loc_002C2789: ;
    xmm1 = MEMF(edi + 0x110); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002C283F; /* jnp: not parity */

loc_002C279E: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x649418); /* mulss */
    xmm1 = MEMF(0x648E64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_002C27C9; /* ja: above (unsigned >) */

loc_002C27BC: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_002C27CF; /* jbe: below or equal (unsigned <=) */

loc_002C27C9: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_002C27CF: ;
    eax = MEM32(edi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_002C28A6; /* je: equal / zero */

loc_002C27DA: ;
    ecx = MEM32(eax + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_002C28A6; /* je: equal / zero */

loc_002C27E5: ;
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) goto loc_002C28A6; /* je: equal / zero */

loc_002C27EF: ;
    if (CMP_NE(ecx, 0x3E7)) goto loc_002C2806; /* jne: not equal / not zero */

loc_002C27F7: ;
    eax = 0xCB;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002C2801: ;
    goto loc_002C28A6;

loc_002C2806: ;
    if (CMP_A(MEM16(0x770526), 0)) goto loc_002C281F; /* ja: above (unsigned >) */

loc_002C2810: ;
    eax = 0xCB;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002C281A: ;
    goto loc_002C28A6;

loc_002C281F: ;
    eax = MEM32(eax + 0x50);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 4));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    goto loc_002C289A;

loc_002C283F: ;
    eax = MEM32(edi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_002C28A6; /* je: equal / zero */

loc_002C2846: ;
    ecx = MEM32(eax + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_002C28A6; /* je: equal / zero */

loc_002C284D: ;
    ecx = MEM32(ecx + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_002C28A6; /* je: equal / zero */

loc_002C2854: ;
    if (CMP_NE(ecx, 0x3E7)) goto loc_002C2868; /* jne: not equal / not zero */

loc_002C285C: ;
    eax = 0xCB;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002C2866: ;
    goto loc_002C28A6;

loc_002C2868: ;
    if (CMP_A(MEM16(0x770526), 2)) goto loc_002C287E; /* ja: above (unsigned >) */

loc_002C2872: ;
    eax = 0xCB;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_002C287C: ;
    goto loc_002C28A6;

loc_002C287E: ;
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x1C));
    eax = MEM32(eax + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);

loc_002C289A: ;
    eax = edi;
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_002C28A3: ;
    esp = esp + 0x20;

loc_002C28A6: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002C28E1; /* je: equal / zero */

loc_002C28B0: ;
    PUSH32(esp, 0x3F800000);
    goto loc_002C28D4;

loc_002C28B7: ;
    xmm0 = MEMF(0x648D10); /* movss */
    /* comiss xmm0, MEMF(edi + 0x110) - sets EFLAGS */
    if ((xmm0 < MEMF(edi + 0x110))) goto loc_002C28E1; /* jb: below (unsigned <) */

loc_002C28C8: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002C28E1; /* je: equal / zero */

loc_002C28D2: ;
    PUSH32(esp, 0);

loc_002C28D4: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036830(); /* call 0x00036830 */

loc_002C28DE: ;
    esp = esp + 4;

loc_002C28E1: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C2926; /* je: equal / zero */

loc_002C28EA: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_002C2926; /* jne: not equal / not zero */

loc_002C28F3: ;
    xmm0 = MEMF(0x648E38); /* movss */
    /* comiss xmm0, MEMF(edi + 0x3F8) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x3F8))) goto loc_002C2926; /* jbe: below or equal (unsigned <=) */

loc_002C2904: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x5E0);
    PUSH32(esp, 0); sub_002ED7A0(); /* call 0x002ED7A0 */

loc_002C2910: ;
    ecx = ZX16(MEM16(edi + 0x60));
    xmm0 = MEMF(eax + 0x14); /* movss */
    PUSH32(esp, ecx);
    esi = edi + 0x78;
    PUSH32(esp, 0); sub_00341430(); /* call 0x00341430 */

loc_002C2922: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_002C2926: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C2930
 * Original: 0x002C2930 - 0x002C29F0 (192 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C2930(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C2930: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_002C29E0; /* jne: not equal / not zero */

loc_002C2944: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002C2952; /* jne: not equal / not zero */

loc_002C294D: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002C2952: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002C299D; /* je: equal / zero */

loc_002C2979: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_002C299D; /* jb: below (unsigned <) */

loc_002C2982: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002C298C: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002C2994: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_002C29C0; /* jne: not equal / not zero */

loc_002C299D: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002C29AF: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002C29B7: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_Z(edi, edi)) goto loc_002C29D3; /* je: equal / zero */

loc_002C29C0: ;
    PUSH32(esp, ebx);
    eax = 2;
    PUSH32(esp, 0); sub_003C18A0(); /* call 0x003C18A0 */

loc_002C29CB: ;
    MEM32(edi) = 0x60C220;
    goto loc_002C29D5;

loc_002C29D3: ;
    edi = 0; /* xor self */

loc_002C29D5: ;
    MEM32(ebx + 0x570) = edi;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(edi, edi)) goto loc_002C29ED; /* je: equal / zero */

loc_002C29E0: ;
    esi = MEM32(ebx + 0x570);
    eax = ebx;
    PUSH32(esp, 0); sub_003C1B40(); /* call 0x003C1B40 */

loc_002C29ED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C29F0
 * Original: 0x002C29F0 - 0x002C2B2A (314 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C29F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C29F0: ;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(eax, eax)) goto loc_002C2A0B; /* je: equal / zero */

loc_002C29FD: ;
    if (CMP_LE(MEM16(eax + 0x2DE), 0)) goto loc_002C2B28; /* jle: less or equal (signed <=) */

loc_002C2A0B: ;
    ecx = ecx + 0xFFFFFFD0u;
    if (CMP_A(ecx, 3)) goto loc_002C2B28; /* ja: above (unsigned >) */

loc_002C2A17: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(ecx * 4 + 0x2C2B2C); /* switch: 4 entries, 3 targets */
    if (_jt == 0x002C2A1Fu) goto loc_002C2A1F;
    if (_jt == 0x002C2A7Bu) goto loc_002C2A7B;
    if (_jt == 0x002C2A7Du) goto loc_002C2A7D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002C2A1F: ;
    if (TEST_Z(eax, eax)) goto loc_002C2B27; /* je: equal / zero */

loc_002C2A27: ;
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x21A) = 0x78;
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x2DE) = MEM16(eax + 0x2DE) - 1;
    ecx = MEM32(esi + 0x568);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_002C2A59: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    esp = esp + 4;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x628);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002C2A78: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002C2A7B: ;
    SET_LO8(ebx, 1);

loc_002C2A7D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0);
    SET_LO8(eax, LO8(ebx));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, 0);
    SET_LO8(edx, 0x1E);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x114);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x439B0000);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_002C2AB8: ;
    ebp = eax;
    esp = esp + 0x38;
    if (TEST_Z(ebp, ebp)) goto loc_002C2AFC; /* je: equal / zero */

loc_002C2AC1: ;
    edi = MEM32(ebp + 0x23C);
    eax = esi;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_002C2ACE: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002C2AFC; /* je: equal / zero */

loc_002C2AD2: ;
    eax = esi;
    MEM8(ebp + 0x42D) = 0xFF;
    PUSH32(esp, 0); sub_0034D660(); /* call 0x0034D660 */

loc_002C2AE0: ;
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_002C2AFC; /* je: equal / zero */

loc_002C2AE7: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0034D710(); /* call 0x0034D710 */

loc_002C2AEE: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002C2AFC; /* je: equal / zero */

loc_002C2AF3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0034D6D0(); /* call 0x0034D6D0 */

loc_002C2AF9: ;
    esp = esp + 4;

loc_002C2AFC: ;
    eax = MEM32(esi + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_002C2B27; /* je: equal / zero */

loc_002C2B07: ;
    MEM16(eax + 0x2DE) = MEM16(eax + 0x2DE) - 1;
    ecx = MEM32(esi + 0x568);
    edi = MEM32(ecx + 0x444);
    PUSH32(esp, 1);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0032F3F0(); /* call 0x0032F3F0 */

loc_002C2B24: ;
    esp = esp + 4;

loc_002C2B27: ;
    POP32(esp, edi);

loc_002C2B28: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C3460
 * Original: 0x002C3460 - 0x002C34A8 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3460(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C3460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002C4430(); /* call 0x002C4430 */

loc_002C3469: ;
    PUSH32(esp, 0); sub_002C3A70(); /* call 0x002C3A70 */

loc_002C346E: ;
    PUSH32(esp, 0); sub_002C3950(); /* call 0x002C3950 */

loc_002C3473: ;
    PUSH32(esp, 0); sub_002C34D0(); /* call 0x002C34D0 */

loc_002C3478: ;
    ebx = 7;
    ecx = esi;
    PUSH32(esp, 0); sub_002C43C0(); /* call 0x002C43C0 */

loc_002C3484: ;
    if (CMP_NE(eax, 1)) { sub_002C34A8(); return; } /* jne: not equal / not zero */

loc_002C3489: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x2D2) = 6;
    PUSH32(esp, 0); sub_002C3C20(); /* call 0x002C3C20 */

loc_002C349B: ;
    PUSH32(esp, 0); sub_002C3F80(); /* call 0x002C3F80 */

loc_002C34A0: ;
    PUSH32(esp, 0); sub_002C3E50(); /* call 0x002C3E50 */

loc_002C34A5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C34D0
 * Original: 0x002C34D0 - 0x002C3551 (129 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C34D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C34D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 6;
    ecx = esi;
    PUSH32(esp, 0); sub_002C43C0(); /* call 0x002C43C0 */

loc_002C34DE: ;
    if (CMP_NE(eax, 1)) { sub_002C3551(); return; } /* jne: not equal / not zero */

loc_002C34E3: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    edx = MEM32(eax + 0x30);
    if (TEST_NZ(edx, edx)) goto loc_002C350F; /* jne: not equal / not zero */

loc_002C34F6: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_002C350F; /* je: equal / zero */

loc_002C3504: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x60C) = eax;
    goto loc_002C3519;

loc_002C350F: ;
    MEM32(ecx + 0x60C) = 0;

loc_002C3519: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    edi = 0x13;
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_002C352F: ;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x610) = 1;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x620) = 1;
    g_seh_ebp = ebp; sub_002C3712(); return; /* tail jmp 0x002C3712 */

}

/**
 * sub_002C3800
 * Original: 0x002C3800 - 0x002C3827 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3800(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C3800: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_002C3827(); return; } /* je: equal / zero */

loc_002C380A: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) { sub_002C3827(); return; } /* je: equal / zero */

loc_002C3814: ;
    eax = MEM32(eax + 0x280);
    if (TEST_Z(eax, eax)) { sub_002C3827(); return; } /* je: equal / zero */

loc_002C381E: ;
    SET_LO8(ecx, MEM8(eax + 5));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_002C3830
 * Original: 0x002C3830 - 0x002C3857 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3830(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C3830: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_002C3857(); return; } /* je: equal / zero */

loc_002C383A: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) { sub_002C3857(); return; } /* je: equal / zero */

loc_002C3844: ;
    eax = MEM32(eax + 0x280);
    if (TEST_Z(eax, eax)) { sub_002C3857(); return; } /* je: equal / zero */

loc_002C384E: ;
    SET_LO8(ecx, MEM8(eax + 6));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_002C3860
 * Original: 0x002C3860 - 0x002C389D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3860(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C3860: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) { sub_002C389D(); return; } /* je: equal / zero */

loc_002C386A: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) { sub_002C389D(); return; } /* je: equal / zero */

loc_002C3874: ;
    eax = MEM32(eax + 0x280);
    if (TEST_Z(eax, eax)) { sub_002C389D(); return; } /* je: equal / zero */

loc_002C387E: ;
    SET_LO8(edx, MEM8(eax + 4));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = MEM32(ecx + 0xA4);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002C3894; /* je: equal / zero */

loc_002C388B: ;
    (void)0; /* cmp eax, 0x69A - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(eax, 0x69A)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

loc_002C3894: ;
    (void)0; /* cmp eax, 0x69A - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 0x69A)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_002C38A0
 * Original: 0x002C38A0 - 0x002C38AD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C38A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C38A0: ;
    eax = MEM32(eax + 0x568);
    if (TEST_NZ(eax, eax)) { sub_002C38AD(); return; } /* jne: not equal / not zero */

loc_002C38AA: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002C38C0
 * Original: 0x002C38C0 - 0x002C390D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C38C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002C38C0: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) { sub_002C390D(); return; } /* je: equal / zero */

loc_002C38CA: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) { sub_002C390D(); return; } /* je: equal / zero */

loc_002C38D4: ;
    eax = MEM32(eax + 0x280);
    if (TEST_Z(eax, eax)) { sub_002C390D(); return; } /* je: equal / zero */

loc_002C38DE: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002C390D(); return; } /* je: equal / zero */

loc_002C38E5: ;
    eax = esi;
    PUSH32(esp, 0); sub_002C3DA0(); /* call 0x002C3DA0 */

loc_002C38EC: ;
    if (CMP_NE(MEM32(esi + 0xA4), eax)) goto loc_002C390A; /* jne: not equal / not zero */

loc_002C38F4: ;
    eax = MEM32(esi + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_002C3901: ;
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D10))) { sub_002C390D(); return; } /* jbe: below or equal (unsigned <=) */

loc_002C390A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002C3910
 * Original: 0x002C3910 - 0x002C393E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3910(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C3910: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_002C393E(); return; } /* je: equal / zero */

loc_002C391A: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) { sub_002C393E(); return; } /* je: equal / zero */

loc_002C3924: ;
    eax = MEM32(eax + 0x280);
    if (TEST_Z(eax, eax)) { sub_002C393E(); return; } /* je: equal / zero */

loc_002C392E: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_002C393E(); return; } /* jne: not equal / not zero */

loc_002C3935: ;
    if (CMP_NE(MEM8(eax + 0x14), 1)) { sub_002C393E(); return; } /* jne: not equal / not zero */

loc_002C393B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002C3950
 * Original: 0x002C3950 - 0x002C39B3 (99 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3950(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C3950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 4;
    ecx = esi;
    PUSH32(esp, 0); sub_002C43C0(); /* call 0x002C43C0 */

loc_002C395E: ;
    if (CMP_NE(eax, 1)) { sub_002C39B3(); return; } /* jne: not equal / not zero */

loc_002C3963: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    edi = 0x69A;
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002C3980: ;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = edi;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x480) = edi;
    edx = MEM32(esi + 0x568);
    esp = esp + 0x18;
    PUSH32(esp, esi);
    MEM32(edx + 0x484) = edi;
    PUSH32(esp, 0); sub_002C4950(); /* call 0x002C4950 */

loc_002C39AD: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C3A70
 * Original: 0x002C3A70 - 0x002C3C1F (431 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C3A70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = 3;
    ecx = esi;
    PUSH32(esp, 0); sub_002C43C0(); /* call 0x002C43C0 */

loc_002C3A7F: ;
    ebp = eax;
    ebx = 0; /* xor self */
    if (CMP_NE(ebp, 1)) goto loc_002C3AF8; /* jne: not equal / not zero */

loc_002C3A88: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    if (CMP_NE(MEM32(eax + 0x30), ebx)) goto loc_002C3AB2; /* jne: not equal / not zero */

loc_002C3A99: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (CMP_EQ(eax, ebx)) goto loc_002C3AB2; /* je: equal / zero */

loc_002C3AA7: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x60C) = eax;
    goto loc_002C3AB8;

loc_002C3AB2: ;
    MEM32(ecx + 0x60C) = ebx;

loc_002C3AB8: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    edi = 0x13;
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_002C3ACE: ;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x610) = 1;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x618) = 1;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x2D3) = 8;

loc_002C3AF8: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x618);
    eax--;
    if ((eax == 0)) goto loc_002C3C11; /* je: equal / zero */

loc_002C3B0B: ;
    eax--;
    if ((eax == 0)) goto loc_002C3BB1; /* je: equal / zero */

loc_002C3B12: ;
    eax--;
    if ((eax != 0)) goto loc_002C3C1B; /* jne: not equal / not zero */

loc_002C3B19: ;
    if (CMP_NE(ebp, ebx)) goto loc_002C3C1B; /* jne: not equal / not zero */

loc_002C3B21: ;
    xmm0 = MEMF(esi + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002C3C1B; /* jp: parity */

loc_002C3B3A: ;
    MEM8(ecx + 0x2D3) = LO8(ebx);
    if (CMP_EQ(MEM16(esi + 0x3AE), LO16(ebx))) goto loc_002C3B8A; /* je: equal / zero */

loc_002C3B49: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    edi = 0x49A;
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002C3B63: ;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x474) = edi;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x480) = edi;
    ecx = MEM32(esi + 0x568);
    esp = esp + 0x18;
    MEM32(ecx + 0x484) = edi;

loc_002C3B8A: ;
    edx = esi;
    PUSH32(esp, 0); sub_002C3F40(); /* call 0x002C3F40 */

loc_002C3B91: ;
    edx = MEM32(esi + 0x568);
    PUSH32(esp, 0x6D);
    PUSH32(esp, esi);
    eax = 5;
    MEM32(edx + 0x618) = ebx;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_002C3BAA: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002C3BB1: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0031A370(); /* call 0x0031A370 */

loc_002C3BB8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C3C1B; /* jne: not equal / not zero */

loc_002C3BBC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    edi = 0x498;
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002C3BD6: ;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = edi;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x480) = edi;
    edx = MEM32(esi + 0x568);
    esp = esp + 0x18;
    MEM32(edx + 0x484) = edi;
    eax = MEM32(esi + 0x568);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax + 0x618) = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002C3C11: ;
    MEM32(ecx + 0x618) = 2;

loc_002C3C1B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C3C20
 * Original: 0x002C3C20 - 0x002C3C98 (120 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C3C20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 1;
    ecx = esi;
    PUSH32(esp, 0); sub_002C43C0(); /* call 0x002C43C0 */

loc_002C3C2E: ;
    if (CMP_NE(eax, ebx)) { sub_002C3C98(); return; } /* jne: not equal / not zero */

loc_002C3C32: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    edx = MEM32(eax + 0x30);
    if (TEST_NZ(edx, edx)) goto loc_002C3C5E; /* jne: not equal / not zero */

loc_002C3C45: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_002C3C5E; /* je: equal / zero */

loc_002C3C53: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x60C) = eax;
    goto loc_002C3C68;

loc_002C3C5E: ;
    MEM32(ecx + 0x60C) = 0;

loc_002C3C68: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    edi = 0x13;
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_002C3C7E: ;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x610) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x61C) = ebx;
    g_seh_ebp = ebp; sub_002C3D0D(); return; /* tail jmp 0x002C3D0D */

}

/**
 * sub_002C3DA0
 * Original: 0x002C3DA0 - 0x002C3E4C (172 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C3DA0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x568);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    esi = 0x74D;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_002C3DC1: ;
    ebx = MEM32(ebx + 0x568);
    ecx = MEM32(ebx + 0x444);
    ecx = MEM32(ecx + 8);
    ecx = ecx - 4;
    if ((ecx == 0)) goto loc_002C3DDD; /* je: equal / zero */

loc_002C3DD5: ;
    ecx--;
    if ((ecx == 0)) goto loc_002C3E05; /* je: equal / zero */

loc_002C3DD8: ;
    ecx = ecx - 0x1D;
    if ((ecx != 0)) goto loc_002C3E46; /* jne: not equal / not zero */

loc_002C3DDD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 0x74C;
    if (TEST_Z(eax, eax)) goto loc_002C3E46; /* je: equal / zero */

loc_002C3DE6: ;
    eax = MEM32(eax + 0x1C);
    eax = MEM32(eax);
    if (CMP_EQ(eax, 2)) goto loc_002C3E21; /* je: equal / zero */

loc_002C3DF0: ;
    if (CMP_EQ(eax, 0x44)) goto loc_002C3E21; /* je: equal / zero */

loc_002C3DF5: ;
    if (CMP_NE(eax, 0x32)) goto loc_002C3E46; /* jne: not equal / not zero */

loc_002C3DFA: ;
    esi = 0x751;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002C3E05: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 0x750;
    if (TEST_Z(eax, eax)) goto loc_002C3E46; /* je: equal / zero */

loc_002C3E0E: ;
    edx = MEM32(eax + 0x1C);
    if (CMP_NE(MEM32(edx), 1)) goto loc_002C3E46; /* jne: not equal / not zero */

loc_002C3E16: ;
    esi = 0x751;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002C3E21: ;
    ebx = MEM32(ebx + 0x530);
    (void)0; /* cmp ebx, 1 - flags set for next jcc */
    esi = 0x74D;
    if (CMP_NE(ebx, 1)) goto loc_002C3E3C; /* jne: not equal / not zero */

loc_002C3E31: ;
    esi = 0x74E;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002C3E3C: ;
    if (CMP_NE(ebx, 2)) goto loc_002C3E46; /* jne: not equal / not zero */

loc_002C3E41: ;
    esi = 0x74F;

loc_002C3E46: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C3E50
 * Original: 0x002C3E50 - 0x002C3F3D (237 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C3E50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 8;
    ecx = esi;
    PUSH32(esp, 0); sub_002C43C0(); /* call 0x002C43C0 */

loc_002C3E5E: ;
    ebp = eax;
    if (CMP_EQ(ebp, 1)) goto loc_002C3E6A; /* je: equal / zero */

loc_002C3E65: ;
    if (CMP_NE(ebp, 3)) goto loc_002C3EDF; /* jne: not equal / not zero */

loc_002C3E6A: ;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x444);
    eax = 0; /* xor self */
    ecx = edi + 0x21C;
    /* nop */

loc_002C3E80: ;
    edx = MEM32(ecx);
    if (TEST_Z(edx, edx)) goto loc_002C3E8F; /* je: equal / zero */

loc_002C3E86: ;
    if (CMP_EQ(MEM32(edx + 0x1C), ebx)) goto loc_002C3F15; /* je: equal / zero */

loc_002C3E8F: ;
    eax++;
    ecx = ecx + 0x20;
    if (CMP_L(eax, 4)) goto loc_002C3E80; /* jl: less (signed <) */

loc_002C3E98: ;
    eax = 0; /* xor self */

loc_002C3E9A: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), 0)) goto loc_002C3EDE; /* je: equal / zero */

loc_002C3EA4: ;
    ecx = MEM32(eax + 0x1C);
    SET_LO8(eax, MEM8(ecx + 0x20));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C3EDE; /* jne: not equal / not zero */

loc_002C3EAE: ;
    eax = esi;
    PUSH32(esp, 0); sub_002C3DA0(); /* call 0x002C3DA0 */

loc_002C3EB5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    edi = eax;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002C3ECF: ;
    edx = MEM32(esi + 0x568);
    esp = esp + 0x18;
    MEM32(edx + 0x474) = edi;

loc_002C3EDE: ;
    POP32(esp, edi);

loc_002C3EDF: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002C3F3A; /* je: equal / zero */

loc_002C3EE9: ;
    if (CMP_EQ(ebp, 1)) goto loc_002C3F22; /* je: equal / zero */

loc_002C3EEE: ;
    if (CMP_EQ(ebp, 2)) goto loc_002C3F22; /* je: equal / zero */

loc_002C3EF3: ;
    if (CMP_NE(ebp, 3)) goto loc_002C3F3A; /* jne: not equal / not zero */

loc_002C3EF8: ;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(eax, MEM8(esi + 0x543));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(eax, LO8(eax) & LO8(edx));
    MEM8(esi + 0x543) = LO8(eax);
    esp += 4; return; /* ret */

loc_002C3F15: ;
    eax = eax + 0x10;
    eax = eax << 5;
    eax = eax + edi;
    goto loc_002C3E9A;

loc_002C3F22: ;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(eax, MEM8(esi + 0x543));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(esi + 0x543) = LO8(eax);

loc_002C3F3A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C3F40
 * Original: 0x002C3F40 - 0x002C3F73 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C3F40: ;
    eax = MEM32(edx + 0x568);
    ecx = MEM32(eax + 0x60C);
    if (TEST_Z(ecx, ecx)) goto loc_002C3F72; /* je: equal / zero */

loc_002C3F50: ;
    if (CMP_EQ(ecx, 0x13)) goto loc_002C3F72; /* je: equal / zero */

loc_002C3F55: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_002C3F72; /* je: equal / zero */

loc_002C3F5F: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x60C);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_002C3F71: ;
    POP32(esp, edi);

loc_002C3F72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C3F80
 * Original: 0x002C3F80 - 0x002C3FFD (125 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C3F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C3F80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0xB;
    ecx = esi;
    PUSH32(esp, 0); sub_002C43C0(); /* call 0x002C43C0 */

loc_002C3F8E: ;
    ebx = 1;
    if (CMP_NE(eax, ebx)) { sub_002C3FFD(); return; } /* jne: not equal / not zero */

loc_002C3F97: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    edx = MEM32(eax + 0x30);
    if (TEST_NZ(edx, edx)) goto loc_002C3FC3; /* jne: not equal / not zero */

loc_002C3FAA: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_002C3FC3; /* je: equal / zero */

loc_002C3FB8: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x60C) = eax;
    goto loc_002C3FCD;

loc_002C3FC3: ;
    MEM32(ecx + 0x60C) = 0;

loc_002C3FCD: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    edi = 0x13;
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_002C3FE3: ;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x610) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x614) = ebx;
    g_seh_ebp = ebp; sub_002C4054(); return; /* tail jmp 0x002C4054 */

}

/**
 * sub_002C4120
 * Original: 0x002C4120 - 0x002C4199 (121 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C4120(void)
{

loc_002C4120: ;
    edx = ZX16(MEM16(ecx + 0x3AE));
    MEM32(eax) = edx;
    edx = ZX16(MEM16(ecx + 0x3B0));
    MEM32(eax + 4) = edx;
    SET_LO8(edx, MEM8(ecx + 0xB4));
    MEM8(eax + 8) = LO8(edx);
    edx = MEM32(ecx + 0x568);
    edx = MEM32(edx + 0xBC);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x568);
    edx = MEM32(edx + 0x204);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x568);
    edx = MEM32(edx + 0x208);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x568);
    SET_LO8(edx, MEM8(edx + 0x210));
    MEM8(eax + 0x14) = LO8(edx);
    edx = MEM32(ecx + 0x568);
    SET_LO16(edx, MEM16(edx + 0x212));
    MEM16(eax + 0x16) = LO16(edx);
    ecx = MEM32(ecx + 0x568);
    edx = MEM32(ecx + 0x640);
    MEM32(eax + 0x1C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002C41A0
 * Original: 0x002C41A0 - 0x002C4227 (135 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C41A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C41A0: ;
    SET_LO16(edx, MEM16(eax));
    MEM16(ecx + 0x3AE) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(ecx + 0x3B0) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(ecx + 0xB4) = LO8(edx);
    edx = MEM32(ecx + 0x568);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    MEM32(edx + 0xBC) = esi;
    edx = MEM32(ecx + 0x568);
    esi = MEM32(eax + 0x1C);
    MEM32(edx + 0x640) = esi;
    edx = MEM32(eax + 0xC);
    if (TEST_Z(edx, edx)) goto loc_002C4225; /* je: equal / zero */

loc_002C41E4: ;
    edx = MEM32(ecx + 0x568);
    MEM32(edx + 0x204) = 0x10;
    edx = MEM32(ecx + 0x568);
    esi = MEM32(eax + 0x10);
    MEM32(edx + 0x20C) = esi;
    edx = MEM32(ecx + 0x568);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x14));
    MEM8(edx + 0x210) = LO8(ebx);
    ecx = MEM32(ecx + 0x568);
    SET_LO16(edx, MEM16(eax + 0x16));
    MEM16(ecx + 0x212) = LO16(edx);
    POP32(esp, ebx);

loc_002C4225: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C4230
 * Original: 0x002C4230 - 0x002C43B4 (388 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C4230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C4230: ;
    ecx = MEM32(0x777EC4);
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_002C43AF; /* jle: less or equal (signed <=) */

loc_002C4244: ;
    eax = 0x777EFC;
    PUSH32(esp, ebx);
    /* nop */

loc_002C4250: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_002C4262; /* je: equal / zero */

loc_002C4254: ;
    esi++;
    eax = eax + 0x40;
    if (CMP_L(esi, ecx)) goto loc_002C4250; /* jl: less (signed <) */

loc_002C425C: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_002C4262: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_002C43AE; /* je: equal / zero */

loc_002C426B: ;
    PUSH32(esp, ebp);
    eax = esp + 0xC;
    ecx = edi;
    PUSH32(esp, 0); sub_002C4120(); /* call 0x002C4120 */

loc_002C4277: ;
    esi = esi << 6;
    esi = esi + 0x777ED0;
    ebp = esi;
    SET_LO16(esi, MEM16(edi + 0x60));
    PUSH32(esp, 0xD);
    eax = ebp;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002C428F: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    esp = esp + 4;
    esi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C42B2; /* je: equal / zero */

loc_002C429C: ;
    eax = MEM32(edi + 0x568);
    esi = MEM32(eax + 0x444);
    MEM32(eax + 0x444) = 0;

loc_002C42B2: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002C42C9; /* je: equal / zero */

loc_002C42BC: ;
    eax = MEM32(eax + 4);
    MEM32(eax + 0x8B8) = 1;

loc_002C42C9: ;
    eax = ZX16(MEM16(edi + 0x60));
    ebx = ZX8(MEM8(edi + 0x250));
    PUSH32(esp, 0); sub_002B4F70(); /* call 0x002B4F70 */

loc_002C42D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002CC720(); /* call 0x002CC720 */

loc_002C42E9: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    esp = esp + 0x18;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x250) = LO8(ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C435E; /* je: equal / zero */

loc_002C42FA: ;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0x444);
    MEM32(eax + 0x528) = ecx;
    edx = MEM32(edi + 0x568);
    MEM32(edx + 0x444) = esi;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0x528);
    esi = MEM32(ecx + 0x284);
    if (TEST_Z(esi, esi)) goto loc_002C435E; /* je: equal / zero */

loc_002C432E: ;
    PUSH32(esp, 0); sub_001CA0C0(); /* call 0x001CA0C0 */

loc_002C4333: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C4348; /* jne: not equal / not zero */

loc_002C433C: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_002C4348: ;
    edx = MEM32(edi + 0x568);
    eax = MEM32(edx + 0x528);
    MEM32(eax + 0x284) = 0;

loc_002C435E: ;
    xmm1 = MEMF(ebp + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    ecx = edi;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_002F7480(); /* call 0x002F7480 */

loc_002C4375: ;
    eax = esp + 0xC;
    ecx = edi;
    PUSH32(esp, 0); sub_002C41A0(); /* call 0x002C41A0 */

loc_002C4380: ;
    ecx = MEM32(edi + 0x568);
    eax = MEM32(ecx + 0x640);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_002C43AE; /* je: equal / zero */

loc_002C4391: ;
    edx = ZX16(MEM16(edi + 0x60));
    MEM32(edx * 4 + 0x800408) = eax;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0); sub_0032D230(); /* call 0x0032D230 */

loc_002C43A5: ;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0); sub_002B4F70(); /* call 0x002B4F70 */

loc_002C43AE: ;
    POP32(esp, ebx);

loc_002C43AF: ;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002C43C0
 * Original: 0x002C43C0 - 0x002C43EA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C43C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C43C0: ;
    edx = MEM32(ecx + 0x568);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x444);
    ecx = MEM32(edi + 0x280);
    SET_LO8(edx, MEM8(ecx + ebx));
    ecx = ecx + ebx;
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, MEM8(ecx + 0xC));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_002C43EA(); return; } /* je: equal / zero */

loc_002C43E2: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    eax++;
    g_seh_ebp = ebp; sub_002C43F3(); return; /* tail jmp 0x002C43F3 */

}

/**
 * sub_002C4430
 * Original: 0x002C4430 - 0x002C4669 (569 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C4430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C4430: ;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = 5;
    ecx = esi;
    PUSH32(esp, 0); sub_002C43C0(); /* call 0x002C43C0 */

loc_002C4442: ;
    edi = eax;
    eax = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x524);
    ebx = 1;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0xC) = eax;
    ebp = 0x667;
    if (CMP_NE(edi, ebx)) { sub_002C4669(); return; } /* jne: not equal / not zero */

loc_002C446A: ;
    if (TEST_NZ(eax, eax)) goto loc_002C45CC; /* jne: not equal / not zero */

loc_002C4472: ;
    eax = MEM32(0x84A5F8);
    edi = 0; /* xor self */
    eax = eax + 0x908;
    edx = 4;

loc_002C4483: ;
    ecx = eax + -2312;
    if (CMP_EQ(esi, ecx)) goto loc_002C44B3; /* je: equal / zero */

loc_002C448D: ;
    if (CMP_NE(MEM32(eax + -2212), ebx)) goto loc_002C44B3; /* jne: not equal / not zero */

loc_002C4495: ;
    ecx = MEM32(eax + -1744);
    ebp = MEM32(esi + 0x238);
    ecx = MEM32(ecx);
    if (CMP_EQ(ecx, MEM32(ebp))) goto loc_002C44B3; /* je: equal / zero */

loc_002C44A8: ;
    ecx = eax + -2312;
    MEM32(esp + edi * 4 + 0x14) = ecx;
    edi++;

loc_002C44B3: ;
    ecx = eax + -568;
    if (CMP_EQ(esi, ecx)) goto loc_002C44DF; /* je: equal / zero */

loc_002C44BD: ;
    if (CMP_NE(MEM32(eax + -468), ebx)) goto loc_002C44DF; /* jne: not equal / not zero */

loc_002C44C5: ;
    ebp = MEM32(eax);
    ecx = MEM32(esi + 0x238);
    ebp = MEM32(ebp);
    if (CMP_EQ(ebp, MEM32(ecx))) goto loc_002C44DF; /* je: equal / zero */

loc_002C44D4: ;
    ecx = eax + -568;
    MEM32(esp + edi * 4 + 0x14) = ecx;
    edi++;

loc_002C44DF: ;
    ecx = eax + 0x498;
    if (CMP_EQ(esi, ecx)) goto loc_002C450E; /* je: equal / zero */

loc_002C44E9: ;
    if (CMP_NE(MEM32(eax + 0x4FC), ebx)) goto loc_002C450E; /* jne: not equal / not zero */

loc_002C44F1: ;
    ebx = MEM32(eax + 0x6D0);
    ebx = MEM32(ebx);
    ebp = MEM32(esi + 0x238);
    (void)0; /* cmp ebx, MEM32(ebp) - flags set for next jcc */
    ebx = 1;
    if (CMP_EQ(ebx, MEM32(ebp))) goto loc_002C450E; /* je: equal / zero */

loc_002C4509: ;
    MEM32(esp + edi * 4 + 0x14) = ecx;
    edi++;

loc_002C450E: ;
    ecx = eax + 0xB68;
    if (CMP_EQ(esi, ecx)) goto loc_002C453D; /* je: equal / zero */

loc_002C4518: ;
    if (CMP_NE(MEM32(eax + 0xBCC), ebx)) goto loc_002C453D; /* jne: not equal / not zero */

loc_002C4520: ;
    ebx = MEM32(eax + 0xDA0);
    ebx = MEM32(ebx);
    ebp = MEM32(esi + 0x238);
    (void)0; /* cmp ebx, MEM32(ebp) - flags set for next jcc */
    ebx = 1;
    if (CMP_EQ(ebx, MEM32(ebp))) goto loc_002C453D; /* je: equal / zero */

loc_002C4538: ;
    MEM32(esp + edi * 4 + 0x14) = ecx;
    edi++;

loc_002C453D: ;
    eax = eax + 0x1B40;
    edx--;
    if ((edx != 0)) goto loc_002C4483; /* jne: not equal / not zero */

loc_002C4549: ;
    if (TEST_NZ(edi, edi)) goto loc_002C4585; /* jne: not equal / not zero */

loc_002C454D: ;
    eax = MEM32(esi + 0x238);
    eax = MEM32(eax);
    if (CMP_NE(eax, ebx)) goto loc_002C455D; /* jne: not equal / not zero */

loc_002C4559: ;
    eax = 0; /* xor self */
    goto loc_002C456A;

loc_002C455D: ;
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    edx = edx + edx + 1;
    eax = edx;

loc_002C456A: ;
    PUSH32(esp, 0); sub_00292A90(); /* call 0x00292A90 */

loc_002C456F: ;
    ecx = MEM32(esi + 0x568);
    eax = eax << 6;
    eax = eax + 0x777ED0;
    MEM32(ecx + 0x524) = eax;
    goto loc_002C45C7;

loc_002C4585: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C458A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edx = MEM32(esp + edx * 4 + 0x14);
    eax = MEM32(edx + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x51C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C45B5; /* je: equal / zero */

loc_002C45A1: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(eax + 0x520);
    MEM32(edx + 0x524) = eax;
    goto loc_002C45C7;

loc_002C45B5: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(eax + 0x3F4);
    MEM32(ecx + 0x524) = edx;

loc_002C45C7: ;
    ebp = 0x667;

loc_002C45CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    edx = ebp;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002C45E4: ;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x474) = ebp;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x480) = ebp;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x484) = ebp;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    edx = MEM32(eax + 0x30);
    esp = esp + 0x18;
    if (TEST_NZ(edx, edx)) goto loc_002C4637; /* jne: not equal / not zero */

loc_002C461E: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_002C4637; /* je: equal / zero */

loc_002C462C: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x60C) = eax;
    goto loc_002C4641;

loc_002C4637: ;
    MEM32(ecx + 0x60C) = 0;

loc_002C4641: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    edi = 0x13;
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_002C4657: ;
    edx = MEM32(esi + 0x568);
    edi = MEM32(esp + 0x10);
    MEM8(edx + 0x610) = LO8(ebx);
    g_seh_ebp = ebp; sub_002C46BE(); return; /* tail jmp 0x002C46BE */

}

/**
 * sub_002C47B0
 * Original: 0x002C47B0 - 0x002C48EC (316 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C47B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C47B0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002C4814; /* je: equal / zero */

loc_002C47BF: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_002C4814; /* je: equal / zero */

loc_002C47C9: ;
    ecx = MEM32(ecx + 0x280);
    SET_LO8(edx, MEM8(ecx + 5));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002C4814; /* je: equal / zero */

loc_002C47D6: ;
    ecx = MEM32(eax + 0x520);
    if (TEST_NZ(ecx, ecx)) goto loc_002C47EA; /* jne: not equal / not zero */

loc_002C47E0: ;
    ecx = MEM32(eax + 0x3F4);
    if (TEST_Z(ecx, ecx)) goto loc_002C47F7; /* je: equal / zero */

loc_002C47EA: ;
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002C4230(); /* call 0x002C4230 */

loc_002C47F4: ;
    esp = esp + 4;

loc_002C47F7: ;
    edx = MEM32(edi + 0x568);
    MEM8(edx + 0x51C) = 0;
    eax = MEM32(edi + 0x568);
    MEM32(eax + 0x524) = 0;

loc_002C4814: ;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002C48EA; /* je: equal / zero */

loc_002C4822: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_002C48EA; /* je: equal / zero */

loc_002C482F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x444);
    if (TEST_Z(ebp, ebp)) goto loc_002C48E9; /* je: equal / zero */

loc_002C483E: ;
    eax = MEM32(ebp + 0x280);
    SET_LO8(ecx, MEM8(eax + 4));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C4853; /* je: equal / zero */

loc_002C484C: ;
    esi = 4;
    goto loc_002C488D;

loc_002C4853: ;
    SET_LO8(ecx, MEM8(eax + 5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C4861; /* je: equal / zero */

loc_002C485A: ;
    esi = 5;
    goto loc_002C488D;

loc_002C4861: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C4877; /* je: equal / zero */

loc_002C4868: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C48E8; /* je: equal / zero */

loc_002C4870: ;
    esi = 8;
    goto loc_002C488D;

loc_002C4877: ;
    SET_LO8(ecx, MEM8(eax + 6));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C48E8; /* je: equal / zero */

loc_002C487E: ;
    if (CMP_BE(MEM16(edi + 0x3AE), 0)) goto loc_002C48E8; /* jbe: below or equal (unsigned <=) */

loc_002C4888: ;
    esi = 6;

loc_002C488D: ;
    eax = 0; /* xor self */
    edx = ebp + 0x21C;

loc_002C4895: ;
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_002C48A0; /* je: equal / zero */

loc_002C489B: ;
    if (CMP_EQ(MEM32(ecx + 0x1C), esi)) goto loc_002C48AD; /* je: equal / zero */

loc_002C48A0: ;
    eax++;
    edx = edx + 0x20;
    if (CMP_L(eax, 4)) goto loc_002C4895; /* jl: less (signed <) */

loc_002C48A9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002C48AD: ;
    esi = eax + 0x10;
    esi = esi << 5;
    esi = esi + ebp;
    if ((esi == 0)) goto loc_002C48E8; /* je: equal / zero */

loc_002C48B7: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00330920(); /* call 0x00330920 */

loc_002C48C1: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002C48CA: ;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0x444);
    esi = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 0x280);
    eax = MEM32(esi + 0x1C);
    SET_LO8(ecx, MEM8(esi + 4));
    MEM8(edx + eax) = LO8(ecx);

loc_002C48E8: ;
    POP32(esp, esi);

loc_002C48E9: ;
    POP32(esp, ebp);

loc_002C48EA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C48F0
 * Original: 0x002C48F0 - 0x002C494C (92 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C48F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C48F0: ;
    if (TEST_Z(eax, eax)) goto loc_002C494B; /* je: equal / zero */

loc_002C48F4: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002C494B; /* je: equal / zero */

loc_002C48FE: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_002C494B; /* je: equal / zero */

loc_002C4907: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x444);
    if (TEST_Z(esi, esi)) goto loc_002C494A; /* je: equal / zero */

loc_002C4912: ;
    if (TEST_Z(edi, edi)) goto loc_002C494A; /* je: equal / zero */

loc_002C4916: ;
    eax = 0; /* xor self */
    edx = esi + 0x21C;
    edi = edi;

loc_002C4920: ;
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_002C492B; /* je: equal / zero */

loc_002C4926: ;
    if (CMP_EQ(MEM32(ecx + 0x1C), edi)) goto loc_002C4936; /* je: equal / zero */

loc_002C492B: ;
    eax++;
    edx = edx + 0x20;
    if (CMP_L(eax, 4)) goto loc_002C4920; /* jl: less (signed <) */

loc_002C4934: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C4936: ;
    eax = eax + 0x10;
    eax = eax << 5;
    eax = eax + esi;
    if ((eax == 0)) goto loc_002C494A; /* je: equal / zero */

loc_002C4940: ;
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00330920(); /* call 0x00330920 */

loc_002C494A: ;
    POP32(esp, esi);

loc_002C494B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C4950
 * Original: 0x002C4950 - 0x002C49CE (126 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C4950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C4950: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_NE(MEM32(ebp + 0x64), 0x35)) { sub_002C49CE(); return; } /* jne: not equal / not zero */

loc_002C495B: ;
    eax = MEM32(ebp + 0x68);
    (void)0; /* cmp eax, 0xE8 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0xE8)) goto loc_002C496F; /* je: equal / zero */

loc_002C4968: ;
    if (CMP_NE(eax, 0xDE)) goto loc_002C49AA; /* jne: not equal / not zero */

loc_002C496F: ;
    eax = MEM32(ebp + 0x570);
    if (TEST_Z(eax, eax)) goto loc_002C49AA; /* je: equal / zero */

loc_002C4979: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x1EC);
    esi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_002C49AA; /* jle: less or equal (signed <=) */

loc_002C4986: ;
    edi = eax + 0x1F0;
    /* nop */

loc_002C4990: ;
    ecx = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_002C499F; /* je: equal / zero */

loc_002C4996: ;
    PUSH32(esp, 0); sub_002C3860(); /* call 0x002C3860 */

loc_002C499B: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C49BC; /* jne: not equal / not zero */

loc_002C499F: ;
    esi++;
    edi = edi + 0xB0;
    if (CMP_L(esi, ebx)) goto loc_002C4990; /* jl: less (signed <) */

loc_002C49AA: ;
    ecx = MEM32(ebp + 0x568);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM8(ecx + 0x624) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002C49BC: ;
    eax = MEM32(ebp + 0x568);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM8(eax + 0x624) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C49F0
 * Original: 0x002C49F0 - 0x002C4A1E (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C49F0(void)
{
    float xmm0;

loc_002C49F0: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, ecx);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002C5CF0(); /* call 0x002C5CF0 */

loc_002C4A18: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002C4A20
 * Original: 0x002C4A20 - 0x002C4AE3 (195 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C4A20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_002C4A20: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x10);
    xmm2 = MEMF(edx); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm2, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(0x7FAAB8) = esi;
    if (1 /* jp after test - parity */) goto loc_002C4A4A; /* jp: parity */

loc_002C4A42: ;
    xmm2 = MEMF(0x648D54); /* movss */

loc_002C4A4A: ;
    eax = ZX16(MEM16(edx + 6));
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / xmm2; /* divss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(ecx + 0x1CC); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x1D0); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_002C4AC1; /* jne: not equal / not zero */

loc_002C4A9A: ;
    /* comiss xmm3, MEMF(ecx + 0xE8) - sets EFLAGS */
    if ((xmm3 > MEMF(ecx + 0xE8))) goto loc_002C4AC1; /* ja: above (unsigned >) */

loc_002C4AA3: ;
    xmm2 = MEMF(ecx + 0x1CC); /* movss */
    xmm2 = xmm2 - MEMF(0x7FA210); /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */

loc_002C4AC1: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_002C4AC6: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(esi + 0x60));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    esi = ecx + eax + 0x20;
    PUSH32(esp, 0); sub_001DFB00(); /* call 0x001DFB00 */

loc_002C4AE1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C4AF0
 * Original: 0x002C4AF0 - 0x002C4CF5 (517 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C4AF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C4AF0: ;
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    ecx = MEM32(ebp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    PUSH32(esp, esi);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(0x7FAAB8) = edi;
    if (1 /* jp after test - parity */) goto loc_002C4B1C; /* jp: parity */

loc_002C4B14: ;
    xmm0 = MEMF(0x648D54); /* movss */

loc_002C4B1C: ;
    eax = ZX16(MEM16(ecx + 6));
    xmm2 = MEMF(0x648D14); /* movss */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esp + 0x18));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(ebp + 0x1CC); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C4B63; /* je: equal / zero */

loc_002C4B55: ;
    xmm0 = MEMF(0x648EBC); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_002C4B63: ;
    xmm0 = MEMF(ebp + 0x1D0); /* movss */
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_002C4BA9; /* jne: not equal / not zero */

loc_002C4B82: ;
    /* comiss xmm3, MEMF(ebp + 0xE8) - sets EFLAGS */
    if ((xmm3 > MEMF(ebp + 0xE8))) goto loc_002C4BA9; /* ja: above (unsigned >) */

loc_002C4B8B: ;
    xmm0 = MEMF(ebp + 0x1CC); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA210); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_002C4BA9: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_002C4BAE: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(edi + 0x60));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    esi = ecx + eax + 0x20;
    PUSH32(esp, 0); sub_001DFB00(); /* call 0x001DFB00 */

loc_002C4BC9: ;
    eax = MEM32(ebp + 0x1E4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FDBD8) = 1;
    if (TEST_Z(eax, eax)) goto loc_002C4CF1; /* je: equal / zero */

loc_002C4BE1: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    goto loc_002C4BF0;

    /* nop */
    /* nop */

loc_002C4BF0: ;
    ecx = ZX8(MEM8(edi + 0x24C));
    edx = MEM32(ebp + 0x1E4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, MEMF(ecx + edx) - sets EFLAGS */
    eax = ecx + edx;
    if ((xmm0 < MEMF(ecx + edx))) goto loc_002C4CF0; /* jb: below (unsigned <) */

loc_002C4C13: ;
    xmm0 = MEMF(0x64941C); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) goto loc_002C4CD7; /* jbe: below or equal (unsigned <=) */

loc_002C4C24: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, MEM8(eax + 4));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002C4C3F; /* je: equal / zero */

loc_002C4C2B: ;
    esi = 0x7477C8;

loc_002C4C30: ;
    SET_LO8(eax, MEM8(esi));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C4C38; /* jne: not equal / not zero */

loc_002C4C36: ;
    SET_LO8(edx, 0); /* xor self */

loc_002C4C38: ;
    if (CMP_EQ(LO8(edx), LO8(eax))) goto loc_002C4C3F; /* je: equal / zero */

loc_002C4C3C: ;
    esi++;
    goto loc_002C4C30;

loc_002C4C3F: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002C4CD1; /* je: equal / zero */

loc_002C4C47: ;
    eax = MEM32(ebp + 0x1E4);
    ecx = MEM32(ecx + eax + 8);
    MEM32(0x7FDBF8) = ecx;
    ecx = ZX8(MEM8(edi + 0x24C));
    eax = MEM32(ebp + 0x1E4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    esi = MEM32(eax + ecx + 0xC);
    xmm0 = MEMF(0x7FDBF8); /* movss */
    eax = eax + ecx;
    (void)0; /* cmp LO8(edx), 0xB3 - flags set for next jcc */
    MEM32(0x7FDBF4) = esi;
    esi = MEM32(eax + 0x10);
    MEM32(0x7FDBF0) = esi;
    esi = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x18);
    MEM32(0x7FDBEC) = esi;
    esi = MEM32(edi + 0xA4);
    MEM32(0x7FDBE8) = eax;
    MEMF(0x7FDBFC) = xmm0; /* movss */
    if (CMP_AE(LO8(edx), 0xB3)) goto loc_002C4CC9; /* jae: above or equal (unsigned >=) */

loc_002C4CA8: ;
    eax = MEM32(ebp + 0x1E4);
    xmm0 = MEMF(ecx + eax); /* movss */
    ecx = ZX8(LO8(edx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEMF(0x84A628) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x7479D8), _icall_esp); /* indirect call */
    }

loc_002C4CC6: ;
    esp = esp + 4;

loc_002C4CC9: ;
    if (CMP_NE(esi, MEM32(edi + 0xA4))) goto loc_002C4CE9; /* jne: not equal / not zero */

loc_002C4CD1: ;
    MEM8(edi + 0x24C) = MEM8(edi + 0x24C) + 1;

loc_002C4CD7: ;
    eax = MEM32(0x7FDBD8);
    if (TEST_NZ(eax, eax)) goto loc_002C4BF0; /* jne: not equal / not zero */

loc_002C4CE4: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002C4CE9: ;
    MEM8(0x84A5BD) = 1;

loc_002C4CF0: ;
    POP32(esp, ebx);

loc_002C4CF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C4D00
 * Original: 0x002C4D00 - 0x002C4DDC (220 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C4D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C4D00: ;
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x10);
    xmm2 = MEMF(ecx); /* movss */
    /* ucomiss xmm2, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(0x7FAAB8) = ebp;
    if (1 /* jp after test - parity */) goto loc_002C4D2C; /* jp: parity */

loc_002C4D24: ;
    xmm2 = MEMF(0x648D54); /* movss */

loc_002C4D2C: ;
    eax = ZX16(MEM16(ecx + 6));
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / xmm2; /* divss */
    xmm2 = MEMF(edi + 0x1D0); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(edi + 0x1CC); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_002C4DA4; /* jne: not equal / not zero */

loc_002C4D7D: ;
    /* comiss xmm3, MEMF(edi + 0xE8) - sets EFLAGS */
    if ((xmm3 > MEMF(edi + 0xE8))) goto loc_002C4DA4; /* ja: above (unsigned >) */

loc_002C4D86: ;
    xmm2 = MEMF(edi + 0x1CC); /* movss */
    xmm2 = xmm2 - MEMF(0x7FA210); /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */

loc_002C4DA4: ;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_002C4DA9: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(ebp + 0x60));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    esi = ecx + eax + 0x20;
    PUSH32(esp, 0); sub_001DFB00(); /* call 0x001DFB00 */

loc_002C4DC4: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002C4DDC(); return; } /* je: equal / zero */

loc_002C4DCC: ;
    xmm1 = MEMF(0x648EBC); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_002C4DE2(); return; /* tail jmp 0x002C4DE2 */

}

/**
 * sub_002C4EA0
 * Original: 0x002C4EA0 - 0x002C4EF5 (85 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C4EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C4EA0: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    esp = esp - 0x110;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x124);
    ebp = MEM32(esi + 0xA4);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x124);
    MEM32(0x7FAAB8) = esi;
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_002C4EF5(); return; } /* jne: not equal / not zero */

loc_002C4ECF: ;
    eax = ZX16(MEM16(edi + 0x1E8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x7478E8), _icall_esp); /* indirect call */
    }

loc_002C4EDE: ;
    eax = MEM32(esi + 0x64);
    esp = esp + 4;
    if (CMP_NE(eax, ebx)) { sub_002C4EF5(); return; } /* jne: not equal / not zero */

loc_002C4EE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_002C5070
 * Original: 0x002C5070 - 0x002C5100 (144 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5070(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C5070: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi + 0x3C8);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(0x7FAAB8) = edi;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(ecx, eax)) goto loc_002C50A8; /* jne: not equal / not zero */

loc_002C5096: ;
    ecx = MEM32(edi + 0x3CC);
    MEM32(edi + 0x3C8) = ecx;
    MEM32(edi + 0x3CC) = eax;

loc_002C50A8: ;
    (void)0; /* cmp MEM8(edi + 0x3C1), LO8(eax) - flags set for next jcc */
    esi = 0x5A0350;
    if (CMP_NE(MEM8(edi + 0x3C1), LO8(eax))) goto loc_002C50B7; /* jne: not equal / not zero */

loc_002C50B5: ;
    esi = edi;

loc_002C50B7: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ebx = esp + 0x18;
    PUSH32(esp, 0); sub_00089BF0(); /* call 0x00089BF0 */

loc_002C50CA: ;
    ecx = ZX8(MEM8(edi + 0x3A8));
    edx = MEM32(edi + ecx * 4 + 0x4EC);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x3C4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00036C00(); /* call 0x00036C00 */

loc_002C50F6: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
